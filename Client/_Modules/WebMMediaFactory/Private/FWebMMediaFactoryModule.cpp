// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMediaFactory
// Functions: 10

// CanPlayUrl @ 14f123b50

bool __thiscall
FWebMMediaFactoryModule::CanPlayUrl
          (FWebMMediaFactoryModule *this,FString *param_1,IMediaOptions *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))();
  return 0 < iVar1;
}

// GetPlayabilityConfidenceScore @ 14f123b80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
FWebMMediaFactoryModule::GetPlayabilityConfidenceScore
          (FWebMMediaFactoryModule *this,FString *param_1,IMediaOptions *param_2,
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
            goto LAB_14f123d1a;
          }
LAB_14f123e87:
          FVar10.Data = (FScriptContainerElement *)L"";
          if (iVar5 != 0) {
            FVar10.Data = local_d8.Data.AllocatorInstance.Data;
          }
          iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"file");
          if (iVar6 != 0) goto LAB_14f12404b;
          FPaths::GetExtension(&local_c8,&local_b8,false);
          pFVar12 = (this->SupportedFileExtensions).AllocatorInstance.Data;
          pFVar13 = pFVar12 + (longlong)(this->SupportedFileExtensions).ArrayNum * 0x10;
          uVar11 = local_c8.Data._8_8_;
          goto joined_r0x00014f123ece;
        }
        bVar3 = iVar1 + iVar5 == 1;
LAB_14f123d1a:
        if (bVar3) goto LAB_14f123e87;
        pFVar12 = pFVar12 + 0x10;
      } while (pFVar12 != pFVar13);
    }
    if (param_4 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14f123e3e;
    pFVar8 = FText::FromString(&local_28,&local_d8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"FWebMMediaFactoryModule",L"SchemeNotSupported",
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
    if (param_4 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14f123e3e;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"FWebMMediaFactoryModule",L"NoSchemeFound",L"No URI scheme found"
                       );
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
  goto LAB_14f123e3e;
joined_r0x00014f123ece:
  if (pFVar12 == pFVar13) goto LAB_14f123f14;
  iVar6 = *(int *)(pFVar12 + 8);
  if (iVar6 == (int)uVar11) {
    if (1 < iVar6) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar12,(wchar_t *)local_c8.Data.AllocatorInstance.Data);
      bVar3 = iVar6 == 0;
      uVar11 = local_c8.Data._8_8_;
      goto LAB_14f123f00;
    }
LAB_14f12403c:
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
LAB_14f12404b:
    iVar4 = 0x50;
    goto LAB_14f123e3e;
  }
  bVar3 = iVar6 + (int)uVar11 == 1;
LAB_14f123f00:
  if (bVar3) goto LAB_14f12403c;
  pFVar12 = pFVar12 + 0x10;
  goto joined_r0x00014f123ece;
