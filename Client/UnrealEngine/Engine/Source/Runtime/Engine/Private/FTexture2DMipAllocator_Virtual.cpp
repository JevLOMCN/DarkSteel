// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FTexture2DMipAllocator_Virtual @ 1488067a0

FTexture2DMipAllocator_Virtual * __thiscall
FTexture2DMipAllocator_Virtual::FTexture2DMipAllocator_Virtual
          (FTexture2DMipAllocator_Virtual *this,UTexture *param_1)

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
  this->_padding_ = (longlong)&___7FTexture2DMipAllocator_Virtual__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->LockedMipIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->LockedMipIndices).ArrayNum = 0;
  (this->LockedMipIndices).ArrayMax = 0xf;
  return this;
}

// ~FTexture2DMipAllocator_Virtual @ 14880cab0

void __thiscall
FTexture2DMipAllocator_Virtual::~FTexture2DMipAllocator_Virtual
          (FTexture2DMipAllocator_Virtual *this)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = (this->LockedMipIndices).ArrayNum;
  this->_padding_ = (longlong)&___7FTexture2DMipAllocator_Virtual__6B_;
  if (iVar1 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!LockedMipIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipAllocator_Virtual.cpp"
                       ,0x16,L"");
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

// AllocateMips @ 14881b7b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTexture2DMipAllocator_Virtual::AllocateMips
          (FTexture2DMipAllocator_Virtual *this,FTextureUpdateContext *param_1,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_2
          ,FTextureUpdateSyncOptions *param_3)

