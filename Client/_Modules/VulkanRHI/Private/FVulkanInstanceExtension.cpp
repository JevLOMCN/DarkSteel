// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// operator() @ 145b06af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FVulkanInstanceExtension::GetUESupportedInstanceExtensions'::__l2::<lambda_1>::operator()
          (void *this,TArray<char_const_*,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2)

{
  int *piVar1;
  char *_Str2;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 auStack_208 [32];
  undefined8 **local_1e8;
  FScriptContainerElement *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8 [4];
  uint local_1b4;
  undefined8 *local_1b0;
  wchar_t *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  longlong *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  pFVar13 = (param_1->AllocatorInstance).Data;
  local_1b4 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_1b4;
  bVar14 = false;
  local_1a0 = pFVar13 + uVar8 * 8;
  local_1a8 = param_2;
LAB_145b06b40:
  do {
    pFVar2 = local_1a0;
    if (param_1->ArrayNum != (int)uVar8) {
      local_1b8[0] = 0;
      `TCheckedPointerIterator<char_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b8);
    }
    if (pFVar13 == pFVar2) {
      pFVar13 = (param_1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      return;
    }
    plVar9 = *(longlong **)this;
    uVar10 = 0;
    _Str2 = *(char **)pFVar13;
    lVar11 = 0;
    iVar6 = (int)plVar9[1];
    if (0 < iVar6) {
      do {
        uVar5 = 0;
        if ((int)uVar10 < iVar6) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_1e0 = (FScriptContainerElement *)(longlong)iVar6;
          local_1e8 = (undefined8 **)(longlong)(int)uVar10;
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
        iVar6 = strcmp(*(char **)(*(longlong *)(*plVar9 + lVar11 * 8) + 8),_Str2);
        if (iVar6 == 0) {
          pFVar12 = *(ForAnyElementType **)this;
          if (uVar10 == 0xffffffff) goto LAB_145b06be3;
          uVar5 = 0;
          if ((int)uVar10 < *(int *)&pFVar12[1].Data) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if (uVar5 == 0) {
            local_1e8 = (undefined8 **)(longlong)(int)uVar10;
            local_1e0 = (FScriptContainerElement *)(longlong)*(int *)&pFVar12[1].Data;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar13 = pFVar13 + 8;
          *(undefined1 *)(*(longlong *)(pFVar12->Data + lVar11 * 8) + 0x16) = 1;
          uVar8 = (ulonglong)local_1b4;
          goto LAB_145b06b40;
        }
        iVar6 = (int)plVar9[1];
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 1;
      } while ((int)uVar10 < iVar6);
    }
    pFVar12 = *(ForAnyElementType **)this;
LAB_145b06be3:
    local_1b0 = ::operator_new(0x50);
    if (local_1b0 == (undefined8 *)0x0) {
      local_1b0 = (undefined8 *)0x0;
    }
    else {
      local_198 = 0;
      bVar14 = true;
      local_170 = (longlong *)0x0;
      local_1b0[1] = _Str2;
      *(undefined4 *)(local_1b0 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)local_1b0 + 0x14) = 0x10001;
      *local_1b0 = &___7FVulkanInstanceExtension__6B_;
      local_1b0[4] = 0;
      local_1b0[9] = 0;
      *(undefined4 *)(local_1b0 + 6) = local_188;
      *(undefined4 *)((longlong)local_1b0 + 0x34) = uStack_184;
      *(undefined4 *)(local_1b0 + 7) = uStack_180;
      *(undefined4 *)((longlong)local_1b0 + 0x3c) = uStack_17c;
      local_1b0[8] = local_178;
    }
    if (bVar14) {
      bVar14 = false;
      if (local_198 != 0) {
        plVar9 = (longlong *)&local_188;
        if (local_170 != (longlong *)0x0) {
          plVar9 = local_170;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    pFVar2 = pFVar12->Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_1b0) &&
       (lVar11 = (longlong)*(int *)((longlong)&pFVar12[1].Data + 4),
       (FScriptContainerElement *)&local_1b0 < pFVar2 + lVar11 * 8)) {
      local_1d0 = (longlong)*(int *)&pFVar12[1].Data;
      local_1c8 = 8;
      local_1e8 = &local_1b0;
      local_1e0 = pFVar2;
      local_1d8 = lVar11;
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
    iVar6 = *(int *)&pFVar12[1].Data;
    piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar12,piVar1);
    }
    *(int *)&pFVar12[1].Data = iVar6 + 1;
    *(undefined8 **)(pFVar12->Data + (longlong)iVar6 * 8) = local_1b0;
    local_1b0 = (undefined8 *)0x0;
    if (2 < (byte)LogVulkanRHI._0_1_) {
      local_168._padding_ = 0;
      if (_Str2 == (char *)0x0) {
        local_168.Ptr = (wchar_t *)0x0;
        local_168.StringLength = 0;
      }
      else {
        sVar7 = strlen(_Str2);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,_Str2,(int)sVar7,Yes);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    uVar8 = (ulonglong)local_1b4;
    pFVar13 = pFVar13 + 8;
  } while( true );
}

// GetDriverSupportedInstanceExtensions @ 145b1d9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> * __cdecl
FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions
          (TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          char *param_1)

{
  VkResult VVar1;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  FIdentityFunctor local_278 [4];
  uint local_274 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_274[0] = 0;
  VVar1 = (*VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties)
                    (param_1,local_274,(VkExtensionProperties *)0x0);
  if (VVar1 == VK_ERROR_INITIALIZATION_FAILED) {
    if (1 < (byte)LogVulkanRHI._0_1_) {
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanExtensions.cpp"
                 ,0x56,Yes);
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,
                 "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, nullptr)",
                 0x4d,Yes);
      local_288 = 0xb9;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else if ((int)VVar1 < 0) {
    VulkanRHI::VerifyVulkanResult
              (VVar1,"VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, nullptr)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanExtensions.cpp"
               ,0xb9);
  }
  if (local_274[0] != 0) {
    TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_>::AddZeroed
              (__return_storage_ptr__,local_274[0]);
    VVar1 = (*VulkanDynamicAPI::vkEnumerateInstanceExtensionProperties)
                      (param_1,local_274,
                       (VkExtensionProperties *)(__return_storage_ptr__->AllocatorInstance).Data);
    if (VVar1 == VK_ERROR_INITIALIZATION_FAILED) {
      if (1 < (byte)LogVulkanRHI._0_1_) {
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanExtensions.cpp"
                   ,0x56,Yes);
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,
                   "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, OutInstanceExtensions.GetData())"
                   ,0x65,Yes);
        local_288 = 0xbd;
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
    }
    else if ((int)VVar1 < 0) {
      VulkanRHI::VerifyVulkanResult
                (VVar1,
                 "VulkanRHI::vkEnumerateInstanceExtensionProperties(LayerName, &Count, OutInstanceExtensions.GetData())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanExtensions.cpp"
                 ,0xbd);
    }
  }
  AlgoImpl::
  IntroSortInternal<VkExtensionProperties,int,FIdentityFunctor,TDereferenceWrapper<VkExtensionProperties,_FVulkanInstanceExtension::GetDriverSupportedInstanceExtensions_::__l2::<lambda_1>_>_>
            ((VkExtensionProperties *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_278[0],(<lambda_1> *)local_278);
  return __return_storage_ptr__;
}

// GetUESupportedInstanceExtensions @ 145b236f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145b23a06) */
/* WARNING: Removing unreachable block (ram,0x000145b238e0) */
/* WARNING: Removing unreachable block (ram,0x000145b237b7) */
/* WARNING: Removing unreachable block (ram,0x000145b237c2) */
/* WARNING: Removing unreachable block (ram,0x000145b237c6) */
/* WARNING: Removing unreachable block (ram,0x000145b238eb) */
/* WARNING: Removing unreachable block (ram,0x000145b238ef) */
/* WARNING: Removing unreachable block (ram,0x000145b23a11) */
/* WARNING: Removing unreachable block (ram,0x000145b23a15) */

TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
* __cdecl FVulkanInstanceExtension::GetUESupportedInstanceExtensions
                    (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  void *_Src_00;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  undefined8 *puVar7;
  IHeadMountedDisplayModule *pIVar8;
  TSharedPtr<IHeadMountedDisplayVulkanExtensions,1> *pTVar9;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  undefined1 auStackY_1c8 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
  *local_158;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> local_150;
  void *local_140;
  undefined8 local_138;
  TArray<char_const_*,TSizedDefaultAllocator<32>_> local_130;
  undefined1 local_120 [8];
  TReferenceControllerBase<1> *local_118;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> local_110;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  puVar7 = (undefined8 *)0x0;
  local_158 = (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
               *)((ulonglong)local_158 & 0xffffffff00000000);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  puVar5 = ::operator_new(0x50);
  local_178 = puVar7;
  if (puVar5 != (undefined8 *)0x0) {
    local_f8 = 0;
    local_d0 = 0;
    puVar5[1] = "VK_KHR_surface";
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0x10001;
    *puVar5 = &___7FVulkanInstanceExtension__6B_;
    puVar5[4] = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 6) = local_e8;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_e4;
    *(undefined4 *)(puVar5 + 7) = uStack_e0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_dc;
    puVar5[8] = local_d8;
    local_178 = puVar5;
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_178) &&
      ((FScriptContainerElement *)&local_178 <
       pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar2)();
    return pTVar6;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  *(undefined8 **)(pFVar1 + (longlong)iVar4 * 8) = local_178;
  local_178 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x50);
  local_170 = puVar7;
  if (puVar5 != (undefined8 *)0x0) {
    local_c8 = 0;
    local_a0 = 0;
    puVar5[1] = "VK_EXT_swapchain_colorspace";
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 0x10001;
    *puVar5 = &___7FVulkanInstanceExtension__6B_;
    puVar5[4] = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 6) = local_b8;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_b4;
    *(undefined4 *)(puVar5 + 7) = uStack_b0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_ac;
    puVar5[8] = local_a8;
    local_170 = puVar5;
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_170) &&
      ((FScriptContainerElement *)&local_170 <
       pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar2)();
    return pTVar6;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  *(undefined8 **)(pFVar1 + (longlong)iVar4 * 8) = local_170;
  local_170 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x50);
  local_168 = puVar7;
  if (puVar5 != (undefined8 *)0x0) {
    local_98 = 0;
    local_70 = 0;
    puVar5[1] = "VK_EXT_debug_utils";
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 1;
    *puVar5 = &___7FVulkanInstanceExtension__6B_;
    puVar5[4] = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 6) = local_88;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_84;
    *(undefined4 *)(puVar5 + 7) = uStack_80;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_7c;
    puVar5[8] = local_78;
    local_168 = puVar5;
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_168) &&
      ((FScriptContainerElement *)&local_168 <
       pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar2)();
    return pTVar6;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  *(undefined8 **)(pFVar1 + (longlong)iVar4 * 8) = local_168;
  local_168 = (undefined8 *)0x0;
  puVar5 = ::operator_new(0x90);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = "VK_EXT_validation_features";
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined4 *)((longlong)puVar5 + 0x14) = 1;
    puVar5[4] = 0;
    puVar5[9] = 0;
    puVar5[6] = local_58;
    puVar5[7] = uStack_50;
    puVar5[8] = local_48;
    *puVar5 = &___7FVulkanEXTValidationFeaturesExtension__6B_;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar7 = puVar5;
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_160 = puVar7;
  if (((pFVar1 <= (FScriptContainerElement *)&local_160) &&
      ((FScriptContainerElement *)&local_160 <
       pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
              *)(*pcVar2)();
    return pTVar6;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  *(undefined8 **)(pFVar1 + (longlong)iVar4 * 8) = local_160;
  local_160 = (undefined8 *)0x0;
  FVulkanWindowsPlatform::GetInstanceExtensions(__return_storage_ptr__);
  local_158 = __return_storage_ptr__;
  bVar3 = IHeadMountedDisplayModule::IsAvailable();
  if (bVar3) {
    pIVar8 = IHeadMountedDisplayModule::Get();
    pTVar9 = (TSharedPtr<IHeadMountedDisplayVulkanExtensions,1> *)
             (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,local_120);
    TSharedPtr<IHeadMountedDisplayVulkanExtensions,1>::operator=
              (&FVulkanDynamicRHI::HMDVulkanExtensions,pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
  }
  if (FVulkanDynamicRHI::HMDVulkanExtensions.Object != (IHeadMountedDisplayVulkanExtensions *)0x0) {
    local_140 = (void *)0x0;
    local_138 = 0;
    if ((FVulkanDynamicRHI::HMDVulkanExtensions.Object == (IHeadMountedDisplayVulkanExtensions *)0x0
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<TUniquePtr<FVulkanInstanceExtension,TDefaultDelete<FVulkanInstanceExtension>_>,TSizedDefaultAllocator<32>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    (**(code **)*FVulkanDynamicRHI::HMDVulkanExtensions.Object)
              (FVulkanDynamicRHI::HMDVulkanExtensions.Object,&local_140);
    _Src_00 = local_140;
    lVar11 = (longlong)(int)local_138;
    local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ArrayNum = (int)local_138;
    if ((int)local_138 == 0) {
      local_150.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(int)local_138,0,&local_150.AllocatorInstance,(int)local_138,
                 &local_150.ArrayMax);
      memcpy(local_150.AllocatorInstance.Data,_Src_00,lVar11 << 3);
    }
    `FVulkanInstanceExtension::GetUESupportedInstanceExtensions'::__l2::<lambda_1>::operator()
              (&local_158,&local_150,L"HMD");
    if (local_140 != (void *)0x0) {
      FMemory::Free(local_140);
    }
  }
  _Src.Data = ExternalExtensions.AllocatorInstance.Data;
  lVar11 = (longlong)ExternalExtensions.ArrayNum;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = ExternalExtensions.ArrayNum;
  if (ExternalExtensions.ArrayNum == 0) {
    local_130.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,ExternalExtensions.ArrayNum,0,&local_130.AllocatorInstance,
               ExternalExtensions.ArrayNum,&local_130.ArrayMax);
    memcpy(local_130.AllocatorInstance.Data,_Src.Data,lVar11 << 3);
  }
  `FVulkanInstanceExtension::GetUESupportedInstanceExtensions'::__l2::<lambda_1>::operator()
            (&local_158,&local_130,L"Externally");
  pTVar10 = GetDriverSupportedInstanceExtensions(&local_110,(char *)0x0);
  FlagExtensionSupport<FVulkanInstanceExtension>(pTVar10,__return_storage_ptr__,param_1,L"instance")
  ;
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PreCreateInstance @ 145b2cf40

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanInstanceExtension::PreCreateInstance
          (FVulkanInstanceExtension *this,VkInstanceCreateInfo *param_1,
          FOptionalVulkanInstanceExtensions *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(void **)&this->FlagSetter != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->FlagSetter);
    plVar1 = *(longlong **)&(this->FlagSetter).field_0x28;
    pcVar2 = *(code **)&this->FlagSetter;
    plVar4 = (longlong *)&(this->FlagSetter).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2);
  }
  return;
}

