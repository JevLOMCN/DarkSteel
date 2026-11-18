// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 51

// FSlateRHIResourceManager @ 145fe7160

FSlateRHIResourceManager * __thiscall
FSlateRHIResourceManager::FSlateRHIResourceManager(FSlateRHIResourceManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FSlateRHIResourceManager *pFVar7;
  FText *this_00;
  FString *pFVar8;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar9;
  uint uVar10;
  wchar_t *pwVar11;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  FText local_e8;
  undefined1 local_d8 [8];
  FDelegateAllocation local_d0;
  undefined1 local_b8 [40];
  FMRSWRecursiveAccessDetector *local_90;
  char local_88;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  undefined1 local_60 [24];
  code *local_48;
  void *pvStack_40;
  code *local_38;
  void *pvStack_30;
  
  this->_padding_ = (longlong)&___7ISlateAtlasProvider__6B_;
  FSlateShaderResourceManager::FSlateShaderResourceManager
            ((FSlateShaderResourceManager *)&this->_padding_);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__ISlateAtlasProvider__;
  this->_padding_ = (longlong)&_vftable__for__FSlateShaderResourceManager__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResourceCriticalSection,4000);
  this->bResourceCriticalSectionLockedForGC = false;
  this->bExpiredResourcesNeedCleanup = false;
  *(undefined8 *)&(this->DynamicResourceMap).NativeTextureMap = 0;
  *(undefined8 *)&(this->DynamicResourceMap).NativeTextureMap.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).NativeTextureMap.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).NativeTextureMap.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).NativeTextureMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicResourceMap).NativeTextureMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicResourceMap).NativeTextureMap.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).NativeTextureMap.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).NativeTextureMap.field_0x48 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).TextureMap = 0;
  *(undefined8 *)&(this->DynamicResourceMap).TextureMap.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).TextureMap.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).TextureMap.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).TextureMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicResourceMap).TextureMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicResourceMap).TextureMap.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).TextureMap.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).TextureMap.field_0x48 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).MaterialMap = 0;
  *(undefined8 *)&(this->DynamicResourceMap).MaterialMap.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).MaterialMap.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).MaterialMap.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).MaterialMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicResourceMap).MaterialMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicResourceMap).MaterialMap.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).MaterialMap.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).MaterialMap.field_0x48 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).ObjectMap = 0;
  *(undefined8 *)&(this->DynamicResourceMap).ObjectMap.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).ObjectMap.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).ObjectMap.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).ObjectMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicResourceMap).ObjectMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicResourceMap).ObjectMap.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicResourceMap).ObjectMap.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicResourceMap).ObjectMap.field_0x48 = 0;
  local_b8._0_8_ = DeleteBrushResourcesCommand;
  (this->UTextureFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UTextureFreeList).ArrayNum = 0;
  (this->UTextureFreeList).ArrayMax = 0;
  (this->DynamicTextureFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicTextureFreeList).ArrayNum = 0;
  (this->DynamicTextureFreeList).ArrayMax = 0;
  (this->MaterialResourceFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialResourceFreeList).ArrayNum = 0;
  (this->MaterialResourceFreeList).ArrayMax = 0;
  (this->PrecachedTextureAtlases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrecachedTextureAtlases).ArrayNum = 0;
  (this->PrecachedTextureAtlases).ArrayMax = 0;
  (this->NonAtlasedTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonAtlasedTextures).ArrayNum = 0;
  (this->NonAtlasedTextures).ArrayMax = 0;
  this->BadResourceTexture = (UTexture *)0x0;
  (this->ActiveScenes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveScenes).ArrayNum = 0;
  (this->ActiveScenes).ArrayMax = 0;
  local_b8._8_4_ = 0;
  local_b8._12_4_ = local_b8._28_4_;
  local_d8 = (undefined1  [8])0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)&local_80);
  local_68 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_d0);
  pwVar11 = L"";
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    puVar5[4] = local_b8._0_8_;
    puVar5[5] = CONCAT44(local_b8._12_4_,local_b8._8_4_);
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFSlateRHIResourceManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = this;
    if (puVar5[4] == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FSlateRHIResourceManager *)(*pcVar1)();
        return pFVar7;
      }
    }
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (&local_e8,L"Slate",L"CommandText_DeleteResources",
                       L"Flushes and deletes all resources created by Slate\'s RHI Resource Manager."
                      );
  pFVar8 = FText::ToString(this_00);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&this->DeleteResourcesCommand,L"Slate.DeleteResources",pwVar11,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_d8,0);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d8,
             (FWriteAccessScope *)(local_b8 + 0x20));
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_88 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_90,(FDestructionSentinel *)(local_b8 + 0x20));
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  local_e8.Flags = 0;
  local_e8.TextData.Reference = (ITextData *)OnAppExit;
  pvStack_40 = (void *)((ulonglong)(uint)local_e8._12_4_ << 0x20);
  local_48 = OnAppExit;
  (this->VectorGraphicsCache).Ptr = (FSlateVectorGraphicsCache *)0x0;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FSlateRHIResourceManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,(FSlateRHIResourceManager *)local_60,(pmf_0af960fd *)this);
  pTVar9 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  local_e8.Flags = 0;
  local_e8.TextData.Reference = (ITextData *)OnPreGarbageCollect;
  pvStack_30 = (void *)((ulonglong)(uint)local_e8._12_4_ << 0x20);
  local_38 = OnPreGarbageCollect;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FSlateRHIResourceManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar9
             ,(FSlateRHIResourceManager *)(local_60 + 8),(pmf_0af960fd *)this);
  pTVar9 = FCoreUObjectDelegates::GetPostGarbageCollect();
  local_e8.Flags = 0;
  local_e8.TextData.Reference = (ITextData *)OnPostGarbageCollect;
  local_b8._24_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
  local_b8._16_8_ = OnPostGarbageCollect;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FSlateRHIResourceManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar9
             ,(FSlateRHIResourceManager *)local_b8,(pmf_0af960fd *)this);
  local_res20 = 0x100;
  uStackX_24 = 0x100;
  (this->MaxAltasedTextureSize).field0_0x0 = (TIntPoint<int>_u_0)&DAT_10000000100;
  this->AtlasSize = 0x400;
  if (GConfig != (FConfigCacheIni *)0x0) {
    local_res8[0] = 0x400;
    FConfigCacheIni::GetInt
              (GConfig,L"SlateRenderer",L"TextureAtlasSize",(int *)local_res8,&GEngineIni);
    local_res10[0] = 0x100;
    local_res18[0] = 0x100;
    uVar10 = 0x800;
    if (local_res8[0] < 0x800) {
      uVar10 = local_res8[0];
    }
    uVar3 = 0;
    if (uVar10 != 0) {
      uVar3 = uVar10;
    }
    this->AtlasSize = uVar3;
    FConfigCacheIni::GetInt
              (GConfig,L"SlateRenderer",L"MaxAtlasedTextureWidth",(int *)local_res10,&GEngineIni);
    FConfigCacheIni::GetInt
              (GConfig,L"SlateRenderer",L"MaxAtlasedTextureHeight",(int *)local_res18,&GEngineIni);
    uVar10 = this->AtlasSize;
    uVar3 = uVar10;
    if ((int)local_res10[0] < (int)uVar10) {
      uVar3 = local_res10[0];
    }
    uVar4 = 0;
    if (0 < (int)uVar3) {
      uVar4 = uVar3;
    }
    (this->MaxAltasedTextureSize).field0_0x0._s_0.X = uVar4;
    if ((int)local_res18[0] < (int)uVar10) {
      uVar10 = local_res18[0];
    }
    uVar3 = 0;
    if (0 < (int)uVar10) {
      uVar3 = uVar10;
    }
    (this->MaxAltasedTextureSize).field0_0x0._s_0.Y = uVar3;
  }
  CreateVectorGraphicsCache(this);
  return this;
}

// ~FSlateRHIResourceManager @ 145fea350

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FSlateRHIResourceManager::~FSlateRHIResourceManager(FSlateRHIResourceManager *this)

