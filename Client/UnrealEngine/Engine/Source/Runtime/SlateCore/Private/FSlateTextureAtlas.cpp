// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 12

// FSlateTextureAtlas @ 1425bdb70

FSlateTextureAtlas * __thiscall
FSlateTextureAtlas::FSlateTextureAtlas
          (FSlateTextureAtlas *this,uint param_1,uint param_2,uint param_3,
          ESlateTextureAtlasPaddingStyle param_4,bool param_5)

{
  this->AtlasWidth = param_1;
  this->_padding_ = (longlong)&___7FSlateTextureAtlas__6B_;
  this->AtlasHeight = param_2;
  (this->AtlasData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AtlasData).ArrayNum = 0;
  (this->AtlasData).ArrayMax = 0;
  this->AtlasUsedSlots = (FAtlasedTextureSlot *)0x0;
  (this->AtlasEmptySlotsMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AtlasEmptySlotsMap).ArrayNum = 0;
  (this->AtlasEmptySlotsMap).ArrayMax = 0;
  this->PaddingStyle = param_4;
  this->bUpdatesAfterInitialization = param_5;
  this->BytesPerPixel = param_3;
  this->bNeedsUpdate = false;
  this->AtlasOwnerThread = Unknown;
  InitAtlasData(this);
  return this;
}

// ~FSlateTextureAtlas @ 1425c18c0

void __thiscall FSlateTextureAtlas::~FSlateTextureAtlas(FSlateTextureAtlas *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSlateTextureAtlas__6B_;
  EmptyAtlasData(this);
  pFVar1 = (this->AtlasEmptySlotsMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AtlasData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddFreeSlot @ 1425c81e0

void __thiscall
FSlateTextureAtlas::AddFreeSlot
          (FSlateTextureAtlas *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  ESlateTextureAtlasPaddingStyle EVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  puVar9 = ::operator_new(0x28);
  puVar10 = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    EVar3 = this->PaddingStyle;
    *(uint *)((longlong)puVar9 + 0x1c) = param_4;
    *(bool *)(puVar9 + 4) = EVar3 != NoPadding;
    *puVar9 = 0;
    puVar9[1] = 0;
    *(uint *)(puVar9 + 2) = param_1;
    *(uint *)((longlong)puVar9 + 0x14) = param_2;
    *(uint *)(puVar9 + 3) = param_3;
    puVar10 = puVar9;
  }
  uVar8 = 1;
  if (param_3 != 0) {
    uVar8 = param_3;
  }
  uVar2 = (ulonglong)(uVar8 - 1) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  uVar11 = (uint)lVar5;
  uVar8 = 0;
  if ((int)uVar11 < (this->AtlasEmptySlotsMap).ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (this->AtlasEmptySlotsMap).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(int)uVar11 * 8;
  lVar5 = *(longlong *)(pFVar4 + (longlong)(int)uVar11 * 8);
  if (lVar5 != 0) {
    *(undefined8 **)(lVar5 + 8) = puVar10;
  }
  *puVar10 = *(undefined8 *)pFVar1;
  puVar10[1] = pFVar1;
  *(undefined8 **)pFVar1 = puVar10;
  return;
}

// AddTexture @ 1425c9f60

FAtlasedTextureSlot * __thiscall
FSlateTextureAtlas::AddTexture
          (FSlateTextureAtlas *this,uint param_1,uint param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FAtlasedTextureSlot *pFVar3;
  ESlateTextureAtlasThreadId EVar4;
  
  pFVar3 = FindSlotForTexture(this,param_1,param_2);
  if (((pFVar3 != (FAtlasedTextureSlot *)0x0) && (param_1 != 0)) && (param_2 != 0)) {
    CopyDataIntoSlot(this,pFVar3,param_3);
    bVar2 = IsInActualRenderingThread();
    if (bVar2) {
      bVar2 = IsInRenderingThread();
      if (bVar2) {
        EVar4 = Render;
      }
      else {
        EVar4 = Unknown;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                           ,0x84,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FAtlasedTextureSlot *)(*pcVar1)();
          return pFVar3;
        }
      }
    }
    else {
      EVar4 = Game;
    }
    if ((GSlateLoadingThreadId == 0) && (this->AtlasOwnerThread != EVar4)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GSlateLoadingThreadId != 0) || (AtlasOwnerThread == AtlasThreadId)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                         ,0x86,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAtlasedTextureSlot *)(*pcVar1)();
        return pFVar3;
      }
    }
    this->bNeedsUpdate = true;
  }
  return pFVar3;
}

