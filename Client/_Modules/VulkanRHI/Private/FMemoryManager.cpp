// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 33

// FMemoryManager @ 145b00150

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FMemoryManager * __thiscall
VulkanRHI::FMemoryManager::FMemoryManager(FMemoryManager *this,FVulkanDevice *param_1)

{
  this->Device = param_1;
  this->DeviceMemoryManager = &param_1->DeviceMemoryManager;
  (this->ResourceTypeHeaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResourceTypeHeaps).ArrayNum = 0;
  (this->ResourceTypeHeaps).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->UsedFreeBufferAllocationsLock,4000);
  this->UsedBufferAllocations[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UsedBufferAllocations[0].ArrayNum = 0;
  this->UsedBufferAllocations[0].ArrayMax = 0;
  this->UsedBufferAllocations[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UsedBufferAllocations[1].ArrayNum = 0;
  this->UsedBufferAllocations[1].ArrayMax = 0;
  this->UsedBufferAllocations[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UsedBufferAllocations[2].ArrayNum = 0;
  this->UsedBufferAllocations[2].ArrayMax = 0;
  this->UsedBufferAllocations[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UsedBufferAllocations[3].ArrayNum = 0;
  this->UsedBufferAllocations[3].ArrayMax = 0;
  this->UsedBufferAllocations[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UsedBufferAllocations[4].ArrayNum = 0;
  this->UsedBufferAllocations[4].ArrayMax = 0;
  this->UsedBufferAllocations[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UsedBufferAllocations[5].ArrayNum = 0;
  this->UsedBufferAllocations[5].ArrayMax = 0;
  this->UsedBufferAllocations[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UsedBufferAllocations[6].ArrayNum = 0;
  this->UsedBufferAllocations[6].ArrayMax = 0;
  this->UsedBufferAllocations[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->UsedBufferAllocations[7].ArrayNum = 0;
  this->UsedBufferAllocations[7].ArrayMax = 0;
  this->FreeBufferAllocations[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FreeBufferAllocations[0].ArrayNum = 0;
  this->FreeBufferAllocations[0].ArrayMax = 0;
  this->FreeBufferAllocations[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FreeBufferAllocations[1].ArrayNum = 0;
  this->FreeBufferAllocations[1].ArrayMax = 0;
  this->FreeBufferAllocations[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FreeBufferAllocations[2].ArrayNum = 0;
  this->FreeBufferAllocations[2].ArrayMax = 0;
  this->FreeBufferAllocations[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FreeBufferAllocations[3].ArrayNum = 0;
  this->FreeBufferAllocations[3].ArrayMax = 0;
  this->FreeBufferAllocations[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FreeBufferAllocations[4].ArrayNum = 0;
  this->FreeBufferAllocations[4].ArrayMax = 0;
  this->FreeBufferAllocations[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FreeBufferAllocations[5].ArrayNum = 0;
  this->FreeBufferAllocations[5].ArrayMax = 0;
  this->FreeBufferAllocations[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FreeBufferAllocations[6].ArrayNum = 0;
  this->FreeBufferAllocations[6].ArrayMax = 0;
  this->FreeBufferAllocations[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->FreeBufferAllocations[7].ArrayNum = 0;
  this->FreeBufferAllocations[7].ArrayMax = 0;
  (this->AllBufferAllocationsLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->AllBufferAllocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllBufferAllocations).ArrayNum = 0;
  (this->AllBufferAllocations).ArrayMax = 0;
  this->AllBufferAllocationsFreeListHead = -1;
  this->PendingEvictBytes = 0;
  this->bIsEvicting = false;
  this->bWantEviction = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->UBAllocations,4000);
  (this->UBAllocations).PendingFree.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UBAllocations).PendingFree.ArrayNum = 0;
  (this->UBAllocations).PendingFree.ArrayMax = 0;
  (this->UBAllocations).Peak = 0;
  return this;
}

// ~FMemoryManager @ 145b04ed0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall VulkanRHI::FMemoryManager::~FMemoryManager(FMemoryManager *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar7;
  
  Deinit(this);
  DestructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int>
            ((FUBPendingFree *)(this->UBAllocations).PendingFree.AllocatorInstance.Data,
             (this->UBAllocations).PendingFree.ArrayNum);
  pFVar1 = (this->UBAllocations).PendingFree.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UBAllocations);
  pFVar1 = (this->AllBufferAllocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar7 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
           &this->AllBufferAllocationsLock;
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)pTVar7);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)pTVar7);
  }
  lVar5 = 8;
  lVar6 = 8;
  do {
    pFVar1 = pTVar7[-1].AllocatorInstance.Data;
    pTVar7 = pTVar7 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  pTVar7 = this->FreeBufferAllocations;
  do {
    pFVar1 = pTVar7[-1].AllocatorInstance.Data;
    pTVar7 = pTVar7 + -1;
    lVar5 = lVar5 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar5 != 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->UsedFreeBufferAllocationsLock);
  pFVar1 = (this->ResourceTypeHeaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 145b06260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FResourceHeapStats *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Str;
  size_t sVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  ulong64 uVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_208 [32];
  FString local_190;
  _Bxty local_180;
  ulonglong local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pwVar5 = (wchar_t *)0x0;
  if (param_2->MemoryFlags == 0) {
    pwVar3 = L"";
  }
  else {
    _Str = string_VkMemoryPropertyFlags
                     ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_180,
                      param_2->MemoryFlags);
    if (0xf < (_Str->_Mypair)._Myval2._Myres) {
      _Str = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (_Str->_Mypair)._Myval2._Bx._Ptr;
    }
    local_158._padding_ = 0;
    if (_Str == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_158.StringLength = 0;
      local_158.Ptr = (wchar_t *)0x0;
      pwVar3 = pwVar5;
      pwVar5 = (wchar_t *)&DAT_00000003;
    }
    else {
      sVar1 = strlen((char *)_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,(char *)_Str,(int)sVar1,Yes);
      pwVar3 = local_158.Ptr;
      pwVar5 = (wchar_t *)&DAT_00000003;
    }
  }
  ::FString::FString(&local_190,pwVar3);
  if ((((ulonglong)pwVar5 & 2) != 0) &&
     (pwVar5 = (wchar_t *)(ulonglong)((uint)pwVar5 & 0xfffffffd),
     (void *)local_158._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_158._padding_);
  }
  if ((((ulonglong)pwVar5 & 1) != 0) && (0xf < local_168)) {
    uVar4 = local_168 + 1;
    uVar2 = local_180._Ptr;
    if (0xfff < uVar4) {
      uVar2 = *(undefined8 *)(local_180._Ptr + -8);
      uVar4 = local_168 + 0x28;
      if ((char *)0x1f < local_180._Ptr + (-8 - uVar2)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar2,uVar4);
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145b071b0

/* WARNING: Removing unreachable block (ram,0x000145b0743f) */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_2>::operator()
          (void *this,FString *param_1,FString *param_2,FVulkanSubresourceAllocator *param_3)

{
  EVulkanAllocationType *pEVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  undefined1 local_res20 [8];
  
  uVar5 = 0;
  iVar3 = (param_3->FreeList).ArrayNum;
  pFVar6 = (param_3->FreeList).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  uVar7 = uVar5;
  while( true ) {
    if ((param_3->FreeList).ArrayNum != iVar3) {
      `TCheckedPointerIterator<VulkanRHI::FRange,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar6 == pFVar2) break;
    uVar4 = *(uint *)(pFVar6 + 4);
    if (*(uint *)(pFVar6 + 4) < (uint)uVar7) {
      uVar4 = (uint)uVar7;
    }
    pFVar6 = pFVar6 + 8;
    uVar7 = (ulonglong)uVar4;
  }
  pEVar1 = &param_3->Type;
  if (param_3 <= pEVar1) {
    do {
      uVar5 = uVar5 + 8;
      param_3 = (FVulkanSubresourceAllocator *)(param_3->MemoryUsed + 8);
    } while (uVar5 != 8);
  }
  for (; param_3 != (FVulkanSubresourceAllocator *)pEVar1;
      param_3 = (FVulkanSubresourceAllocator *)(param_3->MemoryUsed + 1)) {
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  return;
}

// operator() @ 145b07a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
`VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_4>::operator()
          (void *this,FString *param_1,
          TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Str;
  size_t sVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  uint uVar8;
  FVulkanSubresourceAllocator *this_00;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStackY_288 [32];
  uint local_1e8;
  undefined1 local_1e4 [4];
  uint local_1e0;
  uint local_1dc;
  FScriptContainerElement *local_1d8;
  FVulkanSubresourceAllocator *local_1d0;
  FString *local_1c8;
  longlong *local_1c0;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *local_1b8;
  FScriptContainerElement *local_1b0;
  FString local_1a8;
  FString local_198;
  _Bxty local_188;
  ulonglong local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar10 = (param_2->AllocatorInstance).Data;
  uVar8 = 0;
  local_1dc = param_2->ArrayNum;
  uVar3 = (ulonglong)(int)local_1dc;
  local_1e8 = 0;
  local_1b0 = pFVar10 + uVar3 * 8;
  local_1e0 = 0;
  local_1c8 = param_1;
  local_1c0 = this;
  local_1b8 = param_2;
  uVar9 = uVar8;
  while( true ) {
    pFVar1 = local_1b0;
    pwVar6 = (wchar_t *)0x0;
    local_1d8 = pFVar10;
    if (local_1b8->ArrayNum != (int)uVar3) {
      `TCheckedPointerIterator<VulkanRHI::FVulkanSubresourceAllocator_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1e4);
    }
    if (pFVar10 == pFVar1) break;
    this_00 = *(FVulkanSubresourceAllocator **)pFVar10;
    uVar5 = this_00->MemoryPropertyFlags;
    local_1d0 = this_00;
    if ((uVar5 == 0) &&
       (uVar5 = *(uint *)(*(longlong *)this + 4 + (ulonglong)this_00->MemoryTypeIndex * 8),
       uVar5 == 0)) {
      pwVar6 = L"";
    }
    else {
      local_1e8 = 3;
      uVar9 = 3;
      _Str = string_VkMemoryPropertyFlags
                       ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        &local_188,uVar5);
      if (0xf < (_Str->_Mypair)._Myval2._Myres) {
        _Str = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (_Str->_Mypair)._Myval2._Bx._Ptr;
      }
      local_168._padding_ = 0;
      if (_Str == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        local_168.StringLength = 0;
        local_168.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar2 = strlen((char *)_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,(char *)_Str,(int)sVar2,Yes);
        pwVar6 = local_168.Ptr;
      }
    }
    ::FString::FString(&local_198,pwVar6);
    if (((uVar9 & 2) != 0) &&
       (local_1e8 = uVar9 & 0xfffffffd, uVar9 = local_1e8,
       (void *)local_168._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (((uVar9 & 1) != 0) && (local_1e8 = uVar9 & 0xfffffffe, uVar9 = local_1e8, 0xf < local_170))
    {
      uVar7 = local_170 + 1;
      uVar4 = local_188._Ptr;
      if (0xfff < uVar7) {
        uVar4 = *(undefined8 *)(local_188._Ptr + -8);
        uVar7 = local_170 + 0x28;
        if ((char *)0x1f < local_188._Ptr + (-8 - uVar4)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)uVar4,uVar7);
    }
    if ((3 < (byte)LogVulkanRHI._0_1_) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
       3 < (byte)LogVulkanRHI._0_1_)) {
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaBufferOther);
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaBufferStaging);
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaBufferUAV);
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaImageOther);
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaImageRenderTarget);
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaFrameTempBuffer);
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaMultiBuffer);
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaUniformBuffer);
      VulkanRHI::VulkanAllocationMetaTypeToString(EVulkanAllocationMetaUnknown);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      this = local_1c0;
      param_1 = local_1c8;
      this_00 = local_1d0;
      pFVar10 = local_1d8;
      uVar8 = local_1e0;
      uVar9 = local_1e8;
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    uVar8 = uVar8 + 1;
    local_1e0 = uVar8;
    ::FString::PrintfImpl(&local_1a8,L"%s %d");
    __l2::<lambda_2>::operator()(*(void **)((longlong)this + 8),&local_1a8,&local_198,this_00);
    VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap(this_00);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    pFVar10 = pFVar10 + 8;
    uVar3 = (ulonglong)local_1dc;
  }
  pFVar10 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  return;
}

// AllocUniformBuffer @ 145b0c710

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::AllocUniformBuffer
          (FMemoryManager *this,FVulkanAllocation *param_1,uint param_2)

{
  uint uVar1;
  FName FVar2;
  bool bVar3;
  FOutputDeviceRedirector *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory> FVar6;
  FName local_res10;
  
  bVar3 = AllocateBufferPooled
                    (this,param_1,(FVulkanEvictable *)0x0,param_2,0,0x12,6,
                     EVulkanAllocationMetaUniformBuffer,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0xe48);
  if (!bVar3) {
    DumpMemory(this,true);
    pFVar4 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::Panic(pFVar4);
    pFVar4 = GetGlobalLogSingleton();
    DumpRenderTargetPoolMemory((FOutputDevice *)pFVar4);
    pFVar4 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
    FOutputDeviceRedirector::Flush(pFVar4);
  }
  uVar1 = param_1->Size;
  if ((ulonglong)uVar1 != 0) {
    FVar6 = StatPtr_STAT_UniformBufferMemory;
    if (StatPtr_STAT_UniformBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res10,"STAT_UniformBufferMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UniformBufferMemory,*pFVar5,
                         L"Uniform Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,
                         false,ST_int64,false,false,MCR_GPU);
    }
    FVar2 = *(FName *)FVar6;
    local_res10.ComparisonIndex = FVar2.ComparisonIndex.Value;
    local_res10.Number = FVar2.Number;
    FThreadStats::AddMessage<__int64>(FVar2,Add,(ulonglong)uVar1,false);
  }
  return;
}

// AllocateBufferMemory @ 145b0c8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
VulkanRHI::FMemoryManager::AllocateBufferMemory
          (FMemoryManager *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,
          VkMemoryRequirements *param_3,uint param_4,EVulkanAllocationMetaType param_5,bool param_6,
          bool param_7,char *param_8,uint param_9)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStackY_438 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FResourceHeapManager_AllocateBufferMemory");
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2971,"FResourceHeapManager_AllocateBufferMemory",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0xb9b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2971);
  }
  uVar10 = 0;
  uVar8 = param_3->memoryTypeBits;
  uVar13 = (this->DeviceMemoryManager->MemoryProperties).memoryTypeCount;
  uVar9 = uVar10;
  if (uVar13 != 0) {
    do {
      uVar7 = (uint)uVar9;
      if (uVar8 == 0) break;
      if (((uVar8 & 1) != 0) &&
         (((this->DeviceMemoryManager->MemoryProperties).memoryTypes[uVar9].propertyFlags & param_4)
          == param_4)) {
        bVar11 = (bool)((byte)(param_4 >> 1) & 1);
        uVar8 = 0;
        if ((int)uVar7 < (this->ResourceTypeHeaps).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar8 = param_4;
        uVar13 = 0;
        uVar5 = uVar7;
        if (*(longlong *)
             ((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) == 0)
        goto LAB_145b0c9be;
        goto LAB_145b0cc67;
      }
      uVar8 = uVar8 >> 1;
      uVar9 = (ulonglong)(uVar7 + 1);
    } while (uVar7 + 1 < uVar13);
  }
  bVar11 = (bool)((byte)(param_4 >> 1) & 1);
  uVar13 = 0xfffffff8;
  uVar5 = 0;
LAB_145b0c9be:
  uVar1 = (this->DeviceMemoryManager->MemoryProperties).memoryTypeCount;
  uVar8 = param_4 & 0xfffffff7;
  if ((param_4 & 8) == 0) {
    uVar8 = param_4;
  }
  uVar7 = uVar8 & 0xffffffef;
  if ((uVar8 & 0x10) == 0) {
    uVar7 = uVar8;
  }
  uVar8 = uVar7 & 0xfffffffe;
  if ((param_4 & 7) != 7) {
    uVar8 = uVar7;
  }
  uVar12 = param_3->memoryTypeBits;
  uVar14 = 0xffffffff;
  if (uVar13 == 0) {
    uVar14 = uVar5;
  }
  uVar9 = uVar10;
  if (uVar1 != 0) {
    do {
      uVar7 = (uint)uVar9;
      if (uVar12 == 0) break;
      if ((((uVar12 & 1) != 0) &&
          (((this->DeviceMemoryManager->MemoryProperties).memoryTypes[uVar9].propertyFlags & uVar8)
           == uVar8)) && (uVar14 != uVar7)) goto LAB_145b0cb5c;
      uVar12 = uVar12 >> 1;
      uVar9 = (ulonglong)(uVar7 + 1);
    } while (uVar7 + 1 < uVar1);
  }
  local_3a8._padding_ = 0;
  if (param_8 == (char *)0x0) {
    local_3a8.StringLength = 0;
    local_3a8.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar6 = strlen(param_8);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,param_8,(int)sVar6,Yes);
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  uVar7 = uVar5;
  if ((void *)local_3a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_3a8._padding_);
  }
LAB_145b0cb5c:
  uVar13 = 0;
  if ((int)uVar7 < (this->ResourceTypeHeaps).ArrayNum) {
    uVar13 = ~uVar7 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(longlong *)((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) ==
      0) {
    DumpMemory(this,true);
    local_288._padding_ = 0;
    if (param_8 == (char *)0x0) {
      local_288.StringLength = 0;
      local_288.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar6 = strlen(param_8);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_8,(int)sVar6,Yes);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
  }
LAB_145b0cc67:
  if ((0xffffffff < param_3->size) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemoryReqs.size <= (uint64)((uint32) 0xffffffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xbc2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar5 = 0;
  uVar13 = uVar5;
  if ((int)uVar7 < (this->ResourceTypeHeaps).ArrayNum) {
    uVar13 = ~uVar7 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar11 = FVulkanResourceHeap::AllocateResource
                     (*(FVulkanResourceHeap **)
                       ((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar7 * 8)
                      ,param_1,param_2,Buffer,(uint)param_3->size,(uint)param_3->alignment,bVar11,
                      param_7,param_5,param_6,param_8,param_9);
  if (!bVar11) {
    uVar13 = param_3->memoryTypeBits;
    uVar1 = (this->DeviceMemoryManager->MemoryProperties).memoryTypeCount;
    uVar12 = uVar8 & 0xfffffffe;
    if ((param_4 & 7) != 7) {
      uVar12 = uVar8;
    }
    if (uVar1 != 0) {
      do {
        uVar8 = (uint)uVar10;
        if (uVar13 == 0) break;
        if ((((uVar13 & 1) != 0) &&
            (((this->DeviceMemoryManager->MemoryProperties).memoryTypes[uVar10].propertyFlags &
             uVar12) == uVar12)) && (uVar7 != uVar8)) goto LAB_145b0cdcb;
        uVar13 = uVar13 >> 1;
        uVar10 = (ulonglong)(uVar8 + 1);
      } while (uVar8 + 1 < uVar1);
    }
    VerifyVulkanResult(VK_ERROR_FEATURE_NOT_PRESENT,
                       "DeviceMemoryManager->GetMemoryTypeFromPropertiesExcluding(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, TypeIndex, &TypeIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xbcc);
    uVar8 = uVar7;
LAB_145b0cdcb:
    uVar13 = uVar5;
    if ((int)uVar8 < (this->ResourceTypeHeaps).ArrayNum) {
      uVar13 = ~uVar8 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(longlong *)((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
        == 0) {
      local_168._padding_ = 0;
      if (param_8 == (char *)0x0) {
        local_168.StringLength = 0;
        local_168.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar6 = strlen(param_8);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,param_8,(int)sVar6,Yes)
        ;
      }
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    if ((int)uVar8 < (this->ResourceTypeHeaps).ArrayNum) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar11 = FVulkanResourceHeap::AllocateResource
                       (*(FVulkanResourceHeap **)
                         ((this->ResourceTypeHeaps).AllocatorInstance.Data +
                         (longlong)(int)uVar8 * 8),param_1,param_2,Buffer,(uint)param_3->size,
                        (uint)param_3->alignment,(bool)((byte)(uVar12 >> 1) & 1),param_7,param_5,
                        param_6,param_8,param_9);
    if (!bVar11) {
      DumpMemory(this,true);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      bVar11 = false;
      goto LAB_145b0cfb7;
    }
  }
  bVar11 = true;
LAB_145b0cfb7:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar11;
}

// AllocateBufferMemory @ 145b0d020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

bool __thiscall
VulkanRHI::FMemoryManager::AllocateBufferMemory
          (FMemoryManager *this,FVulkanAllocation *param_1,VkBuffer_T *param_2,
          EVulkanAllocationFlags param_3,wchar_t *param_4,uint param_5)

{
  bool bVar1;
  VkDeviceMemory_T *pVVar2;
  FVulkanDevice *pFVar3;
  code *pcVar4;
  FVulkanAllocation *this_00;
  bool bVar5;
  undefined1 uVar6;
  VkResult VVar7;
  FVulkanSubresourceAllocator *pFVar8;
  size_t sVar9;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  ForAnyElementType _Str;
  uint uVar13;
  bool bVar14;
  undefined1 auStackY_208 [32];
  FString local_1b0;
  FVulkanAllocation *local_1a0;
  wchar_t *local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined8 uStack_184;
  int local_17c;
  VkBufferMemoryRequirementsInfo2 local_178;
  VkBindBufferMemoryInfo local_160;
  VkDebugUtilsObjectNameInfoEXT local_138;
  VkMemoryRequirements2 local_110;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_198 = param_4;
  local_1a0 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FMemoryManager_AllocateBufferMemory");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3038,"FMemoryManager_AllocateBufferMemory",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0xbde);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3038);
  }
  local_178.sType = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
  local_190 = 0x3b9cba18;
  local_17c = 0;
  local_110.memoryRequirements._20_4_ = 0;
  local_110.pNext = &local_190;
  local_178._4_8_ = 0;
  local_178.pNext._4_4_ = 0;
  local_110._4_4_ = 0;
  local_110.memoryRequirements.size._0_4_ = 0;
  local_18c = 0;
  uStack_184 = 0;
  local_110.sType = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
  local_110.memoryRequirements.size._4_4_ = 0;
  local_110.memoryRequirements.alignment._0_4_ = 0;
  local_110.memoryRequirements.alignment._4_4_ = 0;
  local_110.memoryRequirements.memoryTypeBits = 0;
  local_178.buffer = param_2;
  (*VulkanDynamicAPI::vkGetBufferMemoryRequirements2)(this->Device->Device,&local_178,&local_110);
  uVar10 = (ulonglong)param_5;
  if ((ulonglong)param_5 <
      CONCAT44(local_110.memoryRequirements.alignment._4_4_,
               (undefined4)local_110.memoryRequirements.alignment)) {
    uVar10 = CONCAT44(local_110.memoryRequirements.alignment._4_4_,
                      (undefined4)local_110.memoryRequirements.alignment);
  }
  local_110.memoryRequirements.alignment._0_4_ = (undefined4)uVar10;
  local_110.memoryRequirements.alignment._4_4_ = (undefined4)(uVar10 >> 0x20);
  if ((local_17c != 0) || (uStack_184._4_4_ != 0)) {
    param_3 = param_3 | Dedicated;
  }
  bVar1 = this->DeviceMemoryManager->bHasUnifiedMemory;
  bVar12 = (byte)param_3;
  if (((param_3 & PreferBAR) != None) && ((param_3 & HostVisible) == None)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(EnumHasAnyFlags(AllocFlags, EVulkanAllocationFlags::PreferBAR) && !EnumHasAnyFlags(AllocFlags, EVulkanAllocationFlags::HostVisible))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xa8c,L"PreferBAR should always be used with HostVisible.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  this_00 = local_1a0;
  if ((param_3 & HostCached) == None) {
    if ((param_3 & HostVisible) == None) {
      uVar11 = 1;
      if (bVar1 != false) {
        uVar11 = 7;
      }
    }
    else {
      uVar11 = ((param_3 & PreferBAR) != None) + 6;
    }
  }
  else {
    uVar11 = 10;
  }
  if ((param_3 & Memoryless) != None) {
    uVar11 = 0x10;
  }
  AllocateBufferMemory
            (this,local_1a0,(FVulkanEvictable *)0x0,&local_110.memoryRequirements,uVar11,
             EVulkanAllocationMetaBufferOther,(bool)(bVar12 >> 4 & 1),(bool)(bVar12 >> 3 & 1),
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
             ,0xbf9);
  if (this_00->Size == 0) {
    if ((param_3 & NoError) == None) {
      HandleOOM(this,false,((param_3 & (HostCached|HostVisible)) != None) - VK_TIMEOUT,
                CONCAT44(local_110.memoryRequirements.size._4_4_,
                         (undefined4)local_110.memoryRequirements.size),0);
    }
    goto LAB_145b0d3f9;
  }
  if ((char)bVar12 < '\0') {
    local_160.sType = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO;
    local_160._4_8_ = 0;
    local_160.pNext._4_4_ = 0;
    local_160.memoryOffset._4_4_ = 0;
    local_160.memory._0_4_ = 0;
    local_160.memory._4_4_ = 0;
    local_160.memoryOffset._0_4_ = 0;
    local_160.buffer = param_2;
    pFVar8 = FVulkanAllocation::GetSubresourceAllocator(this_00,this->Device);
    pVVar2 = pFVar8->MemoryAllocation->Handle;
    local_160.memory._0_4_ = SUB84(pVVar2,0);
    local_160.memory._4_4_ = (undefined4)((ulonglong)pVVar2 >> 0x20);
    local_160.memoryOffset._0_4_ = this_00->Offset;
    local_160.memoryOffset._4_4_ = 0;
    VVar7 = (*VulkanDynamicAPI::vkBindBufferMemory2)(this->Device->Device,1,&local_160);
    if (VVar7 != VK_SUCCESS) {
      VerifyVulkanResult(VVar7,
                         "VulkanRHI::vkBindBufferMemory2(Device.GetHandle(), 1, &BindBufferMemoryInfo)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xc05);
    }
  }
  if (local_198 == (wchar_t *)0x0) goto LAB_145b0d3f9;
  pFVar3 = this->Device;
  ::FString::PrintfImpl(&local_1b0,L"%s");
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_1b0.Data.ArrayNum != 0) {
    _Str.Data = local_1b0.Data.AllocatorInstance.Data;
  }
  if ((pFVar3->DebugMarkers).SetDebugName !=
      (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *)0x0) {
    local_68.Data = (FScriptContainerElement *)0x0;
    if (_Str.Data == (FScriptContainerElement *)0x0) {
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
    }
    else {
      sVar9 = wcslen((wchar_t *)_Str.Data);
      local_58 = UE::Core::Private::GetConvertedLength((uchar *)0x0,(wchar_t *)_Str.Data,(int)sVar9)
      ;
      uVar11 = local_58 + 1;
      uVar13 = uVar11;
      if (uVar11 < 0x81) {
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          uVar13 = 0;
          goto LAB_145b0d32d;
        }
      }
      else {
LAB_145b0d32d:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar13,1);
      }
      local_60 = local_e8;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        local_60 = local_68.Data;
      }
      UE::Core::Private::Convert((uchar *)local_60,uVar11,(wchar_t *)_Str.Data,(int)sVar9 + 1);
    }
    local_138._20_4_ = 0;
    local_138._4_8_ = 0;
    local_138._12_8_ = &DAT_900000000;
    local_138.pObjectName._0_4_ = SUB84(local_60,0);
    local_138.pObjectName._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
    local_138.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
    local_138.objectHandle = (ulong64)param_2;
    (*(pFVar3->DebugMarkers).SetDebugName)(pFVar3->Device,&local_138);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
LAB_145b0d3f9:
  uVar11 = this_00->Size;
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return uVar11 != 0;
}

// AllocateBufferPooled @ 145b0d450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

bool __thiscall
VulkanRHI::FMemoryManager::AllocateBufferPooled
          (FMemoryManager *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,EVulkanAllocationMetaType param_7,char *param_8,
          uint param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  VkResult VVar9;
  int iVar10;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Str;
  size_t sVar11;
  VkBuffer_T *pVVar12;
  FDeviceMemoryAllocation *this_00;
  FOutputDeviceRedirector *pFVar13;
  FVulkanSubresourceAllocator *pFVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uchar uVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStackY_288 [32];
  uint local_214;
  FVulkanSubresourceAllocator *local_1e8;
  ulong64 local_1e0;
  FVulkanSubresourceAllocator *local_1d8;
  FDeviceMemoryAllocation *local_1d0;
  FVulkanEvictable *local_1c8;
  VkMemoryRequirements local_1c0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_1c8 = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FResourceHeapManager_AllocateBufferPooled");
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2735,"FResourceHeapManager_AllocateBufferPooled",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0xaaf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2735);
  }
  if ((param_1->Type != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutAllocation.Type == EVulkanAllocationEmpty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xab0,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar7 = CalculateBufferAlignmentFromVKUsageFlags(this->Device,param_5);
  fVar4 = __real_3f000000;
  if (uVar7 < param_4) {
    uVar7 = param_4;
  }
  uVar19 = 0;
  fVar24 = __real_3f800000;
  if ((((param_5 & 0x108) == 0) && (fVar24 = fVar4, (param_5 & 0x24) == 0)) &&
     ((param_5 & 0x180400) == 0)) {
    if ((param_5 & 0xc0) == 0) {
      fVar24 = __real_3f400000;
      if ((param_5 & 0x10) == 0) {
        _Str = string_VkBufferUsageFlags(&local_1a8,param_5);
        if (0xf < (_Str->_Mypair)._Myval2._Myres) {
          _Str = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (_Str->_Mypair)._Myval2._Bx._Ptr;
        }
        local_188._padding_ = 0;
        if (_Str == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_188.StringLength = 0;
          local_188.Ptr = (wchar_t *)0x0;
        }
        else {
          sVar11 = strlen((char *)_Str);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_188,(char *)_Str,(int)sVar11,Yes);
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0xa82,L"Unknown priority for VkBufferUsageFlags combination: 0x%x (%s)")
        ;
        if ((void *)local_188._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_188._padding_);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_1a8);
        fVar24 = fVar4;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
    }
    else {
      fVar24 = 0.0;
    }
  }
  uVar17 = 7;
  uVar21 = uVar19;
  if (GVulkanUseBufferBinning != 0) {
    do {
      if (param_3 <= PoolSizes[uVar21]) {
        uVar17 = uVar21 & 0xff;
        break;
      }
      uVar15 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar15;
    } while ((int)uVar15 < 7);
  }
  iVar8 = (int)uVar17;
  local_214 = param_3;
  if (iVar8 != 7) {
    local_214 = PoolSizes[uVar17];
  }
  lpCriticalSection = &this->UsedFreeBufferAllocationsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_1d0 = (FDeviceMemoryAllocation *)((uVar17 + 5) * 0x10);
  uVar21 = uVar19;
  if (0 < *(int *)((longlong)(this->UsedFreeBufferAllocationsLock).CriticalSection.Opaque1 +
                  (longlong)&local_1d0[-1].MappedPointer)) {
    do {
      uVar20 = (uint)uVar19;
      uVar15 = 0;
      if ((int)uVar20 < this->UsedBufferAllocations[uVar17].ArrayNum) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar14 = *(FVulkanSubresourceAllocator **)
                 (this->UsedBufferAllocations[uVar17].AllocatorInstance.Data + uVar21);
      if ((((pFVar14->BufferUsageFlags & param_5) == param_5) &&
          ((pFVar14->MemoryPropertyFlags & param_6) == param_6)) &&
         (bVar5 = FVulkanSubresourceAllocator::TryAllocate2
                            (pFVar14,param_1,local_1c8,local_214,uVar7,param_7,param_8,param_9),
         bVar5)) {
        IncMetaStats(param_7,param_1->Size);
        goto LAB_145b0df16;
      }
      uVar19 = (ulonglong)(uVar20 + 1);
      uVar21 = uVar21 + 8;
    } while ((int)(uVar20 + 1) <
             *(int *)((longlong)(this->UsedFreeBufferAllocationsLock).CriticalSection.Opaque1 +
                     (longlong)&local_1d0[-1].MappedPointer));
  }
  uVar19 = 0;
  if (0 < this->FreeBufferAllocations[iVar8].ArrayNum) {
    local_1e0 = uVar17 << 4;
    uVar21 = uVar19;
    do {
      uVar20 = (uint)uVar19;
      uVar15 = 0;
      if ((int)uVar20 < *(int *)((longlong)&this->FreeBufferAllocations[0].ArrayNum + local_1e0)) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_1d8 = *(FVulkanSubresourceAllocator **)
                   (uVar21 + *(longlong *)
                              ((longlong)&this->FreeBufferAllocations[0].AllocatorInstance.Data +
                              local_1e0));
      if ((((local_1d8->BufferUsageFlags & param_5) == param_5) &&
          ((local_1d8->MemoryPropertyFlags & param_6) == param_6)) &&
         (bVar5 = FVulkanSubresourceAllocator::TryAllocate2
                            (local_1d8,param_1,local_1c8,local_214,uVar7,param_7,param_8,param_9),
         bVar5)) {
        IncMetaStats(param_7,param_1->Size);
        uVar7 = 0;
        if ((int)uVar20 < this->FreeBufferAllocations[iVar8].ArrayNum) {
          uVar7 = ~uVar20 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar10 = this->FreeBufferAllocations[iVar8].ArrayNum;
        pFVar2 = this->FreeBufferAllocations[iVar8].AllocatorInstance.Data;
        iVar16 = ~uVar20 + iVar10;
        if (1 < iVar16) {
          iVar16 = 1;
        }
        if (iVar16 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar20 * 8,pFVar2 + (longlong)(iVar10 - iVar16) * 8,
                  (longlong)iVar16 << 3);
        }
        piVar1 = &this->FreeBufferAllocations[iVar8].ArrayNum;
        *piVar1 = *piVar1 + -1;
        pFVar2 = this->UsedBufferAllocations[iVar8].AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_1d8) &&
            ((FScriptContainerElement *)&local_1d8 <
             pFVar2 + (longlong)this->UsedBufferAllocations[iVar8].ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar10 = this->UsedBufferAllocations[iVar8].ArrayNum;
        piVar1 = &this->UsedBufferAllocations[iVar8].ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&this->UsedBufferAllocations[iVar8].AllocatorInstance,piVar1);
        }
        this->UsedBufferAllocations[iVar8].ArrayNum = iVar10 + 1;
        *(FVulkanSubresourceAllocator **)
         (this->UsedBufferAllocations[iVar8].AllocatorInstance.Data + (longlong)iVar10 * 8) =
             local_1d8;
        goto LAB_145b0df16;
      }
      uVar19 = (ulonglong)(uVar20 + 1);
      uVar21 = uVar21 + 8;
    } while ((int)(uVar20 + 1) < this->FreeBufferAllocations[uVar17].ArrayNum);
  }
  uVar19 = 0;
  uVar15 = BufferSizes[iVar8];
  if (BufferSizes[iVar8] < local_214) {
    uVar15 = local_214;
  }
  local_1e0 = (ulonglong)uVar15;
  pVVar12 = FVulkanDevice::CreateBuffer(this->Device,(ulonglong)uVar15,param_5,0);
  (*VulkanDynamicAPI::vkGetBufferMemoryRequirements)(this->Device->Device,pVVar12,&local_1c0);
  if (uVar7 < (uint)local_1c0.alignment) {
    uVar7 = (uint)local_1c0.alignment;
  }
  if ((local_1c0.size < uVar15) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2475541483520783645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xae3,"MemReqs.size >= BufferSize"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar15 = (this->Device->DeviceMemoryManager).MemoryProperties.memoryTypeCount;
  uVar21 = uVar19;
  uVar20 = local_1c0.memoryTypeBits;
  if (uVar15 != 0) {
    for (; uVar20 != 0; uVar20 = uVar20 >> 1) {
      if (((uVar20 & 1) != 0) &&
         (uVar18 = (uint)uVar21,
         ((this->Device->DeviceMemoryManager).MemoryProperties.memoryTypes[uVar21].propertyFlags &
         param_6) == param_6)) goto LAB_145b0db35;
      uVar18 = (uint)uVar21 + 1;
      if (uVar15 <= uVar18) break;
      uVar21 = (ulonglong)uVar18;
    }
  }
  VerifyVulkanResult(VK_ERROR_FEATURE_NOT_PRESENT,
                     "Device.GetDeviceMemoryManager().GetMemoryTypeFromProperties(MemReqs.memoryTypeBits, MemoryPropertyFlags, &MemoryTypeIndex)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0xae6);
  uVar18 = param_5;
LAB_145b0db35:
  bVar5 = this->DeviceMemoryManager->bHasUnifiedMemory;
  this_00 = FDeviceMemoryManager::Alloc
                      (this->DeviceMemoryManager,true,local_1c0.size,uVar18,(void *)0x0,fVar24,false
                       ,param_8,param_9);
  uVar15 = uVar18;
  if (this_00 != (FDeviceMemoryAllocation *)0x0) {
LAB_145b0dc9a:
    local_1d0 = this_00;
    VVar9 = (*VulkanDynamicAPI::vkBindBufferMemory)(this->Device->Device,pVVar12,this_00->Handle,0);
    if (VVar9 != VK_SUCCESS) {
      VerifyVulkanResult(VVar9,
                         "VulkanRHI::vkBindBufferMemory(Device.GetHandle(), Buffer, DeviceMemoryAllocation->GetHandle(), 0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xaf8);
    }
    uVar22 = '\0';
    if ((bVar5 == false) && (uVar22 = '\0', param_7 == EVulkanAllocationMetaImageOther)) {
      uVar22 = '\x02';
    }
    if (this_00->bCanBeMapped != 0) {
      FDeviceMemoryAllocation::Map(this_00,local_1e0,0);
    }
    uVar20 = 0;
    if ((int)GMaxRHIFeatureLevel < 2) {
      LOCK();
      UNLOCK();
      uVar20 = GVulkanBufferHandleIdCounter._0_4_ + 1;
      GVulkanBufferHandleIdCounter =
           (TAtomic<unsigned___int64>)((longlong)GVulkanBufferHandleIdCounter + 1);
    }
    pFVar14 = ::operator_new(0xf0);
    local_1e8 = (FVulkanSubresourceAllocator *)0x0;
    if (pFVar14 != (FVulkanSubresourceAllocator *)0x0) {
      local_1e8 = FVulkanSubresourceAllocator::FVulkanSubresourceAllocator
                            (pFVar14,EVulkanAllocationPooledBuffer,this,uVar22,local_1d0,uVar15,
                             param_6,(uint)local_1c0.alignment,pVVar12,(uint)local_1e0,uVar20,
                             param_5,iVar8);
    }
    RegisterSubresourceAllocator(this,local_1e8);
    pFVar2 = this->UsedBufferAllocations[iVar8].AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_1e8) &&
        ((FScriptContainerElement *)&local_1e8 <
         pFVar2 + (longlong)this->UsedBufferAllocations[iVar8].ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar10 = this->UsedBufferAllocations[iVar8].ArrayNum;
    piVar1 = &this->UsedBufferAllocations[iVar8].ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&this->UsedBufferAllocations[iVar8].AllocatorInstance,piVar1);
    }
    this->UsedBufferAllocations[iVar8].ArrayNum = iVar10 + 1;
    *(FVulkanSubresourceAllocator **)
     (this->UsedBufferAllocations[iVar8].AllocatorInstance.Data + (longlong)iVar10 * 8) = local_1e8;
    bVar5 = FVulkanSubresourceAllocator::TryAllocate2
                      (local_1e8,param_1,local_1c8,local_214,uVar7,param_7,param_8,param_9);
    if (!bVar5) {
      DumpMemory(this,true);
      pFVar13 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::Panic(pFVar13);
      pFVar13 = GetGlobalLogSingleton();
      DumpRenderTargetPoolMemory((FOutputDevice *)pFVar13);
      pFVar13 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(pFVar13);
    }
    IncMetaStats(param_7,param_1->Size);
LAB_145b0df16:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar23) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    return true;
  }
  param_6 = param_6 & 0xfffffffe;
  local_1d0 = (FDeviceMemoryAllocation *)0x0;
  if (GVulkanMemoryMemoryFallbackToHost != 0) {
    uVar20 = (this->Device->DeviceMemoryManager).MemoryProperties.memoryTypeCount;
    if ((uVar20 != 0) && (local_1c0.memoryTypeBits != 0)) {
      while ((uVar15 = (uint)uVar19, (local_1c0.memoryTypeBits & 1) == 0 ||
             ((((this->Device->DeviceMemoryManager).MemoryProperties.memoryTypes[uVar19].
                propertyFlags & param_6) != param_6 || (uVar18 == uVar15))))) {
        uVar19 = (ulonglong)(uVar15 + 1);
        if ((uVar20 <= uVar15 + 1) ||
           (uVar15 = local_1c0.memoryTypeBits >> 1,
           local_1c0.memoryTypeBits = local_1c0.memoryTypeBits >> 1, uVar15 == 0))
        goto LAB_145b0dc1c;
      }
      local_1d0 = this_00;
      this_00 = FDeviceMemoryManager::Alloc
                          (this->DeviceMemoryManager,false,local_1c0.size,uVar15,(void *)0x0,fVar24,
                           false,param_8,param_9);
      local_1d0 = this_00;
      if (this_00 != (FDeviceMemoryAllocation *)0x0) goto LAB_145b0dc9a;
    }
  }
LAB_145b0dc1c:
  DumpMemory(this,true);
  pFVar13 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(pFVar13);
  pFVar13 = GetGlobalLogSingleton();
  DumpRenderTargetPoolMemory((FOutputDevice *)pFVar13);
  pFVar13 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
  FOutputDeviceRedirector::Flush(pFVar13);
}

// AllocateDedicatedImageMemory @ 145b0e230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
VulkanRHI::FMemoryManager::AllocateDedicatedImageMemory
          (FMemoryManager *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,
          VkImage_T *param_3,VkMemoryRequirements *param_4,uint param_5,
          EVulkanAllocationMetaType param_6,bool param_7,char *param_8,uint param_9)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar11;
  bool bVar12;
  undefined1 auStackY_238 [32];
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  int local_1ac;
  VkImageMemoryRequirementsInfo2 local_1a8;
  VkMemoryRequirements2 local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Cyan,"FVulkanMemoryManager_AllocateDedicatedImageMemory");
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3100,"FVulkanMemoryManager_AllocateDedicatedImageMemory",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0xc1c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3100);
  }
  local_1a8.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;
  local_1c0 = 0x3b9cba18;
  local_1ac = 0;
  local_190.memoryRequirements._20_4_ = 0;
  local_190.pNext = &local_1c0;
  local_1a8._4_8_ = 0;
  local_1a8.pNext._4_4_ = 0;
  local_190._4_4_ = 0;
  local_190.memoryRequirements.size._0_4_ = 0;
  local_1bc = 0;
  uStack_1b4 = 0;
  local_190.sType = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
  local_190.memoryRequirements._4_8_ = 0;
  local_190.memoryRequirements._12_8_ = 0;
  local_1a8.image = param_3;
  (*VulkanDynamicAPI::vkGetImageMemoryRequirements2)(this->Device->Device,&local_1a8,&local_190);
  if ((uStack_1b4._4_4_ == 0) && (local_1ac == 0)) {
    bVar3 = AllocateImageMemory(this,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9
                               );
  }
  else {
    uVar8 = 0;
    uVar11 = 0;
    uVar6 = param_4->memoryTypeBits;
    uVar1 = (this->DeviceMemoryManager->MemoryProperties).memoryTypeCount;
    uVar10 = uVar8;
    if (uVar1 != 0) {
      do {
        if (uVar6 == 0) break;
        if (((uVar6 & 1) != 0) &&
           (uVar9 = (uint)uVar10,
           ((this->DeviceMemoryManager->MemoryProperties).memoryTypes[uVar10].propertyFlags &
           param_5) == param_5)) goto LAB_145b0e3f6;
        uVar6 = uVar6 >> 1;
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar1);
    }
    VerifyVulkanResult(VK_ERROR_FEATURE_NOT_PRESENT,
                       "DeviceMemoryManager->GetMemoryTypeFromProperties(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, &TypeIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xc2e);
    uVar9 = uVar11;
LAB_145b0e3f6:
    if ((param_5 & 2) != 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2475541483520783313>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xc2f,
                         "(MemoryPropertyFlags & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT) != VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (0xffffffff < param_4->size) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemoryReqs.size <= (uint64)((uint32) 0xffffffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xc30,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar6 = 0;
    if ((int)uVar9 < (this->ResourceTypeHeaps).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(longlong *)((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar9 * 8)
        == 0) {
      local_168._padding_ = 0;
      if (param_8 == (char *)0x0) {
        local_168.StringLength = 0;
        local_168.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar5 = strlen(param_8);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,param_8,(int)sVar5,Yes)
        ;
      }
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    uVar6 = uVar11;
    if ((int)uVar9 < (this->ResourceTypeHeaps).ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    bVar3 = FVulkanResourceHeap::AllocateDedicatedImage
                      (*(FVulkanResourceHeap **)
                        ((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar9 * 8
                        ),param_1,param_2,param_3,(uint)param_4->size,(uint)param_4->alignment,
                       param_6,param_7,param_8,param_9);
    if (bVar3) {
LAB_145b0e6f7:
      bVar3 = true;
    }
    else {
      if (GVulkanMemoryMemoryFallbackToHost != 0) {
        param_5 = param_5 & 0xfffffffe;
      }
      uVar6 = param_4->memoryTypeBits;
      uVar1 = (this->DeviceMemoryManager->MemoryProperties).memoryTypeCount;
      if (uVar1 == 0) {
LAB_145b0e6f2:
        bVar3 = false;
      }
      else {
        do {
          if (uVar6 == 0) goto LAB_145b0e6f2;
          uVar7 = (uint)uVar8;
          if ((((uVar6 & 1) != 0) &&
              (((this->DeviceMemoryManager->MemoryProperties).memoryTypes[uVar8].propertyFlags &
               param_5) == param_5)) && (uVar9 != uVar7)) {
            if ((int)uVar7 < (this->ResourceTypeHeaps).ArrayNum) {
              uVar11 = ~uVar7 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
            }
            bVar3 = FVulkanResourceHeap::AllocateDedicatedImage
                              (*(FVulkanResourceHeap **)
                                ((this->ResourceTypeHeaps).AllocatorInstance.Data +
                                (longlong)(int)uVar7 * 8),param_1,param_2,param_3,
                               (uint)param_4->size,(uint)param_4->alignment,param_6,param_7,param_8,
                               param_9);
            if (bVar3) goto LAB_145b0e6f7;
            goto LAB_145b0e6f2;
          }
          uVar6 = uVar6 >> 1;
          uVar8 = (ulonglong)(uVar7 + 1);
        } while (uVar7 + 1 < uVar1);
        bVar3 = false;
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar3;
}

// AllocateImageMemory @ 145b0e7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
VulkanRHI::FMemoryManager::AllocateImageMemory
          (FMemoryManager *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,
          VkMemoryRequirements *param_3,uint param_4,EVulkanAllocationMetaType param_5,bool param_6,
          char *param_7,uint param_8)

{
  FDeviceMemoryManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_318 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  uVar11 = 0;
  uVar13 = 0;
  if ((((this->DeviceMemoryManager->bHasUnifiedMemory == false) &&
       (param_5 == EVulkanAllocationMetaImageOther)) && (param_4 == 1)) &&
     ((bVar3 = UpdateEvictThreshold(this,false), bVar3 &&
      (param_4 = uVar13, this->DeviceMemoryManager->Device->VendorId == Amd)))) {
    param_4 = 2;
  }
  pFVar1 = this->DeviceMemoryManager;
  uVar14 = param_3->memoryTypeBits;
  uVar6 = param_4 >> 1;
  uVar9 = (pFVar1->MemoryProperties).memoryTypeCount;
  uVar10 = uVar11;
  uVar12 = uVar14;
  if (uVar9 != 0) {
    do {
      uVar8 = (uint)uVar10;
      if (uVar12 == 0) break;
      if (((uVar12 & 1) != 0) &&
         (((pFVar1->MemoryProperties).memoryTypes[uVar10].propertyFlags & param_4) == param_4))
      goto LAB_145b0e9ce;
      uVar12 = uVar12 >> 1;
      uVar10 = (ulonglong)(uVar8 + 1);
    } while (uVar8 + 1 < uVar9);
  }
  if ((param_4 & 0x10) == 0) {
    local_288._padding_ = 0;
    if (param_7 == (char *)0x0) {
      local_288.StringLength = 0;
      local_288.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar7 = strlen(param_7);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_7,(int)sVar7,Yes);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    uVar8 = 0;
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
  }
  else {
    param_4 = param_4 & 0xffffffef;
    uVar10 = uVar11;
    if (uVar9 != 0) {
      do {
        uVar8 = (uint)uVar10;
        if (uVar14 == 0) break;
        if (((uVar14 & 1) != 0) &&
           (((pFVar1->MemoryProperties).memoryTypes[uVar10].propertyFlags & param_4) == param_4))
        goto LAB_145b0e9ce;
        uVar14 = uVar14 >> 1;
        uVar10 = (ulonglong)(uVar8 + 1);
      } while (uVar8 + 1 < uVar9);
    }
    VerifyVulkanResult(VK_ERROR_FEATURE_NOT_PRESENT,
                       "DeviceMemoryManager->GetMemoryTypeFromProperties(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, &TypeIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xb77);
    uVar8 = 0;
  }
LAB_145b0e9ce:
  uVar14 = uVar13;
  if ((int)uVar8 < (this->ResourceTypeHeaps).ArrayNum) {
    uVar14 = ~uVar8 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(longlong *)((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) ==
      0) {
    local_168._padding_ = 0;
    if (param_7 == (char *)0x0) {
      local_168.StringLength = 0;
      local_168.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar7 = strlen(param_7);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,param_7,(int)sVar7,Yes);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  if ((0xffffffff < param_3->size) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemoryReqs.size <= (uint64)((uint32) 0xffffffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xb83,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_6) || ((param_4 & 0x10) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((int)uVar8 < (this->ResourceTypeHeaps).ArrayNum) {
    uVar13 = ~uVar8 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar5 = FVulkanResourceHeap::AllocateResource
                    (*(FVulkanResourceHeap **)
                      ((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
                     param_1,param_2,Image,(uint)param_3->size,(uint)param_3->alignment,
                     (bool)((byte)uVar6 & 1),bVar3,param_5,param_6,param_7,param_8);
  if (!bVar5) {
    if (GVulkanMemoryMemoryFallbackToHost != 0) {
      param_4 = param_4 & 0xfffffffe;
    }
    uVar13 = param_3->memoryTypeBits;
    uVar14 = (this->DeviceMemoryManager->MemoryProperties).memoryTypeCount;
    if (uVar14 != 0) {
      do {
        uVar9 = (uint)uVar11;
        if (uVar13 == 0) break;
        if ((((uVar13 & 1) != 0) &&
            (((this->DeviceMemoryManager->MemoryProperties).memoryTypes[uVar11].propertyFlags &
             param_4) == param_4)) && (uVar8 != uVar9)) goto LAB_145b0ec20;
        uVar13 = uVar13 >> 1;
        uVar11 = (ulonglong)(uVar9 + 1);
      } while (uVar9 + 1 < uVar14);
    }
    VerifyVulkanResult(VK_ERROR_FEATURE_NOT_PRESENT,
                       "DeviceMemoryManager->GetMemoryTypeFromPropertiesExcluding(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, TypeIndex, &TypeIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xb8d);
    uVar9 = uVar8;
LAB_145b0ec20:
    uVar13 = 0;
    if ((int)uVar9 < (this->ResourceTypeHeaps).ArrayNum) {
      uVar13 = ~uVar9 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = FVulkanResourceHeap::AllocateResource
                      (*(FVulkanResourceHeap **)
                        ((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar9 * 8
                        ),param_1,param_2,Image,(uint)param_3->size,(uint)param_3->alignment,
                       (bool)((byte)(param_4 >> 1) & 1),bVar3,param_5,param_6,param_7,param_8);
    if (!bVar3) {
      DumpMemory(this,true);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      return false;
    }
  }
  return true;
}

// CalculateBufferAlignment @ 145b0f770

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl
VulkanRHI::FMemoryManager::CalculateBufferAlignment
          (FVulkanDevice *param_1,EBufferUsageFlags param_2,bool param_3)

{
  uint uVar1;
  
  uVar1 = FVulkanBuffer::UEToVKBufferUsageFlags(param_1,param_2,param_3);
  uVar1 = CalculateBufferAlignmentFromVKUsageFlags(param_1,uVar1);
  if ((param_2 & RayTracingScratch) == RayTracingScratch) {
    uVar1 = GRHIGlobals.RayTracing.ScratchBufferAlignment;
  }
  return uVar1;
}

// CalculateBufferPriority @ 145b0f940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl VulkanRHI::FMemoryManager::CalculateBufferPriority(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *_Str;
  size_t sVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_198 [32];
  uint local_178;
  wchar_t *local_170;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  fVar4 = __real_3f000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  fVar5 = __real_3f800000;
  if ((((param_1 & 0x108) == 0) && (fVar5 = fVar4, (param_1 & 0x24) == 0)) &&
     ((param_1 & 0x180400) == 0)) {
    if ((param_1 & 0xc0) == 0) {
      fVar5 = __real_3f400000;
      if ((param_1 & 0x10) == 0) {
        _Str = string_VkBufferUsageFlags(&local_168,param_1);
        if (0xf < (_Str->_Mypair)._Myval2._Myres) {
          _Str = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (_Str->_Mypair)._Myval2._Bx._Ptr;
        }
        local_148._padding_ = 0;
        if (_Str == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          local_148.Ptr = (wchar_t *)0x0;
          local_148.StringLength = 0;
        }
        else {
          sVar3 = strlen((char *)_Str);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,(char *)_Str,(int)sVar3,Yes);
        }
        local_178 = param_1;
        local_170 = local_148.Ptr;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0xa82,L"Unknown priority for VkBufferUsageFlags combination: 0x%x (%s)")
        ;
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_168);
        fVar5 = fVar4;
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          fVar4 = (float)(*pcVar1)();
          return fVar4;
        }
      }
    }
    else {
      fVar5 = 0.0;
    }
  }
  return fVar5;
}

// Deinit @ 145b13bb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall VulkanRHI::FMemoryManager::Deinit(FMemoryManager *this)

{
  TArray<VulkanRHI::FVulkanResourceHeap_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FVulkanResourceHeap *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  ProcessPendingUBFreesNoLock(this,true);
  if (((this->UBAllocations).PendingFree.ArrayNum != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UBAllocations.PendingFree.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x890,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  DestroyResourceAllocations(this);
  uVar7 = 0;
  pTVar1 = &this->ResourceTypeHeaps;
  uVar8 = uVar7;
  if (0 < (this->ResourceTypeHeaps).ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (this->ResourceTypeHeaps).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FVulkanResourceHeap **)((pTVar1->AllocatorInstance).Data + uVar8);
      if (this_00 != (FVulkanResourceHeap *)0x0) {
        FVulkanResourceHeap::~FVulkanResourceHeap(this_00);
        ::operator_delete(this_00,0x108);
      }
      uVar5 = 0;
      if ((int)uVar6 < (this->ResourceTypeHeaps).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      *(undefined8 *)((pTVar1->AllocatorInstance).Data + uVar8) = 0;
      uVar8 = uVar8 + 8;
    } while ((int)(uVar6 + 1) < (this->ResourceTypeHeaps).ArrayNum);
  }
  piVar2 = &(this->ResourceTypeHeaps).ArrayMax;
  (this->ResourceTypeHeaps).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// DestroyResourceAllocations @ 145b147a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall VulkanRHI::FMemoryManager::DestroyResourceAllocations(FMemoryManager *this)

{
  int *piVar1;
  FVulkanSubresourceAllocator *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar10;
  ulonglong uVar11;
  FString local_38;
  ulonglong uVar9;
  
  ReleaseFreedResources(this,true);
  if (this->UsedBufferAllocations != this->FreeBufferAllocations) {
    piVar6 = &this->UsedBufferAllocations[0].ArrayNum;
    do {
      uVar7 = *piVar6 - 1;
      if (-1 < (int)uVar7) {
        lVar10 = (longlong)(int)uVar7 * 8;
        do {
          uVar8 = 0;
          if ((int)uVar7 < *piVar6) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FVulkanSubresourceAllocator **)
                    ((((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                        *)(piVar6 + -2))->AllocatorInstance).Data + lVar10);
          bVar4 = FVulkanSubresourceAllocator::JoinFreeBlocks(pFVar2);
          if ((!bVar4) && (2 < (byte)LogVulkanRHI._0_1_)) {
            VulkanTrackGetString(&local_38,&pFVar2->Track);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          if (pFVar2->Buffer != (VkBuffer_T *)0x0) {
            (*VulkanDynamicAPI::vkDestroyBuffer)
                      (this->Device->Device,pFVar2->Buffer,&GAllocationCallbacks);
            pFVar2->Buffer = (VkBuffer_T *)0x0;
          }
          FDeviceMemoryManager::Free(&this->Device->DeviceMemoryManager,&pFVar2->MemoryAllocation);
          FVulkanSubresourceAllocator::~FVulkanSubresourceAllocator(pFVar2);
          ::operator_delete(pFVar2,0xf0);
          lVar10 = lVar10 + -8;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      *piVar6 = 0;
      if (piVar6[1] != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar6 + -2),0,piVar6 + 1);
      }
      piVar1 = piVar6 + 2;
      piVar6 = piVar6 + 4;
    } while ((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)piVar1
             != this->FreeBufferAllocations);
  }
  if (this->FreeBufferAllocations !=
      (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
      &this->AllBufferAllocationsLock) {
    piVar6 = &this->FreeBufferAllocations[0].ArrayNum;
    do {
      iVar5 = *piVar6;
      uVar9 = 0;
      uVar11 = 0;
      if (0 < iVar5) {
        do {
          uVar8 = (uint)uVar9;
          uVar7 = 0;
          if ((int)uVar8 < iVar5) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FVulkanSubresourceAllocator **)
                    ((((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                        *)(piVar6 + -2))->AllocatorInstance).Data + uVar11);
          if (pFVar2->Buffer != (VkBuffer_T *)0x0) {
            (*VulkanDynamicAPI::vkDestroyBuffer)
                      (this->Device->Device,pFVar2->Buffer,&GAllocationCallbacks);
            pFVar2->Buffer = (VkBuffer_T *)0x0;
          }
          FDeviceMemoryManager::Free(&this->Device->DeviceMemoryManager,&pFVar2->MemoryAllocation);
          FVulkanSubresourceAllocator::~FVulkanSubresourceAllocator(pFVar2);
          ::operator_delete(pFVar2,0xf0);
          iVar5 = *piVar6;
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar11 = uVar11 + 8;
        } while ((int)(uVar8 + 1) < iVar5);
      }
      *piVar6 = 0;
      if (piVar6[1] != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(piVar6 + -2),0,piVar6 + 1);
      }
      piVar1 = piVar6 + 2;
      piVar6 = piVar6 + 4;
    } while ((FPlatformRWLock *)piVar1 != &this->AllBufferAllocationsLock);
  }
  return;
}

// DumpMemory @ 145b15650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall VulkanRHI::FMemoryManager::DumpMemory(FMemoryManager *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  ushort uVar3;
  FDeviceMemoryManager *pFVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  FVulkanSubresourceAllocator *pFVar12;
  code *pcVar13;
  void *pvVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar22;
  size_t sVar23;
  wchar_t *pwVar24;
  FOutputDeviceRedirector *this_00;
  ForAnyElementType FVar25;
  void *pvVar26;
  ulong64 uVar27;
  wchar_t *pwVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint *puVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  wchar_t *pwVar37;
  FMemoryManager *pFVar38;
  ulonglong uVar39;
  int *piVar40;
  byte *pbVar41;
  FResourceHeapStats *pFVar42;
  VkMemoryHeap *pVVar43;
  uint uVar44;
  VkPhysicalDeviceMemoryProperties *pVVar45;
  VkPhysicalDeviceMemoryProperties *pVVar46;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar47;
  ulonglong uVar48;
  uint uVar49;
  longlong lVar50;
  longlong lVar51;
  FScriptContainerElement *pFVar52;
  undefined8 *puVar53;
  undefined1 auStackY_9d8 [32];
  undefined1 local_938;
  undefined1 local_937 [3];
  uint local_934;
  FMemoryManager *local_930;
  int *local_928;
  longlong *local_920;
  undefined1 local_918;
  undefined1 local_917;
  undefined1 local_916;
  undefined1 local_915;
  undefined1 local_914;
  char local_913;
  uint local_910;
  wchar_t *local_908;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *local_900;
  VkPhysicalDeviceMemoryProperties *local_8f8;
  longlong local_8f0;
  TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_> local_8e8;
  uint local_8d8;
  TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_> local_8d0;
  int local_8c0;
  FWindowsRecursiveMutex *local_8b8;
  longlong local_8b0;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *local_8a8;
  longlong local_8a0;
  longlong local_898;
  uint *local_890;
  wchar_t *local_888;
  longlong local_880;
  longlong local_878;
  ForAnyElementType local_870;
  int local_868;
  int local_864;
  ForAnyElementType local_860;
  int local_858;
  int local_854;
  longlong local_850;
  TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_> local_848;
  FScriptContainerElement *local_838;
  FResourceHeapStats local_828;
  FResourceHeapStats local_7d8;
  FResourceHeapStats local_788;
  FString local_738;
  FString local_728;
  VkPhysicalDeviceMemoryProperties *local_718;
  undefined1 *local_710;
  FScriptContainerElement *local_708;
  FString local_700;
  FString local_6f0;
  FString local_6e0;
  FString local_6d0;
  FString local_6c0;
  FString local_6b0;
  FString local_6a0;
  FString local_690;
  FString local_680;
  FString local_670;
  FString local_660;
  FString local_650;
  FString local_640;
  FString local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FResourceHeapStats local_5c8;
  FString local_578;
  FString local_568;
  _Bxty local_558;
  undefined8 local_548;
  ulonglong uStack_540;
  _Bxty local_538;
  undefined8 local_528;
  ulonglong uStack_520;
  _Bxty local_518;
  undefined8 local_508;
  ulonglong uStack_500;
  _Bxty local_4f8;
  undefined8 local_4e8;
  ulonglong uStack_4e0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_9d8;
  uVar49 = 0;
  local_8b8 = &this->UsedFreeBufferAllocationsLock;
  local_934 = 0;
  local_930 = this;
  local_913 = param_1;
  if (local_8b8 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)local_8b8);
  FDeviceMemoryManager::DumpMemory(&this->Device->DeviceMemoryManager);
  if ((3 < (byte)LogVulkanRHI._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
     3 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  pFVar4 = this->DeviceMemoryManager;
  pVVar45 = &pFVar4->MemoryProperties;
  local_8d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8d0.ArrayNum = 0;
  local_8d0.ArrayMax = 0;
  local_8f8 = pVVar45;
  TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_>::SetNum
            (&local_8d0,(pFVar4->MemoryProperties).memoryHeapCount,Default);
  pVVar46 = pVVar45;
  uVar33 = uVar49;
  if ((pFVar4->MemoryProperties).memoryHeapCount != 0) {
    do {
      uVar33 = 0;
      if ((int)uVar49 < local_8d0.ArrayNum) {
        uVar33 = ~uVar49 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar32 = 0;
      *(undefined4 *)(local_8d0.AllocatorInstance.Data + (longlong)(int)uVar49 * 0x48 + 0x40) = 0;
      if (pVVar45->memoryTypeCount != 0) {
        do {
          if (((VkPhysicalDeviceMemoryProperties *)(&pFVar4->MemoryBudget + 1))->memoryTypes[uVar32]
              .heapIndex == uVar49) {
            uVar33 = (pFVar4->MemoryProperties).memoryTypes[uVar32].propertyFlags;
            uVar34 = 0;
            if ((int)uVar49 < local_8d0.ArrayNum) {
              uVar34 = ~uVar49 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(uint *)(local_8d0.AllocatorInstance.Data + (longlong)(int)uVar49 * 0x48 + 0x40) =
                 *(uint *)(local_8d0.AllocatorInstance.Data + (longlong)(int)uVar49 * 0x48 + 0x40) |
                 uVar33;
          }
          uVar33 = (int)uVar32 + 1;
          uVar32 = (ulonglong)uVar33;
        } while (uVar33 < pVVar45->memoryTypeCount);
      }
      uVar49 = uVar49 + 1;
      this = local_930;
      pVVar46 = local_8f8;
      uVar33 = local_934;
    } while (uVar49 < (pFVar4->MemoryProperties).memoryHeapCount);
  }
  iVar36 = (this->ResourceTypeHeaps).ArrayNum;
  local_8e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8e8.ArrayNum = 0;
  local_8e8.ArrayMax = 0;
  local_8c0 = iVar36;
  TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_>::SetNum
            (&local_8e8,iVar36 + 0x11,Default);
  pFVar38 = local_930;
  uVar49 = 0;
  local_910 = iVar36 + 0x10;
  if (0 < (this->ResourceTypeHeaps).ArrayNum) {
    local_8f0 = 0;
    lVar29 = 0;
    do {
      lVar50 = local_8f0;
      uVar34 = ~uVar49 >> 0x1f;
      uVar33 = 0;
      if ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum) {
        uVar33 = uVar34;
      }
      if ((uVar33 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      if (*(longlong *)((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + lVar29) == 0) {
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
      }
      else {
        uVar33 = 0;
        if ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum) {
          uVar33 = uVar34;
        }
        if ((uVar33 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar3 = *(ushort *)
                 (*(longlong *)((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + lVar29) + 0x60
                 );
        local_920 = (longlong *)CONCAT44(local_920._4_4_,(uint)uVar3);
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        uVar33 = pVVar46->memoryTypes[uVar3].propertyFlags;
        uVar44 = 0;
        if ((int)uVar49 < local_8e8.ArrayNum) {
          uVar44 = uVar34;
        }
        if ((uVar44 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        *(uint *)(local_8e8.AllocatorInstance.Data + lVar50 + 0x40) = uVar33;
        uVar33 = 0;
        if ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum) {
          uVar33 = uVar34;
        }
        if ((uVar33 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar51 = *(longlong *)((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + lVar29);
        uVar33 = 0;
        if ((int)uVar49 < local_8e8.ArrayNum) {
          uVar33 = uVar34;
        }
        if (uVar33 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        pTVar47 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
                  (lVar51 + 0xa8);
        iVar35 = 0;
        local_708 = local_8e8.AllocatorInstance.Data + (longlong)(int)uVar49 * 0x48;
        local_900 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
                    (lVar51 + 0xf8);
        iVar36 = local_8e8.ArrayNum;
        if (pTVar47 != local_900) {
          pbVar41 = (byte *)(lVar51 + 0xc);
          do {
            if (iVar35 < *(int *)(lVar51 + 0x50)) {
              if ((iVar35 < 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if ((*pbVar41 & 1) == 0) goto LAB_145b15ac4;
              bVar19 = true;
            }
            else {
LAB_145b15ac4:
              bVar19 = false;
            }
            iVar35 = iVar35 + 1;
            pbVar41 = pbVar41 + 0x10;
            `VulkanRHI::FVulkanResourceHeap::DumpMemory'::__l2::<lambda_1>::operator()
                      (&local_708,pTVar47,L"ActivePages",bVar19);
            pTVar47 = pTVar47 + 1;
          } while (pTVar47 != local_900);
          lVar50 = local_8f0;
          iVar36 = local_8e8.ArrayNum;
        }
        pVVar46 = local_8f8;
        uVar33 = local_8f8->memoryTypes[(ulonglong)local_920 & 0xffffffff].heapIndex;
        lVar51 = (longlong)(int)uVar33;
        uVar34 = 0;
        if ((int)uVar49 < iVar36) {
          uVar34 = ~uVar49 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FVar25.Data = local_8e8.AllocatorInstance.Data;
        uVar34 = 0;
        if ((int)uVar33 < local_8d0.ArrayNum) {
          uVar34 = ~uVar33 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48) +
             *(longlong *)(FVar25.Data + lVar50);
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 8) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 8) +
             *(longlong *)(FVar25.Data + lVar50 + 8);
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x10) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x10) +
             *(longlong *)(FVar25.Data + lVar50 + 0x10);
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x18) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x18) +
             *(longlong *)(FVar25.Data + lVar50 + 0x18);
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x20) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x20) +
             *(longlong *)(FVar25.Data + lVar50 + 0x20);
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x28) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x28) +
             *(longlong *)(FVar25.Data + lVar50 + 0x28);
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x30) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x30) +
             *(longlong *)(FVar25.Data + lVar50 + 0x30);
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x38) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar51 * 0x48 + 0x38) +
             *(longlong *)(FVar25.Data + lVar50 + 0x38);
      }
      local_8f0 = lVar50 + 0x48;
      uVar49 = uVar49 + 1;
      lVar29 = lVar29 + 8;
      iVar36 = local_8c0;
      uVar33 = local_934;
    } while ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum);
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  local_908 = (wchar_t *)(longlong)iVar36;
  local_878 = 0;
  local_8f0 = 0;
  local_928 = (int *)0x0;
  local_880 = 0;
  local_898 = 0;
  local_8d8 = 0;
  do {
    pwVar24 = local_908;
    piVar40 = local_928;
    uVar34 = local_8d8 + iVar36;
    uVar49 = 0;
    if ((int)uVar34 < local_8e8.ArrayNum) {
      uVar49 = ~uVar34 >> 0x1f;
    }
    if ((uVar49 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    FVar25.Data = local_8e8.AllocatorInstance.Data;
    lVar50 = (longlong)pwVar24 + (longlong)piVar40 + 8;
    lVar29 = (longlong)(int)uVar34;
    uVar49 = 0;
    if ((int)(uVar34 + 8) < local_8e8.ArrayNum) {
      uVar49 = ~(uVar34 + 8) >> 0x1f;
    }
    if ((uVar49 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    FVar17.Data = local_8e8.AllocatorInstance.Data;
    pTVar47 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
              ((longlong)piVar40 * 0x10);
    local_900 = pTVar47;
    if (local_8d8 == 7) {
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    else if (3 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)&PTR_u_Buffer_of__d_si_1510bf858,
                 (FLogCategoryBase *)&LogVulkanRHI);
    }
    iVar36 = local_930->FreeBufferAllocations[(longlong)piVar40].ArrayNum;
    if (0 < iVar36) {
      uVar30 = 0;
      uVar32 = uVar30;
      do {
        uVar34 = (uint)uVar32;
        uVar49 = 0;
        if ((int)uVar34 < iVar36) {
          uVar49 = ~uVar34 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        lVar51 = *(longlong *)
                  (uVar30 + *(longlong *)
                             ((longlong)&local_930->FreeBufferAllocations[0].AllocatorInstance.Data
                             + (longlong)&(pTVar47->AllocatorInstance).Data));
        if ((*(byte *)(lVar51 + 0x3c) & 1) == 0) {
          *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x28) =
               *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x28) + 1;
          *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x38) =
               *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x38) + 1;
          *(ulonglong *)(FVar17.Data + lVar50 * 0x48 + 0x20) =
               *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x20) +
               (ulonglong)*(uint *)(lVar51 + 0x48);
          *(uint *)(FVar17.Data + lVar50 * 0x48 + 0x40) =
               *(uint *)(FVar17.Data + lVar50 * 0x48 + 0x40) | *(uint *)(lVar51 + 0x3c);
        }
        else {
          *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x28) =
               *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x28) + 1;
          *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x38) =
               *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x38) + 1;
          *(ulonglong *)(FVar25.Data + lVar29 * 0x48 + 0x20) =
               *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x20) +
               (ulonglong)*(uint *)(lVar51 + 0x48);
          *(uint *)(FVar25.Data + lVar29 * 0x48 + 0x40) =
               *(uint *)(FVar25.Data + lVar29 * 0x48 + 0x40) | *(uint *)(lVar51 + 0x3c);
        }
        uVar49 = local_8f8->memoryTypes[*(uint *)(lVar51 + 0x38)].heapIndex;
        local_920 = (longlong *)CONCAT44(local_920._4_4_,uVar49);
        uVar33 = 0;
        if ((int)uVar49 < local_8d0.ArrayNum) {
          uVar33 = ~uVar49 >> 0x1f;
        }
        if (uVar33 == 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar19) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar49 = (uint)local_920;
        }
        uVar32 = (ulonglong)(uVar34 + 1);
        lVar21 = (longlong)(int)uVar49;
        uVar30 = uVar30 + 8;
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x28) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x28) + 1;
        *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x38) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x38) + 1;
        *(ulonglong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x20) =
             *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x20) +
             (ulonglong)*(uint *)(lVar51 + 0x48);
        iVar36 = *(int *)((longlong)&local_930->FreeBufferAllocations[0].ArrayNum +
                         (longlong)local_900);
        pTVar47 = local_900;
        uVar33 = local_934;
      } while ((int)(uVar34 + 1) < iVar36);
    }
    if (0 < *(int *)((longlong)&local_930->UsedBufferAllocations[0].ArrayNum + (longlong)pTVar47)) {
      local_890 = (uint *)0x0;
      local_8b0 = 0;
      local_8a8 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
                  0x0;
      local_8a0 = 0;
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      iVar36 = *(int *)((longlong)&local_930->UsedBufferAllocations[0].ArrayNum + (longlong)pTVar47)
      ;
      local_920 = (longlong *)((ulonglong)local_920 & 0xffffffff00000000);
      plVar16 = local_920;
      puVar31 = local_890;
      if (0 < iVar36) {
        local_920._0_4_ = 0;
        puVar31 = (uint *)0x0;
        local_850 = 0;
        uVar49 = (uint)local_920;
        local_920 = plVar16;
        do {
          uVar33 = 0;
          if ((int)uVar49 < iVar36) {
            uVar33 = ~uVar49 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar51 = *(longlong *)
                    (*(longlong *)
                      ((longlong)&local_930->UsedBufferAllocations[0].AllocatorInstance.Data +
                      (longlong)&(pTVar47->AllocatorInstance).Data) + local_850);
          local_838 = (FScriptContainerElement *)(lVar51 + 0x48);
          local_888 = (wchar_t *)(lVar51 + 0x84);
          local_920 = (longlong *)(lVar51 + 0x58);
          local_890 = (uint *)(lVar51 + 0x3c);
          if (3 < (byte)LogVulkanRHI._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
          lVar21 = *local_920;
          uVar32 = (ulonglong)*(uint *)local_838;
          if (local_928 == (int *)0x7) {
            local_8a8 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                         *)((longlong)&(local_8a8->AllocatorInstance).Data + lVar21);
            local_8a0 = local_8a0 + uVar32;
            local_880 = local_880 + lVar21;
            local_898 = local_898 + uVar32;
          }
          else {
            local_8b0 = local_8b0 + uVar32;
            puVar31 = (uint *)((longlong)puVar31 + lVar21);
            local_878 = local_878 + lVar21;
            local_8f0 = local_8f0 + uVar32;
          }
          if ((*local_890 & 1) == 0) {
            *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x28) =
                 *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x28) + 1;
            *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x38) =
                 *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x38) + 1;
            *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x18) =
                 *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x18) + *local_920;
            *(ulonglong *)(FVar17.Data + lVar50 * 0x48 + 0x20) =
                 *(longlong *)(FVar17.Data + lVar50 * 0x48 + 0x20) + (ulonglong)*(uint *)local_838;
            *(ulonglong *)(FVar17.Data + lVar50 * 0x48) =
                 *(longlong *)(FVar17.Data + lVar50 * 0x48) + (ulonglong)*(uint *)local_888;
            *(uint *)(FVar17.Data + lVar50 * 0x48 + 0x40) =
                 *(uint *)(FVar17.Data + lVar50 * 0x48 + 0x40) | *local_890;
          }
          else {
            *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x28) =
                 *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x28) + 1;
            *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x38) =
                 *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x38) + 1;
            *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x18) =
                 *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x18) + *local_920;
            *(ulonglong *)(FVar25.Data + lVar29 * 0x48 + 0x20) =
                 *(longlong *)(FVar25.Data + lVar29 * 0x48 + 0x20) + (ulonglong)*(uint *)local_838;
            *(ulonglong *)(FVar25.Data + lVar29 * 0x48) =
                 *(longlong *)(FVar25.Data + lVar29 * 0x48) + (ulonglong)*(uint *)local_888;
            *(uint *)(FVar25.Data + lVar29 * 0x48 + 0x40) =
                 *(uint *)(FVar25.Data + lVar29 * 0x48 + 0x40) | *local_890;
          }
          uVar33 = local_8f8->memoryTypes[*(uint *)(lVar51 + 0x38)].heapIndex;
          local_920 = (longlong *)CONCAT44(local_920._4_4_,uVar33);
          uVar34 = 0;
          if ((int)uVar33 < local_8d0.ArrayNum) {
            uVar34 = ~uVar33 >> 0x1f;
          }
          if (uVar34 == 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar33 = (uint)local_920;
          }
          uVar49 = uVar49 + 1;
          local_850 = local_850 + 8;
          lVar21 = (longlong)(int)uVar33;
          *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x28) =
               *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x28) + 1;
          *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x38) =
               *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x38) + 1;
          *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x18) =
               *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x18) +
               *(longlong *)(lVar51 + 0x58);
          *(ulonglong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x20) =
               *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48 + 0x20) +
               (ulonglong)*(uint *)(lVar51 + 0x48);
          *(ulonglong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48) =
               *(longlong *)(local_8d0.AllocatorInstance.Data + lVar21 * 0x48) +
               (ulonglong)*(uint *)(lVar51 + 0x84);
          iVar36 = *(int *)((longlong)&local_930->UsedBufferAllocations[0].ArrayNum +
                           (longlong)local_900);
          pTVar47 = local_900;
          uVar33 = local_934;
        } while ((int)uVar49 < iVar36);
      }
      local_890 = puVar31;
      uVar49 = local_8d8;
      piVar40 = local_928;
      if (local_8d8 == 7) {
        if ((byte)LogVulkanRHI._0_1_ < 4) goto LAB_145b1631a;
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        goto LAB_145b162fe;
      }
      local_928 = piVar40;
      local_8d8 = uVar49;
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        local_928 = piVar40;
        local_8d8 = uVar49;
      }
    }
    local_8d8 = local_8d8 + 1;
    local_928 = (int *)((longlong)local_928 + 1);
    iVar36 = local_8c0;
    if (7 < local_8d8) {
LAB_145b162fe:
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
LAB_145b1631a:
      if ((3 < (byte)LogVulkanRHI._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
         3 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      lVar29 = (longlong)(int)local_910;
      uVar49 = 0;
      uVar34 = 0;
      if ((int)local_910 < local_8e8.ArrayNum) {
        uVar34 = ~local_910 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      local_888 = (wchar_t *)(lVar29 * 9);
      local_838 = local_8e8.AllocatorInstance.Data;
      local_920 = (longlong *)((ulonglong)local_920 & 0xffffffff00000000);
      pFVar38 = local_930;
      if (0 < (local_930->ResourceTypeHeaps).ArrayNum) {
        local_8b0 = 0;
        do {
          lVar29 = local_8b0;
          uVar33 = 0;
          if ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum) {
            uVar33 = ~uVar49 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          lVar50 = *(longlong *)((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + lVar29);
          if (lVar50 != 0) {
            pwVar37 = *(wchar_t **)(lVar50 + 0xf8);
            iVar36 = *(int *)(lVar50 + 0x100);
            local_8a8 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                         *)0x0;
            local_8f0 = 0;
            pwVar24 = pwVar37 + (longlong)iVar36 * 4;
            local_898 = 0;
            local_8a0 = 0;
            local_908 = pwVar24;
            while( true ) {
              lVar18 = local_898;
              lVar21 = local_8a0;
              lVar51 = local_8f0;
              local_900 = local_8a8;
              if (*(int *)(lVar50 + 0x100) != iVar36) {
                local_918 = 0;
                `TCheckedPointerIterator<VulkanRHI::FVulkanSubresourceAllocator_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_918);
              }
              pFVar38 = local_930;
              if (pwVar37 == pwVar24) break;
              lVar29 = *(longlong *)pwVar37;
              local_8a8 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                           *)((longlong)&(local_900->AllocatorInstance).Data + 1);
              local_8f0 = (ulonglong)*(uint *)(lVar29 + 0x48) + local_8f0;
              local_898 = *(longlong *)(lVar29 + 0x58) + local_898;
              local_8a0 = (ulonglong)*(uint *)(lVar29 + 0x84) + local_8a0;
              pwVar37 = pwVar37 + 4;
            }
            uVar49 = (uint)local_920;
            uVar33 = 0;
            if ((int)(uint)local_920 < (local_930->ResourceTypeHeaps).ArrayNum) {
              uVar33 = ~(uint)local_920 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar29 = local_8b0;
            uVar33 = local_8f8->memoryTypes
                     [*(ushort *)
                       (*(longlong *)
                         ((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + local_8b0) + 0x60)].
                     heapIndex;
            lVar50 = (longlong)(int)uVar33;
            uVar34 = 0;
            if ((int)uVar33 < local_8d0.ArrayNum) {
              uVar34 = ~uVar33 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(longlong *)(local_8d0.AllocatorInstance.Data + lVar50 * 0x48 + 8) =
                 *(longlong *)(local_8d0.AllocatorInstance.Data + lVar50 * 0x48 + 8) + lVar21;
            *(longlong *)(local_8d0.AllocatorInstance.Data + lVar50 * 0x48 + 0x10) =
                 *(longlong *)(local_8d0.AllocatorInstance.Data + lVar50 * 0x48 + 0x10) + lVar18;
            *(longlong *)(local_8d0.AllocatorInstance.Data + lVar50 * 0x48 + 0x20) =
                 *(longlong *)(local_8d0.AllocatorInstance.Data + lVar50 * 0x48 + 0x20) + lVar51;
            *(undefined1 **)(local_8d0.AllocatorInstance.Data + lVar50 * 0x48 + 0x28) =
                 (undefined1 *)
                 ((longlong)&(local_8a8->AllocatorInstance).Data +
                 *(longlong *)(local_8d0.AllocatorInstance.Data + lVar50 * 0x48 + 0x28));
            *(undefined8 *)(local_838 + (longlong)local_888 * 8) =
                 *(undefined8 *)(local_838 + (longlong)local_888 * 8);
            *(longlong *)(local_838 + (longlong)local_888 * 8 + 8) =
                 *(longlong *)(local_838 + (longlong)local_888 * 8 + 8) + lVar21;
            *(longlong *)(local_838 + (longlong)local_888 * 8 + 0x10) =
                 *(longlong *)(local_838 + (longlong)local_888 * 8 + 0x10) + lVar18;
            *(longlong *)(local_838 + (longlong)local_888 * 8 + 0x20) =
                 *(longlong *)(local_838 + (longlong)local_888 * 8 + 0x20) + lVar51;
            *(undefined1 **)(local_838 + (longlong)local_888 * 8 + 0x28) =
                 (undefined1 *)
                 ((longlong)&(local_8a8->AllocatorInstance).Data +
                 *(longlong *)(local_838 + (longlong)local_888 * 8 + 0x28));
            pFVar38 = local_930;
          }
          uVar49 = uVar49 + 1;
          local_8b0 = lVar29 + 8;
          local_920 = (longlong *)CONCAT44(local_920._4_4_,uVar49);
          uVar33 = local_934;
        } while ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum);
      }
      uVar32 = 0;
      local_5c8.BufferAllocations = 0;
      local_5c8.ImageAllocations = 0;
      local_5c8.UsedImageMemory = 0;
      local_5c8.UsedBufferMemory = 0;
      local_5c8.TotalMemory = 0;
      local_5c8.Pages = 0;
      local_5c8.ImagePages = 0;
      local_5c8.BufferPages = 0;
      local_5c8.MemoryFlags = 0;
      local_848.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_848.ArrayNum = 0;
      local_848.ArrayMax = 0;
      FStagingManager::GetMemoryDump(&pFVar38->Device->StagingManager,&local_5c8);
      FDeviceMemoryManager::GetMemoryDump(&pFVar38->Device->DeviceMemoryManager,&local_848);
      if (((3 < (byte)LogVulkanRHI._0_1_) &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
          3 < (byte)LogVulkanRHI._0_1_)) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
         3 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar30 = uVar32;
      if (0 < local_848.ArrayNum) {
        do {
          uVar34 = (uint)uVar30;
          uVar49 = 0;
          if ((int)uVar34 < local_848.ArrayNum) {
            uVar49 = ~uVar34 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar42 = (FResourceHeapStats *)
                    (local_848.AllocatorInstance.Data + (longlong)(int)uVar34 * 0x48);
          ::FString::PrintfImpl(&local_600,L"Device Heap %d");
          `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                    (&local_938,&local_600,pFVar42);
          if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_600.Data.AllocatorInstance.Data);
          }
          uVar30 = (ulonglong)(uVar34 + 1);
        } while ((int)(uVar34 + 1) < local_848.ArrayNum);
      }
      if (((3 < (byte)LogVulkanRHI._0_1_) &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
          3 < (byte)LogVulkanRHI._0_1_)) &&
         ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
          3 < (byte)LogVulkanRHI._0_1_ &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
          3 < (byte)LogVulkanRHI._0_1_)))) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      local_788.BufferAllocations = 0;
      local_788.ImageAllocations = 0;
      local_788.UsedImageMemory = 0;
      local_788.UsedBufferMemory = 0;
      local_788.TotalMemory = 0;
      local_788.Pages = 0;
      local_788.ImagePages = 0;
      local_788.BufferPages = 0;
      local_788.MemoryFlags = 0;
      local_828.BufferAllocations = 0;
      local_828.ImageAllocations = 0;
      local_828.UsedImageMemory = 0;
      local_828.UsedBufferMemory = 0;
      local_828.TotalMemory = 0;
      local_828.Pages = 0;
      local_828.ImagePages = 0;
      local_828.BufferPages = 0;
      local_828.MemoryFlags = 0;
      local_7d8.BufferAllocations = 0;
      local_7d8.ImageAllocations = 0;
      local_7d8.UsedImageMemory = 0;
      local_7d8.UsedBufferMemory = 0;
      local_7d8.TotalMemory = 0;
      local_7d8.Pages = 0;
      local_7d8.ImagePages = 0;
      local_7d8.BufferPages = 0;
      local_7d8.MemoryFlags = 0;
      if (0 < local_8e8.ArrayNum) {
        local_900 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
                    0x0;
        uVar30 = uVar32;
        uVar39 = uVar32;
        uVar48 = uVar32;
        do {
          uVar27 = local_788.BufferAllocations;
          pTVar47 = local_900;
          uVar33 = (uint)uVar39;
          uVar49 = 0;
          if ((int)uVar33 < local_8e8.ArrayNum) {
            uVar49 = ~uVar33 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar42 = (FResourceHeapStats *)(local_8e8.AllocatorInstance.Data + (longlong)pTVar47);
          uVar5 = pFVar42->BufferAllocations;
          uVar6 = pFVar42->ImageAllocations;
          local_788.BufferAllocations = uVar27 + uVar5;
          uVar27 = pFVar42->UsedImageMemory;
          uVar7 = pFVar42->UsedBufferMemory;
          uVar8 = pFVar42->TotalMemory;
          uVar9 = pFVar42->Pages;
          uVar10 = pFVar42->ImagePages;
          uVar11 = pFVar42->BufferPages;
          local_788.ImageAllocations = local_788.ImageAllocations + uVar6;
          local_788.UsedImageMemory = local_788.UsedImageMemory + uVar27;
          local_788.UsedBufferMemory = local_788.UsedBufferMemory + uVar7;
          local_788.TotalMemory = local_788.TotalMemory + uVar8;
          local_788.Pages = local_788.Pages + uVar9;
          local_788.ImagePages = local_788.ImagePages + uVar10;
          local_788.BufferPages = local_788.BufferPages + uVar11;
          uVar49 = pFVar42->MemoryFlags;
          if ((uVar49 & 1) == 0) {
            local_828.UsedBufferMemory = local_828.UsedBufferMemory + uVar7;
            uVar48 = uVar48 + uVar5;
            local_828.TotalMemory = local_828.TotalMemory + uVar8;
            uVar32 = uVar32 + uVar6;
            local_828.Pages = local_828.Pages + uVar9;
            uVar30 = uVar30 + uVar27;
            local_828.ImagePages = local_828.ImagePages + uVar10;
            local_828.BufferPages = local_828.BufferPages + uVar11;
            local_828.MemoryFlags = local_828.MemoryFlags | uVar49;
            local_828.BufferAllocations = uVar48;
            local_828.ImageAllocations = uVar32;
            local_828.UsedImageMemory = uVar30;
          }
          else {
            local_7d8.BufferAllocations = local_7d8.BufferAllocations + uVar5;
            local_7d8.ImageAllocations = local_7d8.ImageAllocations + uVar6;
            local_7d8.UsedImageMemory = local_7d8.UsedImageMemory + uVar27;
            local_7d8.UsedBufferMemory = local_7d8.UsedBufferMemory + uVar7;
            local_7d8.TotalMemory = local_7d8.TotalMemory + uVar8;
            local_7d8.Pages = local_7d8.Pages + uVar9;
            local_7d8.ImagePages = local_7d8.ImagePages + uVar10;
            local_7d8.BufferPages = local_7d8.BufferPages + uVar11;
            local_7d8.MemoryFlags = local_7d8.MemoryFlags | uVar49;
          }
          if (uVar33 == local_910) {
            if (3 < (byte)LogVulkanRHI._0_1_) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            }
            ::FString::FString(&local_5f0,L"Dedicated Pages");
            `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                      (&local_938,&local_5f0,pFVar42);
            FVar25.Data = local_5f0.Data.AllocatorInstance.Data;
          }
          else if (((int)uVar33 < local_8c0) || ((int)local_910 <= (int)uVar33)) {
            ::FString::PrintfImpl(&local_6e0,L"ResourceHeap %d");
            `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                      (&local_938,&local_6e0,pFVar42);
            FVar25.Data = local_6e0.Data.AllocatorInstance.Data;
          }
          else {
            uVar49 = uVar33 - local_8c0 & 7;
            if (((uVar49 < 7) && (uVar49 == 0)) && (3 < (byte)LogVulkanRHI._0_1_)) {
              UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            }
            ::FString::PrintfImpl(&local_5e0,L"Pool %d");
            `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                      (&local_938,&local_5e0,pFVar42);
            FVar25.Data = local_5e0.Data.AllocatorInstance.Data;
          }
          if (FVar25.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar25.Data);
          }
          uVar39 = (ulonglong)(uVar33 + 1);
          local_900 = (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                       *)((longlong)local_900 + 0x48);
        } while ((int)(uVar33 + 1) < local_8e8.ArrayNum);
        uVar33 = 0;
      }
      uVar32 = 0;
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      ::FString::FString(&local_6d0,L"TotalHost");
      `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                (&local_938,&local_6d0,&local_828);
      if (local_6d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6d0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_6c0,L"TotalLocal");
      `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                (&local_938,&local_6c0,&local_7d8);
      if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_6b0,L"Total");
      `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                (&local_938,&local_6b0,&local_788);
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      pVVar46 = local_8f8;
      if (0 < local_8d0.ArrayNum) {
        pVVar43 = local_8f8->memoryHeaps;
        uVar30 = uVar32;
        do {
          uVar34 = (uint)uVar32;
          uVar49 = 0;
          if ((int)uVar34 < local_8d0.ArrayNum) {
            uVar49 = ~uVar34 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar42 = (FResourceHeapStats *)(local_8d0.AllocatorInstance.Data + uVar30);
          pFVar42->TotalMemory = pVVar43->size;
          ::FString::PrintfImpl(&local_6a0,L"Allocated Device Heap %d");
          `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                    (&local_938,&local_6a0,pFVar42);
          if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
          }
          uVar32 = (ulonglong)(uVar34 + 1);
          uVar30 = uVar30 + 0x48;
          pVVar43 = pVVar43 + 1;
        } while ((int)(uVar34 + 1) < local_8d0.ArrayNum);
      }
      if (((3 < (byte)LogVulkanRHI._0_1_) &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
          3 < (byte)LogVulkanRHI._0_1_)) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
         3 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      ::FString::FString(&local_690,L"Staging");
      `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_1>::operator()
                (&local_938,&local_690,&local_5c8);
      if (local_690.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_690.Data.AllocatorInstance.Data);
      }
      if ((3 < (byte)LogVulkanRHI._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
         3 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      local_710 = local_937;
      local_718 = pVVar46;
      if ((3 < (byte)LogVulkanRHI._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
         3 < (byte)LogVulkanRHI._0_1_)) {
        local_908 = VulkanAllocationMetaTypeToString(EVulkanAllocationMetaBufferOther);
        local_888 = VulkanAllocationMetaTypeToString(EVulkanAllocationMetaBufferStaging);
        VulkanAllocationMetaTypeToString(EVulkanAllocationMetaBufferUAV);
        VulkanAllocationMetaTypeToString(EVulkanAllocationMetaImageOther);
        VulkanAllocationMetaTypeToString(EVulkanAllocationMetaImageRenderTarget);
        VulkanAllocationMetaTypeToString(EVulkanAllocationMetaFrameTempBuffer);
        VulkanAllocationMetaTypeToString(EVulkanAllocationMetaMultiBuffer);
        VulkanAllocationMetaTypeToString(EVulkanAllocationMetaUniformBuffer);
        VulkanAllocationMetaTypeToString(EVulkanAllocationMetaUnknown);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        uVar33 = local_934;
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
      }
      uVar32 = _UNK_15076add8;
      uVar15 = ___xmm_000000000000000f0000000000000000;
      local_934 = 0;
      if (0 < (local_930->ResourceTypeHeaps).ArrayNum) {
        local_928 = (int *)0x0;
        do {
          piVar40 = local_928;
          uVar49 = local_934;
          uVar34 = ~local_934 >> 0x1f;
          uVar44 = 0;
          if ((int)local_934 < (local_930->ResourceTypeHeaps).ArrayNum) {
            uVar44 = uVar34;
          }
          local_910 = uVar34;
          if ((uVar44 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if (*(longlong *)
               ((local_930->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)piVar40) != 0) {
            uVar44 = 0;
            local_8f0 = 0;
            do {
              lVar29 = local_8f0;
              uVar20 = 0;
              if ((int)uVar49 < (local_930->ResourceTypeHeaps).ArrayNum) {
                uVar20 = uVar34;
              }
              if ((uVar20 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              local_900 = *(TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                            **)((local_930->ResourceTypeHeaps).AllocatorInstance.Data +
                               (longlong)piVar40);
              uVar20 = 0;
              if ((int)uVar49 < (local_930->ResourceTypeHeaps).ArrayNum) {
                uVar20 = uVar34;
              }
              if ((uVar20 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar49 = *(uint *)(*(longlong *)
                                  ((local_930->ResourceTypeHeaps).AllocatorInstance.Data +
                                  (longlong)piVar40) + 0x50);
              if (((uVar44 < uVar49) && ((int)uVar49 <= (int)uVar44)) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              ::FString::PrintfImpl(&local_700,L"Page[%s] - ResTypeHeaps[%d] ActivePages[%d]");
              pwVar37 = *(wchar_t **)((longlong)&local_900[10].ArrayNum + lVar29);
              iVar36 = *(int *)((longlong)&local_900[0xb].AllocatorInstance.Data + lVar29);
              pwVar24 = pwVar37 + (longlong)iVar36 * 4;
              local_908 = pwVar24;
              while( true ) {
                if (*(int *)((longlong)&local_900[0xb].AllocatorInstance.Data + lVar29) != iVar36) {
                  local_917 = 0;
                  `TCheckedPointerIterator<VulkanRHI::FVulkanSubresourceAllocator_*,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_917);
                }
                if (pwVar37 == pwVar24) break;
                pFVar12 = *(FVulkanSubresourceAllocator **)pwVar37;
                uVar49 = pFVar12->MemoryPropertyFlags;
                if ((uVar49 == 0) &&
                   (uVar49 = local_8f8->memoryTypes[pFVar12->MemoryTypeIndex].propertyFlags,
                   uVar49 == 0)) {
                  pwVar28 = L"";
                }
                else {
                  uVar33 = uVar33 | 0xc0;
                  pbVar22 = string_VkMemoryPropertyFlags
                                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                        *)&local_558,uVar49);
                  if (0xf < (pbVar22->_Mypair)._Myval2._Myres) {
                    pbVar22 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                              (pbVar22->_Mypair)._Myval2._Bx._Ptr;
                  }
                  local_4d8._padding_ = 0;
                  if (pbVar22 ==
                      (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                    local_4d8.Ptr = (wchar_t *)0x0;
                    local_4d8.StringLength = 0;
                    pwVar28 = local_4d8.Ptr;
                    pwVar24 = local_908;
                  }
                  else {
                    sVar23 = strlen((char *)pbVar22);
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_4d8,(char *)pbVar22,(int)sVar23,Yes);
                    pwVar28 = local_4d8.Ptr;
                    pwVar24 = local_908;
                  }
                }
                ::FString::FString(&local_670,pwVar28);
                if (((char)uVar33 < '\0') &&
                   (uVar33 = uVar33 & 0xffffff7f, (void *)local_4d8._padding_ != (void *)0x0)) {
                  FMemory::Free((void *)local_4d8._padding_);
                }
                if ((uVar33 & 0x40) != 0) {
                  uVar33 = uVar33 & 0xffffffbf;
                  if (0xf < uStack_540) {
                    pvVar14 = (void *)CONCAT71(local_558._1_7_,local_558._Buf[0]);
                    uVar27 = uStack_540 + 1;
                    pvVar26 = pvVar14;
                    if (0xfff < uVar27) {
                      pvVar26 = *(void **)((longlong)pvVar14 + -8);
                      uVar27 = uStack_540 + 0x28;
                      if (0x1f < (ulonglong)((longlong)pvVar14 + (-8 - (longlong)pvVar26))) {
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                    }
                    ::operator_delete(pvVar26,uVar27);
                  }
                  local_548 = uVar15;
                  uStack_540 = uVar32;
                  local_558._Buf[0] = '\0';
                }
                ::FString::PrintfImpl(&local_680,L"%s [%4d]");
                `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_2>::operator()
                          (local_937,&local_680,&local_670,pFVar12);
                if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_680.Data.AllocatorInstance.Data);
                }
                if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_670.Data.AllocatorInstance.Data);
                }
                pwVar37 = pwVar37 + 4;
                lVar29 = local_8f0;
              }
              if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_700.Data.AllocatorInstance.Data);
              }
              piVar40 = local_928;
              pFVar38 = local_930;
              local_8f0 = lVar29 + 0x10;
              uVar44 = uVar44 + 1;
              uVar34 = local_910;
              uVar49 = local_934;
            } while (uVar44 < 5);
            uVar49 = 0;
            if ((int)local_934 < (local_930->ResourceTypeHeaps).ArrayNum) {
              uVar49 = ~local_934 >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            lVar29 = *(longlong *)
                      ((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)piVar40);
            ::FString::PrintfImpl(&local_6f0,L"UsedDedicatedImagePages - ResTypeHeaps[%d]");
            pwVar37 = *(wchar_t **)(lVar29 + 0xf8);
            iVar36 = *(int *)(lVar29 + 0x100);
            pwVar24 = pwVar37 + (longlong)iVar36 * 4;
            local_908 = pwVar24;
            while( true ) {
              if (*(int *)(lVar29 + 0x100) != iVar36) {
                local_916 = 0;
                `TCheckedPointerIterator<VulkanRHI::FVulkanSubresourceAllocator_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_916);
              }
              if (pwVar37 == pwVar24) break;
              pFVar12 = *(FVulkanSubresourceAllocator **)pwVar37;
              uVar49 = pFVar12->MemoryPropertyFlags;
              if ((uVar49 == 0) &&
                 (uVar49 = local_8f8->memoryTypes[pFVar12->MemoryTypeIndex].propertyFlags,
                 uVar49 == 0)) {
                pwVar28 = L"";
              }
              else {
                uVar33 = uVar33 | 0x30;
                pbVar22 = string_VkMemoryPropertyFlags
                                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)&local_538,uVar49);
                if (0xf < (pbVar22->_Mypair)._Myval2._Myres) {
                  pbVar22 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                            (pbVar22->_Mypair)._Myval2._Bx._Ptr;
                }
                local_3b8._padding_ = 0;
                if (pbVar22 ==
                    (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
                  local_3b8.Ptr = (wchar_t *)0x0;
                  local_3b8.StringLength = 0;
                  pwVar28 = local_3b8.Ptr;
                  pwVar24 = local_908;
                }
                else {
                  sVar23 = strlen((char *)pbVar22);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_3b8,(char *)pbVar22,(int)sVar23,Yes);
                  pwVar28 = local_3b8.Ptr;
                  pwVar24 = local_908;
                }
              }
              ::FString::FString(&local_650,pwVar28);
              if (((uVar33 & 0x20) != 0) &&
                 (uVar33 = uVar33 & 0xffffffdf, (void *)local_3b8._padding_ != (void *)0x0)) {
                FMemory::Free((void *)local_3b8._padding_);
              }
              if ((uVar33 & 0x10) != 0) {
                uVar33 = uVar33 & 0xffffffef;
                if (0xf < uStack_520) {
                  pvVar14 = (void *)CONCAT71(local_538._1_7_,local_538._Buf[0]);
                  uVar27 = uStack_520 + 1;
                  pvVar26 = pvVar14;
                  if (0xfff < uVar27) {
                    pvVar26 = *(void **)((longlong)pvVar14 + -8);
                    uVar27 = uStack_520 + 0x28;
                    if (0x1f < (ulonglong)((longlong)pvVar14 + (-8 - (longlong)pvVar26))) {
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                  }
                  ::operator_delete(pvVar26,uVar27);
                }
                local_528 = uVar15;
                uStack_520 = uVar32;
                local_538._Buf[0] = '\0';
              }
              ::FString::PrintfImpl(&local_660,L"%s [%4d]");
              `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_2>::operator()
                        (local_937,&local_660,&local_650,pFVar12);
              if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_660.Data.AllocatorInstance.Data);
              }
              if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_650.Data.AllocatorInstance.Data);
              }
              pwVar37 = pwVar37 + 4;
            }
            piVar40 = local_928;
            uVar49 = local_934;
            if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
              piVar40 = local_928;
              uVar49 = local_934;
            }
          }
          local_934 = uVar49 + 1;
          local_928 = (int *)((longlong)piVar40 + 8);
        } while ((int)local_934 < (local_930->ResourceTypeHeaps).ArrayNum);
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      local_928 = &local_930->UsedBufferAllocations[0].ArrayNum;
      local_910 = 0;
      do {
        ::FString::PrintfImpl(&local_728,L"PoolUsed %d");
        ::FString::PrintfImpl(&local_738,L"PoolFree %d");
        FVar25.Data = local_728.Data.AllocatorInstance.Data;
        local_870.Data = (FScriptContainerElement *)0x0;
        iVar36 = local_728.Data.ArrayNum;
        local_868 = iVar36;
        if (iVar36 == 0) {
          local_864 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar36,0,&local_870,iVar36,&local_864);
          memcpy(local_870.Data,FVar25.Data,(longlong)iVar36 * 2);
        }
        pFVar52 = (((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
                   (local_928 + -2))->AllocatorInstance).Data;
        iVar36 = *local_928;
        pFVar1 = pFVar52 + (longlong)iVar36 * 8;
        while( true ) {
          if (*local_928 != iVar36) {
            local_915 = 0;
            `TCheckedPointerIterator<VulkanRHI::FVulkanSubresourceAllocator_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_915);
          }
          if (pFVar52 == pFVar1) break;
          pFVar12 = *(FVulkanSubresourceAllocator **)pFVar52;
          uVar49 = pFVar12->MemoryPropertyFlags;
          if ((uVar49 == 0) &&
             (uVar49 = local_8f8->memoryTypes[pFVar12->MemoryTypeIndex].propertyFlags, uVar49 == 0))
          {
            pwVar24 = L"";
          }
          else {
            uVar33 = uVar33 | 3;
            pbVar22 = string_VkMemoryPropertyFlags
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_518,uVar49);
            if (0xf < (pbVar22->_Mypair)._Myval2._Myres) {
              pbVar22 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar22->_Mypair)._Myval2._Bx._Ptr;
            }
            pwVar24 = (wchar_t *)0x0;
            local_298._padding_ = 0;
            if (pbVar22 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              local_298.Ptr = (wchar_t *)0x0;
              local_298.StringLength = 0;
            }
            else {
              sVar23 = strlen((char *)pbVar22);
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_298,(char *)pbVar22,(int)sVar23,Yes);
              pwVar24 = local_298.Ptr;
            }
          }
          ::FString::FString(&local_630,pwVar24);
          if (((uVar33 & 2) != 0) &&
             (uVar33 = uVar33 & 0xfffffffd, (void *)local_298._padding_ != (void *)0x0)) {
            FMemory::Free((void *)local_298._padding_);
          }
          if ((uVar33 & 1) != 0) {
            uVar33 = uVar33 & 0xfffffffe;
            if (0xf < uStack_500) {
              pvVar14 = (void *)CONCAT71(local_518._1_7_,local_518._Buf[0]);
              uVar27 = uStack_500 + 1;
              pvVar26 = pvVar14;
              if (0xfff < uVar27) {
                pvVar26 = *(void **)((longlong)pvVar14 + -8);
                uVar27 = uStack_500 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar14 + (-8 - (longlong)pvVar26))) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete(pvVar26,uVar27);
            }
            local_508 = uVar15;
            uStack_500 = uVar32;
            local_518._Buf[0] = '\0';
          }
          ::FString::PrintfImpl(&local_640,L"%s [%4d]");
          `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_2>::operator()
                    (local_937,&local_640,&local_630,pFVar12);
          if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_640.Data.AllocatorInstance.Data);
          }
          if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_630.Data.AllocatorInstance.Data);
          }
          pFVar52 = pFVar52 + 8;
        }
        if (local_870.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_870.Data);
        }
        FVar25.Data = local_738.Data.AllocatorInstance.Data;
        local_860.Data = (FScriptContainerElement *)0x0;
        iVar36 = local_738.Data.ArrayNum;
        local_858 = iVar36;
        if (iVar36 == 0) {
          local_854 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar36,0,&local_860,iVar36,&local_854);
          memcpy(local_860.Data,FVar25.Data,(longlong)iVar36 * 2);
        }
        puVar53 = *(undefined8 **)(local_928 + 0x1e);
        iVar36 = local_928[0x20];
        puVar2 = puVar53 + iVar36;
        piVar40 = local_928;
        while( true ) {
          if (piVar40[0x20] != iVar36) {
            local_914 = 0;
            `TCheckedPointerIterator<VulkanRHI::FVulkanSubresourceAllocator_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_914);
          }
          if (puVar53 == puVar2) break;
          pFVar12 = (FVulkanSubresourceAllocator *)*puVar53;
          uVar49 = pFVar12->MemoryPropertyFlags;
          if ((uVar49 == 0) &&
             (uVar49 = local_8f8->memoryTypes[pFVar12->MemoryTypeIndex].propertyFlags, uVar49 == 0))
          {
            pwVar24 = L"";
          }
          else {
            uVar33 = uVar33 | 0xc;
            pbVar22 = string_VkMemoryPropertyFlags
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_4f8,uVar49);
            if (0xf < (pbVar22->_Mypair)._Myval2._Myres) {
              pbVar22 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                        (pbVar22->_Mypair)._Myval2._Bx._Ptr;
            }
            local_178._padding_ = 0;
            if (pbVar22 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
              local_178.Ptr = (wchar_t *)0x0;
              local_178.StringLength = 0;
              pwVar24 = local_178.Ptr;
              piVar40 = local_928;
            }
            else {
              sVar23 = strlen((char *)pbVar22);
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_178,(char *)pbVar22,(int)sVar23,Yes);
              pwVar24 = local_178.Ptr;
              piVar40 = local_928;
            }
          }
          ::FString::FString(&local_610,pwVar24);
          if (((uVar33 & 8) != 0) &&
             (uVar33 = uVar33 & 0xfffffff7, (void *)local_178._padding_ != (void *)0x0)) {
            FMemory::Free((void *)local_178._padding_);
          }
          if ((uVar33 & 4) != 0) {
            uVar33 = uVar33 & 0xfffffffb;
            if (0xf < uStack_4e0) {
              pvVar14 = (void *)CONCAT71(local_4f8._1_7_,local_4f8._Buf[0]);
              uVar27 = uStack_4e0 + 1;
              pvVar26 = pvVar14;
              if (0xfff < uVar27) {
                pvVar26 = *(void **)((longlong)pvVar14 + -8);
                uVar27 = uStack_4e0 + 0x28;
                if (0x1f < (ulonglong)((longlong)pvVar14 + (-8 - (longlong)pvVar26))) {
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
              }
              ::operator_delete(pvVar26,uVar27);
            }
            local_4e8 = uVar15;
            uStack_4e0 = uVar32;
            local_4f8._Buf[0] = '\0';
          }
          ::FString::PrintfImpl(&local_620,L"%s [%4d]");
          `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_2>::operator()
                    (local_937,&local_620,&local_610,pFVar12);
          if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_620.Data.AllocatorInstance.Data);
          }
          if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_610.Data.AllocatorInstance.Data);
          }
          puVar53 = puVar53 + 1;
        }
        if (local_860.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_860.Data);
        }
        if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_738.Data.AllocatorInstance.Data);
        }
        if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_728.Data.AllocatorInstance.Data);
        }
        local_928 = piVar40 + 4;
        local_910 = local_910 + 1;
      } while (local_910 < 8);
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      if (local_913 != '\0') {
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        pFVar38 = local_930;
        uVar49 = 0;
        if (0 < (local_930->ResourceTypeHeaps).ArrayNum) {
          lVar29 = 0;
          do {
            uVar34 = ~uVar49 >> 0x1f;
            uVar33 = 0;
            if ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum) {
              uVar33 = uVar34;
            }
            if ((uVar33 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (*(longlong *)((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + lVar29) != 0) {
              uVar33 = 0;
              do {
                uVar44 = 0;
                if ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum) {
                  uVar44 = uVar34;
                }
                if ((uVar44 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                lVar50 = *(longlong *)((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + lVar29)
                ;
                uVar44 = 0;
                if ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum) {
                  uVar44 = uVar34;
                }
                if ((uVar44 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                uVar44 = *(uint *)(*(longlong *)
                                    ((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + lVar29) +
                                  0x50);
                if (((uVar33 < uVar44) && ((int)uVar44 <= (int)uVar33)) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                ::FString::PrintfImpl(&local_578,L"Page[%s] - ResTypeHeaps[%d] ActivePages[%d]");
                `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_4>::operator()
                          (&local_718,&local_578,
                           (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                            *)((ulonglong)uVar33 * 0x10 + lVar50 + 0xa8));
                uVar33 = uVar33 + 1;
              } while (uVar33 < 5);
              uVar33 = 0;
              if ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum) {
                uVar33 = ~uVar49 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar50 = *(longlong *)((pFVar38->ResourceTypeHeaps).AllocatorInstance.Data + lVar29);
              ::FString::PrintfImpl(&local_568,L"UsedDedicatedImagePages - ResTypeHeaps[%d]");
              `VulkanRHI::FMemoryManager::DumpMemory'::__l2::<lambda_4>::operator()
                        (&local_718,&local_568,
                         (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                          *)(lVar50 + 0xf8));
            }
            uVar49 = uVar49 + 1;
            lVar29 = lVar29 + 8;
          } while ((int)uVar49 < (pFVar38->ResourceTypeHeaps).ArrayNum);
        }
      }
      this_00 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(this_00);
    }
  } while( true );
}

// FreeUniformBuffer @ 145b1c000

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::FreeUniformBuffer(FMemoryManager *this,FVulkanAllocation *param_1)

{
  <unnamed_type_UBAllocations> *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  FName FVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory> FVar18;
  FName local_res10;
  
  if ((param_1->Type != 0 & (byte)param_1->field_0x1b >> 6) != 0) {
    uVar3 = param_1->Size;
    if ((ulonglong)uVar3 != 0) {
      FVar18 = StatPtr_STAT_UniformBufferMemory;
      if (StatPtr_STAT_UniformBufferMemory ==
          (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)0x0) {
        pFVar17 = ::FName::FName(&local_res10,"STAT_UniformBufferMemory");
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_UniformBufferMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UniformBufferMemory,*pFVar17,
                            L"Uniform Buffer Memory","STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,
                            false,ST_int64,false,false,MCR_GPU);
      }
      FVar5 = *(FName *)FVar18;
      local_res10.ComparisonIndex = FVar5.ComparisonIndex.Value;
      local_res10.Number = FVar5.Number;
      FThreadStats::AddMessage<__int64>(FVar5,Subtract,(ulonglong)uVar3,false);
    }
    lpCriticalSection = &this->UBAllocations;
    if (lpCriticalSection == (<unnamed_type_UBAllocations> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ProcessPendingUBFreesNoLock(this,false);
    iVar16 = (this->UBAllocations).PendingFree.ArrayNum;
    piVar1 = &(this->UBAllocations).PendingFree.ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(this->UBAllocations).PendingFree.AllocatorInstance,piVar1);
    }
    (this->UBAllocations).PendingFree.ArrayNum = iVar16 + 1;
    pFVar2 = (this->UBAllocations).PendingFree.AllocatorInstance.Data + (longlong)iVar16 * 0x28;
    DefaultConstructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int>(pFVar2,1);
    *(ulonglong *)(pFVar2 + 0x20) = (ulonglong)GFrameNumberRenderThread;
    uVar6 = *(undefined4 *)((longlong)&param_1->VulkanHandle + 4);
    uVar3 = param_1->HandleId;
    uVar4 = param_1->Size;
    uVar7 = *(undefined4 *)pFVar2;
    uVar8 = *(undefined4 *)(pFVar2 + 4);
    uVar9 = *(uint *)(pFVar2 + 8);
    uVar10 = *(uint *)(pFVar2 + 0xc);
    uVar11 = *(uint *)(pFVar2 + 0x10);
    uVar12 = *(uint *)(pFVar2 + 0x14);
    uVar13 = *(undefined4 *)(pFVar2 + 0x18);
    uVar14 = *(undefined4 *)(pFVar2 + 0x1c);
    *(int *)pFVar2 = (int)param_1->VulkanHandle;
    *(undefined4 *)(pFVar2 + 4) = uVar6;
    *(uint *)(pFVar2 + 8) = uVar3;
    *(uint *)(pFVar2 + 0xc) = uVar4;
    uVar3 = param_1->AllocationIndex;
    uVar6 = *(undefined4 *)&param_1->AllocatorIndex;
    uVar15 = *(undefined4 *)&param_1->field_0x1c;
    *(uint *)(pFVar2 + 0x10) = param_1->Offset;
    *(uint *)(pFVar2 + 0x14) = uVar3;
    *(undefined4 *)(pFVar2 + 0x18) = uVar6;
    *(undefined4 *)(pFVar2 + 0x1c) = uVar15;
    *(undefined4 *)&param_1->VulkanHandle = uVar7;
    *(undefined4 *)((longlong)&param_1->VulkanHandle + 4) = uVar8;
    param_1->HandleId = uVar9;
    param_1->Size = uVar10;
    param_1->Offset = uVar11;
    param_1->AllocationIndex = uVar12;
    param_1->AllocatorIndex = (short)uVar13;
    param_1->MetaType = (char)((uint)uVar13 >> 0x10);
    param_1->field_0x1b = (char)((uint)uVar13 >> 0x18);
    *(undefined4 *)&param_1->field_0x1c = uVar14;
    uVar3 = (this->UBAllocations).Peak;
    uVar4 = (this->UBAllocations).PendingFree.ArrayNum;
    if (uVar4 < uVar3) {
      uVar4 = uVar3;
    }
    (this->UBAllocations).Peak = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// FreeVulkanAllocation @ 145b1c1c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::FreeVulkanAllocation
          (FMemoryManager *this,FVulkanAllocation *param_1,EVulkanFreeFlags param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVulkanSubresourceAllocator *pFVar5;
  byte bVar6;
  
  if ((param_2 & EVulkanFreeFlag_DontDefer) == EVulkanFreeFlag_None) {
    pFVar5 = GetSubresourceAllocator(this,(uint)param_1->AllocatorIndex);
    if (param_1->Type != pFVar5->Type) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation.GetType() == Type",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x966,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((uint)param_1->AllocatorIndex != pFVar5->AllocatorIndex) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation.AllocatorIndex == GetAllocatorIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x967,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lpCriticalSection = &pFVar5->SubresourceAllocatorCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = param_1->AllocationIndex;
    uVar4 = 0;
    if ((int)uVar1 < (pFVar5->InternalData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)((pFVar5->InternalData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x40) = 3
    ;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FDeferredDeletionQueue2::EnqueueResourceAllocation(&this->Device->DeferredDeletionQueue,param_1)
    ;
    goto LAB_145b1c4b9;
  }
  bVar6 = param_1->Type;
  if (bVar6 == 1) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Cyan,"FResourceHeapManager_FreeVulkanAllocationPooledBuffer");
    if (CpuChannel->Enabled < 0) {
LAB_145b1c36a:
      bVar3 = false;
    }
    else {
      bVar3 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2376,
                 "FResourceHeapManager_FreeVulkanAllocationPooledBuffer",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                 ,0x948);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2376);
    }
LAB_145b1c36c:
    DecMetaStats(param_1->MetaType,param_1->Size);
    pFVar5 = GetSubresourceAllocator(this,(uint)param_1->AllocatorIndex);
    FVulkanSubresourceAllocator::Free(pFVar5,param_1);
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  else {
    if (bVar6 == 2) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Cyan,"FResourceHeapManager_FreeVulkanAllocationBuffer");
      if (CpuChannel->Enabled < 0) goto LAB_145b1c36a;
      bVar3 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2383,"FResourceHeapManager_FreeVulkanAllocationBuffer",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                 ,0x94f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2383);
      goto LAB_145b1c36c;
    }
    if (bVar6 == 3) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Cyan,"FResourceHeapManager_FreeVulkanAllocationImage");
      if (CpuChannel->Enabled < 0) goto LAB_145b1c36a;
      bVar3 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2391,"FResourceHeapManager_FreeVulkanAllocationImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                 ,0x957);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2391);
      goto LAB_145b1c36c;
    }
    if (bVar6 == 4) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Cyan,"FResourceHeapManager_FreeVulkanAllocationImageDedicated");
      if (CpuChannel->Enabled < 0) goto LAB_145b1c36a;
      bVar3 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2398,
                 "FResourceHeapManager_FreeVulkanAllocationImageDedicated",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                 ,0x95e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2398);
      goto LAB_145b1c36c;
    }
  }
  param_1->VulkanHandle = 0;
  param_1->HandleId = 0;
  param_1->Size = 0;
  param_1->Offset = 0;
  param_1->AllocationIndex = 0;
  param_1->AllocatorIndex = 0;
  param_1->MetaType = EVulkanAllocationMetaUnknown;
  *(undefined5 *)&param_1->field_0x1b = 0;
