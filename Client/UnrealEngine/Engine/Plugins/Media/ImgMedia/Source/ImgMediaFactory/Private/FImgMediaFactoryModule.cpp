// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMediaFactory
// Functions: 10

// CanPlayUrl @ 14ea60d10

bool __thiscall
FImgMediaFactoryModule::CanPlayUrl
          (FImgMediaFactoryModule *this,FString *param_1,IMediaOptions *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x38))();
  return 0 < iVar1;
}

// GetPlayabilityConfidenceScore @ 14ea60d40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

int __thiscall
FImgMediaFactoryModule::GetPlayabilityConfidenceScore
          (FImgMediaFactoryModule *this,FString *param_1,IMediaOptions *param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FText local_a8;
  FString local_98;
  FString local_88;
  FTextFormat local_78;
  FFormatArgumentValue local_68;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  iVar11 = 0;
  iVar5 = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  ::FString::FString(&local_88,L"://");
  bVar4 = ::FString::Split(param_1,&local_88,&local_b8,&local_98,CaseSensitive,FromStart);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pFVar10 = (this->SupportedUriSchemes).AllocatorInstance.Data;
    pFVar12 = pFVar10 + (longlong)(this->SupportedUriSchemes).ArrayNum * 0x10;
    if (pFVar10 != pFVar12) {
      iVar6 = local_b8.Data.ArrayNum;
      do {
        iVar1 = *(int *)(pFVar10 + 8);
        if (iVar1 == iVar6) {
          if (1 < iVar1) {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar10,(wchar_t *)local_b8.Data.AllocatorInstance.Data)
            ;
            bVar4 = iVar6 == 0;
            iVar6 = local_b8.Data.ArrayNum;
            goto LAB_14ea60eca;
          }
LAB_14ea61143:
          iVar5 = 100;
          goto LAB_14ea61103;
        }
        bVar4 = iVar1 + iVar6 == 1;
LAB_14ea60eca:
        if (bVar4) goto LAB_14ea61143;
        pFVar10 = pFVar10 + 0x10;
      } while (pFVar10 != pFVar12);
    }
    if (param_4 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14ea61103;
    pFVar8 = FText::FromString(&local_28,&local_b8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FImgMediaFactoryModule",L"SchemeNotSupported",
                        L"The URI scheme \'{0}\' is not supported");
    pFVar9 = FTextFormat::FTextFormat(&local_18,pFVar7,Default);
    local_68.Type = Text;
    FText::FText((FText *)&local_68.TextValue,pFVar8);
    if ((local_68.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_c8.AllocatorInstance,1,&local_c8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_c8.AllocatorInstance.Data,&local_68,1);
    local_78.TextFormatData.Object = (pFVar9->TextFormatData).Object;
    local_78.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_78.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_a8,&local_78,&local_c8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FFormatArgumentValue *)local_c8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar8->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    pFVar8 = (FText *)(param_4->AllocatorInstance).Data;
    if (((pFVar8 <= &local_a8) && (&local_a8 < pFVar8 + param_4->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    pFVar10 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar5 + 1;
    FText::FText((FText *)(pFVar10 + (longlong)iVar5 * 0x10),&local_a8);
    local_48.TextData.Reference = local_38.TextData.Reference;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      local_48.TextData.Reference = local_38.TextData.Reference;
    }
  }
  else {
    iVar5 = iVar11;
    if (param_4 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0) goto LAB_14ea61103;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"FImgMediaFactoryModule",L"NoSchemeFound",L"No URI scheme found")
    ;
    pFVar8 = (FText *)(param_4->AllocatorInstance).Data;
    if (((pFVar8 <= pFVar7) && (pFVar7 < pFVar8 + param_4->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    pFVar10 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar5 + 1;
    FText::FText((FText *)(pFVar10 + (longlong)iVar5 * 0x10),pFVar7);
  }
  iVar5 = iVar11;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
LAB_14ea61103:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return iVar5;
}

// CreatePlayer @ 14ea61150

TSharedPtr<IMediaPlayer,1> * __thiscall
FImgMediaFactoryModule::CreatePlayer
          (FImgMediaFactoryModule *this,TSharedPtr<IMediaPlayer,1> *__return_storage_ptr__,
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
  pFVar2 = ::FName::FName(&local_res10,"ImgMedia");
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

// GetDisplayName @ 14ea61200

FText * __thiscall
FImgMediaFactoryModule::GetDisplayName(FImgMediaFactoryModule *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FImgMediaFactoryModule",L"MediaPlayerDisplayName",
             L"Image Sequence");
  return __return_storage_ptr__;
}

// GetPlayerName @ 14ea61240

FName __thiscall FImgMediaFactoryModule::GetPlayerName(FImgMediaFactoryModule *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FName___cdecl_FImgMediaFactoryModule::GetPlayerName(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FName___cdecl_FImgMediaFactoryModule::GetPlayerName(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FName___cdecl_FImgMediaFactoryModule::GetPlayerName(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_virtual_class_FName___cdecl_FImgMediaFactoryModule::GetPlayerName(void)const___ptr64'
                      ::__l2::PlayerName,L"ImgMedia");
      _Init_thread_footer(&`public:_virtual_class_FName___cdecl_FImgMediaFactoryModule::GetPlayerName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RDX =
       `public:_virtual_class_FName___cdecl_FImgMediaFactoryModule::GetPlayerName(void)const___ptr64'
       ::__l2::PlayerName;
  return in_RDX;
}

// GetPlayerPluginGUID @ 14ea612c0

FGuid * __thiscall
FImgMediaFactoryModule::GetPlayerPluginGUID
          (FImgMediaFactoryModule *this,FGuid *__return_storage_ptr__)

{
  *__return_storage_ptr__ =
       `public:_virtual_struct_FGuid___cdecl_FImgMediaFactoryModule::GetPlayerPluginGUID(void)const___ptr64'
       ::__l2::PlayerPluginGUID;
  return __return_storage_ptr__;
}

// GetSupportedPlatforms @ 14ea612e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FImgMediaFactoryModule::GetSupportedPlatforms(FImgMediaFactoryModule *this)

{
  return &this->SupportedPlatforms;
}

// SupportsFeature @ 14ea612f0

bool __thiscall
FImgMediaFactoryModule::SupportsFeature(FImgMediaFactoryModule *this,EMediaFeature param_1)

{
  return (param_1 - VideoSamples & 0xfffffffd) == 0;
}

// StartupModule @ 14ea61310

/* WARNING: Removing unreachable block (ram,0x00014ea615b9) */
/* WARNING: Removing unreachable block (ram,0x00014ea61407) */
/* WARNING: Removing unreachable block (ram,0x00014ea614e0) */
/* WARNING: Removing unreachable block (ram,0x00014ea617da) */

void __thiscall FImgMediaFactoryModule::StartupModule(FImgMediaFactoryModule *this)

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
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  FString local_38;
  
  ::FString::FString(&local_88,L"Linux");
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
  ::FString::FString(&local_78,L"Mac");
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
  ::FString::FString(&local_68,L"Windows");
  pFVar2 = *(FString **)&(this->SupportedFileExtensions).ArrayNum;
  if (((pFVar2 <= &local_68) &&
      (&local_68 <
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
  *puVar10 = local_68.Data.AllocatorInstance.Data;
  *(int *)(puVar10 + 1) = local_68.Data.ArrayNum;
  *(int *)((longlong)puVar10 + 0xc) = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48 = 0x5636fbc1;
  local_44 = 0xd2b54f62;
  local_40 = 0xac8e7d4f;
  local_3c = 0xb184b45a;
  pFVar7 = ::FName::FName(&local_res10,"Media");
  pIVar8 = FModuleManager::GetModulePtr_Internal(*pFVar7);
  if ((pIVar8 != (IModuleInterface *)0x0) &&
     ((**(code **)((longlong)*pIVar8 + 0x40))(pIVar8,&local_res8,&local_48),
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
  ::FString::FString(&local_58,L"img");
  pFVar2 = *(FString **)&(this->SupportedPlatforms).ArrayNum;
  if (((pFVar2 <= &local_58) &&
      (&local_58 <
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
  *puVar10 = local_58.Data.AllocatorInstance.Data;
  *(int *)(puVar10 + 1) = local_58.Data.ArrayNum;
  *(int *)((longlong)puVar10 + 0xc) = local_58.Data.ArrayMax;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7 = ::FName::FName(&local_res18,"Media");
  FVar3 = *pFVar7;
  this_00 = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModule(this_00,FVar3,None);
  if (pIVar8 != (IModuleInterface *)0x0) {
    (**(code **)((longlong)*pIVar8 + 0x80))(pIVar8,&this[-1].SupportedUriSchemes.ArrayNum);
  }
  return;
}

// ShutdownModule @ 14ea61840

void __thiscall FImgMediaFactoryModule::ShutdownModule(FImgMediaFactoryModule *this)

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

