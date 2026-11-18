// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 10

// FExrImgMediaReader @ 14ea37eb0

FExrImgMediaReader * __thiscall
FExrImgMediaReader::FExrImgMediaReader
          (FExrImgMediaReader *this,TSharedRef<FImgMediaLoader,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  UClass *this_00;
  
  this->_padding_ = (longlong)&___7FExrImgMediaReader__6B_;
  *(undefined8 *)&(this->CanceledFrames).Elements = 0;
  *(undefined8 *)&(this->CanceledFrames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CanceledFrames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CanceledFrames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CanceledFrames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CanceledFrames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CanceledFrames).Elements.field_0x34 = 0;
  (this->CanceledFrames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CanceledFrames).HashSize = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->CanceledFramesCriticalSection,4000);
  *(undefined8 *)&this->PendingFrames = 0;
  *(undefined8 *)&(this->PendingFrames).field_0x8 = 0;
  *(undefined8 *)&(this->PendingFrames).field_0x20 = 0;
  *(undefined4 *)&(this->PendingFrames).field_0x28 = 0;
  *(undefined4 *)&(this->PendingFrames).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingFrames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingFrames).field_0x34 = 0;
  *(undefined8 *)&(this->PendingFrames).field_0x40 = 0;
  *(undefined4 *)&(this->PendingFrames).field_0x48 = 0;
  (this->LoaderPtr).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->LoaderPtr).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this_00 = Z_Construct_UClass_UImgMediaSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  iVar2 = *(int *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x24;
  if (iVar2 == 0) {
    iVar2 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  }
  FOpenExr::SetGlobalThreadCount((ushort)iVar2);
  return this;
}

// ~FExrImgMediaReader @ 14ea3a2f0