LAB_14f123f14:
  if (param_4 != (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar8 = FText::FromString(&local_48,&local_c8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"FWebMMediaFactoryModule",L"ExtensionNotSupported",
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
LAB_14f123e3e:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return iVar4;
}

// CreatePlayer @ 14f124060

TSharedPtr<IMediaPlayer,1> * __thiscall
FWebMMediaFactoryModule::CreatePlayer
          (FWebMMediaFactoryModule *this,TSharedPtr<IMediaPlayer,1> *__return_storage_ptr__,
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
  pFVar2 = ::FName::FName(&local_res10,"WebMMedia");
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

// GetDisplayName @ 14f124110

FText * __thiscall
FWebMMediaFactoryModule::GetDisplayName(FWebMMediaFactoryModule *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FWebMMediaFactoryModule",L"MediaPlayerDisplayName",
             L"WebM Media");
  return __return_storage_ptr__;
}

// GetPlayerName @ 14f124150

FName __thiscall FWebMMediaFactoryModule::GetPlayerName(FWebMMediaFactoryModule *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_FWebMMediaFactoryModule::GetPlayerName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_FWebMMediaFactoryModule::GetPlayerName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_FWebMMediaFactoryModule::GetPlayerName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_class_FName___cdecl_FWebMMediaFactoryModule::GetPlayerName(void)const___ptr64'
                      ::__l2::PlayerName,L"WebMMedia");
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_FWebMMediaFactoryModule::GetPlayerName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_FWebMMediaFactoryModule::GetPlayerName(void)const___ptr64'
       ::__l2::PlayerName;
  return in_RDX;
}

// GetPlayerPluginGUID @ 14f1241d0

FGuid * __thiscall
FWebMMediaFactoryModule::GetPlayerPluginGUID
          (FWebMMediaFactoryModule *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ =
       `public:_virtual_struct_FGuid___cdecl_FWebMMediaFactoryModule::GetPlayerPluginGUID(void)const___ptr64'
       ::__l2::PlayerPluginGUID;
  return __return_storage_ptr__;
}

// GetSupportedPlatforms @ 14f1241f0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FWebMMediaFactoryModule::GetSupportedPlatforms(FWebMMediaFactoryModule *this)

{
  return &this->SupportedPlatforms;
}

// SupportsFeature @ 14f124200

bool __thiscall
FWebMMediaFactoryModule::SupportsFeature(FWebMMediaFactoryModule *this,EMediaFeature param_1)

{
  return (param_1 & ~VideoSamples) == AudioSamples;
}

// StartupModule @ 14f124210

/* WARNING: Removing unreachable block (ram,0x00014f124591) */
/* WARNING: Removing unreachable block (ram,0x00014f1243df) */
/* WARNING: Removing unreachable block (ram,0x00014f124306) */
/* WARNING: Removing unreachable block (ram,0x00014f1244b8) */
/* WARNING: Removing unreachable block (ram,0x00014f1247dd) */

void __thiscall FWebMMediaFactoryModule::StartupModule(FWebMMediaFactoryModule *this)

{
  int *piVar1;
  FString *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  IModuleInterface *pIVar8;
  FString *pFVar9;
  FModuleManager *this_00;
  undefined8 *puVar10;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  FString local_48;
  FString local_38;
  
  ::FString::FString(&local_a8,L"webm");
  if ((((FString *)this->_padding_ <= &local_a8) &&
      (&local_a8 <
       (FString *)this->_padding_ +
       *(int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(this->SupportedFileExtensions).AllocatorInstance.Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&(this->SupportedFileExtensions).AllocatorInstance.Data = iVar6 + 1;
  puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + this->_padding_);
  *puVar10 = 0;
  *puVar10 = local_a8.Data.AllocatorInstance.Data;
  *(int *)(puVar10 + 1) = local_a8.Data.ArrayNum;
  *(int *)((longlong)puVar10 + 0xc) = local_a8.Data.ArrayMax;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_98,L"Linux");
  pFVar2 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
  if (((pFVar2 <= &local_98) &&
      (&local_98 <
       pFVar2 + *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data;
  if (iVar6 == *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedFileExtensions).ArrayNum,
                       (int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data = iVar6 + 1;
  puVar10 = (undefined8 *)
            ((longlong)iVar6 * 0x10 + *(longlong *)&(this->SupportedFileExtensions).ArrayNum);
  *puVar10 = 0;
  *puVar10 = local_98.Data.AllocatorInstance.Data;
  *(int *)(puVar10 + 1) = local_98.Data.ArrayNum;
  *(int *)((longlong)puVar10 + 0xc) = local_98.Data.ArrayMax;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_88,L"Mac");
  pFVar2 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
  if (((pFVar2 <= &local_88) &&
      (&local_88 <
       pFVar2 + *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data;
  if (iVar6 == *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedFileExtensions).ArrayNum,
                       (int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data = iVar6 + 1;
  puVar10 = (undefined8 *)
            ((longlong)iVar6 * 0x10 + *(longlong *)&(this->SupportedFileExtensions).ArrayNum);
  *puVar10 = 0;
  *puVar10 = local_88.Data.AllocatorInstance.Data;
  *(int *)(puVar10 + 1) = local_88.Data.ArrayNum;
  *(int *)((longlong)puVar10 + 0xc) = local_88.Data.ArrayMax;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::FString(&local_78,L"Windows");
  pFVar2 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
  if (((pFVar2 <= &local_78) &&
      (&local_78 <
       pFVar2 + *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data;
  if (iVar6 == *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedFileExtensions).ArrayNum,
                       (int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4));
  }
  *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data = iVar6 + 1;
  puVar10 = (undefined8 *)
            ((longlong)iVar6 * 0x10 + *(longlong *)&(this->SupportedFileExtensions).ArrayNum);
  *puVar10 = 0;
  *puVar10 = local_78.Data.AllocatorInstance.Data;
  *(int *)(puVar10 + 1) = local_78.Data.ArrayNum;
  *(int *)((longlong)puVar10 + 0xc) = local_78.Data.ArrayMax;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58 = 0x5636fbc1;
  local_54 = 0xd2b54f62;
  local_50 = 0xac8e7d4f;
  local_4c = 0xb184b45a;
  pFVar7 = ::FName::FName(&local_res10,"Media");
  pIVar8 = FModuleManager::GetModulePtr_Internal(*pFVar7);
  if ((pIVar8 != (IModuleInterface *)0x0) &&
     ((**(code **)((longlong)*pIVar8 + 0x40))(pIVar8,&local_res8,&local_58),
     local_res8 != (FName)0x0)) {
    pFVar9 = ::FName::ToString(&local_res8,&local_38);
    pFVar2 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
    if ((pFVar2 <= pFVar9) &&
       ((pFVar9 < pFVar2 + *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4
                                   ) &&
        (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)))) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data;
    if (iVar6 == *(int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&(this->SupportedFileExtensions).ArrayNum,
                         (int *)((longlong)&(this->SupportedPlatforms).AllocatorInstance.Data + 4));
    }
    *(int *)&(this->SupportedPlatforms).AllocatorInstance.Data = iVar6 + 1;
    puVar10 = (undefined8 *)
              ((longlong)iVar6 * 0x10 + *(longlong *)&(this->SupportedFileExtensions).ArrayNum);
    *puVar10 = 0;
    *puVar10 = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar10 + 1) = (pFVar9->Data).ArrayNum;
    *(int *)((longlong)puVar10 + 0xc) = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_48,"Windows");
  TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
            ((TArray<FString,TSizedDefaultAllocator<32>_> *)
             &(this->SupportedFileExtensions).ArrayNum,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_68,L"file");
  pFVar2 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar2 <= &local_68) &&
      (&local_68 <
       pFVar2 + *(int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(this->SupportedUriSchemes).AllocatorInstance.Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SupportedPlatforms).ArrayNum,piVar1);
  }
  *(int *)&(this->SupportedUriSchemes).AllocatorInstance.Data = iVar6 + 1;
  puVar10 = (undefined8 *)
            ((longlong)iVar6 * 0x10 + *(longlong *)&(this->SupportedPlatforms).ArrayNum);
  *puVar10 = 0;
  *puVar10 = local_68.Data.AllocatorInstance.Data;
  *(int *)(puVar10 + 1) = local_68.Data.ArrayNum;
  *(int *)((longlong)puVar10 + 0xc) = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7 = ::FName::FName(&local_res18,"Media");
  FVar3 = *pFVar7;
  this_00 = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModule(this_00,FVar3,None);
  if (pIVar8 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x80))(pIVar8,&this[-1].SupportedUriSchemes.ArrayNum);
  }
  return;
}

// ShutdownModule @ 14f124840

void __thiscall FWebMMediaFactoryModule::ShutdownModule(FWebMMediaFactoryModule *this)

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

