// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 9

// ~FSimpleLayerManager @ 14cf7ed80

void __thiscall FSimpleLayerManager::~FSimpleLayerManager(FSimpleLayerManager *this)

{
  *(undefined ***)&this->field_0x68 = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->field_0x68);
  *(undefined ***)this = &___7__TStereoLayerManager_UFLayerDesc_IStereoLayers____6B_;
  DestructItems<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int>
            (*(FLayerData **)&this->field_0x58,*(int *)&this->field_0x60);
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  *(undefined ***)this = &___7IStereoLayers__6B_;
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  if (*(FRHIResource **)&this->field_0x10 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x10);
    return;
  }
  return;
}

// AddReferencedObjects @ 14cf81c50

void __thiscall
FSimpleLayerManager::AddReferencedObjects(FSimpleLayerManager *this,FReferenceCollector *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  uVar2 = *(uint *)&this[-1].field_0x70;
  uVar8 = (ulonglong)(int)uVar2;
  plVar17 = *(longlong **)&this[-1].field_0x68;
  plVar16 = plVar17 + 4;
  plVar10 = plVar17 + uVar8 * 0xb;
  do {
    if (*(int *)&this[-1].field_0x70 != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (plVar17 == plVar10) {
      return;
    }
    uVar12 = *(uint *)(plVar16 + 1);
    iVar7 = 0;
    iVar13 = 0;
    uVar5 = 1;
    uVar6 = 0;
    if (uVar12 != 0) {
      puVar15 = (uint *)*plVar16;
      if ((uint *)*plVar16 == (uint *)0x0) {
        puVar15 = (uint *)(plVar16 + -2);
      }
      uVar6 = *puVar15;
      while (uVar6 == 0) {
        lVar9 = (longlong)iVar7;
        iVar13 = iVar13 + 0x20;
        iVar7 = iVar7 + 1;
        uVar6 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_14cf81d2e;
        uVar6 = puVar15[lVar9 + 1];
      }
      uVar5 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uVar5 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar6 = iVar13 + -1 + (int)lVar9;
      if ((int)uVar12 < (int)uVar6) {
        uVar6 = uVar12;
      }
    }
LAB_14cf81d2e:
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + -2);
    uVar11 = uVar12 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(uVar5,iVar7);
    TStack_98.CurrentBitIndex = uVar6;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar7 = (int)uVar12 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = iVar13;
    uStack_78 = CONCAT44(uStack_a4,(int)plVar16[-3] - *(int *)((longlong)plVar16 + 0x14));
    TStack_98.Array = pTVar1;
    if (((int)uVar12 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar6 = *(uint *)(plVar16 + 1);
    if (uVar12 != uVar6) {
      pTVar14 = (TBitArray<FDefaultBitArrayAllocator> *)*plVar16;
      if ((TBitArray<FDefaultBitArrayAllocator> *)*plVar16 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar14 = pTVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) &
               *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar7 * 4);
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar7;
        uVar11 = uVar11 + 0x20;
        iVar7 = iVar7 + 1;
        uVar12 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
        goto LAB_14cf81e40;
        uVar12 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar8 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar12 = (int)lVar9 + -1 + uVar11;
      if ((int)uVar6 < (int)uVar12) {
        uVar12 = uVar6;
      }
    }
LAB_14cf81e40:
    while( true ) {
      if ((int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34) != (int)uStack_78) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TStack_98.CurrentBitIndex == uVar12) && (TStack_98.Array == pTVar1)) break;
      lVar9 = *plVar17 + (longlong)TStack_98.CurrentBitIndex * 0x110;
      FReferenceCollector::AddReferencedObject
                (param_1,(FWeakObjectPtr *)(lVar9 + 200),(UObject *)0x0,(FProperty *)0x0);
      FReferenceCollector::AddReferencedObject
                (param_1,(FWeakObjectPtr *)(lVar9 + 0xd8),(UObject *)0x0,(FProperty *)0x0);
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    plVar17 = plVar17 + 0xb;
    plVar16 = plVar16 + 0xb;
    uVar8 = (ulonglong)uVar2;
  } while( true );
}

// CreateLayer @ 14cf868c0