{
  int iVar1;
  FTexture2DMipMap *pFVar2;
  ForElementType<FTextureMipInfo> FVar3;
  ForElementType<int> FVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ForElementType<int> FVar14;
  ForElementType<FTextureMipInfo> FVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint local_98;
  FLLMScope local_94;
  FLLMScope local_90 [2];
  FMemScope local_88;
  FMemScope local_80;
  longlong local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined8 local_58 [2];
  undefined4 local_48;
  
  if (((int)this->_padding_ <= *(int *)((longlong)&this->_padding_ + 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingFirstLODIdx < CurrentFirstLODIdx",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DMipAllocator_Virtual.cpp"
                         ,0x22,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  pTVar6 = CVarFlushRHIThreadOnSTreamingTextureLocks.Ref;
  if (param_1->Resource == (FStreamableTextureResource *)0x0) {
    return false;
  }
  lVar13 = param_1->Resource->_padding_;
  lVar12 = 0;
  if ((lVar13 != 0) && (lVar12 = 0, *(char *)(lVar13 + 0x112) == '\0')) {
    lVar12 = lVar13;
  }
  if (lVar12 == 0) {
    return false;
  }
  if (this->_padding_ == 0) {
    DoConvertToVirtualWithNewMips(this,param_1);
    if (((int)this->_padding_ != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(uint32)NextTickState <= (uint32)InState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                           ,0x68,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    *(undefined4 *)&this->_padding_ = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
    return true;
  }
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    lVar13 = 4;
    if (!bVar8) goto LAB_14881b8b5;
  }
  lVar13 = 0;
LAB_14881b8b5:
  iVar1 = *(int *)((longlong)pTVar6->ShadowedValue + lVar13);
  (**(code **)(GDynamicRHI->_padding_ + 0x378))(GDynamicRHI,0x154be5ed0);
  TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>::AddDefaulted
            (param_2,(int)this->_padding_);
  uVar16 = *(uint *)((longlong)&this->_padding_ + 4);
  local_98 = uVar16;
  if ((int)uVar16 < (int)this->_padding_) {
    do {
      uVar10 = 0;
      if ((int)uVar16 < (param_1->MipsView).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      local_98 = uVar16;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      uVar10 = local_98;
      pFVar2 = (param_1->MipsView).DataPtr[(int)uVar16];
      uVar16 = 0;
      if ((int)local_98 < param_2->ArrayNum) {
        uVar16 = ~local_98 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      uVar16 = local_98;
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar15 = (ForElementType<FTextureMipInfo>)param_2;
      if (FVar3 != (ForElementType<FTextureMipInfo>)0x0) {
        FVar15 = FVar3;
      }
      puVar17 = (undefined8 *)((longlong)(int)uVar10 * 0x30 + (longlong)FVar15);
      *(EPixelFormat *)(puVar17 + 2) = param_1->Resource->PixelFormat;
      *(uint *)((longlong)puVar17 + 0x14) = (uint)pFVar2->SizeX;
      *(uint *)(puVar17 + 3) = (uint)pFVar2->SizeY;
      puVar17[1] = 0;
      lVar13 = this->_padding_;
      FLLMScope::FLLMScope(local_90,Textures,false,None,Default,true);
      FMemScope::FMemScope(&local_80,Textures,true);
      local_70 = 0;
      local_60 = 1;
      local_68 = uVar16;
      local_5c = 0;
      local_78 = lVar13;
      local_5b = 0 < iVar1;
      FLLMScope::FLLMScope(&local_94,Textures,false,None,Default,true);
      FMemScope::FMemScope(&local_88,Textures,true);
      (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_58);
      FMemScope::~FMemScope(&local_88);
      FLLMScope::~FLLMScope(&local_94);
      uVar7 = local_58[0];
      *(undefined4 *)((longlong)puVar17 + 0x24) = local_48;
      FMemScope::~FMemScope(&local_80);
      FLLMScope::~FLLMScope(local_90);
      *puVar17 = uVar7;
      FVar4 = (this->LockedMipIndices).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<int>)&this->LockedMipIndices;
      if (FVar4 != (ForElementType<int>)0x0) {
        FVar14 = FVar4;
      }
      if ((ulonglong)FVar14 <= &local_98) {
        FVar14 = (ForElementType<int>)&this->LockedMipIndices;
        if (FVar4 != (ForElementType<int>)0x0) {
          FVar14 = FVar4;
        }
        if ((&local_98 <
             (uint *)((longlong)FVar14 + (longlong)(this->LockedMipIndices).ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      iVar11 = (this->LockedMipIndices).ArrayNum;
      if (iVar11 == (this->LockedMipIndices).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                           (0x404,&(this->LockedMipIndices).AllocatorInstance,
                            &(this->LockedMipIndices).ArrayMax);
      }
      (this->LockedMipIndices).ArrayNum = iVar11 + 1;
      FVar4 = (this->LockedMipIndices).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<int>)&this->LockedMipIndices;
      if (FVar4 != (ForElementType<int>)0x0) {
        FVar14 = FVar4;
      }
      *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4) = local_98;
      uVar16 = local_98 + 1;
      local_98 = uVar16;
    } while ((int)uVar16 < (int)this->_padding_);
  }
  if ((1 < (uint)this->_padding_) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                         ,0x68,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  return true;
}

// Cancel @ 148824d70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTexture2DMipAllocator_Virtual::Cancel
          (FTexture2DMipAllocator_Virtual *this,FTextureUpdateSyncOptions *param_1)

{
  UnlockNewMips(this);
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148824da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(GDynamicRHI->_padding_ + 0x378))
              (GDynamicRHI,0x154be5ed0,this->_padding_,(int)this->_padding_);
    return;
  }
  return;
}

// DoConvertToVirtualWithNewMips @ 148832130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FTexture2DMipAllocator_Virtual::DoConvertToVirtualWithNewMips
          (FTexture2DMipAllocator_Virtual *this,FTextureUpdateContext *param_1)

{
  longlong *plVar1;
  FRHITexture *pFVar2;
  FTexture2DMipMap *pFVar3;
  FRHIResource *this_00;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  FTexture2DMipMap **ppFVar7;
  longlong lVar8;
  FRHITextureCreateDesc *pFVar9;
  TRefCountPtr<FRHITexture> TVar10;
  FRHITexture *pFVar11;
  FRHITexture *this_01;
  undefined1 auStack_168 [32];
  undefined1 local_138 [80];
  wchar_t *local_e8;
  FResourceBulkDataInterface *local_d8;
  FNameEntryId local_d0;
  ERHITextureInitAction local_cc;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FRHITextureCreateDesc local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (param_1->Resource != (FStreamableTextureResource *)0x0) {
    pFVar2 = (FRHITexture *)param_1->Resource->_padding_;
    this_01 = (FRHITexture *)0x0;
    if (pFVar2 != (FRHITexture *)0x0) {
      pFVar11 = this_01;
      if ((pFVar2->TextureDesc).Dimension == Texture2D) {
        pFVar11 = pFVar2;
      }
      if ((pFVar11 != (FRHITexture *)0x0) &&
         (puVar6 = (uint *)(**(code **)(pFVar11->_padding_ + 0x20))(), (*puVar6 >> 0x17 & 1) != 0))
      {
        pFVar2 = (FRHITexture *)param_1->Resource->_padding_;
        if ((pFVar2 != (FRHITexture *)0x0) && ((pFVar2->TextureDesc).Dimension == Texture2D)) {
          this_01 = pFVar2;
        }
        pFVar2 = (FRHITexture *)this->_padding_;
        if (pFVar2 == this_01) {
          return;
        }
        this->_padding_ = (longlong)this_01;
        if (this_01 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_01);
        }
        if (pFVar2 == (FRHITexture *)0x0) {
          return;
        }
        FRHIResource::Release((FRHIResource *)pFVar2);
        return;
      }
    }
    bVar5 = IsInRenderingThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ppFVar7 = TArrayView<FTexture2DMipMap_const_*,int>::operator[](&param_1->MipsView,0);
    pFVar3 = *ppFVar7;
    lVar8 = (**(code **)(param_1->Resource->_padding_ + 0x58))();
    pFVar9 = FRHITextureCreateDesc::Create2D
                       (&local_a8,L"FTexture2DUpdate",(uint)pFVar3->SizeX,(uint)pFVar3->SizeY,
                        param_1->Resource->PixelFormat);
    *(undefined1 *)&pFVar9->_padding_ = *(undefined1 *)((longlong)&this->_padding_ + 3);
    pFVar9->_padding_ = param_1->Resource->CreationFlags | Virtual;
    FRHITextureDesc::FRHITextureDesc
              ((FRHITextureDesc *)(local_138 + 0x10),(FRHITextureDesc *)pFVar9);
    local_d8 = (FResourceBulkDataInterface *)pFVar9->DebugName;
    local_d0.Value = pFVar9->InitialState;
    local_cc = pFVar9->InitAction;
    local_c8 = (FName)pFVar9->BulkData;
    local_c0 = pFVar9->ClassName;
    local_b8 = pFVar9->OwnerName;
    if ((void *)local_a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._padding_);
    }
    if (*(FName *)(lVar8 + 0xc0) != (FName)0x0) {
      local_cc = BulkData;
      local_c8 = *(FName *)(lVar8 + 0xc0);
    }
    TVar10 = FRHICommandListBase::CreateTexture
                       ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                        (FRHITextureCreateDesc *)local_138);
    plVar1 = &this->_padding_;
    if ((FRHITexture *)plVar1 != TVar10.Reference) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar10.Reference)->_padding_;
      (TVar10.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if ((FRHIResource *)local_138._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_138._0_8_);
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x378))
              (GDynamicRHI,0x154be5ed0,*plVar1,(int)this->_padding_);
    (**(code **)(GDynamicRHI->_padding_ + 0x380))
              (GDynamicRHI,0x154be5ed0,*plVar1,(int)this->_padding_);
    pFVar2 = (FRHITexture *)param_1->Resource->_padding_;
    if ((pFVar2 != (FRHITexture *)0x0) && ((pFVar2->TextureDesc).Dimension == Texture2D)) {
      this_01 = pFVar2;
    }
    UE::RHI::CopySharedMips_AssumeSRVMaskState
              ((FRHICommandList *)&GRHICommandList.CommandListImmediate,this_01,
               (FRHITexture *)*plVar1);
    if (local_e8 != (wchar_t *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  return;
}

// GetCancelThread @ 14883d9f0

ETickThread __thiscall
FTexture2DMipAllocator_Virtual::GetCancelThread(FTexture2DMipAllocator_Virtual *this)

{
  return None;
}

// UnlockNewMips @ 14885e180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTexture2DMipAllocator_Virtual::UnlockNewMips(FTexture2DMipAllocator_Virtual *this)

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

// UploadMips @ 148863690

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTexture2DMipAllocator_Virtual::UploadMips
          (FTexture2DMipAllocator_Virtual *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->_padding_ == 0) {
    return false;
  }
  UnlockNewMips(this);
  if (this->_padding_ != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0x380))
              (GDynamicRHI,0x154be5ed0,this->_padding_,
               *(undefined4 *)((longlong)&this->_padding_ + 4));
  }
  if (2 < (uint)this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(uint32)NextTickState <= (uint32)InState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureMipAllocator.h"
                       ,0x68,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *(undefined4 *)&this->_padding_ = 2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return true;
}

