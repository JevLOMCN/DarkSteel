// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 16

// ~TStereoLayerManager<IStereoLayers::FLayerDesc> @ 14cf7eb70

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::~TStereoLayerManager<IStereoLayers::FLayerDesc>
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TStereoLayerManager_UFLayerDesc_IStereoLayers____6B_;
  DestructItems<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int>
            ((FLayerData *)(this->LayerStack).AllocatorInstance.Data,(this->LayerStack).ArrayNum);
  pFVar1 = (this->LayerStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IStereoLayers__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
    return;
  }
  return;
}

// CreateLayer @ 14cf867b0

uint __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::CreateLayer
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,FLayerDesc *param_1)

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
  pFVar4 = LayerState(this,0);
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
  pFVar4 = LayerState(this,0);
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
  pcVar1 = *(code **)(this->_padding_ + 0x98);
  bVar2 = IStereoLayers::FLayerDesc::IsVisible(param_1);
  (*pcVar1)(this,lVar5 + 0x10,local_res8[0],bVar2);
  this->bStereoLayersDirty = true;
  return local_res8[0];
}

// DestroyLayer @ 14cf87350

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::DestroyLayer
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,uint param_1)

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
    pFVar3 = LayerState(this,0);
    if (param_1 < pFVar3->NextLayerId) {
      pFVar4 = FindLayerById(this,param_1,local_res10);
      if (pFVar4 != (FLayerDesc *)0x0) {
        if (local_res10[0] == 0) {
          (**(code **)(this->_padding_ + 0x98))(this,pFVar4,param_1,0);
          this->bStereoLayersDirty = true;
        }
        pFVar3 = LayerState(this,local_res10[0]);
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

// FindLayerById @ 14cf8c500

FLayerDesc * __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::FindLayerById
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,uint param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  FLayerData *pFVar3;
  uint *puVar4;
  FLayerDesc *pFVar5;
  undefined1 *puVar6;
  int iVar7;
  
  if (((param_1 != 0) && (pFVar3 = LayerState(this,0), param_1 < pFVar3->NextLayerId)) &&
     (pFVar5 = (FLayerDesc *)0x0, 0 < (this->LayerStack).ArrayNum)) {
    do {
      iVar7 = (int)pFVar5;
      pFVar3 = LayerState(this,iVar7);
      if (*(int *)&(pFVar3->Layers).field_0x8 != *(int *)&(pFVar3->Layers).field_0x34) {
        puVar1 = *(undefined1 **)&(pFVar3->Layers).field_0x40;
        puVar6 = &(pFVar3->Layers).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar6 = puVar1;
        }
        uVar2 = *(uint *)(puVar6 + (ulonglong)(*(int *)&(pFVar3->Layers).field_0x48 - 1U & param_1)
                                   * 4);
        if (uVar2 != 0xffffffff) {
          do {
            puVar4 = (uint *)((longlong)(int)uVar2 * 0x110 + *(longlong *)&pFVar3->Layers);
            if (*puVar4 == param_1) {
              pFVar5 = (FLayerDesc *)(puVar4 + 4);
              if (puVar4 == (uint *)0x0) {
                pFVar5 = (FLayerDesc *)0x0;
              }
              if (pFVar5 != (FLayerDesc *)0x0) {
                *param_2 = iVar7;
                return pFVar5;
              }
              break;
            }
            uVar2 = puVar4[0x40];
          } while (uVar2 != 0xffffffff);
        }
      }
      pFVar5 = (FLayerDesc *)(ulonglong)(iVar7 + 1U);
    } while ((int)(iVar7 + 1U) < (this->LayerStack).ArrayNum);
  }
  return (FLayerDesc *)0x0;
}

// ForEachLayer @ 14cf8c6d0

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::ForEachLayer
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,
          TFunction<void___cdecl(unsigned_int,IStereoLayers::FLayerDesc_&)> *param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FLayerData *pFVar6;
  bool bVar7;
  FLayerData *pFVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_d7 [7];
  undefined4 local_d0 [2];
  int local_c8;
  TStereoLayerManager<IStereoLayers::FLayerDesc> *local_c0;
  FLayerData *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  FLayerData *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  local_c0 = this;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                         ,0x85,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = LayerState(this,0);
  iVar3 = *(int *)&(pFVar8->Layers).field_0x28;
  iStack_b0 = 0;
  uStack_ac = 1;
  local_98 = 0;
  puVar1 = &(pFVar8->Layers).field_0x10;
  iStack_9c = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(pFVar8->Layers).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      lVar10 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14cf8c7bd;
      uVar14 = puVar17[lVar10 + 1];
    }
    uStack_ac = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_c8 = (int)lVar10;
    iStack_9c = local_c8 + -1 + local_98;
    if (iVar3 < iStack_9c) {
      iStack_9c = iVar3;
    }
  }
