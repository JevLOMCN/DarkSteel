// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// FLegacySlateFontInfoCache @ 142473860

FLegacySlateFontInfoCache * __thiscall
FLegacySlateFontInfoCache::FLegacySlateFontInfoCache(FLegacySlateFontInfoCache *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FLegacySlateFontInfoCache__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->LegacyFontNameToCompositeFont = 0;
  *(undefined8 *)&(this->LegacyFontNameToCompositeFont).field_0x8 = 0;
  *(undefined8 *)&(this->LegacyFontNameToCompositeFont).field_0x20 = 0;
  *(undefined4 *)&(this->LegacyFontNameToCompositeFont).field_0x28 = 0;
  *(undefined4 *)&(this->LegacyFontNameToCompositeFont).field_0x2c = 0x80;
  *(undefined4 *)&(this->LegacyFontNameToCompositeFont).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LegacyFontNameToCompositeFont).field_0x34 = 0;
  *(undefined8 *)&(this->LegacyFontNameToCompositeFont).field_0x40 = 0;
  *(undefined4 *)&(this->LegacyFontNameToCompositeFont).field_0x48 = 0;
  (this->DefaultFont).Object = (FCompositeFont *)0x0;
  (this->DefaultFont).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SystemFont).Object = (FCompositeFont *)0x0;
  (this->SystemFont).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->LastResortFont).Object = (FCompositeFont *)0x0;
  (this->LastResortFont).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LocalizedFallbackFontData).Object = (FFontData *)0x0;
  (this->LocalizedFallbackFontData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LastResortFontData).Object = (FFontData *)0x0;
  (this->LastResortFontData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LastResortFontCS,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LastResortFontDataCS,4000);
  pFVar1 = &this->LastResortFontPath;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastResortFontPath).Data.ArrayNum = 0;
  (this->LastResortFontPath).Data.ArrayMax = 0;
  pTVar3 = &FPaths::EngineContentDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar3,0x21 - (uint)(pTVar3->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_28,L"SlateDebug/Fonts/LastResort.ttf",0x1f);
  if (&pFVar1->Data != &local_28) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_28.AllocatorInstance.Data;
    (this->LastResortFontPath).Data.ArrayNum = local_28.ArrayNum;
    (this->LastResortFontPath).Data.ArrayMax = local_28.ArrayMax;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->bIsLastResortFontAvailable = false;
  return this;
}

// AddReferencedObjects @ 14247f8a0

void __thiscall
FLegacySlateFontInfoCache::AddReferencedObjects
          (FLegacySlateFontInfoCache *this,FReferenceCollector *param_1)

{
  FFontData *pFVar1;
  
  pFVar1 = (this->LocalizedFallbackFontData).Object;
  if (pFVar1 != (FFontData *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&pFVar1->FontFaceAsset,0,0);
  }
  pFVar1 = (this->LastResortFontData).Object;
  if (pFVar1 != (FFontData *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&pFVar1->FontFaceAsset,0,0);
  }
  return;
}

// Get @ 14248a560