void __thiscall FExrImgMediaReader::~FExrImgMediaReader(FExrImgMediaReader *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  void *pvVar5;
  ForElementType<FSetElementId> FVar6;
  
  lpCriticalSection = &this->CanceledFramesCriticalSection;
  this->_padding_ = (longlong)&___7FExrImgMediaReader__6B_;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(int *)&(this->CanceledFrames).Elements.field_0x8 !=
        *(int *)&(this->CanceledFrames).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(&this->CanceledFrames);
      iVar3 = *(int *)&(this->CanceledFrames).Elements.field_0xc;
      *(undefined4 *)&(this->CanceledFrames).Elements.field_0x8 = 0;
      if (iVar3 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)&this->CanceledFrames,0,
                   (int *)&(this->CanceledFrames).Elements.field_0xc);
      }
      *(undefined4 *)&(this->CanceledFrames).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->CanceledFrames).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->CanceledFrames).Elements.field_0x28 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar4 = (this->LoaderPtr).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    *(undefined4 *)&(this->PendingFrames).field_0x48 = 0;
    pvVar5 = *(void **)&(this->PendingFrames).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FRgbaInputFile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FRgbaInputFile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FRgbaInputFile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->PendingFrames);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->CanceledFrames).HashSize = 0;
    FVar6 = (this->CanceledFrames).Hash.SecondaryData;
    if (FVar6 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar6);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this->CanceledFrames).Elements);
    this->_padding_ = (longlong)&___7IImgMediaReader__6B_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CancelFrame @ 14ea45200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FExrImgMediaReader::CancelFrame(FExrImgMediaReader *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if (5 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  lpCriticalSection = &this->CanceledFramesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->CanceledFrames,local_res8,(bool *)local_res10);
                    /* WARNING: Could not recover jumptable at 0x00014ea45268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFrameInfo @ 14ea4bf60

bool __thiscall
FExrImgMediaReader::GetFrameInfo
          (FExrImgMediaReader *this,FString *param_1,FImgMediaFrameInfo *param_2)

{
  bool bVar1;
  TSharedPtr<FImgMediaFrame,1> local_18;
  
  local_18.Object = (FImgMediaFrame *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar1 = GetInfo(param_1,param_2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return bVar1;
}

// GetInfo @ 14ea4c8a0

bool __cdecl
FExrImgMediaReader::GetInfo
          (FString *param_1,FImgMediaFrameInfo *param_2,TSharedPtr<FImgMediaFrame,1> *param_3)

{
  FImgMediaFrame *this;
  byte bVar1;
  TIntPoint<int>_u_0 TVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  TIntPoint<int> TVar7;
  FFrameRate FVar8;
  FName this_00;
  FString *pFVar9;
  FImgMediaFrameInfo *pFVar10;
  byte bVar11;
  ulonglong uVar12;
  float fVar13;
  int local_res20 [2];
  FFrameRate local_98;
  FOpenExrHeaderReader local_90;
  FString local_80;
  FImgMediaFrameInfo local_70;
  
  FOpenExrHeaderReader::FOpenExrHeaderReader(&local_90,param_1);
  bVar3 = FOpenExrHeaderReader::HasInputFile(&local_90);
  if (bVar3) {
    pwVar6 = FOpenExrHeaderReader::GetCompressionName(&local_90);
    ::FString::operator=(&param_2->CompressionName,pwVar6);
    TVar7 = FOpenExrHeaderReader::GetDataWindow(&local_90);
                    /* WARNING: Load size is inaccurate */
    (param_2->Dim).field0_0x0 = (TIntPoint<int>_u_0)*TVar7.field0_0x0;
    FVar8 = FOpenExrHeaderReader::GetFrameRate(&local_90,&local_98);
    param_2->FrameRate = *(FFrameRate *)FVar8;
    param_2->Srgb = false;
    iVar4 = FOpenExrHeaderReader::GetUncompressedSize(&local_90);
    param_2->UncompressedSize = (longlong)iVar4;
    iVar4 = FOpenExrHeaderReader::GetNumChannels(&local_90);
    param_2->NumChannels = (longlong)iVar4;
    iVar4 = 1;
    param_2->NumMipLevels = 1;
    local_res20[0] = 0;
    this_00 = FLazyName::Resolve(&IImgMediaModule::CustomFormatAttributeName);
    pFVar9 = ::FName::ToString((FName *)this_00,&local_80);
    FOpenExrHeaderReader::GetIntAttribute(&local_90,pFVar9,local_res20);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_res20[0] < 1) {
      bVar3 = FOpenExrHeaderReader::IsOptimizedForGpu(&local_90);
      pwVar6 = L"EXR GPU";
      if (!bVar3) {
        pwVar6 = L"EXR";
      }
      ::FString::operator=(&param_2->FormatName,pwVar6);
      bVar3 = FOpenExrHeaderReader::GetTileSize(&local_90,&param_2->TileDimensions);
      param_2->bHasTiles = bVar3;
      param_2->TileBorder = 0;
    }
    else {
      ::FString::operator=(&param_2->FormatName,L"EXR CUSTOM");
    }
    if (param_2->bHasTiles == false) {
      (param_2->TileDimensions).field0_0x0 = (param_2->Dim).field0_0x0;
      local_98.Numerator = 1;
      local_98.Denominator = 1;
      (param_2->NumTiles).field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
    }
    else {
      iVar5 = param_2->TileBorder * 2;
      fVar13 = (float)(param_2->Dim).field0_0x0._s_0.X;
      local_98.Numerator =
           -((int)ROUND(__real_bf000000 -
                        (fVar13 + fVar13) /
                        (float)((param_2->TileDimensions).field0_0x0._s_0.X + iVar5)) >> 1);
      fVar13 = (float)(param_2->Dim).field0_0x0._s_0.Y;
      local_98.Denominator =
           -((int)ROUND(__real_bf000000 -
                        (fVar13 + fVar13) /
                        (float)((param_2->TileDimensions).field0_0x0._s_0.Y + iVar5)) >> 1);
      TVar2._s_0.Y = local_98.Denominator;
      TVar2._s_0.X = local_98.Numerator;
      (param_2->NumTiles).field0_0x0 = TVar2;
      bVar3 = FOpenExrHeaderReader::ContainsMips(&local_90);
      if (bVar3) {
        iVar5 = FOpenExrHeaderReader::CalculateNumMipLevels(&local_90,&param_2->NumTiles);
        param_2->NumMipLevels = iVar5;
        if (1 < iVar5) {
          bVar11 = 2;
          uVar12 = param_2->UncompressedSize;
          do {
            iVar4 = iVar4 + 1;
            bVar1 = bVar11 & 0x3f;
            bVar11 = bVar11 + 2;
            uVar12 = uVar12 + (param_2->UncompressedSize >> bVar1);
          } while (iVar4 < iVar5);
          param_2->UncompressedSize = uVar12;
        }
      }
    }
    this = param_3->Object;
    if (this != (FImgMediaFrame *)0x0) {
      pFVar10 = FImgMediaFrameInfo::FImgMediaFrameInfo(&local_70,param_2);
      FImgMediaFrame::SetInfo(this,pFVar10);
    }
    if (param_2->UncompressedSize != 0) {
      iVar4 = (param_2->Dim).field0_0x0._s_0.Y;
      if ((param_2->Dim).field0_0x0._s_0.X < iVar4) {
        iVar4 = (param_2->Dim).field0_0x0._s_0.X;
      }
      if (0 < iVar4) {
        bVar3 = true;
        goto LAB_14ea4cb2d;
      }
    }
  }
  bVar3 = false;
LAB_14ea4cb2d:
  FOpenExrHeaderReader::~FOpenExrHeaderReader(&local_90);
  return bVar3;
}

// GetMipBufferTotalSize @ 14ea4d780

ulong64 __thiscall
FExrImgMediaReader::GetMipBufferTotalSize
          (FExrImgMediaReader *this,TIntPoint<int> param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = param_1.field0_0x0._4_4_ * param_1.field0_0x0._0_4_;
  if (param_2) {
    iVar1 = iVar1 * 4;
    iVar1 = (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f) +
            iVar1 / 3 + (iVar1 >> 0x1f);
  }
  return (longlong)iVar1 << 3;
}

