// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 46

// ~FPreLoadSettingsContainerBase @ 145abfb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPreLoadSettingsContainerBase::~FPreLoadSettingsContainerBase(FPreLoadSettingsContainerBase *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  TMap<FName,FSlateDynamicImageBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>_>
  *this_00;
  TMap<FName,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FText,0>_> *this_01;
  TMap<FName,TSharedPtr<FStandaloneCompositeFont,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStandaloneCompositeFont,1>,0>_>
  *this_02;
  TMap<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
  *this_03;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  puVar2 = &(this->BrushResources).field_0x10;
  iVar15 = 0;
  iVar17 = 0;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  this_00 = &this->BrushResources;
  iVar3 = *(int *)&(this->BrushResources).field_0x28;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->BrushResources).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar2;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_145abfc3d;
      uVar14 = puVar18[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iVar11 = iVar17 + -1 + local_res10;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_145abfc3d:
  uVar14 = *(uint *)&(this->BrushResources).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar15);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iVar11;
  TStack_60.BaseBitIndex = iVar17;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->BrushResources).field_0x8 -
                       *(int *)&(this->BrushResources).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->BrushResources).field_0x28;
  if (uVar14 != uVar10) {
    puVar16 = *(undefined1 **)&(this->BrushResources).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_145abfd40;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    uVar14 = local_res18 + -1 + uVar13;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_145abfd40:
  while( true ) {
    if (*(int *)&(this->BrushResources).field_0x8 - *(int *)&(this->BrushResources).field_0x34 !=
        (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FSlateDynamicImageBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar12 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar14) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
      bVar9 = 1 < *(int *)&(this->BrushResources).field_0x48;
      if (!bVar9) {
        TSet<TTuple<FName,FSlateDynamicImageBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FName,FSlateDynamicImageBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>,FDefaultSetAllocator>
                          *)this_00);
      }
      puVar2 = &(this->BrushResources).field_0xc;
      *(undefined4 *)&(this->BrushResources).field_0x8 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
      }
      *(undefined4 *)&(this->BrushResources).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->BrushResources).field_0x34 = 0;
      iVar3 = *(int *)&(this->BrushResources).field_0x2c;
      *(undefined4 *)&(this->BrushResources).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->BrushResources).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BrushResources).field_0x10,0);
      }
      if (bVar9) {
        *(undefined4 *)&(this->BrushResources).field_0x48 = 1;
        TSet<TTuple<FName,FSlateDynamicImageBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,FSlateDynamicImageBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>,FDefaultSetAllocator>
                  *)this_00);
      }
      this_01 = &this->LocalizedTextResources;
      bVar9 = 1 < *(int *)&(this->LocalizedTextResources).field_0x48;
      if (!bVar9) {
        TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>::
        UnhashElements((TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>
                        *)this_01);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_01,0,*(int *)&(this->LocalizedTextResources).field_0x8);
      puVar2 = &(this->LocalizedTextResources).field_0xc;
      *(undefined4 *)&(this->LocalizedTextResources).field_0x8 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
      }
      *(undefined4 *)&(this->LocalizedTextResources).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->LocalizedTextResources).field_0x34 = 0;
      iVar3 = *(int *)&(this->LocalizedTextResources).field_0x2c;
      *(undefined4 *)&(this->LocalizedTextResources).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->LocalizedTextResources).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this->LocalizedTextResources).field_0x10,0);
      }
      if (bVar9) {
        *(undefined4 *)&(this->LocalizedTextResources).field_0x48 = 1;
        TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>::
        Rehash((TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>
                *)this_01);
      }
      this_02 = &this->FontResources;
      bVar9 = 1 < *(int *)&(this->FontResources).field_0x48;
      if (!bVar9) {
        TSet<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStandaloneCompositeFont,1>,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStandaloneCompositeFont,1>,0>,FDefaultSetAllocator>
                          *)this_02);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_02,0,*(int *)&(this->FontResources).field_0x8);
      puVar2 = &(this->FontResources).field_0xc;
      *(undefined4 *)&(this->FontResources).field_0x8 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_02,0,(int *)puVar2);
      }
      *(undefined4 *)&(this->FontResources).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->FontResources).field_0x34 = 0;
      iVar3 = *(int *)&(this->FontResources).field_0x2c;
      *(undefined4 *)&(this->FontResources).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->FontResources).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FontResources).field_0x10,0);
      }
      if (bVar9) {
        *(undefined4 *)&(this->FontResources).field_0x48 = 1;
        TSet<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStandaloneCompositeFont,1>,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStandaloneCompositeFont,1>,0>,FDefaultSetAllocator>
                  *)this_02);
      }
      this_03 = &this->ScreenGroupings;
      bVar9 = 1 < *(int *)&(this->ScreenGroupings).field_0x48;
      if (!bVar9) {
        TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
        ::UnhashElements((TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
                          *)this_03);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_03,0,*(int *)&(this->ScreenGroupings).field_0x8);
      puVar2 = &(this->ScreenGroupings).field_0xc;
      *(undefined4 *)&(this->ScreenGroupings).field_0x8 = 0;
      if (*(int *)puVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)this_03,0,(int *)puVar2);
      }
      *(undefined4 *)&(this->ScreenGroupings).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->ScreenGroupings).field_0x34 = 0;
      iVar3 = *(int *)&(this->ScreenGroupings).field_0x2c;
      *(undefined4 *)&(this->ScreenGroupings).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->ScreenGroupings).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ScreenGroupings).field_0x10,0);
      }
      if (bVar9) {
        *(undefined4 *)&(this->ScreenGroupings).field_0x48 = 1;
        TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
                  *)this_03);
      }
      Instance = (FPreLoadSettingsContainerBase *)0x0;
      pFVar6 = (this->PluginContentDir).Data.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      *(undefined4 *)&(this->BrushLoadingGroups).field_0x48 = 0;
      pvVar7 = *(void **)&(this->BrushLoadingGroups).field_0x40;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this->BrushLoadingGroups);
      *(undefined4 *)&(this->ScreenGroupings).field_0x48 = 0;
      pvVar7 = *(void **)&(this->ScreenGroupings).field_0x40;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_03);
      *(undefined4 *)&(this->ScreenOrderByLoadingGroups).field_0x48 = 0;
      pvVar7 = *(void **)&(this->ScreenOrderByLoadingGroups).field_0x40;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this->ScreenOrderByLoadingGroups);
      *(undefined4 *)&(this->FontResources).field_0x48 = 0;
      pvVar7 = *(void **)&(this->FontResources).field_0x40;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_02);
      *(undefined4 *)&(this->LocalizedTextResources).field_0x48 = 0;
      pvVar7 = *(void **)&(this->LocalizedTextResources).field_0x40;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_01);
      *(undefined4 *)&(this->BrushResources).field_0x48 = 0;
      pvVar7 = *(void **)&(this->BrushResources).field_0x40;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FSlateDynamicImageBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FSlateDynamicImageBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FSlateDynamicImageBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00);
      DestructItems<FString,int>
                ((FString *)(this->ParsedLoadingGroupIdentifiers).AllocatorInstance.Data,
                 (this->ParsedLoadingGroupIdentifiers).ArrayNum);
      pFVar6 = (this->ParsedLoadingGroupIdentifiers).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      this->_padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::UnregisterGCObject((FGCObject *)&this->_padding_);
      this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
      return;
    }
    lVar4 = *(longlong *)&this_00->field_0x0;
    if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentApplication.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                           ,0x141,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = IsInGameThread();
    if ((((!bVar9) && (bVar9 = IsInSlateThread(), !bVar9)) &&
        (bVar9 = (*IsInAsyncLoadingThread)(), !bVar9)) &&
       ((bVar9 = IsInParallelLoadingThread(), !bVar9 &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                            ,0x142,L""), bVar9)))) break;
    if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (**(code **)(**(longlong **)&(FSlateApplication::CurrentApplication.Object)->field_0x60 + 0xa0))
              ();
    puVar5 = *(undefined8 **)(lVar4 + lVar12 * 0x18 + 8);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// AddLocalizedText @ 145ac0d30

void __thiscall
FPreLoadSettingsContainerBase::AddLocalizedText
          (FPreLoadSettingsContainerBase *this,FString *param_1,FText *param_2)

{
  ITextData *pIVar1;
  wchar_t *pwVar2;
  TPairInitializer<FName_&&,FText_const_&> local_res8;
  FText **local_18;
  FText *local_10;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_res8.Value,pwVar2);
  local_18 = &local_res8.Value;
  local_10 = param_2;
  TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,FText_const_&>_>
            ((TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>
              *)&this->LocalizedTextResources,&local_res8,(bool *)&local_18);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// AddReferencedObjects @ 145ac0db0