LAB_145b1c4b9:
  if ((param_1->Type != 0 & (byte)param_1->field_0x1b >> 6) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Allocation.HasAllocation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x9c4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// FreeVulkanAllocationBuffer @ 145b1c520

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::FreeVulkanAllocationBuffer
          (FMemoryManager *this,FVulkanAllocation *param_1)

{
  FVulkanSubresourceAllocator *this_00;
  bool bVar1;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Cyan,"FResourceHeapManager_FreeVulkanAllocationBuffer");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2383,"FResourceHeapManager_FreeVulkanAllocationBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0x94f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2383);
  }
  DecMetaStats(param_1->MetaType,param_1->Size);
  this_00 = GetSubresourceAllocator(this,(uint)param_1->AllocatorIndex);
  FVulkanSubresourceAllocator::Free(this_00,param_1);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FreeVulkanAllocationImage @ 145b1c5e0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::FreeVulkanAllocationImage
          (FMemoryManager *this,FVulkanAllocation *param_1)

{
  FVulkanSubresourceAllocator *this_00;
  bool bVar1;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Cyan,"FResourceHeapManager_FreeVulkanAllocationImage");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2391,"FResourceHeapManager_FreeVulkanAllocationImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0x957);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2391);
  }
  DecMetaStats(param_1->MetaType,param_1->Size);
  this_00 = GetSubresourceAllocator(this,(uint)param_1->AllocatorIndex);
  FVulkanSubresourceAllocator::Free(this_00,param_1);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FreeVulkanAllocationImageDedicated @ 145b1c6a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::FreeVulkanAllocationImageDedicated
          (FMemoryManager *this,FVulkanAllocation *param_1)

