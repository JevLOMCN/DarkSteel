// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 8

// FGenericImgMediaReader @ 14ea38070

FGenericImgMediaReader * __thiscall
FGenericImgMediaReader::FGenericImgMediaReader
          (FGenericImgMediaReader *this,IImageWrapperModule *param_1,
          TSharedRef<FImgMediaLoader,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->ImageWrapperModule = param_1;
  this->_padding_ = (longlong)&___7FGenericImgMediaReader__6B_;
  (this->LoaderPtr).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->LoaderPtr).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// ~FGenericImgMediaReader @ 14ea3a7d0

void __thiscall FGenericImgMediaReader::~FGenericImgMediaReader(FGenericImgMediaReader *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FGenericImgMediaReader__6B_;
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

// CancelFrame @ 14ea45280

void __thiscall FGenericImgMediaReader::CancelFrame(FGenericImgMediaReader *this,int param_1)

{
  return;
}

// GetFrameInfo @ 14ea4bfa0

bool __thiscall
FGenericImgMediaReader::GetFrameInfo
          (FGenericImgMediaReader *this,FString *param_1,FImgMediaFrameInfo *param_2)

{
  TSharedPtr<IImageWrapper,1> local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  LoadFrameImage(this,&local_38,param_1,&local_28,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return local_38.Object != (IImageWrapper *)0x0;
}

// LoadFrameImage @ 14ea51e50

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IImageWrapper,1> * __thiscall
FGenericImgMediaReader::LoadFrameImage
          (FGenericImgMediaReader *this,TSharedPtr<IImageWrapper,1> *__return_storage_ptr__,
          FString *param_1,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2,
          FImgMediaFrameInfo *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  FString *this_00;
  TSharedPtr<IImageWrapper,1> *pTVar6;
  UImgMediaSettings *pUVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  IImageWrapper *local_58;
  TReferenceControllerBase<1> *local_50;
  FString local_48;
  FString local_38;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FFileHelper::LoadFileToArray(param_2,pwVar9,0);
  if (!bVar2) {
    if (2 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
    __return_storage_ptr__->Object = (IImageWrapper *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = FPaths::GetExtension(&local_38,param_1,false);
  ::FString::ToLower(this_00,&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"bmp");
  if (iVar4 == 0) {
    uVar10 = 3;
    pwVar9 = L"BMP";
  }
  else {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"jpg");
    if (iVar4 != 0) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"jpeg");
      if (iVar4 != 0) {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar8.Data = local_48.Data.AllocatorInstance.Data;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"png");
        if (iVar4 != 0) {
          if (2 < (byte)LogImgMedia._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
          }
          __return_storage_ptr__->Object = (IImageWrapper *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
        uVar10 = 0;
        pwVar9 = L"PNG";
        goto LAB_14ea51fdc;
      }
    }
    uVar10 = 1;
    pwVar9 = L"JPEG";
  }
LAB_14ea51fdc:
  ::FString::operator=(&param_3->FormatName,pwVar9);
  (**(code **)((longlong)*this->ImageWrapperModule + 0x58))
            (this->ImageWrapperModule,&local_58,uVar10,0);
  if (local_58 != (IImageWrapper *)0x0) {
    if ((local_58 == (IImageWrapper *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
      return pTVar6;
    }
    cVar3 = (**(code **)local_58->_padding_)
                      (local_58,(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    if (cVar3 != '\0') {
      pUVar7 = GetDefault<UImgMediaSettings>();
      ::FString::operator=(&param_3->CompressionName,L"");
      if ((local_58 == (IImageWrapper *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
        return pTVar6;
      }
      iVar4 = (**(code **)(local_58->_padding_ + 0x40))();
      (param_3->Dim).field0_0x0._s_0.X = iVar4;
      if ((local_58 == (IImageWrapper *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedPtr<IImageWrapper,1> *)(*pcVar1)();
        return pTVar6;
      }
      iVar5 = (**(code **)(local_58->_padding_ + 0x48))();
      (param_3->Dim).field0_0x0._s_0.Y = iVar5;
      iVar4 = (param_3->Dim).field0_0x0._s_0.X;
      param_3->NumMipLevels = 1;
      param_3->UncompressedSize = (longlong)iVar5 * (longlong)iVar4 * 4;
      param_3->FrameRate = pUVar7->DefaultFrameRate;
      (param_3->TileDimensions).field0_0x0 = (param_3->Dim).field0_0x0;
      param_3->Srgb = true;
      param_3->NumChannels = 4;
      param_3->bHasTiles = false;
      param_3->TileBorder = 0;
      (param_3->NumTiles).field0_0x0 = (TIntPoint<int>_u_0)&DAT_100000001;
      __return_storage_ptr__->Object = local_58;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_50;
      local_50 = (TReferenceControllerBase<1> *)0x0;
      local_58 = (IImageWrapper *)0x0;
      goto LAB_14ea52185;
    }
  }
  if (2 < (byte)LogImgMedia._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
  }
  __return_storage_ptr__->Object = (IImageWrapper *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14ea52185:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReadFrame @ 14ea57610

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGenericImgMediaReader::ReadFrame
          (FGenericImgMediaReader *this,int param_1,
          TMap<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
          *param_2,TSharedPtr<FImgMediaFrame,1> *param_3)

{
  atomic<int> *paVar1;
  TIntPoint<int>_u_0 TVar2;
  FImgMediaFrame *pFVar3;
  code *pcVar4;
  byte bVar5;
  atomic<int> aVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FFrameRate FVar9;
  ForAnyElementType FVar10;
  IImageWrapper *pIVar11;
  long _Src [2];
  TIntPoint<int>_u_0 TVar12;
  undefined1 uVar13;
  char cVar14;
  atomic<int> aVar15;
  FString *pFVar16;
  byte bVar17;
  int iVar18;
  ulong64 uVar19;
  TReferenceControllerBase<1> *pTVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  void *pvVar23;
  int iVar24;
  FImgMediaMipTiles *pFVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  bool bVar29;
  undefined1 local_1b8 [4];
  int local_1b4;
  int local_1b0;
  int local_1ac;
  TIntPoint<int>_u_0 local_1a8;
  longlong local_1a0;
  TReferenceControllerBase<1> *local_198;
  FImgMediaFrameInfo local_188;
  TIntPoint<int>_u_0 local_118;
  undefined1 local_110 [16];
  TSharedPtr<IImageWrapper,1> local_100;
  long local_f0 [2];
  void *pvStack_e8;
  void *local_e0;
  FImgMediaLoader *local_d8;
  FImgMediaTileSelection *local_d0;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_c8;
  FImgMediaFrameInfo local_b0;
  
  local_198 = (this->LoaderPtr).WeakReferenceCount.ReferenceController;
  pTVar20 = local_198;
  if (local_198 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = local_198->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea57660;
      }
      LOCK();
      aVar15 = local_198->SharedReferenceCount;
      bVar29 = aVar6 == aVar15;
      if (bVar29) {
        local_198->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar15 = aVar6;
      }
      FVar9 = _UNK_1528a8c88;
      uVar7 = ___xmm_000000010000ea600000000000000000;
      UNLOCK();
      aVar6 = aVar15;
    } while (!bVar29);
    local_d8 = (this->LoaderPtr).Object;
    if ((local_d8 != (FImgMediaLoader *)0x0) &&
       (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) {
      local_1ac = local_d8->NumMipLevels;
      TVar2 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(local_d8->SequenceDim).field0_0x0._s_0;
      uVar27 = 0;
      local_1a0 = 0;
      local_1a8 = TVar2;
      local_118 = TVar2;
      if (local_1ac < 1) {
LAB_14ea57de0:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return true;
      }
      local_1a8._s_0.Y = TVar2._s_0.Y;
      local_1b0 = local_1a8._s_0.Y;
      iVar24 = TVar2._s_0.X;
      local_1b4 = iVar24;
LAB_14ea57720:
      iVar28 = (int)uVar27;
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar21 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar21 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar18 = *(int *)(puVar21 + (*(int *)&param_2->field_0x48 - 1 & uVar27) * 4);
        if (iVar18 != -1) {
          do {
            if (*(int *)(*(longlong *)param_2 + (longlong)iVar18 * 0x50) == iVar28) {
              local_d0 = TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                         ::FindChecked((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                                        *)param_2,iVar28);
              if ((param_3->Object == (FImgMediaFrame *)0x0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar29)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              pFVar3 = param_3->Object;
              pFVar25 = &pFVar3->MipTilesPresent;
              if (pFVar25 == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection((LPCRITICAL_SECTION)pFVar25);
              if (*(int *)&(pFVar3->MipTilesPresent).MipTiles.field_0x8 ==
                  *(int *)&(pFVar3->MipTilesPresent).MipTiles.field_0x34) goto LAB_14ea57819;
              puVar21 = *(undefined1 **)&(pFVar3->MipTilesPresent).MipTiles.field_0x40;
              puVar22 = &(pFVar3->MipTilesPresent).MipTiles.field_0x38;
              if (puVar21 != (undefined1 *)0x0) {
                puVar22 = puVar21;
              }
              iVar18 = *(int *)(puVar22 +
                               (*(int *)&(pFVar3->MipTilesPresent).MipTiles.field_0x48 - 1 & uVar27)
                               * 4);
              if (iVar18 == -1) goto LAB_14ea57819;
              lVar26 = *(longlong *)&(pFVar3->MipTilesPresent).MipTiles;
              goto LAB_14ea57800;
            }
            iVar18 = *(int *)(*(longlong *)param_2 + 0x48 + (longlong)iVar18 * 0x50);
          } while (iVar18 != -1);
        }
      }
      goto LAB_14ea57da1;
    }
  }
LAB_14ea57660:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return false;
  while (iVar18 = *(int *)(lVar26 + 0x48 + (longlong)iVar18 * 0x50), iVar18 != -1) {
LAB_14ea57800:
    if (*(int *)(lVar26 + (longlong)iVar18 * 0x50) == iVar28) goto LAB_14ea5781e;
  }
LAB_14ea57819:
  iVar18 = -1;
LAB_14ea5781e:
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar25);
  if (iVar18 != -1) {
LAB_14ea57da1:
    uVar27 = (ulonglong)(iVar28 + 1U);
    iVar18 = local_1b0 * local_1b4;
    local_1b4 = local_1b4 / 2;
    local_1a0 = local_1a0 + iVar18 * 4;
    local_1b0 = local_1b0 / 2;
    if (local_1ac <= (int)(iVar28 + 1U)) goto LAB_14ea57de0;
    goto LAB_14ea57720;
  }
  pFVar16 = FImgMediaLoader::GetImagePath(local_d8,param_1,iVar28);
  uVar8 = ___xmm_000000010000ea600000000000000000;
  local_c8.ArrayMax = 0;
  local_188.CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.CompressionName.Data.ArrayNum = 0;
  local_188.CompressionName.Data.ArrayMax = 0;
  local_188.FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_188.Srgb = false;
  ___xmm_000000010000ea600000000000000000 = (int)uVar7;
  _UNK_1528a8c84 = SUB84(uVar7,4);
  local_188.FormatName.Data.ArrayNum = ___xmm_000000010000ea600000000000000000;
  local_188.FormatName.Data.ArrayMax = _UNK_1528a8c84;
  local_188.FrameRate = FVar9;
  local_188.UncompressedSize = 0;
  local_188.NumChannels._0_4_ = 0;
  local_188.NumChannels._4_4_ = 0;
  local_188.bHasTiles = false;
  local_188.TileBorder = 0;
  local_188.NumMipLevels = 0;
  ___xmm_000000010000ea600000000000000000 = uVar8;
  LoadFrameImage(this,&local_100,pFVar16,&local_c8,&local_188);
  pIVar11 = local_100.Object;
  if (local_100.Object == (IImageWrapper *)0x0) {
    if (2 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
  }
  else {
    local_e0 = (void *)0x0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    pvStack_e8 = (void *)0x0;
    if ((local_100.Object == (IImageWrapper *)0x0) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar29)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    cVar14 = (**(code **)(pIVar11->_padding_ + 0x38))(pIVar11,1,8);
    if (cVar14 != '\0') {
      if ((param_3->Object == (FImgMediaFrame *)0x0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar29)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      iVar18 = local_1ac;
      if ((param_3->Object->Data).Object == (void *)0x0) {
        uVar19 = (longlong)local_188.Dim.field0_0x0._s_0.Y *
                 (longlong)local_188.Dim.field0_0x0._s_0.X * 4;
        TVar12 = local_188.Dim.field0_0x0;
        if (1 < local_1ac) {
          if ((iVar24 < local_188.Dim.field0_0x0._s_0.X) ||
             ((int)local_118._4_4_ < local_188.Dim.field0_0x0._s_0.Y)) {
            local_1b8[0] = 0;
            `FGenericImgMediaReader::ReadFrame'::__l64::<lambda_1>::operator()(local_1b8);
          }
          uVar27 = (ulonglong)(iVar18 - 1);
          local_188.NumMipLevels = iVar18;
          bVar17 = 2;
          pvVar23 = (void *)((longlong)local_118._s_0.Y * (longlong)iVar24 * 4);
          local_188.UncompressedSize = (ulong64)pvVar23;
          do {
            bVar5 = bVar17 & 0x3f;
            bVar17 = bVar17 + 2;
            local_188.UncompressedSize = local_188.UncompressedSize + ((ulonglong)pvVar23 >> bVar5);
            uVar27 = uVar27 - 1;
          } while (uVar27 != 0);
          uVar19 = (ulonglong)((longlong)local_118._s_0.Y * (longlong)iVar24 * 0x10) / 3;
          TVar12 = TVar2;
        }
        local_188.Dim.field0_0x0 = TVar12;
        pvVar23 = FMemory::Malloc(uVar19,0x40);
        if ((param_3->Object == (FImgMediaFrame *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        FVar10.Data = local_188.CompressionName.Data.AllocatorInstance.Data;
        lVar26 = (longlong)local_188.CompressionName.Data.ArrayNum;
        pFVar3 = param_3->Object;
        local_b0.CompressionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.CompressionName.Data.ArrayNum = local_188.CompressionName.Data.ArrayNum;
        if (local_188.CompressionName.Data.ArrayNum == 0) {
          local_b0.CompressionName.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_188.CompressionName.Data.ArrayNum,0,(ForAnyElementType *)&local_b0,
                     local_188.CompressionName.Data.ArrayNum,&local_b0.CompressionName.Data.ArrayMax
                    );
          memcpy(local_b0.CompressionName.Data.AllocatorInstance.Data,FVar10.Data,lVar26 * 2);
        }
        FVar10.Data = local_188.FormatName.Data.AllocatorInstance.Data;
        lVar26 = (longlong)local_188.FormatName.Data.ArrayNum;
        local_b0.Dim.field0_0x0._s_0 = local_188.Dim.field0_0x0;
        local_b0.FormatName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b0.FormatName.Data.ArrayNum = local_188.FormatName.Data.ArrayNum;
        if (local_188.FormatName.Data.ArrayNum == 0) {
          local_b0.FormatName.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_188.FormatName.Data.ArrayNum,0,
                     (ForAnyElementType *)&local_b0.FormatName,local_188.FormatName.Data.ArrayNum,
                     &local_b0.FormatName.Data.ArrayMax);
          memcpy(local_b0.FormatName.Data.AllocatorInstance.Data,FVar10.Data,lVar26 * 2);
        }
        local_b0.FrameRate = local_188.FrameRate;
        local_b0.Srgb = local_188.Srgb;
        local_b0.UncompressedSize = local_188.UncompressedSize;
        local_b0.NumChannels = local_188.NumChannels;
        local_b0.bHasTiles = local_188.bHasTiles;
        local_b0.NumTiles.field0_0x0 = local_188.NumTiles.field0_0x0;
        local_b0.TileDimensions.field0_0x0 = local_188.TileDimensions.field0_0x0;
        local_b0.TileBorder = local_188.TileBorder;
        local_b0.NumMipLevels = local_188.NumMipLevels;
        FImgMediaFrame::SetInfo(pFVar3,&local_b0);
        if ((param_3->Object == (FImgMediaFrame *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        pFVar3 = param_3->Object;
        local_110._0_8_ = pvVar23;
        local_110._8_8_ = ::operator_new(0x18);
        if ((TReferenceControllerBase<1> *)local_110._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          ((TReferenceControllerBase<1> *)local_110._8_8_)->SharedReferenceCount = (atomic<int>)0x1;
          ((TReferenceControllerBase<1> *)local_110._8_8_)->_padding_ =
               (longlong)
               &SharedPointerInternals::
                TReferenceControllerWithDeleter<void,`FGenericImgMediaReader::ReadFrame'::`61'::<lambda_2>,1>
                ::_vftable_;
          ((TReferenceControllerBase<1> *)local_110._8_8_)->WeakReferenceCount = (atomic<int>)0x1;
          ((TReferenceControllerBase<1> *)(local_110._8_8_ + 0x10))->_padding_ = (longlong)pvVar23;
        }
        if (pFVar3 != (FImgMediaFrame *)local_110) {
          (pFVar3->Data).Object = pvVar23;
          local_110._0_8_ = (void *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar3->Data).SharedReferenceCount,(FSharedReferencer<1> *)(local_110 + 8));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_110._8_8_);
        if ((param_3->Object == (FImgMediaFrame *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        pFVar3 = param_3->Object;
        pFVar25 = &pFVar3->MipTilesPresent;
        if (pFVar25 == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar25);
        TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
        ::Reset((TSet<TTuple<int,FImgMediaTileSelection>,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>,FDefaultSetAllocator>
                 *)&(pFVar3->MipTilesPresent).MipTiles);
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar25);
        if ((param_3->Object == (FImgMediaFrame *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        LOCK();
        param_3->Object->Format = (atomic<EMediaTextureSampleFormat>)0x2;
        UNLOCK();
        if ((param_3->Object == (FImgMediaFrame *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar29)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        LOCK();
        param_3->Object->Stride = (atomic<unsigned_int>)(local_188.Dim.field0_0x0._s_0.X * 4);
        UNLOCK();
      }
      pvVar23 = pvStack_e8;
      _Src = local_f0;
      if ((param_3->Object == (FImgMediaFrame *)0x0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar29)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      memcpy((void *)((longlong)(param_3->Object->Data).Object + local_1a0),(void *)_Src,
             (size_t)pvVar23);
      if ((param_3->Object == (FImgMediaFrame *)0x0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar29)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      pFVar3 = param_3->Object;
      local_1a8._s_0.X = iVar28;
      pFVar25 = &pFVar3->MipTilesPresent;
      if (pFVar25 == (FImgMediaMipTiles *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar25);
      TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
      ::Emplace<int_const_&,FImgMediaTileSelection_const_&>
                ((TMapBase<int,FImgMediaTileSelection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FImgMediaTileSelection,0>_>
                  *)&(pFVar3->MipTilesPresent).MipTiles,local_1a8.XY,local_d0);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar25);
      if ((param_3->Object == (FImgMediaFrame *)0x0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar29)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      LOCK();
      paVar1 = &param_3->Object->NumTilesRead;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      if (local_f0 != (long  [2])0x0) {
        FMemory::Free((void *)local_f0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      if (local_188.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.FormatName.Data.AllocatorInstance.Data);
      }
      if (local_188.CompressionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.CompressionName.Data.AllocatorInstance.Data);
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      goto LAB_14ea57da1;
    }
    if (2 < (byte)LogImgMedia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
    }
    if (local_f0 != (long  [2])0x0) {
      FMemory::Free((void *)local_f0);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  if (local_188.FormatName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.FormatName.Data.AllocatorInstance.Data);
  }
  if (local_188.CompressionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.CompressionName.Data.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_198);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return false;
}

// UncancelFrame @ 14ea5dbf0

void __thiscall FGenericImgMediaReader::UncancelFrame(FGenericImgMediaReader *this,int param_1)

{
  return;
}

// operator() @ 15059c1e0

bool __thiscall `FGenericImgMediaReader::ReadFrame'::__l64::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_477242180222582632>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_477242180222582632>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