void __thiscall
FPreLoadSettingsContainerBase::AddReferencedObjects
          (FPreLoadSettingsContainerBase *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->BrushResources).field_0x20;
  puVar1 = &(this->BrushResources).field_0x8;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = iVar13;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->BrushResources).field_0x18;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    iVar13 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ac0e4e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145ac0e4e:
  uVar10 = *(uint *)&(this->BrushResources).field_0x20;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&this->BrushResources - *(int *)&(this->BrushResources).field_0x2c);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->BrushResources).field_0x20;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->BrushResources).field_0x18;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145ac0f50;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145ac0f50:
  while( true ) {
    if (*(int *)&this->BrushResources - *(int *)&(this->BrushResources).field_0x2c != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FSlateDynamicImageBrush_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,*(longlong *)
                        (*(longlong *)&(this->ParsedLoadingGroupIdentifiers).ArrayNum + 8 +
                        (longlong)TStack_60.CurrentBitIndex * 0x18) + 0x38,0,0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddScreenGrouping @ 145ac0fe0

void __thiscall
FPreLoadSettingsContainerBase::AddScreenGrouping
          (FPreLoadSettingsContainerBase *this,FString *param_1,FScreenGroupingBase *param_2)

{
  wchar_t *pwVar1;
  TPairInitializer<FName_&&,FPreLoadSettingsContainerBase::FScreenGroupingBase_const_&> local_res8;
  FScreenGroupingBase **local_18;
  FScreenGroupingBase *local_10;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_res8.Value,pwVar1);
  local_18 = &local_res8.Value;
  local_10 = param_2;
  TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FPreLoadSettingsContainerBase::FScreenGroupingBase_const_&>_>
            ((TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>,FDefaultSetAllocator>
              *)&this->ScreenGroupings,&local_res8,(bool *)&local_18);
  return;
}

// BuildCustomFont @ 145ac10a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPreLoadSettingsContainerBase::BuildCustomFont
          (FPreLoadSettingsContainerBase *this,FString *param_1,FString *param_2,FString *param_3)

{
  FName *pFVar1;
  int *piVar2;
  TMap<FName,TSharedPtr<FStandaloneCompositeFont,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStandaloneCompositeFont,1>,0>_>
  *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  bool bVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  TReferenceControllerBase<1> *pTVar14;
  ForAnyElementType *pFVar15;
  FUnicodeBlockRange *pFVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  FName *pFVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  wchar_t *pwVar23;
  FName FVar24;
  bool bVar25;
  uint local_res8 [2];
  FString *local_res10;
  FString *local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_228;
  undefined8 local_220;
  undefined2 local_218;
  undefined2 local_216;
  undefined2 local_214;
  undefined2 local_212;
  undefined2 local_210;
  undefined2 local_20e;
  undefined2 local_20c;
  undefined2 local_20a;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 local_204;
  undefined2 local_202;
  undefined2 local_200;
  undefined2 local_1fe;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined2 local_1f6;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined2 local_1f0;
  undefined2 local_1ee;
  undefined2 local_1ec;
  undefined2 local_1ea;
  undefined2 local_1e8;
  undefined2 local_1e6;
  undefined2 local_1e4;
  undefined2 local_1e2;
  undefined2 local_1e0;
  undefined2 local_1de;
  undefined2 local_1dc;
  undefined2 local_1da;
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined2 local_1d4;
  undefined2 local_1d2;
  undefined2 local_1d0;
  undefined2 local_1ce;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined2 local_1c8;
  undefined2 local_1c6;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined2 local_1c0;
  undefined2 local_1be;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined2 local_1b4;
  undefined2 local_1b2;
  undefined2 local_1b0;
  undefined2 local_1ae;
  undefined2 local_1ac;
  undefined2 local_1aa;
  undefined2 local_1a8;
  EUnicodeBlockRange local_1a6 [3];
  ForAnyElementType local_1a0;
  undefined8 local_198;
  ForAnyElementType local_190;
  int local_188;
  int local_184;
  FName local_180;
  int local_178 [2];
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  FString local_150;
  FName local_140;
  FSharedReferencer<1> FStack_138;
  FName *local_130;
  undefined4 local_128;
  undefined4 local_120;
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  void *local_98 [2];
  FUnicodeBlockRange local_88;
  undefined8 local_68;
  wchar_t *pwStack_60;
  
  local_res8[0] = 0;
  iVar12 = (param_3->Data).ArrayNum;
  local_res10 = param_1;
  local_res18 = param_2;
  if (iVar12 == UseSystemFontOverride.Data.ArrayNum) {
    if (1 < iVar12) {
      iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(param_3->Data).AllocatorInstance.Data,
                          (wchar_t *)UseSystemFontOverride.Data.AllocatorInstance.Data);
      bVar25 = iVar12 == 0;
      goto LAB_145ac1106;
    }
    bVar25 = true;
LAB_145ac1114:
    (**(code **)(this->_padding_ + 0x58))(this);
  }
  else {
    bVar25 = iVar12 + UseSystemFontOverride.Data.ArrayNum == 1;
LAB_145ac1106:
    if (bVar25) goto LAB_145ac1114;
  }
  this_00 = &this->FontResources;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_180,pwVar23);
  FVar24 = local_180;
  uVar11 = ::GetTypeHash(local_180.ComparisonIndex.Value);
  uVar11 = uVar11 + FVar24.Number;
  if (*(int *)&(this->FontResources).field_0x8 != *(int *)&(this->FontResources).field_0x34) {
    puVar18 = *(undefined1 **)&(this->FontResources).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->FontResources).field_0x38;
    }
    uVar22 = *(uint *)(puVar18 +
                      (ulonglong)(*(int *)&(this->FontResources).field_0x48 - 1U & uVar11) * 4);
    if (uVar22 != 0xffffffff) {
      do {
        pFVar19 = (FName *)((longlong)(int)uVar22 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (*pFVar19 == local_180) {
          if (pFVar19 != (FName *)0x0) goto LAB_145ac11db;
          break;
        }
        uVar22 = pFVar19[3].ComparisonIndex.Value;
      } while (uVar22 != 0xffffffff);
    }
  }
  local_130 = &local_180;
  TSet<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStandaloneCompositeFont,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,TSharedPtr<FStandaloneCompositeFont,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FStandaloneCompositeFont,1>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_178,(TKeyInitializer<FName_&&> *)(ulonglong)uVar11,
             (bool *)&local_130);
  pFVar19 = (FName *)((longlong)local_178[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_145ac11db:
  pFVar1 = pFVar19 + 1;
  if (pFVar19[1] == (FName)0x0) {
    pTVar14 = ::operator_new(0x60);
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      local_140 = ___xmm_00000000000000000000000000000010;
      FVar24.ComparisonIndex.Value = 0x10;
      FVar24.Number = 0;
      FStack_138.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar14->SharedReferenceCount = (atomic<int>)0x1;
      pTVar14->WeakReferenceCount = (atomic<int>)0x1;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFStandaloneCompositeFont___00_SharedPointerInternals__6B_
      ;
      pTVar14[2]._padding_ = 0;
      pTVar14[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar14[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar14[3]._padding_ = 0;
      pTVar14[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar14[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar14[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar14[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar14[5]._padding_ = 0;
      *(undefined4 *)&pTVar14[4]._padding_ = 0x3f800000;
      *(undefined1 *)&pTVar14[5].SharedReferenceCount = 1;
      pTVar14[1]._padding_ = (longlong)&___7FGCObject__6B_;
      *(undefined2 *)&pTVar14[1].SharedReferenceCount = 0;
      FGCObject::RegisterGCObject((FGCObject *)(pTVar14 + 1));
      FVar24 = (FName)(pTVar14 + 1);
      pTVar14[1]._padding_ = (longlong)&___7FStandaloneCompositeFont__6B_;
      if ((FVar24 == (FName)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      FStack_138.ReferenceController = pTVar14;
      local_140 = FVar24;
    }
    if (pFVar1 != &local_140) {
      *pFVar1 = FVar24;
      local_140.ComparisonIndex.Value = 0;
      local_140.Number = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(pFVar19 + 2),&FStack_138);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_138.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    param_2 = local_res18;
    if (*pFVar1 == (FName)0x0) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      bVar9 = `FPreLoadSettingsContainerBase::BuildCustomFont'::__l9::<lambda_1>::operator()
                        (local_res8);
      param_2 = local_res18;
      if (!bVar9) {
        return;
      }
    }
  }
  if (bVar25) {
    pFVar15 = (ForAnyElementType *)(**(code **)(this->_padding_ + 0x60))(this,local_98);
    bVar9 = true;
    bVar25 = false;
  }
  else {
    iVar12 = (param_3->Data).ArrayNum;
    pFVar5 = (param_3->Data).AllocatorInstance.Data;
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = iVar12;
    if (iVar12 == 0) {
      local_164 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar12,0,&local_170,iVar12,&local_164);
      memcpy(local_170.Data,pFVar5,(longlong)iVar12 * 2);
    }
    pFVar15 = &local_170;
    bVar9 = false;
    bVar25 = true;
  }
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = *(int *)&pFVar15[1].Data;
  lVar20 = (longlong)local_188;
  pFVar5 = pFVar15->Data;
  if (local_188 == 0) {
    local_184 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_188,0,&local_190,local_188,&local_184);
    memcpy(local_190.Data,pFVar5,lVar20 * 2);
  }
  if ((bVar25) && (local_170.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_170.Data);
  }
  if ((bVar9) && (local_98[0] != (void *)0x0)) {
    FMemory::Free(local_98[0]);
  }
  ::FString::FString(&local_a8,L"en");
  iVar12 = (param_2->Data).ArrayNum;
  if (iVar12 == local_a8.Data.ArrayNum) {
    if (iVar12 < 2) {
      bVar25 = true;
    }
    else {
      iVar12 = wcscmp((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                      (wchar_t *)local_a8.Data.AllocatorInstance.Data);
      bVar25 = iVar12 == 0;
    }
  }
  else {
    bVar25 = iVar12 + local_a8.Data.ArrayNum == 1;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar25) {
    pwVar23 = L"";
    if ((*pFVar1 == (FName)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar21.Data = local_190.Data;
    lVar20 = (longlong)local_188;
    FVar24 = *pFVar1;
    local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Data.ArrayNum = local_188;
    if (local_188 == 0) {
      local_150.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_188,0,(ForAnyElementType *)&local_150,local_188,&local_150.Data.ArrayMax)
      ;
      memcpy(local_150.Data.AllocatorInstance.Data,FVar21.Data,lVar20 * 2);
    }
    if ((local_res10->Data).ArrayNum != 0) {
      pwVar23 = (wchar_t *)(local_res10->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_110,pwVar23);
    FTypeface::AppendFont
              ((FTypeface *)((longlong)FVar24 + 0x10),&local_110,&local_150,Default,LazyLoad);
    goto LAB_145ac424d;
  }
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220 = 0;
  ::FString::FString(&local_108,L"ar");
  iVar12 = (param_2->Data).ArrayNum;
  if (iVar12 == local_108.Data.ArrayNum) {
    if (iVar12 < 2) {
      bVar25 = true;
    }
    else {
      iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          (wchar_t *)local_108.Data.AllocatorInstance.Data);
      bVar25 = iVar12 == 0;
    }
  }
  else {
    bVar25 = iVar12 + local_108.Data.ArrayNum == 1;
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (bVar25) {
    local_1a6[0] = Arabic;
    if (((local_228.Data <= (FScriptContainerElement *)local_1a6) &&
        ((FScriptContainerElement *)local_1a6 < local_228.Data + (longlong)local_220._4_4_ * 2)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = (int)local_220;
    if ((int)local_220 == local_220._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x202,&local_228,(int *)((longlong)&local_220 + 4));
    }
    iVar13 = iVar12 + 1;
    *(EUnicodeBlockRange *)(local_228.Data + (longlong)iVar12 * 2) = local_1a6[0];
    local_218 = 0x14;
    local_220._0_4_ = iVar13;
    if (((local_228.Data <= (FScriptContainerElement *)&local_218) &&
        ((FScriptContainerElement *)&local_218 < local_228.Data + (longlong)local_220._4_4_ * 2)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((int)local_220 == local_220._4_4_) {
      local_220._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x202,&local_228,(int *)((longlong)&local_220 + 4));
    }
    iVar12 = (int)local_220 + 1;
    *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_218;
    local_216 = 0xfb;
    local_220._0_4_ = iVar12;
    if (((local_228.Data <= (FScriptContainerElement *)&local_216) &&
        ((FScriptContainerElement *)&local_216 < local_228.Data + (longlong)local_220._4_4_ * 2)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((int)local_220 == local_220._4_4_) {
      local_220._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x202,&local_228,(int *)((longlong)&local_220 + 4));
    }
    iVar12 = (int)local_220 + 1;
    *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_216;
    local_214 = 0x99;
    local_220._0_4_ = iVar12;
    if (((local_228.Data <= (FScriptContainerElement *)&local_214) &&
        ((FScriptContainerElement *)&local_214 < local_228.Data + (longlong)local_220._4_4_ * 2)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((int)local_220 == local_220._4_4_) {
      local_220._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x202,&local_228,(int *)((longlong)&local_220 + 4));
    }
    iVar12 = (int)local_220 + 1;
    *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_214;
    local_212 = 0x9f;
    local_220._0_4_ = iVar12;
    if (((local_228.Data <= (FScriptContainerElement *)&local_212) &&
        ((FScriptContainerElement *)&local_212 < local_228.Data + (longlong)local_220._4_4_ * 2)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((int)local_220 == local_220._4_4_) {
      local_220._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x202,&local_228,(int *)((longlong)&local_220 + 4));
    }
    iVar12 = (int)local_220 + 1;
    *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_212;
    local_210 = 0xf;
    local_220._0_4_ = iVar12;
    if (((local_228.Data <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 < local_228.Data + (longlong)local_220._4_4_ * 2)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = (int)local_220;
    if ((int)local_220 == local_220._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x202,&local_228,(int *)((longlong)&local_220 + 4));
    }
    local_220 = CONCAT44(local_220._4_4_,iVar12 + 1);
    lVar20 = (longlong)iVar12;
    uVar10 = local_210;
LAB_145ac3f1a:
    *(undefined2 *)(local_228.Data + lVar20 * 2) = uVar10;
  }
  else {
    ::FString::FString(&local_f8,L"ja");
    iVar12 = (param_2->Data).ArrayNum;
    if (iVar12 == local_f8.Data.ArrayNum) {
      if (iVar12 < 2) {
        bVar25 = true;
      }
      else {
        iVar12 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                            (wchar_t *)local_f8.Data.AllocatorInstance.Data);
        bVar25 = iVar12 == 0;
      }
    }
    else {
      bVar25 = iVar12 + local_f8.Data.ArrayNum == 1;
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (bVar25) {
      local_20e = 0x73;
      if (((local_228.Data <= (FScriptContainerElement *)&local_20e) &&
          ((FScriptContainerElement *)&local_20e < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (int)local_220;
      if ((int)local_220 == local_220._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar13 = iVar12 + 1;
      *(undefined2 *)(local_228.Data + (longlong)iVar12 * 2) = local_20e;
      local_20c = 0x9d;
      local_220._0_4_ = iVar13;
      if (((local_228.Data <= (FScriptContainerElement *)&local_20c) &&
          ((FScriptContainerElement *)&local_20c < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_20c;
      local_20a = 0x97;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_20a) &&
          ((FScriptContainerElement *)&local_20a < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_20a;
      local_208 = 0x10d;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_208) &&
          ((FScriptContainerElement *)&local_208 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_208;
      local_206 = 0x66;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_206) &&
          ((FScriptContainerElement *)&local_206 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_206;
      local_204 = 0x70;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_204) &&
          ((FScriptContainerElement *)&local_204 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_204;
      local_202 = 0x69;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_202) &&
          ((FScriptContainerElement *)&local_202 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_202;
      local_200 = 0x76;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_200) &&
          ((FScriptContainerElement *)&local_200 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_200;
      local_1fe = 0x74;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1fe) &&
          ((FScriptContainerElement *)&local_1fe < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1fe;
      local_1fc = 0x109;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1fc) &&
          ((FScriptContainerElement *)&local_1fc < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1fc;
      local_1fa = 0x10a;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1fa) &&
          ((FScriptContainerElement *)&local_1fa < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1fa;
      local_1f8 = 0x10b;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1f8) &&
          ((FScriptContainerElement *)&local_1f8 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1f8;
      local_1f6 = 0x10c;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1f6) &&
          ((FScriptContainerElement *)&local_1f6 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1f6;
      local_1f4 = 0x72;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1f4) &&
          ((FScriptContainerElement *)&local_1f4 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1f4;
      local_1f2 = 0x6a;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1f2) &&
          ((FScriptContainerElement *)&local_1f2 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1f2;
      local_1f0 = 0x6b;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1f0) &&
          ((FScriptContainerElement *)&local_1f0 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1f0;
      local_1ee = 0x71;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1ee) &&
          ((FScriptContainerElement *)&local_1ee < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1ee;
      local_1ec = 0x6e;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1ec) &&
          ((FScriptContainerElement *)&local_1ec < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1ec;
      local_1ea = 0xa0;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1ea) &&
          ((FScriptContainerElement *)&local_1ea < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (int)local_220;
      if ((int)local_220 == local_220._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      local_220 = CONCAT44(local_220._4_4_,iVar12 + 1);
      lVar20 = (longlong)iVar12;
      uVar10 = local_1ea;
      goto LAB_145ac3f1a;
    }
    ::FString::FString(&local_e8,L"ko");
    iVar12 = (param_2->Data).ArrayNum;
    if (iVar12 == local_e8.Data.ArrayNum) {
      if (iVar12 < 2) {
        bVar25 = true;
      }
      else {
        iVar12 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                            (wchar_t *)local_e8.Data.AllocatorInstance.Data);
        bVar25 = iVar12 == 0;
      }
    }
    else {
      bVar25 = iVar12 + local_e8.Data.ArrayNum == 1;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (bVar25) {
      local_1e8 = 0x24;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (int)local_220;
      if ((int)local_220 == local_220._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar13 = iVar12 + 1;
      *(undefined2 *)(local_228.Data + (longlong)iVar12 * 2) = local_1e8;
      local_1e6 = 0x86;
      local_220._0_4_ = iVar13;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1e6) &&
          ((FScriptContainerElement *)&local_1e6 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1e6;
      local_1e4 = 0x92;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1e4) &&
          ((FScriptContainerElement *)&local_1e4 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1e4;
      local_1e2 = 0x6d;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1e2) &&
          ((FScriptContainerElement *)&local_1e2 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1e2;
      local_1e0 = 0x91;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1e0) &&
          ((FScriptContainerElement *)&local_1e0 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (int)local_220;
      if ((int)local_220 == local_220._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      local_220 = CONCAT44(local_220._4_4_,iVar12 + 1);
      lVar20 = (longlong)iVar12;
      uVar10 = local_1e0;
      goto LAB_145ac3f1a;
    }
    ::FString::FString(&local_d8,L"zh-hans");
    iVar12 = (param_2->Data).ArrayNum;
    if (iVar12 == local_d8.Data.ArrayNum) {
      if (iVar12 < 2) {
        bVar25 = true;
      }
      else {
        iVar12 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                            (wchar_t *)local_d8.Data.AllocatorInstance.Data);
        bVar25 = iVar12 == 0;
      }
    }
    else {
      bVar25 = iVar12 + local_d8.Data.ArrayNum == 1;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar25) {
      local_1de = 0x73;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1de) &&
          ((FScriptContainerElement *)&local_1de < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (int)local_220;
      if ((int)local_220 == local_220._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar13 = iVar12 + 1;
      *(undefined2 *)(local_228.Data + (longlong)iVar12 * 2) = local_1de;
      local_1dc = 0x9d;
      local_220._0_4_ = iVar13;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1dc) &&
          ((FScriptContainerElement *)&local_1dc < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1dc;
      local_1da = 0x97;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1da) &&
          ((FScriptContainerElement *)&local_1da < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1da;
      local_1d8 = 0x10d;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1d8) &&
          ((FScriptContainerElement *)&local_1d8 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1d8;
      local_1d6 = 0x66;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1d6) &&
          ((FScriptContainerElement *)&local_1d6 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1d6;
      local_1d4 = 0x70;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1d4) &&
          ((FScriptContainerElement *)&local_1d4 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1d4;
      local_1d2 = 0x69;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1d2) &&
          ((FScriptContainerElement *)&local_1d2 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1d2;
      local_1d0 = 0x76;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1d0) &&
          ((FScriptContainerElement *)&local_1d0 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1d0;
      local_1ce = 0x74;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1ce) &&
          ((FScriptContainerElement *)&local_1ce < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1ce;
      local_1cc = 0x109;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1cc) &&
          ((FScriptContainerElement *)&local_1cc < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1cc;
      local_1ca = 0x10a;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1ca) &&
          ((FScriptContainerElement *)&local_1ca < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1ca;
      local_1c8 = 0x10b;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1c8;
      local_1c6 = 0x10c;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1c6) &&
          ((FScriptContainerElement *)&local_1c6 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1c6;
      local_1c4 = 0x72;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1c4) &&
          ((FScriptContainerElement *)&local_1c4 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (int)local_220;
      if ((int)local_220 == local_220._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      local_220 = CONCAT44(local_220._4_4_,iVar12 + 1);
      lVar20 = (longlong)iVar12;
      uVar10 = local_1c4;
      goto LAB_145ac3f1a;
    }
    ::FString::FString(&local_c8,L"zh-hant");
    iVar12 = (param_2->Data).ArrayNum;
    if (iVar12 == local_c8.Data.ArrayNum) {
      if (iVar12 < 2) {
        bVar25 = true;
      }
      else {
        iVar12 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                            (wchar_t *)local_c8.Data.AllocatorInstance.Data);
        bVar25 = iVar12 == 0;
      }
    }
    else {
      bVar25 = iVar12 + local_c8.Data.ArrayNum == 1;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (bVar25) {
      local_1c2 = 0x73;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1c2) &&
          ((FScriptContainerElement *)&local_1c2 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (int)local_220;
      if ((int)local_220 == local_220._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar13 = iVar12 + 1;
      *(undefined2 *)(local_228.Data + (longlong)iVar12 * 2) = local_1c2;
      local_1c0 = 0x9d;
      local_220._0_4_ = iVar13;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1c0) &&
          ((FScriptContainerElement *)&local_1c0 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1c0;
      local_1be = 0x97;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1be) &&
          ((FScriptContainerElement *)&local_1be < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1be;
      local_1bc = 0x10d;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1bc) &&
          ((FScriptContainerElement *)&local_1bc < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1bc;
      local_1ba = 0x66;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1ba) &&
          ((FScriptContainerElement *)&local_1ba < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1ba;
      local_1b8 = 0x70;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1b8) &&
          ((FScriptContainerElement *)&local_1b8 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1b8;
      local_1b6 = 0x69;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1b6) &&
          ((FScriptContainerElement *)&local_1b6 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1b6;
      local_1b4 = 0x76;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1b4) &&
          ((FScriptContainerElement *)&local_1b4 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1b4;
      local_1b2 = 0x74;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1b2) &&
          ((FScriptContainerElement *)&local_1b2 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1b2;
      local_1b0 = 0x109;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1b0) &&
          ((FScriptContainerElement *)&local_1b0 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1b0;
      local_1ae = 0x10a;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1ae) &&
          ((FScriptContainerElement *)&local_1ae < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1ae;
      local_1ac = 0x10b;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1ac) &&
          ((FScriptContainerElement *)&local_1ac < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1ac;
      local_1aa = 0x10c;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1aa) &&
          ((FScriptContainerElement *)&local_1aa < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((int)local_220 == local_220._4_4_) {
        local_220._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      iVar12 = (int)local_220 + 1;
      *(undefined2 *)(local_228.Data + (longlong)(int)local_220 * 2) = local_1aa;
      local_1a8 = 0x72;
      local_220._0_4_ = iVar12;
      if (((local_228.Data <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 < local_228.Data + (longlong)local_220._4_4_ * 2))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (int)local_220;
      if ((int)local_220 == local_220._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x202,&local_228,(int *)((longlong)&local_220 + 4));
      }
      local_220 = CONCAT44(local_220._4_4_,iVar12 + 1);
      lVar20 = (longlong)iVar12;
      uVar10 = local_1a8;
      goto LAB_145ac3f1a;
    }
  }
  pwVar23 = L"";
  if ((*pFVar1 == (FName)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar24 = *pFVar1;
  if ((FVar24 == (FName)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar6 = *pFVar1;
  uVar11 = *(uint *)((longlong)FVar6 + 0x40);
  if (uVar11 == *(uint *)((longlong)FVar6 + 0x44)) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)((longlong)FVar6 + 0x38),
                        (int *)((longlong)FVar6 + 0x44));
  }
  *(uint *)((longlong)FVar6 + 0x40) = uVar11 + 1;
  DefaultConstructItems<FCompositeSubFont,int>
            ((void *)(*(longlong *)((longlong)FVar6 + 0x38) + (longlong)(int)uVar11 * 0x38),1);
  uVar22 = 0;
  if ((int)uVar11 < *(int *)((longlong)FVar24 + 0x40)) {
    uVar22 = ~uVar11 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar15 = (ForAnyElementType *)
            (*(longlong *)((longlong)FVar24 + 0x38) + (longlong)(int)uVar11 * 0x38);
  iVar12 = (local_res18->Data).ArrayNum;
  uVar11 = iVar12 - 1;
  if (iVar12 == 0) {
    uVar11 = 0;
  }
  ::FString::AppendChars
            ((FString *)(pFVar15 + 5),(wchar_t *)(local_res18->Data).AllocatorInstance.Data,uVar11);
  iVar12 = (int)local_220;
  uVar17 = (ulonglong)(int)local_220;
  pFVar5 = local_228.Data + uVar17 * 2;
  FVar21.Data = local_228.Data;
  while( true ) {
    if ((int)uVar17 != iVar12) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<enum_EUnicodeBlockRange,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    _Src.Data = local_190.Data;
    if (FVar21.Data == pFVar5) break;
    pFVar16 = FUnicodeBlockRange::GetUnicodeBlockRange(&local_88,*(EUnicodeBlockRange *)FVar21.Data)
    ;
    local_128 = CONCAT31(local_128._1_3_,1);
    local_120 = CONCAT31(local_120._1_3_,1);
    uVar3 = pFVar16->RangeLower;
    uVar4 = pFVar16->RangeUpper;
    local_68 = *(undefined8 *)pFVar16;
    pwStack_60 = pFVar16->DisplayNameKey;
    local_160 = local_128;
    uStack_158 = local_120;
    uStack_15c = uVar3;
    uStack_154 = uVar4;
    if (((pFVar15[3].Data <= (FScriptContainerElement *)&local_160) &&
        ((FScriptContainerElement *)&local_160 <
         pFVar15[3].Data + (longlong)*(int *)((longlong)&pFVar15[4].Data + 4) * 0x10)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar13 = *(int *)&pFVar15[4].Data;
    piVar2 = (int *)((longlong)&pFVar15[4].Data + 4);
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,pFVar15 + 3,piVar2);
    }
    *(int *)&pFVar15[4].Data = iVar13 + 1;
    pFVar7 = pFVar15[3].Data;
    FVar21.Data = FVar21.Data + 2;
    *(ulonglong *)(pFVar7 + (longlong)iVar13 * 0x10) = CONCAT44(uStack_15c,local_160);
    *(ulonglong *)(pFVar7 + (longlong)iVar13 * 0x10 + 8) = CONCAT44(uStack_154,uStack_158);
    uVar17 = local_220 & 0xffffffff;
  }
  lVar20 = (longlong)local_188;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = CONCAT44(local_198._4_4_,local_188);
  if (local_188 == 0) {
    local_198 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_188,0,&local_1a0,local_188,(int *)((longlong)&local_198 + 4));
    memcpy(local_1a0.Data,_Src.Data,lVar20 * 2);
  }
  if ((local_res10->Data).ArrayNum != 0) {
    pwVar23 = (wchar_t *)(local_res10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_118,pwVar23);
  iVar12 = *(int *)&pFVar15[1].Data;
  piVar2 = (int *)((longlong)&pFVar15[1].Data + 4);
  if (iVar12 == *piVar2) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,pFVar15,piVar2);
  }
  local_b8.Data.AllocatorInstance.Data = local_1a0.Data;
  local_b8.Data.ArrayMax = local_198._4_4_;
  pFVar5 = pFVar15->Data;
  *(int *)&pFVar15[1].Data = iVar12 + 1;
  local_b8.Data.ArrayNum = (int)local_198;
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 0;
  *(FName *)(pFVar5 + (longlong)iVar12 * 0x30) = local_118;
  FFontData::FFontData
            ((FFontData *)(pFVar5 + (longlong)iVar12 * 0x30 + 8),&local_b8,Default,LazyLoad,0);
  if (local_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data);
  }
  if (local_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data);
  }
LAB_145ac424d:
  if (local_190.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data);
  }
  return;
}

// BuildSystemFontFile @ 145ac4280

bool __thiscall
FPreLoadSettingsContainerBase::BuildSystemFontFile(FPreLoadSettingsContainerBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  IFileManager *pIVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  undefined1 local_res8 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<unsigned_char_const_,__int64> local_38;
  void *local_28 [2];
  
  if (this->HasCreatedSystemFontFile == false) {
    FGenericPlatformMisc::GetSystemFontBytes(&local_48);
    if (0 < local_48.ArrayNum) {
      pIVar4 = IFileManager::Get();
      puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x60))(this,local_28);
      local_38.DataPtr = (uchar *)local_48.AllocatorInstance.Data;
      if (*(int *)(puVar5 + 1) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)*puVar5;
      }
      if (local_48.ArrayNum < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_38.ArrayNum = (longlong)local_48.ArrayNum;
      bVar2 = FFileHelper::SaveArrayToFile(&local_38,pwVar6,pIVar4,0);
      this->HasCreatedSystemFontFile = bVar2;
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  if (this->HasCreatedSystemFontFile == false) {
    `FPreLoadSettingsContainerBase::BuildSystemFontFile'::__l2::<lambda_1>::operator()(local_res8);
  }
  return this->HasCreatedSystemFontFile;
}

// ConvertIfPluginRelativeContentPath @ 145ac5fd0

FString * __thiscall
FPreLoadSettingsContainerBase::ConvertIfPluginRelativeContentPath
          (FPreLoadSettingsContainerBase *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString *local_res10 [3];
  FString local_18;
  
  ::FString::TrimStartAndEnd(param_1,__return_storage_ptr__);
  bVar2 = FPaths::FileExists(__return_storage_ptr__);
  if (!bVar2) {
    pFVar3 = ::operator/(&local_18,&this->PluginContentDir,__return_storage_ptr__);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  bVar2 = FPaths::FileExists(__return_storage_ptr__);
  if (!bVar2) {
    local_res10[0] = __return_storage_ptr__;
    `FPreLoadSettingsContainerBase::ConvertIfPluginRelativeContentPath'::__l2::<lambda_1>::
    operator()(local_res10);
  }
  return __return_storage_ptr__;
}

// CreateCustomSlateImageBrush @ 145ac6dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPreLoadSettingsContainerBase::CreateCustomSlateImageBrush
          (FPreLoadSettingsContainerBase *this,FString *param_1,FString *param_2,
          TVector2<double> *param_3)

{
  TMap<FName,FSlateDynamicImageBrush_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>_>
  *this_00;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  FName FVar4;
  uint uVar5;
  FSlateDynamicImageBrush *pFVar6;
  FName *pFVar7;
  FSlateApplication *pFVar8;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  int iVar12;
  FName local_res8;
  FName local_68;
  float local_60;
  float local_5c;
  FSlateDynamicImageBrush *local_58;
  FName local_50;
  FName *local_48;
  FSlateDynamicImageBrush **local_40;
  FLinearColor_u_0 local_38;
  
  this_00 = &this->BrushResources;
  if (this->bShouldLoadBrushes == false) {
    pFVar6 = ::operator_new(0xd0);
    if (pFVar6 == (FSlateDynamicImageBrush *)0x0) {
      local_58 = (FSlateDynamicImageBrush *)0x0;
    }
    else {
      local_38._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
      local_38._8_8_ = _UNK_15076b1f8;
      local_60 = (float)(param_3->field0_0x0)._s_0.X;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_5c = (float)(param_3->field0_0x0)._s_0.Y;
      local_58 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                           (pFVar6,(FName)0x0,(FDeprecateVector2DParameter *)&local_60,
                            (FLinearColor *)&local_38._s_0,NoTile,FullColor);
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_68,pwVar11);
    FVar4 = local_68;
    uVar5 = ::GetTypeHash(local_68.ComparisonIndex.Value);
    uVar5 = uVar5 + FVar4.Number;
    if (*(int *)&(this->BrushResources).field_0x8 != *(int *)&(this->BrushResources).field_0x34) {
      puVar10 = *(undefined1 **)&(this->BrushResources).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->BrushResources).field_0x38;
      }
      iVar12 = *(int *)(puVar10 +
                       (ulonglong)(*(int *)&(this->BrushResources).field_0x48 - 1U & uVar5) * 4);
      if (iVar12 != -1) {
        do {
          lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18;
          if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18) == local_68) {
            if (lVar1 != 0) {
              return;
            }
            break;
          }
          iVar12 = *(int *)(lVar1 + 0x10);
        } while (iVar12 != -1);
      }
    }
    local_48 = &local_68;
    local_40 = &local_58;
    TSet<TTuple<FName,FSlateDynamicImageBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FName_&&,FSlateDynamicImageBrush_*_&&>_>
              ((TSet<TTuple<FName,FSlateDynamicImageBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>,FDefaultSetAllocator>
                *)this_00,(uint)&local_res8,
               (TPairInitializer<FName_&&,FSlateDynamicImageBrush_*_&&> *)(ulonglong)uVar5,
               (bool *)&local_48);
  }
  else {
    pFVar6 = ::operator_new(0xd0);
    pwVar11 = L"";
    if (pFVar6 == (FSlateDynamicImageBrush *)0x0) {
      local_58 = (FSlateDynamicImageBrush *)0x0;
    }
    else {
      local_38._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
      local_38._8_8_ = _UNK_15076b1f8;
      local_60 = (float)(param_3->field0_0x0)._s_0.X;
      local_5c = (float)(param_3->field0_0x0)._s_0.Y;
      if ((param_2->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      pFVar7 = ::FName::FName(&local_50,pwVar9);
      local_58 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                           (pFVar6,*pFVar7,(FDeprecateVector2DParameter *)&local_60,
                            (FLinearColor *)&local_38._s_0,NoTile,FullColor);
    }
    if ((param_1->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_68,pwVar9);
    FVar4 = local_68;
    uVar5 = ::GetTypeHash(local_68.ComparisonIndex.Value);
    uVar5 = uVar5 + FVar4.Number;
    if (*(int *)&(this->BrushResources).field_0x8 != *(int *)&(this->BrushResources).field_0x34) {
      puVar10 = *(undefined1 **)&(this->BrushResources).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->BrushResources).field_0x38;
      }
      iVar12 = *(int *)(puVar10 +
                       (ulonglong)(*(int *)&(this->BrushResources).field_0x48 - 1U & uVar5) * 4);
      if (iVar12 != -1) {
        do {
          lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18;
          if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18) == local_68) {
            if (lVar1 != 0) goto LAB_145ac6f3a;
            break;
          }
          iVar12 = *(int *)(lVar1 + 0x10);
        } while (iVar12 != -1);
      }
    }
    local_48 = &local_68;
    local_40 = &local_58;
    TSet<TTuple<FName,FSlateDynamicImageBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FName_&&,FSlateDynamicImageBrush_*_&&>_>
              ((TSet<TTuple<FName,FSlateDynamicImageBrush_*>,TDefaultMapHashableKeyFuncs<FName,FSlateDynamicImageBrush_*,0>,FDefaultSetAllocator>
                *)this_00,(uint)&local_res8,
               (TPairInitializer<FName_&&,FSlateDynamicImageBrush_*_&&> *)(ulonglong)uVar5,
               (bool *)&local_48);
LAB_145ac6f3a:
    pFVar8 = FSlateApplication::Get();
    plVar2 = *(longlong **)&pFVar8->field_0x60;
    pcVar3 = *(code **)(*plVar2 + 0x78);
    if ((param_2->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    pFVar7 = ::FName::FName(&local_res8,pwVar11);
    (*pcVar3)(plVar2,&local_50,*pFVar7);
  }
  return;
}

// Get @ 145ac8fe0

FPreLoadSettingsContainerBase * __cdecl FPreLoadSettingsContainerBase::Get(void)

{
  FPreLoadSettingsContainerBase *pFVar1;
  
  if (Instance == (FPreLoadSettingsContainerBase *)0x0) {
    pFVar1 = ::operator_new(0x238);
    if (pFVar1 != (FPreLoadSettingsContainerBase *)0x0) {
      pFVar1->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
      *(undefined2 *)&pFVar1->_padding_ = 0;
      pFVar1->_padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::RegisterGCObject((FGCObject *)&pFVar1->_padding_);
      pFVar1->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
      pFVar1->_padding_ = (longlong)&_vftable__for__FGCObject__;
      (pFVar1->ParsedLoadingGroupIdentifiers).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar1->ParsedLoadingGroupIdentifiers).ArrayNum = 0;
      (pFVar1->ParsedLoadingGroupIdentifiers).ArrayMax = 0;
      *(undefined8 *)&pFVar1->BrushResources = 0;
      *(undefined8 *)&(pFVar1->BrushResources).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->BrushResources).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->BrushResources).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->BrushResources).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->BrushResources).field_0x34 = 0;
      *(undefined4 *)&(pFVar1->BrushResources).field_0x30 = 0xffffffff;
      *(undefined8 *)&(pFVar1->BrushResources).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->BrushResources).field_0x48 = 0;
      *(undefined8 *)&pFVar1->LocalizedTextResources = 0;
      *(undefined8 *)&(pFVar1->LocalizedTextResources).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->LocalizedTextResources).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->LocalizedTextResources).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->LocalizedTextResources).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->LocalizedTextResources).field_0x34 = 0;
      *(undefined4 *)&(pFVar1->LocalizedTextResources).field_0x30 = 0xffffffff;
      *(undefined8 *)&(pFVar1->LocalizedTextResources).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->LocalizedTextResources).field_0x48 = 0;
      *(undefined8 *)&pFVar1->FontResources = 0;
      *(undefined8 *)&(pFVar1->FontResources).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->FontResources).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->FontResources).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->FontResources).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->FontResources).field_0x34 = 0;
      *(undefined4 *)&(pFVar1->FontResources).field_0x30 = 0xffffffff;
      *(undefined8 *)&(pFVar1->FontResources).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->FontResources).field_0x48 = 0;
      *(undefined8 *)&pFVar1->ScreenOrderByLoadingGroups = 0;
      *(undefined8 *)&(pFVar1->ScreenOrderByLoadingGroups).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ScreenOrderByLoadingGroups).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ScreenOrderByLoadingGroups).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ScreenOrderByLoadingGroups).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ScreenOrderByLoadingGroups).field_0x34 = 0;
      *(undefined4 *)&(pFVar1->ScreenOrderByLoadingGroups).field_0x30 = 0xffffffff;
      *(undefined8 *)&(pFVar1->ScreenOrderByLoadingGroups).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->ScreenOrderByLoadingGroups).field_0x48 = 0;
      *(undefined8 *)&pFVar1->ScreenGroupings = 0;
      *(undefined8 *)&(pFVar1->ScreenGroupings).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->ScreenGroupings).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->ScreenGroupings).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->ScreenGroupings).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->ScreenGroupings).field_0x34 = 0;
      *(undefined4 *)&(pFVar1->ScreenGroupings).field_0x30 = 0xffffffff;
      *(undefined8 *)&(pFVar1->ScreenGroupings).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->ScreenGroupings).field_0x48 = 0;
      *(undefined8 *)&pFVar1->BrushLoadingGroups = 0;
      *(undefined8 *)&(pFVar1->BrushLoadingGroups).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->BrushLoadingGroups).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->BrushLoadingGroups).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->BrushLoadingGroups).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->BrushLoadingGroups).field_0x34 = 0;
      *(undefined4 *)&(pFVar1->BrushLoadingGroups).field_0x30 = 0xffffffff;
      *(undefined8 *)&(pFVar1->BrushLoadingGroups).field_0x40 = 0;
      *(undefined4 *)&(pFVar1->BrushLoadingGroups).field_0x48 = 0;
      (pFVar1->PluginContentDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar1->PluginContentDir).Data.ArrayNum = 0;
      (pFVar1->PluginContentDir).Data.ArrayMax = 0;
      (pFVar1->CurrentLoadGroup).ComparisonIndex = 0;
      (pFVar1->CurrentLoadGroup).Number = 0;
      pFVar1->HasCreatedSystemFontFile = false;
      pFVar1->bShouldLoadBrushes = true;
      Instance = pFVar1;
      return pFVar1;
    }
    Instance = (FPreLoadSettingsContainerBase *)0x0;
  }
  return Instance;
}

// GetBrush @ 145ac93e0

FSlateDynamicImageBrush * __thiscall
FPreLoadSettingsContainerBase::GetBrush(FPreLoadSettingsContainerBase *this,FString *param_1)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined1 *puVar8;
  FName local_res8;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_res8,pwVar7);
  FVar2 = *pFVar5;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->BrushResources).field_0x8 != *(int *)&(this->BrushResources).field_0x34) {
    puVar8 = *(undefined1 **)&(this->BrushResources).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->BrushResources).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->BrushResources).field_0x48 - 1U &
                              FVar2.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->BrushResources + (longlong)iVar4 * 0x18;
        if (*(FName *)(*(longlong *)&this->BrushResources + (longlong)iVar4 * 0x18) == FVar2) {
          puVar6 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar6 = (undefined8 *)0x0;
          }
          if (puVar6 == (undefined8 *)0x0) {
            return (FSlateDynamicImageBrush *)0x0;
          }
          return (FSlateDynamicImageBrush *)*puVar6;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FSlateDynamicImageBrush *)0x0;
}

// GetFont @ 145ac9850

TSharedPtr<FCompositeFont,1> * __thiscall
FPreLoadSettingsContainerBase::GetFont
          (FPreLoadSettingsContainerBase *this,TSharedPtr<FCompositeFont,1> *__return_storage_ptr__,
          FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  FName *pFVar3;
  FName FVar4;
  FName FVar5;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  FName FVar8;
  FName local_res8;
  
  FVar8.ComparisonIndex.Value = 0;
  FVar8.Number = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res8,pwVar6);
  FVar4 = *pFVar3;
  uVar2 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
  if (*(int *)&(this->FontResources).field_0x8 != *(int *)&(this->FontResources).field_0x34) {
    puVar7 = *(undefined1 **)&(this->FontResources).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->FontResources).field_0x38;
    }
    uVar2 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->FontResources).field_0x48 - 1U &
                               FVar4.Number + uVar2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar3 = (FName *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&this->FontResources);
        if (*pFVar3 == FVar4) {
          FVar4 = (FName)(pFVar3 + 1);
          if (pFVar3 == (FName *)0x0) {
            FVar4 = FVar8;
          }
          if (FVar4 != (FName)0x0) {
            FVar5 = *(FName *)((longlong)FVar4 + 8);
            lVar1 = *(longlong *)FVar4;
            if (FVar5 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)FVar5 + 8) = *(int *)((longlong)FVar5 + 8) + 1;
              UNLOCK();
            }
            FVar4 = (FName)(lVar1 + 0x10);
            if (lVar1 == 0) {
              FVar4 = FVar8;
            }
            __return_storage_ptr__->Object = (FCompositeFont *)FVar4;
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
                 (TReferenceControllerBase<1> *)FVar5;
            if (FVar5 != (FName)0x0) {
              LOCK();
              *(int *)((longlong)FVar5 + 8) = *(int *)((longlong)FVar5 + 8) + 1;
              UNLOCK();
            }
            goto LAB_145ac9901;
          }
          break;
        }
        uVar2 = pFVar3[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  __return_storage_ptr__->Object = (FCompositeFont *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FVar5 = FVar8;
LAB_145ac9901:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar5);
  return __return_storage_ptr__;
}

// GetLocalizedText @ 145ac9a40

FText * __thiscall
FPreLoadSettingsContainerBase::GetLocalizedText
          (FPreLoadSettingsContainerBase *this,FText *__return_storage_ptr__,FString *param_1)

{
  FName FVar1;
  ITextData *pIVar2;
  uint uVar3;
  FName *pFVar4;
  FText *pFVar5;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  undefined1 local_res8 [8];
  FName local_res10;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName(&local_res10,pwVar6);
  FVar1 = *pFVar4;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->LocalizedTextResources).field_0x8 !=
      *(int *)&(this->LocalizedTextResources).field_0x34) {
    puVar7 = *(undefined1 **)&(this->LocalizedTextResources).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->LocalizedTextResources).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->LocalizedTextResources).field_0x48 - 1U &
                               FVar1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->LocalizedTextResources)
        ;
        if (*pFVar4 == FVar1) {
          pFVar5 = (FText *)(pFVar4 + 1);
          if (pFVar4 == (FName *)0x0) {
            pFVar5 = (FText *)0x0;
          }
          if (pFVar5 != (FText *)0x0) goto LAB_145ac9b01;
          break;
        }
        uVar3 = pFVar4[3].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  pFVar5 = FText::GetEmpty();
LAB_145ac9b01:
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetReferencerName @ 145ac9cf0

FString * __thiscall
FPreLoadSettingsContainerBase::GetReferencerName
          (FPreLoadSettingsContainerBase *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FPreLoadSettingsContainerBase");
  return __return_storage_ptr__;
}

// GetScreenAtIndex @ 145ac9db0

FScreenGroupingBase * __thiscall
FPreLoadSettingsContainerBase::GetScreenAtIndex(FPreLoadSettingsContainerBase *this,int param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  FScreenOrderByLoadingGroup *pFVar5;
  FScreenGroupingBase *pFVar6;
  
  cVar2 = (**(code **)(this->_padding_ + 0x30))(this,param_1);
  if (cVar2 == '\0') {
    return (FScreenGroupingBase *)0x0;
  }
  pFVar5 = TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
           ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
                   *)&this->ScreenOrderByLoadingGroups,this->CurrentLoadGroup);
  uVar4 = 0;
  if (param_1 < (pFVar5->ScreenGroupings).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FScreenGroupingBase *)(*pcVar1)();
      return pFVar6;
    }
  }
  pFVar6 = TMapBase<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
           ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
                   *)&this->ScreenGroupings,
                  *(FName *)((pFVar5->ScreenGroupings).AllocatorInstance.Data +
                            (longlong)param_1 * 8));
  return pFVar6;
}

// GetScreenGrouping @ 145ac9e70

FScreenGroupingBase * __thiscall
FPreLoadSettingsContainerBase::GetScreenGrouping
          (FPreLoadSettingsContainerBase *this,FString *param_1)

{
  FName *pFVar1;
  FScreenGroupingBase *pFVar2;
  wchar_t *pwVar3;
  FName local_res8 [4];
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FName::FName(local_res8,pwVar3);
  pFVar2 = TMapBase<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
           ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
                   *)&this->ScreenGroupings,*pFVar1);
  return pFVar2;
}

// GetSystemFontFilePath @ 145aca3f0

FString * __thiscall
FPreLoadSettingsContainerBase::GetSystemFontFilePath
          (FPreLoadSettingsContainerBase *this,FString *__return_storage_ptr__)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_18;
  
  pTVar1 = &FPaths::EngineIntermediateDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,pTVar1,0x17 - (uint)(pTVar1->ArrayNum != 0));
  ::FString::PathAppend(__return_storage_ptr__,L"DefaultSystemFont.ttf",0x15);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IsValidBrushConfig @ 145acca00

bool __thiscall
FPreLoadSettingsContainerBase::IsValidBrushConfig
          (FPreLoadSettingsContainerBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return param_1->ArrayNum == 4;
}

// IsValidFontConfigString @ 145acca10

bool __thiscall
FPreLoadSettingsContainerBase::IsValidFontConfigString
          (FPreLoadSettingsContainerBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return param_1->ArrayNum == 3;
}

// IsValidLocalizedTextConfigString @ 145acca20

bool __thiscall
FPreLoadSettingsContainerBase::IsValidLocalizedTextConfigString
          (FPreLoadSettingsContainerBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return param_1->ArrayNum == 4;
}

// IsValidScreenGrooupingConfigString @ 145acca30

bool __thiscall
FPreLoadSettingsContainerBase::IsValidScreenGrooupingConfigString
          (FPreLoadSettingsContainerBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return param_1->ArrayNum == 4;
}

// IsValidScreenIndex @ 145acca40

bool __thiscall
FPreLoadSettingsContainerBase::IsValidScreenIndex(FPreLoadSettingsContainerBase *this,int param_1)

{
  bool bVar1;
  FScreenOrderByLoadingGroup *pFVar2;
  
  if (this->CurrentLoadGroup != (FName)0x0) {
    bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->CurrentLoadGroup).ComparisonIndex.Value);
    if (bVar1) {
      pFVar2 = TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
               ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
                       *)&this->ScreenOrderByLoadingGroups,this->CurrentLoadGroup);
      if (pFVar2 != (FScreenOrderByLoadingGroup *)0x0) {
        pFVar2 = TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
                 ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
                         *)&this->ScreenOrderByLoadingGroups,this->CurrentLoadGroup);
        if ((-1 < param_1) && (param_1 < (pFVar2->ScreenGroupings).ArrayNum)) {
          return true;
        }
      }
    }
  }
  return false;
}

// LoadGrouping @ 145accad0

void __thiscall
FPreLoadSettingsContainerBase::LoadGrouping(FPreLoadSettingsContainerBase *this,FName param_1)

{
  int iVar1;
  bool bVar2;
  FString *pFVar3;
  FName *pFVar4;
  FCustomBrushLoadingGroup *pFVar5;
  wchar_t *pwVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FName *local_res8;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_38);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName(local_res18,pwVar6);
  pFVar5 = TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
           ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
                   *)&this->BrushLoadingGroups,*pFVar4);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (pFVar5 == (FCustomBrushLoadingGroup *)0x0) {
    local_res8 = &local_res10;
    bVar2 = `FPreLoadSettingsContainerBase::LoadGrouping'::__l3::<lambda_1>::operator()(&local_res8)
    ;
    if (!bVar2) {
      return;
    }
  }
  this->CurrentLoadGroup = local_res10;
  pFVar7 = (pFVar5->CustomBrushDefinesToLoad).AllocatorInstance.Data;
  iVar1 = (pFVar5->CustomBrushDefinesToLoad).ArrayNum;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((pFVar5->CustomBrushDefinesToLoad).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPreLoadSettingsContainerBase::FCustomBrushDefine,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar7 == pFVar8) break;
    (**(code **)(this->_padding_ + 0x38))(this,pFVar7,pFVar7 + 0x10,pFVar7 + 0x20);
    pFVar7 = pFVar7 + 0x30;
  }
  return;
}

// ParseAllScreenOrderEntries @ 145accc70

void __thiscall
FPreLoadSettingsContainerBase::ParseAllScreenOrderEntries
          (FPreLoadSettingsContainerBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [16];
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(this->_padding_ + 0x98))(this,pFVar2);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// ParseBrushConfigEntry @ 145acccf0

void __thiscall
FPreLoadSettingsContainerBase::ParseBrushConfigEntry
          (FPreLoadSettingsContainerBase *this,FString *param_1)

{
  void *pvVar1;
  FName FVar2;
  undefined1 *puVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  FName *pFVar13;
  wchar_t *pwVar14;
  undefined1 *puVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FString *this_00;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  int iVar20;
  FName *pFVar21;
  double dVar22;
  double dVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_178 [8];
  ForAnyElementType local_170;
  undefined8 local_168;
  FString local_160;
  TArray<FString,TSizedDefaultAllocator<32>_> local_150;
  FString local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_130;
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  FString local_110;
  FString local_100;
  undefined1 local_f0 [16];
  FString *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  void *local_98;
  int local_90;
  FScriptContainerElement *local_88;
  FString *local_80;
  FName local_78 [7];
  
  if ((param_1->Data).ArrayNum < 2) {
    local_res18[0] = 0;
    bVar7 = `FPreLoadSettingsContainerBase::ParseBrushConfigEntry'::__l3::<lambda_1>::operator()
                      (local_res18);
    if (!bVar7) {
      return;
    }
  }
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_130,L"(",true);
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  if ((local_130.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ::FString::ParseIntoArray((FString *)local_130.AllocatorInstance.Data,&local_150,L",",true);
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  if (local_130.ArrayNum == 1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_170,(int *)((longlong)&local_168 + 4));
    pFVar18 = local_170.Data + (longlong)iVar9 * 0x10;
    local_168 = CONCAT44(local_168._4_4_,iVar9 + 1);
    *(FScriptContainerElement **)pFVar18 = (FScriptContainerElement *)0x0;
    iVar9 = DefaultInitialLoadingGroupIdentifier.Data.ArrayNum;
    FVar19 = DefaultInitialLoadingGroupIdentifier.Data.AllocatorInstance;
    lVar16 = (longlong)DefaultInitialLoadingGroupIdentifier.Data.ArrayNum;
    *(int *)(pFVar18 + 8) = DefaultInitialLoadingGroupIdentifier.Data.ArrayNum;
    if (iVar9 == 0) {
      *(int *)(pFVar18 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,(ForAnyElementType *)pFVar18,iVar9,(int *)(pFVar18 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar18,FVar19.Data,lVar16 * 2);
    }
LAB_145acd14b:
    if (((int)local_168 < 1) ||
       (cVar8 = (**(code **)(this->_padding_ + 0xb8))(this,&local_150), cVar8 == '\0'))
    goto LAB_145acd168;
  }
  else {
    if (local_130.ArrayNum == 2) {
      local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.ArrayNum = 0;
      local_120.ArrayMax = 0;
      ::FString::ParseIntoArray
                ((FString *)(local_130.AllocatorInstance.Data + 0x10),&local_120,L",",true);
      iVar9 = local_120.ArrayNum;
      pFVar18 = local_120.AllocatorInstance.Data + (longlong)local_120.ArrayNum * 0x10;
      FVar19.Data = local_120.AllocatorInstance.Data;
      while( true ) {
        if (local_120.ArrayNum != iVar9) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar19.Data == pFVar18) break;
        local_160.Data.ArrayNum = *(int *)(FVar19.Data + 8);
        lVar16 = (longlong)local_160.Data.ArrayNum;
        pvVar1 = *(void **)FVar19.Data;
        local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar10 = 0;
        if (local_160.Data.ArrayNum == 0) {
          local_160.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_160.Data.ArrayNum,0,(ForAnyElementType *)&local_160,
                     local_160.Data.ArrayNum,&local_160.Data.ArrayMax);
          memcpy(local_160.Data.AllocatorInstance.Data,pvVar1,lVar16 * 2);
        }
        ::FString::TrimStartAndEndInline(&local_160);
        ::FString::FString(&local_d8,"(");
        iVar20 = local_d8.Data.ArrayNum + -1;
        FVar5.Data = local_d8.Data.AllocatorInstance.Data;
        if (local_d8.Data.ArrayNum == 0) {
          iVar20 = iVar10;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        ::FString::RemoveFromStart(&local_160,(wchar_t *)FVar5.Data,iVar20,IgnoreCase);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_c8,")");
        iVar20 = local_c8.Data.ArrayNum + -1;
        FVar5.Data = local_c8.Data.AllocatorInstance.Data;
        if (local_c8.Data.ArrayNum == 0) {
          iVar20 = iVar10;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        ::FString::RemoveFromEnd(&local_160,(wchar_t *)FVar5.Data,iVar20,IgnoreCase);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_b8,")");
        iVar20 = local_b8.Data.ArrayNum + -1;
        FVar5.Data = local_b8.Data.AllocatorInstance.Data;
        if (local_b8.Data.ArrayNum == 0) {
          iVar20 = iVar10;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        ::FString::RemoveFromEnd(&local_160,(wchar_t *)FVar5.Data,iVar20,IgnoreCase);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (((local_170.Data <= (FScriptContainerElement *)&local_160) &&
            ((FScriptContainerElement *)&local_160 <
             local_170.Data + (longlong)local_168._4_4_ * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (int)local_168;
        if ((int)local_168 == local_168._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_170,(int *)((longlong)&local_168 + 4));
        }
        FVar5.Data = local_160.Data.AllocatorInstance.Data;
        pFVar17 = local_170.Data + (longlong)iVar10 * 0x10;
        local_168 = CONCAT44(local_168._4_4_,iVar10 + 1);
        *(FScriptContainerElement **)pFVar17 = (FScriptContainerElement *)0x0;
        lVar16 = (longlong)local_160.Data.ArrayNum;
        *(int *)(pFVar17 + 8) = local_160.Data.ArrayNum;
        if (local_160.Data.ArrayNum == 0) {
          *(int *)(pFVar17 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_160.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,
                     local_160.Data.ArrayNum,(int *)(pFVar17 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar17,FVar5.Data,lVar16 * 2);
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        FVar19.Data = FVar19.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      goto LAB_145acd14b;
    }
LAB_145acd168:
    local_e0 = param_1;
    bVar7 = `FPreLoadSettingsContainerBase::ParseBrushConfigEntry'::__l17::<lambda_2>::operator()
                      (&local_e0);
    if (!bVar7) goto LAB_145acd640;
  }
  pFVar21 = (FName *)0x0;
  if ((local_150.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.Data.ArrayNum = *(int *)(local_150.AllocatorInstance.Data + 8);
  lVar16 = (longlong)local_140.Data.ArrayNum;
  pvVar1 = *(void **)local_150.AllocatorInstance.Data;
  if (local_140.Data.ArrayNum == 0) {
    local_140.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)&local_140,local_140.Data.ArrayNum
               ,&local_140.Data.ArrayMax);
    memcpy(local_140.Data.AllocatorInstance.Data,pvVar1,lVar16 * 2);
  }
  ::FString::TrimStartAndEndInline(&local_140);
  ::FString::FString(&local_a8,"(");
  iVar9 = local_a8.Data.ArrayNum + -1;
  FVar19.Data = local_a8.Data.AllocatorInstance.Data;
  if (local_a8.Data.ArrayNum == 0) {
    iVar9 = 0;
    FVar19.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromStart(&local_140,(wchar_t *)FVar19.Data,iVar9,IgnoreCase);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pcVar4 = *(code **)(this->_padding_ + 0xb0);
  if ((local_150.ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*pcVar4)(this,&local_98,local_150.AllocatorInstance.Data + 0x10);
  if ((local_150.ArrayNum < 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(int *)(local_150.AllocatorInstance.Data + 0x28) == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = *(wchar_t **)(local_150.AllocatorInstance.Data + 0x20);
  }
  dVar22 = _wtof(pwVar14);
  if ((local_150.ArrayNum < 4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(int *)(local_150.AllocatorInstance.Data + 0x38) == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = *(wchar_t **)(local_150.AllocatorInstance.Data + 0x30);
  }
  dVar23 = _wtof(pwVar14);
  FVar19.Data = local_140.Data.AllocatorInstance.Data;
  lVar16 = (longlong)local_140.Data.ArrayNum;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Data.ArrayNum = local_140.Data.ArrayNum;
  if (local_140.Data.ArrayNum == 0) {
    local_110.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_140.Data.ArrayNum,0,(ForAnyElementType *)&local_110,local_140.Data.ArrayNum
               ,&local_110.Data.ArrayMax);
    memcpy(local_110.Data.AllocatorInstance.Data,FVar19.Data,lVar16 * 2);
  }
  pvVar1 = local_98;
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.Data.ArrayNum = local_90;
  if (local_90 == 0) {
    local_100.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,(ForAnyElementType *)&local_100,local_90,&local_100.Data.ArrayMax);
    memcpy(local_100.Data.AllocatorInstance.Data,pvVar1,(longlong)local_90 * 2);
  }
  iVar9 = (int)local_168;
  local_f0._8_4_ = SUB84((double)(float)dVar23,0);
  local_f0._0_8_ = (double)(float)dVar22;
  local_f0._12_4_ = (int)((ulonglong)(double)(float)dVar23 >> 0x20);
  pFVar18 = local_170.Data + (longlong)(int)local_168 * 0x10;
  FVar19.Data = local_170.Data;
  while( true ) {
    if ((int)local_168 != iVar9) {
      local_178[0] = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (FVar19.Data == pFVar18) break;
    if (*(int *)(FVar19.Data + 8) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)FVar19.Data;
    }
    pFVar12 = ::FName::FName(local_78,pwVar14);
    FVar2 = *pFVar12;
    uVar11 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    pFVar12 = pFVar21;
    if (*(int *)&(this->BrushLoadingGroups).field_0x8 !=
        *(int *)&(this->BrushLoadingGroups).field_0x34) {
      puVar3 = *(undefined1 **)&(this->BrushLoadingGroups).field_0x40;
      puVar15 = &(this->BrushLoadingGroups).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar15 = puVar3;
      }
      uVar11 = *(uint *)(puVar15 +
                        (ulonglong)
                        (*(int *)&(this->BrushLoadingGroups).field_0x48 - 1U & FVar2.Number + uVar11
                        ) * 4);
      if (uVar11 != 0xffffffff) {
        do {
          pFVar13 = (FName *)((longlong)(int)uVar11 * 0x20 + *(longlong *)&this->BrushLoadingGroups)
          ;
          if (*pFVar13 == FVar2) {
            pFVar12 = pFVar13 + 1;
            if (pFVar13 == (FName *)0x0) {
              pFVar12 = pFVar21;
            }
            if (pFVar12 != (FName *)0x0) goto LAB_145acd527;
            break;
          }
          uVar11 = pFVar13[3].ComparisonIndex.Value;
        } while (uVar11 != 0xffffffff);
      }
    }
    local_88 = FVar19.Data;
    local_80 = param_1;
    bVar7 = `FPreLoadSettingsContainerBase::ParseBrushConfigEntry'::__l24::<lambda_3>::operator()
                      (&local_88);
    if (bVar7) {
LAB_145acd527:
      if ((((ulonglong)*pFVar12 <= &local_110) &&
          (&local_110 < (FString *)((longlong)(int)pFVar12[1].Number * 0x30 + (longlong)*pFVar12)))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = pFVar12[1].ComparisonIndex.Value;
      if (uVar11 == pFVar12[1].Number) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,(ForAnyElementType *)pFVar12,(int *)&pFVar12[1].Number);
      }
      pFVar12[1].ComparisonIndex.Value = uVar11 + 1;
      this_00 = (FString *)((longlong)*pFVar12 + (longlong)(int)uVar11 * 0x30);
      ::FString::FString(this_00,&local_110);
      ::FString::FString(this_00 + 1,&local_100);
      auVar6 = local_f0;
      this_00[2].Data.AllocatorInstance.Data = (FScriptContainerElement *)local_f0._0_8_;
      this_00[2].Data.ArrayNum = local_f0._8_4_;
      this_00[2].Data.ArrayMax = local_f0._12_4_;
      local_f0 = auVar6;
    }
    FVar19.Data = FVar19.Data + 0x10;
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
LAB_145acd640:
  DestructItems<FString,int>((FString *)local_170.Data,(int)local_168);
  if (local_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data);
  }
  DestructItems<FString,int>((FString *)local_150.AllocatorInstance.Data,local_150.ArrayNum);
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  return;
}

// ParseFontConfigEntry @ 145acd6d0

void __thiscall
FPreLoadSettingsContainerBase::ParseFontConfigEntry
          (FPreLoadSettingsContainerBase *this,FString *param_1)

{
  void *pvVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  longlong lVar8;
  FString *local_res8;
  FString local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_68,L",",true);
  cVar4 = (**(code **)(this->_padding_ + 0xc0))(this,&local_68);
  if ((cVar4 == '\0') &&
     (local_res8 = param_1,
     bVar5 = `FPreLoadSettingsContainerBase::ParseFontConfigEntry'::__l3::<lambda_1>::operator()
                       (&local_res8), !bVar5)) goto LAB_145acda43;
  if ((local_68.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = *(int *)(local_68.AllocatorInstance.Data + 8);
  lVar8 = (longlong)local_58.Data.ArrayNum;
  pvVar1 = *(void **)local_68.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pvVar1,lVar8 * 2);
  }
  ::FString::TrimStartAndEndInline(&local_58);
  ::FString::FString(&local_38,"(");
  iVar6 = local_38.Data.ArrayNum + -1;
  FVar3.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromStart(&local_58,(wchar_t *)FVar3.Data,iVar6,IgnoreCase);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((local_68.ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = *(int *)(local_68.AllocatorInstance.Data + 0x18);
  lVar8 = (longlong)local_48.Data.ArrayNum;
  pvVar1 = *(void **)(local_68.AllocatorInstance.Data + 0x10);
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pvVar1,lVar8 * 2);
  }
  ::FString::TrimStartAndEndInline(&local_48);
  if ((local_68.ArrayNum < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = *(int *)(local_68.AllocatorInstance.Data + 0x28);
  lVar8 = (longlong)local_78.Data.ArrayNum;
  pvVar1 = *(void **)(local_68.AllocatorInstance.Data + 0x20);
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,pvVar1,lVar8 * 2);
  }
  ::FString::TrimStartAndEndInline(&local_78);
  ::FString::RemoveFromEnd(&local_78,L")",1,IgnoreCase);
  if (local_78.Data.ArrayNum == UseSystemFontOverride.Data.ArrayNum) {
    if (1 < local_78.Data.ArrayNum) {
      iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_78.Data.AllocatorInstance.Data,
                         (wchar_t *)UseSystemFontOverride.Data.AllocatorInstance.Data);
      bVar5 = iVar6 == 0;
      goto LAB_145acd9a7;
    }
  }
  else {
    bVar5 = local_78.Data.ArrayNum + UseSystemFontOverride.Data.ArrayNum == 1;
LAB_145acd9a7:
    if (!bVar5) {
      pFVar7 = (FString *)(**(code **)(this->_padding_ + 0xb0))(this,local_28,&local_78);
      if (&local_78 != pFVar7) {
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = (pFVar7->Data).ArrayNum;
        local_78.Data.ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
  }
  (**(code **)(this->_padding_ + 0x50))(this,&local_58,&local_48,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_145acda43:
  DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// ParseLoadingGroups @ 145acda90

void __thiscall
FPreLoadSettingsContainerBase::ParseLoadingGroups
          (FPreLoadSettingsContainerBase *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FName FVar2;
  uint uVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  FName *pFVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res10;
  FName local_res18;
  FName *local_res20;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  FName local_50;
  FName local_48 [2];
  
  pwVar12 = L"";
  iVar1 = param_1->ArrayNum;
  uVar4 = (ulonglong)iVar1;
  local_res20 = (FName *)CONCAT44(local_res20._4_4_,iVar1);
  local_res10 = param_1;
  if (iVar1 != 0) {
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar11 = pFVar9 + uVar4 * 0x10;
    do {
      if (local_res10->ArrayNum != (int)uVar4) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (pFVar9 == pFVar11) {
        return;
      }
      if (*(int *)(pFVar9 + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)pFVar9;
      }
      ::FName::FName(&local_50,pwVar12);
      FVar2 = local_50;
      uVar3 = ::GetTypeHash(local_50.ComparisonIndex.Value);
      uVar3 = uVar3 + FVar2.Number;
      if (*(int *)&(this->ScreenOrderByLoadingGroups).field_0x8 !=
          *(int *)&(this->ScreenOrderByLoadingGroups).field_0x34) {
        puVar7 = *(undefined1 **)&(this->ScreenOrderByLoadingGroups).field_0x40;
        puVar8 = &(this->ScreenOrderByLoadingGroups).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar8 = puVar7;
        }
        uVar10 = *(uint *)(puVar8 + (ulonglong)
                                    (*(int *)&(this->ScreenOrderByLoadingGroups).field_0x48 - 1U &
                                    uVar3) * 4);
        if (uVar10 != 0xffffffff) {
          do {
            pFVar6 = (FName *)((longlong)(int)uVar10 * 0x20 +
                              *(longlong *)&(this->ScreenOrderByLoadingGroups).field_0x0);
            if (*pFVar6 == local_50) {
              if (pFVar6 != (FName *)0x0) goto LAB_145acdd10;
              break;
            }
            uVar10 = pFVar6[3].ComparisonIndex.Value;
          } while (uVar10 != 0xffffffff);
        }
      }
      local_res18 = (FName)&local_50;
      TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FName_&&>_>
                ((TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>,FDefaultSetAllocator>
                  *)&this->ScreenOrderByLoadingGroups,(uint)local_58,
                 (TKeyInitializer<FName_&&> *)(ulonglong)uVar3,(bool *)&local_res18);
LAB_145acdd10:
      if (*(int *)(pFVar9 + 8) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)pFVar9;
      }
      ::FName::FName(local_48,pwVar12);
      FVar2 = local_48[0];
      uVar3 = ::GetTypeHash(local_48[0].ComparisonIndex.Value);
      uVar3 = uVar3 + FVar2.Number;
      if (*(int *)&(this->BrushLoadingGroups).field_0x8 !=
          *(int *)&(this->BrushLoadingGroups).field_0x34) {
        puVar7 = *(undefined1 **)&(this->BrushLoadingGroups).field_0x40;
        puVar8 = &(this->BrushLoadingGroups).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar8 = puVar7;
        }
        uVar10 = *(uint *)(puVar8 + (ulonglong)
                                    (*(int *)&(this->BrushLoadingGroups).field_0x48 - 1U & uVar3) *
                                    4);
        if (uVar10 != 0xffffffff) {
          do {
            pFVar6 = (FName *)((longlong)(int)uVar10 * 0x20 +
                              *(longlong *)&(this->BrushLoadingGroups).field_0x0);
            if (*pFVar6 == local_48[0]) {
              if (pFVar6 != (FName *)0x0) goto LAB_145acddc0;
              break;
            }
            uVar10 = pFVar6[3].ComparisonIndex.Value;
          } while (uVar10 != 0xffffffff);
        }
      }
      local_res18 = (FName)local_48;
      TSet<TTuple<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FName_&&>_>
                ((TSet<TTuple<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>,FDefaultSetAllocator>
                  *)&this->BrushLoadingGroups,(uint)local_54,
                 (TKeyInitializer<FName_&&> *)(ulonglong)uVar3,(bool *)&local_res18);
LAB_145acddc0:
      pFVar9 = pFVar9 + 0x10;
      uVar4 = (ulonglong)local_res20 & 0xffffffff;
    } while( true );
  }
  pwVar5 = L"";
  if (DefaultInitialLoadingGroupIdentifier.Data.ArrayNum != 0) {
    pwVar5 = (wchar_t *)DefaultInitialLoadingGroupIdentifier.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res18,pwVar5);
  FVar2 = local_res18;
  uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(this->ScreenOrderByLoadingGroups).field_0x8 !=
      *(int *)&(this->ScreenOrderByLoadingGroups).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ScreenOrderByLoadingGroups).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ScreenOrderByLoadingGroups).field_0x38;
    }
    uVar10 = *(uint *)(puVar7 + (ulonglong)
                                (*(int *)&(this->ScreenOrderByLoadingGroups).field_0x48 - 1U & uVar3
                                ) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar10 * 0x20 +
                          *(longlong *)&(this->ScreenOrderByLoadingGroups).field_0x0);
        if (*pFVar6 == local_res18) {
          if (pFVar6 != (FName *)0x0) goto LAB_145acdb70;
          break;
        }
        uVar10 = pFVar6[3].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  local_res20 = &local_res18;
  TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>,FDefaultSetAllocator>
              *)&this->ScreenOrderByLoadingGroups,(uint)&local_res10,
             (TKeyInitializer<FName_&&> *)(ulonglong)uVar3,(bool *)&local_res20);
LAB_145acdb70:
  if (DefaultInitialLoadingGroupIdentifier.Data.ArrayNum != 0) {
    pwVar12 = (wchar_t *)DefaultInitialLoadingGroupIdentifier.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res18,pwVar12);
  FVar2 = local_res18;
  uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(this->BrushLoadingGroups).field_0x8 !=
      *(int *)&(this->BrushLoadingGroups).field_0x34) {
    puVar7 = *(undefined1 **)&(this->BrushLoadingGroups).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->BrushLoadingGroups).field_0x38;
    }
    uVar10 = *(uint *)(puVar7 + (ulonglong)
                                (*(int *)&(this->BrushLoadingGroups).field_0x48 - 1U & uVar3) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar10 * 0x20 +
                          *(longlong *)&(this->BrushLoadingGroups).field_0x0);
        if (*pFVar6 == local_res18) {
          if (pFVar6 != (FName *)0x0) {
            return;
          }
          break;
        }
        uVar10 = pFVar6[3].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  local_res20 = &local_res18;
  TSet<TTuple<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            ((TSet<TTuple<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup>,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>,FDefaultSetAllocator>
              *)&this->BrushLoadingGroups,(uint)&local_res10,
             (TKeyInitializer<FName_&&> *)(ulonglong)uVar3,(bool *)&local_res20);
  return;
}

// ParseLocalizedTextConfigString @ 145acde00

void __thiscall
FPreLoadSettingsContainerBase::ParseLocalizedTextConfigString
          (FPreLoadSettingsContainerBase *this,FString *param_1)

{
  void *pvVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FText *pFVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  FTextKey local_res8 [2];
  FTextKey local_res18 [2];
  FString *local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FText local_38;
  
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_128,L",",true);
  cVar3 = (**(code **)(this->_padding_ + 200))(this,&local_128);
  if ((cVar3 != '\0') ||
     (local_res20 = param_1,
     bVar4 = `FPreLoadSettingsContainerBase::ParseLocalizedTextConfigString'::__l3::<lambda_1>::
             operator()(&local_res20), bVar4)) {
    if ((local_128.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = *(int *)(local_128.AllocatorInstance.Data + 8);
    lVar7 = (longlong)local_e8.Data.ArrayNum;
    pvVar1 = *(void **)local_128.AllocatorInstance.Data;
    if (local_e8.Data.ArrayNum == 0) {
      local_e8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,local_e8.Data.ArrayNum,
                 &local_e8.Data.ArrayMax);
      memcpy(local_e8.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_e8);
    ::FString::FString(&local_d8,"(");
    iVar8 = local_d8.Data.ArrayNum + -1;
    FVar6.Data = local_d8.Data.AllocatorInstance.Data;
    if (local_d8.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromStart(&local_e8,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if ((local_128.ArrayNum < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = *(int *)(local_128.AllocatorInstance.Data + 0x18);
    lVar7 = (longlong)local_108.Data.ArrayNum;
    pvVar1 = *(void **)(local_128.AllocatorInstance.Data + 0x10);
    if (local_108.Data.ArrayNum == 0) {
      local_108.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,
                 local_108.Data.ArrayNum,&local_108.Data.ArrayMax);
      memcpy(local_108.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_108);
    ::FString::FString(&local_c8,"NSLOCTEXT(");
    iVar8 = local_c8.Data.ArrayNum + -1;
    FVar6.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_c8.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromStart(&local_108,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_b8,"\"");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_b8.Data.ArrayNum != 0) {
      FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    }
    iVar9 = 0;
    iVar8 = local_b8.Data.ArrayNum + -1;
    if (local_b8.Data.ArrayNum == 0) {
      iVar8 = iVar9;
    }
    ::FString::RemoveFromStart(&local_108,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_a8,"\"");
    iVar8 = local_a8.Data.ArrayNum + -1;
    FVar6.Data = local_a8.Data.AllocatorInstance.Data;
    if (local_a8.Data.ArrayNum == 0) {
      iVar8 = iVar9;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromEnd(&local_108,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if ((local_128.ArrayNum < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = *(int *)(local_128.AllocatorInstance.Data + 0x28);
    lVar7 = (longlong)local_f8.Data.ArrayNum;
    pvVar1 = *(void **)(local_128.AllocatorInstance.Data + 0x20);
    if (local_f8.Data.ArrayNum == 0) {
      local_f8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,local_f8.Data.ArrayNum,
                 &local_f8.Data.ArrayMax);
      memcpy(local_f8.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_f8);
    ::FString::FString(&local_98,"\"");
    iVar8 = local_98.Data.ArrayNum + -1;
    FVar6.Data = local_98.Data.AllocatorInstance.Data;
    if (local_98.Data.ArrayNum == 0) {
      iVar8 = iVar9;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromStart(&local_f8,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_88,"\"");
    iVar8 = local_88.Data.ArrayNum + -1;
    FVar6.Data = local_88.Data.AllocatorInstance.Data;
    if (local_88.Data.ArrayNum == 0) {
      iVar8 = iVar9;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromEnd(&local_f8,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if ((local_128.ArrayNum < 4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = *(int *)(local_128.AllocatorInstance.Data + 0x38);
    lVar7 = (longlong)local_118.Data.ArrayNum;
    pvVar1 = *(void **)(local_128.AllocatorInstance.Data + 0x30);
    if (local_118.Data.ArrayNum == 0) {
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_118,
                 local_118.Data.ArrayNum,&local_118.Data.ArrayMax);
      memcpy(local_118.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_118);
    ::FString::FString(&local_78,"\"");
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar6.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar9 = 0;
    iVar8 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar8 = iVar9;
    }
    ::FString::RemoveFromStart(&local_118,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_68,")");
    iVar8 = local_68.Data.ArrayNum + -1;
    FVar6.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar8 = iVar9;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromEnd(&local_118,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_58,")");
    iVar8 = local_58.Data.ArrayNum + -1;
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      iVar8 = iVar9;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromEnd(&local_118,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_48,"\"");
    iVar8 = local_48.Data.ArrayNum + -1;
    FVar6.Data = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == 0) {
      iVar8 = iVar9;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromEnd(&local_118,(wchar_t *)FVar6.Data,iVar8,IgnoreCase);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pcVar2 = *(code **)(this->_padding_ + 0x40);
    FTextKey::FTextKey(local_res8,&local_f8);
    FTextKey::FTextKey(local_res18,&local_108);
    pFVar5 = FText::AsLocalizable_Advanced(&local_38,local_res18,local_res8,&local_118);
    (*pcVar2)(this,&local_e8,pFVar5);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return;
}

// ParseScreenGroupingConfigString @ 145ace4a0

void __thiscall
FPreLoadSettingsContainerBase::ParseScreenGroupingConfigString
          (FPreLoadSettingsContainerBase *this,FString *param_1)

{
  void *pvVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  wchar_t *_Str;
  double dVar8;
  FString *local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  float local_38;
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_a8,L",",true);
  cVar4 = (**(code **)(this->_padding_ + 0xd0))(this,&local_a8);
  if ((cVar4 != '\0') ||
     (local_res8 = param_1,
     bVar5 = `FPreLoadSettingsContainerBase::ParseScreenGroupingConfigString'::__l3::<lambda_1>::
             operator()(&local_res8), bVar5)) {
    if ((local_a8.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = *(int *)(local_a8.AllocatorInstance.Data + 8);
    lVar6 = (longlong)local_78.Data.ArrayNum;
    pvVar1 = *(void **)local_a8.AllocatorInstance.Data;
    if (local_78.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,pvVar1,lVar6 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_78);
    ::FString::FString(&local_68,"(");
    _Str = L"";
    iVar7 = local_68.Data.ArrayNum + -1;
    FVar3.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromStart(&local_78,(wchar_t *)FVar3.Data,iVar7,IgnoreCase);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((local_a8.ArrayNum < 2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = *(int *)(local_a8.AllocatorInstance.Data + 0x18);
    lVar6 = (longlong)local_88.Data.ArrayNum;
    pvVar1 = *(void **)(local_a8.AllocatorInstance.Data + 0x10);
    if (local_88.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,pvVar1,lVar6 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_88);
    if ((local_a8.ArrayNum < 3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = *(int *)(local_a8.AllocatorInstance.Data + 0x28);
    lVar6 = (longlong)local_98.Data.ArrayNum;
    pvVar1 = *(void **)(local_a8.AllocatorInstance.Data + 0x20);
    if (local_98.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_98.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,pvVar1,lVar6 * 2);
    }
    ::FString::TrimStartAndEndInline(&local_98);
    if ((local_a8.ArrayNum < 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(int *)(local_a8.AllocatorInstance.Data + 0x38) != 0) {
      _Str = *(wchar_t **)(local_a8.AllocatorInstance.Data + 0x30);
    }
    dVar8 = _wtof(_Str);
    FVar3.Data = local_88.Data.AllocatorInstance.Data;
    lVar6 = (longlong)local_88.Data.ArrayNum;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = local_88.Data.ArrayNum;
    if (local_88.Data.ArrayNum == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,&local_58,local_88.Data.ArrayNum,&local_4c);
      memcpy(local_58.Data,FVar3.Data,lVar6 * 2);
    }
    FVar3.Data = local_98.Data.AllocatorInstance.Data;
    lVar6 = (longlong)local_98.Data.ArrayNum;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = local_98.Data.ArrayNum;
    if (local_98.Data.ArrayNum == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_98.Data.ArrayNum,0,&local_48,local_98.Data.ArrayNum,&local_3c);
      memcpy(local_48.Data,FVar3.Data,lVar6 * 2);
    }
    local_38 = (float)dVar8;
    (**(code **)(this->_padding_ + 0x48))(this,&local_78,&local_58);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// ParseScreenOrderConfigString @ 145ace900

void __thiscall
FPreLoadSettingsContainerBase::ParseScreenOrderConfigString
          (FPreLoadSettingsContainerBase *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FScreenOrderByLoadingGroup *pFVar6;
  FScreenGroupingBase *pFVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  int iVar10;
  int iVar11;
  FString *local_res18;
  FString *local_res20;
  FString local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FName local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString *local_50;
  FString *local_48;
  FString *local_40;
  FString *local_38;
  FName local_30;
  FName local_28 [2];
  
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  ::FString::ParseIntoArray(param_1,&local_a8,L",",true);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  if (local_a8.ArrayNum == 1) {
    iVar4 = DefaultInitialLoadingGroupIdentifier.Data.ArrayNum + -1;
    if (DefaultInitialLoadingGroupIdentifier.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange
              (&local_98,(wchar_t *)DefaultInitialLoadingGroupIdentifier.Data.AllocatorInstance.Data
               ,iVar4);
    if ((local_a8.ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)(local_a8.AllocatorInstance.Data + 8);
    pwVar8 = *(wchar_t **)local_a8.AllocatorInstance.Data;
  }
  else {
    if (local_a8.ArrayNum != 2) {
      local_res20 = param_1;
      `FPreLoadSettingsContainerBase::ParseScreenOrderConfigString'::__l11::<lambda_1>::operator()
                (&local_res20);
      goto LAB_145acec93;
    }
    iVar4 = *(int *)(local_a8.AllocatorInstance.Data + 8) + -1;
    if (*(int *)(local_a8.AllocatorInstance.Data + 8) == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&local_98,*(wchar_t **)local_a8.AllocatorInstance.Data,iVar4);
    if ((local_a8.ArrayNum < 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)(local_a8.AllocatorInstance.Data + 0x18);
    pwVar8 = *(wchar_t **)(local_a8.AllocatorInstance.Data + 0x10);
  }
  iVar10 = 0;
  iVar11 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar11 = iVar10;
  }
  ::FString::AssignRange(&local_b8,pwVar8,iVar11);
  ::FString::RemoveSpacesInline(&local_98);
  ::FString::FString(&local_80,"(");
  iVar4 = local_80.Data.ArrayNum + -1;
  FVar9.Data = local_80.Data.AllocatorInstance.Data;
  if (local_80.Data.ArrayNum == 0) {
    iVar4 = iVar10;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromStart(&local_98,(wchar_t *)FVar9.Data,iVar4,IgnoreCase);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  ::FString::RemoveSpacesInline(&local_b8);
  ::FString::FString(&local_70,"(");
  iVar4 = local_70.Data.ArrayNum + -1;
  FVar9.Data = local_70.Data.AllocatorInstance.Data;
  if (local_70.Data.ArrayNum == 0) {
    iVar4 = iVar10;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromStart(&local_b8,(wchar_t *)FVar9.Data,iVar4,IgnoreCase);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_60,")");
  iVar4 = local_60.Data.ArrayNum + -1;
  FVar9.Data = local_60.Data.AllocatorInstance.Data;
  if (local_60.Data.ArrayNum == 0) {
    iVar4 = iVar10;
    FVar9.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_b8,(wchar_t *)FVar9.Data,iVar4,IgnoreCase);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if ((local_98.Data.ArrayNum < 2) || (local_b8.Data.ArrayNum < 2)) {
    local_res18 = param_1;
    bVar3 = `FPreLoadSettingsContainerBase::ParseScreenOrderConfigString'::__l12::<lambda_2>::
            operator()(&local_res18);
    if (!bVar3) goto LAB_145acec93;
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar9.Data = local_98.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(&local_30,(wchar_t *)FVar9.Data);
  pFVar6 = TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
           ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenOrderByLoadingGroup,0>_>
                   *)&this->ScreenOrderByLoadingGroups,*pFVar5);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar9.Data = local_b8.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FName::FName(local_28,(wchar_t *)FVar9.Data);
  pFVar7 = TMapBase<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
           ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FScreenGroupingBase,0>_>
                   *)&this->ScreenGroupings,*pFVar5);
  if (pFVar6 == (FScreenOrderByLoadingGroup *)0x0) {
    local_50 = &local_98;
    local_48 = param_1;
    bVar3 = `FPreLoadSettingsContainerBase::ParseScreenOrderConfigString'::__l15::<lambda_3>::
            operator()(&local_50);
    if (!bVar3) goto LAB_145acec93;
  }
  if (pFVar7 == (FScreenGroupingBase *)0x0) {
    local_40 = &local_b8;
    local_38 = param_1;
    bVar3 = `FPreLoadSettingsContainerBase::ParseScreenOrderConfigString'::__l18::<lambda_4>::
            operator()(&local_40);
    if (!bVar3) goto LAB_145acec93;
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar9.Data = local_b8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_88,(wchar_t *)FVar9.Data);
  pFVar5 = (FName *)(pFVar6->ScreenGroupings).AllocatorInstance.Data;
  if (((pFVar5 <= &local_88) && (&local_88 < pFVar5 + (pFVar6->ScreenGroupings).ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (pFVar6->ScreenGroupings).ArrayNum;
  piVar1 = &(pFVar6->ScreenGroupings).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)pFVar6,piVar1);
  }
  (pFVar6->ScreenGroupings).ArrayNum = iVar4 + 1;
  *(FName *)((pFVar6->ScreenGroupings).AllocatorInstance.Data + (longlong)iVar4 * 8) = local_88;
LAB_145acec93:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// PerformInitialAssetLoad @ 145acee40

void __thiscall
FPreLoadSettingsContainerBase::PerformInitialAssetLoad(FPreLoadSettingsContainerBase *this)

{
  int iVar1;
  bool bVar2;
  FName *pFVar3;
  FCustomBrushLoadingGroup *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_38;
  
  pwVar7 = L"";
  pwVar6 = L"";
  if (DefaultInitialLoadingGroupIdentifier.Data.ArrayNum != 0) {
    pwVar6 = (wchar_t *)DefaultInitialLoadingGroupIdentifier.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res8,pwVar6);
  pFVar4 = TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
           ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
                   *)&this->BrushLoadingGroups,*pFVar3);
  if (pFVar4 != (FCustomBrushLoadingGroup *)0x0) {
    pwVar6 = L"";
    if (DefaultInitialLoadingGroupIdentifier.Data.ArrayNum != 0) {
      pwVar6 = (wchar_t *)DefaultInitialLoadingGroupIdentifier.Data.AllocatorInstance;
    }
    pFVar3 = ::FName::FName(&local_res18,pwVar6);
    local_res10 = *pFVar3;
    pFVar5 = ::FName::ToString(&local_res10,&local_38);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(&local_res20,pwVar7);
    pFVar4 = TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
             ::Find((TMapBase<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPreLoadSettingsContainerBase::FCustomBrushLoadingGroup,0>_>
                     *)&this->BrushLoadingGroups,*pFVar3);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (pFVar4 == (FCustomBrushLoadingGroup *)0x0) {
      local_res8 = (FName)&local_res10;
      bVar2 = `FPreLoadSettingsContainerBase::LoadGrouping'::__l3::<lambda_1>::operator()
                        (&local_res8);
      if (!bVar2) {
        return;
      }
    }
    this->CurrentLoadGroup = local_res10;
    pFVar8 = (pFVar4->CustomBrushDefinesToLoad).AllocatorInstance.Data;
    iVar1 = (pFVar4->CustomBrushDefinesToLoad).ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x30;
    while( true ) {
      if ((pFVar4->CustomBrushDefinesToLoad).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPreLoadSettingsContainerBase::FCustomBrushDefine,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar8 == pFVar9) break;
      (**(code **)(this->_padding_ + 0x38))(this,pFVar8,pFVar8 + 0x10,pFVar8 + 0x20);
      pFVar8 = pFVar8 + 0x30;
    }
  }
  return;
}

// SetPluginContentDir @ 145ad04b0

void __thiscall
FPreLoadSettingsContainerBase::SetPluginContentDir
          (FPreLoadSettingsContainerBase *this,FString *param_1)

{
  ::FString::operator=(&this->PluginContentDir,param_1);
  return;
}

// SetShouldLoadBrushes @ 145ad04d0

void __thiscall
FPreLoadSettingsContainerBase::SetShouldLoadBrushes
          (FPreLoadSettingsContainerBase *this,bool param_1)

{
  this->bShouldLoadBrushes = param_1;
  return;
}

// operator() @ 1504d7110

bool __thiscall
`FPreLoadSettingsContainerBase::BuildSystemFontFile'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844476>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5205863506531844476>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7190

bool __thiscall
`FPreLoadSettingsContainerBase::ConvertIfPluginRelativeContentPath'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844560>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844560>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d7370

bool __thiscall
`FPreLoadSettingsContainerBase::LoadGrouping'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844324>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5205863506531844324>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504d73d7;
    }
  }
  bVar2 = false;
LAB_1504d73d7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d7410

bool __thiscall
`FPreLoadSettingsContainerBase::ParseBrushConfigEntry'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844144>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5205863506531844144>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7450

bool __thiscall
`FPreLoadSettingsContainerBase::ParseFontConfigEntry'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844214>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844214>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d74b0

bool __thiscall
`FPreLoadSettingsContainerBase::ParseLocalizedTextConfigString'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844489>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844489>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d7510

bool __thiscall
`FPreLoadSettingsContainerBase::ParseScreenGroupingConfigString'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844532>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844532>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d75f0

bool __thiscall
`FPreLoadSettingsContainerBase::BuildCustomFont'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844353>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5205863506531844353>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d7710

bool __thiscall
`FPreLoadSettingsContainerBase::ParseScreenOrderConfigString'::__l11::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844285>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844285>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d77b0

bool __thiscall
`FPreLoadSettingsContainerBase::ParseBrushConfigEntry'::__l17::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844179>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844179>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d7850

bool __thiscall
`FPreLoadSettingsContainerBase::ParseScreenOrderConfigString'::__l12::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844296>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844296>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d78b0

bool __thiscall
`FPreLoadSettingsContainerBase::ParseBrushConfigEntry'::__l24::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844196>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844196>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d7920

bool __thiscall
`FPreLoadSettingsContainerBase::ParseScreenOrderConfigString'::__l15::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844301>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844301>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504d7990

bool __thiscall
`FPreLoadSettingsContainerBase::ParseScreenOrderConfigString'::__l18::<lambda_4>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5205863506531844303>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5205863506531844303>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