{
  FVulkanSubresourceAllocator *this_00;
  bool bVar1;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Cyan,"FResourceHeapManager_FreeVulkanAllocationImageDedicated");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2398,
               "FResourceHeapManager_FreeVulkanAllocationImageDedicated",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0x95e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2398);
  }
  DecMetaStats(param_1->MetaType,param_1->Size);
  this_00 = GetSubresourceAllocator(this,(uint)param_1->AllocatorIndex);
  FVulkanSubresourceAllocator::Free(this_00,param_1);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FreeVulkanAllocationPooledBuffer @ 145b1c760

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::FreeVulkanAllocationPooledBuffer
          (FMemoryManager *this,FVulkanAllocation *param_1)

{
  FVulkanSubresourceAllocator *this_00;
  bool bVar1;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Cyan,"FResourceHeapManager_FreeVulkanAllocationPooledBuffer");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2376,"FResourceHeapManager_FreeVulkanAllocationPooledBuffer"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0x948);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2376);
  }
  DecMetaStats(param_1->MetaType,param_1->Size);
  this_00 = GetSubresourceAllocator(this,(uint)param_1->AllocatorIndex);
  FVulkanSubresourceAllocator::Free(this_00,param_1);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GetSubresourceAllocator @ 145b1f5a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanSubresourceAllocator * __thiscall