// GetReader @ 14ea4e410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IImgMediaReader,1> * __cdecl
FExrImgMediaReader::GetReader
          (TSharedPtr<IImgMediaReader,1> *__return_storage_ptr__,
          TSharedRef<FImgMediaLoader,1> *param_1,FString *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  FExrImgMediaReader *pFVar10;
  FExrImgMediaReader *pFVar11;
  TSharedPtr<IImgMediaReader,1> *pTVar12;
  ForAnyElementType FVar13;
  IImgMediaReader IVar14;
  TRawPtrProxy<FExrImgMediaReader> local_res20;
  FImgMediaFrameInfo local_d8;
  TRawPtrProxy<FExrImgMediaReader> local_68;
  FString local_60;
  FString local_50;
  TSharedPtr<FImgMediaFrame,1> local_40;
  
  bVar7 = FPaths::FileExists(param_2);
  pFVar11 = (FExrImgMediaReader *)0x0;
  if (!bVar7) {
    __return_storage_ptr__->Object = (IImgMediaReader *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar3 == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(pFVar3);
    return __return_storage_ptr__;
  }
  local_d8.FormatName.Data.ArrayNum = ___xmm_000000010000ea600000000000000000;
  local_d8.FormatName.Data.ArrayMax = _UNK_1528a8c84;
  local_d8.FrameRate = _UNK_1528a8c88;
  local_d8.CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Object = (FImgMediaFrame *)0x0;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.CompressionName.Data.ArrayNum = 0;
  local_d8.CompressionName.Data.ArrayMax = 0;
  local_d8.FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Srgb = false;
  local_d8.UncompressedSize = 0;
  local_d8.NumChannels = 0;
  local_d8.bHasTiles = false;
  local_d8.TileBorder = 0;
  local_d8.NumMipLevels = 0;
  bVar7 = GetInfo(param_2,&local_d8,&local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (!bVar7) {
    pFVar10 = ::operator_new(0xe0);
    if (pFVar10 != (FExrImgMediaReader *)0x0) {
      pFVar11 = FExrImgMediaReader(pFVar10,param_1);
    }
    local_res20.Object = pFVar11;
    TSharedPtr<IImgMediaReader,1>::TSharedPtr<IImgMediaReader,1><FExrImgMediaReader>
              (__return_storage_ptr__,&local_res20);
    if (local_d8.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.FormatName.Data.AllocatorInstance.Data);
    }
    if (local_d8.CompressionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.CompressionName.Data.AllocatorInstance.Data);
    }
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar3 == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(pFVar3);
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_60,L"EXR CUSTOM");
  FVar13.Data = local_d8.FormatName.Data.AllocatorInstance.Data;
  if (local_d8.FormatName.Data.ArrayNum == local_60.Data.ArrayNum) {
    if (local_d8.FormatName.Data.ArrayNum < 2) {
      bVar7 = true;
    }
    else {
      iVar9 = wcscmp((wchar_t *)local_d8.FormatName.Data.AllocatorInstance.Data,
                     (wchar_t *)local_60.Data.AllocatorInstance.Data);
      bVar7 = iVar9 == 0;
    }
  }
  else {
    bVar7 = local_d8.FormatName.Data.ArrayNum + local_60.Data.ArrayNum == 1;
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
    FVar13.Data = local_d8.FormatName.Data.AllocatorInstance.Data;
  }
  if (bVar7) {
    if (1 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
      FVar13.Data = local_d8.FormatName.Data.AllocatorInstance.Data;
    }
    __return_storage_ptr__->Object = (IImgMediaReader *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    goto joined_r0x00014ea4e850;
  }
  ::FString::FString(&local_50,L"EXR GPU");
  if (local_d8.FormatName.Data.ArrayNum == local_50.Data.ArrayNum) {
    if (local_d8.FormatName.Data.ArrayNum < 2) {
      bVar7 = true;
    }
    else {
      iVar9 = wcscmp((wchar_t *)local_d8.FormatName.Data.AllocatorInstance.Data,
                     (wchar_t *)local_50.Data.AllocatorInstance.Data);
      bVar7 = iVar9 == 0;
    }
  }
  else {
    bVar7 = local_d8.FormatName.Data.ArrayNum + local_50.Data.ArrayNum == 1;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((GDynamicRHI != (FDynamicRHI *)0x0) &&
     (iVar9 = (**(code **)(GDynamicRHI->_padding_ + 0x28))(), iVar9 == 3)) {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_d8.CompressionName.Data.ArrayNum != 0) {
      FVar13.Data = local_d8.CompressionName.Data.AllocatorInstance.Data;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar13.Data,"Uncompressed");
    pTVar6 = CVarEnableUncompressedExrGpuReader.Ref;
    if (iVar9 == 0) {
      bVar8 = IsInParallelGameThread();
      if (bVar8) {
LAB_14ea4e66c:
        pFVar10 = pFVar11;
      }
      else {
        bVar8 = IsInGameThread();
        pFVar10 = (FExrImgMediaReader *)&DAT_00000001;
        if (bVar8) goto LAB_14ea4e66c;
      }
      if ((pTVar6[-4].ShadowedValue[(longlong)&pFVar10->CanceledFrames] != false) && (bVar7)) {
        pFVar10 = ::operator_new(0x188);
        if (pFVar10 == (FExrImgMediaReader *)0x0) {
          IVar14 = (IImgMediaReader)&DAT_00000010;
LAB_14ea4e793:
          if (((*(IImgMediaReader *)((longlong)IVar14 + 0xe0) == (IImgMediaReader)0x0) ||
              (*(IImgMediaReader *)((longlong)IVar14 + 0xe8) == (IImgMediaReader)0x0)) ||
             (*(int *)((longlong)*(IImgMediaReader *)((longlong)IVar14 + 0xe8) + 8) < 1)) {
            if (pFVar11 != (FExrImgMediaReader *)0x0) {
              LOCK();
              *(int *)&(pFVar11->CanceledFrames).Elements =
                   *(int *)&(pFVar11->CanceledFrames).Elements + 1;
              UNLOCK();
            }
            *(IImgMediaReader *)((longlong)IVar14 + 0xe0) = IVar14;
            if (pFVar11 != *(FExrImgMediaReader **)((longlong)IVar14 + 0xe8)) {
              if (pFVar11 != (FExrImgMediaReader *)0x0) {
                LOCK();
                puVar1 = &(pFVar11->CanceledFrames).Elements.field_0x4;
                *(int *)puVar1 = *(int *)puVar1 + 1;
                UNLOCK();
              }
              plVar4 = *(longlong **)((longlong)IVar14 + 0xe8);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
              *(FExrImgMediaReader **)((longlong)IVar14 + 0xe8) = pFVar11;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pFVar11);
          }
        }
        else {
          *(undefined4 *)&(pFVar10->CanceledFrames).Elements = 1;
          *(undefined4 *)&(pFVar10->CanceledFrames).Elements.field_0x4 = 1;
          pFVar10->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFExrImgMediaReaderGpu___00_SharedPointerInternals__6B_
          ;
          FExrImgMediaReader((FExrImgMediaReader *)&(pFVar10->CanceledFrames).Elements.field_0x8,
                             param_1);
          *(undefined8 *)&pFVar10[1].CanceledFrames.Elements.field_0x8 = 0;
          *(undefined ***)&(pFVar10->CanceledFrames).Elements.field_0x8 =
               &___7FExrImgMediaReaderGpu__6B_;
          *(undefined8 *)&pFVar10[1].CanceledFrames.Elements.field_0x10 = 0;
          InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)&pFVar10[1].CanceledFrames.Elements.field_0x18,4000);
          pFVar10[1].CanceledFrames.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          IVar14 = (IImgMediaReader)&(pFVar10->CanceledFrames).Elements.field_0x8;
          *(undefined8 *)&pFVar10[1].CanceledFrames.HashSize = 0;
          pFVar10[1].CanceledFramesCriticalSection.CriticalSection.Opaque3[0] = (void *)0x0;
          *(undefined4 *)(pFVar10[1].CanceledFramesCriticalSection.CriticalSection.Opaque3 + 1) = 0;
          *(undefined4 *)
           ((longlong)pFVar10[1].CanceledFramesCriticalSection.CriticalSection.Opaque3 + 0xc) = 0x80
          ;
          *(undefined4 *)
           ((longlong)pFVar10[1].CanceledFramesCriticalSection.CriticalSection.Opaque3 + 0x14) = 0;
          *(undefined4 *)(pFVar10[1].CanceledFramesCriticalSection.CriticalSection.Opaque3 + 2) =
               0xffffffff;
          *(undefined8 *)&pFVar10[1].PendingFrames.field_0x8 = 0;
          *(undefined4 *)&pFVar10[1].PendingFrames.field_0x10 = 0;
          *(undefined2 *)&pFVar10[1].PendingFrames.field_0x20 = 0;
          *(undefined8 *)&pFVar10[1].PendingFrames.field_0x18 = 0xffffffffffffffff;
          pFVar11 = pFVar10;
          if (IVar14 != (IImgMediaReader)0x0) goto LAB_14ea4e793;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TSharedPtr<IImgMediaReader,1> *)(*pcVar5)();
            return pTVar12;
          }
        }
        __return_storage_ptr__->Object = (IImgMediaReader *)IVar14;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)pFVar11;
        if (pFVar11 != (FExrImgMediaReader *)0x0) {
          LOCK();
          *(int *)&(pFVar11->CanceledFrames).Elements =
               *(int *)&(pFVar11->CanceledFrames).Elements + 1;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        FVar13.Data = local_d8.FormatName.Data.AllocatorInstance.Data;
        goto joined_r0x00014ea4e850;
      }
    }
  }
  pFVar10 = ::operator_new(0xe0);
  if (pFVar10 != (FExrImgMediaReader *)0x0) {
    pFVar11 = FExrImgMediaReader(pFVar10,param_1);
  }
  local_68.Object = pFVar11;
  TSharedPtr<IImgMediaReader,1>::TSharedPtr<IImgMediaReader,1><FExrImgMediaReader>
            (__return_storage_ptr__,&local_68);
  FVar13.Data = local_d8.FormatName.Data.AllocatorInstance.Data;
