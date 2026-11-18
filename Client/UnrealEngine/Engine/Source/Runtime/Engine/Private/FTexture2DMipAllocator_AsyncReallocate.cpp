// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FTexture2DMipAllocator_AsyncReallocate @ 148806730

FTexture2DMipAllocator_AsyncReallocate * __thiscall
FTexture2DMipAllocator_AsyncReallocate::FTexture2DMipAllocator_AsyncReallocate
          (FTexture2DMipAllocator_AsyncReallocate *this,UTexture *param_1)

{
  byte bVar1;
  byte bVar2;
  
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  this->_padding_ = param_1->_padding_;
  *(uint *)&this->_padding_ =
       (uint)*(byte *)((longlong)&param_1->_padding_ + 3) -
       (uint)*(byte *)((longlong)&param_1->_padding_ + 5);
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 6);
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 3);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(uint *)((longlong)&this->_padding_ + 4) = (uint)bVar2 - (uint)bVar1;
  this->_padding_ = (longlong)&___7FTexture2DMipAllocator_AsyncReallocate__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->LockedMipIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->LockedMipIndices).ArrayNum = 0;
  (this->LockedMipIndices).ArrayMax = 0xf;
  return this;
}

// ~FTexture2DMipAllocator_AsyncReallocate @ 14880ca30

void __thiscall
FTexture2DMipAllocator_AsyncReallocate::~FTexture2DMipAllocator_AsyncReallocate
          (FTexture2DMipAllocator_AsyncReallocate *this)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = (this->LockedMipIndices).ArrayNum;
  this->_padding_ = (longlong)&___7FTexture2DMipAllocator_AsyncReallocate__6B_;
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!LockedMipIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipAllocator_AsyncReallocate.cpp"
                       ,0x15,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (this->LockedMipIndices).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FTextureMipAllocator__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
    return;
  }
  return;
}

// AllocateMips @ 14881b2c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTexture2DMipAllocator_AsyncReallocate::AllocateMips
          (FTexture2DMipAllocator_AsyncReallocate *this,FTextureUpdateContext *param_1,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_2
          ,FTextureUpdateSyncOptions *param_3)

