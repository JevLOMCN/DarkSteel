// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 4

// ~FExrMediaTextureSampleConverter @ 14ea3a710

void __thiscall
FExrMediaTextureSampleConverter::~FExrMediaTextureSampleConverter
          (FExrMediaTextureSampleConverter *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FExrMediaTextureSampleConverter__6B_;
  *(undefined4 *)&(this->MipBuffersRenderThread).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MipBuffersRenderThread).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MipBuffersRenderThread);
  *(undefined4 *)&(this->MipBuffers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MipBuffers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MipBuffers);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MipBufferCriticalSection);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConvertExrBufferCallback);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ConverterCallbacksCriticalSection);
  FSampleConverterParameters::~FSampleConverterParameters(&this->ConverterParams);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ParamsCriticalSection);
  this->_padding_ = (longlong)&___7IMediaTextureSampleConverter__6B_;
  return;
}

// Convert @ 14ea45e00

bool __thiscall
FExrMediaTextureSampleConverter::Convert
          (FExrMediaTextureSampleConverter *this,FRHICommandListImmediate *param_1,
          TRefCountPtr<FRHITexture> *param_2,FConversionHints *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHITexture *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  FSampleConverterParameters *this_01;
  FSampleConverterParameters *pFVar5;
  longlong *plVar6;
  FRHITexture *local_res8;
  FRHICommandListImmediate *local_res10;
  FReadAccessScope local_1d8;
  FSampleConverterParameters local_1c0;
  FSampleConverterParameters local_100;
  
  lpCriticalSection = &this->ConverterCallbacksCriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar4 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ConvertExrBufferCallback,&local_1d8);
    if (((*(int *)&(this->ConvertExrBufferCallback).field_0x10 == 0) ||
        (plVar6 = *(longlong **)&(this->ConvertExrBufferCallback).field_0x8,
        plVar6 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1d8);
    if (bVar2) {
      this_01 = GetParams(this,&local_1c0);
      this_00 = param_2->Reference;
      if (this_00 != (FRHITexture *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->ConvertExrBufferCallback,&local_1d8);
      if (*(int *)&(this->ConvertExrBufferCallback).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->ConvertExrBufferCallback).field_0x8;
      }
      pcVar1 = *(code **)(*plVar6 + 0x60);
      pFVar5 = FSampleConverterParameters::FSampleConverterParameters(&local_100,this_01);
      local_res8 = this_00;
      uVar4 = (*pcVar1)(plVar6,local_res10,&local_res8,&this->MipBuffers,pFVar5);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1d8);
      FSampleConverterParameters::~FSampleConverterParameters(this_01);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (bool)uVar4;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetOrCreateMipLevelBuffer @ 14ea4dae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FStructuredBufferPoolItem,1> * __thiscall
FExrMediaTextureSampleConverter::GetOrCreateMipLevelBuffer
          (FExrMediaTextureSampleConverter *this,
          TSharedPtr<FStructuredBufferPoolItem,1> *__return_storage_ptr__,int param_1,
          TFunction<TSharedPtr<FStructuredBufferPoolItem,1>___cdecl(void)> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FStructuredBufferPoolItem *pFVar3;
  FEvent *pFVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  TSharedPtr<FStructuredBufferPoolItem,1> *pTVar8;
  uint *puVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>
  *this_00;
  TSharedPtr<FStructuredBufferPoolItem,1> local_res18;
  undefined1 auStack_a8 [32];
  TPairInitializer<int_const_&,TSharedPtr<FStructuredBufferPoolItem,1>_&&> local_88;
  undefined1 *local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  FStructuredBufferPoolItem *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  FStructuredBufferPoolItem *local_50;
  TReferenceControllerBase<1> *pTStack_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  lpCriticalSection = &this->MipBufferCriticalSection;
  __return_storage_ptr__->Object = (FStructuredBufferPoolItem *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_res18.Object._0_4_ = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = &this->MipBuffers;
  if (*(int *)&(this->MipBuffers).field_0x8 != *(int *)&(this->MipBuffers).field_0x34) {
    puVar12 = *(undefined1 **)&(this->MipBuffers).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->MipBuffers).field_0x38;
    }
    uVar6 = *(uint *)(puVar12 +
                     (ulonglong)
                     (*(int *)&(this->MipBuffers).field_0x48 - 1U & (uint)local_res18.Object) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (*puVar10 == (uint)local_res18.Object) {
          puVar9 = puVar10 + 2;
          if (puVar10 == (uint *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            pTVar2 = *(TReferenceControllerBase<1> **)(puVar9 + 2);
            pFVar3 = *(FStructuredBufferPoolItem **)puVar9;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_60 = __return_storage_ptr__->Object;
            pTStack_58 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
            __return_storage_ptr__->Object = pFVar3;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_58);
            goto LAB_14ea4dc2e;
          }
          break;
        }
        uVar6 = puVar10[6];
      } while (uVar6 != 0xffffffff);
    }
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar11 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar11 = *(longlong **)&param_2->field_0x28;
  }
  uVar7 = (**(code **)(*plVar11 + 8))();
  (*pcVar1)(local_70,uVar7);
  local_88.Value = &local_res18;
  local_78 = local_70;
  TSet<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TSharedPtr<FStructuredBufferPoolItem,1>_&&>_>
            ((TSet<TTuple<int,TSharedPtr<FStructuredBufferPoolItem,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>,FDefaultSetAllocator>
              *)this_00,&local_88,(bool *)&local_88.Value);
  pTVar2 = *(TReferenceControllerBase<1> **)
            ((longlong)(int)local_88.Key * 0x20 + 0x10 + *(longlong *)&this_00->field_0x0);
  pFVar3 = *(FStructuredBufferPoolItem **)
            ((longlong)(int)local_88.Key * 0x20 + 8 + *(longlong *)&this_00->field_0x0);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = __return_storage_ptr__->Object;
  pTStack_48 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  __return_storage_ptr__->Object = pFVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
LAB_14ea4dc2e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (__return_storage_ptr__->Object == (FStructuredBufferPoolItem *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FStructuredBufferPoolItem,1> *)(*pcVar1)();
      return pTVar8;
    }
  }
  pFVar4 = __return_storage_ptr__->Object->AllocationReadyEvent;
  (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,0xffffffff,0);
  if (*(longlong *)param_2 != 0) {
    plVar11 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return __return_storage_ptr__;
}

