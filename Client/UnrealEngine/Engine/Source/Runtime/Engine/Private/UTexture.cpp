// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 84

// GetExternalTextureGuid @ 14728f000

FGuid * __thiscall UTexture::GetExternalTextureGuid(UTexture *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// UpdateResource @ 147291500

void __thiscall UTexture::UpdateResource(UTexture *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147291505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x330))(this,0);
  return;
}

// CalcTextureMemorySizeEnum @ 147eb3020

uint __thiscall UTexture::CalcTextureMemorySizeEnum(UTexture *this,ETextureMipCount param_1)

{
  return 0;
}

// UTexture @ 14887e260

UTexture * __thiscall UTexture::UTexture(UTexture *this,FVTableHelper *param_1)

{
  FTextureReference *this_00;
  FTextureReference *pFVar1;
  
  UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)this,param_1);
  pFVar1 = (FTextureReference *)0x0;
  this->LevelIndex = -1;
  (this->LightingGuid).A = 0;
  (this->LightingGuid).B = 0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  (this->LightingGuid).C = 0;
  (this->LightingGuid).D = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->VirtualTexturePrefetchMips = '\0';
  this->bOodlePreserveExtremes = false;
  (this->Downscale).Default = 0.0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  this_00 = ::operator_new(0x30);
  if (this_00 != (FTextureReference *)0x0) {
    pFVar1 = FTextureReference::FTextureReference(this_00);
  }
  this->TextureReference = pFVar1;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseFence);
  return this;
}

// UTexture @ 14887e320

UTexture * __thiscall UTexture::UTexture(UTexture *this,FObjectInitializer *param_1)

{
  void *pvVar1;
  bool bVar2;
  FTextureReference *this_00;
  FTextureReference *pFVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  
  UStreamableRenderAsset::UStreamableRenderAsset((UStreamableRenderAsset *)this,param_1);
  pFVar3 = (FTextureReference *)0x0;
  this->LevelIndex = -1;
  (this->LightingGuid).A = 0;
  (this->LightingGuid).B = 0;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  (this->LightingGuid).C = 0;
  (this->LightingGuid).D = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->VirtualTexturePrefetchMips = '\0';
  this->bOodlePreserveExtremes = false;
  (this->Downscale).Default = 0.0;
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  this->PrivateResource = (FTextureResource *)0x0;
  this->PrivateResourceRenderThread = (FTextureResource *)0x0;
  this_00 = ::operator_new(0x30);
  if (this_00 != (FTextureReference *)0x0) {
    pFVar3 = FTextureReference::FTextureReference(this_00);
  }
  this->TextureReference = pFVar3;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseFence);
  this->SRGB = '\x01';
  pvVar1 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  this->Availability = GPU;
  this->Filter = '\x03';
  this->MipLoadOptions = Default;
  this->VirtualTextureStreamingPriority = Normal;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar5 * 8) + 0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar4 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar4,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    bVar2 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (!bVar2) {
      FTextureReference::BeginInit_GameThread(this->TextureReference);
    }
  }
  return this;
}

// ~UTexture @ 14887ef80

void __thiscall UTexture::~UTexture(UTexture *this)

{
  FTextureReference *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = this->TextureReference;
  if (pFVar1 != (FTextureReference *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseFence);
  pFVar2 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IInterface_AsyncCompilation__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UStreamableRenderAsset::~UStreamableRenderAsset((UStreamableRenderAsset *)this);
  return;
}

// AddAssetUserData @ 148883320

void __thiscall UTexture::AddAssetUserData(UTexture *this,UAssetUserData *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UObject *local_res18 [2];
  UObject *local_48;
  UAssetUserData *local_40;
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res18[0] = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar6 = (UObject *)(*pcVar2)(this,local_res18);
    if (pUVar6 != (UObject *)0x0) {
      local_48 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      if ((((UObject **)this->_padding_ <= &local_48) &&
          (&local_48 < (UObject **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = (int)this->_padding_;
      if (iVar5 != 0) {
        iVar10 = 0;
        plVar3 = (longlong *)this->_padding_;
        bVar4 = (UObject *)*plVar3 != local_48;
        lVar7 = 0;
        pUVar6 = local_48;
        iVar8 = 0;
        do {
          iVar9 = iVar8;
          do {
            lVar7 = lVar7 + 1;
            iVar9 = iVar9 + 1;
            if (iVar5 <= lVar7) break;
          } while (bVar4 == ((UObject *)plVar3[lVar7] != pUVar6));
          if (bVar4 != false) {
            if (iVar10 != iVar8) {
              memmove(plVar3 + iVar10,plVar3 + iVar8,(longlong)(iVar9 - iVar8) << 3);
              pUVar6 = local_48;
            }
            iVar10 = iVar10 + (iVar9 - iVar8);
          }
          bVar4 = (bool)(bVar4 ^ 1);
          iVar8 = iVar9;
        } while (lVar7 < iVar5);
        *(int *)&this->_padding_ = iVar10;
      }
    }
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((((UAssetUserData **)this->_padding_ <= &local_40) &&
        (&local_40 < (UAssetUserData **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    *(UAssetUserData **)(this->_padding_ + (longlong)iVar5 * 8) = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UAssetUserData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_40);
    }
  }
  return;
}

// BeginDestroy @ 148883600

void __thiscall UTexture::BeginDestroy(UTexture *this)

{
  bool bVar1;
  
  UStreamableRenderAsset::BeginDestroy((UStreamableRenderAsset *)this);
  bVar1 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)this,false);
  if (!bVar1) {
    BeginFinalReleaseResource(this);
    return;
  }
  return;
}

// BeginFinalReleaseResource @ 148883640

void __thiscall UTexture::BeginFinalReleaseResource(UTexture *this)

{
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  
  if (this->bAsyncResourceReleaseHasBeenStarted != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bAsyncResourceReleaseHasBeenStarted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                       ,0x54b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = GetResource(this);
  if (pFVar3 != (FTextureResource *)0x0) {
    ReleaseResource(this);
  }
  if (this->TextureReference->bInitialized_GameThread != false) {
    FTextureReference::BeginRelease_GameThread(this->TextureReference);
  }
  FRenderCommandFence::BeginFence(&this->ReleaseFence,RenderThread);
  this->bAsyncResourceReleaseHasBeenStarted = '\x01';
  return;
}

// Blueprint_GetBuiltTextureSize @ 1488836c0

TVector<float> * __thiscall
UTexture::Blueprint_GetBuiltTextureSize(UTexture *this,TVector<float> *__return_storage_ptr__)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x358))();
  iVar5 = 0;
  uVar3 = 0;
  if ((puVar2 != (undefined8 *)0x0) &&
     (piVar1 = (int *)*puVar2, iVar5 = 0, uVar3 = 0, piVar1 != (int *)0x0)) {
    iVar5 = *piVar1;
    uVar3 = piVar1[2] & 0x1fffffff;
    iVar4 = piVar1[1];
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)iVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)iVar4;
  return __return_storage_ptr__;
}

// Blueprint_GetMemorySize @ 148883820

long64 __thiscall UTexture::Blueprint_GetMemorySize(UTexture *this)

{
  uint uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x3b0))(this,0);
  return (ulonglong)uVar1;
}

// Blueprint_GetTextureSourceDiskAndMemorySize @ 148883880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTexture::Blueprint_GetTextureSourceDiskAndMemorySize
          (UTexture *this,long64 *param_1,long64 *param_2)

{
  FName local_res10 [3];
  FString local_18;
  
  *param_2 = 0;
  *param_1 = 0;
  if (1 < (byte)LogTexture._0_1_) {
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Blueprint_GetTextureSourceIdString @ 1488838f0

bool __thiscall UTexture::Blueprint_GetTextureSourceIdString(UTexture *this,FString *param_1)

{
  ::FString::Reset(param_1,0);
  return false;
}

// CalculateLODBias @ 148884450

int __thiscall UTexture::CalculateLODBias(UTexture *this,bool param_1)

{
  int iVar1;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UTextureLODSettings *this_02;
  
  this_00 = UDeviceProfileManager::Get(false);
  this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
  this_02 = UDeviceProfile::GetTextureLODSettings(this_01);
  iVar1 = UTextureLODSettings::CalculateLODBias(this_02,this,param_1);
  return iVar1;
}

// CancelPendingTextureStreaming @ 1488848f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UTexture::CancelPendingTextureStreaming(void)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  TObjectIterator<UTexture> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar5 = StaticClass();
  GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UTexture>::Advance(&local_28);
    lVar6 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar4 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar4 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UStreamableRenderAsset::CancelPendingStreamingRequest
              (*(UStreamableRenderAsset **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8)
              );
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// CleanupCachedRunningPlatformData @ 1488849d0

void __thiscall UTexture::CleanupCachedRunningPlatformData(UTexture *this)

{
  FTexturePlatformData *this_00;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x358))();
  if ((puVar1 != (undefined8 *)0x0) &&
     (this_00 = (FTexturePlatformData *)*puVar1, this_00 != (FTexturePlatformData *)0x0)) {
    FTexturePlatformData::~FTexturePlatformData(this_00);
    ::operator_delete(this_00,0x38);
    *puVar1 = 0;
  }
  return;
}

// ComputeTextureSourceChannelMinMax @ 148884dc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UTexture::ComputeTextureSourceChannelMinMax
          (UTexture *this,FLinearColor *param_1,FLinearColor *param_2)

