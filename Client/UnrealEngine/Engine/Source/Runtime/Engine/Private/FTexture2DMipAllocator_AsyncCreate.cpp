// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FTexture2DMipAllocator_AsyncCreate @ 1488066b0

FTexture2DMipAllocator_AsyncCreate * __thiscall
FTexture2DMipAllocator_AsyncCreate::FTexture2DMipAllocator_AsyncCreate
          (FTexture2DMipAllocator_AsyncCreate *this,UTexture *param_1)

{
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  this->_padding_ = param_1->_padding_;
  *(uint *)&this->_padding_ =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  *(uint *)((longlong)&this->_padding_ + 4) =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 6);
  this->_padding_ = (longlong)&___7FTexture2DMipAllocator_AsyncCreate__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->FinalSizeX = 0;
  this->FinalSizeY = 0;
  this->FinalFormat = PF_Unknown;
  (this->FinalMipData).AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
  (this->FinalMipData).ArrayNum = 0;
  (this->FinalMipData).ArrayMax = 0xf;
  return this;
}

// ~FTexture2DMipAllocator_AsyncCreate @ 14880c9b0

void __thiscall
FTexture2DMipAllocator_AsyncCreate::~FTexture2DMipAllocator_AsyncCreate
          (FTexture2DMipAllocator_AsyncCreate *this)

{
  int iVar1;
  ForElementType<void_*> FVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = (this->FinalMipData).ArrayNum;
  this->_padding_ = (longlong)&___7FTexture2DMipAllocator_AsyncCreate__6B_;
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FinalMipData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipAllocator_AsyncCreate.cpp"
                       ,0x13,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (this->FinalMipData).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<void_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
    return;
  }
  return;
}

// AllocateMips @ 14881ae70

bool __thiscall
FTexture2DMipAllocator_AsyncCreate::AllocateMips
          (FTexture2DMipAllocator_AsyncCreate *this,FTextureUpdateContext *param_1,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_2
          ,FTextureUpdateSyncOptions *param_3)