joined_r0x00014ea4e850:
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (local_d8.CompressionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.CompressionName.Data.AllocatorInstance.Data);
  }
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// ReadFrame @ 14ea55c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FExrImgMediaReader::ReadFrame
          (FExrImgMediaReader *this,int param_1,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_2,TSharedPtr<FImgMediaFrame,1> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  int iVar4;
  FImgMediaLoader *this_00;
  FScriptContainerElement *_Src;
  code *pcVar5;
  atomic<int> aVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  undefined4 uVar9;
  int iVar10;
  FString *pFVar11;
  void *pvVar12;
  FImgMediaFrame *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FImgMediaTileSelection *pFVar15;
  int iVar16;
  undefined1 *puVar17;
  longlong lVar18;
  FImgMediaMipTiles *pFVar19;
  ulong64 uVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  bool bVar23;
  TIntPoint<int>_u_0 local_160;
  FString local_158;
  FRgbaInputFile local_148;
  int local_140 [2];
  int local_138;
  undefined1 local_130 [24];
  undefined1 local_118 [16];
  TIntPoint<int>_u_0 local_108;
  ForAnyElementType local_100;
  void *local_f8;
  FFrameRate FStack_f0;
  bool local_e8;
  ulong64 local_e0;
  ulong64 local_d8;
  bool local_d0;
  undefined8 local_bc;
  undefined1 local_a8 [76];
  TIntPoint<int>_u_0 local_5c;
  TIntPoint<int>_u_0 local_54;
  int local_4c;
  int local_48;
  
  pTVar22 = (this->LoaderPtr).WeakReferenceCount.ReferenceController;
  if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ea55ce5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    return false;
  }
  aVar6 = pTVar22->SharedReferenceCount;
  do {
    if (aVar6 == (atomic<int>)0x0) {
      pTVar22 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_14ea55ce5;
    }
    LOCK();
    aVar8 = pTVar22->SharedReferenceCount;
    bVar23 = aVar6 == aVar8;
    if (bVar23) {
      pTVar22->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
      aVar8 = aVar6;
    }
    UNLOCK();
    aVar6 = aVar8;
  } while (!bVar23);
  this_00 = (this->LoaderPtr).Object;
  local_130._16_8_ = this_00;
  if (this_00 == (FImgMediaLoader *)0x0) goto LAB_14ea55ce5;
  iVar3 = (this_00->TilingDescription).TileNum.field0_0x0._s_0.Y;
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  iVar4 = (this_00->TilingDescription).TileNum.field0_0x0._s_0.X;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_4_ = 0;
  local_118._12_4_ = 0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = ___xmm_000000010000ea600000000000000000;
  FStack_f0 = _UNK_1528a8c88;
  local_e8 = false;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = false;
  local_bc = 0;
  if ((param_3->Object == (FImgMediaFrame *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if ((param_3->Object->Data).Object == (void *)0x0) {
    pFVar11 = FImgMediaLoader::GetImagePath(this_00,param_1,0);
    bVar23 = GetInfo(pFVar11,(FImgMediaFrameInfo *)local_118,param_3);
    if (bVar23) {
      uVar9 = local_108._s_0.Y;
      if (local_108._s_0.X < local_108._s_0.Y) {
        uVar9 = local_108._s_0.X;
      }
      if (0 < (int)uVar9) {
        iVar16 = local_108._s_0.Y * local_108._s_0.X;
        if (1 < this_00->NumMipLevels) {
          iVar16 = iVar16 * 4;
          iVar16 = iVar16 / 3 + (iVar16 >> 0x1f) +
                   (int)(((longlong)iVar16 / 3 + ((longlong)iVar16 >> 0x3f) & 0xffffffffU) >> 0x1f);
        }
        uVar20 = (longlong)iVar16 << 3;
        local_e0 = uVar20;
        pvVar12 = FMemory::Malloc(uVar20,0x40);
        pFVar13 = TSharedPtr<FImgMediaFrame,1>::operator->(param_3);
        LOCK();
        pFVar13->Format = (atomic<EMediaTextureSampleFormat>)0xd;
        UNLOCK();
        pFVar13 = TSharedPtr<FImgMediaFrame,1>::operator->(param_3);
        local_130._0_8_ = pvVar12;
        pTVar14 = ::operator_new(0x20);
        local_130._8_8_ = pTVar21;
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          pTVar14[1]._padding_ = uVar20;
          pTVar14->_padding_ =
               (longlong)
               &SharedPointerInternals::
                TReferenceControllerWithDeleter<void,`FExrImgMediaReader::ReadFrame'::`8'::<lambda_1>,1>
                ::_vftable_;
          pTVar14->SharedReferenceCount = (atomic<int>)0x1;
          pTVar14->WeakReferenceCount = (atomic<int>)0x1;
          *(void **)&pTVar14[1].SharedReferenceCount = pvVar12;
          local_130._8_8_ = pTVar14;
        }
        if (pFVar13 != (FImgMediaFrame *)local_130) {
          (pFVar13->Data).Object = pvVar12;
          local_130._0_8_ = (void *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar13->Data).SharedReferenceCount,(FSharedReferencer<1> *)(local_130 + 8));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_130._8_8_);
        pFVar13 = TSharedPtr<FImgMediaFrame,1>::operator->(param_3);
        pFVar19 = &pFVar13->MipTilesPresent;
        if (pFVar19 == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar19);
        TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                 *)&(pFVar13->MipTilesPresent).MipTiles);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar19);
        aVar2 = (atomic<unsigned_int>)(local_108._s_0.X * 8);
        pFVar13 = TSharedPtr<FImgMediaFrame,1>::operator->(param_3);
        LOCK();
        pFVar13->Stride = aVar2;
        UNLOCK();
        goto LAB_14ea56029;
      }
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar23 = false;
  }
  else {
    if ((param_3->Object == (FImgMediaFrame *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar13 = param_3->Object;
    lpCriticalSection = &pFVar13->InfoCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString((FString *)local_a8,&(pFVar13->Info).CompressionName);
    local_a8._16_8_ = (pFVar13->Info).Dim.field0_0x0;
    ::FString::FString((FString *)(local_a8 + 0x18),&(pFVar13->Info).FormatName);
    local_a8._40_8_ = (pFVar13->Info).FrameRate;
    local_a8[0x30] = (pFVar13->Info).Srgb;
    local_a8._56_8_ = (pFVar13->Info).UncompressedSize;
    local_a8._64_8_ = (pFVar13->Info).NumChannels;
    local_a8[0x48] = (pFVar13->Info).bHasTiles;
    local_5c = (pFVar13->Info).NumTiles.field0_0x0;
    local_54 = (pFVar13->Info).TileDimensions.field0_0x0;
    local_4c = (pFVar13->Info).TileBorder;
    local_48 = (pFVar13->Info).NumMipLevels;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FImgMediaFrameInfo::operator=((FImgMediaFrameInfo *)local_118,(FImgMediaFrameInfo *)local_a8);
    if ((FScriptContainerElement *)local_a8._24_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._24_8_);
    }
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
LAB_14ea56029:
    if ((param_3->Object == (FImgMediaFrame *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar23)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pvVar12 = (param_3->Object->Data).Object;
    local_160._s_0.Y = local_108._s_0.Y;
    local_160._s_0.X = local_108._s_0.X;
    local_138 = this_00->NumMipLevels;
    if (0 < local_138) {
      do {
        iVar16 = (int)pTVar21;
        if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
          puVar17 = &param_2->field_0x38;
          if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
            puVar17 = *(undefined1 **)&param_2->field_0x40;
          }
          iVar10 = *(int *)(puVar17 +
                           ((ulonglong)(*(int *)&param_2->field_0x48 - 1) & (ulonglong)pTVar21) * 4)
          ;
          if (iVar10 != -1) {
            do {
              if (*(int *)(*(longlong *)param_2 + (longlong)iVar10 * 0x50) == iVar16) {
                pFVar15 = TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                          ::FindChecked((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                                         *)param_2,iVar16);
                if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar23)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                bVar23 = FImgMediaMipTiles::ContainsTiles
                                   (&param_3->Object->MipTilesPresent,iVar16,pFVar15);
                if (!bVar23) {
                  pFVar11 = FImgMediaLoader::GetImagePath
                                      ((FImgMediaLoader *)local_130._16_8_,param_1,iVar16);
                  local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_158.Data.ArrayNum = (pFVar11->Data).ArrayNum;
                  lVar18 = (longlong)local_158.Data.ArrayNum;
                  _Src = (pFVar11->Data).AllocatorInstance.Data;
                  if (local_158.Data.ArrayNum == 0) {
                    local_158.Data.ArrayMax = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)&local_158,
                               local_158.Data.ArrayNum,&local_158.Data.ArrayMax);
                    memcpy(local_158.Data.AllocatorInstance.Data,_Src,lVar18 * 2);
                  }
                  if (iVar3 * iVar4 < 2) {
                    FRgbaInputFile::FRgbaInputFile(&local_148,&local_158,2);
                    bVar23 = FRgbaInputFile::HasInputFile(&local_148);
                    if (bVar23) {
                      FRgbaInputFile::SetFrameBuffer
                                (&local_148,pvVar12,(TIntPoint<int> *)&local_160._s_0);
                      FRgbaInputFile::ReadPixels(&local_148,0,local_160._s_0.Y + -1);
                      if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar23)) {
                        pcVar5 = (code *)swi(3);
                        uVar7 = (*pcVar5)();
                        return (bool)uVar7;
                      }
                      pFVar13 = param_3->Object;
                      pFVar19 = &pFVar13->MipTilesPresent;
                      local_140[0] = iVar16;
                      if (pFVar19 == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::ReportNotNullPtr();
                      }
                      EnterCriticalSection((LPCRITICAL_SECTION)pFVar19);
                      TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                      ::Emplace<int_const_&,FImgMediaTileSelection_const_&>
                                ((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                                  *)&(pFVar13->MipTilesPresent).MipTiles,local_140,pFVar15);
                      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar19);
                      if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar23)) {
                        pcVar5 = (code *)swi(3);
                        uVar7 = (*pcVar5)();
                        return (bool)uVar7;
                      }
                      LOCK();
                      paVar1 = &param_3->Object->NumTilesRead;
                      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                      UNLOCK();
                    }
                    else if (1 < (byte)LogImgMedia._0_1_) {
                      UE::Logging::Private::BasicLog<2>
                                (&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
                    }
                    FRgbaInputFile::~FRgbaInputFile(&local_148);
                  }
                  else if (1 < (byte)LogImgMedia._0_1_) {
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
                  }
                  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_158.Data.AllocatorInstance.Data);
                  }
                }
                break;
              }
              iVar10 = *(int *)(*(longlong *)param_2 + 0x48 + (longlong)iVar10 * 0x50);
            } while (iVar10 != -1);
          }
        }
        pTVar21 = (TReferenceControllerBase<1> *)(ulonglong)(iVar16 + 1U);
        pvVar12 = (void *)((longlong)pvVar12 + (longlong)(local_160._s_0.X * local_160._s_0.Y * 8));
        local_160._s_0.Y = local_160._s_0.Y / 2;
        local_160._s_0.X = local_160._s_0.X / 2;
      } while ((int)(iVar16 + 1U) < local_138);
    }
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar23 = true;
  }
  return bVar23;
}