FLegacySlateFontInfoCache * __cdecl FLegacySlateFontInfoCache::Get(void)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FLegacySlateFontInfoCache *pFVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  TRawPtrProxy<FLegacySlateFontInfoCache> local_res8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  if (Singleton.Object == (FLegacySlateFontInfoCache *)0x0) {
    pFVar5 = ::operator_new(0x128);
    if (pFVar5 == (FLegacySlateFontInfoCache *)0x0) {
      pFVar5 = (FLegacySlateFontInfoCache *)0x0;
    }
    else {
      pFVar5->_padding_ = (longlong)&___7FGCObject__6B_;
      *(undefined2 *)&pFVar5->_padding_ = 0;
      FGCObject::RegisterGCObject((FGCObject *)pFVar5);
      pFVar5->_padding_ = (longlong)&___7FLegacySlateFontInfoCache__6B_;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      *(undefined8 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x0 = 0;
      *(undefined8 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x8 = 0;
      *(undefined8 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x20 = 0;
      *(undefined4 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x28 = 0;
      *(undefined4 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x34 = 0;
      *(undefined8 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x40 = 0;
      *(undefined4 *)&(pFVar5->LegacyFontNameToCompositeFont).field_0x48 = 0;
      (pFVar5->DefaultFont).Object = (FCompositeFont *)0x0;
      (pFVar5->DefaultFont).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar5->SystemFont).Object = (FCompositeFont *)0x0;
      (pFVar5->SystemFont).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar5->LastResortFont).Object = (FCompositeFont *)0x0;
      (pFVar5->LastResortFont).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar5->LocalizedFallbackFontData).Object = (FFontData *)0x0;
      (pFVar5->LocalizedFallbackFontData).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      (pFVar5->LastResortFontData).Object = (FFontData *)0x0;
      (pFVar5->LastResortFontData).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar5->LastResortFontCS,4000);
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar5->LastResortFontDataCS,4000);
      pFVar1 = &pFVar5->LastResortFontPath;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->LastResortFontPath).Data.ArrayNum = 0;
      (pFVar5->LastResortFontPath).Data.ArrayMax = 0;
      pTVar6 = &FPaths::EngineContentDir(&local_18)->Data;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_28,pTVar6,0x21 - (uint)(pTVar6->ArrayNum != 0));
      ::FString::PathAppend((FString *)&local_28,L"SlateDebug/Fonts/LastResort.ttf",0x1f);
      if (&pFVar1->Data != &local_28) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_28.AllocatorInstance.Data;
        (pFVar5->LastResortFontPath).Data.ArrayNum = local_28.ArrayNum;
        (pFVar5->LastResortFontPath).Data.ArrayMax = local_28.ArrayMax;
        local_28.ArrayNum = 0;
        local_28.ArrayMax = 0;
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      pFVar5->bIsLastResortFontAvailable = false;
      if ((((pFVar5->_padding_ != 0) && (pFVar5->_padding_ != 0)) &&
          (0 < *(int *)(pFVar5->_padding_ + 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FLegacySlateFontInfoCache *)(*pcVar3)();
        return pFVar5;
      }
    }
    local_res8.Object = pFVar5;
    TSharedPtr<FLegacySlateFontInfoCache,1>::operator=<FLegacySlateFontInfoCache>
              (&Singleton,&local_res8);
    if ((Singleton.Object == (FLegacySlateFontInfoCache *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FLegacySlateFontInfoCache *)(*pcVar3)();
      return pFVar5;
    }
  }
  return Singleton.Object;
}

// GetCompositeFont @ 14248c7b0

TSharedPtr<FCompositeFont_const_,1> * __thiscall
FLegacySlateFontInfoCache::GetCompositeFont
          (FLegacySlateFontInfoCache *this,
          TSharedPtr<FCompositeFont_const_,1> *__return_storage_ptr__,FName *param_1,
          EFontHinting param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FString *pFVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FCompositeFont_const_,1> *pTVar8;
  ForAnyElementType FVar9;
  FCompositeFont *pFVar10;
  int iVar11;
  atomic<int> *paVar12;
  int iVar13;
  longlong lVar14;
  undefined1 *puVar15;
  FString local_f8;
  FLegacyFontKey local_e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FName local_a8;
  FCompositeFont *local_a0;
  TReferenceControllerBase<1> *local_98;
  FName local_90;
  FLegacyFontKey *local_88;
  FCompositeFont **local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (*param_1 == (FName)0x0) {
    __return_storage_ptr__->Object = (FCompositeFont *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    ::FName::ToString(param_1,&local_f8);
    bVar2 = FPaths::FileExists(&local_f8);
    iVar11 = 0;
    if (!bVar2) {
      pFVar5 = ::FName::ToString(param_1,&local_68);
      pTVar6 = &FPaths::ProjectContentDir(&local_78)->Data;
      iVar3 = (pFVar5->Data).ArrayNum;
      iVar13 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar13 = iVar11;
      }
      if ((pTVar6->ArrayNum != 0) || (iVar3 = 1, iVar13 + 1 == 0)) {
        iVar3 = iVar11;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_d8,pTVar6,iVar3 + iVar13 + 1);
      ::FString::PathAppend
                ((FString *)&local_d8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar13);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      local_f8.Data.AllocatorInstance.Data = local_d8.AllocatorInstance.Data;
      local_f8.Data.ArrayNum = local_d8.ArrayNum;
      local_f8.Data.ArrayMax = local_d8.ArrayMax;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      bVar2 = FPaths::FileExists(&local_f8);
      if (!bVar2) {
        pFVar5 = ::FName::ToString(param_1,&local_48);
        pTVar6 = &FPaths::EngineContentDir(&local_58)->Data;
        iVar3 = (pFVar5->Data).ArrayNum;
        iVar13 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar13 = iVar11;
        }
        if ((pTVar6->ArrayNum != 0) || (iVar3 = 1, iVar13 + 1 == 0)) {
          iVar3 = iVar11;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_c8,pTVar6,iVar13 + 1 + iVar3);
        ::FString::PathAppend
                  ((FString *)&local_c8,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar13);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        local_f8.Data.AllocatorInstance.Data = local_c8.AllocatorInstance.Data;
        local_f8.Data.ArrayNum = local_c8.ArrayNum;
        local_f8.Data.ArrayMax = local_c8.ArrayMax;
        local_c8.ArrayNum = 0;
        local_c8.ArrayMax = 0;
        local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        bVar2 = FPaths::FileExists(&local_f8);
        if (!bVar2) {
          pFVar5 = ::FName::ToString(param_1,&local_38);
          if (&local_f8 != pFVar5) {
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            local_f8.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
            (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_f8.Data.ArrayNum = (pFVar5->Data).ArrayNum;
            local_f8.Data.ArrayMax = (pFVar5->Data).ArrayMax;
            (pFVar5->Data).ArrayNum = 0;
            (pFVar5->Data).ArrayMax = 0;
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_f8.Data.ArrayNum != 0) {
      FVar9.Data = local_f8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_90,(wchar_t *)FVar9.Data);
    local_e8.Name = local_90;
    local_e8.Hinting = param_2;
    uVar4 = ::GetTypeHash(&local_e8);
    if (*(int *)&(this->LegacyFontNameToCompositeFont).field_0x8 !=
        *(int *)&(this->LegacyFontNameToCompositeFont).field_0x34) {
      puVar15 = *(undefined1 **)&(this->LegacyFontNameToCompositeFont).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->LegacyFontNameToCompositeFont).field_0x38;
      }
      iVar11 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->LegacyFontNameToCompositeFont).field_0x48 - 1U & uVar4) * 4)
      ;
      if (iVar11 != -1) {
        do {
          lVar14 = *(longlong *)&this->LegacyFontNameToCompositeFont + (longlong)iVar11 * 0x28;
          if ((*(FName *)(*(longlong *)&this->LegacyFontNameToCompositeFont +
                         (longlong)iVar11 * 0x28) == local_e8.Name) &&
             (*(EFontHinting *)(lVar14 + 8) == local_e8.Hinting)) {
            if (iVar11 != -1) {
              pFVar10 = (FCompositeFont *)(lVar14 + 0x10);
              if (lVar14 == 0) {
                pFVar10 = (FCompositeFont *)0x0;
              }
              if (pFVar10 != (FCompositeFont *)0x0) {
                __return_storage_ptr__->Object =
                     (FCompositeFont *)(pFVar10->DefaultTypeface).Fonts.AllocatorInstance.Data;
                pTVar7 = *(TReferenceControllerBase<1> **)&(pFVar10->DefaultTypeface).Fonts.ArrayNum
                ;
                (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
                if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar7->SharedReferenceCount =
                       (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                  UNLOCK();
                }
                goto LAB_14248cc04;
              }
            }
            break;
          }
          iVar11 = *(int *)(lVar14 + 0x20);
        } while (iVar11 != -1);
      }
    }
    pTVar7 = ::operator_new(0x60);
    FVar9.Data = local_f8.Data.AllocatorInstance.Data;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_98 = (TReferenceControllerBase<1> *)0x0;
      local_a0 = (FCompositeFont *)&DAT_00000020;
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFStandaloneCompositeFont___00_SharedPointerInternals__6B_
      ;
      lVar14 = (longlong)local_f8.Data.ArrayNum;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = local_f8.Data.ArrayNum;
      if (local_f8.Data.ArrayNum == 0) {
        local_b8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                   local_f8.Data.ArrayNum,&local_b8.Data.ArrayMax);
        memcpy(local_b8.Data.AllocatorInstance.Data,FVar9.Data,lVar14 * 2);
      }
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      FStandaloneCompositeFont::FStandaloneCompositeFont
                ((FStandaloneCompositeFont *)(pTVar7 + 1),&local_a8,&local_b8,param_2,LazyLoad);
      if ((pTVar7 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FCompositeFont_const_,1> *)(*pcVar1)();
        return pTVar8;
      }
      pFVar10 = (FCompositeFont *)(pTVar7 + 2);
      if (pTVar7 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
        pFVar10 = (FCompositeFont *)0x0;
      }
      paVar12 = &pTVar7->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
      local_a0 = pFVar10;
      local_98 = pTVar7;
    }
    pTVar7 = local_98;
    pFVar10 = local_a0;
    local_88 = &local_e8;
    local_80 = &local_a0;
    TSet<TTuple<FLegacySlateFontInfoCache::FLegacyFontKey,TSharedPtr<FCompositeFont_const_,1>_>,TDefaultMapHashableKeyFuncs<FLegacySlateFontInfoCache::FLegacyFontKey,TSharedPtr<FCompositeFont_const_,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FLegacySlateFontInfoCache::FLegacyFontKey_const_&,TSharedPtr<FCompositeFont_const_,1>_&&>_>
              ((TSet<TTuple<FLegacySlateFontInfoCache::FLegacyFontKey,TSharedPtr<FCompositeFont_const_,1>_>,TDefaultMapHashableKeyFuncs<FLegacySlateFontInfoCache::FLegacyFontKey,TSharedPtr<FCompositeFont_const_,1>,0>,FDefaultSetAllocator>
                *)&this->LegacyFontNameToCompositeFont,
               (TPairInitializer<FLegacySlateFontInfoCache::FLegacyFontKey_const_&,TSharedPtr<FCompositeFont_const_,1>_&&>
                *)&stack0x00000018,(bool *)&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
    __return_storage_ptr__->Object = pFVar10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_14248cc04:
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultFont @ 14248cd20

TSharedRef<FCompositeFont_const_,1> * __thiscall
FLegacySlateFontInfoCache::GetDefaultFont
          (FLegacySlateFontInfoCache *this,
          TSharedRef<FCompositeFont_const_,1> *__return_storage_ptr__)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  TReferenceControllerBase<1> *pTVar20;
  code *pcVar21;
  int iVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  FCompositeFont *pFVar27;
  TSharedRef<FCompositeFont_const_,1> *pTVar28;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar29;
  longlong lVar30;
  FString *pFVar31;
  FUnicodeBlockRange *pFVar32;
  undefined8 *puVar33;
  wchar_t *pwVar34;
  TSharedPtr<FCompositeFont_const_,1> *pTVar35;
  FCompositeFont *pFVar36;
  FScriptContainerElement *pFVar37;
  FCompositeFont *this_00;
  FName local_res18;
  FName local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_7d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_7c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_7b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_7a8;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  FCompositeFont *local_708;
  FSharedReferencer<1> local_700;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_6a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_698;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_688;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_678;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_668;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_658;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_648;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_638;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_628;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_618;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_608;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_5a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_598;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_588;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_578;
  FName local_568;
  undefined4 local_560;
  undefined4 local_558;
  undefined4 local_550;
  undefined4 local_548;
  undefined4 local_540;
  FName local_538;
  undefined4 local_530;
  undefined4 local_528;
  undefined4 local_520;
  undefined4 local_518;
  undefined4 local_510;
  undefined4 local_508;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4d8;
  FName local_4d0;
  TSharedPtr<FCompositeFont_const_,1> *local_4c8;
  undefined4 local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FName local_4a0;
  FName local_498;
  FName local_490;
  FName local_488;
  FName local_480;
  FName local_478;
  FName local_470;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_468;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_458;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_448;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_438;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_428;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_418;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_408;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  undefined8 local_278;
  wchar_t *pwStack_270;
  wchar_t *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  wchar_t *pwStack_250;
  wchar_t *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  wchar_t *pwStack_230;
  wchar_t *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  wchar_t *pwStack_210;
  wchar_t *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  wchar_t *pwStack_1f0;
  wchar_t *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  wchar_t *pwStack_1d0;
  wchar_t *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  wchar_t *pwStack_1b0;
  wchar_t *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  wchar_t *pwStack_190;
  wchar_t *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  wchar_t *pwStack_170;
  wchar_t *local_168;
  undefined8 uStack_160;
  FUnicodeBlockRange local_158;
  FUnicodeBlockRange local_138;
  FUnicodeBlockRange local_118;
  FUnicodeBlockRange local_f8;
  FUnicodeBlockRange local_d8;
  FUnicodeBlockRange local_b8;
  FUnicodeBlockRange local_98;
  FUnicodeBlockRange local_78;
  FUnicodeBlockRange local_58;
  
  pTVar35 = &this->DefaultFont;
  local_4c8 = pTVar35;
  if ((this->DefaultFont).Object == (FCompositeFont *)0x0) {
    pFVar27 = ::operator_new(0x60);
    pFVar36 = (FCompositeFont *)0x0;
    if (pFVar27 == (FCompositeFont *)0x0) {
      this_00 = (FCompositeFont *)&DAT_00000020;
    }
    else {
      (pFVar27->DefaultTypeface).Fonts.ArrayNum = 1;
      (pFVar27->DefaultTypeface).Fonts.ArrayMax = 1;
      (pFVar27->DefaultTypeface).Fonts.AllocatorInstance.Data =
           (FScriptContainerElement *)
           &
           ___7__TIntrusiveReferenceController_UFStandaloneCompositeFont___00_SharedPointerInternals__6B_
      ;
      *(undefined8 *)&(pFVar27->FallbackTypeface).ScalingFactor = 0;
      (pFVar27->SubTypefaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar27->SubTypefaces).ArrayNum = 0;
      (pFVar27->SubTypefaces).ArrayMax = 0;
      *(undefined8 *)&pFVar27->bEnableAscentDescentOverride = 0;
      pFVar27[1].DefaultTypeface.Fonts.ArrayNum = 0;
      pFVar27[1].DefaultTypeface.Fonts.ArrayMax = 0;
      *(undefined4 *)&pFVar27[1].DefaultTypeface.Fonts.AllocatorInstance.Data = 0x3f800000;
      pFVar27[1].FallbackTypeface.Typeface.Fonts.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      *(undefined1 *)&pFVar27[1].FallbackTypeface.Typeface.Fonts.ArrayNum = 1;
      (pFVar27->FallbackTypeface).Typeface.Fonts.AllocatorInstance.Data =
           (FScriptContainerElement *)&___7FGCObject__6B_;
      *(undefined2 *)&(pFVar27->FallbackTypeface).Typeface.Fonts.ArrayNum = 0;
      FGCObject::RegisterGCObject((FGCObject *)&pFVar27->FallbackTypeface);
      (pFVar27->FallbackTypeface).Typeface.Fonts.AllocatorInstance.Data =
           (FScriptContainerElement *)&___7FStandaloneCompositeFont__6B_;
      if ((pFVar27 == (FCompositeFont *)0xfffffffffffffff0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar23)) {
        pcVar21 = (code *)swi(3);
        pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
        return pTVar28;
      }
      this_00 = (FCompositeFont *)&(pFVar27->FallbackTypeface).ScalingFactor;
      if (pFVar27 == (FCompositeFont *)0xfffffffffffffff0) {
        this_00 = pFVar36;
      }
      LOCK();
      piVar1 = &(pFVar27->DefaultTypeface).Fonts.ArrayNum;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      pFVar36 = pFVar27;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar36);
    pTVar29 = &FPaths::EngineContentDir(&local_3d8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_6a8,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_6a8,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_6b8,&local_6a8,7 - (uint)(local_6a8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_6b8,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_7d8,&local_6b8,0x14 - (uint)(local_6b8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_7d8,L"Roboto-Regular.ttf",0x12);
    ::FName::FName(&local_res18,L"Regular");
    iVar24 = (this_00->DefaultTypeface).Fonts.ArrayNum;
    if (iVar24 == (this_00->DefaultTypeface).Fonts.ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,(ForAnyElementType *)this_00,
                          &(this_00->DefaultTypeface).Fonts.ArrayMax);
    }
    pwVar34 = (wchar_t *)local_7d8.AllocatorInstance.Data;
    lVar30 = (longlong)iVar24;
    (this_00->DefaultTypeface).Fonts.ArrayNum = iVar24 + 1;
    pFVar37 = (this_00->DefaultTypeface).Fonts.AllocatorInstance.Data;
    iVar24 = local_7d8.ArrayNum;
    iVar22 = local_7d8.ArrayMax;
    local_7d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7d8.ArrayNum = 0;
    local_7d8.ArrayMax = 0;
    *(FName *)(pFVar37 + lVar30 * 0x30) = local_res18;
    *(wchar_t **)(pFVar37 + lVar30 * 0x30 + 8) = pwVar34;
    *(int *)(pFVar37 + lVar30 * 0x30 + 0x10) = iVar24;
    *(int *)(pFVar37 + lVar30 * 0x30 + 0x14) = iVar22;
    *(undefined2 *)(pFVar37 + lVar30 * 0x30 + 0x1c) = 0;
    *(undefined4 *)(pFVar37 + lVar30 * 0x30 + 0x20) = 0;
    *(undefined8 *)(pFVar37 + lVar30 * 0x30 + 0x28) = 0;
    uVar25 = iVar24 - 1;
    if (iVar24 == 0) {
      pwVar34 = L"";
      uVar25 = 0;
    }
    uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar25,pwVar34);
    *(uint *)(pFVar37 + lVar30 * 0x30 + 0x18) = uVar25;
    if (local_7d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.AllocatorInstance.Data);
    }
    if (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.AllocatorInstance.Data);
    }
    if (local_6a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.AllocatorInstance.Data);
    }
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_3c8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_688,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_688,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_698,&local_688,7 - (uint)(local_688.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_698,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_7c8,&local_698,0x13 - (uint)(local_698.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_7c8,L"Roboto-Italic.ttf",0x11);
    ::FName::FName(&local_res20,L"Italic");
    iVar24 = (this_00->DefaultTypeface).Fonts.ArrayNum;
    if (iVar24 == (this_00->DefaultTypeface).Fonts.ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,(ForAnyElementType *)this_00,
                          &(this_00->DefaultTypeface).Fonts.ArrayMax);
    }
    pwVar34 = (wchar_t *)local_7c8.AllocatorInstance.Data;
    lVar30 = (longlong)iVar24;
    (this_00->DefaultTypeface).Fonts.ArrayNum = iVar24 + 1;
    pFVar37 = (this_00->DefaultTypeface).Fonts.AllocatorInstance.Data;
    iVar24 = local_7c8.ArrayNum;
    iVar22 = local_7c8.ArrayMax;
    local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7c8.ArrayNum = 0;
    local_7c8.ArrayMax = 0;
    *(FName *)(pFVar37 + lVar30 * 0x30) = local_res20;
    *(wchar_t **)(pFVar37 + lVar30 * 0x30 + 8) = pwVar34;
    *(int *)(pFVar37 + lVar30 * 0x30 + 0x10) = iVar24;
    *(int *)(pFVar37 + lVar30 * 0x30 + 0x14) = iVar22;
    *(undefined2 *)(pFVar37 + lVar30 * 0x30 + 0x1c) = 0;
    *(undefined4 *)(pFVar37 + lVar30 * 0x30 + 0x20) = 0;
    *(undefined8 *)(pFVar37 + lVar30 * 0x30 + 0x28) = 0;
    if (iVar24 == 0) {
      pwVar34 = L"";
    }
    uVar26 = 0;
    uVar25 = iVar24 - 1;
    if (iVar24 == 0) {
      uVar25 = uVar26;
    }
    uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar25,pwVar34);
    *(uint *)(pFVar37 + lVar30 * 0x30 + 0x18) = uVar25;
    if (local_7c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.AllocatorInstance.Data);
    }
    if (local_698.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_698.AllocatorInstance.Data);
    }
    if (local_688.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.AllocatorInstance.Data);
    }
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_3b8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_668,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_668,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_678,&local_668,7 - (uint)(local_668.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_678,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_7b8,&local_678,0x11 - (uint)(local_678.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_7b8,L"Roboto-Bold.ttf",0xf);
    ::FName::FName(&local_4b8,L"Bold");
    iVar24 = (this_00->DefaultTypeface).Fonts.ArrayNum;
    if (iVar24 == (this_00->DefaultTypeface).Fonts.ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,(ForAnyElementType *)this_00,
                          &(this_00->DefaultTypeface).Fonts.ArrayMax);
    }
    pwVar34 = (wchar_t *)local_7b8.AllocatorInstance.Data;
    lVar30 = (longlong)iVar24;
    (this_00->DefaultTypeface).Fonts.ArrayNum = iVar24 + 1;
    pFVar37 = (this_00->DefaultTypeface).Fonts.AllocatorInstance.Data;
    iVar24 = local_7b8.ArrayNum;
    iVar22 = local_7b8.ArrayMax;
    local_7b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7b8.ArrayNum = 0;
    local_7b8.ArrayMax = 0;
    *(FName *)(pFVar37 + lVar30 * 0x30) = local_4b8;
    *(wchar_t **)(pFVar37 + lVar30 * 0x30 + 8) = pwVar34;
    *(int *)(pFVar37 + lVar30 * 0x30 + 0x10) = iVar24;
    *(int *)(pFVar37 + lVar30 * 0x30 + 0x14) = iVar22;
    *(undefined2 *)(pFVar37 + lVar30 * 0x30 + 0x1c) = 0;
    *(undefined4 *)(pFVar37 + lVar30 * 0x30 + 0x20) = 0;
    *(undefined8 *)(pFVar37 + lVar30 * 0x30 + 0x28) = 0;
    uVar25 = iVar24 - 1;
    if (iVar24 == 0) {
      pwVar34 = L"";
      uVar25 = uVar26;
    }
    uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar25,pwVar34);
    *(uint *)(pFVar37 + lVar30 * 0x30 + 0x18) = uVar25;
    if (local_7b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.AllocatorInstance.Data);
    }
    if (local_678.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.AllocatorInstance.Data);
    }
    if (local_668.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.AllocatorInstance.Data);
    }
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_3a8)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_648,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_648,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_658,&local_648,7 - (uint)(local_648.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_658,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_7a8,&local_658,0x17 - (uint)(local_658.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_7a8,L"Roboto-BoldItalic.ttf",0x15);
    ::FName::FName(&local_4b0,L"BoldItalic");
    iVar24 = (this_00->DefaultTypeface).Fonts.ArrayNum;
    if (iVar24 == (this_00->DefaultTypeface).Fonts.ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,(ForAnyElementType *)this_00,
                          &(this_00->DefaultTypeface).Fonts.ArrayMax);
    }
    pwVar34 = (wchar_t *)local_7a8.AllocatorInstance.Data;
    lVar30 = (longlong)iVar24;
    (this_00->DefaultTypeface).Fonts.ArrayNum = iVar24 + 1;
    pFVar37 = (this_00->DefaultTypeface).Fonts.AllocatorInstance.Data;
    iVar24 = local_7a8.ArrayNum;
    iVar22 = local_7a8.ArrayMax;
    local_7a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7a8.ArrayNum = 0;
    local_7a8.ArrayMax = 0;
    *(FName *)(pFVar37 + lVar30 * 0x30) = local_4b0;
    *(wchar_t **)(pFVar37 + lVar30 * 0x30 + 8) = pwVar34;
    *(int *)(pFVar37 + lVar30 * 0x30 + 0x10) = iVar24;
    *(int *)(pFVar37 + lVar30 * 0x30 + 0x14) = iVar22;
    *(undefined2 *)(pFVar37 + lVar30 * 0x30 + 0x1c) = 0;
    *(undefined4 *)(pFVar37 + lVar30 * 0x30 + 0x20) = 0;
    *(undefined8 *)(pFVar37 + lVar30 * 0x30 + 0x28) = 0;
    uVar25 = iVar24 - 1;
    if (iVar24 == 0) {
      pwVar34 = L"";
      uVar25 = uVar26;
    }
    uVar25 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar25,pwVar34);
    *(uint *)(pFVar37 + lVar30 * 0x30 + 0x18) = uVar25;
    if (local_7a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7a8.AllocatorInstance.Data);
    }
    if (local_658.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.AllocatorInstance.Data);
    }
    if (local_648.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.AllocatorInstance.Data);
    }
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_398)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_628,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_628,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_638,&local_628,7 - (uint)(local_628.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_638,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_458,&local_638,0x1a - (uint)(local_638.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_458,L"Roboto-BoldCondensed.ttf",0x18);
    ::FName::FName(&local_4a8,L"BoldCondensed");
    FTypeface::AppendFont
              (&this_00->DefaultTypeface,&local_4a8,(FString *)&local_458,Default,LazyLoad);
    if (local_638.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.AllocatorInstance.Data);
    }
    if (local_628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_388)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_6f8,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_6f8,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_618,&local_6f8,7 - (uint)(local_6f8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_618,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_448,&local_618,0x20 - (uint)(local_618.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_448,L"Roboto-BoldCondensedItalic.ttf",0x1e);
    ::FName::FName(&local_4a0,L"BoldCondensedItalic");
    FTypeface::AppendFont
              (&this_00->DefaultTypeface,&local_4a0,(FString *)&local_448,Default,LazyLoad);
    if (local_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.AllocatorInstance.Data);
    }
    if (local_6f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.AllocatorInstance.Data);
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_378)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_6d8,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_6d8,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_6e8,&local_6d8,7 - (uint)(local_6d8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_6e8,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_438,&local_6e8,0x12 - (uint)(local_6e8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_438,L"Roboto-Black.ttf",0x10);
    ::FName::FName(&local_498,L"Black");
    FTypeface::AppendFont
              (&this_00->DefaultTypeface,&local_498,(FString *)&local_438,Default,LazyLoad);
    if (local_6e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.AllocatorInstance.Data);
    }
    if (local_6d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6d8.AllocatorInstance.Data);
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_368)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_608,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_608,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_6c8,&local_608,7 - (uint)(local_608.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_6c8,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_428,&local_6c8,0x18 - (uint)(local_6c8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_428,L"Roboto-BlackItalic.ttf",0x16);
    ::FName::FName(&local_490,L"BlackItalic");
    FTypeface::AppendFont
              (&this_00->DefaultTypeface,&local_490,(FString *)&local_428,Default,LazyLoad);
    if (local_6c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.AllocatorInstance.Data);
    }
    if (local_608.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.AllocatorInstance.Data);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_358)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_5e8,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_5e8,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_5f8,&local_5e8,7 - (uint)(local_5e8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_5f8,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_418,&local_5f8,0x13 - (uint)(local_5f8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_418,L"Roboto-Medium.ttf",0x11);
    ::FName::FName(&local_488,L"Medium");
    FTypeface::AppendFont
              (&this_00->DefaultTypeface,&local_488,(FString *)&local_418,Default,LazyLoad);
    if (local_5f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.AllocatorInstance.Data);
    }
    if (local_5e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.AllocatorInstance.Data);
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_348)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_5c8,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_5c8,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_5d8,&local_5c8,7 - (uint)(local_5c8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_5d8,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_408,&local_5d8,0x12 - (uint)(local_5d8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_408,L"Roboto-Light.ttf",0x10);
    ::FName::FName(&local_480,L"Light");
    FTypeface::AppendFont
              (&this_00->DefaultTypeface,&local_480,(FString *)&local_408,Default,LazyLoad);
    if (local_5d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.AllocatorInstance.Data);
    }
    if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.AllocatorInstance.Data);
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_338)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_5a8,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_5a8,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_5b8,&local_5a8,7 - (uint)(local_5a8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_5b8,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_3f8,&local_5b8,0x12 - (uint)(local_5b8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_3f8,L"Roboto-Light.ttf",0x10);
    ::FName::FName(&local_478,L"VeryLight");
    FTypeface::AppendFont(&this_00->DefaultTypeface,&local_478,(FString *)&local_3f8,Auto,LazyLoad);
    if (local_5b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.AllocatorInstance.Data);
    }
    if (local_5a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.AllocatorInstance.Data);
    }
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_328)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_588,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_588,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_598,&local_588,7 - (uint)(local_588.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_598,L"Fonts",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_3e8,&local_598,0x13 - (uint)(local_598.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_3e8,L"DroidSansMono.ttf",0x11);
    ::FName::FName(&local_470,L"Mono");
    FTypeface::AppendFont
              (&this_00->DefaultTypeface,&local_470,(FString *)&local_3e8,Default,LazyLoad);
    if (local_598.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.AllocatorInstance.Data);
    }
    if (local_588.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.AllocatorInstance.Data);
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    pTVar29 = &FPaths::EngineContentDir(&local_318)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_578,pTVar29,7 - (uint)(pTVar29->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_578,L"Slate",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_468,&local_578,7 - (uint)(local_578.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_468,L"Fonts",5);
    pFVar31 = ::operator/(&local_2a8,(FString *)&local_468,L"DroidSansFallback.ttf");
    ::FName::FName(&local_568,L"Regular");
    FTypeface::AppendFont(&(this_00->FallbackTypeface).Typeface,&local_568,pFVar31,Default,LazyLoad)
    ;
    if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.AllocatorInstance.Data);
    }
    if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.AllocatorInstance.Data);
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    uVar25 = TArray<FCompositeSubFont,TSizedDefaultAllocator<32>_>::AddDefaulted
                       (&this_00->SubTypefaces);
    if ((int)uVar25 < (this_00->SubTypefaces).ArrayNum) {
      uVar26 = ~uVar25 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    pFVar37 = (this_00->SubTypefaces).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x38;
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_158,BoxDrawing);
    local_560 = CONCAT31(local_560._1_3_,1);
    local_558 = CONCAT31(local_558._1_3_,1);
    local_268 = pFVar32->DisplayNameLiteral;
    uStack_260._0_4_ = pFVar32->RangeLower;
    uStack_260._4_4_ = pFVar32->RangeUpper;
    local_278 = *(undefined8 *)pFVar32;
    pwStack_270 = pFVar32->DisplayNameKey;
    uVar2 = pFVar32->RangeLower;
    uVar11 = pFVar32->RangeUpper;
    local_778 = local_560;
    uStack_770 = local_558;
    uStack_774 = uVar2;
    uStack_76c = uVar11;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_778) &&
        (&local_778 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_774,local_778);
    puVar33[1] = CONCAT44(uStack_76c,uStack_770);
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_138,BlockElements);
    local_550 = CONCAT31(local_550._1_3_,1);
    local_548 = CONCAT31(local_548._1_3_,1);
    local_248 = pFVar32->DisplayNameLiteral;
    uStack_240._0_4_ = pFVar32->RangeLower;
    uStack_240._4_4_ = pFVar32->RangeUpper;
    local_258 = *(undefined8 *)pFVar32;
    pwStack_250 = pFVar32->DisplayNameKey;
    uVar3 = pFVar32->RangeLower;
    uVar12 = pFVar32->RangeUpper;
    local_768 = local_550;
    uStack_760 = local_548;
    uStack_764 = uVar3;
    uStack_75c = uVar12;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_768) &&
        (&local_768 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_764,local_768);
    puVar33[1] = CONCAT44(uStack_75c,uStack_760);
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_118,HalfwidthAndFullwidthForms);
    local_4c0 = CONCAT31(local_4c0._1_3_,1);
    local_540 = CONCAT31(local_540._1_3_,1);
    local_228 = pFVar32->DisplayNameLiteral;
    uStack_220._0_4_ = pFVar32->RangeLower;
    uStack_220._4_4_ = pFVar32->RangeUpper;
    local_238 = *(undefined8 *)pFVar32;
    pwStack_230 = pFVar32->DisplayNameKey;
    uVar4 = pFVar32->RangeLower;
    uVar13 = pFVar32->RangeUpper;
    local_758 = local_4c0;
    uStack_750 = local_540;
    uStack_754 = uVar4;
    uStack_74c = uVar13;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_758) &&
        (&local_758 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_754,local_758);
    puVar33[1] = CONCAT44(uStack_74c,uStack_750);
    pFVar31 = FPaths::EngineContentDir(&local_2e8);
    pFVar31 = ::operator/(&local_2f8,pFVar31,L"Slate");
    pFVar31 = ::operator/(&local_308,pFVar31,L"Fonts");
    pFVar31 = ::operator/(&local_298,pFVar31,L"DroidSansFallback.ttf");
    ::FName::FName(&local_538,L"Regular");
    FTypeface::AppendFont((FTypeface *)pFVar37,&local_538,pFVar31,Default,LazyLoad);
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    uVar26 = TArray<FCompositeSubFont,TSizedDefaultAllocator<32>_>::AddDefaulted
                       (&this_00->SubTypefaces);
    uVar25 = 0;
    if ((int)uVar26 < (this_00->SubTypefaces).ArrayNum) {
      uVar25 = ~uVar26 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    pFVar37 = (this_00->SubTypefaces).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x38;
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_f8,Arabic);
    local_530 = CONCAT31(local_530._1_3_,1);
    local_528 = CONCAT31(local_528._1_3_,1);
    local_208 = pFVar32->DisplayNameLiteral;
    uStack_200._0_4_ = pFVar32->RangeLower;
    uStack_200._4_4_ = pFVar32->RangeUpper;
    local_218 = *(undefined8 *)pFVar32;
    pwStack_210 = pFVar32->DisplayNameKey;
    uVar5 = pFVar32->RangeLower;
    uVar14 = pFVar32->RangeUpper;
    local_748 = local_530;
    uStack_740 = local_528;
    uStack_744 = uVar5;
    uStack_73c = uVar14;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_748) &&
        (&local_748 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_744,local_748);
    puVar33[1] = CONCAT44(uStack_73c,uStack_740);
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_d8,ArabicExtendedA);
    local_520 = CONCAT31(local_520._1_3_,1);
    local_518 = CONCAT31(local_518._1_3_,1);
    local_1e8 = pFVar32->DisplayNameLiteral;
    uStack_1e0._0_4_ = pFVar32->RangeLower;
    uStack_1e0._4_4_ = pFVar32->RangeUpper;
    local_1f8 = *(undefined8 *)pFVar32;
    pwStack_1f0 = pFVar32->DisplayNameKey;
    uVar6 = pFVar32->RangeLower;
    uVar15 = pFVar32->RangeUpper;
    local_738 = local_520;
    uStack_730 = local_518;
    uStack_734 = uVar6;
    uStack_72c = uVar15;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_738) &&
        (&local_738 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_734,local_738);
    puVar33[1] = CONCAT44(uStack_72c,uStack_730);
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange
                        (&local_b8,ArabicMathematicalAlphabeticSymbols);
    local_510 = CONCAT31(local_510._1_3_,1);
    local_508 = CONCAT31(local_508._1_3_,1);
    local_1c8 = pFVar32->DisplayNameLiteral;
    uStack_1c0._0_4_ = pFVar32->RangeLower;
    uStack_1c0._4_4_ = pFVar32->RangeUpper;
    local_1d8 = *(undefined8 *)pFVar32;
    pwStack_1d0 = pFVar32->DisplayNameKey;
    uVar7 = pFVar32->RangeLower;
    uVar16 = pFVar32->RangeUpper;
    local_728 = local_510;
    uStack_720 = local_508;
    uStack_724 = uVar7;
    uStack_71c = uVar16;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_728) &&
        (&local_728 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_724,local_728);
    puVar33[1] = CONCAT44(uStack_71c,uStack_720);
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_98,ArabicPresentationFormsA);
    local_500 = CONCAT31(local_500._1_3_,1);
    local_4f8 = CONCAT31(local_4f8._1_3_,1);
    local_1a8 = pFVar32->DisplayNameLiteral;
    uStack_1a0._0_4_ = pFVar32->RangeLower;
    uStack_1a0._4_4_ = pFVar32->RangeUpper;
    local_1b8 = *(undefined8 *)pFVar32;
    pwStack_1b0 = pFVar32->DisplayNameKey;
    uVar8 = pFVar32->RangeLower;
    uVar17 = pFVar32->RangeUpper;
    local_718 = local_500;
    uStack_710 = local_4f8;
    uStack_714 = uVar8;
    uStack_70c = uVar17;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_718) &&
        (&local_718 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_714,local_718);
    puVar33[1] = CONCAT44(uStack_70c,uStack_710);
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_78,ArabicPresentationFormsB);
    local_4f0 = CONCAT31(local_4f0._1_3_,1);
    local_4e8 = CONCAT31(local_4e8._1_3_,1);
    local_188 = pFVar32->DisplayNameLiteral;
    uStack_180._0_4_ = pFVar32->RangeLower;
    uStack_180._4_4_ = pFVar32->RangeUpper;
    local_198 = *(undefined8 *)pFVar32;
    pwStack_190 = pFVar32->DisplayNameKey;
    uVar9 = pFVar32->RangeLower;
    uVar18 = pFVar32->RangeUpper;
    local_798 = local_4f0;
    uStack_790 = local_4e8;
    uStack_794 = uVar9;
    uStack_78c = uVar18;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_798) &&
        (&local_798 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_794,local_798);
    puVar33[1] = CONCAT44(uStack_78c,uStack_790);
    pFVar32 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_58,ArabicSupplement);
    local_4e0 = CONCAT31(local_4e0._1_3_,1);
    local_4d8 = CONCAT31(local_4d8._1_3_,1);
    local_168 = pFVar32->DisplayNameLiteral;
    uStack_160._0_4_ = pFVar32->RangeLower;
    uStack_160._4_4_ = pFVar32->RangeUpper;
    local_178 = *(undefined8 *)pFVar32;
    pwStack_170 = pFVar32->DisplayNameKey;
    uVar10 = pFVar32->RangeLower;
    uVar19 = pFVar32->RangeUpper;
    local_788 = local_4e0;
    uStack_780 = local_4d8;
    uStack_784 = uVar10;
    uStack_77c = uVar19;
    if (((*(undefined4 **)(pFVar37 + 0x18) <= &local_788) &&
        (&local_788 < *(undefined4 **)(pFVar37 + 0x18) + (longlong)*(int *)(pFVar37 + 0x24) * 4)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
    iVar24 = *(int *)&pFVar37[0x20].field_0x0;
    if (iVar24 == *(int *)(pFVar37 + 0x24)) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,(ForAnyElementType *)(pFVar37 + 0x18),(int *)(pFVar37 + 0x24));
    }
    *(int *)&pFVar37[0x20].field_0x0 = iVar24 + 1;
    puVar33 = (undefined8 *)((longlong)iVar24 * 0x10 + *(longlong *)(pFVar37 + 0x18));
    *puVar33 = CONCAT44(uStack_784,local_788);
    puVar33[1] = CONCAT44(uStack_77c,uStack_780);
    pFVar31 = FPaths::EngineContentDir(&local_2b8);
    pFVar31 = ::operator/(&local_2c8,pFVar31,L"Slate");
    pFVar31 = ::operator/(&local_2d8,pFVar31,L"Fonts");
    pFVar31 = ::operator/(&local_288,pFVar31,L"NotoNaskhArabicUI-Regular.ttf");
    ::FName::FName(&local_4d0,L"Regular");
    FTypeface::AppendFont((FTypeface *)pFVar37,&local_4d0,pFVar31,Default,LazyLoad);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    pTVar35 = local_4c8;
    if (pFVar36 != (FCompositeFont *)0x0) {
      LOCK();
      piVar1 = &(pFVar36->DefaultTypeface).Fonts.ArrayNum;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_708 = this_00;
    local_700.ReferenceController = (TReferenceControllerBase<1> *)pFVar36;
    if (local_4c8 != (TSharedPtr<FCompositeFont_const_,1> *)&local_708) {
      local_4c8->Object = this_00;
      local_708 = (FCompositeFont *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_4c8->SharedReferenceCount,&local_700);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_700.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar36);
    if ((pTVar35->Object == (FCompositeFont *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar23)) {
      pcVar21 = (code *)swi(3);
      pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
      return pTVar28;
    }
  }
  __return_storage_ptr__->Object = pTVar35->Object;
  pTVar20 = (pTVar35->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar20;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (FCompositeFont *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar23)) {
    pcVar21 = (code *)swi(3);
    pTVar28 = (TSharedRef<FCompositeFont_const_,1> *)(*pcVar21)();
    return pTVar28;
  }
  return __return_storage_ptr__;
}