LAB_14cf8c7bd:
  uVar14 = *(uint *)&(pFVar8->Layers).field_0x28;
  uStack_94 = local_3c;
  uVar13 = uVar14 & 0xffffffe0;
  iStack_90 = *(int *)&(pFVar8->Layers).field_0x8 - *(int *)&(pFVar8->Layers).field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_80.CurrentBitIndex = iStack_9c;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = local_98;
  uStack_60 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = pFVar8;
  local_a8 = puVar1;
  local_88 = pFVar8;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(pFVar8->Layers).field_0x28;
  if (uVar14 != uVar4) {
    puVar16 = *(undefined1 **)&(pFVar8->Layers).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar10 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cf8c8c0;
      uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar14 = (int)lVar10 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar14) {
      uVar14 = uVar4;
    }
  }
LAB_14cf8c8c0:
  while( true ) {
    pFVar6 = local_88;
    if (*(int *)&(local_88->Layers).field_0x8 - *(int *)&(local_88->Layers).field_0x34 !=
        (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_d7);
    }
    if (((TStack_80.CurrentBitIndex == uVar14) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == pFVar8))
    break;
    puVar15 = (undefined4 *)
              ((longlong)TStack_80.CurrentBitIndex * 0x110 + *(longlong *)&pFVar6->Layers);
    local_d0[0] = *puVar15;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar5 = *(code **)param_1;
    plVar11 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar11 = (longlong *)&param_1->field_0x10;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar5)(uVar9,local_d0,puVar15 + 4);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  if (param_2) {
    local_c0->bStereoLayersDirty = false;
  }
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// GetLayerDesc @ 14cf8fa50

bool __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::GetLayerDesc
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,uint param_1,FLayerDesc *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FLayerDesc *pFVar4;
  int local_res10 [2];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                       ,0x10a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_1 != 0) {
    pFVar4 = FindLayerById(this,param_1,local_res10);
    if (pFVar4 != (FLayerDesc *)0x0) {
      IStereoLayers::FLayerDesc::operator=(param_2,pFVar4);
      return true;
    }
  }
  return false;
}

// HideBackgroundLayer @ 14cf92560

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::HideBackgroundLayer
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this)

{
  FLayerData *pFVar1;
  
  pFVar1 = LayerState(this,0);
  pFVar1->bShowBackground = false;
  return;
}

// IsBackgroundLayerVisible @ 14cf92980

bool __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::IsBackgroundLayerVisible
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = (this->LayerStack).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar5 = 0;
  if ((int)uVar6 < iVar1) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)(this->LayerStack).AllocatorInstance.Data
               [(longlong)(this->LayerStack).ArrayNum * 0x58 + -4];
}

// LayerState @ 14cf93440

FLayerData * __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::LayerState
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FLayerData *pFVar5;
  uint uVar6;
  
  iVar1 = (this->LayerStack).ArrayNum;
  uVar6 = iVar1 + ~param_1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLayerData *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FLayerData *)
         ((this->LayerStack).AllocatorInstance.Data +
         (longlong)((this->LayerStack).ArrayNum + ~param_1) * 0x58);
}

// MarkTextureForUpdate @ 14cf934d0

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::MarkTextureForUpdate
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FLayerDesc *pFVar3;
  int local_res10 [6];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                       ,0x121,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 != 0) {
    pFVar3 = FindLayerById(this,param_1,local_res10);
    if (pFVar3 != (FLayerDesc *)0x0) {
      (**(code **)(this->_padding_ + 0x98))(this,pFVar3,param_1,1);
    }
  }
  return;
}

