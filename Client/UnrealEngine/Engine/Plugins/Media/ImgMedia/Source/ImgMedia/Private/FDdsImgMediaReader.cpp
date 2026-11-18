// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 6

// FDdsImgMediaReader @ 14ea37e80

FDdsImgMediaReader * __thiscall
FDdsImgMediaReader::FDdsImgMediaReader
          (FDdsImgMediaReader *this,TSharedRef<FImgMediaLoader,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FDdsImgMediaReader__6B_;
  (this->LoaderPtr).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->LoaderPtr).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FDdsImgMediaReader @ 14ea3a2a0

void __thiscall FDdsImgMediaReader::~FDdsImgMediaReader(FDdsImgMediaReader *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FDdsImgMediaReader__6B_;
  pTVar3 = (this->LoaderPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7IImgMediaReader__6B_;
  return;
}

// CancelFrame @ 14ea451f0

void __thiscall FDdsImgMediaReader::CancelFrame(FDdsImgMediaReader *this,int param_1)

{
  return;
}

// GetFrameInfo @ 14ea4bcf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDdsImgMediaReader::GetFrameInfo
          (FDdsImgMediaReader *this,FString *param_1,FImgMediaFrameInfo *param_2)

{
  bool bVar1;
  int iVar2;
  IFileManager *pIVar3;
  FImgMediaFrameInfo *pFVar4;
  uint uVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  wchar_t *local_res10 [2];
  EMediaTextureSampleFormat local_res20 [2];
  TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> local_b8;
  FDdsReader local_b0;
  FImgMediaFrameInfo local_90;
  
  ::FString::FString(&local_b0.Filename,param_1);
  pIVar3 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_b0.ArFileReader.Ptr = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,pwVar6,0);
  iVar8 = 0;
  local_b0.StartSeekPos = 0;
  FDdsReader::ReadHeaderAndPrepare(&local_b0);
  if (local_b8.Ptr == (FDDSFile *)0x0) {
    if (2 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString_const_&>
                ((FLogCategoryBase *)&LogImgMedia,&::LOG_Static,param_1);
      bVar1 = false;
      goto LAB_14ea4bed6;
    }
  }
  else {
    bVar1 = ImgMedia::DDS::GetMediaTextureSampleFormat
                      (&(local_b8.Ptr)->DXGIFormat,local_res20,(bool *)local_res10);
    if (bVar1) {
      pFVar9 = ((local_b8.Ptr)->Mips).AllocatorInstance.Data;
      iVar2 = ((local_b8.Ptr)->Mips).ArrayNum;
      pFVar7 = pFVar9 + (longlong)iVar2 * 0x30;
      while( true ) {
        if (((local_b8.Ptr)->Mips).ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar9 == pFVar7) break;
        uVar5 = *(uint *)(pFVar9 + 4);
        if (*(uint *)pFVar9 < *(uint *)(pFVar9 + 4)) {
          uVar5 = *(uint *)pFVar9;
        }
        if (uVar5 < 4) break;
        iVar8 = iVar8 + 1;
        pFVar9 = pFVar9 + 0x30;
      }
      iVar2 = 0xf;
      if (iVar8 < 0xf) {
        iVar2 = iVar8;
      }
      if (((iVar2 < 2) || ((char)local_res10[0] == '\0')) ||
         ((((local_b8.Ptr)->Width & (local_b8.Ptr)->Width - 1) == 0 &&
          (((local_b8.Ptr)->Height & (local_b8.Ptr)->Height - 1) == 0)))) {
        pFVar4 = ImgMedia::DDS::GetFrameInfo(&local_90,&local_b8);
        FImgMediaFrameInfo::operator=(param_2,pFVar4);
        if (local_90.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.FormatName.Data.AllocatorInstance.Data);
        }
        if (local_90.CompressionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_90.CompressionName.Data.AllocatorInstance.Data);
        }
        bVar1 = true;
        goto LAB_14ea4bed6;
      }
      if (1 < (byte)LogImgMedia._0_1_) {
        UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord>
                  ((FLogCategoryBase *)&LogImgMedia,&::LOG_Static);
      }
    }
    else if (1 < (byte)LogImgMedia._0_1_) {
      local_res10[0] = UE::DDS::DXGIFormatGetName((local_b8.Ptr)->DXGIFormat);
      UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*>
                ((FLogCategoryBase *)&LogImgMedia,&::LOG_Static,local_res10);
      bVar1 = false;
      goto LAB_14ea4bed6;
    }
  }
  bVar1 = false;
