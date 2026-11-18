// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// AddTrackedWidget @ 1425ca060

void __thiscall
FSlateWidgetTracker::AddTrackedWidget
          (FSlateWidgetTracker *this,SWidget *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  TArray<SWidget_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FTrackedWidgetsChangedEvent *this_00;
  FName *pFVar10;
  undefined1 local_res20 [8];
  SWidget *local_38;
  FName local_30;
  
  iVar6 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
  if ((iVar6 == 1) && (param_1 != (SWidget *)0x0)) {
    iVar6 = param_2->ArrayNum;
    pFVar10 = (FName *)(param_2->AllocatorInstance).Data;
    pFVar1 = pFVar10 + iVar6;
    while( true ) {
      if (param_2->ArrayNum != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar10 == pFVar1) break;
      local_30 = *pFVar10;
      local_38 = param_1;
      iVar7 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
      FVar4 = local_30;
      if ((iVar7 == 1) && (local_38 != (SWidget *)0x0)) {
        uVar8 = ::GetTypeHash(local_30.ComparisonIndex.Value);
        pTVar9 = TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
                 ::FindOrAddImpl<FName_const_&>
                           ((TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
                             *)this,uVar8 + FVar4.Number,&local_30);
        pFVar2 = (pTVar9->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
           (((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)pTVar9->ArrayMax * 8 &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = pTVar9->ArrayNum;
        if (iVar7 == pTVar9->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
        }
        pTVar9->ArrayNum = iVar7 + 1;
        *(SWidget **)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38;
        this_00 = TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                  ::Find((TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                          *)&this->TrackedWidgetsChangedEvents,local_30);
        if (this_00 != (FTrackedWidgetsChangedEvent *)0x0) {
          TMulticastDelegate<void___cdecl(SWidget_const_*,FName_const_&,enum_ETrackedSlateWidgetOperations),FDefaultDelegateUserPolicy>
          ::Broadcast(this_00,local_38,&local_30,AddedTrackedWidget);
        }
      }
      pFVar10 = pFVar10 + 1;
    }
  }
  return;
}

// AddTrackedWidget @ 1425ca230

void __thiscall
FSlateWidgetTracker::AddTrackedWidget(FSlateWidgetTracker *this,SWidget *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<SWidget_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FTrackedWidgetsChangedEvent *this_00;
  SWidget *local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  iVar5 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
  FVar3 = local_res18[0];
  if ((iVar5 == 1) && (local_res10 != (SWidget *)0x0)) {
    uVar6 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
    pTVar7 = TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
                         *)this,uVar6 + FVar3.Number,local_res18);
    pFVar1 = (pTVar7->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_res10) &&
       ((FScriptContainerElement *)&local_res10 < pFVar1 + (longlong)pTVar7->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar5 = pTVar7->ArrayNum;
    if (iVar5 == pTVar7->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar7->ArrayNum = iVar5 + 1;
    *(SWidget **)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10;
    this_00 = TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
              ::Find((TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                      *)&this->TrackedWidgetsChangedEvents,local_res18[0]);
    if (this_00 != (FTrackedWidgetsChangedEvent *)0x0) {
      TMulticastDelegate<void___cdecl(SWidget_const_*,FName_const_&,enum_ETrackedSlateWidgetOperations),FDefaultDelegateUserPolicy>
      ::Broadcast(this_00,local_res10,local_res18,AddedTrackedWidget);
    }
  }
  return;
}

// Get @ 1425dd2b0

FSlateWidgetTracker * __cdecl FSlateWidgetTracker::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSlateWidgetTracker::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Singleton;
}

// IsEnabled @ 1425e9600

bool __thiscall FSlateWidgetTracker::IsEnabled(FSlateWidgetTracker *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
  return iVar1 == 1;
}

// OnTrackedWidgetsChanged @ 1425f07b0

FTrackedWidgetsChangedEvent * __thiscall
FSlateWidgetTracker::OnTrackedWidgetsChanged(FSlateWidgetTracker *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FTrackedWidgetsChangedEvent *pFVar3;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar3 = TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                       *)&this->TrackedWidgetsChangedEvents,uVar2 + FVar1.Number,param_1);
  return pFVar3;
}

// RemoveTrackedWidget @ 1425f8d50

void __thiscall FSlateWidgetTracker::RemoveTrackedWidget(FSlateWidgetTracker *this,SWidget *param_1)