VulkanRHI::FMemoryManager::GetSubresourceAllocator(FMemoryManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVulkanSubresourceAllocator *pFVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&this->AllBufferAllocationsLock);
  uVar3 = 0;
  if ((int)param_1 < (this->AllBufferAllocations).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVulkanSubresourceAllocator *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = *(FVulkanSubresourceAllocator **)
            ((this->AllBufferAllocations).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  ReleaseSRWLockShared((PSRWLOCK)&this->AllBufferAllocationsLock);
  return pFVar4;
}

// HandleOOM @ 145b23eb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::HandleOOM
          (FMemoryManager *this,bool param_1,VkResult param_2,ulong64 param_3,uint param_4)

{
  FOutputDeviceRedirector *pFVar1;
  
  if (param_1) {
    return;
  }
  DumpMemory(this,true);
  pFVar1 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::Panic(pFVar1);
  pFVar1 = GetGlobalLogSingleton();
  DumpRenderTargetPoolMemory((FOutputDevice *)pFVar1);
  pFVar1 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
  FOutputDeviceRedirector::Flush(pFVar1);
}

// Init @ 145b24820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall VulkanRHI::FMemoryManager::Init(FMemoryManager *this)

{
  TArray<VulkanRHI::FVulkanResourceHeap_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  VkPhysicalDeviceMemoryProperties *pVVar3;
  FDeviceMemoryManager *pFVar4;
  ForElementType<VulkanRHI::FVulkanPageSizeBucket> *pFVar5;
  FDeviceMemoryManager *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FVulkanResourceHeap *pFVar11;
  FVulkanResourceHeap *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  FVulkanResourceHeap *pFVar16;
  uint uVar17;
  uint uVar18;
  FVulkanResourceHeap *pFVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStackY_128 [32];
  undefined1 local_c0 [24];
  uchar auStack_a8 [8];
  undefined1 local_a0 [24];
  uchar auStack_88 [8];
  undefined1 local_80 [72];
  uchar auStack_38 [8];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar4 = this->DeviceMemoryManager;
  uVar18 = (pFVar4->MemoryProperties).memoryTypeCount;
  pVVar3 = &pFVar4->MemoryProperties;
  pTVar1 = &this->ResourceTypeHeaps;
  piVar2 = &(this->ResourceTypeHeaps).ArrayNum;
  uVar25 = (1 << ((byte)uVar18 & 0x1f)) - 1;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar18,&pTVar1->AllocatorInstance,piVar2,
                     &(this->ResourceTypeHeaps).ArrayMax);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8,0,(longlong)(int)uVar18 << 3);
  uVar13 = 0;
  uVar18 = (this->DeviceMemoryManager->MemoryProperties).memoryTypeCount;
  uVar24 = 0xfffffff8;
  uVar14 = uVar25;
  if (uVar18 != 0) {
    do {
      if (uVar14 == 0) break;
      if (((uVar14 & 1) != 0) &&
         (((byte)(this->DeviceMemoryManager->MemoryProperties).memoryTypes[uVar13].propertyFlags & 6
          ) == 6)) goto LAB_145b24920;
      uVar14 = uVar14 >> 1;
      uVar17 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar17;
    } while (uVar17 < uVar18);
  }
  uVar13 = 0;
  VerifyVulkanResult(VK_ERROR_FEATURE_NOT_PRESENT,
                     "DeviceMemoryManager->GetMemoryTypeFromProperties(TypeBits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, &TypeIndex)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0x834);
LAB_145b24920:
  pFVar11 = ::operator_new(0x108);
  uVar18 = (uint)uVar13;
  if (pFVar11 == (FVulkanResourceHeap *)0x0) {
    pFVar11 = (FVulkanResourceHeap *)0x0;
  }
  else {
    pFVar11 = FVulkanResourceHeap::FVulkanResourceHeap(pFVar11,this,uVar18,0x2000000);
  }
  uVar14 = 0;
  if ((int)uVar18 < *piVar2) {
    uVar14 = ~uVar18 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FVulkanResourceHeap **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 8) = pFVar11;
  pFVar11 = (FVulkanResourceHeap *)0x0;
  uVar14 = 0;
  if ((int)uVar18 < (this->ResourceTypeHeaps).ArrayNum) {
    uVar14 = ~uVar18 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = *(ForElementType<VulkanRHI::FVulkanPageSizeBucket> **)
            ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar18 * 8);
  local_c0[0] = '\0';
  local_c0[1] = '\0';
  local_c0[2] = '\0';
  local_c0[3] = '\x02';
  local_c0[4] = '\0';
  local_c0[5] = '\0';
  local_c0[6] = '\0';
  local_c0[7] = '\0';
  local_c0[8] = '\0';
  local_c0[9] = '\0';
  local_c0[10] = '\0';
  local_c0[0xb] = '\x02';
  local_c0[0xc] = '\x03';
  local_c0[0xd] = '\0';
  local_c0[0xe] = '\0';
  local_c0[0xf] = '\0';
  local_c0[0x10] = 0xff;
  local_c0[0x11] = 0xff;
  local_c0[0x12] = 0xff;
  local_c0[0x13] = 0xff;
  local_c0[0x14] = 0xff;
  local_c0[0x15] = 0xff;
  local_c0[0x16] = 0xff;
  local_c0[0x17] = 0xff;
  auStack_a8[0] = '\0';
  auStack_a8[1] = '\0';
  auStack_a8[2] = '\0';
  auStack_a8[3] = '\0';
  auStack_a8[4] = '\x03';
  auStack_a8[5] = '\0';
  auStack_a8[6] = '\0';
  auStack_a8[7] = '\0';
  if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)local_c0) &&
      (local_c0 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
  iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
  if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                      (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
  }
  *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
  *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_c0._0_8_;
  *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) = CONCAT44(local_c0._12_4_,local_c0._8_4_);
  if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)(local_c0 + 0x10)) &&
      (local_c0 + 0x10 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
  iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
  if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                      (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
  }
  *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
  *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_c0._16_8_;
  *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) = CONCAT44(auStack_a8._4_4_,auStack_a8._0_4_);
  pFVar6 = this->DeviceMemoryManager;
  uVar18 = (pFVar6->MemoryProperties).memoryTypeCount;
  uVar10 = 0;
  pFVar12 = pFVar11;
  uVar14 = uVar25;
  uVar17 = uVar25;
  if (uVar18 != 0) {
    do {
      if (uVar14 == 0) break;
      if (((uVar14 & 1) != 0) &&
         (((byte)(pFVar6->MemoryProperties).memoryTypes[(longlong)pFVar12].propertyFlags & 10) == 10
         )) {
        pFVar16 = (FVulkanResourceHeap *)0x0;
        pFVar19 = pFVar11;
        goto LAB_145b24ba0;
      }
      uVar14 = uVar14 >> 1;
      uVar21 = (int)pFVar12 + 1;
      pFVar12 = (FVulkanResourceHeap *)(ulonglong)uVar21;
    } while (uVar21 < uVar18);
  }
  iVar9 = -8;
  pFVar16 = pFVar11;
  pFVar19 = (FVulkanResourceHeap *)0xfffffff8;
  pFVar12 = pFVar11;
  uVar14 = uVar10;
  uVar21 = uVar24;
  uVar22 = uVar10;
  if (uVar18 != 0) {
LAB_145b24ba0:
    do {
      uVar14 = (uint)pFVar12;
      iVar9 = (int)pFVar19;
      uVar21 = uVar24;
      uVar22 = 0;
      if ((uVar17 == 0) ||
         (((uVar17 & 1) != 0 &&
          (uVar21 = uVar10, uVar22 = (uint)pFVar16,
          ((pFVar6->MemoryProperties).memoryTypes[(longlong)pFVar16].propertyFlags & 2) != 0))))
      break;
      uVar15 = (uint)pFVar16 + 1;
      pFVar16 = (FVulkanResourceHeap *)(ulonglong)uVar15;
      uVar17 = uVar17 >> 1;
      uVar21 = uVar24;
      uVar22 = 0;
    } while (uVar15 < uVar18);
  }
  if ((iVar9 != 0) && (uVar14 = uVar22, uVar21 != 0)) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    uVar14 = 0;
  }
  pFVar12 = ::operator_new(0x108);
  if (pFVar12 != (FVulkanResourceHeap *)0x0) {
    pFVar11 = FVulkanResourceHeap::FVulkanResourceHeap(pFVar12,this,uVar14,0x2000000);
  }
  if ((int)uVar14 < (this->ResourceTypeHeaps).ArrayNum) {
    uVar10 = ~uVar14 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(FVulkanResourceHeap **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar14 * 8) = pFVar11;
  uVar18 = 0;
  if ((int)uVar14 < (this->ResourceTypeHeaps).ArrayNum) {
    uVar18 = ~uVar14 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = *(ForElementType<VulkanRHI::FVulkanPageSizeBucket> **)
            ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar14 * 8);
  local_a0[0] = '\0';
  local_a0[1] = '\0';
  local_a0[2] = '\0';
  local_a0[3] = '\x02';
  local_a0[4] = '\0';
  local_a0[5] = '\0';
  local_a0[6] = '\0';
  local_a0[7] = '\0';
  local_a0[8] = '\0';
  local_a0[9] = '\0';
  local_a0[10] = '\0';
  local_a0[0xb] = '\x02';
  local_a0[0xc] = '\x03';
  local_a0[0xd] = '\0';
  local_a0[0xe] = '\0';
  local_a0[0xf] = '\0';
  local_a0[0x10] = 0xff;
  local_a0[0x11] = 0xff;
  local_a0[0x12] = 0xff;
  local_a0[0x13] = 0xff;
  local_a0[0x14] = 0xff;
  local_a0[0x15] = 0xff;
  local_a0[0x16] = 0xff;
  local_a0[0x17] = 0xff;
  auStack_88[0] = '\0';
  auStack_88[1] = '\0';
  auStack_88[2] = '\0';
  auStack_88[3] = '\0';
  auStack_88[4] = '\x03';
  auStack_88[5] = '\0';
  auStack_88[6] = '\0';
  auStack_88[7] = '\0';
  if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)local_a0) &&
      (local_a0 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
  iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
  if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                      (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
  }
  *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
  *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_a0._0_8_;
  *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) = CONCAT44(local_a0._12_4_,local_a0._8_4_);
  if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)(local_a0 + 0x10)) &&
      (local_a0 + 0x10 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
  iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
  if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                      (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
  }
  *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
  uVar13 = 0;
  *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_a0._16_8_;
  *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) = CONCAT44(auStack_88._4_4_,auStack_88._0_4_);
  uVar18 = (this->DeviceMemoryManager->MemoryProperties).memoryTypeCount;
  if (uVar18 != 0) {
    do {
      if (uVar25 == 0) break;
      if (((uVar25 & 1) != 0) &&
         (((this->DeviceMemoryManager->MemoryProperties).memoryTypes[uVar13].propertyFlags & 1) != 0
         )) goto LAB_145b24e86;
      uVar25 = uVar25 >> 1;
      uVar14 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar14;
    } while (uVar14 < uVar18);
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("DeviceMemoryManager->GetMemoryTypeFromProperties(TypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT, &Index) == VK_SUCCESS"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0x863,L"");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_145b24e86:
  uVar13 = 0;
  if (pVVar3->memoryTypeCount != 0) {
    do {
      uVar24 = (uint)uVar13;
      uVar14 = ~uVar24 >> 0x1f;
      uVar23 = (pFVar4->MemoryProperties).memoryHeaps
               [(int)((VkPhysicalDeviceMemoryProperties *)(&pFVar4->MemoryBudget + 1))->memoryTypes
                     [uVar13].heapIndex].size;
      uVar18 = 0;
      if ((int)uVar24 < (this->ResourceTypeHeaps).ArrayNum) {
        uVar18 = uVar14;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = (longlong)(int)uVar24;
      if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar20 * 8) == 0) {
        pFVar11 = ::operator_new(0x108);
        if (pFVar11 == (FVulkanResourceHeap *)0x0) {
          pFVar11 = (FVulkanResourceHeap *)0x0;
        }
        else {
          pFVar11 = FVulkanResourceHeap::FVulkanResourceHeap(pFVar11,this,uVar24,0);
        }
        uVar18 = 0;
        if ((int)uVar24 < (this->ResourceTypeHeaps).ArrayNum) {
          uVar18 = uVar14;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(FVulkanResourceHeap **)((pTVar1->AllocatorInstance).Data + lVar20 * 8) = pFVar11;
        uVar18 = pVVar3->memoryTypes[uVar13].propertyFlags;
        uVar25 = 0;
        if ((int)uVar24 < (this->ResourceTypeHeaps).ArrayNum) {
          uVar25 = uVar14;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(byte *)(*(longlong *)((pTVar1->AllocatorInstance).Data + lVar20 * 8) + 100) =
             (byte)(uVar18 >> 3) & 1;
        uVar18 = pVVar3->memoryTypes[uVar13].propertyFlags;
        uVar25 = 0;
        if ((int)uVar24 < (this->ResourceTypeHeaps).ArrayNum) {
          uVar25 = uVar14;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(byte *)(*(longlong *)((pTVar1->AllocatorInstance).Data + lVar20 * 8) + 0x65) =
             (byte)(uVar18 >> 4) & 1;
        uVar18 = 0;
        if ((int)uVar24 < (this->ResourceTypeHeaps).ArrayNum) {
          uVar18 = uVar14;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar23 = uVar23 >> 3;
        pFVar5 = *(ForElementType<VulkanRHI::FVulkanPageSizeBucket> **)
                  ((pTVar1->AllocatorInstance).Data + lVar20 * 8);
        local_80[0] = '\0';
        local_80[1] = '\0';
        local_80[2] = ' ';
        local_80[3] = '\0';
        local_80[4] = '\0';
        local_80[5] = '\0';
        local_80[6] = '\0';
        local_80[7] = '\0';
        local_80[8] = '\0';
        local_80[9] = '\0';
        local_80[10] = 0x80;
        local_80[0xb] = '\0';
        local_80[0x18] = '\0';
        local_80[0x19] = '\0';
        local_80[0x1a] = '\0';
        local_80[0x1b] = '\b';
        if (uVar23 < 0x8000000) {
          local_80._24_4_ = (undefined4)uVar23;
        }
        local_80[0xc] = '\x01';
        local_80[0xd] = '\0';
        local_80[0xe] = '\0';
        local_80[0xf] = '\0';
        local_80[0x10] = '\0';
        local_80[0x11] = '\0';
        local_80[0x12] = '\0';
        local_80[0x13] = '\x04';
        local_80[0x14] = '\0';
        local_80[0x15] = '\0';
        local_80[0x16] = '\0';
        local_80[0x17] = '\0';
        local_80[0x1c] = '\x01';
        local_80[0x1d] = '\0';
        local_80[0x1e] = '\0';
        local_80[0x1f] = '\0';
        local_80[0x20] = '\0';
        local_80[0x21] = '\0';
        local_80[0x22] = ' ';
        local_80[0x23] = '\0';
        local_80[0x24] = '\0';
        local_80[0x25] = '\0';
        local_80[0x26] = '\0';
        local_80[0x27] = '\0';
        local_80[0x28] = '\0';
        local_80[0x29] = '\0';
        local_80[0x2a] = 0x80;
        local_80[0x2b] = '\0';
        local_80[0x2c] = '\x02';
        local_80[0x2d] = '\0';
        local_80[0x2e] = '\0';
        local_80[0x2f] = '\0';
        local_80[0x30] = '\0';
        local_80[0x31] = '\0';
        local_80[0x32] = '\0';
        local_80[0x33] = '\x04';
        local_80[0x34] = '\0';
        local_80[0x35] = '\0';
        local_80[0x36] = '\0';
        local_80[0x37] = '\0';
        local_80[0x3c] = '\x02';
        local_80[0x3d] = '\0';
        local_80[0x3e] = '\0';
        local_80[0x3f] = '\0';
        local_80[0x40] = 0xff;
        local_80[0x41] = 0xff;
        local_80[0x42] = 0xff;
        local_80[0x43] = 0xff;
        local_80[0x44] = 0xff;
        local_80[0x45] = 0xff;
        local_80[0x46] = 0xff;
        local_80[0x47] = 0xff;
        auStack_38[0] = '\0';
        auStack_38[1] = '\0';
        auStack_38[2] = '\0';
        auStack_38[3] = '\0';
        auStack_38[4] = '\x03';
        auStack_38[5] = '\0';
        auStack_38[6] = '\0';
        auStack_38[7] = '\0';
        local_80._56_4_ = local_80._24_4_;
        if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)local_80) &&
            (local_80 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
        iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
        if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                            (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
        }
        *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
        *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_80._0_8_;
        *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) = CONCAT44(local_80._12_4_,local_80._8_4_)
        ;
        if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)(local_80 + 0x10)) &&
            (local_80 + 0x10 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
        iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
        if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                            (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
        }
        *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
        *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_80._16_8_;
        *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) =
             CONCAT44(local_80._28_4_,local_80._24_4_);
        if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)(local_80 + 0x20)) &&
            (local_80 + 0x20 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
        iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
        if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                            (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
        }
        *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
        *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_80._32_8_;
        *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) =
             CONCAT44(local_80._44_4_,local_80._40_4_);
        if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)(local_80 + 0x30)) &&
            (local_80 + 0x30 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
        iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
        if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                            (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
        }
        *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
        *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_80._48_8_;
        *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) =
             CONCAT44(local_80._60_4_,local_80._56_4_);
        if (((pFVar5 <= (ForElementType<VulkanRHI::FVulkanPageSizeBucket> *)(local_80 + 0x40)) &&
            (local_80 + 0x40 < pFVar5->InlineData + *(int *)(pFVar5[1].InlineData[0].Pad + 4))) &&
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
        iVar9 = *(int *)pFVar5[1].InlineData[0].Pad;
        if (iVar9 == *(int *)(pFVar5[1].InlineData[0].Pad + 4)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<5>::ForElementType<VulkanRHI::FVulkanPageSizeBucket>_>
                            (0x810,pFVar5,(int *)(pFVar5[1].InlineData[0].Pad + 4));
        }
        *(int *)pFVar5[1].InlineData[0].Pad = iVar9 + 1;
        *(undefined8 *)pFVar5->InlineData[iVar9].Pad = local_80._64_8_;
        *(ulonglong *)(pFVar5->InlineData[iVar9].Pad + 8) =
             CONCAT44(auStack_38._4_4_,auStack_38._0_4_);
      }
      uVar13 = (ulonglong)(uVar24 + 1);
    } while (uVar24 + 1 < pVVar3->memoryTypeCount);
  }
  return;
}