// PopLayerState @ 14cf93f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::PopLayerState
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  FWeakObjectPtr FVar9;
  FLayerData *pFVar10;
  bool bVar11;
  FLayerData *pFVar12;
  IStereoLayerShape *pIVar13;
  TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_> TVar14;
  UTexture *this_00;
  FTextureResource *pFVar15;
  longlong lVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  undefined8 uVar25;
  uint *puVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_2d8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7 [7];
  FLayerData *local_2a0;
  FLayerData *local_298;
  int iStack_290;
  uint uStack_28c;
  undefined1 *local_288;
  undefined4 uStack_280;
  int iStack_27c;
  int local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  int local_268;
  int local_264;
  int local_260;
  undefined8 local_258;
  undefined8 local_250;
  FLayerData *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  undefined8 uStack_220;
  FLayerData *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  undefined4 local_1cc;
  undefined4 local_1ac;
  undefined1 local_1a8 [32];
  void *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  undefined4 local_158;
  FScriptContainerElement local_154;
  FLayerDesc local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                          ,0x150,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->LayerStack).ArrayNum < 2) {
    return;
  }
  pFVar12 = LayerState(this,0);
  iVar24 = *(int *)&(pFVar12->Layers).field_0x28;
  iStack_290 = 0;
  local_278 = 0;
  puVar1 = &(pFVar12->Layers).field_0x10;
  uStack_28c = 1;
  iStack_27c = 0;
  if (iVar24 != 0) {
    puVar26 = *(uint **)&(pFVar12->Layers).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar20 = *puVar26;
    while (uVar20 == 0) {
      lVar16 = (longlong)iStack_290;
      local_278 = local_278 + 0x20;
      iStack_290 = iStack_290 + 1;
      iStack_27c = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_290) goto LAB_14cf9403e;
      uVar20 = puVar26[lVar16 + 1];
    }
    uStack_28c = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_28c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_268 = (int)lVar16;
    iStack_27c = local_278 + -1 + local_268;
    if (iVar24 < iStack_27c) {
      iStack_27c = iVar24;
    }
  }