// GetLastResortFont @ 142491b00

TSharedPtr<FCompositeFont_const_,1> * __thiscall
FLegacySlateFontInfoCache::GetLastResortFont
          (FLegacySlateFontInfoCache *this,
          TSharedPtr<FCompositeFont_const_,1> *__return_storage_ptr__)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  EFontLoadingPolicy EVar5;
  EFontHinting EVar6;
  bool bVar7;
  FFontData *this_00;
  FString *pFVar8;
  FCompositeFont *pFVar9;
  TSharedPtr<FCompositeFont_const_,1> *pTVar10;
  FCompositeFallbackFont *pFVar11;
  FCompositeFont *pFVar12;
  FName local_res8;
  longlong local_58;
  FSharedReferencer<1> local_50;
  FFallbackContext local_48;
  FString local_38;
  
  lpCriticalSection = &this->LastResortFontCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar10 = &this->LastResortFont;
  if ((pTVar10->Object != (FCompositeFont *)0x0) || (this->bIsLastResortFontAvailable == false))
  goto LAB_142491caf;
  pFVar12 = (FCompositeFont *)0x0;
  local_48.Codepoint = L'\0';
  local_48._12_4_ = 0;
  local_48.FontData = (FFontData *)0x0;
  this_00 = GetLastResortFontData(this,&local_48);
  EVar5 = FFontData::GetLoadingPolicy(this_00);
  EVar6 = FFontData::GetHinting(this_00);
  pFVar8 = FFontData::GetFontFilename(this_00);
  pFVar9 = ::operator_new(0x60);
  if (pFVar9 == (FCompositeFont *)0x0) {
    pFVar11 = (FCompositeFallbackFont *)&DAT_00000010;
    pFVar9 = pFVar12;
LAB_142491c4b:
    pFVar12 = (FCompositeFont *)&pFVar11->ScalingFactor;
    local_50.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
    if (pFVar9 != (FCompositeFont *)0x0) goto LAB_142491c5c;
  }
  else {
    (pFVar9->DefaultTypeface).Fonts.ArrayNum = 1;
    (pFVar9->DefaultTypeface).Fonts.ArrayMax = 1;
    (pFVar9->DefaultTypeface).Fonts.AllocatorInstance.Data =
         (FScriptContainerElement *)
         &
         ___7__TIntrusiveReferenceController_UFStandaloneCompositeFont___00_SharedPointerInternals__6B_
    ;
    pFVar8 = ::FString::FString(&local_38,pFVar8);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    FStandaloneCompositeFont::FStandaloneCompositeFont
              ((FStandaloneCompositeFont *)&pFVar9->FallbackTypeface,&local_res8,pFVar8,EVar6,EVar5)
    ;
    pFVar11 = &pFVar9->FallbackTypeface;
    if (pFVar11 != (FCompositeFallbackFont *)0x0) goto LAB_142491c4b;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedPtr<FCompositeFont_const_,1> *)(*pcVar3)();
      return pTVar10;
    }