// ReadTiles @ 14ea58c30

/* WARNING: Enum "Type": Some values do not have unique names */

EReadResult __thiscall
FExrImgMediaReader::ReadTiles
          (FExrImgMediaReader *this,ushort *param_1,long64 param_2,FString *param_3,
          TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *param_4,
          FSampleConverterParameters *param_5,int param_6,
          TArray<UE::Math::TIntPoint<__int64>,TSizedDefaultAllocator<32>_> *param_7)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  code *pcVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  EReadResult EVar12;
  EReadResult EVar13;
  EReadResult EVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 local_108 [4];
  EReadResult local_104;
  EReadResult local_100;
  EReadResult local_fc;
  int local_f8;
  int iStack_f4;
  FScriptContainerElement *local_f0;
  uint local_e8 [2];
  EReadResult local_e0;
  int local_dc;
  EReadResult local_d8;
  uint local_d4;
  long64 local_d0;
  long64 local_c8;
  long64 local_c0;
  FExrReader local_b8;
  EReadResult local_98;
  EReadResult EStack_94;
  FScriptContainerElement *local_90;
  longlong local_88;
  long64 lStack_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  LPCRITICAL_SECTION local_68;
  FString local_60;
  FString local_50;
  
  local_b8.FileHandle = (_iobuf *)0x0;
  local_b8.FileLength = 0;
  TVar1 = (param_5->FullResolution).field0_0x0._s_0;
  iVar11 = 1 << ((byte)param_6 & 0x1f);
  iVar5 = (int)((longlong)
                ((ulonglong)(uint)(TVar1.X >> 0x1f) << 0x20 | (ulonglong)TVar1 & 0xffffffff) /
               (longlong)iVar11);
  iStack_f4 = TVar1.Y;
  local_100 = Success;
  local_b8.LineOrTileOffsetsPerLevel.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iStack_f4 = iStack_f4 / iVar11;
  iVar11 = 1;
  _local_f8 = CONCAT44(iStack_f4,iVar5);
  fVar18 = (float)iVar5;
  local_b8.LineOrTileOffsetsPerLevel.ArrayNum = 0;
  local_b8.LineOrTileOffsetsPerLevel.ArrayMax = 0;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  fVar17 = (float)iStack_f4;
  EVar12 = -((int)ROUND(__real_bf000000 -
                        (fVar18 + fVar18) / (float)(param_5->TileDimWithBorders).field0_0x0._s_0.X)
            >> 1);
  local_fc = -((int)ROUND(__real_bf000000 -
                          (fVar17 + fVar17) / (float)(param_5->TileDimWithBorders).field0_0x0._s_0.Y
                         ) >> 1);
  if (param_5->bMipsInSeparateFiles == false) {
    iVar11 = param_5->NumMipLevels;
  }
  local_104 = EVar12;
  FExrReader::CalculateTileOffsets
            (&local_78,&param_5->TileInfoPerMipLevel,&param_5->FullResolution,
             &param_5->TileDimWithBorders,iVar11,(longlong)param_5->PixelSize);
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId88,"FExrImgMediaReader_ReadTiles_OpenFile",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReader.cpp"
               ,0x58);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId88);
  }
  pFVar6 = ::FString::FString(&local_50,param_3);
  bVar3 = FExrReader::OpenExrAndPrepareForPixelReading(&local_b8,pFVar6,&local_78);
  EVar14 = Fail;
  if (bVar3) {
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    local_c0 = 0;
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId96,"FExrImgMediaReader_ReadTiles_ReadTiles",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReader.cpp"
                 ,0x60);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId96);
    }
    local_d4 = param_4->ArrayNum;
    uVar7 = (ulonglong)(int)local_d4;
    pFVar15 = (param_4->AllocatorInstance).Data;
    pFVar10 = pFVar15 + uVar7 * 0x10;
    local_f0 = pFVar10;
    while( true ) {
      local_90 = pFVar15;
      if (param_4->ArrayNum != (int)uVar7) {
        local_108[0] = 0;
        `TCheckedPointerIterator<UE::Math::TIntRect<int>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_108);
      }
      if (pFVar15 == pFVar10) break;
      local_e0 = EVar12;
      if ((int)*(EReadResult *)(pFVar15 + 8) < (int)EVar12) {
        local_e0 = *(EReadResult *)(pFVar15 + 8);
      }
      local_d8 = local_fc;
      if ((int)*(EReadResult *)(pFVar15 + 0xc) < (int)local_fc) {
        local_d8 = *(EReadResult *)(pFVar15 + 0xc);
      }
      EVar14 = Fail;
      if (0 < (int)*(EReadResult *)pFVar15) {
        EVar14 = *(EReadResult *)pFVar15;
      }
      EVar13 = Fail;
      if (0 < (int)*(EReadResult *)(pFVar15 + 4)) {
        EVar13 = *(EReadResult *)(pFVar15 + 4);
      }
      local_98 = local_e0;
      EStack_94 = local_d8;
      if ((int)EVar13 < (int)local_d8) {
        local_68 = (LPCRITICAL_SECTION)&this->CanceledFramesCriticalSection;
        local_dc = local_e0 - EVar14;
        iVar11 = EVar12 * EVar13 + EVar14;
        EVar14 = EVar13;
        if (local_68 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        do {
          lpCriticalSection = local_68;
          EVar13 = EVar13 + Success;
          EnterCriticalSection(local_68);
          local_e8[0] = param_5->FrameId;
          if ((*(int *)&(this->CanceledFrames).Elements.field_0x8 !=
               *(int *)&(this->CanceledFrames).Elements.field_0x34) &&
             (iVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                                (&this->CanceledFrames,local_e8[0],(int *)local_e8), 0 < iVar5)) {
            if (5 < (byte)LogImgMedia._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
            }
            local_100 = Cancelled;
            LeaveCriticalSection(lpCriticalSection);
            pFVar10 = local_f0;
            EVar12 = local_104;
            break;
          }
          LeaveCriticalSection(lpCriticalSection);
          if ((EVar13 == local_fc) && (local_e0 == local_104)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          iVar5 = param_6;
          if (param_5->bMipsInSeparateFiles != false) {
            iVar5 = 0;
          }
          FExrReader::SeekTileWithinFile(&local_b8,iVar11,iVar5,&local_c0);
          local_c8 = 0;
          local_d0 = 0;
          bVar4 = FExrReader::GetByteOffsetForTile(&local_b8,iVar11,iVar5,&local_c8);
          if ((!bVar4) ||
             (bVar4 = FExrReader::GetByteOffsetForTile(&local_b8,local_dc + iVar11,iVar5,&local_d0),
             !bVar4)) {
LAB_14ea5911f:
            local_100 = Fail;
            pFVar10 = local_f0;
            EVar12 = local_104;
            break;
          }
          if (bVar3) {
            lVar9 = param_2 - local_c0;
            if (local_d0 - local_c8 < param_2 - local_c0) {
              lVar9 = local_d0 - local_c8;
            }
          }
          else {
            lVar9 = local_d0 - local_c8;
          }
          bVar3 = FExrReader::ReadExrImageChunk
                            (&local_b8,(void *)((longlong)param_1 + local_c0),lVar9);
          if (!bVar3) goto LAB_14ea5911f;
          pFVar15 = (param_7->AllocatorInstance).Data;
          local_88 = local_c0;
          lStack_80 = lVar9;
          if (((pFVar15 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < pFVar15 + (longlong)param_7->ArrayMax * 0x10))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            EVar12 = (*pcVar2)();
            return EVar12;
          }
          iVar5 = param_7->ArrayNum;
          if (iVar5 == param_7->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_7->AllocatorInstance,&param_7->ArrayMax);
          }
          iVar11 = iVar11 + local_104;
          EVar14 = EVar14 + Success;
          param_7->ArrayNum = iVar5 + 1;
          pFVar15 = (param_7->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
          *(longlong *)pFVar15 = local_88;
          *(long64 *)(pFVar15 + 8) = lStack_80;
          pFVar10 = local_f0;
          EVar12 = local_104;
        } while ((int)EVar14 < (int)local_d8);
      }
      pFVar15 = local_90 + 0x10;
      uVar7 = (ulonglong)local_d4;
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    ::FString::PrintfImpl(&local_60,L"FExrImgMediaReaderGpu_CloseFile %d");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar8.Data = local_60.Data.AllocatorInstance.Data;
    }
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar8.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\ExrImgMediaReader.cpp"
                 ,0x97);
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    bVar3 = FExrReader::CloseExrFile(&local_b8);
    EVar14 = local_100;
    if (!bVar3) {
      EVar14 = Fail;
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  DestructItems<TArray<__int64,TSizedDefaultAllocator<32>_>,int>
            ((TArray<__int64,TSizedDefaultAllocator<32>_> *)
             local_b8.LineOrTileOffsetsPerLevel.AllocatorInstance.Data,
             local_b8.LineOrTileOffsetsPerLevel.ArrayNum);
  if ((TArray<__int64,TSizedDefaultAllocator<32>_> *)
      local_b8.LineOrTileOffsetsPerLevel.AllocatorInstance.Data !=
      (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b8.LineOrTileOffsetsPerLevel.AllocatorInstance.Data);
  }
  return EVar14;
}

// UncancelFrame @ 14ea5db80

void __thiscall FExrImgMediaReader::UncancelFrame(FExrImgMediaReader *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int local_res8 [2];
  
  lpCriticalSection = &this->CanceledFramesCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = param_1;
    if (*(int *)&(this->CanceledFrames).Elements.field_0x8 !=
        *(int *)&(this->CanceledFrames).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&this->CanceledFrames,param_1,local_res8);
    }
                    /* WARNING: Could not recover jumptable at 0x00014ea5dbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