LAB_14cf9403e:
  uVar20 = *(uint *)&(pFVar12->Layers).field_0x28;
  uStack_274 = local_1cc;
  iStack_270 = *(int *)&(pFVar12->Layers).field_0x8 - *(int *)&(pFVar12->Layers).field_0x34;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_240._padding_ = CONCAT44(uStack_28c,iStack_290);
  uStack_280 = 0xffffffff;
  TStack_240.CurrentBitIndex = iStack_27c;
  TStack_240.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_240._28_4_ = local_1cc;
  TStack_240.BaseBitIndex = local_278;
  uStack_220 = CONCAT44(uStack_26c,iStack_270);
  local_2a0 = pFVar12;
  local_298 = pFVar12;
  local_288 = puVar1;
  local_248 = pFVar12;
  TStack_240.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar24 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar10 = local_2a0;
  uVar3 = *(uint *)&(pFVar12->Layers).field_0x28;
  if (uVar20 != uVar3) {
    puVar23 = *(undefined1 **)&(pFVar12->Layers).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14cf94160;
      uVar20 = *(uint *)(puVar23 + lVar16 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_264 = (int)lVar16;
    uVar20 = local_264 + -1 + uVar19;
    if ((int)uVar3 < (int)uVar20) {
      uVar20 = uVar3;
    }
  }
LAB_14cf94160:
  while( true ) {
    pFVar12 = local_248;
    if (*(int *)&(local_248->Layers).field_0x8 - *(int *)&(local_248->Layers).field_0x34 !=
        (int)uStack_220) {
      local_2a8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a8);
    }
    lVar16 = (longlong)TStack_240.CurrentBitIndex;
    if (((TStack_240.CurrentBitIndex == uVar20) &&
        (TStack_240.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pFVar12 == pFVar10)) break;
    lVar4 = *(longlong *)&pFVar12->Layers;
    pFVar12 = LayerState(this,1);
    uVar19 = *(uint *)(lVar16 * 0x110 + lVar4);
    if (*(int *)&(pFVar12->Layers).field_0x8 != *(int *)&(pFVar12->Layers).field_0x34) {
      puVar23 = *(undefined1 **)&(pFVar12->Layers).field_0x40;
      puVar17 = &(pFVar12->Layers).field_0x38;
      if (puVar23 != (undefined1 *)0x0) {
        puVar17 = puVar23;
      }
      iVar24 = *(int *)(puVar17 +
                       (ulonglong)(*(int *)&(pFVar12->Layers).field_0x48 - 1U & uVar19) * 4);
      if (iVar24 != -1) {
        do {
          if (*(uint *)((longlong)iVar24 * 0x110 + *(longlong *)&pFVar12->Layers) == uVar19)
          goto LAB_14cf94211;
          iVar24 = *(int *)((longlong)iVar24 * 0x110 + 0x100 + *(longlong *)&pFVar12->Layers);
        } while (iVar24 != -1);
      }
    }
    (**(code **)(this->_padding_ + 0x98))(this,lVar4 + 0x10 + lVar16 * 0x110,uVar19,0);
LAB_14cf94211:
    TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
  }
  if (((this->LayerStack).ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar24 = (this->LayerStack).ArrayNum;
  local_1a8._0_8_ = (FScriptContainerElement *)0x0;
  pFVar27 = (this->LayerStack).AllocatorInstance.Data;
  local_1a8._8_8_ = 0;
  local_188 = (void *)0x0;
  iVar22 = 0;
  local_180 = 0;
  local_17c = 0x80;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_168 = (ForElementType<FSetElementId>)0x0;
  local_160 = 0;
  TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
               *)local_1a8,
              (TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
               *)(pFVar27 + (longlong)iVar24 * 0x58 + -0x58));
  local_158 = *(undefined4 *)(pFVar27 + (longlong)iVar24 * 0x58 + -8);
  iVar18 = (this->LayerStack).ArrayNum;
  local_154 = pFVar27[(longlong)iVar24 * 0x58 + -4];
  pFVar27 = (this->LayerStack).AllocatorInstance.Data + (longlong)iVar18 * 0x58;
  *(undefined4 *)(pFVar27 + -0x10) = 0;
  if (*(void **)(pFVar27 + -0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar27 + -0x18));
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(pFVar27 + -0x58));
  iVar18 = (this->LayerStack).ArrayNum - iVar18;
  if (iVar18 != 0) {
    memmove(pFVar27 + -0x58,pFVar27,(longlong)iVar18 * 0x58);
  }
  iVar24 = (this->LayerStack).ArrayNum + -1;
  (this->LayerStack).ArrayNum = iVar24;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,&(this->LayerStack).AllocatorInstance,iVar24,&(this->LayerStack).ArrayMax);
  local_160 = 0;
  if (local_168 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1a8,0,local_1a8._8_4_);
  bVar11 = local_1a8._12_4_ != 0;
  local_1a8._8_8_ = (ulonglong)(uint)local_1a8._12_4_ << 0x20;
  if (bVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
  }
  local_178 = 0xffffffff;
  local_174 = 0;
  local_180 = 0;
  if (0x80 < local_17c) {
    local_17c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  pFVar12 = LayerState(this,0);
  iVar24 = *(int *)&(pFVar12->Layers).field_0x28;
  uStack_28c = 1;
  local_278 = 0;
  local_288 = &(pFVar12->Layers).field_0x10;
  iStack_27c = local_278;
  if (iVar24 != 0) {
    puVar26 = *(uint **)&(pFVar12->Layers).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)local_288;
    }
    uVar20 = *puVar26;
    local_278 = 0;
    iVar22 = 0;
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar22;
      local_278 = local_278 + 0x20;
      iVar22 = iVar22 + 1;
      iStack_27c = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14cf9444f;
      uVar20 = puVar26[lVar16 + 1];
    }
    uStack_28c = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_28c * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_260 = (int)lVar16;
    iStack_27c = local_278 + -1 + local_260;
    if (iVar24 < iStack_27c) {
      iStack_27c = iVar24;
    }
  }