// GetParams @ 14ea4dd40

FSampleConverterParameters * __thiscall
FExrMediaTextureSampleConverter::GetParams
          (FExrMediaTextureSampleConverter *this,FSampleConverterParameters *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TSortedMap<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
  *pTVar2;
  TArray<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *pTVar5;
  TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  
  lpCriticalSection = &this->ParamsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FImgMediaFrameInfo::FImgMediaFrameInfo
              (&__return_storage_ptr__->FrameInfo,&(this->ConverterParams).FrameInfo);
    pTVar2 = &__return_storage_ptr__->Viewports;
    __return_storage_ptr__->FrameId = (this->ConverterParams).FrameId;
    (__return_storage_ptr__->FullResolution).field0_0x0 =
         (this->ConverterParams).FullResolution.field0_0x0;
    (__return_storage_ptr__->TileDimWithBorders).field0_0x0 =
         (this->ConverterParams).TileDimWithBorders.field0_0x0;
    piVar1 = &(__return_storage_ptr__->Viewports).Pairs.ArrayMax;
    (pTVar2->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (this->ConverterParams).Viewports.Pairs.ArrayNum;
    pTVar5 = (TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> *)
             (this->ConverterParams).Viewports.Pairs.AllocatorInstance.Data;
    (__return_storage_ptr__->Viewports).Pairs.ArrayNum = iVar4;
    if (iVar4 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar4,0,(ForAnyElementType *)pTVar2,iVar4,piVar1);
      ConstructItems<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,int>
                ((pTVar2->Pairs).AllocatorInstance.Data,pTVar5,iVar4);
    }
    pTVar3 = &__return_storage_ptr__->TileInfoPerMipLevel;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    piVar1 = &(__return_storage_ptr__->TileInfoPerMipLevel).ArrayMax;
    iVar4 = (this->ConverterParams).TileInfoPerMipLevel.ArrayNum;
    pTVar6 = (TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_> *)
             (this->ConverterParams).TileInfoPerMipLevel.AllocatorInstance.Data;
    (__return_storage_ptr__->TileInfoPerMipLevel).ArrayNum = iVar4;
    if (iVar4 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
      ConstructItems<TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,TArray<FExrReader::FTileDesc,TSizedDefaultAllocator<32>_>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar6,iVar4);
    }
    __return_storage_ptr__->NumMipLevels = (this->ConverterParams).NumMipLevels;
    __return_storage_ptr__->PixelSize = (this->ConverterParams).PixelSize;
    __return_storage_ptr__->bMipsInSeparateFiles = (this->ConverterParams).bMipsInSeparateFiles;
    __return_storage_ptr__->UpscaleMip = (this->ConverterParams).UpscaleMip;
    (__return_storage_ptr__->SourceColorSettings).Object =
         (this->ConverterParams).SourceColorSettings.Object;
    pTVar7 = (this->ConverterParams).SourceColorSettings.SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SourceColorSettings).SharedReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

