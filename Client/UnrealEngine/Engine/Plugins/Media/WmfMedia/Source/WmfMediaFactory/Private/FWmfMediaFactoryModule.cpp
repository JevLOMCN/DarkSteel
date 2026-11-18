// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMediaFactory
// Functions: 10

// CanPlayUrl @ 14eac3190

bool __thiscall
FWmfMediaFactoryModule::CanPlayUrl
          (FWmfMediaFactoryModule *this,FString *param_1,IMediaOptions *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))();
  return 0 < iVar1;
}

// GetPlayabilityConfidenceScore @ 14eac31c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
FWmfMediaFactoryModule::GetPlayabilityConfidenceScore
          (FWmfMediaFactoryModule *this,FString *param_1,IMediaOptions *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  ForAnyElementType FVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FString local_118;
  FString local_108;
  FString local_f8;
  FName local_e8;
  FString local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FTextFormat local_60;
  FText local_50;
  FTextFormat local_40;
  
  iVar7 = 0;
  iVar5 = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  ::FString::FString(&local_e0,L"://");
  bVar3 = ::FString::Split(param_1,&local_e0,&local_118,&local_f8,CaseSensitive,FromStart);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar13 = (this->SupportedUriSchemes).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)(this->SupportedUriSchemes).ArrayNum * 0x10;
    if (pFVar13 != pFVar14) {
      iVar6 = local_118.Data.ArrayNum;
      do {
        iVar1 = *(int *)(pFVar13 + 8);
        if (iVar1 == iVar6) {
          if (1 < iVar1) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar13,(wchar_t *)local_118.Data.AllocatorInstance.Data
                              );
            bVar3 = iVar6 == 0;
            iVar6 = local_118.Data.ArrayNum;
            goto LAB_14eac336a;
          }
LAB_14eac34eb:
          FVar11.Data = (FScriptContainerElement *)L"";
          if (iVar6 != 0) {
            FVar11.Data = local_118.Data.AllocatorInstance.Data;
          }
          iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"file");
          if (iVar7 != 0) goto LAB_14eac36b9;
          FPaths::GetExtension(&local_108,&local_f8,false);
          pFVar13 = (this->SupportedFileExtensions).AllocatorInstance.Data;
          pFVar14 = pFVar13 + (longlong)(this->SupportedFileExtensions).ArrayNum * 0x10;
          uVar12 = local_108.Data._8_8_;
          goto joined_r0x00014eac3535;
        }
        bVar3 = iVar1 + iVar6 == 1;
LAB_14eac336a:
        if (bVar3) goto LAB_14eac34eb;
        pFVar13 = pFVar13 + 0x10;
      } while (pFVar13 != pFVar14);
    }
    if (param_4 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14eac3491;
    pFVar9 = FText::FromString(&local_50,&local_118);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_80,L"FWmfMediaFactoryModule",L"SchemeNotSupported",
                        L"The URI scheme \'{0}\' is not supported");
    pFVar10 = FTextFormat::FTextFormat(&local_40,pFVar8,Default);
    pFVar8 = FText::Format<FText>(&local_90,pFVar10,pFVar9);
    pFVar9 = (FText *)(param_4->AllocatorInstance).Data;
    if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + param_4->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    pFVar13 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar5 + 1;
    FText::FText((FText *)(pFVar13 + (longlong)iVar5 * 0x10),pFVar8);
    local_d0.TextData.Reference = local_80.TextData.Reference;
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      local_d0.TextData.Reference = local_80.TextData.Reference;
    }
  }
  else {
    iVar5 = iVar7;
    if (param_4 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14eac3491;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_d0,L"FWmfMediaFactoryModule",L"NoSchemeFound",L"No URI scheme found")
    ;
    pFVar9 = (FText *)(param_4->AllocatorInstance).Data;
    if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + param_4->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    pFVar13 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar5 + 1;
    FText::FText((FText *)(pFVar13 + (longlong)iVar5 * 0x10),pFVar8);
  }
  iVar5 = iVar7;
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  goto LAB_14eac3491;
joined_r0x00014eac3535:
  if (pFVar13 == pFVar14) goto LAB_14eac357f;
  iVar7 = *(int *)(pFVar13 + 8);
  if (iVar7 == (int)uVar12) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar13,(wchar_t *)local_108.Data.AllocatorInstance.Data);
      bVar3 = iVar7 == 0;
      uVar12 = local_108.Data._8_8_;
      goto LAB_14eac356b;
    }
