// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 10

// FLandscapeTextureStreamingManager @ 145fb4d80

FLandscapeTextureStreamingManager * __thiscall
FLandscapeTextureStreamingManager::FLandscapeTextureStreamingManager
          (FLandscapeTextureStreamingManager *this)

{
  code *pcVar1;
  bool bVar2;
  FLandscapeTextureStreamingManager *pFVar3;
  longlong lVar4;
  FLandscapeTextureStreamingManager *local_18 [2];
  
  *(undefined8 *)&this->TextureStates = 0;
  *(undefined8 *)&(this->TextureStates).field_0x8 = 0;
  *(undefined8 *)&(this->TextureStates).field_0x20 = 0;
  *(undefined4 *)&(this->TextureStates).field_0x28 = 0;
  *(undefined4 *)&(this->TextureStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureStates).field_0x34 = 0;
  *(undefined4 *)&(this->TextureStates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TextureStates).field_0x40 = 0;
  *(undefined4 *)&(this->TextureStates).field_0x48 = 0;
  local_18[0] = this;
  if (((AllStreamingManagers.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       AllStreamingManagers.AllocatorInstance.Data + (longlong)AllStreamingManagers.ArrayMax * 8))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLandscapeTextureStreamingManager *)(*pcVar1)();
    return pFVar3;
  }
  if (AllStreamingManagers.ArrayNum == AllStreamingManagers.ArrayMax) {
    AllStreamingManagers.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&AllStreamingManagers.AllocatorInstance,&AllStreamingManagers.ArrayMax);
  }
  lVar4 = (longlong)AllStreamingManagers.ArrayNum;
  AllStreamingManagers.ArrayNum = AllStreamingManagers.ArrayNum + 1;
  *(FLandscapeTextureStreamingManager **)(AllStreamingManagers.AllocatorInstance.Data + lVar4 * 8) =
       local_18[0];
  return this;
}