{
  EPixelFormat EVar1;
  longlong lVar2;
  ForElementType<FTextureMipInfo> FVar3;
  ForElementType<void_*> FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulong64 uVar9;
  void *pvVar10;
  ForElementType<void_*> FVar11;
  uint uVar12;
  ForElementType<FTextureMipInfo> FVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ForElementType<void_*> FVar17;
  longlong lVar18;
  longlong local_res8;
  
  if (((int)this->_padding_ <= *(int *)((longlong)&this->_padding_ + 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingFirstLODIdx < CurrentFirstLODIdx",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipAllocator_AsyncCreate.cpp"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (param_1->Resource != (FStreamableTextureResource *)0x0) {
    TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>::AddDefaulted
              (param_2,(int)this->_padding_);
    iVar8 = *(int *)((longlong)&this->_padding_ + 4);
    uVar16 = (ulonglong)iVar8;
    if (iVar8 < (int)this->_padding_) {
      lVar18 = uVar16 * 8;
      local_res8 = uVar16 * 0x30;
      do {
        uVar15 = (uint)uVar16;
        uVar12 = 0;
        if ((int)uVar15 < (param_1->MipsView).ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        lVar2 = *(longlong *)(lVar18 + (longlong)(param_1->MipsView).DataPtr);
        uVar12 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FTextureMipInfo>)param_2;
        if (FVar3 != (ForElementType<FTextureMipInfo>)0x0) {
          FVar13 = FVar3;
        }
        FVar17 = (ForElementType<void_*>)(local_res8 + (longlong)FVar13);
        EVar1 = param_1->Resource->PixelFormat;
        *(EPixelFormat *)((longlong)FVar17 + 0x10) = EVar1;
        uVar12 = (uint)*(ushort *)(lVar2 + 0x48);
        *(uint *)((longlong)FVar17 + 0x14) = uVar12;
        uVar14 = (uint)*(ushort *)(lVar2 + 0x4a);
        *(uint *)((longlong)FVar17 + 0x18) = uVar14;
        uVar9 = CalcTextureMipMapSize(uVar12,uVar14,EVar1,0);
        *(ulong64 *)((longlong)FVar17 + 8) = uVar9;
        pvVar10 = FMemory::Malloc(uVar9,0);
        *(void **)FVar17 = pvVar10;
        FVar4 = (this->FinalMipData).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<void_*>)&this->FinalMipData;
        if (FVar4 != (ForElementType<void_*>)0x0) {
          FVar11 = FVar4;
        }
        if ((ulonglong)FVar11 <= (ulonglong)FVar17) {
          FVar11 = (ForElementType<void_*>)&this->FinalMipData;
          if (FVar4 != (ForElementType<void_*>)0x0) {
            FVar11 = FVar4;
          }
          if (((ulonglong)FVar17 <
               (ulonglong)((longlong)FVar11 + (longlong)(this->FinalMipData).ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        iVar8 = (this->FinalMipData).ArrayNum;
        if (iVar8 == (this->FinalMipData).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                            (0x808,&(this->FinalMipData).AllocatorInstance,
                             &(this->FinalMipData).ArrayMax);
        }
        (this->FinalMipData).ArrayNum = iVar8 + 1;
        FVar4 = (this->FinalMipData).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<void_*>)&this->FinalMipData;
        if (FVar4 != (ForElementType<void_*>)0x0) {
          FVar11 = FVar4;
        }
        local_res8 = local_res8 + 0x30;
        lVar18 = lVar18 + 8;
        uVar16 = (ulonglong)(uVar15 + 1);
        *(undefined8 *)((longlong)FVar11 + (longlong)iVar8 * 8) = *(undefined8 *)FVar17;
      } while ((int)(uVar15 + 1) < (int)this->_padding_);
    }
    iVar8 = *(int *)((longlong)&this->_padding_ + 4);
    if ((-1 < iVar8) && (iVar8 < param_2->ArrayNum)) {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<FTextureMipInfo>)param_2;
      if (FVar3 != (ForElementType<FTextureMipInfo>)0x0) {
        FVar13 = FVar3;
      }
      uVar12 = *(uint *)((longlong)&this->_padding_ + 4);
      this->FinalSizeX = *(int *)((uchar *)((longlong)FVar13 + 0x14) + (longlong)iVar8 * 0x30);
      uVar15 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar13 = (ForElementType<FTextureMipInfo>)param_2;
      if (FVar3 != (ForElementType<FTextureMipInfo>)0x0) {
        FVar13 = FVar3;
      }
      uVar15 = *(uint *)((longlong)&this->_padding_ + 4);
      this->FinalSizeY = *(int *)((uchar *)((longlong)FVar13 + 0x18) + (longlong)(int)uVar12 * 0x30)
      ;
      uVar12 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar3 != (ForElementType<FTextureMipInfo>)0x0) {
        param_2 = (TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar3;
      }
      this->FinalFormat = ((uchar *)((longlong)param_2 + 0x10))[(longlong)(int)uVar15 * 0x30];
      if ((1 < (uint)this->_padding_) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)NextTickState <= (uint32)InState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                             ,0x68,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      this->_padding_ = 1;
      return true;
    }
  }
  return false;
}

// Cancel @ 148824d50

void __thiscall
FTexture2DMipAllocator_AsyncCreate::Cancel
          (FTexture2DMipAllocator_AsyncCreate *this,FTextureUpdateSyncOptions *param_1)

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  int iVar3;
  ForElementType<void_*> FVar4;
  undefined1 auStackX_8 [8];
  
  FVar4 = (this->FinalMipData).AllocatorInstance.SecondaryData;
  iVar3 = (this->FinalMipData).ArrayNum;
  if (FVar4 == (ForElementType<void_*>)0x0) {
    FVar4 = (ForElementType<void_*>)&this->FinalMipData;
  }
  FVar2 = (ForElementType<void_*>)((longlong)FVar4 + (longlong)iVar3 * 8);
  while( true ) {
    if ((this->FinalMipData).ArrayNum != iVar3) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (FVar4 == FVar2) break;
    if (*(void **)FVar4 != (void *)0x0) {
      FMemory::Free(*(void **)FVar4);
    }
    FVar4 = (ForElementType<void_*>)((longlong)FVar4 + 8);
  }
  piVar1 = &(this->FinalMipData).ArrayMax;
  (this->FinalMipData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
              (8,8,0,&(this->FinalMipData).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetCancelThread @ 14883d9c0

ETickThread __thiscall
FTexture2DMipAllocator_AsyncCreate::GetCancelThread(FTexture2DMipAllocator_AsyncCreate *this)

{
  ETickThread EVar1;
  
  EVar1 = None;
  if ((this->FinalMipData).ArrayNum != 0) {
    EVar1 = Async;
  }
  return EVar1;
}

// ReleaseAllocatedMipData @ 148852c40

void __thiscall
FTexture2DMipAllocator_AsyncCreate::ReleaseAllocatedMipData
          (FTexture2DMipAllocator_AsyncCreate *this)

{
  int *piVar1;
  ForElementType<void_*> FVar2;
  int iVar3;
  ForElementType<void_*> FVar4;
  undefined1 local_res8 [8];
  
  FVar4 = (this->FinalMipData).AllocatorInstance.SecondaryData;
  iVar3 = (this->FinalMipData).ArrayNum;
  if (FVar4 == (ForElementType<void_*>)0x0) {
    FVar4 = (ForElementType<void_*>)&this->FinalMipData;
  }
  FVar2 = (ForElementType<void_*>)((longlong)FVar4 + (longlong)iVar3 * 8);
  while( true ) {
    if ((this->FinalMipData).ArrayNum != iVar3) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar4 == FVar2) break;
    if (*(void **)FVar4 != (void *)0x0) {
      FMemory::Free(*(void **)FVar4);
    }
    FVar4 = (ForElementType<void_*>)((longlong)FVar4 + 8);
  }
  piVar1 = &(this->FinalMipData).ArrayMax;
  (this->FinalMipData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
              (8,8,0,&(this->FinalMipData).AllocatorInstance,0,piVar1);
  }
  return;
}

// UploadMips @ 148863270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTexture2DMipAllocator_AsyncCreate::UploadMips
          (FTexture2DMipAllocator_AsyncCreate *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  uchar *puVar1;
  longlong *plVar2;
  EPixelFormat EVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FStreamableTextureResource *pFVar7;
  FRHITexture *pFVar8;
  ETextureCreateFlags EVar9;
  FRHIResource *this_00;
  code *pcVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 uVar13;
  ERHIAccess EVar14;
  FString *pFVar15;
  FRHITexture *pFVar16;
  ELLMTag EVar17;
  ForElementType<void_*> FVar18;
  FLLMScope local_res10 [2];
  FTextureUpdateSyncOptions *local_res18;
  FRHITexture *local_res20;
  undefined4 in_stack_ffffffffffffff18;
  undefined3 uVar19;
  FRHIResource *local_a8;
  FScriptContainerElement *local_a0;
  FMemScope local_98;
  longlong *local_90;
  FString local_88;
  code *local_78 [2];
  undefined **local_68;
  FThreadSafeCounter *local_60;
  undefined8 local_50;
  
  pFVar7 = param_1->Resource;
  if (pFVar7 == (FStreamableTextureResource *)0x0) {
    return false;
  }
  pFVar8 = (FRHITexture *)pFVar7->_padding_;
  pFVar16 = (FRHITexture *)0x0;
  if ((pFVar8 != (FRHITexture *)0x0) && ((pFVar8->TextureDesc).Dimension == Texture2D)) {
    pFVar16 = pFVar8;
  }
  if (pFVar16 == (FRHITexture *)0x0) {
    return false;
  }
  local_res20 = (FRHITexture *)this->_padding_;
  local_90 = &this->_padding_;
  local_res18 = param_2;
  if (local_res20 != (FRHITexture *)0x0) {
    UE::RHI::CopySharedMips_AssumeSRVMaskState
              ((FRHICommandList *)&GRHICommandList.CommandListImmediate,pFVar16,local_res20);
    if ((2 < (uint)this->_padding_) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(uint32)NextTickState <= (uint32)InState",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                            ,0x68,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    *(undefined4 *)&this->_padding_ = 2;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
    return true;
  }
  pFVar15 = ::FName::ToString(&pFVar7->TextureName,&local_88);
  if ((pFVar15->Data).ArrayNum == 0) {
    local_a0 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_a0 = (pFVar15->Data).AllocatorInstance.Data;
  }
  FVar18 = (this->FinalMipData).AllocatorInstance.SecondaryData;
  iVar4 = (this->FinalMipData).ArrayNum;
  uVar13 = *(undefined1 *)((longlong)&this->_padding_ + 6);
  EVar3 = this->FinalFormat;
  iVar5 = this->FinalSizeY;
  iVar6 = this->FinalSizeX;
  if (FVar18 == (ForElementType<void_*>)0x0) {
    FVar18 = (ForElementType<void_*>)&this->FinalMipData;
  }
  uVar19 = (undefined3)((uint)in_stack_ffffffffffffff18 >> 8);
  EVar9 = param_1->Resource->CreationFlags;
  EVar17 = Textures;
  if ((EVar9 & (DepthStencilTargetable|RenderTargetable)) != None) {
    EVar17 = RenderTargets;
  }
  FLLMScope::FLLMScope(local_res10,EVar17,false,None,Default,true);
  FMemScope::FMemScope(&local_98,EVar17,true);
  EVar14 = RHIGetDefaultResourceState(EVar9,FVar18 != (ForElementType<void_*>)0x0);
  (**(code **)(GDynamicRHI->_padding_ + 0x1a0))
            (GDynamicRHI,&local_a8,iVar6,iVar5,CONCAT31(uVar19,EVar3),uVar13,EVar9,EVar14,FVar18,
             iVar4,local_a0,&local_res20);
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_res10);
  if ((FRHIResource **)local_90 != &local_a8) {
    this_00 = (FRHIResource *)*local_90;
    *local_90 = (longlong)local_a8;
    local_a8 = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_148863485;
    FRHIResource::Release(this_00);
  }
  if (local_a8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_a8);
  }
LAB_148863485:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_res20 != (FRHITexture *)0x0) {
    LOCK();
    local_res18->Counter->Counter = local_res18->Counter->Counter + 1;
    UNLOCK();
    local_50 = 0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FTexture2DMipAllocator_AsyncCreate::UploadMips'::`11'::<lambda_1>,1,0>
                ::_vftable_;
    local_60 = local_res18->Counter;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FTexture2DMipAllocator_AsyncCreate::UploadMips'::__l11::<lambda_1>,void>
                  ::Call;
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)&local_90,(TStatIdData *)local_78,
               (TRefCountPtr<FBaseGraphTask> *)&TStatId::TStatId_NAME_None,(Type)&local_res20);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uchar *)(local_90 + 6);
      iVar4 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*local_90)(local_90,1);
      }
    }
  }
  ReleaseAllocatedMipData(this);
  if ((1 < (uint)this->_padding_) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(uint32)NextTickState <= (uint32)InState",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                          ,0x68,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    uVar13 = (*pcVar10)();
    return (bool)uVar13;
  }
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  if (local_res20 != (FRHITexture *)0x0) {
    LOCK();
    plVar2 = &local_res20->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar11 == 1) && (local_res20 != (FRHITexture *)0x0)) {
      (**(code **)local_res20->_padding_)(local_res20,1);
      return true;
    }
  }
  return true;
}