LAB_14eac36aa:
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
LAB_14eac36b9:
    if ((param_3 != (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) &&
       (param_2 != (IMediaOptions *)0x0)) {
      pcVar2 = *(code **)((longlong)*param_2 + 0x30);
      ::FName::FName(&local_e8,"PrecacheFile");
      cVar4 = (*pcVar2)(param_2,&local_e8,0);
      if (cVar4 != '\0') {
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_118.Data.ArrayNum != 0) {
          FVar11.Data = local_118.Data.AllocatorInstance.Data;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar11.Data,L"file");
        if (iVar5 != 0) {
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_a0,L"FWmfMediaFactoryModule",L"PrecachingNotSupported",
                              L"Precaching is supported for local files only");
          pFVar9 = (FText *)(param_3->AllocatorInstance).Data;
          if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + param_3->ArrayMax)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          iVar5 = param_3->ArrayNum;
          if (iVar5 == param_3->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          pFVar13 = (param_3->AllocatorInstance).Data;
          param_3->ArrayNum = iVar5 + 1;
          FText::FText((FText *)(pFVar13 + (longlong)iVar5 * 0x10),pFVar8);
          if (local_a0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
          }
        }
      }
    }
    iVar5 = 0x50;
    goto LAB_14eac3491;
  }
  bVar3 = iVar7 + (int)uVar12 == 1;
LAB_14eac356b:
  if (bVar3) goto LAB_14eac36aa;
  pFVar13 = pFVar13 + 0x10;
  goto joined_r0x00014eac3535;