LAB_142491c5c:
    LOCK();
    piVar1 = &(pFVar9->DefaultTypeface).Fonts.ArrayNum;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_50.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
  }
  FVar4.ReferenceController = local_50.ReferenceController;
  if (pTVar10 != (TSharedPtr<FCompositeFont_const_,1> *)&local_58) {
    pTVar10->Object = pFVar12;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastResortFont).SharedReferenceCount,&local_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
LAB_142491caf:
  __return_storage_ptr__->Object = pTVar10->Object;
  pTVar2 = (this->LastResortFont).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetLastResortFontData @ 142491cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FFontData * __thiscall
FLegacySlateFontInfoCache::GetLastResortFontData
          (FLegacySlateFontInfoCache *this,FFallbackContext *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<FFontData_const_,1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  TReferenceControllerBase<1> *pTVar9;
  FFontData *pFVar10;
  int iVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  ForAnyElementType *pFVar15;
  TReferenceControllerBase<1> *pTVar16;
  ForAnyElementType local_68;
  int local_60;
  int iStack_5c;
  FFontData *local_58;
  FSharedReferencer<1> FStack_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  lpCriticalSection = &this->LastResortFontDataCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->LastResortFontData;
  if (pTVar1->Object == (FFontData *)0x0) {
    if (this->bIsLastResortFontAvailable == false) {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      pFVar15 = &local_48;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      local_60 = (this->LastResortFontPath).Data.ArrayNum;
      lVar14 = (longlong)local_60;
      _Src = (this->LastResortFontPath).Data.AllocatorInstance.Data;
      local_68.Data = (FScriptContainerElement *)0x0;
      if (local_60 == 0) {
        pFVar15 = &local_68;
        iStack_5c = 0;
        bVar5 = true;
        bVar7 = false;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_60,0,&local_68,local_60,&iStack_5c);
        memcpy(local_68.Data,_Src,lVar14 * 2);
        pFVar15 = &local_68;
        bVar5 = true;
        bVar7 = false;
      }
    }
    FVar13.Data = local_48.Data;
    pTVar9 = ::operator_new(0x38);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      local_58 = ___xmm_00000000000000000000000000000010;
      pFVar10 = (FFontData *)&DAT_00000010;
      FStack_50.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFFontData___00_SharedPointerInternals__6B_;
      pwVar12 = (wchar_t *)pFVar15->Data;
      pFVar15->Data = (FScriptContainerElement *)0x0;
      aVar2 = *(atomic<int> *)(pFVar15 + 1);
      aVar3 = *(atomic<int> *)((longlong)&pFVar15[1].Data + 4);
      pFVar15[1].Data = (FScriptContainerElement *)0x0;
      pTVar9[1]._padding_ = (longlong)pwVar12;
      pTVar9[1].SharedReferenceCount = aVar2;
      pTVar9[1].WeakReferenceCount = aVar3;
      *(undefined2 *)((longlong)&pTVar9[2]._padding_ + 4) = 0;
      pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[3]._padding_ = 0;
      iVar11 = (int)aVar2 + -1;
      if (aVar2 == (atomic<int>)0x0) {
        pwVar12 = L"";
        iVar11 = 0;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar12);
      pFVar10 = (FFontData *)(pTVar9 + 1);
      *(uint *)&pTVar9[2]._padding_ = uVar8;
      if ((pFVar10 == (FFontData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FFontData *)(*pcVar4)();
        return pFVar10;
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      FStack_50.ReferenceController = pTVar9;
      FVar13.Data = local_48.Data;
      pTVar16 = pTVar9;
      local_58 = pFVar10;
    }
    if (pTVar1 != (TSharedPtr<FFontData_const_,1> *)&local_58) {
      pTVar1->Object = pFVar10;
      local_58 = (FFontData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LastResortFontData).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if ((bVar7) && (FVar13.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FVar13.Data);
    }
    if ((bVar5) && (local_68.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data);
    }
    if (4 < (byte)LogSlate._0_1_) {
      FFallbackContext::ToString(param_1,&local_38);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((pTVar1->Object == (FFontData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FFontData *)(*pcVar4)();
    return pFVar10;
  }
  pFVar10 = pTVar1->Object;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar10;
}

// GetReferencerName @ 142492d40

FString * __thiscall
FLegacySlateFontInfoCache::GetReferencerName
          (FLegacySlateFontInfoCache *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FLegacySlateFontInfoCache");
  return __return_storage_ptr__;
}

// GetSystemFont @ 142496040

TSharedPtr<FCompositeFont_const_,1> * __thiscall
FLegacySlateFontInfoCache::GetSystemFont
          (FLegacySlateFontInfoCache *this,
          TSharedPtr<FCompositeFont_const_,1> *__return_storage_ptr__)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  IFileManager *pIVar7;
  TSharedPtr<FCompositeFont_const_,1> *pTVar8;
  FCompositeFont *pFVar9;
  FCompositeFallbackFont *pFVar10;
  FCompositeFont *pFVar11;
  ForAnyElementType FVar12;
  FName local_res8;
  FString local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  longlong local_68;
  FSharedReferencer<1> local_60;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<unsigned_char_const_,__int64> local_48;
  FString local_38;
  
  pTVar8 = &this->SystemFont;
  if (pTVar8->Object != (FCompositeFont *)0x0) goto LAB_1424962b3;
  FGenericPlatformMisc::GetSystemFontBytes(&local_58);
  if (0 < local_58.ArrayNum) {
    pTVar6 = &FPaths::EngineIntermediateDir(&local_38)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_78,pTVar6,0x17 - (uint)(pTVar6->ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_78,L"DefaultSystemFont.ttf",0x15);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pIVar7 = IFileManager::Get();
    local_48.DataPtr = (uchar *)local_58.AllocatorInstance.Data;
    local_48.ArrayNum = (long64)local_58.ArrayNum;
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_78.ArrayNum != 0) {
      FVar12.Data = local_78.AllocatorInstance.Data;
    }
    if ((local_58.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FCompositeFont_const_,1> *)(*pcVar3)();
      return pTVar8;
    }
    bVar5 = FFileHelper::SaveArrayToFile(&local_48,(wchar_t *)FVar12.Data,pIVar7,0);
    if (bVar5) {
      pFVar9 = ::operator_new(0x60);
      FVar12.Data = local_78.AllocatorInstance.Data;
      pFVar11 = (FCompositeFont *)0x0;
      if (pFVar9 == (FCompositeFont *)0x0) {
        pFVar10 = (FCompositeFallbackFont *)&DAT_00000010;
        pFVar9 = pFVar11;
LAB_142496232:
        pFVar11 = (FCompositeFont *)&pFVar10->ScalingFactor;
        local_60.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        if (pFVar9 != (FCompositeFont *)0x0) goto LAB_142496242;
      }
      else {
        (pFVar9->DefaultTypeface).Fonts.ArrayNum = 1;
        (pFVar9->DefaultTypeface).Fonts.ArrayMax = 1;
        (pFVar9->DefaultTypeface).Fonts.AllocatorInstance.Data =
             (FScriptContainerElement *)
             &
             ___7__TIntrusiveReferenceController_UFStandaloneCompositeFont___00_SharedPointerInternals__6B_
        ;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_78.ArrayNum == 0) {
          local_88.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_78.ArrayNum,0,(ForAnyElementType *)&local_88,local_78.ArrayNum,
                     &local_88.Data.ArrayMax);
          memcpy(local_88.Data.AllocatorInstance.Data,FVar12.Data,(longlong)local_78.ArrayNum * 2);
        }
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
        FStandaloneCompositeFont::FStandaloneCompositeFont
                  ((FStandaloneCompositeFont *)&pFVar9->FallbackTypeface,&local_res8,&local_88,
                   Default,LazyLoad);
        pFVar10 = &pFVar9->FallbackTypeface;
        if (pFVar10 != (FCompositeFallbackFont *)0x0) goto LAB_142496232;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FCompositeFont_const_,1> *)(*pcVar3)();
          return pTVar8;
        }
LAB_142496242:
        LOCK();
        piVar1 = &(pFVar9->DefaultTypeface).Fonts.ArrayNum;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        local_60.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
      }
      FVar4.ReferenceController = local_60.ReferenceController;
      if (pTVar8 != (TSharedPtr<FCompositeFont_const_,1> *)&local_68) {
        pTVar8->Object = pFVar11;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SystemFont).SharedReferenceCount,&local_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
LAB_1424962b3:
  __return_storage_ptr__->Object = pTVar8->Object;
  pTVar2 = (this->SystemFont).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsLastResortFontAvailable @ 14249b360

bool __thiscall
FLegacySlateFontInfoCache::IsLastResortFontAvailable(FLegacySlateFontInfoCache *this)

{
  return this->bIsLastResortFontAvailable;
}

