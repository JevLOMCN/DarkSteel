// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// DestroyStoredItems @ 1475bf960

void __thiscall FPrimaryAssetLoadState::DestroyStoredItems(FPrimaryAssetLoadState *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Storage == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (this->Storage == (uchar *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Storage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                         ,0x79,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(this->Storage + 8));
  if (this->Storage == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->bWithDownloadParams != false) && (this->Storage == (uchar *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x93,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetBundleNamesInternal @ 1475d2a00

FName * __thiscall FPrimaryAssetLoadState::GetBundleNamesInternal(FPrimaryAssetLoadState *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  
  if (this->Storage == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FName *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FName *)(this->Storage + 0x10);
}

// GetDownloadParamsInternal @ 1475d4600

FAssetManagerDownloadParams * __thiscall
FPrimaryAssetLoadState::GetDownloadParamsInternal(FPrimaryAssetLoadState *this)

{
  code *pcVar1;
  bool bVar2;
  FAssetManagerDownloadParams *pFVar3;
  
  if (this->bWithDownloadParams == false) {
    return (FAssetManagerDownloadParams *)0x0;
  }
  if (this->Storage == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x93,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAssetManagerDownloadParams *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FAssetManagerDownloadParams *)(this->Storage + (ulonglong)this->NumBundleNames * 8 + 0x10)
  ;
}

// GetHandleInternal @ 1475d4a50

TSharedPtr<FStreamableHandle,1> * __thiscall
FPrimaryAssetLoadState::GetHandleInternal(FPrimaryAssetLoadState *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FStreamableHandle,1> *pTVar3;
  
  if (this->Storage != (uchar *)0x0) {
    return (TSharedPtr<FStreamableHandle,1> *)this->Storage;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Storage",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                     ,0x79,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<FStreamableHandle,1> *)(*pcVar1)();
    return pTVar3;
  }
  return (TSharedPtr<FStreamableHandle,1> *)this->Storage;
}

// SetState @ 1475fda60

void __thiscall
FPrimaryAssetLoadState::SetState
          (FPrimaryAssetLoadState *this,TSharedPtr<FStreamableHandle,1> *param_1,
          TArrayView<FName_const_,int> *param_2,TOptional<FAssetManagerDownloadParams> param_3)

{
  uint uVar1;
  FAssetManagerDownloadParams FVar2;
  TSharedPtr<FStreamableHandle,1> *pTVar3;
  FName *pFVar4;
  code *pcVar5;
  short sVar6;
  bool bVar7;
  ushort uVar8;
  FAssetManagerDownloadParams *pFVar9;
  uchar *puVar10;
  FAssetManagerDownloadParams *pFVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  undefined2 in_register_0000008e;
  
  pFVar9 = (FAssetManagerDownloadParams *)CONCAT26(in_register_0000008e,param_3);
  uVar1 = param_2->ArrayNum;
  uVar8 = (ushort)uVar1;
  uVar13 = (ulonglong)uVar8;
  if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar3 = (TSharedPtr<FStreamableHandle,1> *)this->Storage;
  if (pTVar3 != (TSharedPtr<FStreamableHandle,1> *)0x0) {
    if ((uVar8 == this->NumBundleNames) &&
       ((bool)(char)pFVar9[1].Priority == this->bWithDownloadParams)) {
      if (pTVar3 != param_1) {
        pTVar3->Object = param_1->Object;
        param_1->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&pTVar3->SharedReferenceCount,&param_1->SharedReferenceCount);
      }
      pFVar4 = param_2->DataPtr;
      if (this->Storage == (uchar *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Storage",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                           ,0x85,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      memcpy(this->Storage + 0x10,pFVar4,uVar13 << 3);
      if ((char)pFVar9[1].Priority != '\0') {
        FVar2 = *pFVar9;
        pFVar9 = GetDownloadParamsInternal(this);
        *pFVar9 = FVar2;
      }
      goto LAB_1475fdc67;
    }
    DestroyStoredItems(this);
  }
  sVar6 = pFVar9[1].Priority;
  FMemory::Free(this->Storage);
  if ((char)sVar6 == '\0') {
    uVar12 = uVar13 * 8 + 0x10;
  }
  else {
    uVar12 = uVar13 * 8 + 0x14;
  }
  puVar10 = FMemory::Malloc(uVar12,0);
  pFVar4 = param_2->DataPtr;
  this->Storage = puVar10;
  this->NumBundleNames = uVar8;
  this->bWithDownloadParams = SUB21(pFVar9[1].Priority,0);
  *(FStreamableHandle **)puVar10 = param_1->Object;
  *(TReferenceControllerBase<1> **)(puVar10 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FStreamableHandle *)0x0;
  if (this->Storage == (uchar *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Storage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x85,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (uVar8 != 0) {
    memcpy(this->Storage + 0x10,pFVar4,uVar13 * 8);
  }
  if ((char)pFVar9[1].Priority != '\0') {
    pFVar11 = GetDownloadParamsInternal(this);
    if ((char)pFVar9[1].Priority == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *pFVar11 = *pFVar9;
  }
LAB_1475fdc67:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