uint __thiscall FSimpleLayerManager::CreateLayer(FSimpleLayerManager *this,FLayerDesc *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLayerData *pFVar4;
  longlong lVar5;
  uint local_res8 [2];
  int local_res10;
  uint *local_28;
  FLayerDesc *local_20;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                       ,0xc6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  pFVar4 = TStereoLayerManager<IStereoLayers::FLayerDesc>::LayerState
                     ((TStereoLayerManager<IStereoLayers::FLayerDesc> *)this,0);
  local_res8[0] = pFVar4->NextLayerId;
  pFVar4->NextLayerId = local_res8[0] + 1;
  if (local_res8[0] == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LayerId != FLayerDesc::INVALID_LAYER_ID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                       ,0xc9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  pFVar4 = TStereoLayerManager<IStereoLayers::FLayerDesc>::LayerState
                     ((TStereoLayerManager<IStereoLayers::FLayerDesc> *)this,0);
  local_28 = local_res8;
  local_20 = param_1;
  TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,IStereoLayers::FLayerDesc_const_&>_>
            ((TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
              *)pFVar4,
             (TPairInitializer<unsigned_int_&,IStereoLayers::FLayerDesc_const_&> *)&local_res10,
             (bool *)&local_28);
  lVar5 = (longlong)local_res10 * 0x110 + *(longlong *)&pFVar4->Layers;
  *(uint *)(lVar5 + 0x10) = local_res8[0];
  pcVar1 = *(code **)(*(longlong *)this + 0x98);
  bVar2 = IStereoLayers::FLayerDesc::IsVisible(param_1);
  (*pcVar1)(this,lVar5 + 0x10,local_res8[0],bVar2);
  this->field_0x50 = 1;
  return local_res8[0];
}

// DestroyLayer @ 14cf87420

void __thiscall FSimpleLayerManager::DestroyLayer(FSimpleLayerManager *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FLayerData *pFVar3;
  FLayerDesc *pFVar4;
  int local_res10 [2];
  uint local_res18 [4];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != 0) {
    pFVar3 = TStereoLayerManager<IStereoLayers::FLayerDesc>::LayerState
                       ((TStereoLayerManager<IStereoLayers::FLayerDesc> *)this,0);
    if (param_1 < pFVar3->NextLayerId) {
      pFVar4 = TStereoLayerManager<IStereoLayers::FLayerDesc>::FindLayerById
                         ((TStereoLayerManager<IStereoLayers::FLayerDesc> *)this,param_1,local_res10
                         );
      if (pFVar4 != (FLayerDesc *)0x0) {
        if (local_res10[0] == 0) {
          (**(code **)(*(longlong *)this + 0x98))(this,pFVar4,param_1,0);
          this->field_0x50 = 1;
        }
        pFVar3 = TStereoLayerManager<IStereoLayers::FLayerDesc>::LayerState
                           ((TStereoLayerManager<IStereoLayers::FLayerDesc> *)this,local_res10[0]);
        if (*(int *)&(pFVar3->Layers).field_0x8 != *(int *)&(pFVar3->Layers).field_0x34) {
          local_res18[0] = param_1;
          TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
                      *)pFVar3,param_1,local_res18);
        }
      }
    }
  }
  return;
}

// FindLayerDesc @ 14cf8c5e0

FLayerDesc * __thiscall FSimpleLayerManager::FindLayerDesc(FSimpleLayerManager *this,uint param_1)

{
  int iVar1;
  FLayerData *pFVar2;
  FLayerDesc *pFVar3;
  FLayerDesc *pFVar4;
  undefined1 *puVar5;
  FLayerDesc *pFVar6;
  
  pFVar2 = TStereoLayerManager<IStereoLayers::FLayerDesc>::LayerState
                     ((TStereoLayerManager<IStereoLayers::FLayerDesc> *)this,0);
  pFVar6 = (FLayerDesc *)0x0;
  pFVar3 = pFVar6;
  if (*(int *)&(pFVar2->Layers).field_0x8 != *(int *)&(pFVar2->Layers).field_0x34) {
    puVar5 = *(undefined1 **)&(pFVar2->Layers).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar2->Layers).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(*(int *)&(pFVar2->Layers).field_0x48 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pFVar3 = (FLayerDesc *)((longlong)iVar1 * 0x110 + *(longlong *)&pFVar2->Layers);
        if (pFVar3->Id == param_1) break;
        iVar1 = *(int *)pFVar3[1].Transform.Rotation.XY.m128d_f64;
        pFVar3 = pFVar6;
      } while (iVar1 != -1);
    }
  }
  pFVar4 = (FLayerDesc *)&pFVar3->Transform;
  if (pFVar3 == (FLayerDesc *)0x0) {
    pFVar4 = pFVar6;
  }
  return pFVar4;
}

// GetReferencerName @ 14cf90ab0

FString * __thiscall
FSimpleLayerManager::GetReferencerName(FSimpleLayerManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FSimpleLayerManager");
  return __return_storage_ptr__;
}

// IsBackgroundLayerVisible @ 14cf92a00

bool __thiscall FSimpleLayerManager::IsBackgroundLayerVisible(FSimpleLayerManager *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(int *)&this->field_0x60 - 1;
  uVar4 = 0;
  if ((int)uVar5 < *(int *)&this->field_0x60) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)*(int *)&this->field_0x60 * 0x58 + -4 + *(longlong *)&this->field_0x58);
}

// MarkTextureForUpdate @ 14cf93550

void __thiscall FSimpleLayerManager::MarkTextureForUpdate(FSimpleLayerManager *this,uint param_1)

{
  return;
}

// SetLayerDesc @ 14cf9a9c0

void __thiscall
FSimpleLayerManager::SetLayerDesc(FSimpleLayerManager *this,uint param_1,FLayerDesc *param_2)

{
  code *pcVar1;
  bool bVar2;
  FLayerDesc *this_00;
  int local_res10 [2];
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                         ,0xee,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 != 0) &&
     (this_00 = TStereoLayerManager<IStereoLayers::FLayerDesc>::FindLayerById
                          ((TStereoLayerManager<IStereoLayers::FLayerDesc> *)this,param_1,
                           local_res10), this_00 != (FLayerDesc *)0x0)) {
    IStereoLayers::FLayerDesc::operator=(this_00,param_2);
    this_00->Id = param_1;
    if (local_res10[0] == 0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x98);
      bVar2 = IStereoLayers::FLayerDesc::IsVisible(param_2);
      (*pcVar1)(this,this_00,param_1,bVar2);
      this->field_0x50 = 1;
    }
  }
  return;
}