{
  FSlateVectorGraphicsCache *pFVar1;
  FScriptContainerElement *pFVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar3;
  
  this->_padding_ = (longlong)&_vftable__for__ISlateAtlasProvider__;
  this->_padding_ = (longlong)&_vftable__for__FSlateShaderResourceManager__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,this);
  pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar3,this);
  pTVar3 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar3,this);
  if (GRHIGlobals.IsRHIInitialized != false) {
    FlushRenderingCommands();
    DeleteResources(this);
  }
  pFVar1 = (this->VectorGraphicsCache).Ptr;
  if (pFVar1 != (FSlateVectorGraphicsCache *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&this->DeleteResourcesCommand);
  pFVar2 = (this->ActiveScenes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NonAtlasedTextures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PrecachedTextureAtlases).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FSlateMaterialResource,1>,int>
            ((TSharedPtr<FSlateMaterialResource,1> *)
             (this->MaterialResourceFreeList).AllocatorInstance.Data,
             (this->MaterialResourceFreeList).ArrayNum);
  pFVar2 = (this->MaterialResourceFreeList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FSlateDynamicTextureResource,1>,int>
            ((TSharedPtr<FSlateDynamicTextureResource,1> *)
             (this->DynamicTextureFreeList).AllocatorInstance.Data,
             (this->DynamicTextureFreeList).ArrayNum);
  pFVar2 = (this->DynamicTextureFreeList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FSlateUTextureResource,1>,int>
            ((TSharedPtr<FSlateUTextureResource,1> *)(this->UTextureFreeList).AllocatorInstance.Data
             ,(this->UTextureFreeList).ArrayNum);
  pFVar2 = (this->UTextureFreeList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDynamicResourceMap::~FDynamicResourceMap(&this->DynamicResourceMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  FSlateShaderResourceManager::~FSlateShaderResourceManager
            ((FSlateShaderResourceManager *)&this->_padding_);
  this->_padding_ = (longlong)&___7ISlateAtlasProvider__6B_;
  return;
}

// operator() @ 145fec280

void __thiscall
`FSlateRHIResourceManager::CreateTextures'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  FLoadTextureInfo *this_00;
  FSlateTextureData *this_01;
  FSlateTextureData *pFVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  TRawPtrProxy<FSlateTextureData> local_res18;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  plVar1 = *(longlong **)this;
  pFVar7 = (FSlateTextureData *)0x0;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  this_00 = TMapBase<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,0>_>
            ::FindChecked(*(void **)((longlong)this + 8),*(FName *)(*plVar1 + (longlong)param_1 * 8)
                         );
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar4 = (bool)(**(code **)(**(longlong **)((longlong)this + 0x10) + 0x20))
                          (*(longlong **)((longlong)this + 0x10),this_00->Brush,local_res10,
                           local_res8,&local_28);
  this_00->bSucceeded = bVar4;
  if (bVar4 != false) {
    this_01 = ::operator_new(0x20);
    if (this_01 != (FSlateTextureData *)0x0) {
      pFVar7 = FSlateTextureData::FSlateTextureData
                         (this_01,local_res10[0],local_res8[0],**(uint **)((longlong)this + 0x18),
                          &local_28);
    }
    local_res18.Object = pFVar7;
    TSharedPtr<FSlateTextureData,1>::operator=<FSlateTextureData>
              ((TSharedPtr<FSlateTextureData,1> *)this_00,&local_res18);
    lVar2 = *(longlong *)((longlong)this + 0x10);
    if ((((local_res10[0] < *(uint *)(lVar2 + 0x22c)) && (local_res8[0] < *(uint *)(lVar2 + 0x230)))
        && (local_res10[0] < *(uint *)(lVar2 + 0x228))) &&
       (local_res8[0] < *(uint *)(lVar2 + 0x228))) {
      bVar5 = 1;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & bVar5;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// AddSceneAt @ 145fef780

void __thiscall
FSlateRHIResourceManager::AddSceneAt
          (FSlateRHIResourceManager *this,FSceneInterface *param_1,int param_2)

{
  TArray<FSceneInterface_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  piVar6 = &(this->ActiveScenes).ArrayNum;
  iVar5 = *piVar6;
  if (iVar5 <= param_2) {
    uVar7 = param_2 + 1;
    pTVar1 = &this->ActiveScenes;
    if (iVar5 < (int)uVar7) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar7 - iVar5,&pTVar1->AllocatorInstance,piVar6,
                         &(this->ActiveScenes).ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 8,0,
             (longlong)(int)(uVar7 - iVar5) << 3);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if ((int)uVar7 < iVar5) {
        uVar8 = iVar5 - uVar7;
        if (((int)(uVar8 | uVar7) < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar8 != 0) {
          _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar7 * 8;
          iVar5 = ((this->ActiveScenes).ArrayNum - uVar8) - uVar7;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 8,(longlong)iVar5 << 3);
          }
          piVar6 = &(this->ActiveScenes).ArrayNum;
          *piVar6 = *piVar6 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar1->AllocatorInstance,(this->ActiveScenes).ArrayNum,
                     &(this->ActiveScenes).ArrayMax);
        }
      }
    }
  }
  uVar7 = 0;
  if (param_2 < (this->ActiveScenes).ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(FSceneInterface **)((this->ActiveScenes).AllocatorInstance.Data + (longlong)param_2 * 8) =
       param_1;
  return;
}

// CleanupExpiredResources @ 145ff71a0

void __thiscall FSlateRHIResourceManager::CleanupExpiredResources(FSlateRHIResourceManager *this)

{
  this->bExpiredResourcesNeedCleanup = false;
  FDynamicResourceMap::RemoveExpiredTextureResources
            (&this->DynamicResourceMap,&this->UTextureFreeList);
  FDynamicResourceMap::RemoveExpiredMaterialResources
            (&this->DynamicResourceMap,&this->MaterialResourceFreeList);
  return;
}

// ClearScenes @ 145ff73e0

void __thiscall FSlateRHIResourceManager::ClearScenes(FSlateRHIResourceManager *this)

{
  int *piVar1;
  
  piVar1 = &(this->ActiveScenes).ArrayMax;
  (this->ActiveScenes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveScenes).AllocatorInstance,0,piVar1);
  }
  return;
}

// ConditionalFlushAtlases @ 145ff7f30

void __thiscall FSlateRHIResourceManager::ConditionalFlushAtlases(FSlateRHIResourceManager *this)

{
  FSlateVectorGraphicsCache::ConditionalFlushCache((this->VectorGraphicsCache).Ptr);
  return;
}

// ContainsTexture @ 145ffab10

bool __thiscall
FSlateRHIResourceManager::ContainsTexture(FSlateRHIResourceManager *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar4 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar4 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)this->_padding_ - 1U & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(this->_padding_ + (longlong)iVar3 * 0x18) == FVar1) goto LAB_145ffab7c;
        iVar3 = *(int *)(this->_padding_ + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_145ffab7c:
  return iVar3 != -1;
}

// CreateTextures @ 145ffc930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSlateRHIResourceManager::CreateTextures
          (FSlateRHIResourceManager *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  char cVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 TVar2;
  FName FVar3;
  undefined8 uVar4;
  code *pcVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 TVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FModuleManager *this_00;
  FName *pFVar10;
  ulonglong uVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 *pTVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  byte bVar15;
  longlong *plVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 TVar22;
  FName *pFVar23;
  ForElementType<unsigned_int> FVar24;
  bool bVar25;
  undefined1 auStackY_238 [32];
  <lambda_1> local_1f8;
  FIdentityFunctor local_1f7 [7];
  TArray<FName,TSizedDefaultAllocator<32>_> local_1f0;
  int local_1e0;
  int local_1dc;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 local_1d8;
  int local_1d0;
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c8;
  undefined4 local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  undefined4 uStack_1b4;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 local_180;
  TPairInitializer<FName_const_&,FSlateShaderResourceProxy_*_const_&> local_178;
  FName *local_168;
  FName local_160;
  FIdentityFunctor *local_158;
  FIdentityFunctor **local_150;
  FName local_148;
  FSlateShaderResourceProxy *local_140;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  TArrayView<std::nullptr_t,int> local_110;
  code *local_100;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_f8;
  FName *local_f0;
  FSlateShaderResourceProxy **local_e8;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_e0;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_d8;
  FSlateRHIResourceManager *local_d0;
  int *local_c8;
  FName local_c0 [4];
  undefined4 local_9c;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId415,"FSlateRHIResourceManager::CreateTextures",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
               ,0x19f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId415);
  }
  iVar21 = param_1->ArrayNum;
  uVar18 = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_98.AllocationFlags.NumBits = 0;
  local_98.AllocationFlags.MaxBits = 0x80;
  local_98.FirstFreeIndex = -1;
  local_98.NumFreeIndices = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = uVar18;
  if (0 < iVar21) {
    do {
      uVar9 = (uint)uVar18;
      uVar8 = 0;
      if ((int)uVar9 < iVar21) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TVar2 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 *)
               ((param_1->AllocatorInstance).Data + uVar13);
      TVar22 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 *)
                ((longlong)TVar2 + 0xa8);
      if ((TVar22 == (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1)0x0) &&
         (*(longlong *)((longlong)TVar2 + 0x38) != 0)) {
        TVar22 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 *)
                  (*(longlong *)((longlong)TVar2 + 0x38) + 0x18);
      }
      local_1d8 = TVar22;
      if ((((*(char *)((longlong)TVar2 + 0x1f) != '\x03') &&
           (TVar22 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1)0x0)) &&
          (*(longlong *)((longlong)TVar2 + 0x38) == 0)) &&
         (((*(byte *)((longlong)TVar2 + 0x94) & 2) == 0 &&
          ((*(byte *)((longlong)TVar2 + 0x94) & 1) == 0)))) {
        uVar8 = ::GetTypeHash((FNameEntryId)TVar22.PrevFreeIndex);
        TVar6 = local_1d8;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          plVar16 = &this->_padding_;
          if ((longlong *)this->_padding_ != (longlong *)0x0) {
            plVar16 = (longlong *)this->_padding_;
          }
          iVar21 = *(int *)((longlong)plVar16 +
                           (ulonglong)((int)this->_padding_ - 1U & TVar22.NextFreeIndex + uVar8) * 4
                           );
          if (iVar21 != -1) {
            do {
              if (*(TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 *)
                   (this->_padding_ + (longlong)iVar21 * 0x18) == TVar22) goto LAB_145ffcbf9;
              iVar21 = *(int *)(this->_padding_ + 0x10 + (longlong)iVar21 * 0x18);
            } while (iVar21 != -1);
          }
        }
        uVar8 = ::GetTypeHash((FNameEntryId)local_1d8.PrevFreeIndex);
        uVar8 = uVar8 + TVar6.NextFreeIndex;
        if (local_98.Data.ArrayNum != local_98.NumFreeIndices) {
          FVar14.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar14.Data = local_58.Data;
          }
          iVar21 = *(int *)(FVar14.Data + (ulonglong)(local_50 - 1 & uVar8) * 4);
          while (iVar21 != -1) {
            pTVar12 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 *)
                      (local_98.Data.AllocatorInstance.Data + (longlong)iVar21 * 0x38);
            if (*pTVar12 == local_1d8) {
              if (pTVar12 != (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 *)0x0)
              goto LAB_145ffcbca;
              break;
            }
            iVar21 = pTVar12[6].PrevFreeIndex;
          }
        }
        local_178.Value = (FSlateShaderResourceProxy **)&local_1d8;
        TSet<TTuple<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo>,TDefaultMapHashableKeyFuncs<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  (&local_98,(uint)&local_1e0,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,
                   (bool *)&local_178.Value);
        pTVar12 = (TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>_s_1 *)
                  (local_98.Data.AllocatorInstance.Data + (longlong)local_1e0 * 0x38);
LAB_145ffcbca:
        pTVar12[5] = TVar2;
        cVar1 = *(char *)((longlong)TVar2 + 0x1f);
        *(bool *)((longlong)&pTVar12[3].PrevFreeIndex + 1) = cVar1 != '\x02';
        if (((*(char *)((longlong)TVar2 + 0x1d) == '\0') && (cVar1 != '\x02')) &&
           (this->AtlasSize != 0)) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        *(byte *)&pTVar12[3].PrevFreeIndex = (byte)pTVar12[3].PrevFreeIndex & bVar15;
      }
LAB_145ffcbf9:
      iVar21 = param_1->ArrayNum;
      uVar18 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 8;
    } while ((int)(uVar9 + 1) < iVar21);
  }
  this_00 = FModuleManager::Get();
  pFVar10 = ::FName::FName(local_c0,"ImageWrapper");
  FModuleManager::LoadModuleChecked(this_00,*pFVar10);
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  TMapBase<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>(&local_98,&local_1f0);
  local_1dc = GPixelFormats[0x25].BlockBytes;
  if ((GPixelFormats[0x25].BlockBytes != 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesPerPixel == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                         ,0x1c2,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_e0 = &local_1f0;
  local_d8 = &local_98;
  local_110.DataPtr = (void **)0x0;
  local_c8 = &local_1dc;
  local_110.ArrayNum = 0;
  local_100 = UE::Core::Private::Function::
              TFunctionRefCaller<`FSlateRHIResourceManager::CreateTextures'::__l2::<lambda_1>,void,int>
              ::Call;
  local_f8 = &local_e0;
  local_180 = 1;
  local_d0 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_1f0.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_100,
             local_1f8,Unbalanced,&local_110);
  iVar21 = local_1f0.ArrayNum;
  uVar13 = (ulonglong)local_1f0.ArrayNum;
  pFVar10 = (FName *)(local_1f0.AllocatorInstance.Data + uVar13 * 8);
  FVar14.Data = local_1f0.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar13 != iVar21) {
      local_1f8 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
    }
    if ((FName *)FVar14.Data == pFVar10) break;
    FVar3 = *(FName *)FVar14.Data;
    uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (local_98.Data.ArrayNum != local_98.NumFreeIndices) {
      FVar17.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar17.Data = local_58.Data;
      }
      uVar8 = *(uint *)(FVar17.Data + (ulonglong)(local_50 - 1 & FVar3.Number + uVar8) * 4);
      while (uVar8 != 0xffffffff) {
        pFVar23 = (FName *)(local_98.Data.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x38);
        if (*pFVar23 == FVar3) {
          if (pFVar23 != (FName *)0x0) goto LAB_145ffcdc3;
          goto LAB_145ffcd9d;
        }
        uVar8 = pFVar23[6].ComparisonIndex.Value;
      }
    }
    pFVar23 = (FName *)0x0;
LAB_145ffcd9d:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_145ffcdc3:
    if ((char)pFVar23[4].ComparisonIndex.Value == '\0') {
LAB_145ffce11:
      FVar3 = *(FName *)FVar14.Data;
      local_160 = FVar3;
      if (local_98.Data.ArrayNum != local_98.NumFreeIndices) {
        uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
        TSet<TTuple<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo>,TDefaultMapHashableKeyFuncs<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>(&local_98,FVar3.Number + uVar8,&local_160);
      }
    }
    else {
      if ((pFVar23[1] == (FName)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(int *)((longlong)pFVar23[1] + 8) < 1) &&
         (local_168 = (FName *)FVar14.Data,
         bVar7 = `FSlateRHIResourceManager::CreateTextures'::__l19::<lambda_2>::operator()
                           (&local_168), !bVar7)) goto LAB_145ffce11;
    }
    uVar13 = local_1f0._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 8;
  }
  local_158 = local_1f7;
  local_150 = &local_158;
  if (0 < local_98.Data.ArrayNum - local_98.NumFreeIndices) {
    TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact(&local_98);
    FVar14.Data = local_98.Data.AllocatorInstance.Data;
    iVar21 = local_98.Data.ArrayNum - local_98.NumFreeIndices;
    if ((iVar21 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,_FSlateRHIResourceManager::CreateTextures_::__l2::FLoadTextureInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,_FSlateRHIResourceManager::CreateTextures_::__l2::FLoadTextureInfo>,TDefaultMapHashableKeyFuncs<FName,_FSlateRHIResourceManager::CreateTextures_::__l2::FLoadTextureInfo,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,_FSlateRHIResourceManager::CreateTextures_::__l2::FLoadTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,_FSlateRHIResourceManager::CreateTextures_::__l2::FLoadTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_> *)FVar14.Data,iVar21,
               local_1f7[0],
               (FElementCompareClass<TSortableMapBase<FName,_private:_void___cdecl_FSlateRHIResourceManager::CreateTextures(TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FLoadTextureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,_private:_void___cdecl_FSlateRHIResourceManager::CreateTextures(TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_>_const_&)_::_2_::FLoadTextureInfo,0>_>::FValueComparisonClass<FCompareFNewTextureInfoByTextureSize>_>
                *)&local_150);
  }
  uVar8 = local_50;
  uVar13 = (ulonglong)local_50;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar8 != 0) {
    uVar9 = uVar8;
    if (uVar8 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_145ffcf1e;
      }
    }
    else {
LAB_145ffcf1e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,4);
    }
    if (0 < (int)uVar8) {
      uVar18 = 0;
      do {
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)uVar8 - 1U & uVar18;
        uVar18 = uVar18 + 1;
        *(undefined4 *)(FVar14.Data + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  uVar8 = (uint)local_180;
  if (local_50 != 0) {
    local_1d0 = 0;
    iStack_1bc = 0;
    iStack_1b8 = 0;
    pTStack_1c8 = &local_98.AllocationFlags;
    uStack_1cc = uVar8;
    if (local_98.AllocationFlags.NumBits != 0) {
      FVar24 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
      if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar9 = *(uint *)FVar24;
      iStack_1b8 = 0;
      local_1d0 = 0;
      while (uVar9 == 0) {
        iStack_1b8 = iStack_1b8 + 0x20;
        lVar19 = (longlong)local_1d0;
        local_1d0 = local_1d0 + 1;
        if ((int)(local_98.AllocationFlags.NumBits + -1 +
                 (local_98.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1d0)
        goto LAB_145ffd02e;
        uVar9 = *(uint *)((uchar *)((longlong)FVar24 + 4) + lVar19 * 4);
      }
      uStack_1cc = -uVar9 & uVar9;
      uVar13 = (ulonglong)uStack_1cc * 2 + 1;
      lVar19 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iStack_1bc = iStack_1b8 + -1 + (int)lVar19;
      if (local_98.AllocationFlags.NumBits < iStack_1bc) {
LAB_145ffd02e:
        iStack_1bc = local_98.AllocationFlags.NumBits;
      }
    }
    local_1c0 = 0xffffffff;
    local_1b0 = &local_98;
    TStack_1a8._padding_._0_4_ = local_1d0;
    TStack_1a8._padding_._4_4_ = uStack_1cc;
    TStack_1a8.UnvisitedBitMask = 0xffffffff;
    TStack_1a8.CurrentBitIndex = iStack_1bc;
    TStack_1a8._28_4_ = uStack_1b4;
    TStack_1a8.BaseBitIndex = iStack_1b8;
    TStack_1a8.Array = pTStack_1c8;
    if (iStack_1bc < local_98.AllocationFlags.NumBits) {
      do {
        iVar21 = TStack_1a8.CurrentBitIndex;
        pFVar20 = (local_1b0->Data).AllocatorInstance.Data +
                  (longlong)TStack_1a8.CurrentBitIndex * 0x38;
        uVar4 = *(undefined8 *)pFVar20;
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar9 = local_50 - 1 & uVar9 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)(pFVar20 + 0x34) = uVar9;
        FVar14.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar14.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pFVar20 + 0x30) = *(undefined4 *)(FVar14.Data + uVar13 * 4);
        *(int *)(FVar14.Data + uVar13 * 4) = iVar21;
        TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
      } while (TStack_1a8.CurrentBitIndex < (TStack_1a8.Array)->NumBits);
    }
  }
  iVar21 = 0;
  TStack_1a8.BaseBitIndex = 0;
  TStack_130.CurrentBitIndex = 0;
  if (local_98.AllocationFlags.NumBits != 0) {
    FVar24 = (ForElementType<unsigned_int>)&local_98.AllocationFlags;
    if (local_98.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_98.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar9 = *(uint *)FVar24;
    while (uVar9 == 0) {
      lVar19 = (longlong)iVar21;
      TStack_1a8.BaseBitIndex = TStack_1a8.BaseBitIndex + 0x20;
      iVar21 = iVar21 + 1;
      TStack_130.CurrentBitIndex = local_98.AllocationFlags.NumBits;
      if ((int)(local_98.AllocationFlags.NumBits + -1 +
               (local_98.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_145ffd15d;
      uVar9 = *(uint *)((uchar *)((longlong)FVar24 + 4) + lVar19 * 4);
    }
    uVar8 = -uVar9 & uVar9;
    uVar13 = (ulonglong)uVar8 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    TStack_130.CurrentBitIndex = (int)lVar19 + -1 + TStack_1a8.BaseBitIndex;
    if (local_98.AllocationFlags.NumBits < TStack_130.CurrentBitIndex) {
      TStack_130.CurrentBitIndex = local_98.AllocationFlags.NumBits;
    }
  }
LAB_145ffd15d:
  local_1b0 = &local_98;
  TStack_1a8.Array = &local_98.AllocationFlags;
  TStack_1a8._padding_ = CONCAT44(uVar8,iVar21);
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  uVar8 = TStack_1a8.UnvisitedBitMask;
  TStack_1a8.UnvisitedBitMask = 0xffffffff;
  TStack_1a8._28_4_ = local_9c;
  TStack_130._padding_ = TStack_1a8._padding_;
  TStack_130.BaseBitIndex = TStack_1a8.BaseBitIndex;
  TStack_130._28_4_ = local_9c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  local_138 = local_1b0;
  TStack_130.Array = TStack_1a8.Array;
  TStack_1a8.CurrentBitIndex = TStack_130.CurrentBitIndex;
  if (TStack_130.CurrentBitIndex < local_98.AllocationFlags.NumBits) {
    local_f0 = &local_148;
    local_e8 = &local_140;
    do {
      pFVar20 = (local_138->Data).AllocatorInstance.Data;
      local_148 = *(FName *)(pFVar20 + (longlong)TStack_130.CurrentBitIndex * 0x38);
      local_140 = GenerateTextureResource
                            (this,(FNewTextureInfo *)
                                  (pFVar20 + (longlong)TStack_130.CurrentBitIndex * 0x38 + 8),
                             local_148);
      TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FSlateShaderResourceProxy_*_const_&>_>
                ((TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
                  *)&this->_padding_,&local_178,(bool *)&local_f0);
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
      uVar8 = TStack_1a8.UnvisitedBitMask;
    } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
  }
  TStack_1a8.UnvisitedBitMask = uVar8;
  if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,`FSlateRHIResourceManager::CreateTextures'::__l2::FLoadTextureInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,_FSlateRHIResourceManager::CreateTextures_::__l2::FLoadTextureInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CreateVectorGraphicsCache @ 145ffd980

void __thiscall FSlateRHIResourceManager::CreateVectorGraphicsCache(FSlateRHIResourceManager *this)

{
  TUniquePtr<FSlateVectorGraphicsCache,TDefaultDelete<FSlateVectorGraphicsCache>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlateVectorGraphicsCache *pFVar5;
  FSlateVectorGraphicsCache *pFVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong local_28;
  TSharedPtr<ISlateTextureAtlasFactory,1> local_20;
  
  pTVar4 = ::operator_new(0x18);
  pFVar6 = (FSlateVectorGraphicsCache *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSlateRHITextureAtlasFactory___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)&___7FSlateRHITextureAtlasFactory__6B_;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pFVar5 = ::operator_new(0xc0);
  if (pFVar5 != (FSlateVectorGraphicsCache *)0x0) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_20.Object = (ISlateTextureAtlasFactory *)pTVar8;
    local_20.SharedReferenceCount.ReferenceController = pTVar4;
    pFVar6 = FSlateVectorGraphicsCache::FSlateVectorGraphicsCache(pFVar5,&local_20);
  }
  pTVar1 = &this->VectorGraphicsCache;
  if (pTVar1 == (TUniquePtr<FSlateVectorGraphicsCache,TDefaultDelete<FSlateVectorGraphicsCache>_> *)
                &local_28) {
    if (pFVar6 == (FSlateVectorGraphicsCache *)0x0) goto LAB_145ffda83;
    puVar7 = (undefined8 *)pFVar6->_padding_;
  }
  else {
    pFVar5 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar6;
    if (pFVar5 == (FSlateVectorGraphicsCache *)0x0) goto LAB_145ffda83;
    puVar7 = (undefined8 *)pFVar5->_padding_;
    pFVar6 = pFVar5;
  }
  (*(code *)*puVar7)(pFVar6,1);
LAB_145ffda83:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// DeleteBrushResourcesCommand @ 145ffe090

void __thiscall
FSlateRHIResourceManager::DeleteBrushResourcesCommand(FSlateRHIResourceManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  FlushRenderingCommands();
  lpCriticalSection = &this->ResourceCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DeleteUObjectBrushResources(this);
                    /* WARNING: Could not recover jumptable at 0x000145ffe0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DeleteResources @ 145ffe0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateRHIResourceManager::DeleteResources(FSlateRHIResourceManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  FName FVar4;
  FSlateVectorGraphicsCache *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateNumNonAtlasedTextures> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_SlateNumTextureAtlases> FVar13;
  FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures> FVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FStatMessage local_78;
  FStatMessage local_68;
  FStatMessage local_58;
  
  lpCriticalSection = &this->ResourceCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar17 = 0;
  uVar16 = uVar17;
  uVar18 = uVar17;
  if (0 < (this->PrecachedTextureAtlases).ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar8 = 0;
      if ((int)uVar15 < (this->PrecachedTextureAtlases).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar2 = *(undefined8 **)((this->PrecachedTextureAtlases).AllocatorInstance.Data + uVar18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar18 = uVar18 + 8;
    } while ((int)(uVar15 + 1) < (this->PrecachedTextureAtlases).ArrayNum);
  }
  uVar16 = uVar17;
  if (0 < (this->NonAtlasedTextures).ArrayNum) {
    do {
      uVar15 = (uint)uVar17;
      uVar8 = 0;
      if ((int)uVar15 < (this->NonAtlasedTextures).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar3 = *(longlong **)((this->NonAtlasedTextures).AllocatorInstance.Data + uVar16);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,1);
      }
      uVar17 = (ulonglong)(uVar15 + 1);
      uVar16 = uVar16 + 8;
    } while ((int)(uVar15 + 1) < (this->NonAtlasedTextures).ArrayNum);
  }
  FVar10 = StatPtr_STAT_SlateNumNonAtlasedTextures;
  if (StatPtr_STAT_SlateNumNonAtlasedTextures ==
      (FThreadSafeStaticStat<FStat_STAT_SlateNumNonAtlasedTextures>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_SlateNumNonAtlasedTextures");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateNumNonAtlasedTextures>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumNonAtlasedTextures,
                        *pFVar9,L"Num Non-Atlased Textures","STATGROUP_SlateMemory",
                        "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar4 = *(FName *)FVar10;
  local_res8 = FVar4;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_78.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
    local_78.StatData.Pad[0] = '\0';
    local_78.StatData.Pad[1] = '\0';
    local_78.StatData.Pad[2] = '\0';
    local_78.StatData.Pad[3] = '\0';
    local_78.StatData.Pad[4] = '\0';
    local_78.StatData.Pad[5] = '\0';
    local_78.StatData.Pad[6] = '\0';
    local_78.StatData.Pad[7] = '\0';
    local_res8 = FVar4;
    local_78.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,&local_78);
    FStatsTrace::Set(&local_res8,0);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  FVar13 = StatPtr_STAT_SlateNumTextureAtlases;
  if (StatPtr_STAT_SlateNumTextureAtlases ==
      (FThreadSafeStaticStat<FStat_STAT_SlateNumTextureAtlases>)0x0) {
    pFVar9 = ::FName::FName(&local_88,"STAT_SlateNumTextureAtlases");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_SlateNumTextureAtlases>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumTextureAtlases,*pFVar9,
                        L"Num Texture Atlases","STATGROUP_SlateMemory","STATCAT_Advanced",
                        L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar13;
  local_res8 = FVar4;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_68.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
    local_68.StatData.Pad[0] = '\0';
    local_68.StatData.Pad[1] = '\0';
    local_68.StatData.Pad[2] = '\0';
    local_68.StatData.Pad[3] = '\0';
    local_68.StatData.Pad[4] = '\0';
    local_68.StatData.Pad[5] = '\0';
    local_68.StatData.Pad[6] = '\0';
    local_68.StatData.Pad[7] = '\0';
    local_res10 = FVar4;
    local_68.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,&local_68);
    FStatsTrace::Set(&local_res10,0);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  FVar14 = StatPtr_STAT_SlateNumDynamicTextures;
  if (StatPtr_STAT_SlateNumDynamicTextures ==
      (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)0x0) {
    pFVar9 = ::FName::FName(&local_80,"STAT_SlateNumDynamicTextures");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumDynamicTextures,*pFVar9,
                        L"Num Dynamic Textures","STATGROUP_SlateMemory","STATCAT_Advanced",
                        L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar14;
  local_res8 = FVar4;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    local_58.NameAndInfo.Number = FVar4.Number & 0xffff8fff | 0x8000;
    local_58.StatData.Pad[0] = '\0';
    local_58.StatData.Pad[1] = '\0';
    local_58.StatData.Pad[2] = '\0';
    local_58.StatData.Pad[3] = '\0';
    local_58.StatData.Pad[4] = '\0';
    local_58.StatData.Pad[5] = '\0';
    local_58.StatData.Pad[6] = '\0';
    local_58.StatData.Pad[7] = '\0';
    local_res18 = FVar4;
    local_58.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar11,&local_58);
    FStatsTrace::Set(&local_res18,0);
    if (pFVar11->ScopeCount == 0) {
      FThreadStats::Flush(pFVar11,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar11,false,false);
    }
  }
  piVar1 = &(this->PrecachedTextureAtlases).ArrayMax;
  (this->PrecachedTextureAtlases).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PrecachedTextureAtlases).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->NonAtlasedTextures).ArrayMax;
  (this->NonAtlasedTextures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->NonAtlasedTextures).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedPtr<FSlateDynamicTextureResource,1>,int>
            ((TSharedPtr<FSlateDynamicTextureResource,1> *)
             (this->DynamicTextureFreeList).AllocatorInstance.Data,
             (this->DynamicTextureFreeList).ArrayNum);
  piVar1 = &(this->DynamicTextureFreeList).ArrayMax;
  (this->DynamicTextureFreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->DynamicTextureFreeList).AllocatorInstance,0,piVar1);
  }
  pFVar5 = (this->VectorGraphicsCache).Ptr;
  if (pFVar5 != (FSlateVectorGraphicsCache *)0x0) {
    (this->VectorGraphicsCache).Ptr = (FSlateVectorGraphicsCache *)0x0;
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  FSlateShaderResourceManager::ClearTextureMap((FSlateShaderResourceManager *)&this->_padding_);
  DeleteUObjectBrushResources(this);
                    /* WARNING: Could not recover jumptable at 0x000145ffe712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// DeleteUObjectBrushResources @ 145ffe730

void __thiscall
FSlateRHIResourceManager::DeleteUObjectBrushResources(FSlateRHIResourceManager *this)

{
  int *piVar1;
  
  FDynamicResourceMap::Empty(&this->DynamicResourceMap);
  DestructItems<TSharedPtr<FSlateMaterialResource,1>,int>
            ((TSharedPtr<FSlateMaterialResource,1> *)
             (this->MaterialResourceFreeList).AllocatorInstance.Data,
             (this->MaterialResourceFreeList).ArrayNum);
  piVar1 = &(this->MaterialResourceFreeList).ArrayMax;
  (this->MaterialResourceFreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MaterialResourceFreeList).AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedPtr<FSlateUTextureResource,1>,int>
            ((TSharedPtr<FSlateUTextureResource,1> *)(this->UTextureFreeList).AllocatorInstance.Data
             ,(this->UTextureFreeList).ArrayNum);
  piVar1 = &(this->UTextureFreeList).ArrayMax;
  (this->UTextureFreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->UTextureFreeList).AllocatorInstance,0,piVar1);
  }
  return;
}

// FindOrCreateDynamicTextureResource @ 146008a80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FSlateShaderResourceProxy * __thiscall
FSlateRHIResourceManager::FindOrCreateDynamicTextureResource
          (FSlateRHIResourceManager *this,FSlateBrush *param_1)

{
  UObject *pUVar1;
  TObjectPtr<UObject>_u_0 TVar2;
  code *pcVar3;
  TObjectPtr<UObject>_u_0 this_00;
  FName FVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  UClass *pUVar8;
  TSharedPtr<FSlateUTextureResource,1> *pTVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures> FVar11;
  FTextureResource *pFVar12;
  FSlateAtlasedTextureResource *pFVar13;
  longlong lVar14;
  FSlateShaderResourceProxy *pFVar15;
  UTexture2D *pUVar16;
  FUObjectItem *this_01;
  TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *pTVar17;
  FString *pFVar18;
  FSlateTextureData *this_02;
  FSlateAtlasedTextureResource *pFVar19;
  uint uVar20;
  ForElementType<FSetElementId> FVar21;
  FSlateUTextureResource *this_03;
  FSlateDynamicTextureResource *pFVar22;
  FSharedReferencer<1> FVar23;
  uint local_res20 [2];
  TObjectPtr<UObject>_u_0 local_1a8;
  FName local_1a0;
  FWeakObjectPtr local_198;
  TSharedPtr<FSlateAtlasedTextureResource,1> local_190;
  uint local_180;
  FWeakObjectPtr local_17c;
  TSharedPtr<FSlateUTextureResource,1> local_170;
  undefined8 local_160;
  undefined8 local_158;
  FSlateDynamicTextureResource *local_150;
  FSharedReferencer<1> FStack_148;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_140;
  TSharedPtr<FSlateDynamicTextureResource,1> local_130;
  TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TSharedPtr<FSlateAtlasedTextureResource,1>_&&>
  local_120;
  FWeakObjectPtr local_110;
  TRawPtrProxy<FSlateAtlasedTextureResource> local_108;
  UTexture *local_100;
  FName *local_f8;
  TRawPtrProxy<FSlateTextureData> local_f0;
  FSlateAtlasedTextureResource *local_e8;
  TReferenceControllerBase<1> *local_e0;
  FWeakObjectPtr *local_d8;
  FSlateAtlasedTextureResource **local_d0;
  FName *local_c8;
  TObjectPtr<UObject>_u_0 *local_c0;
  FName local_b8;
  TSharedPtr<FSlateUTextureResource,1> local_b0;
  FString local_a0;
  TSharedRef<FSlateTextureData,1> local_88;
  TSharedRef<FSlateTextureData,1> local_78;
  FSlateAtlasData local_68;
  
  pFVar19 = (FSlateAtlasedTextureResource *)0x0;
  local_160 = 0;
  local_1a0 = param_1->ResourceName;
  if ((local_1a0 == (FName)0x0) &&
     (pUVar1 = (param_1->ResourceObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    local_1a0.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_1a0.Number = *(uint *)&pUVar1->field_0x1c;
  }
  bVar5 = ::FName::IsWithinBounds(local_1a0.ComparisonIndex.Value);
  if (!bVar5) {
    return (FSlateShaderResourceProxy *)0x0;
  }
  local_158 = 0;
  if (local_1a0 == (FName)0x0) {
    return (FSlateShaderResourceProxy *)0x0;
  }
  TVar2.DebugPtr = (param_1->ResourceObject).field0_0x0.DebugPtr;
  local_1a8.DebugPtr = TVar2.DebugPtr;
  if ((UTexture *)TVar2.DebugPtr == (UTexture *)0x0) {
    pTVar17 = TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                      *)&this->DynamicResourceMap,local_1a0);
    if (pTVar17 == (TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *)0x0) {
      pFVar22 = (FSlateDynamicTextureResource *)0x0;
      local_150 = (FSlateDynamicTextureResource *)0x0;
      FStack_148.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FVar23.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar17->field_0x10;
      pFVar22 = *(FSlateDynamicTextureResource **)&pTVar17->field_0x8;
      if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar23.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FStack_148.ReferenceController = FVar23.ReferenceController;
      if (pFVar22 != (FSlateDynamicTextureResource *)0x0) goto LAB_146009217;
    }
    FVar23.ReferenceController = FStack_148.ReferenceController;
    local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.ArrayNum = 0;
    local_140.ArrayMax = 0;
    pcVar3 = *(code **)(this->_padding_ + 0x28);
    pFVar18 = ::FName::ToString(&local_1a0,&local_a0);
    cVar6 = (*pcVar3)(this,&local_1a0,pFVar18,&local_180,local_res20,&local_140);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    FVar4 = local_1a0;
    if (cVar6 != '\0') {
      this_02 = ::operator_new(0x20);
      if (this_02 != (FSlateTextureData *)0x0) {
        pFVar19 = (FSlateAtlasedTextureResource *)
                  FSlateTextureData::FSlateTextureData
                            (this_02,local_180,local_res20[0],GPixelFormats[2].BlockBytes,&local_140
                            );
      }
      local_f0.Object = (FSlateTextureData *)pFVar19;
      TSharedRef<FSlateTextureData,1>::TSharedRef<FSlateTextureData,1><FSlateTextureData>
                (&local_88,&local_f0);
      local_78.Object = local_88.Object;
      local_78.SharedReferenceCount.ReferenceController =
           local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      MakeDynamicTextureResource(this,&local_130,FVar4,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      local_150 = local_130.Object;
      local_130.Object = (FSlateDynamicTextureResource *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_148,&local_130.SharedReferenceCount);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.SharedReferenceCount.ReferenceController);
      pFVar22 = local_150;
      FVar23.ReferenceController = FStack_148.ReferenceController;
    }
    if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    local_170.SharedReferenceCount.ReferenceController = FVar23.ReferenceController;
    if (pFVar22 != (FSlateDynamicTextureResource *)0x0) {
LAB_146009217:
      pFVar15 = pFVar22->Proxy;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar23.ReferenceController);
      return pFVar15;
    }
  }
  else {
    pUVar8 = Z_Construct_UClass_UTexture_NoRegister();
    this_00 = local_1a8;
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&(TVar2.DebugPtr)->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TVar2.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      pFVar13 = pFVar19;
      if ((UTexture *)local_1a8.DebugPtr != (UTexture *)0x0) {
        pUVar8 = Z_Construct_UClass_USlateTextureAtlasInterface_NoRegister();
        pFVar13 = UObjectBaseUtility::GetInterfaceAddress
                            ((UObjectBaseUtility *)this_00.DebugPtr,pUVar8);
      }
      if (pFVar13 == (FSlateAtlasedTextureResource *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          atexit(`FSlateRHIResourceManager::FindOrCreateDynamicTextureResource'::__l40::
                 _dynamic_atexit_destructor_for__FailedTextures__);
          _Init_thread_footer(&::_TSS0);
        }
        uVar20 = ((uint)((ulonglong)local_1a8.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_1a8.DebugPtr >> 4)) * -0x7a143595;
        uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
        if (FailedTextures.Elements._8_4_ != FailedTextures.Elements._52_4_) {
          FVar21 = (ForElementType<FSetElementId>)0x154bedfa8;
          if (FailedTextures.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar21 = FailedTextures.Hash.SecondaryData;
          }
          for (iVar7 = *(int *)((longlong)FVar21 +
                               (ulonglong)(FailedTextures.HashSize - 1U & (uVar20 >> 0x10 ^ uVar20))
                               * 4); iVar7 != -1;
              iVar7 = *(int *)(FailedTextures.Elements._0_8_ + 8 + (longlong)iVar7 * 0x10)) {
            if (*(UTexture **)(FailedTextures.Elements._0_8_ + (longlong)iVar7 * 0x10) ==
                (UTexture *)local_1a8.DebugPtr) goto LAB_146009040;
          }
        }
        TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
        Emplace<UObject_*_const_&>
                  (&FailedTextures,(UObject **)((longlong)&local_120.Key + 4),(bool *)&local_1a8);
        if (((UTexture *)local_1a8.DebugPtr == (UTexture *)0x0) ||
           (((uint)*(longlong *)&(local_1a8.DebugPtr)->field_0x8 >> 0x1e & 1) != 0)) {
          local_f8 = &local_1a0;
          `FSlateRHIResourceManager::FindOrCreateDynamicTextureResource'::__l48::<lambda_2>::
          operator()(&local_f8);
        }
        else {
          local_c8 = &local_1a0;
          local_c0 = &local_1a8;
          `FSlateRHIResourceManager::FindOrCreateDynamicTextureResource'::__l46::<lambda_1>::
          operator()(&local_c8);
        }
LAB_146009040:
        if (this->BadResourceTexture != (UTexture *)0x0) {
          return (FSlateShaderResourceProxy *)0x0;
        }
        pUVar16 = FImageUtils::CreateCheckerboardTexture((FColor)0xffff00ff,(FColor)0xffffff00,0x20)
        ;
        this->BadResourceTexture = (UTexture *)pUVar16;
        this_01 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&pUVar16->_padding_ + 4));
        FUObjectItem::SetRootFlags(this_01,RootSet);
        return (FSlateShaderResourceProxy *)0x0;
      }
      (**(code **)(pFVar13->_padding_ + 0x10))(pFVar13,&local_68);
      local_120.Value = (TSharedPtr<FSlateAtlasedTextureResource,1> *)local_68.AtlasTexture;
      if (local_68.AtlasTexture == (UTexture *)0x0) {
        return (FSlateShaderResourceProxy *)0x0;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_68.AtlasTexture);
      }
      local_198.ObjectIndex = 0;
      local_198.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UTexture *)local_120.Value != (UTexture *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_120.Value);
      }
      FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_120.Value);
      local_110 = local_198;
      iVar7 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                        ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
                          *)&(this->DynamicResourceMap).ObjectMap,
                         local_198.ObjectSerialNumber ^ local_198.ObjectIndex,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_110);
      if ((iVar7 == -1) ||
         (lVar14 = (longlong)iVar7 * 0x20 + *(longlong *)&(this->DynamicResourceMap).ObjectMap,
         lVar14 == 0)) {
        local_190.Object = (FSlateAtlasedTextureResource *)0x0;
        local_190.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_190.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar14 + 0x10);
        pFVar13 = *(FSlateAtlasedTextureResource **)(lVar14 + 8);
        if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_190.Object = pFVar13;
        if (pFVar13 != (FSlateAtlasedTextureResource *)0x0) goto LAB_146008f10;
      }
      pFVar13 = ::operator_new(0x80);
      if (pFVar13 != (FSlateAtlasedTextureResource *)0x0) {
        FSlateBaseUTextureResource::FSlateBaseUTextureResource
                  ((FSlateBaseUTextureResource *)pFVar13,local_68.AtlasTexture);
        pFVar13->_padding_ = (longlong)&___7FSlateAtlasedTextureResource__6B_;
        *(undefined8 *)&(pFVar13->ProxyMap).field_0x0 = 0;
        *(undefined8 *)&(pFVar13->ProxyMap).field_0x8 = 0;
        *(undefined8 *)&(pFVar13->ProxyMap).field_0x20 = 0;
        *(undefined4 *)&(pFVar13->ProxyMap).field_0x28 = 0;
        *(undefined4 *)&(pFVar13->ProxyMap).field_0x2c = 0x80;
        *(undefined4 *)&(pFVar13->ProxyMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pFVar13->ProxyMap).field_0x34 = 0;
        *(undefined8 *)&(pFVar13->ProxyMap).field_0x40 = 0;
        *(undefined4 *)&(pFVar13->ProxyMap).field_0x48 = 0;
        pFVar19 = pFVar13;
      }
      local_108.Object = pFVar19;
      TSharedPtr<FSlateAtlasedTextureResource,1>::operator=<FSlateAtlasedTextureResource>
                (&local_190,&local_108);
      pFVar13 = local_190.Object;
      if ((local_190.Object == (FSlateAtlasedTextureResource *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FSlateShaderResourceProxy *)(*pcVar3)();
        return pFVar15;
      }
      FVar23.ReferenceController = local_190.SharedReferenceCount.ReferenceController;
      if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar13 == (FSlateAtlasedTextureResource *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FSlateShaderResourceProxy *)(*pcVar3)();
        return pFVar15;
      }
      if (local_68.AtlasTexture != (UTexture *)0x0) {
        local_e8 = pFVar13;
        local_e0 = FVar23.ReferenceController;
        if (FVar23.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar23.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar23.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_68.AtlasTexture);
        }
        local_17c.ObjectIndex = 0;
        local_17c.ObjectSerialNumber = 0;
        local_100 = local_68.AtlasTexture;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_68.AtlasTexture);
        }
        FWeakObjectPtr::operator=(&local_17c,(FObjectPtr)&local_100);
        local_d8 = &local_17c;
        local_d0 = &local_e8;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TSharedPtr<FSlateAtlasedTextureResource,1>_&&>_>
                  ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSharedPtr<FSlateAtlasedTextureResource,1>,0>,FDefaultSetAllocator>
                    *)&(this->DynamicResourceMap).ObjectMap,&local_120,(bool *)&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar23.ReferenceController);
      if ((pFVar13 == (FSlateAtlasedTextureResource *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FSlateShaderResourceProxy *)(*pcVar3)();
        return pFVar15;
      }
LAB_146008f10:
      pFVar15 = FSlateAtlasedTextureResource::FindOrCreateAtlasedProxy
                          (pFVar13,local_1a8.DebugPtr,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.SharedReferenceCount.ReferenceController);
      return pFVar15;
    }
    FDynamicResourceMap::GetUTextureResource
              (&this->DynamicResourceMap,&local_170,(UTexture *)TVar2.DebugPtr);
    this_03 = local_170.Object;
    if (local_170.Object == (FSlateUTextureResource *)0x0) {
      pTVar9 = MakeDynamicUTextureResource(this,&local_b0,(UTexture *)TVar2.DebugPtr);
      if (&local_170 != pTVar9) {
        local_170.Object = pTVar9->Object;
        pTVar9->Object = (FSlateUTextureResource *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_170.SharedReferenceCount,&pTVar9->SharedReferenceCount);
        this_03 = local_170.Object;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
      if (this_03 == (FSlateUTextureResource *)0x0) goto LAB_14600922a;
      FVar11 = StatPtr_STAT_SlateNumDynamicTextures;
      if (StatPtr_STAT_SlateNumDynamicTextures ==
          (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)0x0) {
        pFVar10 = ::FName::FName(&local_b8,"STAT_SlateNumDynamicTextures");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumDynamicTextures,
                            *pFVar10,L"Num Dynamic Textures","STATGROUP_SlateMemory",
                            "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                            MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar11,Add,1,false);
    }
    if (((UTexture *)this_03->_padding_ != (UTexture *)0x0) &&
       (pFVar12 = UTexture::GetResource((UTexture *)this_03->_padding_),
       pFVar12 != (FTextureResource *)0x0)) {
      FSlateUTextureResource::UpdateTexture(this_03,(UTexture *)TVar2.DebugPtr);
      pFVar15 = this_03->Proxy;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.SharedReferenceCount.ReferenceController);
      return pFVar15;
    }
  }
LAB_14600922a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.SharedReferenceCount.ReferenceController);
  return (FSlateShaderResourceProxy *)0x0;
}

// GenerateTextureResource @ 146009d30

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateShaderResourceProxy * __thiscall
FSlateRHIResourceManager::GenerateTextureResource
          (FSlateRHIResourceManager *this,FNewTextureInfo *param_1,FName param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  FSlateTextureData *pFVar5;
  FName FVar6;
  TVector2<float>_u_0 *pTVar7;
  FSlateTextureAtlas *this_00;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FSlateShaderResourceProxy *pFVar12;
  TVector2<float>_u_0 TVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_SlateNumTextureAtlases> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FSlateTextureAtlasRHI *this_01;
  TVector2<float>_u_0 TVar18;
  longlong lVar19;
  FSlateTexture2DRHIRef *this_02;
  FThreadSafeStaticStat<FStat_STAT_SlateNumNonAtlasedTextures> FVar20;
  ETextureCreateFlags EVar21;
  float fVar22;
  TVector2<float>_u_0 TVar23;
  uint uVar24;
  TVector2<float>_u_0 TVar25;
  TArray<FSlateTextureAtlasRHI_*,TSizedDefaultAllocator<32>_> *pTVar26;
  TArray<FSlateTexture2DRHIRef_*,TSizedDefaultAllocator<32>_> *pTVar27;
  TVector2<float>_u_0 local_b8;
  TVector2<float>_u_0 local_b0 [5];
  FName local_88;
  FName local_80;
  FStatMessage local_78;
  FStatMessage local_68;
  TSharedPtr<FSlateTextureData,1> local_58;
  FName local_48;
  FName local_40;
  
  if (((param_1->TextureData).Object == (FSlateTextureData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
    return pFVar12;
  }
  pFVar5 = (param_1->TextureData).Object;
  uVar3 = pFVar5->Width;
  if ((pFVar5 == (FSlateTextureData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
    return pFVar12;
  }
  uVar4 = ((param_1->TextureData).Object)->Height;
  if (param_1->bShouldAtlas == false) {
    TVar13 = (TVector2<float>_u_0)::operator_new(0x30);
    TVar18 = (TVector2<float>_u_0)0x0;
    TVar23 = TVar18;
    if (TVar13 != (TVector2<float>_u_0)0x0) {
      *(undefined8 *)TVar13 = 0;
      *(undefined4 *)((longlong)TVar13 + 8) = 0x3f800000;
      *(undefined4 *)((longlong)TVar13 + 0xc) = 0x3f800000;
      *(undefined8 *)((longlong)TVar13 + 0x10) = 0;
      *(undefined8 *)((longlong)TVar13 + 0x18) = 0;
      *(undefined8 *)((longlong)TVar13 + 0x20) = 0;
      *(undefined8 *)((longlong)TVar13 + 0x28) = 0;
      TVar23 = TVar13;
    }
    this_02 = ::operator_new(0x70);
    local_b0[0] = TVar18;
    if (this_02 != (FSlateTexture2DRHIRef *)0x0) {
      EVar21 = ShaderResource;
      if (param_1->bSrgb != false) {
        EVar21 = SRGB|ShaderResource;
      }
      local_58.Object = (param_1->TextureData).Object;
      local_58.SharedReferenceCount.ReferenceController =
           (param_1->TextureData).SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b0[0] = (TVector2<float>_u_0)
                    FSlateTexture2DRHIRef::FSlateTexture2DRHIRef
                              (this_02,uVar3,uVar4,PF_B8G8R8A8,&local_58,EVar21,false);
    }
    pTVar27 = &this->NonAtlasedTextures;
    pTVar7 = (TVector2<float>_u_0 *)(pTVar27->AllocatorInstance).Data;
    if (((pTVar7 <= local_b0) && (local_b0 < pTVar7 + (this->NonAtlasedTextures).ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
      return pFVar12;
    }
    iVar11 = (this->NonAtlasedTextures).ArrayNum;
    piVar1 = &(this->NonAtlasedTextures).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar27->AllocatorInstance,piVar1);
    }
    (this->NonAtlasedTextures).ArrayNum = iVar11 + 1;
    *(TVector2<float>_u_0 *)((pTVar27->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_b0[0]
    ;
    FVar20 = StatPtr_STAT_SlateNumNonAtlasedTextures;
    if (StatPtr_STAT_SlateNumNonAtlasedTextures ==
        (FThreadSafeStaticStat<FStat_STAT_SlateNumNonAtlasedTextures>)0x0) {
      pFVar14 = ::FName::FName(&local_40,"STAT_SlateNumNonAtlasedTextures");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_SlateNumNonAtlasedTextures>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumNonAtlasedTextures,
                          *pFVar14,L"Num Non-Atlased Textures","STATGROUP_SlateMemory",
                          "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar6 = *(FName *)FVar20;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_68.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_68.StatData.Pad[0] = '\x01';
      local_68.StatData.Pad[1] = '\0';
      local_68.StatData.Pad[2] = '\0';
      local_68.StatData.Pad[3] = '\0';
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_80 = FVar6;
      local_68.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_68);
      FStatsTrace::Add(&local_80,1);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
    if (local_b0[0] != (TVector2<float>_u_0)0x0) {
      TVar18._s_0 = local_b0[0]._s_0 + 0x28;
    }
    BeginInitResource((FRenderResource *)TVar18,(FRenderCommandPipe *)0x0);
    *(TVector2<float>_u_0 *)((longlong)TVar23 + 0x10) = local_b0[0];
    *(TVector2<float>_u_0 *)TVar23 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    ((TVector2<float>_u_0 *)((longlong)TVar23 + 8))->_s_0 =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::UnitVector.field0_0x0;
    *(ulonglong *)((longlong)TVar23 + 0x18) = CONCAT44(uVar4,uVar3);
    return (FSlateShaderResourceProxy *)TVar23;
  }
  TVar23 = (TVector2<float>_u_0)0x0;
  local_b8 = (TVector2<float>_u_0)0x0;
  TVar18 = TVar23;
  TVar13 = TVar23;
  TVar25 = TVar23;
  if (0 < (this->PrecachedTextureAtlases).ArrayNum) {
    do {
      if (TVar13 != (TVector2<float>_u_0)0x0) goto LAB_14600a160;
      fVar22 = TVar18._s_0.X;
      uVar10 = 0;
      if ((int)fVar22 < (this->PrecachedTextureAtlases).ArrayNum) {
        uVar10 = ~(uint)fVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
        return pFVar12;
      }
      local_b8 = *(TVector2<float>_u_0 *)
                  ((this->PrecachedTextureAtlases).AllocatorInstance.Data + (longlong)TVar25);
      if (((param_1->TextureData).Object == (FSlateTextureData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
        return pFVar12;
      }
      TVar13._s_0 = (TVector2<float>_u_0_s_0)
                    FSlateTextureAtlas::AddTexture
                              (local_b8._s_0,uVar3,uVar4,&((param_1->TextureData).Object)->Bytes);
      TVar18._0_4_ = (int)fVar22 + 1;
      TVar18._s_0.Y = 0.0;
      TVar25._s_0 = TVar25._s_0 + 8;
    } while ((int)TVar18._0_4_ < (this->PrecachedTextureAtlases).ArrayNum);
    if (TVar13 != (TVector2<float>_u_0)0x0) goto LAB_14600a160;
  }
  FVar15 = StatPtr_STAT_SlateNumTextureAtlases;
  if (StatPtr_STAT_SlateNumTextureAtlases ==
      (FThreadSafeStaticStat<FStat_STAT_SlateNumTextureAtlases>)0x0) {
    pFVar14 = ::FName::FName(&local_48,"STAT_SlateNumTextureAtlases");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_SlateNumTextureAtlases>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumTextureAtlases,*pFVar14,
                        L"Num Texture Atlases","STATGROUP_SlateMemory","STATCAT_Advanced",
                        L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar15;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    local_78.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_78.StatData.Pad[0] = '\x01';
    local_78.StatData.Pad[1] = '\0';
    local_78.StatData.Pad[2] = '\0';
    local_78.StatData.Pad[3] = '\0';
    local_78.StatData.Pad[4] = '\0';
    local_78.StatData.Pad[5] = '\0';
    local_78.StatData.Pad[6] = '\0';
    local_78.StatData.Pad[7] = '\0';
    local_88 = FVar6;
    local_78.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar16,&local_78);
    FStatsTrace::Add(&local_88,1);
    if (pFVar16->ScopeCount == 0) {
      FThreadStats::Flush(pFVar16,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar16,false,false);
    }
  }
  this_01 = ::operator_new(0x50);
  TVar18 = TVar23;
  if (this_01 != (FSlateTextureAtlasRHI *)0x0) {
    TVar18 = (TVector2<float>_u_0)
             FSlateTextureAtlasRHI::FSlateTextureAtlasRHI
                       (this_01,this->AtlasSize,this->AtlasSize,DilateBorder,false);
  }
  pTVar26 = &this->PrecachedTextureAtlases;
  pTVar7 = (TVector2<float>_u_0 *)(pTVar26->AllocatorInstance).Data;
  local_b8 = TVar18;
  if (((pTVar7 <= &local_b8) && (&local_b8 < pTVar7 + (this->PrecachedTextureAtlases).ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
    return pFVar12;
  }
  iVar11 = (this->PrecachedTextureAtlases).ArrayNum;
  piVar1 = &(this->PrecachedTextureAtlases).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar26->AllocatorInstance,piVar1);
  }
  (this->PrecachedTextureAtlases).ArrayNum = iVar11 + 1;
  *(TVector2<float>_u_0 *)((pTVar26->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_b8;
  iVar11 = (this->PrecachedTextureAtlases).ArrayNum;
  uVar24 = iVar11 - 1;
  uVar10 = 0;
  if ((int)uVar24 < iVar11) {
    uVar10 = ~uVar24 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
    return pFVar12;
  }
  this_00 = *(FSlateTextureAtlas **)
             ((pTVar26->AllocatorInstance).Data +
             (longlong)(this->PrecachedTextureAtlases).ArrayNum * 8 + -8);
  if (((param_1->TextureData).Object == (FSlateTextureData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
    return pFVar12;
  }
  TVar13 = (TVector2<float>_u_0)
           FSlateTextureAtlas::AddTexture
                     (this_00,uVar3,uVar4,&((param_1->TextureData).Object)->Bytes);
LAB_14600a160:
  if (((local_b8 == (TVector2<float>_u_0)0x0) || (TVar13 == (TVector2<float>_u_0)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Atlas && NewSlot",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                         ,0x233,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pFVar12 = (FSlateShaderResourceProxy *)(*pcVar8)();
    return pFVar12;
  }
  TVar18 = (TVector2<float>_u_0)::operator_new(0x30);
  if (TVar18 != (TVector2<float>_u_0)0x0) {
    *(longlong *)TVar18 = 0;
    *(undefined4 *)((longlong)TVar18 + 8) = 0x3f800000;
    *(undefined4 *)((longlong)TVar18 + 0xc) = 0x3f800000;
    *(longlong *)((longlong)TVar18 + 0x10) = 0;
    *(longlong *)((longlong)TVar18 + 0x18) = 0;
    *(longlong *)((longlong)TVar18 + 0x20) = 0;
    ((FAtlasedTextureSlot *)((longlong)TVar18 + 0x28))->_padding_ = 0;
    TVar23 = TVar18;
  }
  lVar19 = (**(code **)(*(longlong *)local_b8 + 0x18))();
  *(longlong *)((longlong)TVar23 + 0x10) = lVar19;
  bVar2 = *(byte *)((longlong)TVar13 + 0x20);
  *(longlong *)TVar23 =
       CONCAT44((float)(*(uint *)((longlong)TVar13 + 0x14) + (uint)bVar2) /
                (float)*(uint *)((longlong)local_b8 + 0x34),
                (float)(*(uint *)((longlong)TVar13 + 0x10) + (uint)bVar2) /
                (float)*(uint *)((longlong)local_b8 + 0x30));
  *(longlong *)((longlong)TVar23 + 8) =
       CONCAT44((float)(*(uint *)((longlong)TVar13 + 0x1c) + (uint)bVar2 * -2) /
                (float)*(uint *)((longlong)local_b8 + 0x34),
                (float)(*(uint *)((longlong)TVar13 + 0x18) + (uint)bVar2 * -2) /
                (float)*(uint *)((longlong)local_b8 + 0x30));
  *(longlong *)((longlong)TVar23 + 0x18) = CONCAT44(uVar4,uVar3);
  return (FSlateShaderResourceProxy *)TVar23;
}

// GetAtlasPageResource @ 14600c350

FSlateShaderResource * __thiscall
FSlateRHIResourceManager::GetAtlasPageResource(FSlateRHIResourceManager *this,int param_1)

{
  int iVar1;
  FSlateVectorGraphicsCache *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSlateShaderResource *pFVar6;
  uint uVar7;
  
  iVar1 = (this->PrecachedTextureAtlases).ArrayNum;
  if (iVar1 <= param_1) {
    pFVar2 = (this->VectorGraphicsCache).Ptr;
    uVar7 = param_1 - iVar1;
    uVar5 = 0;
    if ((int)uVar7 < (pFVar2->Atlases).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSlateShaderResource *)(*pcVar3)();
        return pFVar6;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014600c42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar6 = (FSlateShaderResource *)
             (**(code **)(**(longlong **)
                            ((pFVar2->Atlases).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) +
                         0x18))();
    return pFVar6;
  }
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSlateShaderResource *)(*pcVar3)();
      return pFVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014600c3bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar6 = (FSlateShaderResource *)
           (**(code **)(**(longlong **)
                          ((this->PrecachedTextureAtlases).AllocatorInstance.Data +
                          (longlong)param_1 * 8) + 0x18))();
  return pFVar6;
}

// GetBadResourceTexture @ 14600c540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTexture * __thiscall
FSlateRHIResourceManager::GetBadResourceTexture(FSlateRHIResourceManager *this)

{
  UTexture2D *pUVar1;
  FUObjectItem *this_00;
  
  if (this->BadResourceTexture == (UTexture *)0x0) {
    pUVar1 = FImageUtils::CreateCheckerboardTexture((FColor)0xffff00ff,(FColor)0xffffff00,0x20);
    this->BadResourceTexture = (UTexture *)pUVar1;
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
    return this->BadResourceTexture;
  }
  return this->BadResourceTexture;
}

// GetDynamicTextureResourceByName @ 14600c770

TSharedPtr<FSlateDynamicTextureResource,1> * __thiscall
FSlateRHIResourceManager::GetDynamicTextureResourceByName
          (FSlateRHIResourceManager *this,
          TSharedPtr<FSlateDynamicTextureResource,1> *__return_storage_ptr__,FName param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *pTVar2;
  
  pTVar2 = TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                   *)&this->DynamicResourceMap,param_1);
  if (pTVar2 == (TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FSlateDynamicTextureResource *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FSlateDynamicTextureResource **)&pTVar2->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetFontShaderResource @ 14600c810

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateShaderResource * __thiscall
FSlateRHIResourceManager::GetFontShaderResource
          (FSlateRHIResourceManager *this,int param_1,FSlateShaderResource *param_2,UObject *param_3
          )

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  
  if (param_3 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      param_2 = (FSlateShaderResource *)
                GetMaterialResource((FSlateRHIResourceManager *)&this[-1].VectorGraphicsCache,
                                    param_3,(FSlateBrush *)0x0,param_2,param_1);
    }
    else {
      pFVar4 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)param_3,&local_68,(UObject *)0x0,None);
      FStringFormatArg::FStringFormatArg(&local_58,pFVar4);
      local_res20 = *(FName *)(*(longlong *)&param_3->field_0x10 + 0x18);
      ::FName::ToString(&local_res20,&local_78);
      FStringFormatArg::FStringFormatArg(&local_38,&local_78);
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_98.AllocatorInstance.Data,&local_58,2);
      ::FString::FormatImpl
                (&local_88,
                 L"Cannot render object \'{0}\' as a material because it\'s of type {1} instead of type MaterialInterface. Make sure all materials passed for rendering in slate are Material Interfaces. This is caused by bad user data (a UObject that is not a UMaterialInterface) passed for rendering."
                 ,&local_98);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
      }
      if (GSlateCheckUObjectRenderResourcesShouldLogFatal == false) {
        local_res20 = (FName)&local_88;
        `FSlateRHIResourceManager::GetFontShaderResource'::__l32::<lambda_1>::operator()
                  (&local_res20);
      }
      else {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  return param_2;
}

// GetMaterialResource @ 14600cc60

FSlateMaterialResource * __thiscall
FSlateRHIResourceManager::GetMaterialResource
          (FSlateRHIResourceManager *this,UObject *param_1,FSlateBrush *param_2,
          FSlateShaderResource *param_3,int param_4)

{
  int *piVar1;
  TVector2<float>_u_0 TVar2;
  UMaterialInterface *pUVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  longlong lVar10;
  FSlateMaterialResource *pFVar11;
  FSlateMaterialResource *pFVar12;
  FString *pFVar13;
  undefined1 *puVar14;
  longlong lVar15;
  TVector2<float> *pTVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  TArray<TSharedPtr<FSlateMaterialResource,1>,TSizedDefaultAllocator<32>_> *pTVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  TSharedPtr<FSlateMaterialResource,1> local_f8;
  FMaterialKey local_e8;
  FWeakObjectPtr local_d0;
  FWeakObjectPtr local_c8;
  UObject *local_c0;
  FSlateMaterialResource *local_b8;
  TRawPtrProxy<FSlateMaterialResource> local_b0;
  UMaterialInterface *local_a8;
  undefined8 local_a0;
  FSharedReferencer<1> local_98;
  FSlateMaterialResource *local_90;
  TReferenceControllerBase<1> *local_88;
  FMaterialKey *local_80;
  FSlateMaterialResource **local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  if (param_1 == (UObject *)0x0) {
    pFVar13 = GetTypeName<UMaterialInterface>(&local_70);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar18);
  }
  pUVar9 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  iVar8 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar8) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
      &pUVar9->_padding_)) {
    pFVar13 = GetTypeName<UMaterialInterface>(&local_60);
    pwVar18 = L"";
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pFVar13 = GetFullNameForCastLogError<UObject_const_>(&local_50,param_1);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar18 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar18,pwVar17);
  }
  if (param_2 == (FSlateBrush *)0x0) {
    pTVar16 = &UE::Math::TVector2<float>::ZeroVector;
  }
  else {
    pTVar16 = (TVector2<float> *)&param_2->ImageSize;
  }
  TVar2 = (TVector2<float>_u_0)pTVar16->field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar11 = (FSlateMaterialResource *)0x0;
  local_d0.ObjectIndex = 0;
  local_d0.ObjectSerialNumber = 0;
  local_c0 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_c0);
  local_e8.Material.ObjectIndex = local_d0.ObjectIndex;
  local_e8.Material.ObjectSerialNumber = local_d0.ObjectSerialNumber;
  local_e8.MaskKey = param_4;
  local_e8.ImageSize.field0_0x0 = TVar2;
  uVar7 = ::GetTypeHash(&local_e8);
  if (*(int *)&(this->DynamicResourceMap).MaterialMap.field_0x8 !=
      *(int *)&(this->DynamicResourceMap).MaterialMap.field_0x34) {
    puVar14 = *(undefined1 **)&(this->DynamicResourceMap).MaterialMap.field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->DynamicResourceMap).MaterialMap.field_0x38;
    }
    iVar8 = *(int *)(puVar14 +
                    (ulonglong)
                    (*(int *)&(this->DynamicResourceMap).MaterialMap.field_0x48 - 1U & uVar7) * 4);
    if (iVar8 != -1) {
      lVar15 = *(longlong *)&(this->DynamicResourceMap).MaterialMap;
      do {
        lVar10 = (longlong)iVar8;
        if ((((*(int *)(lVar15 + lVar10 * 0x30) == local_e8.Material.ObjectIndex) &&
             (*(int *)(lVar15 + 4 + lVar10 * 0x30) == local_e8.Material.ObjectSerialNumber)) &&
            (local_e8.ImageSize.field0_0x0._s_0.X == *(float *)(lVar15 + 8 + lVar10 * 0x30))) &&
           ((local_e8.ImageSize.field0_0x0._s_0.Y == *(float *)(lVar15 + 0xc + lVar10 * 0x30) &&
            (*(int *)(lVar15 + 0x10 + lVar10 * 0x30) == local_e8.MaskKey)))) {
          if ((iVar8 != -1) && (lVar15 = (longlong)iVar8 * 0x30 + lVar15, lVar15 != 0)) {
            local_f8.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(lVar15 + 0x20);
            pFVar12 = *(FSlateMaterialResource **)(lVar15 + 0x18);
            if (local_f8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_f8.Object = pFVar12;
            if (pFVar12 == (FSlateMaterialResource *)0x0) goto LAB_14600cdf4;
            FSlateMaterialResource::UpdateMaterial
                      (pFVar12,(UMaterialInterface *)param_1,(TVector2<float>)TVar2,param_3);
            goto LAB_14600d16a;
          }
          break;
        }
        iVar8 = *(int *)(lVar15 + 0x28 + lVar10 * 0x30);
      } while (iVar8 != -1);
    }
  }
  local_f8.Object = (FSlateMaterialResource *)0x0;
  local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14600cdf4:
  if ((this->MaterialResourceFreeList).ArrayNum < 1) {
    pFVar12 = ::operator_new(0x50);
    if (pFVar12 != (FSlateMaterialResource *)0x0) {
      pFVar11 = FSlateMaterialResource::FSlateMaterialResource
                          (pFVar12,(UMaterialInterface *)param_1,(TVector2<float>)TVar2,param_3);
    }
    local_b0.Object = pFVar11;
    TSharedPtr<FSlateMaterialResource,1>::operator=<FSlateMaterialResource>(&local_f8,&local_b0);
    pFVar12 = local_f8.Object;
  }
  else {
    pTVar19 = &this->MaterialResourceFreeList;
    if (((this->MaterialResourceFreeList).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FSlateMaterialResource *)(*pcVar4)();
      return pFVar11;
    }
    pFVar20 = (pTVar19->AllocatorInstance).Data;
    lVar15 = (longlong)(this->MaterialResourceFreeList).ArrayNum;
    local_b8 = *(FSlateMaterialResource **)(pFVar20 + lVar15 * 0x10 + -0x10);
    local_98.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar20 + lVar15 * 0x10 + -8);
    *(undefined8 *)(pFVar20 + lVar15 * 0x10 + -8) = 0;
    *(undefined8 *)(pFVar20 + lVar15 * 0x10 + -0x10) = 0;
    iVar8 = (this->MaterialResourceFreeList).ArrayNum;
    pFVar20 = (pTVar19->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar20 + -8));
    iVar8 = (this->MaterialResourceFreeList).ArrayNum - iVar8;
    if (iVar8 != 0) {
      memmove(pFVar20 + -0x10,pFVar20,(longlong)iVar8 << 4);
    }
    piVar1 = &(this->MaterialResourceFreeList).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&pTVar19->AllocatorInstance,(this->MaterialResourceFreeList).ArrayNum,
               &(this->MaterialResourceFreeList).ArrayMax);
    local_f8.Object = local_b8;
    local_a0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_f8.SharedReferenceCount,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.ReferenceController);
    pFVar12 = local_f8.Object;
    if ((local_f8.Object == (FSlateMaterialResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FSlateMaterialResource *)(*pcVar4)();
      return pFVar11;
    }
    if ((pFVar12->SlateProxy != (FSlateShaderResourceProxy *)0x0) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5410622954222386270>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                           ,0x3a2,"MaterialResource->GetResourceProxy() == nullptr"), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FSlateMaterialResource *)(*pcVar4)();
      return pFVar11;
    }
    if ((pFVar12 == (FSlateMaterialResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FSlateMaterialResource *)(*pcVar4)();
      return pFVar11;
    }
    FSlateMaterialResource::UpdateMaterial
              (pFVar12,(UMaterialInterface *)param_1,(TVector2<float>)TVar2,param_3);
  }
  if ((pFVar12 == (FSlateMaterialResource *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FSlateMaterialResource *)(*pcVar4)();
    return pFVar11;
  }
  FVar5.ReferenceController = local_f8.SharedReferenceCount.ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar12 == (FSlateMaterialResource *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FSlateMaterialResource *)(*pcVar4)();
    return pFVar11;
  }
  pUVar3 = pFVar12->MaterialObject;
  iVar8 = 0;
  iVar21 = 0;
  if (pUVar3 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    local_a8 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_a8);
    iVar8 = local_c8.ObjectSerialNumber;
    iVar21 = local_c8.ObjectIndex;
  }
  if (((local_e8.Material.ObjectIndex != iVar21) || (local_e8.Material.ObjectSerialNumber != iVar8))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("InKey.Material == InMaterialResource->GetMaterialObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                            ,0x92,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FSlateMaterialResource *)(*pcVar4)();
    return pFVar11;
  }
  local_88 = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80 = &local_e8;
  local_78 = &local_90;
  local_90 = pFVar12;
  TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMaterialKey_const_&,TSharedPtr<FSlateMaterialResource,1>_&&>_>
            ((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
              *)&(this->DynamicResourceMap).MaterialMap,
             (TPairInitializer<FMaterialKey_const_&,TSharedPtr<FSlateMaterialResource,1>_&&> *)
             &stack0x00000010,(bool *)&local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
LAB_14600d16a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  return pFVar12;
}

// GetNumAtlasPages @ 14600d220

int __thiscall FSlateRHIResourceManager::GetNumAtlasPages(FSlateRHIResourceManager *this)

{
  return (((this->VectorGraphicsCache).Ptr)->Atlases).ArrayNum +
         (this->PrecachedTextureAtlases).ArrayNum;
}

// GetSceneAt @ 14600de10

FSceneInterface * __thiscall
FSlateRHIResourceManager::GetSceneAt(FSlateRHIResourceManager *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSceneInterface *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ActiveScenes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSceneInterface *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSceneInterface **)((this->ActiveScenes).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSceneCount @ 14600de90

int __thiscall FSlateRHIResourceManager::GetSceneCount(FSlateRHIResourceManager *this)

{
  return (this->ActiveScenes).ArrayNum;
}

// GetShaderResource @ 14600dea0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateShaderResourceProxy * __thiscall
FSlateRHIResourceManager::GetShaderResource
          (FSlateRHIResourceManager *this,FSlateBrush *param_1,TVector2<float> param_2,float param_3
          )

{
  int *piVar1;
  undefined1 *puVar2;
  UObjectBaseUtility *this_00;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateGetResourceTime> FVar8;
  FUObjectItem *pFVar9;
  FSlateMaterialResource *pFVar10;
  TTuple<FName,FSlateShaderResourceProxy_*> *pTVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  LARGE_INTEGER LVar12;
  FSlateShaderResourceProxy *pFVar13;
  LARGE_INTEGER local_res10;
  FStatMessage local_58;
  LARGE_INTEGER local_48;
  
  pFVar13 = (FSlateShaderResourceProxy *)0x0;
  FVar8 = StatPtr_STAT_SlateGetResourceTime;
  if (StatPtr_STAT_SlateGetResourceTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlateGetResourceTime>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_58,"STAT_SlateGetResourceTime");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateGetResourceTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateGetResourceTime,*pFVar7,
                       L"GetResource Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar12 = *(LARGE_INTEGER *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_48.s.LowPart = 0;
  local_48.s.HighPart = 0;
  if ((LVar12.s.LowPart != 0) || (LVar12.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.QuadPart = local_res10.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10 = LVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                   ,0x278);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = LVar12;
      FThreadStats::AddMessage((FName)LVar12.s,CycleScopeStart);
      bVar4 = true;
      goto LAB_14600e008;
    }
  }
  bVar4 = false;
  LVar12 = local_48;
LAB_14600e008:
  this_00 = (UObjectBaseUtility *)(param_1->ResourceObject).field0_0x0.DebugPtr;
  if ((this_00 == (UObjectBaseUtility *)0x0) ||
     ((((*(uint *)&this_00->field_0x8 >> 0x1e & 1) == 0 &&
       (pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc),
       ((uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) &&
      ((*(uint *)&this_00->field_0x8 >> 0xf & 1) == 0)))) {
    if ((param_1->ImageType).Value == '\x03') {
      pFVar13 = FSlateVectorGraphicsCache::GetShaderResource
                          (*(FSlateVectorGraphicsCache **)&(this->DeleteResourcesCommand).field_0x8,
                           param_1,param_2,param_3);
    }
    else if (((param_1->bIsDynamicallyLoaded == 0) &&
             ((param_1->ResourceObject).field0_0x0.DebugPtr == (UObject *)0x0)) &&
            (param_1->bHasUObject_DEPRECATED == '\0')) {
      pTVar11 = TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<FName,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
                        *)&this->_padding_,param_1->ResourceName);
      if (pTVar11 != (TTuple<FName,FSlateShaderResourceProxy_*> *)0x0) {
        pFVar13 = *(FSlateShaderResourceProxy **)&pTVar11->field_0x8;
      }
    }
    else if ((this_00 == (UObjectBaseUtility *)0x0) ||
            (bVar6 = UObjectBaseUtility::IsA<UMaterialInterface>(this_00), !bVar6)) {
      if ((param_1->bIsDynamicallyLoaded != 0) ||
         (((param_1->ResourceObject).field0_0x0.DebugPtr != (UObject *)0x0 ||
          (pFVar13 = (FSlateShaderResourceProxy *)0x0, param_1->bHasUObject_DEPRECATED != 0)))) {
        if ((((param_1->ResourceObject).field0_0x0.DebugPtr != (UObject *)0x0) ||
            (param_1->bHasUObject_DEPRECATED != 0)) && (this_00 == (UObjectBaseUtility *)0x0)) {
          LoadUObjectForBrush(param_1);
        }
        pFVar13 = FindOrCreateDynamicTextureResource
                            ((FSlateRHIResourceManager *)&this[-1].VectorGraphicsCache,param_1);
      }
    }
    else {
      pFVar10 = GetMaterialResource((FSlateRHIResourceManager *)&this[-1].VectorGraphicsCache,
                                    (UObject *)this_00,param_1,(FSlateShaderResource *)0x0,0);
      pFVar13 = pFVar10->SlateProxy;
    }
  }
  else if (2 < (byte)LogSlate._0_1_) {
    local_res10 = *(LARGE_INTEGER *)&this_00->field_0x18;
    ::FName::ToString((FName *)&local_res10.s,(FString *)&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if (local_58.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_58.StatData.Pad);
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && ((FName)LVar12.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Index.Value = LVar12.s.LowPart;
      local_58.NameAndInfo.Number = LVar12.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad = (uchar  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_58);
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
  return pFVar13;
}

// GetStatId @ 14600ef60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FSlateRHIResourceManager::GetStatId(FSlateRHIResourceManager *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FSlateRHIResourceManager::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FSlateRHIResourceManager::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FSlateRHIResourceManager::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FSlateRHIResourceManager = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FSlateRHIResourceManager");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FSlateRHIResourceManager::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FSlateRHIResourceManager,*pFVar1,L"FSlateRHIResourceManager",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FSlateRHIResourceManager::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FSlateRHIResourceManager;
  if (_StatPtr_FSlateRHIResourceManager == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FSlateRHIResourceManager");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FSlateRHIResourceManager::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FSlateRHIResourceManager,*pFVar1,L"FSlateRHIResourceManager"
                       ,"STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,
                       true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetTextureAtlasProvider @ 1460175a0

ISlateAtlasProvider * __thiscall
FSlateRHIResourceManager::GetTextureAtlasProvider(FSlateRHIResourceManager *this)

{
  return (ISlateAtlasProvider *)&this[-1].VectorGraphicsCache;
}

// GetTickableTickType @ 146018fb0

ETickableTickType __thiscall
FSlateRHIResourceManager::GetTickableTickType(FSlateRHIResourceManager *this)

{
  return Always;
}

// GetVectorResource @ 146019800

FSlateShaderResourceProxy * __thiscall
FSlateRHIResourceManager::GetVectorResource
          (FSlateRHIResourceManager *this,FSlateBrush *param_1,TVector2<float> param_2,float param_3
          )

{
  FSlateShaderResourceProxy *pFVar1;
  
  pFVar1 = FSlateVectorGraphicsCache::GetShaderResource
                     ((this->VectorGraphicsCache).Ptr,param_1,param_2,param_3);
  return pFVar1;
}

// IsAtlasPageResourceAlphaOnly @ 14601b6b0

bool __thiscall
FSlateRHIResourceManager::IsAtlasPageResourceAlphaOnly(FSlateRHIResourceManager *this,int param_1)

{
  return false;
}

// IsTickableInEditor @ 14601b890

bool __thiscall FSlateRHIResourceManager::IsTickableInEditor(FSlateRHIResourceManager *this)

{
  return true;
}

// IsTickableWhenPaused @ 14601b8a0

bool __thiscall FSlateRHIResourceManager::IsTickableWhenPaused(FSlateRHIResourceManager *this)

{
  return true;
}

// LoadStyleResources @ 14601ba20

void __thiscall
FSlateRHIResourceManager::LoadStyleResources(FSlateRHIResourceManager *this,ISlateStyle *param_1)

{
  TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_18);
  CreateTextures(this,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// LoadTexture @ 14601ba70

bool __thiscall
FSlateRHIResourceManager::LoadTexture
          (FSlateRHIResourceManager *this,FSlateBrush *param_1,uint *param_2,uint *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  UObject *pUVar1;
  undefined1 uVar2;
  FName local_res8;
  FString local_28;
  
  local_res8 = param_1->ResourceName;
  if ((local_res8 == (FName)0x0) &&
     (pUVar1 = (param_1->ResourceObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res8.Number = *(uint *)&pUVar1->field_0x1c;
  }
  ::FName::ToString(&local_res8,&local_28);
  local_res8 = param_1->ResourceName;
  if ((local_res8 == (FName)0x0) &&
     (pUVar1 = (param_1->ResourceObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res8.Number = *(uint *)&pUVar1->field_0x1c;
  }
  uVar2 = (**(code **)(this->_padding_ + 0x28))(this,&local_res8,&local_28,param_2,param_3,param_4);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// LoadTexture @ 14601bb40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateRHIResourceManager::LoadTexture
          (FSlateRHIResourceManager *this,FName *param_1,FString *param_2,uint *param_3,
          uint *param_4,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  long64 _Size;
  bool bVar4;
  undefined1 uVar5;
  wchar_t *pwVar6;
  int iVar7;
  FString local_58;
  FImage local_48;
  
  local_48._padding_ = 0;
  local_48._padding_._0_4_ = 0;
  local_48._padding_._4_2_ = 0x201;
  *param_4 = 0;
  *param_3 = 0;
  local_48.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.RawData.ArrayNum = 0;
  local_48.RawData.ArrayMax = 0;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar4 = FImageUtils::LoadImage(pwVar6,&local_48);
  if (bVar4) {
    FImage::ChangeFormat(&local_48,BGRA8,sRGB);
    _Size = local_48.RawData.ArrayNum;
    _Src.Data = local_48.RawData.AllocatorInstance.Data;
    *param_3 = (uint)local_48._padding_;
    piVar1 = &param_5->ArrayMax;
    *param_4 = local_48._padding_._4_4_;
    iVar2 = *piVar1;
    iVar7 = (int)local_48.RawData.ArrayNum;
    if ((iVar7 != local_48.RawData.ArrayNum) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OtherSizeType)NewNum == OtherNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0xdac,L"Invalid number of elements to add to this array type: %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    param_5->ArrayNum = iVar7;
    if ((_Size == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar7,iVar2,&param_5->AllocatorInstance,iVar7,piVar1);
      if (_Size != 0) {
        memcpy((param_5->AllocatorInstance).Data,_Src.Data,_Size);
      }
    }
    bVar4 = true;
  }
  else {
    if (4 < (byte)LogSlate._0_1_) {
      ::FName::ToString(param_1,&local_58);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    bVar4 = false;
  }
  if (local_48.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.RawData.AllocatorInstance.Data);
  }
  return bVar4;
}

// LoadUsedTextures @ 14601bfa0

void __thiscall FSlateRHIResourceManager::LoadUsedTextures(FSlateRHIResourceManager *this)

{
  TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FSlateStyleRegistry::GetAllResources(&local_18);
  CreateTextures(this,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// MakeDynamicTextureResource @ 14601bff0

TSharedPtr<FSlateDynamicTextureResource,1> * __thiscall
FSlateRHIResourceManager::MakeDynamicTextureResource
          (FSlateRHIResourceManager *this,
          TSharedPtr<FSlateDynamicTextureResource,1> *__return_storage_ptr__,FName param_1,
          uint param_2,uint param_3,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  FSlateTextureData *this_00;
  TRawPtrProxy<FSlateTextureData> local_res10;
  TSharedRef<FSlateTextureData,1> local_18;
  
  this_00 = ::operator_new(0x20);
  local_res10.Object = (FSlateTextureData *)0x0;
  if (this_00 != (FSlateTextureData *)0x0) {
    local_res10.Object =
         FSlateTextureData::FSlateTextureData
                   (this_00,param_2,param_3,GPixelFormats[2].BlockBytes,param_4);
  }
  TSharedRef<FSlateTextureData,1>::TSharedRef<FSlateTextureData,1><FSlateTextureData>
            (&local_18,&local_res10);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MakeDynamicTextureResource(this,__return_storage_ptr__,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// MakeDynamicTextureResource @ 14601c0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSlateDynamicTextureResource,1> * __thiscall
FSlateRHIResourceManager::MakeDynamicTextureResource
          (FSlateRHIResourceManager *this,
          TSharedPtr<FSlateDynamicTextureResource,1> *__return_storage_ptr__,FName param_1,
          TSharedRef<FSlateTextureData,1> *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSlateTextureData *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FName FVar6;
  code *pcVar7;
  TIntPoint<int>_u_0 TVar8;
  bool bVar9;
  int iVar10;
  FSlateDynamicTextureResource *pFVar11;
  FSlateShaderResourceProxy *pFVar12;
  FSlateShaderResourceProxy *pFVar13;
  FSlateTexture2DRHIRef *pFVar14;
  TSharedPtr<FSlateDynamicTextureResource,1> *pTVar15;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures> FVar18;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  longlong lVar19;
  code **ppcVar20;
  ulonglong uVar21;
  FSharedReferencer<1> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_188 [32];
  undefined1 local_128 [16];
  FSharedReferencer<1> local_118;
  undefined8 local_110;
  TRawPtrProxy<FSlateDynamicTextureResource> local_108;
  FName local_100;
  FName local_f8;
  FSlateDynamicTextureResource *local_f0;
  TReferenceControllerBase<1> *local_e8;
  FStatMessage local_e0;
  FName *local_d0;
  FSlateDynamicTextureResource **local_c8;
  FName local_c0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar13 = (FSlateShaderResourceProxy *)0x0;
  __return_storage_ptr__->Object = (FSlateDynamicTextureResource *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_128._0_8_ = param_2;
  if ((this->DynamicTextureFreeList).ArrayNum < 1) {
    pFVar11 = ::operator_new(0x10);
    if (pFVar11 == (FSlateDynamicTextureResource *)0x0) {
      pFVar11 = (FSlateDynamicTextureResource *)0x0;
    }
    else {
      pFVar12 = ::operator_new(0x30);
      if (pFVar12 != (FSlateShaderResourceProxy *)0x0) {
        (pFVar12->StartUV).field0_0x0 = (TVector2<float>_u_0)0x0;
        (pFVar12->SizeUV).field0_0x0._s_0.X = 1.0;
        (pFVar12->SizeUV).field0_0x0._s_0.Y = 1.0;
        pFVar12->Resource = (FSlateShaderResource *)0x0;
        (pFVar12->ActualSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
        (pFVar12->HandleData).Object = (FSlateSharedHandleData *)0x0;
        (pFVar12->HandleData).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar13 = pFVar12;
      }
      pFVar11->Proxy = pFVar13;
      pFVar14 = ::operator_new(0x70);
      if (pFVar14 == (FSlateTexture2DRHIRef *)0x0) {
        pFVar11->RHIRefTexture = (FSlateTexture2DRHIRef *)0x0;
        pFVar11->Proxy->Resource = (FSlateShaderResource *)0x0;
      }
      else {
        local_110 = 0;
        pFVar14 = FSlateTexture2DRHIRef::FSlateTexture2DRHIRef
                            (pFVar14,(FRHITexture *)&local_110,0,0);
        pFVar11->RHIRefTexture = pFVar14;
        pFVar11->Proxy->Resource = (FSlateShaderResource *)pFVar14;
      }
    }
    local_108.Object = pFVar11;
    TSharedPtr<FSlateDynamicTextureResource,1>::operator=<FSlateDynamicTextureResource>
              (__return_storage_ptr__,&local_108);
  }
  else {
    lVar19 = (longlong)(this->DynamicTextureFreeList).ArrayNum;
    pFVar23 = (this->DynamicTextureFreeList).AllocatorInstance.Data;
    pTVar15 = *(TSharedPtr<FSlateDynamicTextureResource,1> **)(pFVar23 + lVar19 * 0x10 + -0x10);
    FVar22.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar23 + lVar19 * 0x10 + -8);
    *(undefined8 *)(pFVar23 + lVar19 * 0x10 + -8) = 0;
    *(undefined8 *)(pFVar23 + lVar19 * 0x10 + -0x10) = 0;
    iVar10 = (this->DynamicTextureFreeList).ArrayNum;
    pFVar23 = (this->DynamicTextureFreeList).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
    local_128._8_8_ = pTVar15;
    local_118.ReferenceController = FVar22.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar23 + -8));
    iVar10 = (this->DynamicTextureFreeList).ArrayNum - iVar10;
    if (iVar10 != 0) {
      memmove(pFVar23 + -0x10,pFVar23,(longlong)iVar10 << 4);
    }
    piVar2 = &(this->DynamicTextureFreeList).ArrayNum;
    *piVar2 = *piVar2 + -1;
    if (__return_storage_ptr__ != (TSharedPtr<FSlateDynamicTextureResource,1> *)(local_128 + 8)) {
      __return_storage_ptr__->Object = (FSlateDynamicTextureResource *)pTVar15;
      local_128._8_8_ = (TSharedPtr<FSlateDynamicTextureResource,1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_118);
      FVar22.ReferenceController = local_118.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar22.ReferenceController);
    param_2 = (TSharedRef<FSlateTextureData,1> *)local_128._0_8_;
  }
  TVar8 = *(TIntPoint<int>_u_0 *)&param_2->Object->Width;
  if ((__return_storage_ptr__->Object == (FSlateDynamicTextureResource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TSharedPtr<FSlateDynamicTextureResource,1> *)(*pcVar7)();
    return pTVar15;
  }
  (__return_storage_ptr__->Object->Proxy->ActualSize).field0_0x0 = TVar8;
  if ((param_2->Object->BytesPerPixel != 4) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TextureData->GetBytesPerPixel() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                         ,0x2da,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TSharedPtr<FSlateDynamicTextureResource,1> *)(*pcVar7)();
    return pTVar15;
  }
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar11 = __return_storage_ptr__->Object;
  pFVar4 = param_2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x20,8);
  local_90[1] = (code *)pFVar11;
  local_90[2] = (code *)pFVar4;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSlateRHIResourceManager::MakeDynamicTextureResource'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_90[3] = (code *)pTVar3;
  if (local_90 != (code **)&DAT_fffffffffffffff8) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSlateRHIResourceManager::MakeDynamicTextureResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSlateRHIResourceManager::MakeDynamicTextureResource_::__l2::TSTR_InitNewSlateDynamicTextureResource735>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88[0] = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_b8[0] = (code *)0x0;
    local_78[0] = local_a8[0];
    local_78[1] = local_a8[1];
    local_78[2] = local_a8[2];
    local_58 = 2;
    pFVar16 = (FRenderCommandTag *)
              TRenderCommandTag<`FSlateRHIResourceManager::MakeDynamicTextureResource'::__l2::TSTR_InitNewSlateDynamicTextureResource735>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar16);
    uVar21 = (ulonglong)local_58;
    if ((2 < uVar21) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TSharedPtr<FSlateDynamicTextureResource,1> *)(*pcVar7)();
      return pTVar15;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_88[0] != (code *)0x0) {
        ppcVar20 = local_88 + 2;
        if (local_60 != (code **)0x0) {
          ppcVar20 = local_60;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21])();
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar20 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar20 = local_90;
    }
    (**(code **)(*ppcVar20 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if ((__return_storage_ptr__->Object == (FSlateDynamicTextureResource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TSharedPtr<FSlateDynamicTextureResource,1> *)(*pcVar7)();
    return pTVar15;
  }
  pTVar5 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar11 = __return_storage_ptr__->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar11 == (FSlateDynamicTextureResource *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TSharedPtr<FSlateDynamicTextureResource,1> *)(*pcVar7)();
    return pTVar15;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d0 = &local_100;
  local_c8 = &local_f0;
  local_100 = param_1;
  local_f0 = pFVar11;
  local_e8 = pTVar5;
  TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TSharedPtr<FSlateDynamicTextureResource,1>_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
              *)&this->DynamicResourceMap,
             (TPairInitializer<FName_const_&,TSharedPtr<FSlateDynamicTextureResource,1>_&&> *)
             local_128,(bool *)&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FVar18 = StatPtr_STAT_SlateNumDynamicTextures;
  if (StatPtr_STAT_SlateNumDynamicTextures ==
      (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)0x0) {
    pFVar17 = ::FName::FName(&local_c0,"STAT_SlateNumDynamicTextures");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumDynamicTextures,*pFVar17,
                        L"Num Dynamic Textures","STATGROUP_SlateMemory","STATCAT_Advanced",
                        L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar18;
  local_128._0_8_ = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    local_e0.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_e0.StatData.Pad[0] = '\x01';
    local_e0.StatData.Pad[1] = '\0';
    local_e0.StatData.Pad[2] = '\0';
    local_e0.StatData.Pad[3] = '\0';
    local_e0.StatData.Pad[4] = '\0';
    local_e0.StatData.Pad[5] = '\0';
    local_e0.StatData.Pad[6] = '\0';
    local_e0.StatData.Pad[7] = '\0';
    local_f8 = FVar6;
    local_e0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_02,&local_e0);
    FStatsTrace::Add(&local_f8,1);
    if (this_02->ScopeCount == 0) {
      FThreadStats::Flush(this_02,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_02,false,false);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// MakeDynamicUTextureResource @ 14601c670

TSharedPtr<FSlateUTextureResource,1> * __thiscall
FSlateRHIResourceManager::MakeDynamicUTextureResource
          (FSlateRHIResourceManager *this,
          TSharedPtr<FSlateUTextureResource,1> *__return_storage_ptr__,UTexture *param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  TIntPoint<int>_u_0 TVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FSlateUTextureResource,1> *pTVar7;
  FSlateUTextureResource *pFVar8;
  FSlateUTextureResource *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FSharedReferencer<1> FVar12;
  float fVar13;
  float fVar14;
  TPairInitializer<TWeakObjectPtr<UTexture,FWeakObjectPtr>_&&,TSharedPtr<FSlateUTextureResource,1>_&&>
  local_res10;
  int local_res20;
  int iStackX_24;
  TRawPtrProxy<FSlateUTextureResource> local_98;
  UTexture *local_90;
  TSharedPtr<FSlateUTextureResource,1> local_88;
  FSlateUTextureResource *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedPtr<FSlateUTextureResource,1> **local_68;
  FSlateUTextureResource **local_60;
  TSharedPtr<FSlateUTextureResource,1> local_58;
  FSlateUTextureResource *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  pFVar9 = (FSlateUTextureResource *)0x0;
  __return_storage_ptr__->Object = (FSlateUTextureResource *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FVar12 = FSlateUTextureResource::NullResource.SharedReferenceCount;
  pFVar8 = FSlateUTextureResource::NullResource.Object;
  if (param_1 == (UTexture *)0x0) {
    if (FSlateUTextureResource::NullResource.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FSlateUTextureResource::NullResource.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(FSlateUTextureResource::NullResource.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = __return_storage_ptr__->Object;
    pTStack_40 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->Object = pFVar8;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar12.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  }
  else {
    pTVar7 = FDynamicResourceMap::GetUTextureResource(&this->DynamicResourceMap,&local_58,param_1);
    if (__return_storage_ptr__ != pTVar7) {
      __return_storage_ptr__->Object = pTVar7->Object;
      pTVar7->Object = (FSlateUTextureResource *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar7->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (__return_storage_ptr__->Object != (FSlateUTextureResource *)0x0) goto LAB_14601c9b1;
    if ((this->UTextureFreeList).ArrayNum < 1) {
      pFVar8 = ::operator_new(0x38);
      if (pFVar8 != (FSlateUTextureResource *)0x0) {
        pFVar9 = FSlateUTextureResource::FSlateUTextureResource(pFVar8,param_1);
      }
      local_98.Object = pFVar9;
      TSharedPtr<FSlateUTextureResource,1>::operator=<FSlateUTextureResource>
                (__return_storage_ptr__,&local_98);
    }
    else {
      pFVar11 = (this->UTextureFreeList).AllocatorInstance.Data;
      lVar10 = (longlong)(this->UTextureFreeList).ArrayNum;
      local_res10.Key =
           *(TWeakObjectPtr<UTexture,FWeakObjectPtr> **)(pFVar11 + lVar10 * 0x10 + -0x10);
      FVar12.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar11 + lVar10 * 0x10 + -8);
      *(undefined8 *)(pFVar11 + lVar10 * 0x10 + -8) = 0;
      *(undefined8 *)(pFVar11 + lVar10 * 0x10 + -0x10) = 0;
      iVar6 = (this->UTextureFreeList).ArrayNum;
      pFVar11 = (this->UTextureFreeList).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      local_88.Object = (FSlateUTextureResource *)local_res10.Key;
      local_88.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar11 + -8));
      iVar6 = (this->UTextureFreeList).ArrayNum - iVar6;
      if (iVar6 != 0) {
        memmove(pFVar11 + -0x10,pFVar11,(longlong)iVar6 << 4);
      }
      piVar1 = &(this->UTextureFreeList).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if (__return_storage_ptr__ != &local_88) {
        __return_storage_ptr__->Object = (FSlateUTextureResource *)local_res10.Key;
        local_88.Object = (FSlateUTextureResource *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_88.SharedReferenceCount);
        FVar12.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar12.ReferenceController);
      if ((__return_storage_ptr__->Object == (FSlateUTextureResource *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FSlateUTextureResource,1> *)(*pcVar3)();
        return pTVar7;
      }
      FSlateUTextureResource::UpdateTexture(__return_storage_ptr__->Object,param_1);
    }
    fVar13 = (float)(**(code **)(param_1->_padding_ + 0x370))(param_1);
    fVar14 = (float)(**(code **)(param_1->_padding_ + 0x368))(param_1);
    local_res20 = (int)fVar14;
    iStackX_24 = (int)fVar13;
    if ((__return_storage_ptr__->Object == (FSlateUTextureResource *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSlateUTextureResource,1> *)(*pcVar3)();
      return pTVar7;
    }
    TVar4._s_0.Y = iStackX_24;
    TVar4._s_0.X = local_res20;
    (__return_storage_ptr__->Object->Proxy->ActualSize).field0_0x0 = TVar4;
  }
  if ((__return_storage_ptr__->Object == (FSlateUTextureResource *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FSlateUTextureResource,1> *)(*pcVar3)();
    return pTVar7;
  }
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar8 = __return_storage_ptr__->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar8 == (FSlateUTextureResource *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FSlateUTextureResource,1> *)(*pcVar3)();
    return pTVar7;
  }
  if (param_1 != (UTexture *)0x0) {
    if ((param_1 != (UTexture *)pFVar8->_padding_) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TextureObject == InResource->GetTextureObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                           ,0x8b,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FSlateUTextureResource,1> *)(*pcVar3)();
      return pTVar7;
    }
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = pFVar8;
    local_70 = pTVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.Value = (TSharedPtr<FSlateUTextureResource,1> *)0x0;
    local_90 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_90);
    local_68 = &local_res10.Value;
    local_60 = &local_78;
    TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UTexture,FWeakObjectPtr>_&&,TSharedPtr<FSlateUTextureResource,1>_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
                *)&(this->DynamicResourceMap).TextureMap,&local_res10,(bool *)&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14601c9b1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// OnAppExit @ 14601cdf0

void __thiscall FSlateRHIResourceManager::OnAppExit(FSlateRHIResourceManager *this)

{
  FlushRenderingCommands();
  ReleaseResources(this);
  FlushRenderingCommands();
  DeleteResources(this);
  return;
}

// OnPostGarbageCollect @ 14601ce20

void __thiscall FSlateRHIResourceManager::OnPostGarbageCollect(FSlateRHIResourceManager *this)

{
  bool bVar1;
  BOOL BVar2;
  
  if (this->bResourceCriticalSectionLockedForGC != false) {
    this->bExpiredResourcesNeedCleanup = false;
    FDynamicResourceMap::RemoveExpiredTextureResources
              (&this->DynamicResourceMap,&this->UTextureFreeList);
    FDynamicResourceMap::RemoveExpiredMaterialResources
              (&this->DynamicResourceMap,&this->MaterialResourceFreeList);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
    this->bResourceCriticalSectionLockedForGC = false;
    return;
  }
  bVar1 = IsInGameThread();
  if (bVar1) {
    bVar1 = IsInSlateThread();
    if (!bVar1) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
      if (BVar2 != 0) {
        CleanupExpiredResources(this);
                    /* WARNING: Could not recover jumptable at 0x00014601ceb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
        return;
      }
      this->bExpiredResourcesNeedCleanup = true;
    }
  }
  return;
}

// OnPreGarbageCollect @ 14601d040

void __thiscall FSlateRHIResourceManager::OnPreGarbageCollect(FSlateRHIResourceManager *this)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  
  if (this->bResourceCriticalSectionLockedForGC != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bResourceCriticalSectionLockedForGC == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateRHIResourceManager.cpp"
                       ,0x132,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar2 = CVarSlateRHIResourceManagerLockWhenGCing.Ref;
  if (GSlateLoadingThreadId != 0) {
    bVar3 = IsInParallelGameThread();
    if (!bVar3) {
      bVar3 = IsInGameThread();
      if (!bVar3) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    if (pTVar2->ShadowedValue[0] != false) {
      this->bResourceCriticalSectionLockedForGC = true;
                    /* WARNING: Could not recover jumptable at 0x00014601d0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      EnterCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
      return;
    }
  }
  this->bResourceCriticalSectionLockedForGC = false;
  return;
}

// ReleaseDynamicResource @ 146020ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSlateRHIResourceManager::ReleaseDynamicResource
          (FSlateRHIResourceManager *this,FSlateBrush *param_1)

{
  int *piVar1;
  TMap<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>_>
  *this_00;
  TArray<TSharedPtr<FSlateUTextureResource,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TMap<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>_>
  *this_01;
  TArray<TSharedPtr<FSlateMaterialResource,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSharedPtr<FSlateDynamicTextureResource,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  UObject *pUVar5;
  TSharedPtr<FSlateUTextureResource,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FWeakObjectPtr FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FSlateResourceHandle *pFVar13;
  UClass *pUVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  longlong lVar19;
  TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *pTVar20;
  UTexture *pUVar21;
  undefined1 *puVar22;
  longlong lVar23;
  TVector2<float>_u_0 TVar24;
  FName FVar25;
  UTexture *pUVar26;
  FName local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  FMaterialKey local_f8;
  FSlateMaterialResource *local_e0;
  TReferenceControllerBase<1> *pTStack_d8;
  longlong *local_d0;
  TReferenceControllerBase<1> *pTStack_c8;
  TSharedPtr<FSlateUTextureResource,1> local_c0;
  UObject *local_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  FName local_98;
  UTexture *local_90;
  FName local_88;
  FName local_80;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50;
  FSlateResourceHandle local_48;
  
  if ((((param_1->ResourceObject).field0_0x0.DebugPtr != (UObject *)0x0) ||
      (param_1->bHasUObject_DEPRECATED != '\0')) || (param_1->bIsDynamicallyLoaded != 0)) {
    pFVar13 = FSlateResourceHandle::FSlateResourceHandle(&local_48);
    if (&param_1->ResourceHandle != pFVar13) {
      (param_1->ResourceHandle).Data.Object = (pFVar13->Data).Object;
      (pFVar13->Data).Object = (FSlateSharedHandleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->ResourceHandle).Data.SharedReferenceCount,
                 &(pFVar13->Data).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Data.SharedReferenceCount.ReferenceController);
    FVar25 = param_1->ResourceName;
    local_res20 = 0;
    if ((FVar25 == (FName)0x0) &&
       (pUVar5 = (param_1->ResourceObject).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
      FVar25.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
      FVar25.Number = *(uint *)&pUVar5->field_0x1c;
    }
    pUVar21 = (UTexture *)(param_1->ResourceObject).field0_0x0.DebugPtr;
    local_res10 = FVar25;
    if (pUVar21 == (UTexture *)0x0) {
      pTVar20 = TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                        *)&this->DynamicResourceMap,FVar25);
      if (pTVar20 == (TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_> *)0x0) {
        local_d0 = (longlong *)0x0;
        pTStack_c8 = (TReferenceControllerBase<1> *)0x0;
        local_c0.SharedReferenceCount.ReferenceController = pTStack_c8;
      }
      else {
        local_d0 = *(longlong **)&pTVar20->field_0x8;
        local_c0.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)&pTVar20->field_0x10;
        if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTStack_c8 = local_c0.SharedReferenceCount.ReferenceController;
        if ((local_d0 != (longlong *)0x0) &&
           (((*local_d0 == 0 ||
             ((lVar23 = *(longlong *)(*local_d0 + 0x28), lVar23 != 0 && (*(int *)(lVar23 + 8) == 1))
             )) || (*(longlong *)(*local_d0 + 0x20) == 0)))) {
          pUVar21 = (UTexture *)(local_d0[1] + 0x28);
          if (local_d0[1] == 0) {
            pUVar21 = (UTexture *)0x0;
          }
          BeginReleaseResource((FRenderResource *)pUVar21,(FRenderCommandPipe *)0x0);
          local_88 = FVar25;
          if (*(int *)&(this->DynamicResourceMap).NativeTextureMap.field_0x8 !=
              *(int *)&(this->DynamicResourceMap).NativeTextureMap.field_0x34) {
            uVar12 = ::GetTypeHash(FVar25.ComparisonIndex.Value);
            TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FSlateDynamicTextureResource,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSlateDynamicTextureResource,1>,0>,FDefaultSetAllocator>
                                 *)&this->DynamicResourceMap,local_res10.Number + uVar12,&local_88);
          }
          pTVar4 = &this->DynamicTextureFreeList;
          pFVar7 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_d0) &&
              ((FScriptContainerElement *)&local_d0 <
               pFVar7 + (longlong)(this->DynamicTextureFreeList).ArrayMax * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = (this->DynamicTextureFreeList).ArrayNum;
          piVar1 = &(this->DynamicTextureFreeList).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar4->AllocatorInstance,piVar1);
          }
          (this->DynamicTextureFreeList).ArrayNum = iVar11 + 1;
          pFVar7 = (pTVar4->AllocatorInstance).Data;
          *(longlong **)(pFVar7 + (longlong)iVar11 * 0x10) = local_d0;
          *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar11 * 0x10 + 8) = pTStack_c8;
          if (pTStack_c8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_c8->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_c8->SharedReferenceCount + 1);
            UNLOCK();
          }
          FVar16 = StatPtr_STAT_SlateNumDynamicTextures;
          if (StatPtr_STAT_SlateNumDynamicTextures ==
              (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)0x0) {
            pFVar15 = ::FName::FName(&local_50,"STAT_SlateNumDynamicTextures");
            FVar16 = (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumDynamicTextures,
                                *pFVar15,L"Num Dynamic Textures","STATGROUP_SlateMemory",
                                "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                                MCR_Invalid);
          }
          FVar25 = *(FName *)FVar16;
          local_c0.SharedReferenceCount.ReferenceController = pTStack_c8;
          local_res10 = FVar25;
          if (((FVar25 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar17 == (FThreadStats *)0x0) {
              pFVar18 = FThreadStatsPool::Get();
              pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
            }
            local_68.NameAndInfo.Number = FVar25.Number & 0xffffbfff | 0xb000;
            local_68.StatData.Pad[0] = '\x01';
            local_68.StatData.Pad[1] = '\0';
            local_68.StatData.Pad[2] = '\0';
            local_68.StatData.Pad[3] = '\0';
            local_68.StatData.Pad[4] = '\0';
            local_68.StatData.Pad[5] = '\0';
            local_68.StatData.Pad[6] = '\0';
            local_68.StatData.Pad[7] = '\0';
            local_80 = FVar25;
            local_68.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar17,&local_68);
            FStatsTrace::Add(&local_80,-1);
            if (pFVar17->ScopeCount == 0) {
              FThreadStats::Flush(pFVar17,false,false);
              local_c0.SharedReferenceCount.ReferenceController = pTStack_c8;
            }
            else {
              local_c0.SharedReferenceCount.ReferenceController = pTStack_c8;
              if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar17,false,false);
                local_c0.SharedReferenceCount.ReferenceController = pTStack_c8;
              }
            }
          }
        }
      }
    }
    else {
      if (((*(int *)&(this->DynamicResourceMap).MaterialMap.field_0x8 -
           *(int *)&(this->DynamicResourceMap).MaterialMap.field_0x34) -
          *(int *)&(this->DynamicResourceMap).TextureMap.field_0x34) +
          *(int *)&(this->DynamicResourceMap).TextureMap.field_0x8 == 0) {
        return;
      }
      pUVar14 = Z_Construct_UClass_UTexture_NoRegister();
      iVar11 = (int)pUVar14->_padding_;
      if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar11) ||
         (pUVar26 = pUVar21,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
         &pUVar14->_padding_)) {
        pUVar26 = (UTexture *)0x0;
      }
      FDynamicResourceMap::GetUTextureResource(&this->DynamicResourceMap,&local_c0,pUVar26);
      if (local_c0.Object == (FSlateUTextureResource *)0x0) {
        pUVar14 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        iVar11 = (int)pUVar14->_padding_;
        if ((*(int *)(pUVar21->_padding_ + 0x38) < iVar11) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar21->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar14->_padding_)) {
          TVar24 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&param_1->ImageSize;
          local_f8.Material.ObjectIndex = 0;
          local_f8.Material.ObjectSerialNumber = 0;
        }
        else {
          TVar24 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&param_1->ImageSize;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar21);
          }
          local_res10.ComparisonIndex.Value = 0;
          local_res10.Number = 0;
          local_90 = pUVar21;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar21);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)&local_90);
          local_f8.Material = (FObjectKey)local_res10;
        }
        local_f8.MaskKey = 0;
        local_f8.ImageSize.field0_0x0 = TVar24;
        uVar12 = ::GetTypeHash(&local_f8);
        if (*(int *)&(this->DynamicResourceMap).MaterialMap.field_0x8 !=
            *(int *)&(this->DynamicResourceMap).MaterialMap.field_0x34) {
          puVar22 = *(undefined1 **)&(this->DynamicResourceMap).MaterialMap.field_0x40;
          if (puVar22 == (undefined1 *)0x0) {
            puVar22 = &(this->DynamicResourceMap).MaterialMap.field_0x38;
          }
          iVar11 = *(int *)(puVar22 +
                           (ulonglong)
                           (*(int *)&(this->DynamicResourceMap).MaterialMap.field_0x48 - 1U & uVar12
                           ) * 4);
          if (iVar11 != -1) {
            lVar23 = *(longlong *)&(this->DynamicResourceMap).MaterialMap;
            do {
              lVar19 = (longlong)iVar11;
              if ((((*(uint *)(lVar23 + lVar19 * 0x30) == local_f8.Material.ObjectIndex) &&
                   (*(uint *)(lVar23 + 4 + lVar19 * 0x30) == local_f8.Material.ObjectSerialNumber))
                  && (local_f8.ImageSize.field0_0x0._s_0.X == *(float *)(lVar23 + 8 + lVar19 * 0x30)
                     )) && ((local_f8.ImageSize.field0_0x0._s_0.Y ==
                             *(float *)(lVar23 + 0xc + lVar19 * 0x30) &&
                            (*(int *)(lVar23 + 0x10 + lVar19 * 0x30) == local_f8.MaskKey)))) {
                if ((iVar11 != -1) &&
                   (lVar23 = (longlong)iVar11 * 0x30 +
                             *(longlong *)&(this->DynamicResourceMap).MaterialMap, lVar23 != 0)) {
                  local_e0 = *(FSlateMaterialResource **)(lVar23 + 0x18);
                  pTStack_d8 = *(TReferenceControllerBase<1> **)(lVar23 + 0x20);
                  if (pTStack_d8 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTStack_d8->SharedReferenceCount =
                         (atomic<int>)((int)pTStack_d8->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  goto LAB_146021216;
                }
                break;
              }
              iVar11 = *(int *)(lVar23 + 0x28 + lVar19 * 0x30);
            } while (iVar11 != -1);
          }
        }
        local_e0 = (FSlateMaterialResource *)0x0;
        pTStack_d8 = (TReferenceControllerBase<1> *)0x0;
LAB_146021216:
        this_01 = &(this->DynamicResourceMap).MaterialMap;
        if (*(int *)&(this->DynamicResourceMap).MaterialMap.field_0x8 !=
            *(int *)&(this->DynamicResourceMap).MaterialMap.field_0x34) {
          uVar12 = ::GetTypeHash(&local_f8);
          puVar22 = *(undefined1 **)&(this->DynamicResourceMap).MaterialMap.field_0x40;
          if (puVar22 == (undefined1 *)0x0) {
            puVar22 = &(this->DynamicResourceMap).MaterialMap.field_0x38;
          }
          iVar11 = *(int *)(puVar22 +
                           ((longlong)*(int *)&(this->DynamicResourceMap).MaterialMap.field_0x48 -
                            1U & (longlong)(int)uVar12) * 4);
          if (iVar11 != -1) {
            lVar23 = *(longlong *)&this_01->field_0x0;
            do {
              lVar19 = (longlong)iVar11;
              if (((*(uint *)(lVar23 + lVar19 * 0x30) == local_f8.Material.ObjectIndex) &&
                  (*(uint *)(lVar23 + 4 + lVar19 * 0x30) == local_f8.Material.ObjectSerialNumber))
                 && ((local_f8.ImageSize.field0_0x0._s_0.X == *(float *)(lVar23 + 8 + lVar19 * 0x30)
                     && ((local_f8.ImageSize.field0_0x0._s_0.Y ==
                          *(float *)(lVar23 + 0xc + lVar19 * 0x30) &&
                         (*(int *)(lVar23 + 0x10 + lVar19 * 0x30) == local_f8.MaskKey)))))) {
                TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,1>,0>,FDefaultSetAllocator>
                                 *)this_01,iVar11);
                break;
              }
              iVar11 = *(int *)(lVar23 + 0x28 + lVar19 * 0x30);
            } while (iVar11 != -1);
          }
        }
        if (local_e0 != (FSlateMaterialResource *)0x0) {
          FSlateMaterialResource::ResetMaterial(local_e0);
          pTVar3 = &this->MaterialResourceFreeList;
          pFVar7 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 <
               pFVar7 + (longlong)(this->MaterialResourceFreeList).ArrayMax * 0x10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = (this->MaterialResourceFreeList).ArrayNum;
          piVar1 = &(this->MaterialResourceFreeList).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->MaterialResourceFreeList).ArrayNum = iVar11 + 1;
          pFVar7 = (pTVar3->AllocatorInstance).Data;
          *(FSlateMaterialResource **)(pFVar7 + (longlong)iVar11 * 0x10) = local_e0;
          *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar11 * 0x10 + 8) = pTStack_d8;
          if (pTStack_d8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_d8->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_d8->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d8);
      }
      else {
        pUVar5 = (UObject *)(local_c0.Object)->_padding_;
        if (pUVar5 != (UObject *)0x0) {
          this_00 = &(this->DynamicResourceMap).TextureMap;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_b0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_b0);
          FVar9 = local_res18;
          if (*(int *)&(this->DynamicResourceMap).TextureMap.field_0x8 !=
              *(int *)&(this->DynamicResourceMap).TextureMap.field_0x34) {
            puVar22 = *(undefined1 **)&(this->DynamicResourceMap).TextureMap.field_0x40;
            if (puVar22 == (undefined1 *)0x0) {
              puVar22 = &(this->DynamicResourceMap).TextureMap.field_0x38;
            }
            for (iVar11 = *(int *)(puVar22 +
                                  ((longlong)
                                   *(int *)&(this->DynamicResourceMap).TextureMap.field_0x48 - 1U &
                                  (longlong)
                                  (local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex)) * 4);
                iVar11 != -1; iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + lVar23)) {
              lVar23 = *(longlong *)&this_00->field_0x0;
              local_a8 = FVar9;
              local_a0 = *(FWeakObjectPtr *)((longlong)iVar11 * 0x20 + lVar23);
              bVar10 = TWeakObjectPtr<UTexture_const_,FWeakObjectPtr>::
                       UEOpEquals<UTexture_const_,bool>
                                 ((TWeakObjectPtr<UTexture_const_,FWeakObjectPtr> *)&local_a0,
                                  (TWeakObjectPtr<UTexture_const_,FWeakObjectPtr> *)&local_a8);
              if (bVar10) {
                TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSharedPtr<FSlateUTextureResource,1>,0>,FDefaultSetAllocator>
                                 *)this_00,iVar11);
                break;
              }
            }
          }
        }
        if ((local_c0.Object == (FSlateUTextureResource *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FSlateUTextureResource::ResetTexture(local_c0.Object);
        pTVar2 = &this->UTextureFreeList;
        pTVar6 = (TSharedPtr<FSlateUTextureResource,1> *)(pTVar2->AllocatorInstance).Data;
        if (((pTVar6 <= &local_c0) && (&local_c0 < pTVar6 + (this->UTextureFreeList).ArrayMax)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (this->UTextureFreeList).ArrayNum;
        piVar1 = &(this->UTextureFreeList).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->UTextureFreeList).ArrayNum = iVar11 + 1;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        *(FSlateUTextureResource **)(pFVar7 + (longlong)iVar11 * 0x10) = local_c0.Object;
        *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar11 * 0x10 + 8) =
             local_c0.SharedReferenceCount.ReferenceController;
        if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FVar16 = StatPtr_STAT_SlateNumDynamicTextures;
        if (StatPtr_STAT_SlateNumDynamicTextures ==
            (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)0x0) {
          pFVar15 = ::FName::FName(&local_58,"STAT_SlateNumDynamicTextures");
          FVar16 = (FThreadSafeStaticStat<FStat_STAT_SlateNumDynamicTextures>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateNumDynamicTextures,
                              *pFVar15,L"Num Dynamic Textures","STATGROUP_SlateMemory",
                              "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar25 = *(FName *)FVar16;
        local_res10 = FVar25;
        if (((FVar25 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar17 == (FThreadStats *)0x0) {
            pFVar18 = FThreadStatsPool::Get();
            pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
          }
          local_78.NameAndInfo.Number = FVar25.Number & 0xffffbfff | 0xb000;
          local_78.StatData.Pad[0] = '\x01';
          local_78.StatData.Pad[1] = '\0';
          local_78.StatData.Pad[2] = '\0';
          local_78.StatData.Pad[3] = '\0';
          local_78.StatData.Pad[4] = '\0';
          local_78.StatData.Pad[5] = '\0';
          local_78.StatData.Pad[6] = '\0';
          local_78.StatData.Pad[7] = '\0';
          local_98 = FVar25;
          local_78.NameAndInfo.Index.Value = FVar25.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar17,&local_78);
          FStatsTrace::Add(&local_98,-1);
          if (pFVar17->ScopeCount == 0) {
            FThreadStats::Flush(pFVar17,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar17,false,false);
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ReleaseResources @ 146021e50

void __thiscall FSlateRHIResourceManager::ReleaseResources(FSlateRHIResourceManager *this)

{
  longlong lVar1;
  FSlateVectorGraphicsCache *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRenderResource *pFVar5;
  FRenderResource *pFVar6;
  FRenderResource *pFVar7;
  uint uVar8;
  
  pFVar6 = (FRenderResource *)0x0;
  pFVar7 = pFVar6;
  pFVar5 = pFVar6;
  if (0 < (this->PrecachedTextureAtlases).ArrayNum) {
    do {
      uVar8 = (uint)pFVar5;
      uVar4 = 0;
      if ((int)uVar8 < (this->PrecachedTextureAtlases).ArrayNum) {
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
      (**(code **)(**(longlong **)
                     ((longlong)&pFVar7->_padding_ +
                     (longlong)(this->PrecachedTextureAtlases).AllocatorInstance.Data) + 0x10))();
      pFVar7 = (FRenderResource *)&pFVar7->OwnerName;
      pFVar5 = (FRenderResource *)(ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < (this->PrecachedTextureAtlases).ArrayNum);
  }
  pFVar7 = pFVar6;
  pFVar5 = pFVar6;
  if (0 < (this->NonAtlasedTextures).ArrayNum) {
    do {
      uVar8 = (uint)pFVar5;
      uVar4 = 0;
      if ((int)uVar8 < (this->NonAtlasedTextures).ArrayNum) {
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
      lVar1 = *(longlong *)
               ((longlong)&pFVar7->_padding_ +
               (longlong)(this->NonAtlasedTextures).AllocatorInstance.Data);
      pFVar5 = (FRenderResource *)(lVar1 + 0x28);
      if (lVar1 == 0) {
        pFVar5 = pFVar6;
      }
      BeginReleaseResource(pFVar5,(FRenderCommandPipe *)0x0);
      pFVar7 = (FRenderResource *)&pFVar7->OwnerName;
      pFVar5 = (FRenderResource *)(ulonglong)(uVar8 + 1);
    } while ((int)(uVar8 + 1) < (this->NonAtlasedTextures).ArrayNum);
  }
  FDynamicResourceMap::ReleaseResources(&this->DynamicResourceMap);
  this_00 = (this->VectorGraphicsCache).Ptr;
  if (this_00 == (FSlateVectorGraphicsCache *)0x0) {
    return;
  }
  FSlateVectorGraphicsCache::ReleaseResources(this_00,false);
  return;
}

// ReloadTextures @ 1460221a0

void __thiscall FSlateRHIResourceManager::ReloadTextures(FSlateRHIResourceManager *this)

{
  TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  ReleaseResources(this);
  FlushRenderingCommands();
  DeleteResources(this);
  CreateVectorGraphicsCache(this);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FSlateStyleRegistry::GetAllResources(&local_18);
  CreateTextures(this,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Tick @ 14602c360

void __thiscall FSlateRHIResourceManager::Tick(FSlateRHIResourceManager *this,float param_1)

{
  bool bVar1;
  BOOL BVar2;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    bVar1 = IsInSlateThread();
    if ((!bVar1) && (*(char *)((longlong)&this->_padding_ + 1) != '\0')) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      if (BVar2 != 0) {
        CleanupExpiredResources((FSlateRHIResourceManager *)&this[-1].PrecachedTextureAtlases);
                    /* WARNING: Could not recover jumptable at 0x00014602c3ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
        return;
      }
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    }
  }
  return;
}

// TryToCleanupExpiredResources @ 14602c990

void __thiscall
FSlateRHIResourceManager::TryToCleanupExpiredResources(FSlateRHIResourceManager *this,bool param_1)

{
  bool bVar1;
  BOOL BVar2;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    bVar1 = IsInSlateThread();
    if ((!bVar1) && ((param_1 || (this->bExpiredResourcesNeedCleanup != false)))) {
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
      if (BVar2 != 0) {
        CleanupExpiredResources(this);
                    /* WARNING: Could not recover jumptable at 0x00014602c9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->ResourceCriticalSection);
        return;
      }
      this->bExpiredResourcesNeedCleanup = true;
    }
  }
  return;
}

// UpdateTextureAtlases @ 14602ec20

void __thiscall FSlateRHIResourceManager::UpdateTextureAtlases(FSlateRHIResourceManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->PrecachedTextureAtlases).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->PrecachedTextureAtlases).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(**(longlong **)((this->PrecachedTextureAtlases).AllocatorInstance.Data + lVar5) +
                  8))();
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->PrecachedTextureAtlases).ArrayNum);
  }
  FSlateVectorGraphicsCache::UpdateCache((this->VectorGraphicsCache).Ptr);
  return;
}

// operator() @ 1504e0540

bool __thiscall
`FSlateRHIResourceManager::GetFontShaderResource'::__l32::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5410622954222386510>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_5410622954222386510>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504e05a0

bool __thiscall
`FSlateRHIResourceManager::FindOrCreateDynamicTextureResource'::__l46::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5410622954222386328>);
  if (bVar5) {
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + 0x18);
    ::FName::ToString(&local_res10,&local_48);
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)((longlong)this + 8),&local_28,(UObject *)0x0,
               None);
    ::FName::ToString(*(FName **)this,&local_38);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5410622954222386328>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1504e0697;
    }
  }
  bVar5 = false;
LAB_1504e0697:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1504e07a0

bool __thiscall
`FSlateRHIResourceManager::CreateTextures'::__l19::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5410622954222386720>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5410622954222386720>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e0807;
    }
  }
  bVar2 = false;
LAB_1504e0807:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504e0880

bool __thiscall
`FSlateRHIResourceManager::FindOrCreateDynamicTextureResource'::__l48::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5410622954222386324>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5410622954222386324>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504e08e7;
    }
  }
  bVar2 = false;
LAB_1504e08e7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

