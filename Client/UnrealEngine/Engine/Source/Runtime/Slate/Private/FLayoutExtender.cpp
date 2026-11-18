// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 6

// FindStackExtensions<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1426f0950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLayoutExtender::FindStackExtensions<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FLayoutExtender *this,FName param_1,ELayoutExtensionPosition param_2,
          TArray<FTabManager::FTab,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int *piVar1;
  ForElementType<FTabManager::FTab> FVar2;
  uchar uVar3;
  ForElementType<FTabManager::FTab> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FTabManager::FTab> FVar10;
  longlong lVar11;
  ForElementType<FLayoutExtender::FExtendedTab> FVar12;
  uchar *puVar13;
  longlong lVar14;
  undefined1 auStackY_f8 [32];
  undefined1 local_a8 [16];
  TArray<FLayoutExtender::FExtendedTab,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
              (0x20,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  local_98.AllocatorInstance.SecondaryData = (ForElementType<FLayoutExtender::FExtendedTab>)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 2;
  TMultiMap<FName,FLayoutExtender::FExtendedTab,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>_>
  ::MultiFind<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            (&this->StackExtensions,param_1,&local_98,true);
  iVar7 = local_98.ArrayNum;
  lVar14 = (longlong)local_98.ArrayNum;
  FVar12 = (ForElementType<FLayoutExtender::FExtendedTab>)&local_98;
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<FLayoutExtender::FExtendedTab>)0x0
     ) {
    FVar12 = local_98.AllocatorInstance.SecondaryData;
  }
  puVar13 = (uchar *)((longlong)FVar12 + 0x18);
  do {
    if (local_98.ArrayNum != iVar7) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FLayoutExtender::FExtendedTab,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_a8);
    }
    if ((ForElementType<FLayoutExtender::FExtendedTab> *)(puVar13 + -0x18) ==
        (ForElementType<FLayoutExtender::FExtendedTab> *)((longlong)FVar12 + lVar14 * 0x24)) {
      if (local_98.AllocatorInstance.SecondaryData !=
          (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
        FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
      }
      return;
    }
    if (*(ELayoutExtensionPosition *)
         ((ForElementType<FLayoutExtender::FExtendedTab> *)(puVar13 + -0x18))->InlineData == param_2
       ) {
      FVar4 = (param_3->AllocatorInstance).SecondaryData;
      FVar2 = (ForElementType<FTabManager::FTab>)((longlong)puVar13 - 0x14);
      FVar10 = (ForElementType<FTabManager::FTab>)param_3;
      if (FVar4 != (ForElementType<FTabManager::FTab>)0x0) {
        FVar10 = FVar4;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar2) {
        FVar10 = (ForElementType<FTabManager::FTab>)param_3;
        if (FVar4 != (ForElementType<FTabManager::FTab>)0x0) {
          FVar10 = FVar4;
        }
        if (((ulonglong)FVar2 < (ulonglong)((longlong)*piVar1 * 0x20 + (longlong)FVar10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar9 = param_3->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
                          (0x420,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar9 + 1;
      FVar4 = (param_3->AllocatorInstance).SecondaryData;
      uVar6 = *(undefined8 *)(puVar13 + -0xc);
      FVar10 = (ForElementType<FTabManager::FTab>)param_3;
      if (FVar4 != (ForElementType<FTabManager::FTab>)0x0) {
        FVar10 = FVar4;
      }
      lVar11 = (longlong)iVar9 * 0x20;
      *(undefined8 *)(lVar11 + (longlong)FVar10) = *(undefined8 *)FVar2;
      ((undefined8 *)(lVar11 + (longlong)FVar10))[1] = uVar6;
      *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar10) = *(undefined4 *)(puVar13 + -4);
      *(uchar *)(lVar11 + 0x14 + (longlong)FVar10) = *puVar13;
      *(undefined4 *)(lVar11 + 0x18 + (longlong)FVar10) = *(undefined4 *)(puVar13 + 4);
      uVar3 = puVar13[8];
      *(undefined1 *)(lVar11 + 0x1e + (longlong)FVar10) = 0;
      *(uchar *)(lVar11 + 0x1c + (longlong)FVar10) = uVar3;
      uVar3 = puVar13[10];
      *(uchar *)(lVar11 + 0x1e + (longlong)FVar10) = uVar3;
      if (uVar3 != '\0') {
        *(uchar *)(lVar11 + 0x1d + (longlong)FVar10) = puVar13[9];
      }
    }
    puVar13 = puVar13 + 0x24;
  } while( true );
}

// FindTabExtensions<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 1426f0b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLayoutExtender::FindTabExtensions<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FLayoutExtender *this,FTabId *param_1,ELayoutExtensionPosition param_2,
          TArray<FTabManager::FTab,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int *piVar1;
  ForElementType<FTabManager::FTab> FVar2;
  uchar uVar3;
  ForElementType<FTabManager::FTab> FVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FTabManager::FTab> FVar10;
  longlong lVar11;
  longlong lVar12;
  ForElementType<FLayoutExtender::FExtendedTab> FVar13;
  uchar *puVar14;
  undefined1 auStackY_108 [32];
  undefined1 local_b8 [16];
  TArray<FLayoutExtender::FExtendedTab,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
              (0x20,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<FLayoutExtender::FExtendedTab>)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 2;
  TMultiMap<FTabId,FLayoutExtender::FExtendedTab,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>_>
  ::MultiFind<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
            (&this->TabExtensions,param_1,&local_a8,true);
  iVar7 = local_a8.ArrayNum;
  lVar12 = (longlong)local_a8.ArrayNum;
  FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)&local_a8;
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<FLayoutExtender::FExtendedTab>)0x0
     ) {
    FVar13 = local_a8.AllocatorInstance.SecondaryData;
  }
  puVar14 = (uchar *)((longlong)FVar13 + 0x18);
  do {
    if (local_a8.ArrayNum != iVar7) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<FLayoutExtender::FExtendedTab,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if ((ForElementType<FLayoutExtender::FExtendedTab> *)(puVar14 + -0x18) ==
        (ForElementType<FLayoutExtender::FExtendedTab> *)((longlong)FVar13 + lVar12 * 0x24)) {
      if (local_a8.AllocatorInstance.SecondaryData !=
          (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
        FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
      }
      return;
    }
    if (*(ELayoutExtensionPosition *)
         ((ForElementType<FLayoutExtender::FExtendedTab> *)(puVar14 + -0x18))->InlineData == param_2
       ) {
      FVar4 = (param_3->AllocatorInstance).SecondaryData;
      FVar2 = (ForElementType<FTabManager::FTab>)((longlong)puVar14 - 0x14);
      FVar10 = (ForElementType<FTabManager::FTab>)param_3;
      if (FVar4 != (ForElementType<FTabManager::FTab>)0x0) {
        FVar10 = FVar4;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar2) {
        FVar10 = (ForElementType<FTabManager::FTab>)param_3;
        if (FVar4 != (ForElementType<FTabManager::FTab>)0x0) {
          FVar10 = FVar4;
        }
        if (((ulonglong)FVar2 < (ulonglong)((longlong)*piVar1 * 0x20 + (longlong)FVar10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar9 = param_3->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
                          (0x420,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar9 + 1;
      FVar4 = (param_3->AllocatorInstance).SecondaryData;
      uVar6 = *(undefined8 *)(puVar14 + -0xc);
      FVar10 = (ForElementType<FTabManager::FTab>)param_3;
      if (FVar4 != (ForElementType<FTabManager::FTab>)0x0) {
        FVar10 = FVar4;
      }
      lVar11 = (longlong)iVar9 * 0x20;
      *(undefined8 *)(lVar11 + (longlong)FVar10) = *(undefined8 *)FVar2;
      ((undefined8 *)(lVar11 + (longlong)FVar10))[1] = uVar6;
      *(undefined4 *)(lVar11 + 0x10 + (longlong)FVar10) = *(undefined4 *)(puVar14 + -4);
      *(uchar *)(lVar11 + 0x14 + (longlong)FVar10) = *puVar14;
      *(undefined4 *)(lVar11 + 0x18 + (longlong)FVar10) = *(undefined4 *)(puVar14 + 4);
      uVar3 = puVar14[8];
      *(undefined1 *)(lVar11 + 0x1e + (longlong)FVar10) = 0;
      *(uchar *)(lVar11 + 0x1c + (longlong)FVar10) = uVar3;
      uVar3 = puVar14[10];
      *(uchar *)(lVar11 + 0x1e + (longlong)FVar10) = uVar3;
      if (uVar3 != '\0') {
        *(uchar *)(lVar11 + 0x1d + (longlong)FVar10) = puVar14[9];
      }
    }
    puVar14 = puVar14 + 0x24;
  } while( true );
}

// ExtendArea @ 142734200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLayoutExtender::ExtendArea
          (FLayoutExtender *this,FName param_1,
          TFunction<void___cdecl(TSharedRef<FTabManager::FArea,1>)> *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  FName local_res10 [3];
  undefined1 auStack_88 [32];
  TPairInitializer<FName_const_&,FLayoutExtender::FExtendedArea_&&> local_68;
  longlong *local_58;
  longlong local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_48[0] = *(longlong *)param_2;
  local_20 = (longlong *)0x0;
  local_res10[0] = param_1;
  if (local_48[0] != 0) {
    puVar1 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,local_38);
  }
  local_68.Value = (FExtendedArea *)local_res10;
  local_58 = local_48;
  TSet<TTuple<FName,FLayoutExtender::FExtendedArea>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedArea,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FLayoutExtender::FExtendedArea_&&>_>
            ((TSet<TTuple<FName,FLayoutExtender::FExtendedArea>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedArea,1>,FDefaultSetAllocator>
              *)&this->AreaExtensions,&local_68,(bool *)&local_68.Value);
  if (local_48[0] != 0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// ExtendAreaRecursive @ 1427342c0

void __thiscall
FLayoutExtender::ExtendAreaRecursive
          (FLayoutExtender *this,TSharedRef<FTabManager::FArea,1> *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  FArea *pFVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  FArea *local_88;
  TReferenceControllerBase<1> *local_80;
  TSharedRef<FTabManager::FArea,1> local_78;
  FArea *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  int local_48;
  int iStack_44;
  TBaseKeyIterator<1> local_40;
  
  FVar2 = param_1->Object->ExtensionId;
  if (FVar2 != (FName)0x0) {
    TSet<TTuple<FName,FLayoutExtender::FExtendedArea>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedArea,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
              (&local_40,
               (TSet<TTuple<FName,FLayoutExtender::FExtendedArea>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedArea,1>,FDefaultSetAllocator>
                *)&this->AreaExtensions,FVar2);
    local_48 = local_40.Index;
    iVar1 = local_40.NextIndex;
joined_r0x00014273431f:
    iStack_44 = iVar1;
    if (local_48 != -1) {
      local_88 = param_1->Object;
      lVar10 = (longlong)local_48 * 0x50 + *(longlong *)&(local_40.Set)->Elements;
      local_80 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      UE::Core::Private::Function::CheckCallable(*(void **)(lVar10 + 0x10));
      pcVar3 = *(code **)(lVar10 + 0x10);
      plVar7 = (longlong *)(lVar10 + 0x20);
      if (*(longlong **)(lVar10 + 0x38) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar10 + 0x38);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar6,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
      local_48 = iVar1;
      if (iVar1 == -1) goto LAB_1427343e3;
      do {
        iVar1 = *(int *)(*(longlong *)&(local_40.Set)->Elements + 0x40 + (longlong)local_48 * 0x50);
        if (*(FName *)(*(longlong *)&(local_40.Set)->Elements + (longlong)local_48 * 0x50) ==
            local_40.Key) break;
        local_48 = iVar1;
      } while (iVar1 != -1);
      goto joined_r0x00014273431f;
    }
LAB_1427343e3:
    pFVar4 = param_1->Object;
    iVar1 = (int)pFVar4->_padding_;
    puVar8 = (undefined8 *)pFVar4->_padding_;
    puVar9 = puVar8 + (longlong)iVar1 * 2;
    while( true ) {
      if ((int)pFVar4->_padding_ != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedRef<FTabManager::FLayoutNode,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (puVar8 == puVar9) break;
      (**(code **)(*(longlong *)*puVar8 + 0x18))((longlong *)*puVar8,&local_68);
      if (local_68 != (FArea *)0x0) {
        local_78.Object = local_68;
        local_78.SharedReferenceCount.ReferenceController = pTStack_60;
        if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_60->SharedReferenceCount =
               (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_68 == (FArea *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ExtendAreaRecursive(this,&local_78);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_60);
      puVar8 = puVar8 + 2;
    }
  }
  return;
}

// ExtendLayout @ 1427344e0

void __thiscall
FLayoutExtender::ExtendLayout
          (FLayoutExtender *this,FTabId *param_1,ELayoutExtensionPosition param_2,FTab *param_3)

{
  TPairInitializer<FTabId_const_&,FLayoutExtender::FExtendedTab_&&> local_res18;
  FTabId *local_48;
  ELayoutExtensionPosition *local_40;
  ELayoutExtensionPosition local_38;
  FName local_34;
  undefined8 uStack_2c;
  Type local_24;
  ESidebarLocation local_20;
  float local_1c;
  undefined1 local_18;
  undefined1 local_17;
  char local_16;
  
  local_24 = param_3->TabState;
  local_34 = (param_3->TabId).TabType;
  uStack_2c._0_4_ = (param_3->TabId).InstanceId;
  uStack_2c._4_1_ = (param_3->TabId).Flags;
  uStack_2c._5_3_ = *(undefined3 *)&(param_3->TabId).field_0xd;
  local_20 = param_3->SidebarLocation;
  local_18 = param_3->bPinnedInSidebar;
  local_16 = (param_3->bIsLockedInPlace).bIsSet;
  local_1c = param_3->SidebarSizeCoefficient;
  if ((bool)local_16 != false) {
    local_17 = (param_3->bIsLockedInPlace).TypedValue;
  }
  local_40 = &local_38;
  local_48 = param_1;
  local_38 = param_2;
  TSet<TTuple<FTabId,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FTabId_const_&,FLayoutExtender::FExtendedTab_&&>_>
            ((TSet<TTuple<FTabId,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
              *)&this->TabExtensions,&local_res18,(bool *)&local_48);
  return;
}

// ExtendStack @ 142734570

void __thiscall
FLayoutExtender::ExtendStack
          (FLayoutExtender *this,FName param_1,ELayoutExtensionPosition param_2,FTab *param_3)

{
  FName local_res10;
  TPairInitializer<FName_const_&,FLayoutExtender::FExtendedTab_&&> local_res18;
  FName *local_48;
  ELayoutExtensionPosition *local_40;
  ELayoutExtensionPosition local_38;
  FName local_34;
  undefined8 uStack_2c;
  Type local_24;
  ESidebarLocation local_20;
  float local_1c;
  undefined1 local_18;
  undefined1 local_17;
  char local_16;
  
  local_24 = param_3->TabState;
  local_34 = (param_3->TabId).TabType;
  uStack_2c._0_4_ = (param_3->TabId).InstanceId;
  uStack_2c._4_1_ = (param_3->TabId).Flags;
  uStack_2c._5_3_ = *(undefined3 *)&(param_3->TabId).field_0xd;
  local_20 = param_3->SidebarLocation;
  local_18 = param_3->bPinnedInSidebar;
  local_16 = (param_3->bIsLockedInPlace).bIsSet;
  local_1c = param_3->SidebarSizeCoefficient;
  if ((bool)local_16 != false) {
    local_17 = (param_3->bIsLockedInPlace).TypedValue;
  }
  local_48 = &local_res10;
  local_40 = &local_38;
  local_res10 = param_1;
  local_38 = param_2;
  TSet<TTuple<FName,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FLayoutExtender::FExtendedTab_&&>_>
            ((TSet<TTuple<FName,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
              *)&this->StackExtensions,&local_res18,(bool *)&local_48);
  return;
}