LAB_14ea4bed6:
  if (local_b8.Ptr != (FDDSFile *)0x0) {
    pFVar9 = ((local_b8.Ptr)->MipRawData).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    pFVar9 = ((local_b8.Ptr)->Mips).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    ::operator_delete(local_b8.Ptr,0x48);
  }
  if (local_b0.ArFileReader.Ptr != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_b0.ArFileReader.Ptr)(local_b0.ArFileReader.Ptr,1);
  }
  if (local_b0.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Filename.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// ReadFrame @ 14ea554d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDdsImgMediaReader::ReadFrame
          (FDdsImgMediaReader *this,int param_1,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_2,TSharedPtr<FImgMediaFrame,1> *param_3)

{
  atomic<int> *paVar1;
  atomic<unsigned_int> aVar2;
  FImgMediaLoader *this_00;
  FImgMediaFrame *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> TVar6;
  atomic<EMediaTextureSampleFormat> aVar7;
  undefined1 uVar8;
  atomic<int> aVar9;
  int iVar10;
  uint uVar11;
  FString *pFVar12;
  IFileManager *pIVar13;
  void *pvVar14;
  FImgMediaFrameInfo *pFVar15;
  FImgMediaTileSelection *pFVar16;
  ForAnyElementType FVar17;
  wchar_t *pwVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong64 uVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  FImgMediaMipTiles *pFVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  TReferenceControllerBase<1> *pTVar28;
  uint uVar29;
  ulonglong uVar30;
  bool bVar31;
  bool bVar32;
  undefined1 local_res8 [8];
  TUniquePtr<UE::DDS::FDDSFile,TDefaultDelete<UE::DDS::FDDSFile>_> local_138;
  bool local_130 [4];
  uint local_12c;
  longlong local_128;
  atomic<EMediaTextureSampleFormat> local_120 [2];
  uint local_118 [2];
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  FDdsReader local_e8;
  void *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FString local_b8;
  FImgMediaFrameInfo local_a8;
  
  ::FString::PrintfImpl(&local_b8,L"DdsImgMedia.ReadFrame %d");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar17.Data = local_b8.Data.AllocatorInstance.Data;
  }
  bVar31 = -1 < CpuChannel->Enabled;
  if (bVar31) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar17.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Readers\\DdsImgMediaReader.cpp"
               ,0x140);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  pTVar28 = (this->LoaderPtr).WeakReferenceCount.ReferenceController;
  local_c0 = pTVar28;
  if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar28->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar28 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea55582;
      }
      LOCK();
      aVar9 = pTVar28->SharedReferenceCount;
      bVar32 = aVar5 == aVar9;
      if (bVar32) {
        pTVar28->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar9 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar9;
    } while (!bVar32);
    this_00 = (this->LoaderPtr).Object;
    if ((this_00 != (FImgMediaLoader *)0x0) &&
       (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
      pFVar12 = FImgMediaLoader::GetImagePath(this_00,param_1,0);
      ::FString::FString(&local_e8.Filename,pFVar12);
      pIVar13 = IFileManager::Get();
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      local_e8.ArFileReader.Ptr =
           (FArchive *)(**(code **)((longlong)*pIVar13 + 0x18))(pIVar13,pwVar18,0);
      local_e8.StartSeekPos = 0;
      FDdsReader::ReadHeaderAndPrepare(&local_e8);
      if (local_138.Ptr != (FDDSFile *)0x0) {
        local_110 = 0;
        iVar10 = ImgMedia::DDS::GetMipCount(&local_138);
        uVar30 = 0;
        local_12c = 0;
        if (0 < iVar10) {
          local_c8 = (void *)(longlong)iVar10;
          local_100 = 0;
          local_108 = 0;
          do {
            lVar27 = local_100;
            TVar6.Ptr = local_138.Ptr;
            uVar29 = (uint)uVar30;
            uVar11 = 0;
            if ((int)uVar29 < ((local_138.Ptr)->Mips).ArrayNum) {
              uVar11 = ~uVar29 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            local_128 = *(longlong *)(((TVar6.Ptr)->Mips).AllocatorInstance.Data + lVar27 + 0x20);
            if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
              puVar19 = &param_2->field_0x38;
              if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
                puVar19 = *(undefined1 **)&param_2->field_0x40;
              }
              iVar10 = *(int *)(puVar19 + (*(int *)&param_2->field_0x48 - 1 & uVar30) * 4);
              if (iVar10 != -1) {
                do {
                  if (*(uint *)(*(longlong *)param_2 + (longlong)iVar10 * 0x50) == uVar29)
                  goto LAB_14ea5576e;
                  iVar10 = *(int *)(*(longlong *)param_2 + 0x48 + (longlong)iVar10 * 0x50);
                } while (iVar10 != -1);
              }
            }
            iVar10 = -1;
LAB_14ea5576e:
            if ((param_3->Object == (FImgMediaFrame *)0x0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar32)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            pFVar3 = param_3->Object;
            pFVar25 = &pFVar3->MipTilesPresent;
            if (pFVar25 == (FImgMediaMipTiles *)0x0) {
LAB_14ea55c7e:
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar25);
            if (*(int *)&(pFVar3->MipTilesPresent).MipTiles.field_0x8 !=
                *(int *)&(pFVar3->MipTilesPresent).MipTiles.field_0x34) {
              puVar19 = *(undefined1 **)&(pFVar3->MipTilesPresent).MipTiles.field_0x40;
              puVar20 = &(pFVar3->MipTilesPresent).MipTiles.field_0x38;
              if (puVar19 != (undefined1 *)0x0) {
                puVar20 = puVar19;
              }
              iVar22 = *(int *)(puVar20 +
                               (*(int *)&(pFVar3->MipTilesPresent).MipTiles.field_0x48 - 1 & uVar30)
                               * 4);
              if (iVar22 != -1) {
                lVar27 = *(longlong *)&(pFVar3->MipTilesPresent).MipTiles;
                do {
                  if (*(uint *)(lVar27 + (longlong)iVar22 * 0x50) == uVar29) goto LAB_14ea557fe;
                  iVar22 = *(int *)(lVar27 + 0x48 + (longlong)iVar22 * 0x50);
                } while (iVar22 != -1);
              }
            }
            iVar22 = -1;
LAB_14ea557fe:
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar25);
            lVar27 = local_128;
            if ((iVar10 != -1) && (iVar22 == -1)) {
              if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar32)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              TVar6.Ptr = local_138.Ptr;
              if ((param_3->Object->Data).Object == (void *)0x0) {
                uVar21 = 0;
                iVar10 = ((local_138.Ptr)->Mips).ArrayNum;
                pFVar23 = ((local_138.Ptr)->Mips).AllocatorInstance.Data;
                pFVar26 = pFVar23 + (longlong)iVar10 * 0x30;
                while( true ) {
                  if (((TVar6.Ptr)->Mips).ArrayNum != iVar10) {
                    local_res8[0] = 0;
                    `TCheckedPointerIterator<UE::DDS::FDDSMip,int,0>::operator!='::__l2::<lambda_1>
                    ::operator()(local_res8);
                  }
                  if (pFVar23 == pFVar26) break;
                  uVar11 = *(uint *)(pFVar23 + 4);
                  if (*(uint *)pFVar23 < *(uint *)(pFVar23 + 4)) {
                    uVar11 = *(uint *)pFVar23;
                  }
                  if (uVar11 < 4) break;
                  uVar21 = uVar21 + *(longlong *)(pFVar23 + 0x20);
                  pFVar23 = pFVar23 + 0x30;
                }
                pvVar14 = FMemory::Malloc(uVar21,0x40);
                ImgMedia::DDS::GetMediaTextureSampleFormat
                          (&(local_138.Ptr)->DXGIFormat,(EMediaTextureSampleFormat *)local_120,
                           local_130);
                if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar32)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                pFVar3 = param_3->Object;
                local_f8._0_8_ = pvVar14;
                local_f8._8_8_ = ::operator_new(0x18);
                if ((TReferenceControllerBase<1> *)local_f8._8_8_ !=
                    (TReferenceControllerBase<1> *)0x0) {
                  ((TReferenceControllerBase<1> *)local_f8._8_8_)->SharedReferenceCount =
                       (atomic<int>)0x1;
                  ((TReferenceControllerBase<1> *)local_f8._8_8_)->_padding_ =
                       (longlong)
                       &SharedPointerInternals::
                        TReferenceControllerWithDeleter<void,`FDdsImgMediaReader::ReadFrame'::`37'::<lambda_1>,1>
                        ::_vftable_;
                  ((TReferenceControllerBase<1> *)local_f8._8_8_)->WeakReferenceCount =
                       (atomic<int>)0x1;
                  ((TReferenceControllerBase<1> *)(local_f8._8_8_ + 0x10))->_padding_ =
                       (longlong)pvVar14;
                }
                if (pFVar3 != (FImgMediaFrame *)local_f8) {
                  (pFVar3->Data).Object = pvVar14;
                  local_f8._0_8_ = (void *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            (&(pFVar3->Data).SharedReferenceCount,
                             (FSharedReferencer<1> *)(local_f8 + 8));
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)local_f8._8_8_);
                TVar6.Ptr = local_138.Ptr;
                if ((((local_138.Ptr)->Mips).ArrayNum < 1) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                aVar2 = *(atomic<unsigned_int> *)(((TVar6.Ptr)->Mips).AllocatorInstance.Data + 0x10)
                ;
                if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar32)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                LOCK();
                param_3->Object->Stride = aVar2;
                UNLOCK();
                if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar32)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                pFVar3 = param_3->Object;
                pFVar15 = ImgMedia::DDS::GetFrameInfo(&local_a8,&local_138);
                FImgMediaFrame::SetInfo(pFVar3,pFVar15);
                aVar7 = local_120[0];
                if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar32)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                LOCK();
                param_3->Object->Format = aVar7;
                UNLOCK();
                if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar32)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                pFVar3 = param_3->Object;
                pFVar25 = &pFVar3->MipTilesPresent;
                if (pFVar25 == (FImgMediaMipTiles *)0x0) goto LAB_14ea55c7e;
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar25);
                TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                ::Reset((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                         *)&(pFVar3->MipTilesPresent).MipTiles);
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar25);
                uVar29 = local_12c;
              }
              if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar32)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              lVar24 = (longlong)(param_3->Object->Data).Object + local_110;
              lVar27 = local_128;
              if (local_e8.ArFileReader.Ptr != (FArchive *)0x0) {
                (**(code **)(*(longlong *)local_e8.ArFileReader.Ptr + 0x1b8))
                          (local_e8.ArFileReader.Ptr,local_110 + local_e8.StartSeekPos);
                lVar27 = local_128;
                (**(code **)(*(longlong *)local_e8.ArFileReader.Ptr + 0x188))
                          (local_e8.ArFileReader.Ptr,lVar24,local_128);
              }
              if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar32)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              pFVar3 = param_3->Object;
              pFVar16 = TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                        ::FindChecked((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                                       *)param_2,uVar29);
              pFVar25 = &pFVar3->MipTilesPresent;
              local_118[0] = uVar29;
              if (pFVar25 == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar25);
              TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
              ::Emplace<int_const_&,FImgMediaTileSelection_const_&>
                        ((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                          *)&(pFVar3->MipTilesPresent).MipTiles,(int *)local_118,pFVar16);
              LeaveCriticalSection((LPCRITICAL_SECTION)pFVar25);
              if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar32)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              LOCK();
              paVar1 = &param_3->Object->NumTilesRead;
              *paVar1 = (atomic<int>)((int)*paVar1 + 1);
              UNLOCK();
            }
            local_12c = uVar29 + 1;
            uVar30 = (ulonglong)local_12c;
            local_108 = local_108 + 1;
            local_110 = local_110 + lVar27;
            local_100 = local_100 + 0x30;
            pTVar28 = local_c0;
          } while (local_108 < (longlong)local_c8);
        }
        if (local_138.Ptr != (FDDSFile *)0x0) {
          pFVar23 = ((local_138.Ptr)->MipRawData).AllocatorInstance.Data;
          if (pFVar23 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar23);
          }
          pFVar23 = ((local_138.Ptr)->Mips).AllocatorInstance.Data;
          if (pFVar23 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar23);
          }
          ::operator_delete(local_138.Ptr,0x48);
        }
        if (local_e8.ArFileReader.Ptr != (FArchive *)0x0) {
          (*(code *)**(undefined8 **)local_e8.ArFileReader.Ptr)(local_e8.ArFileReader.Ptr,1);
        }
        if (local_e8.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Filename.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28)
        ;
        if (bVar31) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return true;
      }
      if (2 < (byte)LogImgMedia._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
      }
      if (local_e8.ArFileReader.Ptr != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)local_e8.ArFileReader.Ptr)(local_e8.ArFileReader.Ptr,1);
      }
      if (local_e8.Filename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Filename.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_14ea55582:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return false;
}

// UncancelFrame @ 14ea5db70

void __thiscall FDdsImgMediaReader::UncancelFrame(FDdsImgMediaReader *this,int param_1)

{
  return;
}