{
  FName local_res10 [3];
  FString local_18;
  
  *(undefined8 *)&param_1->field0_0x0 = 0;
  *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = 0;
  *(undefined8 *)&param_2->field0_0x0 = 0;
  *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = 0;
  if (1 < (byte)LogTexture._0_1_) {
    local_res10[0] = (FName)this->_padding_;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// CreateResource @ 148887f40

FTextureResource * __thiscall UTexture::CreateResource(UTexture *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture.h"
             ,0x6b4,L"Pure virtual not implemented (%s)");
  return (FTextureResource *)0x0;
}

// DoesMipDataExist @ 1488897c0

bool __thiscall UTexture::DoesMipDataExist(UTexture *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x358))();
  if ((((plVar5 != (longlong *)0x0) && (lVar1 = *plVar5, lVar1 != 0)) && (-1 < param_1)) &&
     (param_1 < *(int *)(lVar1 + 0x20))) {
    if (param_1 < 0) {
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
    bVar3 = FBulkData::DoesExist
                      ((FBulkData *)
                       (*(longlong *)(*(longlong *)(lVar1 + 0x18) + (longlong)param_1 * 8) + 0x20));
    return bVar3;
  }
  return false;
}

// ExportCustomProperties @ 14888a340

void __thiscall UTexture::ExportCustomProperties(UTexture *this,FOutputDevice *param_1,uint param_2)

{
  return;
}

// FinishDestroy @ 14888a3b0

void __thiscall UTexture::FinishDestroy(UTexture *this)

{
  FTexturePlatformData *this_00;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  UObject::FinishDestroy((UObject *)this);
  if (this->bAsyncResourceReleaseHasBeenStarted != '\0') {
    bVar2 = FRenderCommandFence::IsFenceComplete(&this->ReleaseFence);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bAsyncResourceReleaseHasBeenStarted || ReleaseFence.IsFenceComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x583,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (this->TextureReference->bInitialized_GameThread != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TextureReference.IsInitialized_GameThread() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                       ,0x584,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->PrivateResource != (FTextureResource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateResource == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                       ,0x586,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->PrivateResourceRenderThread != (FTextureResource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrivateResourceRenderThread == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                       ,0x587,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x358))(this);
  if ((puVar3 != (undefined8 *)0x0) &&
     (this_00 = (FTexturePlatformData *)*puVar3, this_00 != (FTexturePlatformData *)0x0)) {
    FTexturePlatformData::~FTexturePlatformData(this_00);
    ::operator_delete(this_00,0x38);
    *puVar3 = 0;
  }
  return;
}

// ForceUpdateTextureStreaming @ 14888a4e0

bool __cdecl UTexture::ForceUpdateTextureStreaming(void)

{
  bool bVar1;
  FStreamingManagerCollection *pFVar2;
  
  bVar1 = IStreamingManager::HasShutdown();
  if (!bVar1) {
    pFVar2 = IStreamingManager::Get();
    FStreamingManagerCollection::SetNumIterationsForNextFrame(pFVar2,100);
    pFVar2 = IStreamingManager::Get();
    (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,0,0);
    pFVar2 = IStreamingManager::Get();
    (**(code **)(pFVar2->_padding_ + 0x20))(pFVar2,0,0);
  }
  return true;
}

// GetAssetUserDataArray @ 14888cf90

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
UTexture::GetAssetUserDataArray(UTexture *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&this->_padding_;
}

// GetAssetUserDataOfClass @ 14888cfa0

UAssetUserData * __thiscall
UTexture::GetAssetUserDataOfClass(UTexture *this,TSubclassOf<UAssetUserData> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (int)this->_padding_) {
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar2)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar9 + this->_padding_);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_14888d046;
LAB_14888d074:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_14888d074;
          UE::GC::MarkAsReachable(pUVar7);
LAB_14888d046:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_14888d074;
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14888d074;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (int)this->_padding_);
  }
  return (UAssetUserData *)0x0;
}

// GetAverageBrightness @ 14888d0e0

float __thiscall UTexture::GetAverageBrightness(UTexture *this,bool param_1,bool param_2)

{
  return __real_bf800000;
}

// GetBuiltTextureSize @ 14888d2b0

void __thiscall
UTexture::GetBuiltTextureSize
          (UTexture *this,ITargetPlatform *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x358))();
  iVar5 = 0;
  uVar3 = 0;
  if ((puVar2 != (undefined8 *)0x0) &&
     (piVar1 = (int *)*puVar2, iVar5 = 0, uVar3 = 0, piVar1 != (int *)0x0)) {
    iVar5 = *piVar1;
    uVar3 = piVar1[2] & 0x1fffffff;
    iVar4 = piVar1[1];
  }
  *param_2 = iVar5;
  *param_3 = iVar4;
  *param_4 = uVar3;
  return;
}

// GetBuiltTextureSize @ 14888d330

void __thiscall
UTexture::GetBuiltTextureSize
          (UTexture *this,ITargetPlatformSettings *param_1,ITargetPlatformControls *param_2,
          int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x358))();
  iVar5 = 0;
  uVar3 = 0;
  if ((puVar2 != (undefined8 *)0x0) &&
     (piVar1 = (int *)*puVar2, iVar5 = 0, uVar3 = 0, piVar1 != (int *)0x0)) {
    iVar5 = *piVar1;
    uVar3 = piVar1[2] & 0x1fffffff;
    iVar4 = piVar1[1];
  }
  *param_3 = iVar5;
  *param_4 = iVar4;
  *param_5 = uVar3;
  return;
}

// GetCompositeTexture_WrapperImpl @ 14888d410

void __cdecl UTexture::GetCompositeTexture_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// GetLastRenderTimeForStreaming @ 14888de90

float __thiscall UTexture::GetLastRenderTimeForStreaming(UTexture *this)

{
  FTextureResource *pFVar1;
  double dVar2;
  double dVar3;
  
  pFVar1 = GetResource(this);
  if (pFVar1 != (FTextureResource *)0x0) {
    dVar2 = FTextureReference::GetLastRenderTime(this->TextureReference);
    pFVar1 = GetResource(this);
    dVar3 = (double)pFVar1->_padding_;
    if ((double)pFVar1->_padding_ <= dVar2) {
      dVar3 = dVar2;
    }
    return (float)dVar3;
  }
  return __real_ff7fffff;
}

// GetMaterialType @ 14888dfd0

EMaterialValueType __thiscall UTexture::GetMaterialType(UTexture *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture.h"
             ,0x6ce,L"Pure virtual not implemented (%s)");
  return MCT_Texture;
}

// GetMaximumDimensionOfNonVT @ 14888e030

int __cdecl UTexture::GetMaximumDimensionOfNonVT(void)

{
  return 0x4000;
}

// GetMipGenSettingsFromString @ 14888e560

TextureMipGenSettings __cdecl UTexture::GetMipGenSettingsFromString(wchar_t *param_1,bool param_2)

