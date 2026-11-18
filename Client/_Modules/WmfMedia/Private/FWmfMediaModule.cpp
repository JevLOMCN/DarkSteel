// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 7

// EnumerateAudioCaptureDevices @ 14ea92ad0

void __thiscall
FWmfMediaModule::EnumerateAudioCaptureDevices
          (FWmfMediaModule *this,
          TArray<FMediaCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  _GUID local_18;
  
  local_18 = MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_AUDCAP_GUID;
  EnumerateCaptureDevices(this,&local_18,param_1);
  return;
}

// EnumerateVideoCaptureDevices @ 14ea92b00

void __thiscall
FWmfMediaModule::EnumerateVideoCaptureDevices
          (FWmfMediaModule *this,
          TArray<FMediaCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  _GUID local_18;
  
  local_18 = MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID;
  EnumerateCaptureDevices(this,&local_18,param_1);
  return;
}

// IsInitialized @ 14ea92b30

bool __thiscall FWmfMediaModule::IsInitialized(FWmfMediaModule *this)

{
  return (bool)(char)this->_padding_;
}

// CreatePlayer @ 14ea92b40

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

TSharedPtr<IMediaPlayer,1> * __thiscall
FWmfMediaModule::CreatePlayer
          (FWmfMediaModule *this,TSharedPtr<IMediaPlayer,1> *__return_storage_ptr__,
          IMediaEventSink *param_1)