LAB_14cf9444f:
  uStack_274 = local_1ac;
  iStack_270 = *(int *)&(pFVar12->Layers).field_0x8 - *(int *)&(pFVar12->Layers).field_0x34;
  uVar20 = *(uint *)&(pFVar12->Layers).field_0x28;
  uStack_280 = 0xffffffff;
  TStack_210.CurrentBitIndex = iStack_27c;
  TStack_210.UnvisitedBitMask = 0xffffffff;
  puVar1 = &(pFVar12->Layers).field_0x10;
  TStack_210._padding_ = CONCAT44(uStack_28c,iVar22);
  uVar19 = uVar20 & 0xffffffe0;
  iVar18 = (int)uVar20 >> 5;
  TStack_210._28_4_ = local_1ac;
  TStack_210.BaseBitIndex = local_278;
  uStack_1f0 = CONCAT44(uStack_26c,iStack_270);
  local_2a0 = pFVar12;
  local_298 = pFVar12;
  iStack_290 = iVar22;
  local_218 = pFVar12;
  TStack_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_288;
  if ((((int)uVar20 < 0) || (iVar24 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar9 = _UNK_152898568;
  uVar8 = ___xmm_00000000000000000000000200000000;
  dVar7 = _UNK_150689688;
  dVar6 = ___xmm_3ff00000000000003ff0000000000000;
  uVar3 = *(uint *)&(pFVar12->Layers).field_0x28;
  if (uVar20 != uVar3) {
    puVar23 = *(undefined1 **)&(pFVar12->Layers).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14cf94580;
      uVar20 = *(uint *)(puVar23 + lVar16 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar20 = (uVar19 - 1) + (int)lVar16;
    if ((int)uVar3 < (int)uVar20) {
      uVar20 = uVar3;
    }
  }
LAB_14cf94580:
  do {
    pFVar10 = local_218;
    if (*(int *)&(local_218->Layers).field_0x8 - *(int *)&(local_218->Layers).field_0x34 !=
        (int)uStack_1f0) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2a7);
    }
    uVar25 = ___xmm_00000000000000000000000200000000;
    if (((TStack_210.CurrentBitIndex == uVar20) &&
        (TStack_210.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pFVar10 == pFVar12)) {
      this->bStereoLayersDirty = true;
      return;
    }
    local_148.Transform.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_148.Transform.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_148.Transform.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_148.Transform.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_148.Transform.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_148.Transform.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_148.QuadSize.field0_0x0._s_0.X = dVar6;
    local_148.QuadSize.field0_0x0._s_0.Y = dVar7;
    puVar21 = (undefined4 *)
              ((longlong)TStack_210.CurrentBitIndex * 0x110 + *(longlong *)&pFVar10->Layers);
    TVar14.Ptr = (IStereoLayerShape *)0x0;
    local_148.Id = 0;
    local_148.LayerSize.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    local_258 = 0;
    local_148.UVRect.Min.field0_0x0._s_0.X = 0.0;
    local_148.UVRect.Min.field0_0x0._s_0.Y = 0.0;
    local_148.UVRect.Max.field0_0x0._s_0.X = dVar6;
    local_148.UVRect.Max.field0_0x0._s_0.Y = dVar7;
    local_148.UVRect.bIsValid = true;
    ___xmm_00000000000000000000000200000000 = (int)uVar8;
    _UNK_152898564 = SUB84(uVar8,4);
    local_148.Priority = ___xmm_00000000000000000000000200000000;
    local_148.PositionType = _UNK_152898564;
    local_148.TextureObj.WeakPtr = FVar9;
    ___xmm_00000000000000000000000200000000 = uVar25;
    FWeakObjectPtr::operator=(&local_148.TextureObj.WeakPtr,(FObjectPtr)&local_258);
    local_148.Texture.Reference = (FRHITexture *)0x0;
    local_148.LeftTextureObj.WeakPtr.ObjectIndex = 0;
    local_148.LeftTextureObj.WeakPtr.ObjectSerialNumber = 0;
    local_250 = 0;
    FWeakObjectPtr::operator=(&local_148.LeftTextureObj.WeakPtr,(FObjectPtr)&local_250);
    local_148.LeftTexture.Reference = (FRHITexture *)0x0;
    local_148.Flags = 0;
    pIVar13 = ::operator_new(8);
    if (pIVar13 != (IStereoLayerShape *)0x0) {
      *pIVar13 = (IStereoLayerShape)&___7FQuadLayer__6B_;
      TVar14.Ptr = pIVar13;
    }
    local_148.Shape.Wrapped.Ptr =
         (TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_>)
         (TUniquePtr<IStereoLayerShape,TDefaultDelete<IStereoLayerShape>_>)TVar14.Ptr;
    IStereoLayers::FLayerDesc::operator=(&local_148,(FLayerDesc *)(puVar21 + 4));
    pcVar5 = *(code **)(this->_padding_ + 0x98);
    if ((local_148.Flags & 0x20) == 0) {
      bVar11 = FWeakObjectPtr::IsValid(&local_148.TextureObj.WeakPtr);
      if (bVar11) {
        this_00 = (UTexture *)FWeakObjectPtr::Get(&local_148.TextureObj.WeakPtr);
        pFVar15 = UTexture::GetResource(this_00);
        if (pFVar15 == (FTextureResource *)0x0) goto LAB_14cf946f2;
      }
      else {
LAB_14cf946f2:
        if (local_148.Texture.Reference == (FRHITexture *)0x0) goto LAB_14cf94700;
      }
      uVar25 = 1;
    }
    else {
LAB_14cf94700:
      uVar25 = 0;
    }
    (*pcVar5)(this,puVar21 + 4,*puVar21,uVar25);
    if (local_148.Shape.Wrapped.Ptr != (IStereoLayerShape *)0x0) {
      (**(code **)((longlong)*(IStereoLayerShape *)local_148.Shape.Wrapped.Ptr + 0x10))
                (local_148.Shape.Wrapped.Ptr,1);
    }
    if (local_148.LeftTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148.LeftTexture.Reference);
    }
    if (local_148.Texture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148.Texture.Reference);
    }
    TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
    pFVar12 = local_2a0;
  } while( true );
}

