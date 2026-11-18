// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// AddDebugLayers @ 145b09e40

void __thiscall
FVulkanDeviceSetupHelper::AddDebugLayers
          (FVulkanDeviceSetupHelper *this,
          TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TUniquePtr<FVulkanDeviceExtension,TDefaultDelete<FVulkanDeviceExtension>_>,TSizedDefaultAllocator<32>_>
          *param_2,TArray<char_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = FindLayerIndexInList("VK_LAYER_RENDERDOC_Capture",param_1);
  GRenderDocFound = iVar3 != -1;
  if (this->bSupportsDebugUtilsExt == false) {
    uVar4 = FVulkanExtensionBase::FindExtension<FVulkanDeviceExtension>
                      (param_2,"VK_EXT_debug_marker");
    if ((uVar4 == 0xffffffff) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExtensionIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                           ,0x1e6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = 0;
    if ((int)uVar4 < param_2->ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)(*(longlong *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 8) + 0x15
                 ) != '\0') {
      uVar5 = 0;
      if ((int)uVar4 < param_2->ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined1 *)
       (*(longlong *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 8) + 0x16) = 1;
      this->bSupportsDebugMarkerExt = true;
    }
  }
  return;
}

// EnumerateLayerProperties @ 145b189e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanDeviceSetupHelper::EnumerateLayerProperties
          (FVulkanDeviceSetupHelper *this,
          TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char *pcVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  VkResult VVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *pTVar16;
  size_t sVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined8 *puVar25;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *pTVar26;
  longlong lVar27;
  uint uVar28;
  int *piVar29;
  longlong lVar30;
  undefined1 auStackY_aa8 [32];
  undefined1 local_a68 [4];
  uint local_a64;
  TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *local_a60;
  ForAnyElementType local_a58;
  int local_a50 [2];
  int *local_a48;
  FVulkanDeviceSetupHelper *local_a40;
  TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> local_a38;
  char local_a28 [272];
  undefined8 local_918 [66];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_aa8;
  uVar28 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar29 = &__return_storage_ptr__->ArrayNum;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar29 = 0;
  *piVar1 = 0;
  local_a58.Data = (FScriptContainerElement *)0x0;
  local_a50[0] = 0;
  local_a50[1] = 0;
  local_a64 = 0;
  local_a60 = __return_storage_ptr__;
  local_a48 = piVar29;
  local_a40 = this;
  VVar11 = (*VulkanDynamicAPI::vkEnumerateDeviceLayerProperties)
                     (this->Gpu,&local_a64,(VkLayerProperties *)0x0);
  if (VVar11 == VK_ERROR_INITIALIZATION_FAILED) {
    if (1 < (byte)LogVulkanRHI._0_1_) {
      local_4c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4c8,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                 ,0x52,Yes);
      local_5e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5e8,"VulkanRHI::vkEnumerateDeviceLayerProperties(Gpu, &Count, nullptr)",0x41
                 ,Yes);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>___cdecl_FVulkanDeviceSetupHelper::EnumerateLayerProperties(void)const___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if ((void *)local_5e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5e8._padding_);
      }
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
    }
  }
  else if ((int)VVar11 < 0) {
    VulkanRHI::VerifyVulkanResult
              (VVar11,"VulkanRHI::vkEnumerateDeviceLayerProperties(Gpu, &Count, nullptr)",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
               ,0x7e);
  }
  lVar21 = (longlong)(int)local_a64;
  pTVar15 = __return_storage_ptr__;
  if (local_a64 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x208,4,local_a64,&local_a58,local_a50,local_a50 + 1);
    memset(local_a58.Data + (longlong)iVar12 * 0x208,0,lVar21 * 0x208);
    VVar11 = (*VulkanDynamicAPI::vkEnumerateDeviceLayerProperties)
                       (this->Gpu,&local_a64,(VkLayerProperties *)local_a58.Data);
    if (VVar11 == VK_ERROR_INITIALIZATION_FAILED) {
      if (1 < (byte)LogVulkanRHI._0_1_) {
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                   ,0x52,Yes);
        local_3a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,
                   "VulkanRHI::vkEnumerateDeviceLayerProperties(Gpu, &Count, TempLayerProperties.GetData())"
                   ,0x57,Yes);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>___cdecl_FVulkanDeviceSetupHelper::EnumerateLayerProperties(void)const___ptr64'
                    ::__l36::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if ((void *)local_3a8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3a8._padding_);
        }
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else if ((int)VVar11 < 0) {
      VulkanRHI::VerifyVulkanResult
                (VVar11,
                 "VulkanRHI::vkEnumerateDeviceLayerProperties(Gpu, &Count, TempLayerProperties.GetData())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanLayers.cpp"
                 ,0x82);
    }
    uVar14 = local_a64;
    iVar12 = *piVar29;
    if (iVar12 < (int)local_a64) {
      iVar12 = local_a64 - iVar12;
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x218,8,iVar12,&__return_storage_ptr__->AllocatorInstance,piVar29,piVar1);
      DefaultConstructItems<FLayerWithExtensions,int>
                ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar13 * 0x218,iVar12)
      ;
    }
    else {
      if ((int)local_a64 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_a64);
      }
      if ((int)local_a64 < iVar12) {
        uVar24 = iVar12 - local_a64;
        if (((int)(uVar24 | local_a64) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        __return_storage_ptr__ = local_a60;
        if (uVar24 != 0) {
          TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (local_a60,uVar14,uVar24);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x218,8,&__return_storage_ptr__->AllocatorInstance,*piVar29,piVar1);
        }
      }
    }
    pTVar15 = local_a60;
    if (local_a64 != 0) {
      do {
        uVar24 = ~uVar28 >> 0x1f;
        uVar14 = 0;
        if ((int)uVar28 < local_a50[0]) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        lVar21 = 4;
        lVar27 = (longlong)(int)uVar28 * 0x208;
        pFVar22 = local_a58.Data + lVar27;
        puVar23 = local_918;
        do {
          puVar25 = puVar23 + 0x10;
          uVar6 = *(undefined8 *)(pFVar22 + 8);
          uVar7 = *(undefined8 *)(pFVar22 + 0x10);
          uVar8 = *(undefined8 *)(pFVar22 + 0x18);
          pFVar2 = pFVar22 + 0x80;
          *puVar23 = *(undefined8 *)pFVar22;
          puVar23[1] = uVar6;
          uVar6 = *(undefined8 *)(pFVar22 + 0x20);
          uVar9 = *(undefined8 *)(pFVar22 + 0x28);
          puVar23[2] = uVar7;
          puVar23[3] = uVar8;
          uVar7 = *(undefined8 *)(pFVar22 + 0x30);
          uVar8 = *(undefined8 *)(pFVar22 + 0x38);
          puVar23[4] = uVar6;
          puVar23[5] = uVar9;
          uVar6 = *(undefined8 *)(pFVar22 + 0x40);
          uVar9 = *(undefined8 *)(pFVar22 + 0x48);
          puVar23[6] = uVar7;
          puVar23[7] = uVar8;
          uVar7 = *(undefined8 *)(pFVar22 + 0x50);
          uVar8 = *(undefined8 *)(pFVar22 + 0x58);
          puVar23[8] = uVar6;
          puVar23[9] = uVar9;
          uVar6 = *(undefined8 *)(pFVar22 + 0x60);
          uVar9 = *(undefined8 *)(pFVar22 + 0x68);
          puVar23[10] = uVar7;
          puVar23[0xb] = uVar8;
          uVar7 = *(undefined8 *)(pFVar22 + 0x70);
          uVar8 = *(undefined8 *)(pFVar22 + 0x78);
          puVar23[0xc] = uVar6;
          puVar23[0xd] = uVar9;
          puVar23[0xe] = uVar7;
          puVar23[0xf] = uVar8;
          lVar21 = lVar21 + -1;
          pFVar22 = pFVar2;
          puVar23 = puVar25;
        } while (lVar21 != 0);
        *puVar25 = *(undefined8 *)pFVar2;
        uVar14 = 0;
        if ((int)uVar28 < *piVar29) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        lVar30 = (longlong)(int)uVar28 * 0x218;
        lVar21 = 4;
        puVar23 = local_918;
        pFVar22 = (__return_storage_ptr__->AllocatorInstance).Data + lVar30;
        do {
          pFVar2 = pFVar22 + 0x80;
          uVar6 = puVar23[1];
          uVar7 = puVar23[2];
          uVar8 = puVar23[3];
          puVar25 = puVar23 + 0x10;
          *(undefined8 *)pFVar22 = *puVar23;
          *(undefined8 *)(pFVar22 + 8) = uVar6;
          uVar6 = puVar23[4];
          uVar9 = puVar23[5];
          *(undefined8 *)(pFVar22 + 0x10) = uVar7;
          *(undefined8 *)(pFVar22 + 0x18) = uVar8;
          uVar7 = puVar23[6];
          uVar8 = puVar23[7];
          *(undefined8 *)(pFVar22 + 0x20) = uVar6;
          *(undefined8 *)(pFVar22 + 0x28) = uVar9;
          uVar6 = puVar23[8];
          uVar9 = puVar23[9];
          *(undefined8 *)(pFVar22 + 0x30) = uVar7;
          *(undefined8 *)(pFVar22 + 0x38) = uVar8;
          uVar7 = puVar23[10];
          uVar8 = puVar23[0xb];
          *(undefined8 *)(pFVar22 + 0x40) = uVar6;
          *(undefined8 *)(pFVar22 + 0x48) = uVar9;
          uVar6 = puVar23[0xc];
          uVar9 = puVar23[0xd];
          *(undefined8 *)(pFVar22 + 0x50) = uVar7;
          *(undefined8 *)(pFVar22 + 0x58) = uVar8;
          uVar7 = puVar23[0xe];
          uVar8 = puVar23[0xf];
          *(undefined8 *)(pFVar22 + 0x60) = uVar6;
          *(undefined8 *)(pFVar22 + 0x68) = uVar9;
          *(undefined8 *)(pFVar22 + 0x70) = uVar7;
          *(undefined8 *)(pFVar22 + 0x78) = uVar8;
          lVar21 = lVar21 + -1;
          puVar23 = puVar25;
          pFVar22 = pFVar2;
        } while (lVar21 != 0);
        *(undefined8 *)pFVar2 = *puVar25;
        uVar14 = 0;
        if ((int)uVar28 < local_a50[0]) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        pTVar16 = FVulkanDeviceExtension::GetDriverSupportedDeviceExtensions
                            (&local_a38,local_a40->Gpu,(char *)(local_a58.Data + lVar27));
        uVar14 = 0;
        if ((int)uVar28 < __return_storage_ptr__->ArrayNum) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        pTVar26 = (TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *)
                  ((__return_storage_ptr__->AllocatorInstance).Data + lVar30 + 0x208);
        if (pTVar26 != pTVar16) {
          pFVar22 = (pTVar26->AllocatorInstance).Data;
          if (pFVar22 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar22);
          }
          (pTVar26->AllocatorInstance).Data = (pTVar16->AllocatorInstance).Data;
          (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar26->ArrayNum = pTVar16->ArrayNum;
          pTVar26->ArrayMax = pTVar16->ArrayMax;
          pTVar16->ArrayNum = 0;
          pTVar16->ArrayMax = 0;
        }
        if (local_a38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a38.AllocatorInstance.Data);
        }
        if (3 < (byte)LogVulkanRHI._0_1_) {
          uVar14 = 0;
          if ((int)uVar28 < *local_a48) {
            uVar14 = uVar24;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar15;
          }
          uVar14 = 0;
          if ((int)uVar28 < local_a50[0]) {
            uVar14 = uVar24;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar15;
          }
          local_708._padding_ = 0;
          pFVar22 = local_a58.Data + lVar27;
          if (pFVar22 == (FScriptContainerElement *)0x0) {
            local_708.Ptr = (wchar_t *)0x0;
            local_708.StringLength = 0;
          }
          else {
            sVar17 = strlen((char *)pFVar22);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_708,(char *)pFVar22,(int)sVar17,Yes);
          }
          UE::Logging::Private::BasicLog<4>
                    (&`public:_class_TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>___cdecl_FVulkanDeviceSetupHelper::EnumerateLayerProperties(void)const___ptr64'
                      ::__l60::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          if ((void *)local_708._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_708._padding_);
          }
        }
        uVar14 = 0;
        if ((int)uVar28 < *local_a48) {
          uVar14 = uVar24;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar15;
        }
        __return_storage_ptr__ = local_a60;
        pFVar22 = (local_a60->AllocatorInstance).Data;
        iVar12 = *(int *)(pFVar22 + lVar30 + 0x210);
        puVar23 = *(undefined8 **)(pFVar22 + lVar30 + 0x208);
        puVar25 = (undefined8 *)((longlong)iVar12 * 0x104 + (longlong)puVar23);
        while( true ) {
          if (*(int *)(pFVar22 + lVar30 + 0x210) != iVar12) {
            local_a68[0] = 0;
            `TCheckedPointerIterator<VkExtensionProperties,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_a68);
          }
          if (puVar23 == puVar25) break;
          puVar20 = &DAT_00000002;
          pcVar18 = local_a28;
          puVar19 = puVar23;
          do {
            pcVar3 = pcVar18 + 0x80;
            uVar6 = puVar19[1];
            uVar7 = puVar19[2];
            uVar8 = puVar19[3];
            puVar4 = puVar19 + 0x10;
            *(undefined8 *)pcVar18 = *puVar19;
            *(undefined8 *)(pcVar18 + 8) = uVar6;
            uVar6 = puVar19[4];
            uVar9 = puVar19[5];
            *(undefined8 *)(pcVar18 + 0x10) = uVar7;
            *(undefined8 *)(pcVar18 + 0x18) = uVar8;
            uVar7 = puVar19[6];
            uVar8 = puVar19[7];
            *(undefined8 *)(pcVar18 + 0x20) = uVar6;
            *(undefined8 *)(pcVar18 + 0x28) = uVar9;
            uVar6 = puVar19[8];
            uVar9 = puVar19[9];
            *(undefined8 *)(pcVar18 + 0x30) = uVar7;
            *(undefined8 *)(pcVar18 + 0x38) = uVar8;
            uVar7 = puVar19[10];
            uVar8 = puVar19[0xb];
            *(undefined8 *)(pcVar18 + 0x40) = uVar6;
            *(undefined8 *)(pcVar18 + 0x48) = uVar9;
            uVar6 = puVar19[0xc];
            uVar9 = puVar19[0xd];
            *(undefined8 *)(pcVar18 + 0x50) = uVar7;
            *(undefined8 *)(pcVar18 + 0x58) = uVar8;
            uVar7 = puVar19[0xe];
            uVar8 = puVar19[0xf];
            *(undefined8 *)(pcVar18 + 0x60) = uVar6;
            *(undefined8 *)(pcVar18 + 0x68) = uVar9;
            *(undefined8 *)(pcVar18 + 0x70) = uVar7;
            *(undefined8 *)(pcVar18 + 0x78) = uVar8;
            puVar20 = puVar20 + -1;
            pcVar18 = pcVar3;
            puVar19 = puVar4;
          } while (puVar20 != (undefined1 *)0x0);
          *(undefined4 *)pcVar3 = *(undefined4 *)puVar4;
          if (3 < (byte)LogVulkanRHI._0_1_) {
            local_168._padding_ = (longlong)puVar20;
            sVar17 = strlen(local_a28);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,local_a28,(int)sVar17,Yes);
            UE::Logging::Private::BasicLog<4>
                      (&`public:_class_TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>___cdecl_FVulkanDeviceSetupHelper::EnumerateLayerProperties(void)const___ptr64'
                        ::__l82::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
            if ((undefined1 *)local_168._padding_ != (undefined1 *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          puVar23 = (undefined8 *)((longlong)puVar23 + 0x104);
        }
        uVar28 = uVar28 + 1;
        piVar29 = &__return_storage_ptr__->ArrayNum;
        pTVar15 = __return_storage_ptr__;
      } while (uVar28 < local_a64);
    }
  }
  if ((VkLayerProperties *)local_a58.Data != (VkLayerProperties *)0x0) {
    FMemory::Free(local_a58.Data);
  }
  return pTVar15;
}