{
  FWmfMediaPlayer *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  if ((char)this->_padding_ == '\0') {
    __return_storage_ptr__->Object = (IMediaPlayer *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pFVar1 = ::operator_new(0x50);
  if (pFVar1 == (FWmfMediaPlayer *)0x0) {
    pFVar1 = (FWmfMediaPlayer *)0x0;
  }
  else {
    pFVar1 = FWmfMediaPlayer::FWmfMediaPlayer(pFVar1,param_1);
  }
  __return_storage_ptr__->Object = (IMediaPlayer *)pFVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFWmfMediaPlayer__U__DefaultDeleter_VFWmfMediaPlayer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StartupModule @ 14ea92c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWmfMediaModule::StartupModule(FWmfMediaModule *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  HRESULT HVar4;
  IPluginManager *pIVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  HMODULE pHVar8;
  FName *pFVar9;
  FModuleManager *this_00;
  IModuleInterface *pIVar10;
  undefined **ppuVar11;
  FName FVar12;
  FName local_res10;
  FString local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined4 local_50;
  FName local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  void *local_28 [2];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  pIVar5 = IPluginManager::Get();
  local_38 = 0x507b7da8;
  uStack_34 = 1;
  uStack_30 = 8;
  plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x70))(pIVar5,local_18,&local_38);
  if ((*plVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*plVar6 + 0x20))((longlong *)*plVar6,local_28);
  local_68.DataPtr = (wchar_t *)*puVar7;
  local_68.Size = *(int *)(puVar7 + 1) + -1;
  if (*(int *)(puVar7 + 1) == 0) {
    local_68.Size = 0;
  }
  local_58 = L"Shaders";
  local_50 = 7;
  FPaths::CombineInternal(&local_78,&local_68,2);
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  ::FString::FString(&local_88,L"/Plugin/WmfMedia");
  AddShaderSourceDirectoryMapping(&local_88,&local_78);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pHVar8 = LoadLibraryW(L"shlwapi.dll");
  if (pHVar8 == (HMODULE)0x0) {
    if ((byte)LogWmfMedia._0_1_ < 5) goto LAB_14ea92ee1;
    ppuVar11 = &`protected:_bool___cdecl_FWmfMediaModule::LoadRequiredLibraries(void)___ptr64'::__l6
                ::LOG_Static;
  }
  else {
    pHVar8 = LoadLibraryW(L"mf.dll");
    if (pHVar8 == (HMODULE)0x0) {
      if ((byte)LogWmfMedia._0_1_ < 5) goto LAB_14ea92ee1;
      ppuVar11 = &`protected:_bool___cdecl_FWmfMediaModule::LoadRequiredLibraries(void)___ptr64'::
                  __l27::LOG_Static;
    }
    else {
      pHVar8 = LoadLibraryW(L"mfplat.dll");
      if (pHVar8 == (HMODULE)0x0) {
        if ((byte)LogWmfMedia._0_1_ < 5) goto LAB_14ea92ee1;
        ppuVar11 = &`protected:_bool___cdecl_FWmfMediaModule::LoadRequiredLibraries(void)___ptr64'::
                    __l48::LOG_Static;
      }
      else {
        pHVar8 = LoadLibraryW(L"mfplay.dll");
        if (pHVar8 != (HMODULE)0x0) {
          HVar4 = MFStartup(0x20070,0);
          if (HVar4 < 0) {
            if (4 < (byte)LogWmfMedia._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&`public:_virtual_void___cdecl_FWmfMediaModule::StartupModule(void)___ptr64'
                          ::__l27::LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
            }
            goto LAB_14ea92ee1;
          }
          pFVar9 = ::FName::FName(&local_res10,"Media");
          FVar1 = *pFVar9;
          this_00 = FModuleManager::Get();
          pIVar10 = FModuleManager::LoadModule(this_00,FVar1,None);
          if (pIVar10 != (IModuleInterface *)0x0) {
            (**(code **)((longlong)*pIVar10 + 0x58))(pIVar10,&this[-1].Initialized);
          }
          local_res10 = (FName)::operator_new(0x18);
          if (local_res10 != (FName)0x0) {
            *(undefined8 *)local_res10 = 0;
            *(undefined8 *)((longlong)local_res10 + 8) = 0;
            *(undefined ***)local_res10 = &___7WmfMediaCodecManager__6B_;
            *(undefined8 *)((longlong)local_res10 + 8) = 0;
            *(undefined8 *)((longlong)local_res10 + 0x10) = 0;
            FVar12 = local_res10;
          }
          plVar6 = &this->_padding_;
          if ((FName *)plVar6 == local_48) {
            if (FVar12 != (FName)0x0) {
              puVar7 = *(undefined8 **)FVar12;
              goto LAB_14ea92ed6;
            }
          }
          else {
            FVar1 = (FName)*plVar6;
            *plVar6 = (longlong)FVar12;
            if (FVar1 != (FName)0x0) {
              puVar7 = *(undefined8 **)FVar1;
              FVar12 = FVar1;
LAB_14ea92ed6:
              (*(code *)*puVar7)(FVar12,1);
            }
          }
          *(undefined1 *)&this->_padding_ = 1;
          goto LAB_14ea92ee1;
        }
        if ((byte)LogWmfMedia._0_1_ < 5) goto LAB_14ea92ee1;
        ppuVar11 = &`protected:_bool___cdecl_FWmfMediaModule::LoadRequiredLibraries(void)___ptr64'::
                    __l69::LOG_Static;
      }
    }
  }
  UE::Logging::Private::BasicLog<5>
            ((FStaticBasicLogRecord *)ppuVar11,(FLogCategoryBase *)&LogWmfMedia);
  if (4 < (byte)LogWmfMedia._0_1_) {
    UE::Logging::Private::BasicLog<5>
              (&`public:_virtual_void___cdecl_FWmfMediaModule::StartupModule(void)___ptr64'::__l6::
                LOG_Static,(FLogCategoryBase *)&LogWmfMedia);
  }
LAB_14ea92ee1:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// ShutdownModule @ 14ea92f10

void __thiscall FWmfMediaModule::ShutdownModule(FWmfMediaModule *this)