// PushLayerState @ 14cf977a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::PushLayerState
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  FLayerData *pFVar7;
  bool bVar8;
  int iVar9;
  FLayerData *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [4];
  int local_124;
  FLayerData *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  FLayerData *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined4 local_a4;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  uint local_48;
  FScriptContainerElement local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                         ,0x135,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar10 = LayerState(this,0);
  local_6c = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  iVar9 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
               *)local_98,
              (TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
               *)pFVar10);
  local_48 = pFVar10->NextLayerId;
  local_44 = (FScriptContainerElement)pFVar10->bShowBackground;
  if (param_1) {
    iVar9 = (this->LayerStack).ArrayNum;
    piVar1 = &(this->LayerStack).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->LayerStack).AllocatorInstance,piVar1);
    }
    (this->LayerStack).ArrayNum = iVar9 + 1;
    this_00 = (TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
               *)((this->LayerStack).AllocatorInstance.Data + (longlong)iVar9 * 0x58);
    *(undefined8 *)&this_00->Elements = 0;
    *(undefined8 *)&(this_00->Elements).field_0x8 = 0;
    *(undefined8 *)&(this_00->Elements).field_0x20 = 0;
    *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
    *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
    (this_00->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    this_00->HashSize = 0;
    TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
    ::operator=(this_00,(TSet<TTuple<unsigned_int,IStereoLayers::FLayerDesc>,TDefaultMapHashableKeyFuncs<unsigned_int,IStereoLayers::FLayerDesc,0>,FDefaultSetAllocator>
                         *)local_98);
    *(uint *)&this_00[1].Elements = local_48;
    this_00[1].Elements.field_0x4 = local_44;
  }
  else {
    pFVar10 = LayerState(this,0);
    iVar4 = *(int *)&(pFVar10->Layers).field_0x28;
    uStack_114 = 1;
    local_100 = 0;
    puVar2 = &(pFVar10->Layers).field_0x10;
    iStack_104 = local_100;
    if (iVar4 != 0) {
      puVar17 = *(uint **)&(pFVar10->Layers).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar2;
      }
      uVar14 = *puVar17;
      local_100 = 0;
      iVar9 = 0;
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar9;
        local_100 = local_100 + 0x20;
        iVar9 = iVar9 + 1;
        iStack_104 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14cf9796e;
        uVar14 = puVar17[lVar11 + 1];
      }
      uStack_114 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_114 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_124 = (int)lVar11;
      iStack_104 = local_100 + -1 + local_124;
      if (iVar4 < iStack_104) {
        iStack_104 = iVar4;
      }
    }