{
  FName FVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FTrackedWidgetsChangedEvent *this_00;
  ulonglong uVar7;
  FName *pFVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  SWidget *pSVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FName> FVar14;
  FName *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  SWidget *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  FName local_70;
  FName *local_68;
  TArray<FName,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> local_60 [2];
  
  local_res10 = param_1;
  iVar5 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
  if ((iVar5 != 1) || (local_res10 == (SWidget *)0x0)) {
    return;
  }
  local_60[0].AllocatorInstance.Data = (FName *)0x0;
  local_60[0].ArrayNum = 0;
  local_60[0].ArrayMax = 0;
  TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
  ::GenerateKeyArray<TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
            ((TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
              *)this,local_60);
  uVar7 = (ulonglong)local_60[0].ArrayNum;
  local_res20 = local_60[0].ArrayNum;
  local_68 = local_60[0].AllocatorInstance.Data + uVar7;
  uVar10 = uVar7;
  FVar14.Data = local_60[0].AllocatorInstance.Data;
LAB_1425f8dfb:
  do {
    pFVar8 = local_68;
    if ((int)uVar7 != (int)uVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (FVar14.Data == pFVar8) {
      if (local_60[0].AllocatorInstance.Data == (FName *)0x0) {
        return;
      }
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_60[0].AllocatorInstance.Data);
      return;
    }
    FVar1 = *FVar14.Data;
    uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->TrackedWidgets).field_0x8 != *(int *)&(this->TrackedWidgets).field_0x34) {
      puVar2 = *(undefined1 **)&(this->TrackedWidgets).field_0x40;
      puVar9 = &(this->TrackedWidgets).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar9 = puVar2;
      }
      uVar6 = *(uint *)(puVar9 + (ulonglong)
                                 (*(int *)&(this->TrackedWidgets).field_0x48 - 1U &
                                 FVar1.Number + uVar6) * 4);
      if (uVar6 != 0xffffffff) {
LAB_1425f8e70:
        pFVar8 = (FName *)((longlong)(int)uVar6 * 0x20 + *(longlong *)&this->TrackedWidgets);
        if (*pFVar8 != FVar1) break;
        pFVar15 = pFVar8 + 1;
        if (pFVar8 == (FName *)0x0) {
          pFVar15 = (FName *)0x0;
        }
        if (pFVar15 == (FName *)0x0) goto LAB_1425f9031;
        if ((((ulonglong)*pFVar15 <= &local_res10) &&
            (&local_res10 < (SWidget **)((longlong)*pFVar15 + (longlong)(int)pFVar15[1].Number * 8))
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = 0;
        uVar6 = pFVar15[1].ComparisonIndex.Value;
        if (uVar6 == 0) goto LAB_1425f8fde;
        FVar1 = *pFVar15;
        bVar4 = *(SWidget **)FVar1 != local_res10;
        pSVar11 = local_res10;
        uVar7 = uVar10;
        uVar17 = uVar10;
        do {
          uVar12 = (uint)uVar7;
          uVar13 = uVar12;
          do {
            uVar10 = uVar10 + 1;
            uVar13 = uVar13 + 1;
            uVar7 = (ulonglong)uVar13;
            if ((longlong)(int)uVar6 <= (longlong)uVar10) break;
          } while (bVar4 == (*(SWidget **)((longlong)FVar1 + uVar10 * 8) != pSVar11));
          if (bVar4 != false) {
            uVar16 = (uint)uVar17;
            if (uVar16 != uVar12) {
              memmove((longlong *)((longlong)FVar1 + (longlong)(int)uVar16 * 8),
                      (longlong *)((longlong)FVar1 + (longlong)(int)uVar12 * 8),
                      (longlong)(int)(uVar13 - uVar12) << 3);
              pSVar11 = local_res10;
            }
            uVar17 = (ulonglong)(uVar16 + (uVar13 - uVar12));
          }
          bVar4 = (bool)(bVar4 ^ 1);
        } while ((longlong)uVar10 < (longlong)(int)uVar6);
        pFVar15[1].ComparisonIndex.Value = (uint)uVar17;
        if ((uint)uVar17 == 0) {
LAB_1425f8fde:
          FVar1 = *FVar14.Data;
          local_70 = FVar1;
          if (*(int *)&(this->TrackedWidgets).field_0x8 !=
              *(int *)&(this->TrackedWidgets).field_0x34) {
            uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
            TSet<TTuple<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                 *)this,FVar1.Number + uVar6,&local_70);
          }
        }
        this_00 = TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                  ::Find((TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                          *)&this->TrackedWidgetsChangedEvents,*FVar14.Data);
        if (this_00 != (FTrackedWidgetsChangedEvent *)0x0) {
          TMulticastDelegate<void___cdecl(SWidget_const_*,FName_const_&,enum_ETrackedSlateWidgetOperations),FDefaultDelegateUserPolicy>
          ::Broadcast(this_00,local_res10,FVar14.Data,RemovedTrackedWidget);
        }
      }
    }
LAB_1425f9031:
    uVar7 = local_60[0]._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 1;
    uVar10 = (ulonglong)local_res20;
  } while( true );
  uVar6 = pFVar8[3].ComparisonIndex.Value;
  if (uVar6 == 0xffffffff) goto code_r0x0001425f8e87;
  goto LAB_1425f8e70;
code_r0x0001425f8e87:
  uVar7 = local_60[0]._8_8_ & 0xffffffff;
  FVar14.Data = FVar14.Data + 1;
  uVar10 = (ulonglong)local_res20;
  goto LAB_1425f8dfb;
}