{
  int iVar1;
  TextureMipGenSettings TVar2;
  
  TVar2 = (TextureMipGenSettings)param_2;
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_FromTextureGroup",param_1);
  if (iVar1 == 0) {
    return TMGS_FromTextureGroup;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_SimpleAverage",param_1);
  if (iVar1 == 0) {
    return TMGS_SimpleAverage;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen0",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen0;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen1",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen2",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen3",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen3;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen4",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen4;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen5",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen5;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen6",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen6;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen7",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen7;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen8",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen8;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen9",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen9;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Sharpen10",param_1);
  if (iVar1 == 0) {
    return TMGS_Sharpen10;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_NoMipmaps",param_1);
  if (iVar1 == 0) {
    return TMGS_NoMipmaps;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_LeaveExistingMips",param_1);
  if (iVar1 == 0) {
    return TMGS_LeaveExistingMips;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Blur1",param_1);
  if (iVar1 == 0) {
    return TMGS_Blur1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Blur2",param_1);
  if (iVar1 == 0) {
    return TMGS_Blur2;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Blur3",param_1);
  if (iVar1 == 0) {
    return TMGS_Blur3;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Blur4",param_1);
  if (iVar1 == 0) {
    return TMGS_Blur4;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Blur5",param_1);
  if (iVar1 == 0) {
    return TMGS_Blur5;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Unfiltered",param_1);
  if (iVar1 == 0) {
    return TMGS_Unfiltered;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(L"TMGS_Angular",param_1);
  if (iVar1 == 0) {
    TVar2 = TMGS_Angular;
  }
  return TVar2;
}

// GetMipGenSettingsString @ 14888e880

wchar_t * __cdecl UTexture::GetMipGenSettingsString(TextureMipGenSettings param_1)

{
  switch(param_1) {
  default:
    return L"TMGS_FromTextureGroup";
  case TMGS_SimpleAverage:
    return L"TMGS_SimpleAverage";
  case TMGS_Sharpen0:
    return L"TMGS_Sharpen0";
  case TMGS_Sharpen1:
    return L"TMGS_Sharpen1";
  case TMGS_Sharpen2:
    return L"TMGS_Sharpen2";
  case TMGS_Sharpen3:
    return L"TMGS_Sharpen3";
  case TMGS_Sharpen4:
    return L"TMGS_Sharpen4";
  case TMGS_Sharpen5:
    return L"TMGS_Sharpen5";
  case TMGS_Sharpen6:
    return L"TMGS_Sharpen6";
  case TMGS_Sharpen7:
    return L"TMGS_Sharpen7";
  case TMGS_Sharpen8:
    return L"TMGS_Sharpen8";
  case TMGS_Sharpen9:
    return L"TMGS_Sharpen9";
  case TMGS_Sharpen10:
    return L"TMGS_Sharpen10";
  case TMGS_NoMipmaps:
    return L"TMGS_NoMipmaps";
  case TMGS_LeaveExistingMips:
    return L"TMGS_LeaveExistingMips";
  case TMGS_Blur1:
    return L"TMGS_Blur1";
  case TMGS_Blur2:
    return L"TMGS_Blur2";
  case TMGS_Blur3:
    return L"TMGS_Blur3";
  case TMGS_Blur4:
    return L"TMGS_Blur4";
  case TMGS_Blur5:
    return L"TMGS_Blur5";
  case TMGS_Unfiltered:
    return L"TMGS_Unfiltered";
  case TMGS_Angular:
    return L"TMGS_Angular";
  }
}

// GetMipIoFilenameHash @ 14888e9b0

uint __thiscall UTexture::GetMipIoFilenameHash(UTexture *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x358))();
  if ((((plVar5 != (longlong *)0x0) && (lVar1 = *plVar5, lVar1 != 0)) && (-1 < param_1)) &&
     (param_1 < *(int *)(lVar1 + 0x20))) {
    if (param_1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    uVar4 = MakeIoFilenameHash((FIoChunkId *)
                               (*(longlong *)(*(longlong *)(lVar1 + 0x18) + (longlong)param_1 * 8) +
                               0x38));
    return uVar4;
  }
  return 0;
}

// GetPixelFormatEnum @ 14888f5a0

UEnum * __cdecl UTexture::GetPixelFormatEnum(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UEnum *pUVar5;
  UClass *pUVar6;
  FName local_res8;
  FName local_res10 [3];
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  if (PixelFormatEnum == (UEnum *)0x0) {
    pFVar4 = ::FName::FName(&local_res8,L"EPixelFormat");
    FVar1 = *pFVar4;
    pFVar4 = ::FName::FName(local_res10,L"/Script/CoreUObject");
    local_28.PackageName.ComparisonIndex.Value = 0;
    local_28.PackageName.Number = 0;
    local_28.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&local_28,*pFVar4,FVar1);
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                           ,0x6c3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UEnum *)(*pcVar2)();
      return pUVar5;
    }
    local_18.PackageName = local_28.PackageName;
    local_18.AssetName = local_28.AssetName;
    pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
    PixelFormatEnum = (UEnum *)StaticFindObject(pUVar6,&local_18,None);
    if ((PixelFormatEnum == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PixelFormatEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                           ,0x6c5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UEnum *)(*pcVar2)();
      return pUVar5;
    }
  }
  return PixelFormatEnum;
}

// GetPrivateStaticClass @ 14888fb60

UClass * __cdecl UTexture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Texture",&Z_Registration_Info_UClass_UTexture.InnerSingleton,
               StaticRegisterNativesUTexture,0x150,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UTexture>,InternalVTableHelperCtorCaller<UTexture>,
               local_res8,UStreamableRenderAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTexture.InnerSingleton;
}

// GetResource @ 14888ff10

FTextureResource * __thiscall UTexture::GetResource(UTexture *this)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      bVar1 = IsInSlateThread();
      if (!bVar1) {
        bVar1 = (*IsInAsyncLoadingThread)();
        if (!bVar1) {
          bVar1 = IsInParallelRenderingThread();
          if (!bVar1) {
            bVar1 = IsInRHIThread();
            if (!bVar1) {
              `UTexture::GetResource'::__l2::<lambda_1>::operator()(local_res10);
              return (FTextureResource *)0x0;
            }
          }
          return this->PrivateResourceRenderThread;
        }
      }
    }
  }
  return this->PrivateResource;
}

// GetResource @ 14888ff90

FTextureResource * __thiscall UTexture::GetResource(UTexture *this)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      bVar1 = IsInSlateThread();
      if (!bVar1) {
        bVar1 = (*IsInAsyncLoadingThread)();
        if (!bVar1) {
          bVar1 = IsInParallelRenderingThread();
          if (!bVar1) {
            bVar1 = IsInRHIThread();
            if (!bVar1) {
              `UTexture::GetResource'::__l2::<lambda_1>::operator()(local_res10);
              return (FTextureResource *)0x0;
            }
          }
          return this->PrivateResourceRenderThread;
        }
      }
    }
  }
  return this->PrivateResource;
}

// GetResourcePostInitState @ 148890100

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FStreamableRenderResourceState __thiscall
UTexture::GetResourcePostInitState
          (UTexture *this,FTexturePlatformData *param_1,bool param_2,int param_3,int param_4,
          bool param_5)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UDeviceProfileManager *pUVar13;
  UDeviceProfile *pUVar14;
  UTextureLODSettings *pUVar15;
  FStreamableRenderResourceState FVar16;
  UClass *pUVar17;
  FStreamingManagerCollection *this_00;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined7 in_register_00000081;
  FTexturePlatformData *this_01;
  undefined3 in_stack_00000031;
  char in_stack_00000038;
  undefined1 local_78;
  undefined1 local_77 [3];
  int local_74;
  int local_70;
  int local_6c;
  FName local_64;
  FString local_58;
  
  this_01 = (FTexturePlatformData *)CONCAT71(in_register_00000081,param_2);
  pUVar13 = UDeviceProfileManager::Get(false);
  pUVar14 = UDeviceProfileManager::GetActiveProfile(pUVar13);
  pUVar15 = UDeviceProfile::GetTextureLODSettings(pUVar14);
  iVar9 = UTextureLODSettings::CalculateLODBias(pUVar15,this,true);
  local_6c = iVar9;
  pUVar13 = UDeviceProfileManager::Get(false);
  pUVar14 = UDeviceProfileManager::GetActiveProfile(pUVar13);
  pUVar15 = UDeviceProfile::GetTextureLODSettings(pUVar14);
  iVar10 = UTextureLODSettings::CalculateLODBias(pUVar15,this,false);
  if ((iVar9 < iVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FullLODBias >= CinematicLODBias",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x7b3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar16.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar4)();
    return (FStreamableRenderResourceState)FVar16.field0_0x0;
  }
  bVar6 = IsPossibleToStream(this);
  iVar9 = (this_01->Mips).Array.ArrayNum;
  iVar11 = FTexturePlatformData::GetNumNonOptionalMips(this_01);
  local_70 = iVar11;
  iVar12 = FTexturePlatformData::GetNumNonStreamingMips(this_01,bVar6);
  uVar2 = (this_01->OptData).NumMipsInTail;
  local_74 = iVar12;
  if ((iVar11 < iVar12) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOfNonOptionalMips >= NumOfNonStreamingMips",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x7bd,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    FVar16.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar4)();
    return (FStreamableRenderResourceState)FVar16.field0_0x0;
  }
  if ((iVar12 < (int)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOfNonStreamingMips >= NumMipsInTail",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x7bf,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    FVar16.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar4)();
    return (FStreamableRenderResourceState)FVar16.field0_0x0;
  }
  iVar11 = iVar9 + -1;
  if (iVar10 < iVar9 + -1) {
    iVar11 = iVar10;
  }
  iVar10 = 0;
  if (0 < iVar11) {
    iVar10 = iVar11;
  }
  if ((0 < iVar10) && (!bVar6)) {
    iVar12 = iVar9 - iVar10;
    local_74 = iVar12;
  }
  iVar11 = 0x10;
  if (GRHIGlobals.MaxTextureMipCount < 0x10) {
    iVar11 = GRHIGlobals.MaxTextureMipCount;
  }
  iVar20 = iVar11;
  if (iVar9 - iVar10 < iVar11) {
    iVar20 = iVar9 - iVar10;
  }
  if ((0 < _param_5) && (_param_5 < iVar20)) {
    iVar20 = _param_5;
  }
  iVar10 = local_74;
  if (((iVar20 < iVar12) && (iVar20 = iVar12, iVar11 < iVar12)) &&
     (iVar12 = iVar11, iVar20 = iVar11, iVar10 = iVar11, 2 < (byte)LogTexture._0_1_)) {
    local_64 = (FName)this->_padding_;
    ::FName::ToString(&local_64,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_74 = iVar10;
  if ((iVar20 < (int)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumMips >= NumMipsInTail",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x7f9,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    FVar16.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar4)();
    return (FStreamableRenderResourceState)FVar16.field0_0x0;
  }
  iVar9 = iVar9 - iVar20;
  bVar7 = false;
  iVar10 = local_70;
  iVar11 = iVar20;
  if ((iVar12 != iVar20) && (bVar6)) {
    pFVar21 = (this->AssetUserData).AllocatorInstance.Data;
    iVar10 = (this->AssetUserData).ArrayNum;
    cVar8 = '\0';
    pFVar1 = pFVar21 + (longlong)iVar10 * 8;
    while( true ) {
      if ((this->AssetUserData).ArrayNum != iVar10) {
        local_78 = 0;
        `TCheckedPointerIterator<TObjectPtr<UAssetUserData>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_78);
      }
      if (pFVar21 == pFVar1) break;
      plVar18 = *(longlong **)pFVar21;
      if (plVar18 != (longlong *)0x0) {
        pUVar17 = Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
        iVar12 = (int)pUVar17->_padding_;
        if (((iVar12 <= *(int *)(plVar18[2] + 0x38)) &&
            ((longlong *)*(undefined1 **)(*(longlong *)(plVar18[2] + 0x30) + (longlong)iVar12 * 8)
             == &pUVar17->_padding_)) &&
           (cVar8 = (**(code **)(*plVar18 + 0x2d8))(plVar18), cVar8 != '\0')) break;
      }
      pFVar21 = pFVar21 + 8;
    }
    iVar12 = local_74;
    if ((char)param_3 != '\0') {
      if (in_stack_00000038 == '\0') {
        pFVar21 = (this_01->Mips).Array.AllocatorInstance.Data;
        iVar10 = (this_01->Mips).Array.ArrayNum;
        pFVar1 = pFVar21 + (longlong)iVar10 * 8;
        while( true ) {
          if ((this_01->Mips).Array.ArrayNum != iVar10) {
            local_77[0] = 0;
            `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_77);
          }
          if (pFVar21 == pFVar1) break;
          if ((*(char *)(*(longlong *)pFVar21 + 0x1b) != '\0') ||
             (bVar6 = FBulkData::CanLoadFromDisk((FBulkData *)(*(longlong *)pFVar21 + 0x20)), bVar6)
             ) goto LAB_14889042b;
          pFVar21 = pFVar21 + 8;
        }
        if (cVar8 == '\0') goto LAB_14889042e;
      }
LAB_14889042b:
      bVar7 = true;
    }
LAB_14889042e:
    iVar11 = iVar12;
    if (bVar7) {
      this_00 = IStreamingManager::Get();
      bVar6 = FStreamingManagerCollection::IsRenderAssetStreamingEnabled(this_00,Texture);
      iVar10 = local_70;
      if (bVar6) goto LAB_148890461;
    }
    iVar10 = local_70;
    iVar19 = local_6c - iVar9;
    if (iVar19 < 0) {
      iVar19 = 0;
    }
    if (iVar12 < iVar20 - iVar19) {
      iVar11 = iVar20 - iVar19;
    }
    if ((local_70 < iVar11) &&
       (((plVar18 = (longlong *)(**(code **)(this->_padding_ + 0x358))(), plVar18 == (longlong *)0x0
         || (lVar3 = *plVar18, lVar3 == 0)) ||
        ((iVar9 < 0 ||
         ((*(int *)(lVar3 + 0x20) <= iVar9 ||
          (bVar6 = FBulkData::DoesExist
                             ((FBulkData *)
                              (*(longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar9 * 8) +
                              0x20)), !bVar6)))))))) {
      iVar11 = iVar10;
    }
  }
LAB_148890461:
  if ((iVar11 < param_4) && (param_4 < iVar20)) {
    iVar11 = param_4;
  }
  if ((iVar20 < iVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOfNonStreamingMips <= NumMips",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x84c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar16.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar4)();
    return (FStreamableRenderResourceState)FVar16.field0_0x0;
  }
  if ((iVar20 < iVar11) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRequestedMips <= NumMips",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x84d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar16.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar4)();
    return (FStreamableRenderResourceState)FVar16.field0_0x0;
  }
  if ((iVar11 < iVar12) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRequestedMips >= NumOfNonStreamingMips",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x84e,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar16.field0_0x0 = (FStreamableRenderResourceState_u_0)(*pcVar4)();
    return (FStreamableRenderResourceState)FVar16.field0_0x0;
  }
  param_1->SizeX = 0;
  param_1->SizeY = 0;
  uVar5 = (char)iVar20;
  if (iVar10 < iVar20) {
    uVar5 = (char)iVar10;
  }
  *(bool *)&param_1->SizeX = bVar7;
  *(undefined1 *)((longlong)&param_1->SizeX + 2) = uVar5;
  *(char *)((longlong)&param_1->SizeX + 1) = (char)iVar12;
  *(char *)((longlong)&param_1->SizeX + 3) = (char)iVar20;
  *(char *)&param_1->SizeY = (char)iVar9;
  *(char *)((longlong)&param_1->SizeY + 1) = (char)iVar11;
  *(char *)((longlong)&param_1->SizeY + 2) = (char)iVar11;
  return (FStreamableRenderResourceState)(FStreamableRenderResourceState_u_0)param_1;
}

// GetSurfaceArraySize @ 148892ea0

uint __thiscall UTexture::GetSurfaceArraySize(UTexture *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture.h"
             ,0x7b2,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetSurfaceDepth @ 148892f10

float __thiscall UTexture::GetSurfaceDepth(UTexture *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture.h"
             ,0x7af,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetSurfaceHeight @ 148892f90

float __thiscall UTexture::GetSurfaceHeight(UTexture *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture.h"
             ,0x7ac,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetSurfaceWidth @ 148893050

float __thiscall UTexture::GetSurfaceWidth(UTexture *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture.h"
             ,0x7a9,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetTextureClass @ 148893130

ETextureClass __thiscall UTexture::GetTextureClass(UTexture *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\Texture.h"
             ,0x691,L"Pure virtual not implemented (%s)");
  return Invalid;
}

// GetTextureGroupString @ 148893180

wchar_t * __cdecl UTexture::GetTextureGroupString(TextureGroup param_1)

{
  switch(param_1) {
  default:
    return L"TEXTUREGROUP_World";
  case TEXTUREGROUP_WorldNormalMap:
    return L"TEXTUREGROUP_WorldNormalMap";
  case TEXTUREGROUP_WorldSpecular:
    return L"TEXTUREGROUP_WorldSpecular";
  case TEXTUREGROUP_Character:
    return L"TEXTUREGROUP_Character";
  case TEXTUREGROUP_CharacterNormalMap:
    return L"TEXTUREGROUP_CharacterNormalMap";
  case TEXTUREGROUP_CharacterSpecular:
    return L"TEXTUREGROUP_CharacterSpecular";
  case TEXTUREGROUP_Weapon:
    return L"TEXTUREGROUP_Weapon";
  case TEXTUREGROUP_WeaponNormalMap:
    return L"TEXTUREGROUP_WeaponNormalMap";
  case TEXTUREGROUP_WeaponSpecular:
    return L"TEXTUREGROUP_WeaponSpecular";
  case TEXTUREGROUP_Vehicle:
    return L"TEXTUREGROUP_Vehicle";
  case TEXTUREGROUP_VehicleNormalMap:
    return L"TEXTUREGROUP_VehicleNormalMap";
  case TEXTUREGROUP_VehicleSpecular:
    return L"TEXTUREGROUP_VehicleSpecular";
  case TEXTUREGROUP_Cinematic:
    return L"TEXTUREGROUP_Cinematic";
  case TEXTUREGROUP_Effects:
    return L"TEXTUREGROUP_Effects";
  case TEXTUREGROUP_EffectsNotFiltered:
    return L"TEXTUREGROUP_EffectsNotFiltered";
  case TEXTUREGROUP_Skybox:
    return L"TEXTUREGROUP_Skybox";
  case TEXTUREGROUP_UI:
    return L"TEXTUREGROUP_UI";
  case TEXTUREGROUP_Lightmap:
    return L"TEXTUREGROUP_Lightmap";
  case TEXTUREGROUP_RenderTarget:
    return L"TEXTUREGROUP_RenderTarget";
  case TEXTUREGROUP_MobileFlattened:
    return L"TEXTUREGROUP_MobileFlattened";
  case TEXTUREGROUP_ProcBuilding_Face:
    return L"TEXTUREGROUP_ProcBuilding_Face";
  case TEXTUREGROUP_ProcBuilding_LightMap:
    return L"TEXTUREGROUP_ProcBuilding_LightMap";
  case TEXTUREGROUP_Shadowmap:
    return L"TEXTUREGROUP_Shadowmap";
  case TEXTUREGROUP_ColorLookupTable:
    return L"TEXTUREGROUP_ColorLookupTable";
  case TEXTUREGROUP_Terrain_Heightmap:
    return L"TEXTUREGROUP_Terrain_Heightmap";
  case TEXTUREGROUP_Terrain_Weightmap:
    return L"TEXTUREGROUP_Terrain_Weightmap";
  case TEXTUREGROUP_Bokeh:
    return L"TEXTUREGROUP_Bokeh";
  case TEXTUREGROUP_IESLightProfile:
    return L"TEXTUREGROUP_IESLightProfile";
  case TEXTUREGROUP_Pixels2D:
    return L"TEXTUREGROUP_Pixels2D";
  case TEXTUREGROUP_HierarchicalLOD:
    return L"TEXTUREGROUP_HierarchicalLOD";
  case TEXTUREGROUP_Impostor:
    return L"TEXTUREGROUP_Impostor";
  case TEXTUREGROUP_ImpostorNormalDepth:
    return L"TEXTUREGROUP_ImpostorNormalDepth";
  case TEXTUREGROUP_8BitData:
    return L"TEXTUREGROUP_8BitData";
  case TEXTUREGROUP_16BitData:
    return L"TEXTUREGROUP_16BitData";
  case TEXTUREGROUP_Project01:
    return L"TEXTUREGROUP_Project01";
  case TEXTUREGROUP_Project02:
    return L"TEXTUREGROUP_Project02";
  case TEXTUREGROUP_Project03:
    return L"TEXTUREGROUP_Project03";
  case TEXTUREGROUP_Project04:
    return L"TEXTUREGROUP_Project04";
  case TEXTUREGROUP_Project05:
    return L"TEXTUREGROUP_Project05";
  case TEXTUREGROUP_Project06:
    return L"TEXTUREGROUP_Project06";
  case TEXTUREGROUP_Project07:
    return L"TEXTUREGROUP_Project07";
  case TEXTUREGROUP_Project08:
    return L"TEXTUREGROUP_Project08";
  case TEXTUREGROUP_Project09:
    return L"TEXTUREGROUP_Project09";
  case TEXTUREGROUP_Project10:
    return L"TEXTUREGROUP_Project10";
  case TEXTUREGROUP_Project11:
    return L"TEXTUREGROUP_Project11";
  case TEXTUREGROUP_Project12:
    return L"TEXTUREGROUP_Project12";
  case TEXTUREGROUP_Project13:
    return L"TEXTUREGROUP_Project13";
  case TEXTUREGROUP_Project14:
    return L"TEXTUREGROUP_Project14";
  case TEXTUREGROUP_Project15:
    return L"TEXTUREGROUP_Project15";
  case TEXTUREGROUP_Project16:
    return L"TEXTUREGROUP_Project16";
  case TEXTUREGROUP_Project17:
    return L"TEXTUREGROUP_Project17";
  case TEXTUREGROUP_Project18:
    return L"TEXTUREGROUP_Project18";
  case TEXTUREGROUP_Project19:
    return L"TEXTUREGROUP_Project19";
  case TEXTUREGROUP_Project20:
    return L"TEXTUREGROUP_Project20";
  case TEXTUREGROUP_Project21:
    return L"TEXTUREGROUP_Project21";
  case TEXTUREGROUP_Project22:
    return L"TEXTUREGROUP_Project22";
  case TEXTUREGROUP_Project23:
    return L"TEXTUREGROUP_Project23";
  case TEXTUREGROUP_Project24:
    return L"TEXTUREGROUP_Project24";
  case TEXTUREGROUP_Project25:
    return L"TEXTUREGROUP_Project25";
  case TEXTUREGROUP_Project26:
    return L"TEXTUREGROUP_Project26";
  case TEXTUREGROUP_Project27:
    return L"TEXTUREGROUP_Project27";
  case TEXTUREGROUP_Project28:
    return L"TEXTUREGROUP_Project28";
  case TEXTUREGROUP_Project29:
    return L"TEXTUREGROUP_Project29";
  case TEXTUREGROUP_Project30:
    return L"TEXTUREGROUP_Project30";
  case TEXTUREGROUP_Project31:
    return L"TEXTUREGROUP_Project31";
  case TEXTUREGROUP_Project32:
    return L"TEXTUREGROUP_Project32";
  case TEXTUREGROUP_Project33:
    return L"TEXTUREGROUP_Project33";
  case TEXTUREGROUP_Project34:
    return L"TEXTUREGROUP_Project34";
  case TEXTUREGROUP_Project35:
    return L"TEXTUREGROUP_Project35";
  case TEXTUREGROUP_Project36:
    return L"TEXTUREGROUP_Project36";
  case TEXTUREGROUP_Project37:
    return L"TEXTUREGROUP_Project37";
  case TEXTUREGROUP_Project38:
    return L"TEXTUREGROUP_Project38";
  case TEXTUREGROUP_Project39:
    return L"TEXTUREGROUP_Project39";
  case TEXTUREGROUP_Project40:
    return L"TEXTUREGROUP_Project40";
  case TEXTUREGROUP_Project41:
    return L"TEXTUREGROUP_Project41";
  case TEXTUREGROUP_Project42:
    return L"TEXTUREGROUP_Project42";
  case TEXTUREGROUP_Project43:
    return L"TEXTUREGROUP_Project43";
  case TEXTUREGROUP_Project44:
    return L"TEXTUREGROUP_Project44";
  case TEXTUREGROUP_Project45:
    return L"TEXTUREGROUP_Project45";
  case TEXTUREGROUP_Project46:
    return L"TEXTUREGROUP_Project46";
  case TEXTUREGROUP_Project47:
    return L"TEXTUREGROUP_Project47";
  case TEXTUREGROUP_Project48:
    return L"TEXTUREGROUP_Project48";
  }
}

// GetTextureStreamingMethod @ 148893580

ETextureStreamingMethod __thiscall UTexture::GetTextureStreamingMethod(UTexture *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x348))();
  if (cVar1 != '\0') {
    return TSM_VirtualStreamed;
  }
  return ((int)this->_padding_ != -1) + TSM_NotStreamed;
}

// GetVirtualTextureBuildSettings @ 148893780

void __thiscall
UTexture::GetVirtualTextureBuildSettings(UTexture *this,FVirtualTextureBuildSettings *param_1)

{
  FVirtualTextureBuildSettings::Init(param_1);
  return;
}

// HasPendingLODTransition @ 1488937c0

bool __thiscall UTexture::HasPendingLODTransition(UTexture *this)

{
  FTextureResource *pFVar1;
  
  pFVar1 = GetResource(this);
  if (pFVar1 != (FTextureResource *)0x0) {
    pFVar1 = GetResource(this);
    if ((__real_322bcc77 <
         (float)(*(uint *)((longlong)&pFVar1->_padding_ + 4) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
       ((GRenderingRealtimeClock.CurrentTime - *(float *)&pFVar1->_padding_) *
        *(float *)((longlong)&pFVar1->_padding_ + 4) < __real_3f800000)) {
      return true;
    }
  }
  return false;
}

// HasPendingRenderResourceInitialization @ 148893830

bool __thiscall UTexture::HasPendingRenderResourceInitialization(UTexture *this)

{
  FTextureResource *pFVar1;
  
  pFVar1 = GetResource(this);
  if (pFVar1 != (FTextureResource *)0x0) {
    pFVar1 = GetResource(this);
    if ((int)pFVar1->_padding_ == -1) {
      return true;
    }
  }
  return false;
}

// ImportCustomProperties @ 148893a20

void __thiscall
UTexture::ImportCustomProperties(UTexture *this,wchar_t *param_1,FFeedbackContext *param_2)

{
  return;
}

// InvalidateLastRenderTimeForStreaming @ 1488957f0

void __thiscall UTexture::InvalidateLastRenderTimeForStreaming(UTexture *this)

{
  FTextureResource *pFVar1;
  
  pFVar1 = GetResource(this);
  if (pFVar1 != (FTextureResource *)0x0) {
    pFVar1 = GetResource(this);
    pFVar1->_padding_ = -0x3810000020000000;
  }
  FTextureReference::InvalidateLastRenderTime(this->TextureReference);
  return;
}

// IsCookPlatformTilingDisabled @ 1488958d0

bool __thiscall UTexture::IsCookPlatformTilingDisabled(UTexture *this,ITargetPlatform *param_1)

{
  bool bVar1;
  
  if (param_1 != (ITargetPlatform *)0x0) {
    bVar1 = IsCookPlatformTilingDisabled(this,*(ITargetPlatformSettings **)&param_1->field_0x10);
    return bVar1;
  }
  bVar1 = IsCookPlatformTilingDisabled(this,(ITargetPlatformSettings *)0x0);
  return bVar1;
}

// IsCookPlatformTilingDisabled @ 1488958f0

bool __thiscall
UTexture::IsCookPlatformTilingDisabled(UTexture *this,ITargetPlatformSettings *param_1)

{
  uchar uVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong *plVar8;
  UClass *pUVar9;
  UTextureLODSettings *pUVar10;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UClass *local_res8;
  FString local_18;
  
  pcVar4 = *(code **)(this->_padding_ + 0x18);
  local_res8 = Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  plVar8 = (longlong *)(*pcVar4)(&this->_padding_,&local_res8);
  if (plVar8 != (longlong *)0x0) {
    pUVar9 = Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
    iVar3 = (int)pUVar9->_padding_;
    if (((iVar3 <= *(int *)(plVar8[2] + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(plVar8[2] + 0x30) + (longlong)iVar3 * 8) ==
         &pUVar9->_padding_)) &&
       (cVar5 = (**(code **)(*plVar8 + 0x2e0))(plVar8,this), cVar5 == '\0')) {
      return true;
    }
  }
  uVar1 = (this->CookPlatformTilingSettings).Value;
  if (uVar1 == '\0') {
    if (param_1 == (ITargetPlatformSettings *)0x0) {
      this_00 = UDeviceProfileManager::Get(false);
      this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
      pUVar10 = UDeviceProfile::GetTextureLODSettings(this_01);
      if (pUVar10 == (UTextureLODSettings *)0x0) {
        return false;
      }
    }
    else {
      pUVar10 = (UTextureLODSettings *)(**(code **)((longlong)*param_1 + 0xf0))(param_1);
      if ((pUVar10 == (UTextureLODSettings *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TextureLODSettings",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                             ,0x68e,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    if ((pUVar10->TextureLODGroups).ArrayNum <= (int)(uint)(this->LODGroup).Value) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODGroup < TextureLODSettings->TextureLODGroups.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x692,
                         L"A texture had passed a bad LODGroup to UTexture::IsCookPlatformTilingDisabled (%d, out of %d groups). The texture name is \'%s\'."
                        );
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    bVar2 = (this->LODGroup).Value;
    if (((pUVar10->TextureLODGroups).ArrayNum <= (int)(uint)bVar2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    bVar6 = (bool)((byte)(pUVar10->TextureLODGroups).AllocatorInstance.Data
                         [(ulonglong)bVar2 * 0x60 + 0x48] >> 2 & 1);
  }
  else {
    bVar6 = uVar1 == '\x02';
  }
  return bVar6;
}

// IsPossibleToStream @ 148895b20

bool __thiscall UTexture::IsPossibleToStream(UTexture *this)

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  
  if ((this->_padding_ & 1) != 0) {
    return false;
  }
  if ((this->LODGroup).Value == '\x10') {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar5 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar5,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) ||
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
        false)) ||
      ((puVar4 = (undefined8 *)(**(code **)(this->_padding_ + 0x358))(this),
       puVar4 == (undefined8 *)0x0 || (puVar2 = (uint *)*puVar4, puVar2 == (uint *)0x0)))) ||
     ((int)puVar2[8] < 1)) {
    return true;
  }
  if (((puVar2[8] != 1) && (uVar1 = puVar2[2], (*puVar2 & *puVar2 - 1) == 0)) &&
     ((puVar2[1] & puVar2[1] - 1) == 0)) {
    cVar3 = (**(code **)(this->_padding_ + 800))(this);
    if (cVar3 != '\x05') {
      return true;
    }
    if ((uVar1 & 0x1fffffff & (uVar1 & 0x1fffffff) - 1) == 0) {
      return true;
    }
  }
  return false;
}

// IsPostLoadThreadSafe @ 148895cb0

bool __thiscall UTexture::IsPostLoadThreadSafe(UTexture *this)

{
  return false;
}

// IsReadyForFinishDestroy @ 148895d80

bool __thiscall UTexture::IsReadyForFinishDestroy(UTexture *this)

{
  bool bVar1;
  
  bVar1 = UStreamableRenderAsset::IsReadyForFinishDestroy((UStreamableRenderAsset *)this);
  if (!bVar1) {
    return false;
  }
  if (this->bAsyncResourceReleaseHasBeenStarted == '\0') {
    BeginFinalReleaseResource(this);
  }
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseFence);
  return bVar1;
}

// IsVirtualTexturingEnabled @ 148895f70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl UTexture::IsVirtualTexturingEnabled(ITargetPlatformSettings *param_1)

{
  bool bVar1;
  
  bVar1 = UseVirtualTexturing((FStaticShaderPlatform)GMaxRHIShaderPlatform);
  if (!bVar1) {
    return false;
  }
  if (param_1 != (ITargetPlatformSettings *)0x0) {
    bVar1 = UseVirtualTexturing(param_1);
    return bVar1;
  }
  return true;
}

// PostCDOContruct @ 1488965d0

void __thiscall UTexture::PostCDOContruct(UTexture *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FName FStackX_8;
  FName aFStackX_10 [3];
  FTopLevelAssetPath FStack_28;
  FTopLevelAssetPath FStack_18;
  
  if (PixelFormatEnum == (UEnum *)0x0) {
    pFVar4 = ::FName::FName(&FStackX_8,L"EPixelFormat");
    FVar1 = *pFVar4;
    pFVar4 = ::FName::FName(aFStackX_10,L"/Script/CoreUObject");
    FStack_28.PackageName.ComparisonIndex.Value = 0;
    FStack_28.PackageName.Number = 0;
    FStack_28.AssetName.ComparisonIndex.Value = 0;
    FStack_28.AssetName.Number = 0;
    FTopLevelAssetPath::TrySetPath(&FStack_28,*pFVar4,FVar1);
    bVar3 = IsInGameThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                           ,0x6c3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FStack_18.PackageName = FStack_28.PackageName;
    FStack_18.AssetName = FStack_28.AssetName;
    pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
    PixelFormatEnum = (UEnum *)StaticFindObject(pUVar5,&FStack_18,None);
    if ((PixelFormatEnum == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PixelFormatEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                           ,0x6c5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// PostEditImport @ 1488965e0

void __thiscall UTexture::PostEditImport(UTexture *this)

{
  return;
}

// PostInitProperties @ 1488965f0

void __thiscall UTexture::PostInitProperties(UTexture *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UTexture *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 < (UTexture **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8)))
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UTexture **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 148896650

void __thiscall UTexture::PostLoad(UTexture *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  
  UObject::PostLoad((UObject *)this);
  bVar3 = IsCookPlatformTilingDisabled(this,(ITargetPlatformSettings *)0x0);
  if (bVar3) {
    this->bNotOfflineProcessed = '\x01';
  }
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    lVar2 = this->_padding_;
    if (lVar2 != 0) {
      pUVar4 = UTextureCube::StaticClass();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x328))(this);
  }
  return;
}

// PreSave @ 148896900

void __thiscall UTexture::PreSave(UTexture *this,FObjectPreSaveContext param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *local_res10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&PreSaveEvent,
             (FWriteAccessScope *)&local_38);
  bVar2 = false;
  PreSaveEvent._28_4_ = PreSaveEvent._28_4_ + 1;
  uVar6 = PreSaveEvent._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)PreSaveEvent._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + PreSaveEvent._8_8_) == 0) ||
          (*(longlong **)(lVar7 + PreSaveEvent._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + PreSaveEvent._8_8_) + 0x68))(), cVar4 == '\0'
         )) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  PreSaveEvent._28_4_ = PreSaveEvent._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&PreSaveEvent,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  local_res10 = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10 + 0x9c) = *(int *)(local_res10 + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)&local_res10);
  return;
}