// CopyDataIntoSlot @ 1425d8940

void __thiscall
FSlateTextureAtlas::CopyDataIntoSlot
          (FSlateTextureAtlas *this,FAtlasedTextureSlot *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  ESlateTextureAtlasPaddingStyle EVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *_Dst;
  FCopyRowData local_58;
  
  uVar10 = (param_1->Y * this->AtlasWidth + param_1->X) * this->BytesPerPixel;
  uVar8 = 0;
  if ((int)uVar10 < (this->AtlasData).ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar1 = this->PaddingStyle;
  _Dst = (this->AtlasData).AllocatorInstance.Data + (int)uVar10;
  bVar6 = EVar1 != NoPadding;
  uVar10 = (uint)bVar6;
  uVar8 = (uint)bVar6;
  if ((param_1->Width <= uVar8 * 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlotToCopyTo->Width > AllPadding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                         ,0xdb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->Height <= uVar8 * 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlotToCopyTo->Height > AllPadding",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                         ,0xdc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_58.SrcData = (uchar *)(param_2->AllocatorInstance).Data;
  uVar2 = param_1->Width;
  uVar3 = param_1->Height;
  uVar4 = this->AtlasWidth;
  local_58.SrcTextureWidth = uVar2 + uVar8 * -2;
  local_58.DestData = (uchar *)_Dst;
  local_58.RowWidth = uVar2;
  local_58.DestTextureWidth = uVar4;
  if (EVar1 != NoPadding) {
    local_58.SrcRow = 0;
    local_58.DestRow = 0;
    if (this->PaddingStyle == DilateBorder) {
      CopyRow(this,&local_58);
    }
    else {
      memset(_Dst,0,(ulonglong)(uVar2 * this->BytesPerPixel));
    }
  }
  uVar9 = param_1->Height;
  uVar11 = (uint)bVar6;
  if (uVar11 < uVar9 - uVar11) {
    do {
      local_58.DestRow = uVar10;
      local_58.SrcRow = uVar10 - uVar11;
      CopyRow(this,&local_58);
      uVar9 = param_1->Height;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9 - uVar11);
  }
  if (EVar1 != NoPadding) {
    local_58.DestRow = uVar9 - uVar11;
    local_58.SrcRow = (uVar3 + uVar8 * -2) - 1;
    if (this->PaddingStyle == DilateBorder) {
      CopyRow(this,&local_58);
    }
    else {
      memset(_Dst + this->BytesPerPixel * (uVar9 - uVar11) * uVar4,0,
             (ulonglong)(this->BytesPerPixel * uVar2));
    }
  }
  return;
}

// CopyRow @ 1425d8b50

void __thiscall FSlateTextureAtlas::CopyRow(FSlateTextureAtlas *this,FCopyRowData *param_1)

{
  ESlateTextureAtlasPaddingStyle EVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  uchar *_Src;
  
  EVar1 = this->PaddingStyle;
  uVar2 = param_1->SrcTextureWidth;
  puVar7 = param_1->DestData;
  uVar3 = param_1->DestTextureWidth;
  uVar4 = param_1->DestRow;
  uVar5 = this->BytesPerPixel;
  _Src = param_1->SrcData + uVar5 * param_1->SrcRow * uVar2;
  memcpy(puVar7 + (uVar4 * uVar3 + (uint)(EVar1 != NoPadding)) * uVar5,_Src,
         (ulonglong)(uVar5 * uVar2));
  if (EVar1 != NoPadding) {
    uVar5 = this->BytesPerPixel;
    uVar6 = param_1->RowWidth;
    puVar7 = puVar7 + uVar5 * uVar4 * uVar3;
    if (this->PaddingStyle == DilateBorder) {
      memcpy(puVar7,_Src,(ulonglong)uVar5);
      memcpy(puVar7 + (uVar6 - 1) * uVar5,_Src + (uVar2 - 1) * uVar5,(ulonglong)this->BytesPerPixel)
      ;
    }
    else {
      memset(puVar7,0,(ulonglong)uVar5);
      memset(puVar7 + (uVar6 - 1) * uVar5,0,(ulonglong)this->BytesPerPixel);
    }
  }
  return;
}

// EmptyAtlasData @ 1425da9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateTextureAtlas::EmptyAtlasData(FSlateTextureAtlas *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  FAtlasedTextureSlot *pFVar5;
  FName FVar6;
  FAtlasedTextureSlot *pFVar7;
  undefined8 *puVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureAtlasMemory> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar11 [8];
  FScriptContainerElement *pFVar12;
  FName local_res8;
  FStatMessage local_28;
  
  pFVar12 = (this->AtlasEmptySlotsMap).AllocatorInstance.Data;
  iVar3 = (this->AtlasEmptySlotsMap).ArrayNum;
  pFVar2 = pFVar12 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->AtlasEmptySlotsMap).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAtlasedTextureSlot_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar12 == pFVar2) break;
    puVar8 = *(undefined8 **)pFVar12;
    while (puVar8 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)*puVar8;
      ::operator_delete(puVar8,0x28);
      puVar8 = puVar4;
    }
    pFVar12 = pFVar12 + 8;
  }
  (this->AtlasEmptySlotsMap).ArrayNum = 0;
  if ((this->AtlasEmptySlotsMap).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AtlasEmptySlotsMap).AllocatorInstance,0,
               &(this->AtlasEmptySlotsMap).ArrayMax);
  }
  pFVar7 = this->AtlasUsedSlots;
  while (pFVar7 != (FAtlasedTextureSlot *)0x0) {
    pFVar5 = (FAtlasedTextureSlot *)pFVar7->_padding_;
    ::operator_delete(pFVar7,0x28);
    pFVar7 = pFVar5;
  }
  this->AtlasUsedSlots = (FAtlasedTextureSlot *)0x0;
  piVar1 = &(this->AtlasData).ArrayMax;
  iVar3 = *piVar1;
  (this->AtlasData).ArrayNum = 0;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->AtlasData).AllocatorInstance,0,piVar1);
  }
  auVar11 = (uchar  [8])((longlong)iVar3 - (longlong)*piVar1);
  if (auVar11 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_SlateTextureAtlasMemory;
    if (StatPtr_STAT_SlateTextureAtlasMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateTextureAtlasMemory>)0x0) {
      pFVar9 = ::FName::FName(&local_res8,"STAT_SlateTextureAtlasMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureAtlasMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureAtlasMemory,*pFVar9
                          ,L"Texture Atlas Memory (CPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                          L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar6 = *(FName *)FVar10;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar6;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar6.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar6;
      local_28.StatData.Pad = auVar11;
      local_28.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar11);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FindSlotForTexture @ 1425dcbb0

FAtlasedTextureSlot * __thiscall
FSlateTextureAtlas::FindSlotForTexture(FSlateTextureAtlas *this,uint param_1,uint param_2)

{
  FAtlasedTextureSlot **ppFVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  FAtlasedTextureSlot *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar12 = -(uint)(this->PaddingStyle != NoPadding) & 2;
  uVar2 = uVar12 + param_1;
  uVar12 = uVar12 + param_2;
  uVar7 = 1;
  if (uVar2 != 0) {
    uVar7 = uVar2;
  }
  uVar3 = (ulonglong)(uVar7 - 1) * 2 + 1;
  uVar10 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> uVar10 == 0; uVar10 = uVar10 - 1) {
    }
  }
  if ((int)uVar10 < (this->AtlasEmptySlotsMap).ArrayNum) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < (this->AtlasEmptySlotsMap).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FAtlasedTextureSlot *)(*pcVar4)();
        return pFVar6;
      }
      for (pFVar6 = *(FAtlasedTextureSlot **)
                     ((this->AtlasEmptySlotsMap).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
          pFVar6 != (FAtlasedTextureSlot *)0x0; pFVar6 = (FAtlasedTextureSlot *)pFVar6->_padding_) {
        uVar7 = pFVar6->Width;
        if ((uVar2 <= uVar7) && (uVar11 = pFVar6->Height, uVar12 <= uVar11)) {
          uVar9 = uVar7 - uVar2;
          uVar8 = uVar11 - uVar12;
          if ((1 < uVar8) || (1 < uVar9)) {
            if (uVar9 < uVar8) {
              AddFreeSlot(this,pFVar6->X,pFVar6->Y + uVar12,uVar7,uVar8);
              if (uVar9 < 2) goto LAB_1425dcd18;
              uVar11 = pFVar6->Y;
              uVar7 = pFVar6->X + uVar2;
              uVar8 = uVar12;
            }
            else {
              AddFreeSlot(this,pFVar6->X + uVar2,pFVar6->Y,uVar9,uVar11);
              if (uVar8 < 2) goto LAB_1425dcd18;
              uVar7 = pFVar6->X;
              uVar11 = pFVar6->Y + uVar12;
              uVar9 = uVar2;
            }
            AddFreeSlot(this,uVar7,uVar11,uVar9,uVar8);
          }
LAB_1425dcd18:
          pFVar6->Width = uVar2;
          pFVar6->Height = uVar12;
          if (pFVar6->_padding_ != 0) {
            *(longlong *)(pFVar6->_padding_ + 8) = pFVar6->_padding_;
          }
          if ((longlong *)pFVar6->_padding_ != (longlong *)0x0) {
            *(longlong *)pFVar6->_padding_ = pFVar6->_padding_;
          }
          ppFVar1 = &this->AtlasUsedSlots;
          pFVar6->_padding_ = 0;
          pFVar6->_padding_ = 0;
          if (*ppFVar1 != (FAtlasedTextureSlot *)0x0) {
            (*ppFVar1)->_padding_ = (longlong)pFVar6;
          }
          pFVar6->_padding_ = (longlong)*ppFVar1;
          pFVar6->_padding_ = (longlong)ppFVar1;
          *ppFVar1 = pFVar6;
          return pFVar6;
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < (this->AtlasEmptySlotsMap).ArrayNum);
  }
  return (FAtlasedTextureSlot *)0x0;
}