{
  int *piVar1;
  int iVar2;
  FTexture2DMipMap *pFVar3;
  FRHIResource *this_00;
  ForElementType<FTextureMipInfo> FVar4;
  ForElementType<int> FVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FTexture2DMipMap **ppFVar12;
  TRefCountPtr<FRHITexture> TVar13;
  ForElementType<int> FVar14;
  ForElementType<FTextureMipInfo> FVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 in_stack_ffffffffffffff18;
  undefined4 uVar21;
  int local_b8;
  FLLMScope local_b4;
  FLLMScope local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  FRHIResource *local_98;
  longlong local_90;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  longlong local_58;
  undefined4 local_48;
  
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (((int)this->_padding_ <= *(int *)((longlong)&this->_padding_ + 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingFirstLODIdx < CurrentFirstLODIdx",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipAllocator_AsyncReallocate.cpp"
                         ,0x21,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pTVar7 = CVarFlushRHIThreadOnSTreamingTextureLocks.Ref;
  if (param_1->Resource == (FStreamableTextureResource *)0x0) {
    return false;
  }
  lVar20 = param_1->Resource->_padding_;
  lVar17 = 0;
  if ((lVar20 != 0) && (lVar17 = 0, *(char *)(lVar20 + 0x112) == '\0')) {
    lVar17 = lVar20;
  }
  if (lVar17 == 0) {
    return false;
  }
  plVar19 = &this->_padding_;
  if (this->_padding_ == 0) {
    ppFVar12 = TArrayView<FTexture2DMipMap_const_*,int>::operator[]
                         (&param_1->MipsView,*(int *)((longlong)&this->_padding_ + 4));
    pFVar3 = *ppFVar12;
    if ((param_3->Counter == (FThreadSafeCounter *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SyncOptions.Counter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipAllocator_AsyncReallocate.cpp"
                           ,0x2d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    LOCK();
    param_3->Counter->Counter = param_3->Counter->Counter + 1;
    UNLOCK();
    TVar13 = RHIAsyncReallocateTexture2D
                       ((FRHITexture *)&stack0xffffffffffffff68,(int)lVar17,
                        (uint)*(byte *)((longlong)&this->_padding_ + 6),(uint)pFVar3->SizeX,
                        (FThreadSafeCounter *)CONCAT44(uVar21,(uint)pFVar3->SizeY));
    if ((FRHITexture *)plVar19 != TVar13.Reference) {
      this_00 = (FRHIResource *)*plVar19;
      *plVar19 = (TVar13.Reference)->_padding_;
      (TVar13.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_98 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_98);
    }
    if (((int)this->_padding_ != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(uint32)NextTickState <= (uint32)InState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                           ,0x68,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    *(undefined4 *)&this->_padding_ = 0;
    goto LAB_14881b433;
  }
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_14881b482:
    lVar20 = 0;
  }
  else {
    bVar8 = IsInGameThread();
    lVar20 = 4;
    if (bVar8) goto LAB_14881b482;
  }
  iVar2 = *(int *)((longlong)pTVar7->ShadowedValue + lVar20);
  TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>::AddDefaulted
            (param_2,(int)this->_padding_);
  iVar11 = *(int *)((longlong)&this->_padding_ + 4);
  uVar18 = (ulonglong)iVar11;
  if (iVar11 < (int)this->_padding_) {
    local_a8 = uVar18 * 0x30;
    lVar20 = uVar18 * 8;
    do {
      uVar16 = (uint)uVar18;
      uVar10 = 0;
      if ((int)uVar16 < (param_1->MipsView).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      local_a0 = lVar20;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_90 = *(longlong *)(lVar20 + (longlong)(param_1->MipsView).DataPtr);
      uVar10 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar15 = (ForElementType<FTextureMipInfo>)param_2;
      if (FVar4 != (ForElementType<FTextureMipInfo>)0x0) {
        FVar15 = FVar4;
      }
      plVar19 = (longlong *)(local_a8 + (longlong)FVar15);
      *(EPixelFormat *)(plVar19 + 2) = param_1->Resource->PixelFormat;
      *(uint *)((longlong)plVar19 + 0x14) = (uint)*(ushort *)(local_90 + 0x48);
      *(uint *)(plVar19 + 3) = (uint)*(ushort *)(local_90 + 0x4a);
      plVar19[1] = 0;
      iVar11 = *(int *)((longlong)&this->_padding_ + 4);
      lVar20 = this->_padding_;
      FLLMScope::FLLMScope(local_b0,Textures,false,None,Default,true);
      FMemScope::FMemScope((FMemScope *)&stack0xffffffffffffff80,Textures,true);
      local_70 = 0;
      local_60 = 1;
      local_5c = 0;
      local_78 = lVar20;
      local_68 = uVar16 - iVar11;
      local_5b = 0 < iVar2;
      FLLMScope::FLLMScope(&local_b4,Textures,false,None,Default,true);
      FMemScope::FMemScope((FMemScope *)&stack0xffffffffffffff78,Textures,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x1e0))
                (GDynamicRHI,&stack0xffffffffffffffa8,0x154be5ed0);
      FMemScope::~FMemScope((FMemScope *)&stack0xffffffffffffff78);
      FLLMScope::~FLLMScope(&local_b4);
      lVar20 = local_58;
      *(undefined4 *)((longlong)plVar19 + 0x24) = local_48;
      FMemScope::~FMemScope((FMemScope *)&stack0xffffffffffffff80);
      FLLMScope::~FLLMScope(local_b0);
      *plVar19 = lVar20;
      local_b8 = uVar16 - *(int *)((longlong)&this->_padding_ + 4);
      FVar5 = (this->LockedMipIndices).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<int>)&this->LockedMipIndices;
      if (FVar5 != (ForElementType<int>)0x0) {
        FVar14 = FVar5;
      }
      if ((ulonglong)FVar14 <= &local_b8) {
        FVar14 = (ForElementType<int>)&this->LockedMipIndices;
        if (FVar5 != (ForElementType<int>)0x0) {
          FVar14 = FVar5;
        }
        if ((&local_b8 < (int *)((longlong)FVar14 + (longlong)(this->LockedMipIndices).ArrayMax * 4)
            ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      iVar11 = (this->LockedMipIndices).ArrayNum;
      piVar1 = &(this->LockedMipIndices).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&(this->LockedMipIndices).AllocatorInstance,piVar1);
      }
      (this->LockedMipIndices).ArrayNum = iVar11 + 1;
      FVar5 = (this->LockedMipIndices).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<int>)&this->LockedMipIndices;
      if (FVar5 != (ForElementType<int>)0x0) {
        FVar14 = FVar5;
      }
      local_a8 = local_a8 + 0x30;
      lVar20 = local_a0 + 8;
      uVar18 = (ulonglong)(uVar16 + 1);
      *(int *)((longlong)FVar14 + (longlong)iVar11 * 4) = local_b8;
      local_a0 = lVar20;
    } while ((int)(uVar16 + 1) < (int)this->_padding_);
  }
  if ((1 < (uint)this->_padding_) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                         ,0x68,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  *(undefined4 *)&this->_padding_ = 1;
LAB_14881b433:
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return true;
}

// Cancel @ 148824d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DMipAllocator_AsyncReallocate::Cancel
          (FTexture2DMipAllocator_AsyncReallocate *this,FTextureUpdateSyncOptions *param_1)

{
  int *piVar1;
  ForElementType<int> FVar2;
  int iVar3;
  bool bVar4;
  ForElementType<int> FVar5;
  undefined1 auStackX_8 [8];
  FLLMScope aFStackX_10 [2];
  FMemScope FStackX_18;
  
  if (this->_padding_ != 0) {
    bVar4 = IsInParallelGameThread();
    if (!bVar4) {
      IsInGameThread();
    }
    FVar5 = (this->LockedMipIndices).AllocatorInstance.SecondaryData;
    iVar3 = (this->LockedMipIndices).ArrayNum;
    if (FVar5 == (ForElementType<int>)0x0) {
      FVar5 = (ForElementType<int>)&this->LockedMipIndices;
    }
    FVar2 = (ForElementType<int>)((longlong)FVar5 + (longlong)iVar3 * 4);
    while( true ) {
      if ((this->LockedMipIndices).ArrayNum != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (FVar5 == FVar2) break;
      bVar4 = IsInParallelGameThread();
      if (!bVar4) {
        IsInGameThread();
      }
      FLLMScope::FLLMScope(aFStackX_10,Textures,false,None,Default,true);
      FMemScope::FMemScope(&FStackX_18,Textures,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0);
      FMemScope::~FMemScope(&FStackX_18);
      FLLMScope::~FLLMScope(aFStackX_10);
      FVar5 = (ForElementType<int>)((longlong)FVar5 + 4);
    }
    piVar1 = &(this->LockedMipIndices).ArrayMax;
    (this->LockedMipIndices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,0,&(this->LockedMipIndices).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// GetCancelThread @ 14883d9e0

ETickThread __thiscall
FTexture2DMipAllocator_AsyncReallocate::GetCancelThread
          (FTexture2DMipAllocator_AsyncReallocate *this)

{
  return None;
}

// UnlockNewMips @ 14885dfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DMipAllocator_AsyncReallocate::UnlockNewMips(FTexture2DMipAllocator_AsyncReallocate *this)

{
  int *piVar1;
  ForElementType<int> FVar2;
  int iVar3;
  bool bVar4;
  ForElementType<int> FVar5;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  
  if (this->_padding_ != 0) {
    bVar4 = IsInParallelGameThread();
    if (!bVar4) {
      IsInGameThread();
    }
    FVar5 = (this->LockedMipIndices).AllocatorInstance.SecondaryData;
    iVar3 = (this->LockedMipIndices).ArrayNum;
    if (FVar5 == (ForElementType<int>)0x0) {
      FVar5 = (ForElementType<int>)&this->LockedMipIndices;
    }
    FVar2 = (ForElementType<int>)((longlong)FVar5 + (longlong)iVar3 * 4);
    while( true ) {
      if ((this->LockedMipIndices).ArrayNum != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar5 == FVar2) break;
      bVar4 = IsInParallelGameThread();
      if (!bVar4) {
        IsInGameThread();
      }
      FLLMScope::FLLMScope(local_res10,Textures,false,None,Default,true);
      FMemScope::FMemScope(&local_res18,Textures,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,0x154be5ed0);
      FMemScope::~FMemScope(&local_res18);
      FLLMScope::~FLLMScope(local_res10);
      FVar5 = (ForElementType<int>)((longlong)FVar5 + 4);
    }
    piVar1 = &(this->LockedMipIndices).ArrayMax;
    (this->LockedMipIndices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,0,&(this->LockedMipIndices).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

// UploadMips @ 148863620

bool __thiscall
FTexture2DMipAllocator_AsyncReallocate::UploadMips
          (FTexture2DMipAllocator_AsyncReallocate *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    return false;
  }
  UnlockNewMips(this);
  if (2 < (uint)this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)NextTickState <= (uint32)InState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                       ,0x68,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return true;
}

