// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AvfMediaFactory
// Functions: 10

// CanPlayUrl @ 14ea252d0

bool __thiscall
FAvfMediaFactoryModule::CanPlayUrl
          (FAvfMediaFactoryModule *this,FString *param_1,IMediaOptions *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))();
  return 0 < iVar1;
}

// GetPlayabilityConfidenceScore @ 14ea25300

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
FAvfMediaFactoryModule::GetPlayabilityConfidenceScore
          (FAvfMediaFactoryModule *this,FString *param_1,IMediaOptions *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  ForAnyElementType FVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FText local_28;
  FTextFormat local_18;
  
  iVar6 = 0;
  iVar4 = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  ::FString::FString(&local_a8,L"://");
  bVar3 = ::FString::Split(param_1,&local_a8,&local_d8,&local_b8,CaseSensitive,FromStart);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar12 = (this->SupportedUriSchemes).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)(this->SupportedUriSchemes).ArrayNum * 0x10;
    if (pFVar12 != pFVar13) {
      iVar5 = local_d8.Data.ArrayNum;
      do {
        iVar1 = *(int *)(pFVar12 + 8);
        if (iVar1 == iVar5) {
          if (1 < iVar1) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar12,(wchar_t *)local_d8.Data.AllocatorInstance.Data)
            ;
            bVar3 = iVar5 == 0;
            iVar5 = local_d8.Data.ArrayNum;
            goto LAB_14ea2549a;
          }
LAB_14ea25607:
          FVar10.Data = (FScriptContainerElement *)L"";
          if (iVar5 != 0) {
            FVar10.Data = local_d8.Data.AllocatorInstance.Data;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"file");
          if (iVar6 != 0) goto LAB_14ea257cb;
          FPaths::GetExtension(&local_c8,&local_b8,false);
          pFVar12 = (this->SupportedFileExtensions).AllocatorInstance.Data;
          pFVar13 = pFVar12 + (longlong)(this->SupportedFileExtensions).ArrayNum * 0x10;
          uVar11 = local_c8.Data._8_8_;
          goto joined_r0x00014ea2564e;
        }
        bVar3 = iVar1 + iVar5 == 1;