// ProcessPendingUBFrees @ 145b2ebb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall VulkanRHI::FMemoryManager::ProcessPendingUBFrees(FMemoryManager *this,bool param_1)

{
  <unnamed_type_UBAllocations> *lpCriticalSection;
  
  lpCriticalSection = &this->UBAllocations;
  if (lpCriticalSection != (<unnamed_type_UBAllocations> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ProcessPendingUBFreesNoLock(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145b2ebf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessPendingUBFreesNoLock @ 145b2ec10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::ProcessPendingUBFreesNoLock(FMemoryManager *this,bool param_1)

{
  TArray<VulkanRHI::FMemoryManager::FUBPendingFree,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FVulkanAllocation *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  size_t _Size;
  uint uVar16;
  
  if (param_1) {
    iVar8 = (this->UBAllocations).PendingFree.ArrayNum;
    pTVar1 = &(this->UBAllocations).PendingFree;
    uVar13 = 0;
    if (0 < iVar8) {
      lVar14 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar13 < (this->UBAllocations).PendingFree.ArrayNum) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FreeVulkanAllocation
                  (this,(FVulkanAllocation *)((pTVar1->AllocatorInstance).Data + lVar14),
                   EVulkanFreeFlag_DontDefer);
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 0x28;
      } while ((int)uVar13 < iVar8);
    }
    DestructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int>
              ((FUBPendingFree *)(pTVar1->AllocatorInstance).Data,
               (this->UBAllocations).PendingFree.ArrayNum);
    iVar8 = (this->UBAllocations).PendingFree.ArrayMax;
    (this->UBAllocations).PendingFree.ArrayNum = 0;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar1->AllocatorInstance,0,&(this->UBAllocations).PendingFree.ArrayMax);
    }
    GFrameNumberRenderThread_WhenWeCanDelete = 0;
  }
  else if (GFrameNumberRenderThread_WhenWeCanDelete <= GFrameNumberRenderThread) {
    uVar13 = (this->UBAllocations).PendingFree.ArrayNum;
    iVar8 = GFrameNumberRenderThread - 3;
    uVar16 = 0;
    if (0 < (int)uVar13) {
      lVar15 = 0;
      lVar14 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar16 < (this->UBAllocations).PendingFree.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar11 = (FVulkanAllocation *)
                  ((this->UBAllocations).PendingFree.AllocatorInstance.Data + lVar14);
        uVar4 = pFVar11[1].VulkanHandle;
        if ((ulonglong)(longlong)iVar8 <= uVar4) {
          GFrameNumberRenderThread_WhenWeCanDelete = (int)uVar4 + 4;
          break;
        }
        FreeVulkanAllocation(this,pFVar11,EVulkanFreeFlag_DontDefer);
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + 0x28;
      } while (lVar15 < (int)uVar13);
    }
    uVar12 = uVar13 - uVar16;
    if ((0 < (int)uVar12) && (uVar12 != uVar13)) {
      pFVar5 = (this->UBAllocations).PendingFree.AllocatorInstance.Data;
      _Size = (longlong)(int)uVar12 * 0x28;
      memmove(pFVar5,pFVar5 + (longlong)(int)uVar16 * 0x28,_Size);
      iVar8 = (this->UBAllocations).PendingFree.ArrayNum;
      if ((int)uVar12 < iVar8) {
        do {
          uVar9 = 0;
          if ((int)uVar12 < iVar8) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->UBAllocations).PendingFree.AllocatorInstance.Data;
          FVar3 = pFVar5[_Size + 0x1b];
          if ((((byte)FVar3 & 0x3f) != 0) && (((byte)FVar3 & 0x40) != 0)) {
            pFVar5 = pFVar5 + _Size + 0x1b;
            *pFVar5 = (FScriptContainerElement)((byte)*pFVar5 & 0xbf);
          }
          iVar8 = (this->UBAllocations).PendingFree.ArrayNum;
          uVar12 = uVar12 + 1;
          _Size = _Size + 0x28;
        } while ((int)uVar12 < iVar8);
      }
    }
    piVar2 = &(this->UBAllocations).PendingFree.ArrayNum;
    uVar13 = uVar13 - uVar16;
    iVar8 = *piVar2;
    if (iVar8 < (int)uVar13) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,uVar13 - iVar8,&(this->UBAllocations).PendingFree.AllocatorInstance
                          ,piVar2,&(this->UBAllocations).PendingFree.ArrayMax);
      DefaultConstructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int>
                ((this->UBAllocations).PendingFree.AllocatorInstance.Data + (longlong)iVar10 * 0x28,
                 uVar13 - iVar8);
    }
    else {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if ((int)uVar13 < iVar8) {
        uVar16 = iVar8 - uVar13;
        if (((int)(uVar16 | uVar13) < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar16 != 0) {
          TArray<VulkanRHI::FMemoryManager::FUBPendingFree,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(&(this->UBAllocations).PendingFree,uVar13,uVar16);
        }
      }
    }
  }
  return;
}

