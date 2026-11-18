// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// FImportBlockedImage @ 14e707e90

FImportBlockedImage * __thiscall
UE::Interchange::FImportBlockedImage::FImportBlockedImage
          (FImportBlockedImage *this,FImportBlockedImage *param_1)

{
  bool bVar1;
  FBufferOwner *pFVar2;
  
  pFVar2 = (param_1->RawData).Owner.Owner;
  (param_1->RawData).Owner.Owner = (FBufferOwner *)0x0;
  (this->BlocksData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawData).Owner.Owner = pFVar2;
  (this->BlocksData).AllocatorInstance.Data = (param_1->BlocksData).AllocatorInstance.Data;
  (param_1->BlocksData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlocksData).ArrayNum = (param_1->BlocksData).ArrayNum;
  (this->BlocksData).ArrayMax = (param_1->BlocksData).ArrayMax;
  (param_1->BlocksData).ArrayNum = 0;
  (param_1->BlocksData).ArrayMax = 0;
  this->Format = param_1->Format;
  this->CompressionSettings = param_1->CompressionSettings;
  bVar1 = param_1->bSRGB;
  (this->MipGenSettings).bIsSet = false;
  this->bSRGB = bVar1;
  bVar1 = (param_1->MipGenSettings).bIsSet;
  (this->MipGenSettings).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->MipGenSettings).TypedValue = (param_1->MipGenSettings).TypedValue;
  }
  (this->TextureCreatorApplicationMetadata).bIsSet = false;
  bVar1 = (param_1->TextureCreatorApplicationMetadata).bIsSet;
  (this->TextureCreatorApplicationMetadata).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.AllocatorInstance.
    Data = (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.
           AllocatorInstance.Data;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.AllocatorInstance
    .Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayNum = 0;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVendor.Data.ArrayMax = 0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance.Data
         = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance.Data
         = (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.
           AllocatorInstance.Data;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayNum = 0;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationName.Data.ArrayMax = 0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.AllocatorInstance.
    Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.AllocatorInstance.
    Data = (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
           AllocatorInstance.Data;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.
    AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum;
    (this->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax =
         (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayNum = 0;
    (param_1->TextureCreatorApplicationMetadata).TypedValue.ApplicationVersion.Data.ArrayMax = 0;
  }
  return this;
}

// operator() @ 14e70b0e0

void __thiscall
`UE::Interchange::FImportBlockedImage::MigrateDataFromImagesToRawData'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  ETextureSourceFormat EVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  size_t _Size;
  void *_Src;
  uint uVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)this;
  _Src = (void *)0x0;
  lVar8 = (longlong)param_1;
  EVar1 = *(ETextureSourceFormat *)(lVar2 + 0x18);
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x10)) {
    uVar6 = uVar7;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  _Size = UE::Interchange::Private::BlockedPayload::ComputeBlockSize
                    ((FTextureSourceBlock *)(*(longlong *)(lVar2 + 8) + lVar8 * 0x18),EVar1);
  plVar3 = *(longlong **)((longlong)this + 0x10);
  uVar6 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar6 = uVar7;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar3 = *(longlong **)(lVar8 * 0x70 + 8 + *plVar3);
  if (plVar3 != (longlong *)0x0) {
    if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    _Src = (void *)plVar3[1];
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  uVar6 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar6 = uVar7;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  memcpy((void *)(*(longlong *)(*plVar3 + lVar8 * 8) + *(longlong *)((longlong)this + 8)),_Src,_Size
        );
  return;
}

// ComputeBufferSize @ 14e711aa0

long64 __thiscall UE::Interchange::FImportBlockedImage::ComputeBufferSize(FImportBlockedImage *this)

{
  FTextureSourceBlock *pFVar1;
  int iVar2;
  long64 lVar3;
  FTextureSourceBlock *pFVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->BlocksData).ArrayNum;
  lVar5 = 0;
  pFVar4 = (FTextureSourceBlock *)(this->BlocksData).AllocatorInstance.Data;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if ((this->BlocksData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTextureSourceBlock_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = Interchange::Private::BlockedPayload::ComputeBlockSize(pFVar4,this->Format);
    lVar5 = lVar5 + lVar3;
    pFVar4 = pFVar4 + 1;
  }
  return lVar5;
}

// InitBlockFromImage @ 14e723430

bool __thiscall
UE::Interchange::FImportBlockedImage::InitBlockFromImage
          (FImportBlockedImage *this,int param_1,int param_2,FImportImage *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  cVar3 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
  if ((cVar3 == '\0') || (param_3->Format != this->Format)) {
    bVar4 = false;
  }
  else {
    iVar5 = (this->BlocksData).ArrayNum;
    piVar1 = &(this->BlocksData).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&(this->BlocksData).AllocatorInstance,piVar1);
    }
    (this->BlocksData).ArrayNum = iVar5 + 1;
    pFVar2 = (this->BlocksData).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
    DefaultConstructItems<FTextureSourceBlock,int>(pFVar2,1);
    *(int *)pFVar2 = param_1;
    *(int *)(pFVar2 + 4) = param_2;
    *(int *)(pFVar2 + 8) = param_3->SizeX;
    *(int *)(pFVar2 + 0xc) = param_3->SizeY;
    *(undefined4 *)(pFVar2 + 0x10) = 1;
    *(int *)(pFVar2 + 0x14) = param_3->NumMips;
    bVar4 = true;
  }
  return bVar4;
}

// InitDataSharedAmongBlocks @ 14e7234e0

bool __thiscall
UE::Interchange::FImportBlockedImage::InitDataSharedAmongBlocks
          (FImportBlockedImage *this,FImportImage *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (cVar1 != '\0') {
    this->Format = param_1->Format;
    this->CompressionSettings = param_1->CompressionSettings;
    this->bSRGB = param_1->bSRGB;
    return true;
  }
  return false;
}

// IsValid @ 14e723980

bool __thiscall UE::Interchange::FImportBlockedImage::IsValid(FImportBlockedImage *this)

{
  FBufferOwner *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  
  if ((this->Format != TSF_Invalid) && (0 < (this->BlocksData).ArrayNum)) {
    pFVar1 = (this->RawData).Owner.Owner;
    uVar3 = 0;
    if (pFVar1 != (FBufferOwner *)0x0) {
      if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
        (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
      }
      uVar3 = pFVar1->Size;
    }
    uVar2 = ComputeBufferSize(this);
    if (uVar3 == uVar2) {
      return true;
    }
  }
  return false;
}

// MigrateDataFromImagesToRawData @ 14e724250

bool __thiscall
UE::Interchange::FImportBlockedImage::MigrateDataFromImagesToRawData
          (FImportBlockedImage *this,
          TArray<UE::Interchange::FImportImage,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ETextureSourceFormat EVar2;
  longlong *plVar3;
  FBufferOwner *pFVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  FUniqueBuffer FVar12;
  long64 lVar13;
  longlong lVar14;
  void *pvVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  <lambda_1> local_res8 [8];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res10;
  FScriptContainerElement *local_res18;
  longlong local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  FImportBlockedImage **local_68;
  FImportBlockedImage *local_60;
  void *local_58;
  TArray<UE::Interchange::FImportImage,TSizedDefaultAllocator<32>_> *local_50;
  ForAnyElementType *local_48;
  
  ComputeBufferSize(this);
  FVar12 = FUniqueBuffer::Alloc((ulong64)&local_res10);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this,
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar12.Owner.Owner);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res10);
  uVar11 = param_1->ArrayNum;
  uVar17 = 0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&local_90,0,(int *)((longlong)&local_88 + 4));
  }
  iVar1 = param_1->ArrayNum;
  if ((this->BlocksData).ArrayNum == iVar1) {
    pFVar16 = (param_1->AllocatorInstance).Data;
    local_98 = 0;
    local_res18 = pFVar16 + (longlong)iVar1 * 0x70;
    while( true ) {
      pFVar6 = local_res18;
      pvVar15 = (void *)0x0;
      if (param_1->ArrayNum != iVar1) {
        local_res8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<UE::Interchange::FImportImage,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar16 == pFVar6) {
        pFVar4 = (this->RawData).Owner.Owner;
        if (pFVar4 != (FBufferOwner *)0x0) {
          if (((ulonglong)pFVar4->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
          }
          pvVar15 = pFVar4->Data;
        }
        bVar8 = IsInGameThread();
        local_48 = &local_90;
        local_70 = Core::Private::Function::
                   TFunctionRefCaller<`UE::Interchange::FImportBlockedImage::MigrateDataFromImagesToRawData'::__l2::<lambda_1>,void,int>
                   ::Call;
        local_68 = &local_60;
        local_80.DataPtr = (void **)0x0;
        local_80.ArrayNum = 0;
        local_60 = this;
        local_58 = pvVar15;
        local_50 = param_1;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",param_1->ArrayNum,1,
                   (TFunctionRef<void___cdecl(int)> *)&local_70,local_res8[0],
                   (bVar8 ^ 1) * 8 + Unbalanced,&local_80);
        bVar8 = true;
        goto LAB_14e724533;
      }
      cVar7 = (**(code **)(*(longlong *)pFVar16 + 0x18))(pFVar16);
      if ((cVar7 == '\0') || (*(ETextureSourceFormat *)(pFVar16 + 0x14) != this->Format)) break;
      if ((local_90.Data <= (FScriptContainerElement *)&local_98) &&
         (((FScriptContainerElement *)&local_98 < local_90.Data + (longlong)local_88._4_4_ * 8 &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)))) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      iVar10 = (int)local_88;
      if ((int)local_88 == local_88._4_4_) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_90,(int *)((longlong)&local_88 + 4));
      }
      local_88 = CONCAT44(local_88._4_4_,iVar10 + 1);
      *(longlong *)(local_90.Data + (longlong)iVar10 * 8) = local_98;
      EVar2 = this->Format;
      uVar11 = 0;
      if ((int)uVar17 < (this->BlocksData).ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      lVar13 = Interchange::Private::BlockedPayload::ComputeBlockSize
                         ((FTextureSourceBlock *)
                          ((this->BlocksData).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x18)
                          ,EVar2);
      local_98 = local_98 + lVar13;
      plVar3 = *(longlong **)(pFVar16 + 8);
      if (plVar3 == (longlong *)0x0) {
        lVar14 = 0;
      }
      else {
        if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        lVar14 = plVar3[2];
      }
      if (lVar13 != lVar14) break;
      uVar17 = uVar17 + 1;
      pFVar16 = pFVar16 + 0x70;
    }
  }
  bVar8 = false;
LAB_14e724533:
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return bVar8;
}