LAB_14ea2549a:
        if (bVar3) goto LAB_14ea25607;
        pFVar12 = pFVar12 + 0x10;
      } while (pFVar12 != pFVar13);
    }
    if (param_4 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14ea255be;
    pFVar8 = FText::FromString(&local_28,&local_d8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"FAvfMediaFactoryModule",L"SchemeNotSupported",
                        L"The URI scheme \'{0}\' is not supported");
    pFVar9 = FTextFormat::FTextFormat(&local_18,pFVar7,Default);
    pFVar7 = FText::Format<FText>(&local_68,pFVar9,pFVar8);
    pFVar8 = (FText *)(param_4->AllocatorInstance).Data;
    if (((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + param_4->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    pFVar12 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar4 + 1;
    FText::FText((FText *)(pFVar12 + (longlong)iVar4 * 0x10),pFVar7);
    local_98.TextData.Reference = local_58.TextData.Reference;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      local_98.TextData.Reference = local_58.TextData.Reference;
    }
  }
  else {
    iVar4 = iVar6;
    if (param_4 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14ea255be;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"FAvfMediaFactoryModule",L"NoSchemeFound",L"No URI scheme found")
    ;
    pFVar8 = (FText *)(param_4->AllocatorInstance).Data;
    if (((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + param_4->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar4 = param_4->ArrayNum;
    if (iVar4 == param_4->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    pFVar12 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar4 + 1;
    FText::FText((FText *)(pFVar12 + (longlong)iVar4 * 0x10),pFVar7);
  }
  iVar4 = iVar6;
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  goto LAB_14ea255be;
joined_r0x00014ea2564e:
  if (pFVar12 == pFVar13) goto LAB_14ea25694;
  iVar6 = *(int *)(pFVar12 + 8);
  if (iVar6 == (int)uVar11) {
    if (1 < iVar6) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar12,(wchar_t *)local_c8.Data.AllocatorInstance.Data);
      bVar3 = iVar6 == 0;
      uVar11 = local_c8.Data._8_8_;
      goto LAB_14ea25680;
    }
LAB_14ea257bc:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
LAB_14ea257cb:
    iVar4 = 0x50;
    goto LAB_14ea255be;
  }
  bVar3 = iVar6 + (int)uVar11 == 1;
LAB_14ea25680:
  if (bVar3) goto LAB_14ea257bc;
  pFVar12 = pFVar12 + 0x10;
  goto joined_r0x00014ea2564e;
LAB_14ea25694:
  if (param_4 != (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar8 = FText::FromString(&local_48,&local_c8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"FAvfMediaFactoryModule",L"ExtensionNotSupported",
                        L"The file extension \'{0}\' is not supported");
    pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
    pFVar7 = FText::Format<FText>(&local_88,pFVar9,pFVar8);
    pFVar8 = (FText *)(param_4->AllocatorInstance).Data;
    if (((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + param_4->ArrayMax)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    iVar6 = param_4->ArrayNum;
    if (iVar6 == param_4->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    pFVar12 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar6 + 1;
    FText::FText((FText *)(pFVar12 + (longlong)iVar6 * 0x10),pFVar7);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
LAB_14ea255be:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return iVar4;
}

// CreatePlayer @ 14ea257e0

TSharedPtr<IMediaPlayer,1> * __thiscall
FAvfMediaFactoryModule::CreatePlayer
          (FAvfMediaFactoryModule *this,TSharedPtr<IMediaPlayer,1> *__return_storage_ptr__,
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
  pFVar2 = ::FName::FName(&local_res10,"AvfMedia");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModule(this_00,FVar1,None);
  if (pIVar3 == (IModuleInterface *)0x0) {
    __return_storage_ptr__->Object = (IMediaPlayer *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,local_18,param_1);
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

// GetDisplayName @ 14ea25890

FText * __thiscall
FAvfMediaFactoryModule::GetDisplayName(FAvfMediaFactoryModule *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FAvfMediaFactoryModule",L"MediaPlayerDisplayName",
             L"Apple AV Foundation");
  return __return_storage_ptr__;
}

// GetPlayerName @ 14ea258d0

FName __thiscall FAvfMediaFactoryModule::GetPlayerName(FAvfMediaFactoryModule *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_FAvfMediaFactoryModule::GetPlayerName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_FAvfMediaFactoryModule::GetPlayerName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_FAvfMediaFactoryModule::GetPlayerName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_class_FName___cdecl_FAvfMediaFactoryModule::GetPlayerName(void)const___ptr64'
                      ::__l2::PlayerName,L"AvfMedia");
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_FAvfMediaFactoryModule::GetPlayerName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_FAvfMediaFactoryModule::GetPlayerName(void)const___ptr64'
       ::__l2::PlayerName;
  return in_RDX;
}

// GetPlayerPluginGUID @ 14ea25950

FGuid * __thiscall
FAvfMediaFactoryModule::GetPlayerPluginGUID
          (FAvfMediaFactoryModule *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ =
       `public:_virtual_struct_FGuid___cdecl_FAvfMediaFactoryModule::GetPlayerPluginGUID(void)const___ptr64'
       ::__l2::PlayerPluginGUID;
  return __return_storage_ptr__;
}

// GetSupportedPlatforms @ 14ea25970

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FAvfMediaFactoryModule::GetSupportedPlatforms(FAvfMediaFactoryModule *this)

{
  return &this->SupportedPlatforms;
}

// SupportsFeature @ 14ea25980

bool __thiscall
FAvfMediaFactoryModule::SupportsFeature(FAvfMediaFactoryModule *this,EMediaFeature param_1)

{
  if ((param_1 < (VideoTracks|AudioTracks)) && ((0x517U >> (param_1 & 0x1f) & 1) != 0)) {
    return true;
  }
  return false;
}

// StartupModule @ 14ea259a0

/* WARNING: Removing unreachable block (ram,0x00014ea2706c) */
/* WARNING: Removing unreachable block (ram,0x00014ea26e84) */
/* WARNING: Removing unreachable block (ram,0x00014ea26c9c) */
/* WARNING: Removing unreachable block (ram,0x00014ea26ab4) */
/* WARNING: Removing unreachable block (ram,0x00014ea268ea) */
/* WARNING: Removing unreachable block (ram,0x00014ea2673e) */
/* WARNING: Removing unreachable block (ram,0x00014ea26592) */
/* WARNING: Removing unreachable block (ram,0x00014ea263e6) */
/* WARNING: Removing unreachable block (ram,0x00014ea2623a) */
/* WARNING: Removing unreachable block (ram,0x00014ea2608e) */
/* WARNING: Removing unreachable block (ram,0x00014ea25ee2) */
/* WARNING: Removing unreachable block (ram,0x00014ea25d36) */
/* WARNING: Removing unreachable block (ram,0x00014ea25b80) */
/* WARNING: Removing unreachable block (ram,0x00014ea25aa0) */
/* WARNING: Removing unreachable block (ram,0x00014ea25c60) */
/* WARNING: Removing unreachable block (ram,0x00014ea25e0c) */
/* WARNING: Removing unreachable block (ram,0x00014ea25fb8) */
/* WARNING: Removing unreachable block (ram,0x00014ea26164) */
/* WARNING: Removing unreachable block (ram,0x00014ea26310) */
/* WARNING: Removing unreachable block (ram,0x00014ea264bc) */
/* WARNING: Removing unreachable block (ram,0x00014ea26668) */
/* WARNING: Removing unreachable block (ram,0x00014ea26814) */
/* WARNING: Removing unreachable block (ram,0x00014ea269c0) */
/* WARNING: Removing unreachable block (ram,0x00014ea26ba8) */
/* WARNING: Removing unreachable block (ram,0x00014ea26d90) */
/* WARNING: Removing unreachable block (ram,0x00014ea26f78) */
/* WARNING: Removing unreachable block (ram,0x00014ea27180) */

void __thiscall FAvfMediaFactoryModule::StartupModule(FAvfMediaFactoryModule *this)

{
  FString *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  undefined8 *puVar8;
  FName local_res8;
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
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_1c8,L"file");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_1c8) &&
      (&local_1c8 <
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
  puVar8 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar8 = 0;
  *puVar8 = local_1c8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_1c8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_1c8.Data.ArrayMax;
  local_1c8.Data.ArrayNum = 0;
  local_1c8.Data.ArrayMax = 0;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1b8,L"http");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_1b8) &&
      (&local_1b8 <
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
  puVar8 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar8 = 0;
  *puVar8 = local_1b8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_1b8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_1b8.Data.ArrayMax;
  local_1b8.Data.ArrayNum = 0;
  local_1b8.Data.ArrayMax = 0;
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_1a8,L"https");
  pFVar1 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar1 <= &local_1a8) &&
      (&local_1a8 <
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
  puVar8 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar8 = 0;
  *puVar8 = local_1a8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_1a8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_1a8.Data.ArrayMax;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_198,L"iOS");
  pFVar1 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
  if (((pFVar1 <= &local_198) &&
      (&local_198 <
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
  puVar8 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedFileExtensions).ArrayNum);
  *puVar8 = 0;
  *puVar8 = local_198.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_198.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_198.Data.ArrayMax;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_188,L"Mac");
  pFVar1 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
  if (((pFVar1 <= &local_188) &&
      (&local_188 <
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
  puVar8 = (undefined8 *)
           ((longlong)iVar5 * 0x10 + *(longlong *)&(this->SupportedFileExtensions).ArrayNum);
  *puVar8 = 0;
  *puVar8 = local_188.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_188.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_188.Data.ArrayMax;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_178,L"3g2");
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_178.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_178.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_178.Data.ArrayMax;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_168,L"3gp");
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_168.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_168.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_168.Data.ArrayMax;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_158,L"3gp2");
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_158.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_158.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_158.Data.ArrayMax;
  local_158.Data.ArrayNum = 0;
  local_158.Data.ArrayMax = 0;
  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_148,L"3gpp");
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_148.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_148.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_148.Data.ArrayMax;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_138,L"ac3");
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_138.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_138.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_138.Data.ArrayMax;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_128,L"aif");
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_128.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_128.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_128.Data.ArrayMax;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_118,L"aifc");
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_118.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_118.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_118.Data.ArrayMax;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_108,L"aiff");
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_108.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_108.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_108.Data.ArrayMax;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_f8,L"amr");
  if ((((FString *)this->_padding_ <= &local_f8) &&
      (&local_f8 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_f8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_f8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_f8.Data.ArrayMax;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_e8,L"au");
  if ((((FString *)this->_padding_ <= &local_e8) &&
      (&local_e8 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_e8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_e8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_e8.Data.ArrayMax;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_d8,L"bwf");
  if ((((FString *)this->_padding_ <= &local_d8) &&
      (&local_d8 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_d8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_d8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_d8.Data.ArrayMax;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_c8,L"caf");
  if ((((FString *)this->_padding_ <= &local_c8) &&
      (&local_c8 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_c8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_c8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_c8.Data.ArrayMax;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_b8,L"cdda");
  if ((((FString *)this->_padding_ <= &local_b8) &&
      (&local_b8 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_b8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_b8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_b8.Data.ArrayMax;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_a8,L"m4a");
  if ((((FString *)this->_padding_ <= &local_a8) &&
      (&local_a8 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_a8.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_a8.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_a8.Data.ArrayMax;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_98,L"m4v");
  if ((((FString *)this->_padding_ <= &local_98) &&
      (&local_98 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_98.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_98.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_88,L"mov");
  if ((((FString *)this->_padding_ <= &local_88) &&
      (&local_88 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_88.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_88.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_78,L"mp4");
  if ((((FString *)this->_padding_ <= &local_78) &&
      (&local_78 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_78.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_78.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_68,L"qt");
  if ((((FString *)this->_padding_ <= &local_68) &&
      (&local_68 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_68.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_68.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_58,L"sdv");
  if ((((FString *)this->_padding_ <= &local_58) &&
      (&local_58 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_58.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_58.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_48,L"snd");
  if ((((FString *)this->_padding_ <= &local_48) &&
      (&local_48 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_48.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_48.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_38,L"wav");
  if ((((FString *)this->_padding_ <= &local_38) &&
      (&local_38 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_38.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_38.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_38.Data.ArrayMax;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_28,L"wave");
  if ((((FString *)this->_padding_ <= &local_28) &&
      (&local_28 <
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
  puVar8 = (undefined8 *)((longlong)iVar5 * 0x10 + this->_padding_);
  *puVar8 = 0;
  *puVar8 = local_28.Data.AllocatorInstance.Data;
  *(int *)(puVar8 + 1) = local_28.Data.ArrayNum;
  *(int *)((longlong)puVar8 + 0xc) = local_28.Data.ArrayMax;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FName::FName(&local_res8,"Media");
  FVar2 = *pFVar6;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModule(this_00,FVar2,None);
  if (pIVar7 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x80))(pIVar7,&this[-1].SupportedUriSchemes.ArrayNum);
  }
  return;
}

// ShutdownModule @ 14ea271e0

void __thiscall FAvfMediaFactoryModule::ShutdownModule(FAvfMediaFactoryModule *this)

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