// GetFreeSlotSearchIndex @ 1425e1180

int __cdecl FSlateTextureAtlas::GetFreeSlotSearchIndex(uint param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 1;
  if (param_1 != 0) {
    uVar3 = param_1;
  }
  uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return (int)lVar2;
}

// InitAtlasData @ 1425e6940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateTextureAtlas::InitAtlasData(FSlateTextureAtlas *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  ulonglong uVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_SlateTextureAtlasMemory> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  uint uVar14;
  uchar auVar15 [8];
  FLLMScope local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  FName local_res18;
  FName local_res20;
  FMemScope local_48;
  FName local_40;
  FStatMessage local_38;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Texture.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Texture.UniqueName;
  FMemScope::FMemScope(&local_48,&local_res18,true);
  if (((this->AtlasEmptySlotsMap).ArrayNum != 0) || ((this->AtlasData).ArrayNum != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtlasEmptySlotsMap.IsEmpty() && AtlasData.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                       ,0x91,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar12 = 1;
  if (this->AtlasWidth != 0) {
    uVar12 = this->AtlasWidth;
  }
  uVar3 = (ulonglong)(uVar12 - 1) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  local_res10 = (uint)lVar5;
  uVar12 = local_res10 + 1;
  iVar9 = (this->AtlasEmptySlotsMap).ArrayNum;
  if (iVar9 < (int)uVar12) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar12 - iVar9,&(this->AtlasEmptySlotsMap).AllocatorInstance,
                       &(this->AtlasEmptySlotsMap).ArrayNum,&(this->AtlasEmptySlotsMap).ArrayMax);
    memset((this->AtlasEmptySlotsMap).AllocatorInstance.Data + (longlong)iVar8 * 8,0,
           (longlong)(int)(uVar12 - iVar9) << 3);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar9) {
      uVar14 = iVar9 - uVar12;
      if ((int)(uVar14 | uVar12) < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (uVar14 != 0) {
        _Dst = (this->AtlasEmptySlotsMap).AllocatorInstance.Data + (longlong)(int)uVar12 * 8;
        iVar9 = ((this->AtlasEmptySlotsMap).ArrayNum - uVar14) - uVar12;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar14 * 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->AtlasEmptySlotsMap).ArrayNum;
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->AtlasEmptySlotsMap).AllocatorInstance,
                   (this->AtlasEmptySlotsMap).ArrayNum,&(this->AtlasEmptySlotsMap).ArrayMax);
      }
    }
  }
  AddFreeSlot(this,0,0,this->AtlasWidth,this->AtlasHeight);
  uVar12 = this->BytesPerPixel * this->AtlasHeight * this->AtlasWidth;
  if (-1 < (int)uVar12) {
    piVar1 = &(this->AtlasData).ArrayMax;
    piVar2 = &(this->AtlasData).ArrayNum;
    if (*piVar1 < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar12,&(this->AtlasData).AllocatorInstance,*piVar2,piVar1);
    }
    iVar8 = this->AtlasHeight * this->BytesPerPixel * this->AtlasWidth;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar8,&(this->AtlasData).AllocatorInstance,piVar2,piVar1);
    memset((this->AtlasData).AllocatorInstance.Data + iVar9,0,(longlong)iVar8);
    bVar7 = IsInActualRenderingThread();
    if (bVar7) {
      bVar7 = IsInRenderingThread();
      if (bVar7) {
        this->AtlasOwnerThread = Render;
      }
      else {
        this->AtlasOwnerThread = Unknown;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AtlasOwnerThread != ESlateTextureAtlasThreadId::Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                           ,0x9c,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    else {
      this->AtlasOwnerThread = Game;
    }
    auVar15 = (uchar  [8])(longlong)(this->AtlasData).ArrayMax;
    if (auVar15 != (uchar  [8])0x0) {
      FVar11 = StatPtr_STAT_SlateTextureAtlasMemory;
      if (StatPtr_STAT_SlateTextureAtlasMemory ==
          (FThreadSafeStaticStat<FStat_STAT_SlateTextureAtlasMemory>)0x0) {
        pFVar10 = ::FName::FName(&local_40,"STAT_SlateTextureAtlasMemory");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_SlateTextureAtlasMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateTextureAtlasMemory,
                            *pFVar10,L"Texture Atlas Memory (CPU)","STATGROUP_SlateMemory",
                            "STATCAT_Advanced",L"Slate Memory",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar4 = *(FName *)FVar11;
      FVar13 = FVar4.ComparisonIndex.Value;
      uVar12 = FVar4.Number;
      local_res10 = FVar13.Value;
      uStackX_14 = uVar12;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_38.NameAndInfo.Number = uVar12 & 0xffffafff | 0xa000;
        local_res20 = FVar4;
        local_38.StatData.Pad = auVar15;
        local_38.NameAndInfo.Index.Value = FVar13.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res20,(long64)auVar15);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    FMemScope::~FMemScope(&local_48);
    FLLMScope::~FLLMScope(local_res8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
}

// MarkTextureDirty @ 1425eae40

void __thiscall FSlateTextureAtlas::MarkTextureDirty(FSlateTextureAtlas *this)

{
  code *pcVar1;
  bool bVar2;
  ESlateTextureAtlasThreadId EVar3;
  
  bVar2 = IsInActualRenderingThread();
  if (bVar2) {
    bVar2 = IsInRenderingThread();
    if (bVar2) {
      EVar3 = Render;
    }
    else {
      EVar3 = Unknown;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                         ,0x84,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    EVar3 = Game;
  }
  if ((GSlateLoadingThreadId == 0) && (this->AtlasOwnerThread != EVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GSlateLoadingThreadId != 0) || (AtlasOwnerThread == AtlasThreadId)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                       ,0x86,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bNeedsUpdate = true;
  return;
}

// ZeroRow @ 142606160

void __thiscall FSlateTextureAtlas::ZeroRow(FSlateTextureAtlas *this,FCopyRowData *param_1)

{
  memset(param_1->DestData + param_1->DestTextureWidth * param_1->DestRow * this->BytesPerPixel,0,
         (ulonglong)(this->BytesPerPixel * param_1->RowWidth));
  return;
}