{
  FName *pFVar1;
  IModuleInterface *pIVar2;
  FName local_res8;
  
  if ((char)this->_padding_ != '\0') {
    pFVar1 = ::FName::FName(&local_res8,"Media");
    pIVar2 = FModuleManager::GetModulePtr_Internal(*pFVar1);
    if (pIVar2 != (IModuleInterface *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2,&this[-1].Initialized);
    }
    MFShutdown();
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// EnumerateCaptureDevices @ 14eaa9b20

/* WARNING: Removing unreachable block (ram,0x00014eaa9d32) */
/* WARNING: Removing unreachable block (ram,0x00014eaa9d41) */

void __thiscall
FWmfMediaModule::EnumerateCaptureDevices
          (FWmfMediaModule *this,_GUID *param_1,
          TArray<FMediaCaptureDeviceInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  ForAnyElementType FVar8;
  FText *local_res10 [2];
  undefined1 local_res20 [8];
  TArray<TComPtr<IMFActivate>,TSizedDefaultAllocator<32>_> local_98;
  _GUID local_88;
  FText local_78;
  FString local_68;
  undefined4 local_58;
  FString local_50;
  
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_88.Data1 = param_1->Data1;
  local_88.Data2 = param_1->Data2;
  local_88.Data3 = param_1->Data3;
  local_88.Data4 = *&param_1->Data4;
  WmfMedia::EnumerateCaptureDevices(&local_88,&local_98);
  iVar4 = local_98.ArrayNum;
  pFVar1 = local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 8;
  FVar8.Data = local_98.AllocatorInstance.Data;
  while( true ) {
    if (local_98.ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TComPtr<IMFActivate>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar8.Data == pFVar1) break;
    FText::FText(&local_78);
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    local_res10[0] = (FText *)((ulonglong)local_res10[0] & 0xffffffffffffff00);
    bVar5 = WmfMedia::GetCaptureDeviceInfo
                      (*(IMFActivate **)FVar8.Data,&local_78,&local_68,(bool *)local_res10,&local_50
                      );
    if (bVar5) {
      lVar2._0_4_ = param_1->Data1;
      lVar2._4_2_ = param_1->Data2;
      lVar2._6_2_ = param_1->Data3;
      if ((lVar2 == MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID._0_8_) &&
         (*&param_1->Data4 == MF_DEVSOURCE_ATTRIBUTE_SOURCE_TYPE_VIDCAP_GUID.Data4)) {
        local_58 = 6;
        if ((char)local_res10[0] != '\0') {
          local_58 = 8;
        }
      }
      else {
        local_58 = 1;
      }
      pFVar7 = (FText *)(param_2->AllocatorInstance).Data;
      if (((pFVar7 <= &local_78) &&
          (&local_78 < (FText *)((longlong)pFVar7 + (longlong)param_2->ArrayMax * 0x38))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      pFVar7 = (FText *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x38);
      local_res10[0] = pFVar7;
      FText::FText(pFVar7,&local_78);
      pFVar7[1].TextData.Reference = (ITextData *)0x0;
      pFVar7[1].TextData.Reference = (ITextData *)local_68.Data.AllocatorInstance.Data;
      pFVar7[1].Flags = local_68.Data.ArrayNum;
      *(int *)&pFVar7[1].field_0xc = local_68.Data.ArrayMax;
      *(undefined4 *)&pFVar7[2].TextData.Reference = local_58;
      local_res10[0] = (FText *)&pFVar7[2].Flags;
      *(undefined8 *)local_res10[0] = 0;
      *(FScriptContainerElement **)local_res10[0] = local_50.Data.AllocatorInstance.Data;
      *(int *)&pFVar7[3].TextData.Reference = local_50.Data.ArrayNum;
      *(int *)((longlong)&pFVar7[3].TextData.Reference + 4) = local_50.Data.ArrayMax;
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
      local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    else {
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if ((ITextData *)local_68.Data.AllocatorInstance.Data != (ITextData *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
    }
    FVar8.Data = FVar8.Data + 8;
  }
  DestructItems<TComPtr<IMFActivate>,int>
            ((TComPtr<IMFActivate> *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