// RegisterSubresourceAllocator @ 145b2f320

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::RegisterSubresourceAllocator
          (FMemoryManager *this,FVulkanSubresourceAllocator *param_1)

{
  int *piVar1;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FVulkanSubresourceAllocator *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FVulkanSubresourceAllocator *local_res10;
  
  local_res10 = param_1;
  if (param_1->AllocatorIndex != 0xffffffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubresourceAllocator->AllocatorIndex == 0xffffffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xb1a,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AllBufferAllocationsLock);
  pTVar2 = &this->AllBufferAllocations;
  if (this->AllBufferAllocationsFreeListHead == -1) {
    local_res10->AllocatorIndex = (this->AllBufferAllocations).ArrayNum;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 <
        pFVar3 + (longlong)(this->AllBufferAllocations).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->AllBufferAllocations).ArrayNum;
    piVar1 = &(this->AllBufferAllocations).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->AllBufferAllocations).ArrayNum = iVar8 + 1;
    *(FVulkanSubresourceAllocator **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_res10;
  }
  else {
    uVar9 = (uint)this->AllBufferAllocationsFreeListHead;
    uVar7 = 0;
    if ((int)uVar9 < (this->AllBufferAllocations).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar5 = local_res10;
    this->AllBufferAllocationsFreeListHead =
         *(long64 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8);
    local_res10->AllocatorIndex = uVar9;
    uVar7 = 0;
    if ((int)uVar9 < (this->AllBufferAllocations).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(FVulkanSubresourceAllocator **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8) =
         pFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AllBufferAllocationsLock);
  return;
}

// ReleaseFreedPages @ 145b30460

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::ReleaseFreedPages(FMemoryManager *this,FVulkanContextArray *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FVulkanResourceHeap *pFVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  FScriptContainerElement *pFVar14;
  int *piVar15;
  FScriptContainerElement *pFVar16;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar17;
  FVulkanResourceHeap *this_00;
  undefined1 local_res18 [8];
  uint local_res20;
  FVulkanResourceHeap *local_98;
  ulonglong local_70;
  ulonglong local_60;
  FVulkanResourceHeap *local_58;
  
  ReleaseFreedResources(this,false);
  uVar12 = (this->ResourceTypeHeaps).ArrayNum;
  uVar10 = (ulonglong)(int)uVar12;
  this_00 = (FVulkanResourceHeap *)0x0;
  pFVar14 = (this->ResourceTypeHeaps).AllocatorInstance.Data;
  local_98 = (FVulkanResourceHeap *)0x0;
  uVar11 = this->DeviceMemoryManager->PrimaryHeapIndex;
  local_70 = 0;
  pFVar1 = pFVar14 + uVar10 * 8;
  local_60 = 0;
  local_58 = (FVulkanResourceHeap *)0x0;
  local_res20 = uVar11;
  do {
    if ((this->ResourceTypeHeaps).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<VulkanRHI::FVulkanResourceHeap_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar14 == pFVar1) {
      if ((this_00 != (FVulkanResourceHeap *)0x0) &&
         (((GVulkanEvictOnePage != 0 || (bVar8 = UpdateEvictThreshold(this,true), bVar8)) &&
          (-1 < (int)uVar11)))) {
        GVulkanEvictOnePage = 0;
        uVar9 = FVulkanResourceHeap::EvictOne(this_00,this->Device,param_1);
        this->PendingEvictBytes = this->PendingEvictBytes + uVar9;
      }
      if (local_58 != (FVulkanResourceHeap *)0x0) {
        uVar12 = 1;
        if (GVulkanDefragOnce != 0) {
          uVar12 = 0x7fffffff;
          DumpMemory(this,true);
        }
        FVulkanResourceHeap::DefragTick(local_58,this->Device,param_1,uVar12);
        if (GVulkanDefragOnce != 0) {
          DumpMemory(this,true);
          GVulkanDefragOnce = 0;
        }
      }
      FDeviceMemoryManager::TrimMemory(this->DeviceMemoryManager,false);
      return;
    }
    pFVar5 = *(FVulkanResourceHeap **)pFVar14;
    if (pFVar5->HeapIndex == uVar11) {
      lpCriticalSection = &pFVar5->PagesLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar10 = pFVar5->UsedMemory;
      if (GVulkanEnableDefrag != 0) {
        pTVar17 = pFVar5->ActivePages;
        if (pTVar17 != &pFVar5->UsedDedicatedImagePages) {
          do {
            pFVar16 = (pTVar17->AllocatorInstance).Data;
            iVar3 = pTVar17->ArrayNum;
            pFVar2 = pFVar16 + (longlong)iVar3 * 8;
            while( true ) {
              if (pTVar17->ArrayNum != iVar3) {
                `TCheckedPointerIterator<VulkanRHI::FVulkanSubresourceAllocator_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res18);
              }
              if (pFVar16 == pFVar2) break;
              lVar6 = *(longlong *)pFVar16;
              if ((*(byte *)(lVar6 + 0x7c) & 2) == 0) {
                iVar4 = *(int *)(lVar6 + 0xb8);
                piVar15 = *(int **)(lVar6 + 0xb0);
                piVar13 = piVar15 + (longlong)iVar4 * 0x10;
                while( true ) {
                  if (*(int *)(lVar6 + 0xb8) != iVar4) {
                    `TCheckedPointerIterator<VulkanRHI::FVulkanAllocationInternal,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(local_res18);
                  }
                  if (piVar15 == piVar13) {
                    this_00 = local_98;
                    if (local_70 < uVar10) {
                      local_70 = uVar10;
                      local_58 = pFVar5;
                    }
                    goto LAB_145b305fd;
                  }
                  if ((*piVar15 == 1) &&
                     ((*(undefined8 **)(piVar15 + 6) == (undefined8 *)0x0 ||
                      (cVar7 = (**(code **)**(undefined8 **)(piVar15 + 6))(), cVar7 == '\0'))))
                  break;
                  piVar15 = piVar15 + 0x10;
                }
              }
              pFVar16 = pFVar16 + 8;
            }
            pTVar17 = pTVar17 + 1;
            this_00 = local_98;
          } while (pTVar17 != &pFVar5->UsedDedicatedImagePages);
        }
LAB_145b305fd:
        if (GVulkanEnableDefrag != 0) {
          for (pTVar17 = pFVar5->ActivePages; pTVar17 != &pFVar5->UsedDedicatedImagePages;
              pTVar17 = pTVar17 + 1) {
            pFVar16 = (pTVar17->AllocatorInstance).Data;
            iVar3 = pTVar17->ArrayNum;
            pFVar2 = pFVar16 + (longlong)iVar3 * 8;
            while( true ) {
              if (pTVar17->ArrayNum != iVar3) {
                `TCheckedPointerIterator<VulkanRHI::FVulkanSubresourceAllocator_*,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res18);
              }
              if (pFVar16 == pFVar2) break;
              if ((*(byte *)(*(longlong *)pFVar16 + 0x7c) & 2) != 0) {
                this_00 = local_98;
                if (local_60 < uVar10) {
                  this_00 = pFVar5;
                  local_98 = pFVar5;
                  local_60 = uVar10;
                }
                goto LAB_145b3068b;
              }
              pFVar16 = pFVar16 + 8;
            }
            this_00 = local_98;
          }
        }
      }
LAB_145b3068b:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      uVar11 = local_res20;
    }
    uVar10 = (ulonglong)uVar12;
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// ReleaseFreedResources @ 145b307b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall VulkanRHI::FMemoryManager::ReleaseFreedResources(FMemoryManager *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FVulkanSubresourceAllocator *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  uVar10 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  if (&this->UsedFreeBufferAllocationsLock == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->UsedFreeBufferAllocationsLock);
  if (this->FreeBufferAllocations !=
      (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
      &this->AllBufferAllocationsLock) {
    piVar11 = &this->FreeBufferAllocations[0].ArrayNum;
    do {
      iVar7 = *piVar11;
      uVar12 = uVar10;
      uVar13 = uVar10;
      if (0 < iVar7) {
        do {
          uVar9 = (uint)uVar12;
          uVar6 = 0;
          if ((int)uVar9 < iVar7) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_48 = *(longlong *)
                      ((((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                          *)(piVar11 + -2))->AllocatorInstance).Data + uVar13);
          if ((param_1) || (*(int *)(local_48 + 0x50) + 3U < GFrameNumberRenderThread)) {
            if ((local_40.Data <= (FScriptContainerElement *)&local_48) &&
               (((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)local_38._4_4_ * 8
                && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)))) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = (int)local_38;
            if ((int)local_38 == local_38._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_40,(int *)((longlong)&local_38 + 4));
            }
            local_38 = CONCAT44(local_38._4_4_,iVar7 + 1);
            *(longlong *)(local_40.Data + (longlong)iVar7 * 8) = local_48;
            uVar6 = 0;
            if ((int)uVar9 < *piVar11) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                        *)(piVar11 + -2))->AllocatorInstance).Data;
            iVar7 = ~uVar9 + *piVar11;
            if (1 < iVar7) {
              iVar7 = 1;
            }
            if (iVar7 != 0) {
              memmove(pFVar2 + (longlong)(int)uVar9 * 8,pFVar2 + (longlong)(*piVar11 - iVar7) * 8,
                      (longlong)iVar7 << 3);
            }
            *piVar11 = *piVar11 + -1;
          }
          iVar7 = *piVar11;
          uVar12 = (ulonglong)(uVar9 + 1);
          uVar13 = uVar13 + 8;
        } while ((int)(uVar9 + 1) < iVar7);
      }
      piVar1 = piVar11 + 2;
      piVar11 = piVar11 + 4;
    } while ((FPlatformRWLock *)piVar1 != &this->AllBufferAllocationsLock);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->UsedFreeBufferAllocationsLock);
  uVar12 = uVar10;
  if (0 < (int)local_38) {
    do {
      uVar9 = (uint)uVar10;
      uVar6 = 0;
      if ((int)uVar9 < (int)local_38) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = *(FVulkanSubresourceAllocator **)(local_40.Data + uVar12);
      if (pFVar3->Buffer != (VkBuffer_T *)0x0) {
        (*VulkanDynamicAPI::vkDestroyBuffer)
                  (this->Device->Device,pFVar3->Buffer,&GAllocationCallbacks);
        pFVar3->Buffer = (VkBuffer_T *)0x0;
      }
      uVar6 = pFVar3->MemoryTypeIndex;
      uVar8 = 0;
      if ((int)uVar6 < (this->ResourceTypeHeaps).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVulkanResourceHeap::ReleasePage
                (*(FVulkanResourceHeap **)
                  ((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar6 * 8),
                 pFVar3);
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar9 + 1) < (int)local_38);
  }
  FDeviceMemoryManager::TrimMemory(this->DeviceMemoryManager,param_1);
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// ReleaseSubresourceAllocator @ 145b31680

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

bool __thiscall
VulkanRHI::FMemoryManager::ReleaseSubresourceAllocator
          (FMemoryManager *this,FVulkanSubresourceAllocator *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar12;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FVulkanSubresourceAllocator *local_res10;
  
  lpCriticalSection = &this->UsedFreeBufferAllocationsLock;
  local_res10 = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar10 = local_res10->MemoryTypeIndex;
    uVar9 = 0;
    if ((int)uVar10 < (this->ResourceTypeHeaps).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lpCriticalSection_00 =
         (LPCRITICAL_SECTION)
         (*(longlong *)
           ((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) + 0x80);
    if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection_00);
      bVar5 = FVulkanSubresourceAllocator::JoinFreeBlocks(local_res10);
      if (bVar5) {
        if (local_res10->Type == EVulkanAllocationPooledBuffer) {
          iVar8 = local_res10->PoolSizeIndex;
          pFVar3 = this->UsedBufferAllocations[iVar8].AllocatorInstance.Data;
          iVar7 = this->UsedBufferAllocations[iVar8].ArrayNum;
          for (pFVar11 = pFVar3; pFVar11 != pFVar3 + (longlong)iVar7 * 8; pFVar11 = pFVar11 + 8) {
            if (*(FVulkanSubresourceAllocator **)pFVar11 == local_res10) {
              uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar3 >> 3);
              if (uVar10 != 0xffffffff) {
                uVar9 = 0;
                if ((int)(uVar10 + 1) <= iVar7) {
                  uVar9 = ~uVar10 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                iVar2 = this->UsedBufferAllocations[iVar8].ArrayNum;
                pFVar3 = this->UsedBufferAllocations[iVar8].AllocatorInstance.Data;
                iVar7 = iVar2 + ~uVar10;
                if (1 < iVar7) {
                  iVar7 = 1;
                }
                if (iVar7 != 0) {
                  memmove(pFVar3 + (longlong)(int)uVar10 * 8,pFVar3 + (longlong)(iVar2 - iVar7) * 8,
                          (longlong)iVar7 << 3);
                }
                piVar1 = &this->UsedBufferAllocations[iVar8].ArrayNum;
                *piVar1 = *piVar1 + -1;
              }
              break;
            }
          }
          local_res10->FrameFreed = GFrameNumberRenderThread;
          pTVar12 = this->FreeBufferAllocations + local_res10->PoolSizeIndex;
          pFVar3 = (pTVar12->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
              ((FScriptContainerElement *)&local_res10 < pFVar3 + (longlong)pTVar12->ArrayMax * 8))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar8 = pTVar12->ArrayNum;
          if (iVar8 == pTVar12->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
          }
          pTVar12->ArrayNum = iVar8 + 1;
          bVar5 = true;
          *(FVulkanSubresourceAllocator **)((pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 8)
               = local_res10;
        }
        else {
          uVar10 = local_res10->MemoryTypeIndex;
          uVar9 = 0;
          if ((int)uVar10 < (this->ResourceTypeHeaps).ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FVulkanResourceHeap::FreePage
                    (*(FVulkanResourceHeap **)
                      ((this->ResourceTypeHeaps).AllocatorInstance.Data + (longlong)(int)uVar10 * 8)
                     ,local_res10);
          bVar5 = true;
        }
      }
      else {
        bVar5 = false;
      }
      LeaveCriticalSection(lpCriticalSection_00);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UnregisterSubresourceAllocator @ 145b375f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
VulkanRHI::FMemoryManager::UnregisterSubresourceAllocator
          (FMemoryManager *this,FVulkanSubresourceAllocator *param_1)

{
  uint uVar1;
  long64 lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (param_1->bIsEvicting != false) {
    this->PendingEvictBytes = this->PendingEvictBytes - param_1->MemoryAllocation->Size;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AllBufferAllocationsLock);
  uVar1 = param_1->AllocatorIndex;
  if (uVar1 == 0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != 0xffffffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xb33,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = this->AllBufferAllocationsFreeListHead;
  uVar5 = 0;
  if ((int)uVar1 < (this->AllBufferAllocations).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
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
  *(long64 *)((this->AllBufferAllocations).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) =
       lVar2;
  this->AllBufferAllocationsFreeListHead = (ulonglong)uVar1;
                    /* WARNING: Could not recover jumptable at 0x000145b376ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AllBufferAllocationsLock);
  return;
}

// UpdateEvictThreshold @ 145b37a10

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall VulkanRHI::FMemoryManager::UpdateEvictThreshold(FMemoryManager *this,bool param_1)

{
  uint uVar1;
  FDeviceMemoryManager *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  
  this_00 = this->DeviceMemoryManager;
  lVar8 = 0;
  uVar1 = this_00->PrimaryHeapIndex;
  if ((int)uVar1 < 0) {
    uVar9 = 1;
  }
  else {
    uVar7 = 0;
    if ((int)uVar1 < (this_00->HeapInfos).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    lVar8 = *(longlong *)((this_00->HeapInfos).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20)
    ;
    if (((*(byte *)&(this_00->Device->OptionalDeviceExtensions).field0_0x0 & 4) != 0) &&
       (QueryPerformanceCounter(&local_res8), dVar3 = __real_4170000000000000,
       __real_3ff0000000000000 <=
       ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
       __real_4170000000000000) - this_00->MemoryUpdateTime)) {
      QueryPerformanceCounter(&local_res18);
      this_00->MemoryUpdateTime =
           (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
      FDeviceMemoryManager::UpdateMemoryProperties(this_00);
    }
    uVar9 = (this_00->MemoryProperties).memoryHeaps[(uint)this_00->PrimaryHeapIndex].size;
    if ((GVulkanFakeMemoryLimit != 0) &&
       ((ulonglong)((longlong)GVulkanFakeMemoryLimit << 0x14) < uVar9)) {
      uVar9 = (longlong)GVulkanFakeMemoryLimit << 0x14;
    }
  }
  dVar3 = (double)(lVar8 - this->PendingEvictBytes) * __real_4059000000000000;
  dVar4 = (double)GVulkanEvictionLimitPercentage;
  if (this->bIsEvicting != false) {
    dVar4 = dVar4 * (double)(GVulkanEvictionLimitPercentageReenableLimit * __real_3c23d70a);
  }
  if (((param_1) && (GVulkanLogEvictStatus != 0)) && (3 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  bVar5 = dVar4 < dVar3 / (double)uVar9;
  this->bIsEvicting = bVar5;
  return bVar5;
}