// ReleaseResource @ 148897330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTexture::ReleaseResource(UTexture *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UTexture *pUStack_70;
  FTextureResource *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UTexture *pUStack_40;
  FTextureResource *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->PrivateResource == (FTextureResource *)0x0) {
    return;
  }
  bVar2 = IsInActualRenderingThread();
  if (((bVar2) || (bVar2 = IsInRHIThread(), bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInActualRenderingThread() && !IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                         ,0x133,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UStreamableRenderAsset::UnlinkStreaming((UStreamableRenderAsset *)this);
  lVar3 = (**(code **)(this->_padding_ + 0x358))(this);
  if ((lVar3 != 0) &&
     (plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x358))(this), *plVar4 != 0)) {
    UStreamableRenderAsset::WaitForPendingInitOrStreaming
              ((UStreamableRenderAsset *)this,false,false);
  }
  local_68 = this->PrivateResource;
  this->_padding_ = 0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UTexture::ReleaseResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this->PrivateResource = (FTextureResource *)0x0;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UTexture::ReleaseResource'::`5'::<lambda_1>,1,0>::_vftable_;
  pUStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UTexture::ReleaseResource_::__l5::TSTR_DeleteResource324>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pUStack_40 = pUStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`UTexture::ReleaseResource'::__l5::TSTR_DeleteResource324>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar5);
    uVar7 = (ulonglong)local_28;
    if ((2 < uVar7) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar6 = local_30;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// RemoveUserDataOfClass @ 1488978b0

void __thiscall UTexture::RemoveUserDataOfClass(UTexture *this,TSubclassOf<UAssetUserData> param_1)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar7 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < (int)this->_padding_) {
    do {
      uVar8 = (uint)pUVar7;
      uVar4 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = *(longlong *)(&pUVar9->field_0x0 + this->_padding_);
      if (lVar1 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_148897968;
LAB_148897996:
          pUVar7 = pUVar10;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_148897996;
          UE::GC::MarkAsReachable(pUVar7);
LAB_148897968:
          pUVar6 = Z_Construct_UClass_UAssetUserData_NoRegister();
          if (pUVar6 == (UClass *)0x0) goto LAB_148897996;
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_148897996;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          uVar4 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)(this->_padding_ + (longlong)(int)uVar8 * 8);
          iVar5 = ((int)this->_padding_ - uVar8) + -1;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
          }
          iVar5 = (int)this->_padding_ + -1;
          *(int *)&this->_padding_ = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&this->_padding_,iVar5,
                     (int *)((longlong)&this->_padding_ + 4));
          return;
        }
      }
      pUVar7 = (UObject *)(ulonglong)(uVar8 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar8 + 1) < (int)this->_padding_);
  }
  return;
}

// Serialize @ 148898550

void __thiscall UTexture::Serialize(UTexture *this,FArchive *param_1)

{
  FStripDataFlags local_res10 [12];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  return;
}

// Serialize @ 1488985b0

void __thiscall UTexture::Serialize(UTexture *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FStripDataFlags local_res10 [4];
  FSlotBase local_res18 [2];
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  FStripDataFlags::FStripDataFlags(local_res10,pFVar1,'\0',&GOldestLoadablePackageFileUEVersion);
  return;
}

// SerializeCookedPlatformData @ 1488991d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTexture::SerializeCookedPlatformData(UTexture *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  UEnum *this_00;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_UTexture::SerializeCookedPlatformData(FArchive_&,bool)_::_2_::FStat_STAT_Texture_SerializeCookedData>
  FVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar17;
  ulong64 local_a8;
  FName local_a0;
  FColor_u_0 local_98 [2];
  FName local_90;
  FName local_88;
  FName local_80;
  UEnum *local_70;
  LARGE_INTEGER local_68;
  FStatMessage local_60;
  FName local_50;
  FName local_48 [2];
  
  bVar8 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar8) {
    return;
  }
  puVar14 = (undefined8 *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Texture_SerializeCookedData ==
        (FThreadSafeStaticStat<_public:_void___cdecl_UTexture::SerializeCookedPlatformData(FArchive_&,bool)_::_2_::FStat_STAT_Texture_SerializeCookedData>
         )0x0) {
      pFVar10 = ::FName::FName(&local_50,"STAT_Texture_SerializeCookedData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Texture_SerializeCookedData,*pFVar10,
                 L"UTexture::SerializeCookedPlatformData","STATGROUP_LoadTime","STATCAT_Advanced",
                 L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_Texture_SerializeCookedData;
  if (StatPtr_STAT_Texture_SerializeCookedData ==
      (FThreadSafeStaticStat<_public:_void___cdecl_UTexture::SerializeCookedPlatformData(FArchive_&,bool)_::_2_::FStat_STAT_Texture_SerializeCookedData>
       )0x0) {
    pFVar10 = ::FName::FName(local_48,"STAT_Texture_SerializeCookedData");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_UTexture::SerializeCookedPlatformData(FArchive_&,bool)_::_2_::FStat_STAT_Texture_SerializeCookedData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Texture_SerializeCookedData,
                          *pFVar10,L"UTexture::SerializeCookedPlatformData","STATGROUP_LoadTime",
                          "STATCAT_Advanced",L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar8 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar9 = false;
  bVar5 = false;
  if ((FVar17.ComparisonIndex.Value.Value != 0) ||
     (bVar4 = bVar8, bVar6 = bVar7, FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar9 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_90.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                   ,0x1081);
        bVar8 = true;
        bVar7 = true;
        bVar9 = true;
        bVar5 = true;
      }
    }
    bVar4 = bVar8;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      bVar5 = true;
      goto LAB_148899383;
    }
  }
  bVar7 = bVar5;
  bVar8 = bVar9;
  bVar9 = false;
  bVar5 = false;
  local_88 = local_80;
  FVar17 = local_80;
LAB_148899383:
  local_70 = GetPixelFormatEnum();
  plVar12 = (longlong *)(**(code **)(this->_padding_ + 0x358))(this);
  if (plVar12 != (longlong *)0x0) {
    CleanupCachedRunningPlatformData(this);
    if ((*plVar12 != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("RunningPlatformData == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureDerivedData.cpp"
                           ,0x1103,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar13 = ::operator_new(0x38);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = 0;
      *(undefined4 *)(puVar13 + 1) = 0;
      *(undefined1 *)((longlong)puVar13 + 0xc) = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar14 = puVar13;
    }
    *plVar12 = (longlong)puVar14;
    local_a0.ComparisonIndex.Value = 0;
    local_a0.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_a0);
    this_00 = local_70;
    while (local_a0 != (FName)0x0) {
      uVar15 = UEnum::GetValueByName(this_00,local_a0,None);
      if ((uVar15 == 0xffffffffffffffff) || (0x5d < (longlong)uVar15)) {
        uVar15 = 0;
      }
      lVar16 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      plVar2 = *(longlong **)&param_1->field_0x8;
      local_a8 = 0;
      if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_a8);
        }
      }
      else {
        local_a8 = *(ulong64 *)*plVar2;
        *plVar2 = *plVar2 + 8;
      }
      if ((((FTexturePlatformData *)*plVar12)->PixelFormat == PF_Unknown) &&
         (GPixelFormats[uVar15 & 0xff].Supported != 0)) {
        FTexturePlatformData::SerializeCooked
                  ((FTexturePlatformData *)*plVar12,param_1,this,false,param_2);
      }
      else {
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_a8 + lVar16);
      }
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_a0);
    }
    FVar17 = local_88;
    bVar4 = bVar8;
    bVar9 = bVar5;
    bVar6 = bVar7;
    if ((param_1->field_0x28 & 1) != 0) {
      this->LODBias = 0;
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_60.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_60);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SetCompositeTexture_WrapperImpl @ 14889b540

void __cdecl UTexture::SetCompositeTexture_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetDeterministicLightingGuid @ 14889b550

void __thiscall UTexture::SetDeterministicLightingGuid(UTexture *this)

{
  (this->LightingGuid).A = 0;
  (this->LightingGuid).B = 0;
  (this->LightingGuid).C = 0;
  (this->LightingGuid).D = 0;
  return;
}

// SetMinTextureResidentMipCount @ 14889b580

void __cdecl UTexture::SetMinTextureResidentMipCount(int param_1)

{
  GMinTextureResidentMipCount = 1;
  if (1 < param_1) {
    GMinTextureResidentMipCount = param_1;
  }
  return;
}

// SetResource @ 14889b760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTexture::SetResource(UTexture *this,FTextureResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UTexture *pUStack_70;
  FTextureResource *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UTexture *pUStack_40;
  FTextureResource *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInActualRenderingThread();
  if (!bVar2) {
    bVar2 = IsInRHIThread();
    if (!bVar2) goto LAB_14889b7c3;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsInActualRenderingThread() && !IsInRHIThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                     ,0x122,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14889b7c3:
  this->PrivateResource = param_1;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UTexture::SetResource'::`2'::<lambda_1>,1,0>::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UTexture::SetResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pUStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UTexture::SetResource_::__l2::TSTR_SetResourceRenderThread297>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pUStack_40 = pUStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UTexture::SetResource'::__l2::TSTR_SetResourceRenderThread297>::Get
                       ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// ShouldMipLevelsBeForcedResident @ 14889bac0

bool __thiscall UTexture::ShouldMipLevelsBeForcedResident(UTexture *this)

{
  if ((((this->LODGroup).Value != '\x0f') && ((this->_padding_ & 10) == 0)) &&
     ((double)this->_padding_ <= (double)FApp::CurrentTime &&
      (double)FApp::CurrentTime != (double)this->_padding_)) {
    return false;
  }
  return true;
}

// StaticRegisterNativesUTexture @ 14889bb90

void __cdecl UTexture::StaticRegisterNativesUTexture(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UTexture_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateResourceWithParams @ 14889ee20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTexture::UpdateResourceWithParams(UTexture *this,EUpdateResourceFlags param_1)

{
  int iVar1;
  FTexturePlatformData *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTextureResource *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  FString *pFVar9;
  FName *pFVar10;
  FRenderCommandList *pFVar11;
  FCommandList *pFVar12;
  FRenderCommandTag *pFVar13;
  wchar_t *pwVar14;
  byte bVar15;
  undefined ***pppuVar16;
  int iVar17;
  ulonglong uVar18;
  byte bVar19;
  undefined1 auStackY_1f8 [32];
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  uint local_1b4;
  uint local_1b0;
  FLLMScope local_1ac;
  undefined4 local_1a8 [2];
  longlong local_1a0;
  int local_198;
  FMemScope local_190;
  longlong *local_188;
  UTexture *local_180;
  uint *local_178;
  uint *local_170;
  undefined4 *local_168;
  int *local_160;
  int *local_158;
  int *local_150;
  int *local_148;
  int *local_140;
  FName local_138;
  FString local_130;
  code *local_118 [2];
  undefined **local_108;
  UTexture *pUStack_100;
  FTextureResource *local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  UTexture *pUStack_d0;
  FTextureResource *local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  UTexture *pUStack_a0;
  FTextureResource *local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  UTexture *pUStack_60;
  FTextureResource *local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  ReleaseResource(this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar14 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar14,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && ((this->_padding_ & 0x10) == 0)) {
    pFVar5 = (FTextureResource *)(**(code **)(this->_padding_ + 0x338))(this);
    if (GSkipInvalidDXTDimensions != 0) {
      if (pFVar5 == (FTextureResource *)0x0) {
        local_1a0 = 0;
      }
      else {
        local_1a0 = (**(code **)(pFVar5->_padding_ + 0x88))(pFVar5);
        if (local_1a0 != 0) {
          local_1b4 = *(uint *)(local_1a0 + 0x78);
          local_1b0 = *(uint *)(local_1a0 + 0x7c);
          local_1a8[0] = *(undefined4 *)(local_1a0 + 0x80);
          switch(*(undefined1 *)(local_1a0 + 0x94)) {
          case 5:
          case 6:
          case 7:
          case 0x17:
          case 0x27:
          case 0x37:
          case 0x38:
            if (((local_1b4 < 4) || ((local_1b4 & 3) != 0)) ||
               ((local_1b0 < 4 || ((local_1b0 & 3) != 0)))) {
              puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x358))(this);
              if (puVar6 == (undefined8 *)0x0) {
                local_1c0 = 0;
                local_1bc = 0;
                local_1b8 = 0;
                local_1c8 = 0;
                local_1c4 = 0;
              }
              else {
                this_00 = (FTexturePlatformData *)*puVar6;
                local_1c0 = 0;
                local_1bc = 0;
                local_1b8 = 0;
                local_1c8 = 0;
                local_1c4 = 0;
                if (this_00 != (FTexturePlatformData *)0x0) {
                  local_1c0 = (this_00->Mips).Array.ArrayNum;
                  bVar3 = IsPossibleToStream(this);
                  local_1bc = FTexturePlatformData::GetNumNonStreamingMips(this_00,bVar3);
                  local_1b8 = FTexturePlatformData::GetNumNonOptionalMips(this_00);
                  local_1c8 = this_00->SizeX;
                  local_1c4 = this_00->SizeY;
                }
              }
              if (((local_1b0 | local_1b4) & 3) != 0) {
                local_188 = &local_1a0;
                local_178 = &local_1b4;
                local_170 = &local_1b0;
                local_168 = local_1a8;
                local_160 = &local_1c8;
                local_158 = &local_1c4;
                local_150 = &local_1c0;
                local_148 = &local_1bc;
                local_140 = &local_1b8;
                local_180 = this;
                `UTexture::UpdateResourceWithParams'::__l17::<lambda_1>::operator()(&local_188);
              }
              (**(code **)pFVar5->_padding_)(pFVar5,1);
              return;
            }
          }
        }
      }
    }
    bVar3 = IsInActualRenderingThread();
    if (((bVar3) || (bVar3 = IsInRHIThread(), bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsInActualRenderingThread() && !IsInRHIThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                           ,0x192,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (pFVar5 == (FTextureResource *)0x0) {
      bVar3 = IsInActualRenderingThread();
      if (((bVar3) || (bVar3 = IsInRHIThread(), bVar3)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsInActualRenderingThread() && !IsInRHIThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Texture.cpp"
                             ,0x122,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this->PrivateResource = (FTextureResource *)0x0;
      local_d8 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UTexture::SetResource'::`2'::<lambda_1>,1,0>::_vftable_;
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UTexture::SetResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_c0 = (undefined ***)0x0;
      pUStack_d0 = this;
      local_c8 = pFVar5;
      pFVar11 = FRenderCommandList::GetInstanceTLS();
      if (pFVar11 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UTexture::SetResource_::__l2::TSTR_SetResourceRenderThread297>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
      }
      else {
        pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
        local_78._0_8_ = local_e8[0];
        local_50 = local_c0;
        local_68 = local_d8;
        pUStack_60 = pUStack_d0;
        local_58 = local_c8;
        local_e8[0] = (code *)0x0;
        local_48 = 2;
        pFVar13 = (FRenderCommandTag *)
                  TRenderCommandTag<`UTexture::SetResource'::__l2::TSTR_SetResourceRenderThread297>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar13);
        uVar18 = (ulonglong)local_48;
        if ((2 < uVar18) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            pppuVar16 = (undefined ***)(local_78 + 0x10);
            if (local_50 != (undefined ***)0x0) {
              pppuVar16 = local_50;
            }
            (*(code *)(*pppuVar16)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18])(local_78);
        }
      }
      if (local_e8[0] != (code *)0x0) {
        pppuVar16 = &local_d8;
        if (local_c0 != (undefined ***)0x0) {
          pppuVar16 = local_c0;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
    else {
      FLLMScope::FLLMScope(&local_1ac,Textures,false,None,Default,true);
      FMemScope::FMemScope(&local_190,Textures,true);
      lVar7 = (**(code **)(pFVar5->_padding_ + 0x88))(pFVar5);
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x68);
        this->_padding_ = lVar7;
        if (lVar7 != 0) {
          *(byte *)&this->_padding_ = (byte)lVar7 | 4;
        }
      }
      plVar8 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x98))(pFVar5);
      if (plVar8 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar8 + 0xd0))(plVar8);
        local_198 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> local_198 == 0; local_198 = local_198 + -1) {
          }
        }
        bVar19 = 0;
        if (uVar4 != 0) {
          bVar19 = (byte)local_198;
        }
        uVar4 = (**(code **)(*plVar8 + 0xc0))(plVar8);
        bVar15 = 0x10;
        if (uVar4 < 0x10) {
          bVar15 = (byte)uVar4;
        }
        if (this->VirtualTexturePrefetchMips < bVar15) {
          bVar15 = this->VirtualTexturePrefetchMips;
        }
        if (bVar19 < bVar15) {
          this->_padding_ = 0;
          *(byte *)((longlong)&this->_padding_ + 1) = bVar19;
          *(byte *)((longlong)&this->_padding_ + 5) = bVar19;
          *(byte *)((longlong)&this->_padding_ + 6) = bVar19;
          *(byte *)((longlong)&this->_padding_ + 2) = bVar15;
          *(byte *)((longlong)&this->_padding_ + 3) = bVar15;
          *(undefined1 *)&this->_padding_ = 7;
        }
      }
      this->PrivateResource = pFVar5;
      pFVar9 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_130,(UObject *)0x0)
      ;
      iVar1 = (pFVar9->Data).ArrayNum;
      iVar17 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar17 = 0;
      }
      pFVar10 = ::FName::FName(&local_138,iVar17,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                               FNAME_Add);
      pFVar5->_padding_ = (longlong)*pFVar10;
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      local_f0 = (undefined ***)0x0;
      local_108 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UTexture::UpdateResourceWithParams'::`30'::<lambda_2>,1,0>
                   ::_vftable_;
      local_118[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UTexture::UpdateResourceWithParams'::__l30::<lambda_2>,void,FRHICommandListImmediate_&>
                     ::Call;
      pUStack_100 = this;
      local_f8 = pFVar5;
      pFVar11 = FRenderCommandList::GetInstanceTLS();
      if (pFVar11 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UTexture::UpdateResourceWithParams_::__l30::TSTR_SetTextureReference445>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
      }
      else {
        pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
        local_b8._0_8_ = local_118[0];
        local_90 = local_f0;
        local_a8 = local_108;
        pUStack_a0 = pUStack_100;
        local_98 = local_f8;
        local_118[0] = (code *)0x0;
        local_88 = 2;
        pFVar13 = (FRenderCommandTag *)
                  TRenderCommandTag<`UTexture::UpdateResourceWithParams'::__l30::TSTR_SetTextureReference445>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_b8,pFVar13);
        uVar18 = (ulonglong)local_88;
        if ((2 < uVar18) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_b8._0_8_ != (code *)0x0) {
            pppuVar16 = (undefined ***)(local_b8 + 0x10);
            if (local_90 != (undefined ***)0x0) {
              pppuVar16 = local_90;
            }
            (*(code *)(*pppuVar16)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18])(local_b8);
        }
      }
      if (local_118[0] != (code *)0x0) {
        pppuVar16 = &local_108;
        if (local_f0 != (undefined ***)0x0) {
          pppuVar16 = local_f0;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      UStreamableRenderAsset::LinkStreaming((UStreamableRenderAsset *)this);
      FMemScope::~FMemScope(&local_190);
      FLLMScope::~FLLMScope(&local_1ac);
    }
  }
  return;
}

// execAreDownscalePropertiesEditable @ 1488a0640

void __cdecl
UTexture::execAreDownscalePropertiesEditable(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x318))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execBlueprint_GetBuiltTextureSize @ 1488a0680

void __cdecl
UTexture::execBlueprint_GetBuiltTextureSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar3 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x358))();
  uVar4 = uVar5;
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar1 = (uint *)*puVar2, uVar4 = uVar3, puVar1 != (uint *)0x0)) {
    uVar5 = *puVar1;
    uVar3 = puVar1[2] & 0x1fffffff;
    uVar4 = puVar1[1];
  }
  *(float *)param_3 = (float)(int)uVar5;
  *(float *)((longlong)param_3 + 4) = (float)(int)uVar4;
  *(float *)((longlong)param_3 + 8) = (float)uVar3;
  return;
}

// execBlueprint_GetMemorySize @ 1488a07e0

void __cdecl UTexture::execBlueprint_GetMemorySize(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x3b0))(param_1,0);
  *(ulonglong *)param_3 = (ulonglong)uVar1;
  return;
}

// execBlueprint_GetTextureSourceDiskAndMemorySize @ 1488a08a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTexture::execBlueprint_GetTextureSourceDiskAndMemorySize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_res10 [16];
  uchar local_res20 [8];
  FName local_38;
  FString local_30;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  local_res20[4] = '\0';
  local_res20[5] = '\0';
  local_res20[6] = '\0';
  local_res20[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  if (1 < (byte)LogTexture._0_1_) {
    local_38.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_38.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_38,&local_30);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execBlueprint_GetTextureSourceIdString @ 1488a09e0

void __cdecl
UTexture::execBlueprint_GetTextureSourceIdString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *this;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  this = &local_18;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    this = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::Reset(this,0);
  *(undefined1 *)param_3 = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execComputeTextureSourceChannelMinMax @ 1488a0a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UTexture::execComputeTextureSourceChannelMinMax(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  FName local_res10;
  FString local_48;
  uchar local_38 [16];
  uchar local_28 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar2 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar3 = local_38;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  puVar3[4] = '\0';
  puVar3[5] = '\0';
  puVar3[6] = '\0';
  puVar3[7] = '\0';
  puVar3[8] = '\0';
  puVar3[9] = '\0';
  puVar3[10] = '\0';
  puVar3[0xb] = '\0';
  puVar3[0xc] = '\0';
  puVar3[0xd] = '\0';
  puVar3[0xe] = '\0';
  puVar3[0xf] = '\0';
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  puVar2[8] = '\0';
  puVar2[9] = '\0';
  puVar2[10] = '\0';
  puVar2[0xb] = '\0';
  puVar2[0xc] = '\0';
  puVar2[0xd] = '\0';
  puVar2[0xe] = '\0';
  puVar2[0xf] = '\0';
  if (1 < (byte)LogTexture._0_1_) {
    local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res10.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res10,&local_48);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetTextureStreamingMethod @ 1488a0be0

void __cdecl UTexture::execGetTextureStreamingMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x348))();
  if (cVar1 != '\0') {
    *(undefined1 *)param_3 = 3;
    return;
  }
  *(char *)param_3 = (*(int *)&param_1[4].field_0x18 != -1) + '\x01';
  return;
}

// operator() @ 1505325b0

bool __thiscall `UTexture::GetResource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2906405932571296005>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2906405932571296005>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505325f0

bool __thiscall `UTexture::GetResource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2906405932571295990>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2906405932571295990>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150532750

bool __thiscall `UTexture::UpdateResourceWithParams'::__l17::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  FName local_68;
  FString local_60 [2];
  
  bVar3 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2906405932571296138>);
  if (bVar2) {
    local_68 = *(FName *)(*(longlong *)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_68,local_60);
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2906405932571296138>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      bVar2 = true;
      goto LAB_150532903;
    }
    bVar3 = true;
  }
  bVar2 = false;
LAB_150532903:
  if ((bVar3) && (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  return false;
}