LAB_14eac357f:
  if (param_4 != (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar9 = FText::FromString(&local_70,&local_108);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_b0,L"FWmfMediaFactoryModule",L"ExtensionNotSupported",
                        L"The file extension \'{0}\' is not supported");
    pFVar10 = FTextFormat::FTextFormat(&local_60,pFVar8,Default);
    pFVar8 = FText::Format<FText>(&local_c0,pFVar10,pFVar9);
    pFVar9 = (FText *)(param_4->AllocatorInstance).Data;
    if (((pFVar9 <= pFVar8) && (pFVar8 < pFVar9 + param_4->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    iVar7 = param_4->ArrayNum;
    if (iVar7 == param_4->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    pFVar13 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar7 + 1;
    FText::FText((FText *)(pFVar13 + (longlong)iVar7 * 0x10),pFVar8);
    if (local_c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
    }
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
LAB_14eac3491:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return iVar5;
}

// CreatePlayer @ 14eac37f0

TSharedPtr<IMediaPlayer,1> * __thiscall
FWmfMediaFactoryModule::CreatePlayer
          (FWmfMediaFactoryModule *this,TSharedPtr<IMediaPlayer,1> *__return_storage_ptr__,
          IMediaEventSink *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  undefined8 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName local_res10;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pFVar2 = ::FName::FName(&local_res10,"WmfMedia");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModule(this_00,FVar1,None);
  if (pIVar3 == (IModuleInterface *)0x0) {
    __return_storage_ptr__->Object = (IMediaPlayer *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,local_18,param_1);
    __return_storage_ptr__->Object = (IMediaPlayer *)*puVar4;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)puVar4[1];
    puVar4[1] = 0;
    *puVar4 = 0;
    pTVar5 = local_10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// GetDisplayName @ 14eac38a0

FText * __thiscall
FWmfMediaFactoryModule::GetDisplayName(FWmfMediaFactoryModule *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FWmfMediaFactoryModule",L"MediaPlayerDisplayName",
             L"Windows Media Foundation");
  return __return_storage_ptr__;
}

// GetPlayerName @ 14eac38e0

FName __thiscall FWmfMediaFactoryModule::GetPlayerName(FWmfMediaFactoryModule *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_FWmfMediaFactoryModule::GetPlayerName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_FWmfMediaFactoryModule::GetPlayerName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_FWmfMediaFactoryModule::GetPlayerName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_class_FName___cdecl_FWmfMediaFactoryModule::GetPlayerName(void)const___ptr64'
                      ::__l2::PlayerName,L"WmfMedia");
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_FWmfMediaFactoryModule::GetPlayerName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_FWmfMediaFactoryModule::GetPlayerName(void)const___ptr64'
       ::__l2::PlayerName;
  return in_RDX;
}

// GetPlayerPluginGUID @ 14eac3960

FGuid * __thiscall
FWmfMediaFactoryModule::GetPlayerPluginGUID
          (FWmfMediaFactoryModule *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ =
       `public:_virtual_struct_FGuid___cdecl_FWmfMediaFactoryModule::GetPlayerPluginGUID(void)const___ptr64'
       ::__l2::PlayerPluginGUID;
  return __return_storage_ptr__;
}

// GetSupportedPlatforms @ 14eac3980

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FWmfMediaFactoryModule::GetSupportedPlatforms(FWmfMediaFactoryModule *this)

{
  return &this->SupportedPlatforms;
}

// SupportsFeature @ 14eac3990

bool __thiscall
FWmfMediaFactoryModule::SupportsFeature(FWmfMediaFactoryModule *this,EMediaFeature param_1)

{
  if ((param_1 < (VideoTracks|AudioTracks)) && ((0x53fU >> (param_1 & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// StartupModule @ 14eac39b0

/* WARNING: Removing unreachable block (ram,0x00014eac53fc) */
/* WARNING: Removing unreachable block (ram,0x00014eac520e) */
/* WARNING: Removing unreachable block (ram,0x00014eac5020) */
/* WARNING: Removing unreachable block (ram,0x00014eac4e32) */
/* WARNING: Removing unreachable block (ram,0x00014eac4c44) */
/* WARNING: Removing unreachable block (ram,0x00014eac492c) */
/* WARNING: Removing unreachable block (ram,0x00014eac477a) */
/* WARNING: Removing unreachable block (ram,0x00014eac45c8) */
/* WARNING: Removing unreachable block (ram,0x00014eac4416) */
/* WARNING: Removing unreachable block (ram,0x00014eac4264) */
/* WARNING: Removing unreachable block (ram,0x00014eac40b2) */
/* WARNING: Removing unreachable block (ram,0x00014eac3f00) */
/* WARNING: Removing unreachable block (ram,0x00014eac3d4e) */
/* WARNING: Removing unreachable block (ram,0x00014eac3b92) */
/* WARNING: Removing unreachable block (ram,0x00014eac3aaf) */
/* WARNING: Removing unreachable block (ram,0x00014eac3c75) */
/* WARNING: Removing unreachable block (ram,0x00014eac3e27) */
/* WARNING: Removing unreachable block (ram,0x00014eac3fd9) */
/* WARNING: Removing unreachable block (ram,0x00014eac418b) */
/* WARNING: Removing unreachable block (ram,0x00014eac433d) */
/* WARNING: Removing unreachable block (ram,0x00014eac44ef) */
/* WARNING: Removing unreachable block (ram,0x00014eac46a1) */
/* WARNING: Removing unreachable block (ram,0x00014eac4853) */
/* WARNING: Removing unreachable block (ram,0x00014eac4a05) */
/* WARNING: Removing unreachable block (ram,0x00014eac4d3b) */
/* WARNING: Removing unreachable block (ram,0x00014eac4f29) */
/* WARNING: Removing unreachable block (ram,0x00014eac5117) */
/* WARNING: Removing unreachable block (ram,0x00014eac5305) */
/* WARNING: Removing unreachable block (ram,0x00014eac54f5) */

void __thiscall FWmfMediaFactoryModule::StartupModule(FWmfMediaFactoryModule *this)

{
  FString *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  IModuleInterface *pIVar7;
  FString *pFVar8;
  FModuleManager *this_00;
  undefined8 *puVar9;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  FString local_38;
  
  ::FString::FString(&local_218,L"3g2");
  if ((((FString *)this->_padding_ <= &local_218) &&
      (&local_218 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_218.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_218.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_218.Data.ArrayMax;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_208,L"3gp");
  if ((((FString *)this->_padding_ <= &local_208) &&
      (&local_208 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_208.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_208.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_208.Data.ArrayMax;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1f8,L"3gp2");
  if ((((FString *)this->_padding_ <= &local_1f8) &&
      (&local_1f8 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_1f8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_1f8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_1f8.Data.ArrayMax;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1e8,L"3gpp");
  if ((((FString *)this->_padding_ <= &local_1e8) &&
      (&local_1e8 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_1e8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_1e8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_1e8.Data.ArrayMax;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1d8,L"aac");
  if ((((FString *)this->_padding_ <= &local_1d8) &&
      (&local_1d8 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_1d8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_1d8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_1d8.Data.ArrayMax;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1c8,L"adts");
  if ((((FString *)this->_padding_ <= &local_1c8) &&
      (&local_1c8 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_1c8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_1c8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_1c8.Data.ArrayMax;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1b8,L"asf");
  if ((((FString *)this->_padding_ <= &local_1b8) &&
      (&local_1b8 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_1b8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_1b8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_1b8.Data.ArrayMax;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1a8,L"avi");
  if ((((FString *)this->_padding_ <= &local_1a8) &&
      (&local_1a8 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_1a8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_1a8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_1a8.Data.ArrayMax;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_198,L"m2ts");
  if ((((FString *)this->_padding_ <= &local_198) &&
      (&local_198 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_198.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_198.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_198.Data.ArrayMax;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_188,L"m4a");
  if ((((FString *)this->_padding_ <= &local_188) &&
      (&local_188 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_188.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_188.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_188.Data.ArrayMax;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_178,L"m4v");
  if ((((FString *)this->_padding_ <= &local_178) &&
      (&local_178 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_178.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_178.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_178.Data.ArrayMax;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_168,L"mov");
  if ((((FString *)this->_padding_ <= &local_168) &&
      (&local_168 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_168.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_168.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_168.Data.ArrayMax;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_158,L"mp4");
  if ((((FString *)this->_padding_ <= &local_158) &&
      (&local_158 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_158.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_158.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_158.Data.ArrayMax;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_148,L"sami");
  if ((((FString *)this->_padding_ <= &local_148) &&
      (&local_148 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_148.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_148.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_148.Data.ArrayMax;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_138,L"smi");
  if ((((FString *)this->_padding_ <= &local_138) &&
      (&local_138 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_138.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_138.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_138.Data.ArrayMax;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_128,L"wav");
  if ((((FString *)this->_padding_ <= &local_128) &&
      (&local_128 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_128.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_128.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_128.Data.ArrayMax;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_118,L"wma");
  if ((((FString *)this->_padding_ <= &local_118) &&
      (&local_118 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_118.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_118.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_118.Data.ArrayMax;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_108,L"wmv");
  if ((((FString *)this->_padding_ <= &local_108) &&
      (&local_108 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,
                       (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4
                              ));
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar9 = 0;
  *puVar9 = local_108.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_108.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_108.Data.ArrayMax;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_f8,L"Windows");
  pFVar1 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
  if (((pFVar1 <= &local_f8) &&
      (&local_f8 <
       pFVar1 + *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedFileExtensions).ArrayNum,
                       (int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedFileExtensions).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_f8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_f8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_f8.Data.ArrayMax;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48 = 0x5636fbc1;
  local_44 = 0xd2b54f62;
  local_40 = 0xac8e7d4f;
  local_3c = 0xb184b45a;
  pFVar6 = ::FName::FName(&local_res10,"Media");
  pIVar7 = FModuleManager::GetModulePtr_Internal(*pFVar6);
  if ((pIVar7 != (IModuleInterface *)0x0) &&
     ((**(code **)((longlong)*pIVar7 + 0x40))(pIVar7,&local_res8,&local_48),
     local_res8 != (FName)0x0)) {
    pFVar8 = ::FName::ToString(&local_res8,&local_38);
    pFVar1 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
    if ((pFVar1 <= pFVar8) &&
       ((pFVar8 < pFVar1 + *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4
                                   ) &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data;
    if (iVar5 == *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&(this->SupportedFileExtensions).ArrayNum,
                         (int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4));
    }
    *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data = iVar5 + 1;
    puVar9 = (undefined8 *)
             ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedFileExtensions).ArrayNum);
    *puVar9 = 0;
    *puVar9 = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar9 + 1) = (pFVar8->Data).ArrayNum;
    *(int *)((longlong)puVar9 + 0xc) = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_e8,L"audcap");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_e8) &&
      (&local_e8 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_e8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_e8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_d8,L"file");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_d8) &&
      (&local_d8 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_d8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_d8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_d8.Data.ArrayMax;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_c8,L"http");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_c8) &&
      (&local_c8 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_c8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_c8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_c8.Data.ArrayMax;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_b8,L"httpd");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_b8) &&
      (&local_b8 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_b8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_b8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_b8.Data.ArrayMax;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_a8,L"https");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_a8) &&
      (&local_a8 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_a8.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_a8.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_a8.Data.ArrayMax;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_98,L"mms");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_98) &&
      (&local_98 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_98.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_98.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_88,L"rtsp");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_88) &&
      (&local_88 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_88.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_88.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_78,L"rtspt");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_78) &&
      (&local_78 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_78.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_78.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_68,L"rtspu");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_68) &&
      (&local_68 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_68.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_68.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_58,L"vidcap");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_58) &&
      (&local_58 <
       pFVar1 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
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
  iVar5 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  if (iVar5 == *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,
                       (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar5 + 1;
  puVar9 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar9 = 0;
  *puVar9 = local_58.Data.AllocatorInstance.Data;
  *(int *)(puVar9 + 1) = local_58.Data.ArrayNum;
  *(int *)((longlong)puVar9 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FName::FName(&local_res18,"Media");
  FVar2 = *pFVar6;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModule(this_00,FVar2,None);
  if (pIVar7 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x80))(pIVar7,&this[-1].SupportedUriSchemes.ArrayNum);
  }
  return;
}

// ShutdownModule @ 14eac5560

void __thiscall FWmfMediaFactoryModule::ShutdownModule(FWmfMediaFactoryModule *this)

{
  FName *pFVar1;
  IModuleInterface *pIVar2;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,"Media");
  pIVar2 = FModuleManager::GetModulePtr_Internal(*pFVar1);
  if (pIVar2 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x88))(pIVar2,&this[-1].SupportedUriSchemes.ArrayNum);
  }
  return;
}