// ~FLandscapeTextureStreamingManager @ 145fb66a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLandscapeTextureStreamingManager::~FLandscapeTextureStreamingManager
          (FLandscapeTextureStreamingManager *this)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  FLandscapeTextureStreamingManager *local_res8;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  local_res8 = this;
  TArray<FLandscapeTextureStreamingManager_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&AllStreamingManagers,&local_res8,No);
  iVar8 = 0;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
              *)this);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar7 = local_88._24_8_ >> 0x20;
  uVar9 = local_88._28_4_;
  local_28 = (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
              *)this;
  if ((int)uVar9 < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      plVar3 = local_58;
      iVar5 = iVar8 + 1;
      if (*(int *)(*local_58 + 8 + (longlong)(int)uVar7 * 0x18) < 1) {
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)(int)uVar9 * 0x18 + *local_58));
      if ((pUVar6 != (UObject *)0x0) &&
         (bVar4 = AnyStreamingManagerWantsTextureStreamedIn
                            ((TWeakObjectPtr<UTexture,FWeakObjectPtr>)
                             *(FWeakObjectPtr *)(*plVar3 + (longlong)(int)uVar9 * 0x18)), !bVar4)) {
        pUVar6[5].field_0x8 = pUVar6[5].field_0x8 & 0xf7;
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar7 = (ulonglong)uStack_3c;
      uVar9 = uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
        local_28->HashSize = iVar5;
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
    if ((0 < iVar8) && (3 < (byte)LogLandscape._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
    }
  }
  *(undefined4 *)&(this->TextureStates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TextureStates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AnyStreamingManagerWantsTextureStreamedIn @ 145fba0b0

bool __cdecl
FLandscapeTextureStreamingManager::AnyStreamingManagerWantsTextureStreamedIn
          (TWeakObjectPtr<UTexture,FWeakObjectPtr> param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  int iVar10;
  undefined1 local_res10 [8];
  
  iVar7 = AllStreamingManagers.ArrayNum;
  pFVar1 = AllStreamingManagers.AllocatorInstance.Data + (longlong)iVar7 * 8;
  uVar8 = AllStreamingManagers._8_8_;
  FVar9.Data = AllStreamingManagers.AllocatorInstance.Data;
  do {
    while( true ) {
      if ((int)uVar8 != iVar7) {
        `TCheckedPointerIterator<FLandscapeTextureStreamingManager_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
        uVar8 = AllStreamingManagers._8_8_;
      }
      if (FVar9.Data == pFVar1) {
        return false;
      }
      plVar3 = *(longlong **)FVar9.Data;
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) break;
LAB_145fba1a0:
      FVar9.Data = FVar9.Data + 8;
    }
    plVar6 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar3[8];
    }
    iVar10 = *(int *)((longlong)plVar6 +
                     (ulonglong)
                     ((int)plVar3[9] - 1U &
                     (param_1.WeakPtr.ObjectSerialNumber ^ param_1.WeakPtr.ObjectIndex)) * 4);
    if (iVar10 == -1) goto LAB_145fba1a0;
    do {
      uVar4 = *(undefined8 *)(*plVar3 + (longlong)iVar10 * 0x18);
      lVar2 = *plVar3 + (longlong)iVar10 * 0x18;
      if (((uint)uVar4 == param_1.WeakPtr.ObjectIndex) &&
         ((uint)((ulonglong)uVar4 >> 0x20) == param_1.WeakPtr.ObjectSerialNumber)) {
        if (iVar10 != -1) {
          piVar5 = (int *)(lVar2 + 8);
          if (lVar2 == 0) {
            piVar5 = (int *)0x0;
          }
          if ((piVar5 != (int *)0x0) && (((char)piVar5[1] != '\0' || (0 < *piVar5)))) {
            return true;
          }
        }
        goto LAB_145fba1a0;
      }
      iVar10 = *(int *)(lVar2 + 0x10);
    } while (iVar10 != -1);
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// CheckRequestedTextures @ 145fba890

void __thiscall
FLandscapeTextureStreamingManager::CheckRequestedTextures(FLandscapeTextureStreamingManager *this)

{
  return;
}

// CleanupPostGarbageCollect @ 145fbaf30

void __thiscall
FLandscapeTextureStreamingManager::CleanupPostGarbageCollect
          (FLandscapeTextureStreamingManager *this)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  UObject *pUVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
              *)this);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
              *)this;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      plVar2 = local_48;
      lVar1 = (longlong)(int)uVar5 * 0x18;
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_48 + lVar1));
      if (pUVar4 == (UObject *)0x0) {
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,(int)uVar5);
        local_10 = '\x01';
      }
      else if ((*(char *)(lVar1 + 0xc + *plVar2) != '\0') || (0 < *(int *)(lVar1 + 8 + *plVar2))) {
        pUVar4[5].field_0x8 = pUVar4[5].field_0x8 | 8;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// IsTextureFullyStreamedIn @ 145fc5290

bool __cdecl FLandscapeTextureStreamingManager::IsTextureFullyStreamedIn(UTexture *param_1)

{
  bool bVar1;
  
  if (param_1 != (UTexture *)0x0) {
    bVar1 = UStreamableRenderAsset::HasPendingInitOrStreaming
                      ((UStreamableRenderAsset *)param_1,true);
    if (!bVar1) {
      bVar1 = UStreamableRenderAsset::IsFullyStreamedIn((UStreamableRenderAsset *)param_1);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

// RequestTextureFullyStreamedIn @ 145fc77c0

bool __thiscall
FLandscapeTextureStreamingManager::RequestTextureFullyStreamedIn
          (FLandscapeTextureStreamingManager *this,UTexture *param_1,bool param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FTextureState *pFVar5;
  FWeakObjectPtr local_res8;
  UTexture *local_res10;
  
  if (param_1 == (UTexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pFVar5 = TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
           ::FindOrAddImpl<TWeakObjectPtr<UTexture,FWeakObjectPtr>_const_&>
                     ((TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
                       *)this,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                      (TWeakObjectPtr<UTexture,FWeakObjectPtr> *)&local_res8);
  bVar1 = (byte)param_1->_padding_;
  if (pFVar5->RequestCount == 0) {
    *(byte *)&param_1->_padding_ = bVar1 | 8;
  }
  else if ((bVar1 & 8) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5790779683641491472>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
                       ,0x10,"Texture->bForceMiplevelsToBeResident");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    *(byte *)&param_1->_padding_ = (byte)param_1->_padding_ | 8;
  }
  pFVar5->RequestCount = pFVar5->RequestCount + 1;
  if (param_1 != (UTexture *)0x0) {
    bVar3 = UStreamableRenderAsset::HasPendingInitOrStreaming
                      ((UStreamableRenderAsset *)param_1,true);
    if (!bVar3) {
      bVar3 = UStreamableRenderAsset::IsFullyStreamedIn((UStreamableRenderAsset *)param_1);
      if (bVar3) {
        return true;
      }
    }
  }
  if (!param_2) {
    return false;
  }
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)param_1,true,false);
  if (param_1 != (UTexture *)0x0) {
    bVar3 = UStreamableRenderAsset::HasPendingInitOrStreaming
                      ((UStreamableRenderAsset *)param_1,true);
    if (!bVar3) {
      bVar3 = UStreamableRenderAsset::IsFullyStreamedIn((UStreamableRenderAsset *)param_1);
      if (bVar3) {
        return true;
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsFullyStreamedIn",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
                     ,0x38,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// RequestTextureFullyStreamedInForever @ 145fc7990

bool __thiscall
FLandscapeTextureStreamingManager::RequestTextureFullyStreamedInForever
          (FLandscapeTextureStreamingManager *this,UTexture *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTextureState *pFVar4;
  FWeakObjectPtr local_res8;
  UTexture *local_res10;
  
  if (param_1 == (UTexture *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
                       ,0x5e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTexture *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pFVar4 = TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
           ::FindOrAddImpl<TWeakObjectPtr<UTexture,FWeakObjectPtr>_const_&>
                     ((TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
                       *)this,local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                      (TWeakObjectPtr<UTexture,FWeakObjectPtr> *)&local_res8);
  pFVar4->bForever = true;
  *(byte *)&param_1->_padding_ = (byte)param_1->_padding_ | 8;
  bVar2 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)param_1,true);
  if (!bVar2) {
    bVar2 = UStreamableRenderAsset::IsFullyStreamedIn((UStreamableRenderAsset *)param_1);
    if (bVar2) {
      return true;
    }
  }
  if (!param_2) {
    return false;
  }
  UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)param_1,true,false);
  bVar2 = UStreamableRenderAsset::HasPendingInitOrStreaming((UStreamableRenderAsset *)param_1,true);
  if (!bVar2) {
    bVar2 = UStreamableRenderAsset::IsFullyStreamedIn((UStreamableRenderAsset *)param_1);
    if (bVar2) {
      return true;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsFullyStreamedIn",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
                     ,0x38,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// UnrequestTextureFullyStreamedIn @ 145fca830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLandscapeTextureStreamingManager::UnrequestTextureFullyStreamedIn
          (FLandscapeTextureStreamingManager *this,UTexture *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  FTextureState *pFVar3;
  int iVar4;
  undefined1 *puVar5;
  FWeakObjectPtr local_res10;
  FName local_res18 [2];
  FString local_18;
  
  if (param_1 != (UTexture *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = (FName)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    pFVar3 = TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
             ::Find((TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
                     *)this,(TWeakObjectPtr<UTexture_const_,FWeakObjectPtr>)local_res10);
    if (pFVar3 != (FTextureState *)0x0) {
      if (0 < pFVar3->RequestCount) {
        iVar4 = pFVar3->RequestCount + -1;
        pFVar3->RequestCount = iVar4;
        if ((pFVar3->bForever == false) && (iVar4 < 1)) {
          if (*(int *)&(this->TextureStates).field_0x8 != *(int *)&(this->TextureStates).field_0x34)
          {
            puVar5 = *(undefined1 **)&(this->TextureStates).field_0x40;
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &(this->TextureStates).field_0x38;
            }
            iVar4 = *(int *)(puVar5 + ((longlong)
                                       (local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex) &
                                      (longlong)*(int *)&(this->TextureStates).field_0x48 - 1U) * 4)
            ;
            if (iVar4 != -1) {
              do {
                uVar1 = *(undefined8 *)(*(longlong *)&this->TextureStates + (longlong)iVar4 * 0x18);
                if (((uint)uVar1 == local_res10.ObjectIndex) &&
                   ((uint)((ulonglong)uVar1 >> 0x20) == local_res10.ObjectSerialNumber)) {
                  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
                  ::RemoveByIndex((TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
                                   *)this,iVar4);
                  break;
                }
                iVar4 = *(int *)(*(longlong *)&this->TextureStates + 0x10 + (longlong)iVar4 * 0x18);
              } while (iVar4 != -1);
            }
          }
          if ((AllStreamingManagers.ArrayNum == 1) ||
             (bVar2 = AnyStreamingManagerWantsTextureStreamedIn
                                ((TWeakObjectPtr<UTexture,FWeakObjectPtr>)local_res10), !bVar2)) {
            *(byte *)&param_1->_padding_ = (byte)param_1->_padding_ & 0xf7;
            return;
          }
        }
        UE::Landscape::EnsureTextureForcedResident(param_1);
        return;
      }
      if (2 < (byte)LogLandscape._0_1_) {
        local_res18[0] = (FName)param_1->_padding_;
        ::FName::ToString(local_res18,&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// WaitForTextureStreaming @ 145fcaac0

bool __thiscall
FLandscapeTextureStreamingManager::WaitForTextureStreaming(FLandscapeTextureStreamingManager *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  UStreamableRenderAsset *this_00;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId154,
               "LandscapeTextureStreamingaAnager_WaitForTextureStreaming",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
               ,0x9a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId154);
  }
  bVar3 = true;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
              *)this);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar8 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
              *)this;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = (UStreamableRenderAsset *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*local_48 + (longlong)(int)uVar8 * 0x18));
      if (this_00 == (UStreamableRenderAsset *)0x0) {
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,(int)uVar8);
        local_10 = '\x01';
      }
      else {
        if (this_00->bForceMiplevelsToBeResident == '\0') {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5790779683641491472>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
                             ,0x10,"Texture->bForceMiplevelsToBeResident");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          this_00->bForceMiplevelsToBeResident = '\x01';
        }
        bVar4 = UStreamableRenderAsset::HasPendingInitOrStreaming(this_00,true);
        if ((bVar4) || (bVar4 = UStreamableRenderAsset::IsFullyStreamedIn(this_00), !bVar4)) {
          UStreamableRenderAsset::WaitForStreaming(this_00,true,false);
          bVar4 = UStreamableRenderAsset::HasPendingInitOrStreaming(this_00,true);
          if ((bVar4) || (bVar4 = UStreamableRenderAsset::IsFullyStreamedIn(this_00), !bVar4)) {
            bVar4 = false;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsFullyStreamedIn",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStreamingManager.cpp"
                               ,0x38,L"");
            if (bVar6) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
          }
          else {
            bVar4 = true;
          }
          if ((bVar3) && (bVar4)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar8 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
        local_18->HashSize = iVar7;
        TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