LAB_14cf9796e:
    uVar14 = *(uint *)&(pFVar10->Layers).field_0x28;
    uStack_fc = local_a4;
    uVar18 = uVar14 & 0xffffffe0;
    iStack_f8 = *(int *)&(pFVar10->Layers).field_0x8 - *(int *)&(pFVar10->Layers).field_0x34;
    uStack_108 = 0xffffffff;
    TStack_e8._padding_ = CONCAT44(uStack_114,iVar9);
    TStack_e8.CurrentBitIndex = iStack_104;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar14 >> 5;
    TStack_e8._28_4_ = local_a4;
    TStack_e8.BaseBitIndex = local_100;
    uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
    local_120 = pFVar10;
    iStack_118 = iVar9;
    local_110 = puVar2;
    local_f0 = pFVar10;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)&(pFVar10->Layers).field_0x28;
    if (uVar14 != uVar5) {
      puVar15 = *(undefined1 **)&(pFVar10->Layers).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar2;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
      while (uVar14 == 0) {
        lVar11 = (longlong)iVar13;
        uVar18 = uVar18 + 0x20;
        iVar13 = iVar13 + 1;
        uVar14 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14cf97a80;
        uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar14 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar5 < (int)uVar14) {
        uVar14 = uVar5;
      }
    }
LAB_14cf97a80:
    while( true ) {
      pFVar7 = local_f0;
      if (*(int *)&(local_f0->Layers).field_0x8 - *(int *)&(local_f0->Layers).field_0x34 !=
          (int)uStack_c8) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (((TStack_e8.CurrentBitIndex == uVar14) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pFVar7 == pFVar10)) break;
      puVar16 = (undefined4 *)
                ((longlong)TStack_e8.CurrentBitIndex * 0x110 + *(longlong *)&pFVar7->Layers);
      (**(code **)(this->_padding_ + 0x98))(this,puVar16 + 4,*puVar16,0);
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    iVar9 = (this->LayerStack).ArrayNum;
    piVar1 = &(this->LayerStack).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->LayerStack).AllocatorInstance,piVar1);
    }
    (this->LayerStack).ArrayNum = iVar9 + 1;
    pFVar12 = (this->LayerStack).AllocatorInstance.Data + (longlong)iVar9 * 0x58;
    *(undefined8 *)(pFVar12 + 0x10) = 0;
    *(undefined8 *)(pFVar12 + 0x18) = 0;
    *(undefined8 *)(pFVar12 + 0x38) = 0;
    *(undefined8 *)(pFVar12 + 0x48) = 0;
    *(undefined8 *)pFVar12 = 0;
    *(undefined8 *)(pFVar12 + 8) = 0;
    *(undefined8 *)(pFVar12 + 0x20) = 0;
    *(undefined4 *)(pFVar12 + 0x28) = 0;
    *(undefined4 *)(pFVar12 + 0x2c) = 0x80;
    *(undefined4 *)(pFVar12 + 0x30) = 0xffffffff;
    *(undefined4 *)(pFVar12 + 0x34) = 0;
    *(undefined8 *)(pFVar12 + 0x40) = 0;
    *(uint *)(pFVar12 + 0x50) = local_48;
    pFVar12[0x54] = local_44;
    this->bStereoLayersDirty = true;
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  bVar8 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// SetLayerDesc @ 14cf9a900

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::SetLayerDesc
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,uint param_1,FLayerDesc *param_2)

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
     (this_00 = FindLayerById(this,param_1,local_res10), this_00 != (FLayerDesc *)0x0)) {
    IStereoLayers::FLayerDesc::operator=(this_00,param_2);
    this_00->Id = param_1;
    if (local_res10[0] == 0) {
      pcVar1 = *(code **)(this->_padding_ + 0x98);
      bVar2 = IStereoLayers::FLayerDesc::IsVisible(param_2);
      (*pcVar1)(this,this_00,param_1,bVar2);
      this->bStereoLayersDirty = true;
    }
  }
  return;
}

// ShowBackgroundLayer @ 14cf9bc40

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::ShowBackgroundLayer
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this)

{
  FLayerData *pFVar1;
  
  pFVar1 = LayerState(this,0);
  pFVar1->bShowBackground = true;
  return;
}

// SupportsLayerState @ 14cf9d640

bool __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::SupportsLayerState
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this)

{
  return true;
}

// UpdateLayer @ 14cf9ddf0

void __thiscall
TStereoLayerManager<IStereoLayers::FLayerDesc>::UpdateLayer
          (TStereoLayerManager<IStereoLayers::FLayerDesc> *this,FLayerDesc *param_1,uint param_2,
          bool param_3)

{
  return;
}

