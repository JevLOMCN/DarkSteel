// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 35

// SetEventMouseButtonUpClick_WrapperImpl @ 14b748840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_RingCmd_MenuSlot::SetEventMouseButtonUpClick_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  if (*(char *)((longlong)param_1 + 0x750) == '\x01') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xb8),
               &FStack_28);
    if (((*(int *)((longlong)param_1 + 200) == 0) ||
        (*(longlong **)((longlong)param_1 + 0xc0) == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0xc0) + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x74c);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0xb8),&FStack_28);
      if (*(int *)((longlong)param_1 + 200) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)((longlong)param_1 + 0xc0);
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x75e) = *(undefined1 *)((longlong)param_1 + 0x75d);
  *(undefined1 *)((longlong)param_1 + 0x75d) = 0;
  UpdateSwitcher(param_1);
  return;
}

// SetEventMouseButtonDownClick_WrapperImpl @ 14b748850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_RingCmd_MenuSlot::SetEventMouseButtonDownClick_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)((longlong)param_1 + 0x75d) = 1;
  UpdateSwitcher(param_1);
  return;
}

// SetEventMouseButtonDoubleClick_WrapperImpl @ 14b748860

void __cdecl
UDS_VM_W_RingCmd_MenuSlot::SetEventMouseButtonDoubleClick_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  if (*(char *)((longlong)param_1 + 0x750) != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
               &FStack_28);
    if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
       (*(longlong **)((longlong)param_1 + 0xa8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0xa8) + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_28);
        uVar1 = *(undefined4 *)((longlong)param_1 + 0x74c);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)param_1 + 0xa0),&FStack_28);
        if (*(int *)((longlong)param_1 + 0xb0) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)((longlong)param_1 + 0xa8);
        }
        (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
  }
  return;
}

// SetEventMouseEnter_WrapperImpl @ 14b748870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_RingCmd_MenuSlot::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope FStack_28;
  
  *(undefined1 *)((longlong)param_1 + 0x75f) = 1;
  UpdateSwitcher(param_1);
  if (*(char *)((longlong)param_1 + 0x750) != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xd0),
               &FStack_28);
    if ((*(int *)((longlong)param_1 + 0xe0) != 0) &&
       (*(longlong **)((longlong)param_1 + 0xd8) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0xd8) + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_28);
        uVar1 = *(undefined4 *)((longlong)param_1 + 0x74c);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)param_1 + 0xd0),&FStack_28);
        if (*(int *)((longlong)param_1 + 0xe0) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)((longlong)param_1 + 0xd8);
        }
        (**(code **)(*plVar3 + 0x60))(plVar3,uVar1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b748880

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_RingCmd_MenuSlot::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope FStack_28;
  
  *(undefined1 *)((longlong)param_1 + 0x75e) = *(undefined1 *)((longlong)param_1 + 0x75d);
  *(undefined1 *)((longlong)param_1 + 0x75f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x75d) = 0;
  UpdateSwitcher(param_1);
  if (*(char *)((longlong)param_1 + 0x750) != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xd0),
               &FStack_28);
    if ((*(int *)((longlong)param_1 + 0xe0) != 0) &&
       (*(longlong **)((longlong)param_1 + 0xd8) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)((longlong)param_1 + 0xd8) + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   ((longlong)param_1 + 0xd0),&FStack_28);
        if (*(int *)((longlong)param_1 + 0xe0) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)((longlong)param_1 + 0xd8);
        }
        (**(code **)(*plVar2 + 0x60))(plVar2,0xffffffff);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&FStack_28);
  }
  return;
}

// SetEventOnDrop_WrapperImpl @ 14b748890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_RingCmd_MenuSlot::SetEventOnDrop_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  ForAnyElementType FVar8;
  undefined1 *puVar9;
  FObjectPtr_u_0 FVar10;
  undefined1 auStackY_4c8 [32];
  FWeakObjectPtr FStack_488;
  undefined8 *puStack_480;
  FObjectPtr_u_0 FStack_478;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> TStack_470;
  undefined8 *puStack_460;
  FObjectPtr_u_0 FStack_458;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> TStack_450;
  FObjectPtr_u_0 FStack_440;
  TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> TStack_438;
  long64 lStack_430;
  longlong lStack_428;
  FDS_RingCommandSlotData FStack_420;
  FDS_RingCommandSlotData aFStack_408 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_178;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if (*(char *)((longlong)param_1 + 0x750) != '\0') {
    if (*(longlong *)((longlong)param_2 + 8) == 0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        TStack_3b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_3b8,"UDS_VM_W_RingCmd_MenuSlot::OnEventOnDrop",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,TStack_3b8.Ptr,0xf0,
                   L"InDragDropEventField.DragDropOperation is nullptr");
        if ((void *)TStack_3b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_3b8._padding_);
        }
      }
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)((longlong)param_2 + 8),pUVar6);
      FVar10.Handle = (UObject *)0x0;
      FStack_440.Handle = FVar10.Handle;
      if (bVar4) {
        FStack_440.Handle = ((FObjectPtr_u_0 *)((longlong)param_2 + 8))->Handle;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FStack_440.Handle != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(FStack_440.Handle);
      }
      FStack_488.ObjectIndex = 0;
      FStack_488.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FStack_440.Handle != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(FStack_440.Handle);
      }
      FWeakObjectPtr::operator=(&FStack_488,(FObjectPtr)&FStack_440);
      bVar4 = TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr> *)&FStack_488,
                         (void *)0x0);
      if (bVar4) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          TStack_298._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_298,"UDS_VM_W_RingCmd_MenuSlot::OnEventOnDrop",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,TStack_298.Ptr,0xf7,L"dragDropOperation is nullptr");
          if ((void *)TStack_298._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_298._padding_);
          }
        }
      }
      else {
        UDS_RingCommandDeckData::GetData
                  ((ulong64)&TStack_438,UDS_PlayerData::MainPlayerEntityID,
                   SUB41(*(undefined4 *)((longlong)param_1 + 0x748),0));
        bVar4 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                          (&TStack_438,(void *)0x0);
        if (bVar4) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            TStack_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_178,"UDS_VM_W_RingCmd_MenuSlot::OnEventOnDrop",0x28,Yes);
            UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_178.Ptr,0xfe,L"ringCmdData is nullptr")
            ;
            if ((void *)TStack_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)TStack_178._padding_);
            }
          }
        }
        else {
          pUVar7 = FWeakObjectPtr::Get(&FStack_488);
          if ((*(longlong *)&pUVar7[4].field_0x8 == 0) ||
             (*(char *)(*(longlong *)&pUVar7[4].field_0x8 + 8) != '\x01')) {
            pUVar7 = FWeakObjectPtr::Get(&FStack_488);
            if (*(longlong *)&pUVar7[4].field_0x8 == 0) {
              return;
            }
            if (*(char *)(*(longlong *)&pUVar7[4].field_0x8 + 8) != '\x04') {
              return;
            }
            pUVar7 = FWeakObjectPtr::Get(&FStack_488);
            puVar1 = &pUVar7[4].field_0x8;
            if (*(longlong *)puVar1 == 0) {
              FStack_458.Handle = ::operator_new(0x38);
              if (FStack_458.Handle == (UObject *)0x0) {
                puStack_460 = ___xmm_00000000000000000000000000000010;
                puVar9 = &DAT_00000010;
                FStack_458 = _UNK_150651568;
              }
              else {
                *(undefined4 *)&(FStack_458.Handle)->field_0x8 = 1;
                puVar9 = &(FStack_458.Handle)->field_0x10;
                *(undefined4 *)&(FStack_458.Handle)->field_0xc = 1;
                *(undefined ***)FStack_458.Handle =
                     &
                     ___7__TIntrusiveReferenceController_UFDS_RingCmdSlotInfo___00_SharedPointerInternals__6B_
                ;
                *(undefined ***)&(FStack_458.Handle)->field_0x10 = &___7FDS_RingCmdSlotInfo__6B_;
                *(undefined8 *)&(FStack_458.Handle)->field_0x1c = 0;
                *(undefined8 *)&(FStack_458.Handle)->field_0x24 = 0;
                FStack_458.Handle[1].field_0x8 = 0;
                *(undefined4 *)&FStack_458.Handle[1].field_0xc = 0;
                if ((puVar9 == (undefined1 *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                LOCK();
                *(int *)&(FStack_458.Handle)->field_0x8 =
                     *(int *)&(FStack_458.Handle)->field_0x8 + 1;
                UNLOCK();
                FVar10.Handle = FStack_458.Handle;
                puStack_460 = (undefined8 *)puVar9;
              }
              if ((undefined8 **)puVar1 != &puStack_460) {
                *(undefined1 **)puVar1 = puVar9;
                puStack_460 = (undefined8 *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          ((FSharedReferencer<1> *)&pUVar7[4].field_0x10,
                           (FSharedReferencer<1> *)&FStack_458);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FStack_458.Handle);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar10.Handle);
            }
            lVar2 = *(longlong *)puVar1;
            if (lVar2 == 0) {
              return;
            }
            FDS_RingCommandSlotData::FDS_RingCommandSlotData
                      (aFStack_408,*(int *)((longlong)param_1 + 0x748),
                       *(int *)((longlong)param_1 + 0x74c));
            lStack_428 = (longlong)*(int *)(lVar2 + 0x24);
            FDS_RingCommandSlotData::SetSlotData
                      (aFStack_408,*(EDS_RingCmdType *)(lVar2 + 0x20),&lStack_428);
            TStack_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_450.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,0,&TStack_450.AllocatorInstance,1,&TStack_450.ArrayMax);
            *(undefined8 *)TStack_450.AllocatorInstance.Data = aFStack_408[0]._0_8_;
            *(undefined8 *)(TStack_450.AllocatorInstance.Data + 8) = aFStack_408[0]._8_8_;
            *(long64 *)(TStack_450.AllocatorInstance.Data + 0x10) = aFStack_408[0].SlotData;
            FDS_RingCommandService::RequestRingCommandSetting(&TStack_450);
            FVar8.Data = TStack_450.AllocatorInstance.Data;
          }
          else {
            pUVar7 = FWeakObjectPtr::Get(&FStack_488);
            puVar1 = &pUVar7[4].field_0x8;
            if (*(longlong *)puVar1 == 0) {
              FStack_478.Handle = ::operator_new(0x48);
              if (FStack_478.Handle == (UObject *)0x0) {
                puStack_480 = ___xmm_00000000000000000000000000000010;
                puVar9 = &DAT_00000010;
                FStack_478 = _UNK_150651568;
              }
              else {
                *(undefined4 *)&(FStack_478.Handle)->field_0x8 = 1;
                puVar9 = &(FStack_478.Handle)->field_0x10;
                *(undefined4 *)&(FStack_478.Handle)->field_0xc = 1;
                *(undefined ***)FStack_478.Handle =
                     &
                     ___7__TIntrusiveReferenceController_UFDS_ItemSlotInfo___00_SharedPointerInternals__6B_
                ;
                *(undefined ***)&(FStack_478.Handle)->field_0x10 = &___7FDS_ItemSlotInfo__6B_;
                *(undefined8 *)&(FStack_478.Handle)->field_0x1c = 0;
                *(undefined8 *)&(FStack_478.Handle)->field_0x24 = 0;
                FStack_478.Handle[1].field_0x9 = 0;
                *(undefined4 *)&FStack_478.Handle[1].field_0xc = 0;
                *(undefined8 *)&FStack_478.Handle[1].field_0x10 = 0;
                *(undefined8 *)&FStack_478.Handle[1].field_0x18 = 0;
                if ((puVar9 == (undefined1 *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                LOCK();
                *(int *)&(FStack_478.Handle)->field_0x8 =
                     *(int *)&(FStack_478.Handle)->field_0x8 + 1;
                UNLOCK();
                FVar10.Handle = FStack_478.Handle;
                puStack_480 = (undefined8 *)puVar9;
              }
              if ((undefined8 **)puVar1 != &puStack_480) {
                *(undefined1 **)puVar1 = puVar9;
                puStack_480 = (undefined8 *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          ((FSharedReferencer<1> *)&pUVar7[4].field_0x10,
                           (FSharedReferencer<1> *)&FStack_478);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FStack_478.Handle);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar10.Handle);
            }
            lVar2 = *(longlong *)puVar1;
            if (lVar2 == 0) {
              return;
            }
            FDS_RingCommandSlotData::FDS_RingCommandSlotData
                      (&FStack_420,*(int *)((longlong)param_1 + 0x748),
                       *(int *)((longlong)param_1 + 0x74c));
            lStack_430 = *(long64 *)(lVar2 + 0x30);
            FDS_RingCommandSlotData::SetSlotData(&FStack_420,Item,&lStack_430);
            TStack_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_470.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,0,&TStack_470.AllocatorInstance,1,&TStack_470.ArrayMax);
            *(undefined8 *)TStack_470.AllocatorInstance.Data = FStack_420._0_8_;
            *(undefined8 *)(TStack_470.AllocatorInstance.Data + 8) = FStack_420._8_8_;
            *(long64 *)(TStack_470.AllocatorInstance.Data + 0x10) = FStack_420.SlotData;
            FDS_RingCommandService::RequestRingCommandSetting(&TStack_470);
            FVar8.Data = TStack_470.AllocatorInstance.Data;
          }
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
          }
        }
      }
    }
  }
  return;
}

// SetSlotSelectedVisibility_WrapperImpl @ 14b7488a0

void __cdecl
UDS_VM_W_RingCmd_MenuSlot::SetSlotSelectedVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::SlotSelectedVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::SlotSelectedVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x6a8) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x6a8) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetAnimationFinishEvent_WrapperImpl @ 14b7488b0

void __cdecl
UDS_VM_W_RingCmd_MenuSlot::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)param_2 == *(longlong *)((longlong)param_1 + 0x6b8)) {
    *(undefined8 *)((longlong)param_1 + 0x6b8) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c0) = 0;
    *(undefined2 *)((longlong)param_1 + 0x6c4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6c8) = 1;
  }
  return;
}

// StaticClass @ 14b7488c0

UClass * __cdecl UDS_VM_W_RingCmd_MenuSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCmd_MenuSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCmd_MenuSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCmd_MenuSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCmd_MenuSlot,0x760,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_RingCmd_MenuSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCmd_MenuSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCmd_MenuSlot.InnerSingleton;
}

// UDS_VM_W_RingCmd_MenuSlot @ 14b74e680

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_RingCmd_MenuSlot * __thiscall
UDS_VM_W_RingCmd_MenuSlot::UDS_VM_W_RingCmd_MenuSlot
          (UDS_VM_W_RingCmd_MenuSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnDoubleClickRingMenuDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_MenuSlot__6B_;
  *(undefined8 *)&(this->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnHoverRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnHoverRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnHoverRingMenuDelegate).field_0x10 = 0;
  (this->EventMouseButtonUpClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUpClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUpClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUpClick).KeyEvent);
  (this->EventMouseButtonDownClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDownClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDownClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDownClick).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  this->ItemSlotBG_Vis = false;
  this->SlotBG_Vis = false;
  this->AddSlot_Vis = false;
  this->SwitcherSlotIndex = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->DeckNum = 0;
  this->SlotIndex = 0;
  this->bIsEditMode = false;
  this->SelectedDeckNum = -1;
  this->SelectedIndex = -1;
  this->RingCmdType = None;
  this->bIsClicked = false;
  this->preClicked = false;
  this->SlotHoverState = false;
  return this;
}

// UDS_VM_W_RingCmd_MenuSlot @ 14b74e8c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_VM_W_RingCmd_MenuSlot * __thiscall
UDS_VM_W_RingCmd_MenuSlot::UDS_VM_W_RingCmd_MenuSlot
          (UDS_VM_W_RingCmd_MenuSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&this->OnDoubleClickRingMenuDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_MenuSlot__6B_;
  *(undefined8 *)&(this->OnDoubleClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnClickRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnClickRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickRingMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnHoverRingMenuDelegate = 0;
  *(undefined8 *)&(this->OnHoverRingMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnHoverRingMenuDelegate).field_0x10 = 0;
  (this->EventMouseButtonUpClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUpClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUpClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUpClick).KeyEvent);
  (this->EventMouseButtonDownClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDownClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDownClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDownClick).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  this->ItemSlotBG_Vis = false;
  this->SlotBG_Vis = false;
  this->AddSlot_Vis = false;
  this->SwitcherSlotIndex = 0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->DeckNum = 0;
  this->SlotIndex = 0;
  this->bIsEditMode = false;
  this->SelectedDeckNum = -1;
  this->SelectedIndex = -1;
  this->RingCmdType = None;
  this->bIsClicked = false;
  this->preClicked = false;
  this->SlotHoverState = false;
  return this;
}

// ~UDS_VM_W_RingCmd_MenuSlot @ 14b74f9b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::~UDS_VM_W_RingCmd_MenuSlot(UDS_VM_W_RingCmd_MenuSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCmd_MenuSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  FPointerEvent::~FPointerEvent(&(this->EventOnDrop).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDownClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDownClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUpClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUpClick).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHoverRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnHoverRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoverRingMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnClickRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickRingMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClickRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnDoubleClickRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClickRingMenuDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b751710

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall
UDS_VM_W_RingCmd_MenuSlot::GetFieldNotificationDescriptor(UDS_VM_W_RingCmd_MenuSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_RingCmd_MenuSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b752200

UClass * __cdecl UDS_VM_W_RingCmd_MenuSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCmd_MenuSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCmd_MenuSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCmd_MenuSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCmd_MenuSlot,0x760,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_RingCmd_MenuSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCmd_MenuSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCmd_MenuSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_RingCmd_MenuSlot @ 14b752510

void __cdecl UDS_VM_W_RingCmd_MenuSlot::StaticRegisterNativesUDS_VM_W_RingCmd_MenuSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_RingCmd_MenuSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnRingCmdSlotIndexChagned @ 14b753860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_RingCmd_MenuSlot::execOnRingCmdSlotIndexChagned
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnRingCmdSlotIndexChagned((UDS_VM_W_RingCmd_MenuSlot *)param_1,local_res20[0],local_res10[0]);
  return;
}

// BindModel @ 14c003a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_MenuSlot::BindModel(UDS_VM_W_RingCmd_MenuSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168 [2];
  undefined1 local_158 [288];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)local_168);
  bVar1 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)local_168,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x20),
                 "UDS_VM_W_RingCmd_MenuSlot::BindModel",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0x5b,L"ringCmdData is nullptr");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(local_168);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 5),this);
    local_158._8_4_ = 0;
    local_158._0_8_ = OnRingCmdSlotIndexChagned;
    local_158._24_8_ = (ulonglong)(uint)local_158._12_4_ << 0x20;
    local_158._16_8_ = OnRingCmdSlotIndexChagned;
    pUVar3 = FWeakObjectPtr::Get(local_168);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_RingCmd_MenuSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultDelegateUserPolicy> *)
               (pUVar3 + 5),(UDS_VM_W_RingCmd_MenuSlot *)local_158,(pmf_365e3f21 *)this);
  }
  return;
}

// GetItemGradeColor @ 14c01aeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UDS_VM_W_RingCmd_MenuSlot::GetItemGradeColor
          (UDS_VM_W_RingCmd_MenuSlot *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_RingCommandDeckData *this_00;
  FDS_ItemBaseTableRow *pFVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  TSharedPtr<FDS_RingCommandSlotData,1> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pwVar4 = L"FFFFFF";
  ::FString::FString(__return_storage_ptr__,L"FFFFFF");
  UDS_RingCommandDeckData::GetData
            ((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DeckNum,0));
  bVar1 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_158,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCmd_MenuSlot::GetItemGradeColor",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x8e,L"ringCmdData is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&local_158);
    UDS_RingCommandDeckData::GetRingCommandData(this_00,&local_150,&this->SlotIndex);
    if ((local_150.Object != (FDS_RingCommandSlotData *)0x0) &&
       ((local_150.Object)->SlotType == Item)) {
      pFVar3 = FDS_ItemBaseTableRow::GetRef((local_150.Object)->SlotData,true);
      switch(pFVar3->ID_GradeType) {
      case High:
        pwVar4 = L"4E915A";
        break;
      case Rare:
        pwVar4 = L"4D75AE";
        break;
      case Epic:
        pwVar4 = L"874E98";
        break;
      case Legendary:
        pwVar4 = L"CFAE44";
        break;
      case Myth:
        pwVar4 = L"E39C50";
      }
      ::FString::operator=(__return_storage_ptr__,pwVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_150.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetSlotSwitcherIndex @ 14c01b700

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_VM_W_RingCmd_MenuSlot::GetSlotSwitcherIndex(UDS_VM_W_RingCmd_MenuSlot *this)

{
  int iVar1;
  
  if ((this->SlotHoverState == true) && (this->bIsClicked == false)) {
    return 0;
  }
  if ((this->SlotSelectedVisibility == Collapsed) && (this->bIsClicked != true)) {
    iVar1 = -1;
    if (this->RingCmdType == Item) {
      iVar1 = 2;
    }
    return iVar1;
  }
  return 1;
}

// IsAniPlaying @ 14c021830

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_RingCmd_MenuSlot::IsAniPlaying(UDS_VM_W_RingCmd_MenuSlot *this)

{
  return (this->AnimationEvent).AnimationEventType != None;
}

// IsSelected @ 14c023960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_VM_W_RingCmd_MenuSlot::IsSelected(UDS_VM_W_RingCmd_MenuSlot *this)

{
  if ((this->SelectedIndex == this->SlotIndex) && (this->DeckNum == this->SelectedDeckNum)) {
    return true;
  }
  return false;
}

// OnAnimationFinishEvent @ 14c024f90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::OnAnimationFinishEvent
          (UDS_VM_W_RingCmd_MenuSlot *this,FDS_WidgetAnimationEventField *param_1)

{
  if (param_1->AnimationName == (this->AnimationEvent).AnimationName) {
    (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
    (this->AnimationEvent).AnimationName.Number = 0;
    (this->AnimationEvent).AnimationPlayTime = 0.0;
    (this->AnimationEvent).AnimationEventType = None;
    (this->AnimationEvent).AnimationStateType = None;
    (this->AnimationEvent).NumberOfLoops = 1;
  }
  return;
}

// OnEventOnDrop @ 14c0299d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::OnEventOnDrop
          (UDS_VM_W_RingCmd_MenuSlot *this,FDS_DragDropEventField *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  ForAnyElementType FVar8;
  longlong *plVar9;
  FObjectPtr_u_0 FVar10;
  undefined1 auStackY_4c8 [32];
  FWeakObjectPtr local_488;
  longlong *local_480;
  FObjectPtr_u_0 FStack_478;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_470;
  longlong *local_460;
  FObjectPtr_u_0 FStack_458;
  TArray<FDS_RingCommandSlotData,TSizedDefaultAllocator<32>_> local_450;
  FObjectPtr_u_0 local_440;
  TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> local_438;
  long64 local_430;
  longlong local_428;
  FDS_RingCommandSlotData local_420;
  FDS_RingCommandSlotData local_408 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  if (this->bIsEditMode != false) {
    if ((param_1->DragDropOperation).field0_0x0.DebugPtr == (UDragDropOperation *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_3b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3b8,"UDS_VM_W_RingCmd_MenuSlot::OnEventOnDrop",0x28,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_3b8.Ptr,0xf0,
                   L"InDragDropEventField.DragDropOperation is nullptr");
        if ((void *)local_3b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3b8._padding_);
        }
      }
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_1->DragDropOperation,pUVar6);
      FVar10.Handle = (UObject *)0x0;
      local_440.Handle = FVar10.Handle;
      if (bVar4) {
        local_440 = (FObjectPtr_u_0)(param_1->DragDropOperation).field0_0x0.DebugPtr;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UDragDropOperation *)local_440.Handle != (UDragDropOperation *)0x0)) {
        UE::GC::MarkAsReachable(local_440.Handle);
      }
      local_488.ObjectIndex = 0;
      local_488.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UDragDropOperation *)local_440.Handle != (UDragDropOperation *)0x0)) {
        UE::GC::MarkAsReachable(local_440.Handle);
      }
      FWeakObjectPtr::operator=(&local_488,(FObjectPtr)&local_440);
      bVar4 = TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr> *)&local_488,
                         (void *)0x0);
      if (bVar4) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_298._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_298,"UDS_VM_W_RingCmd_MenuSlot::OnEventOnDrop",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_298.Ptr,0xf7,L"dragDropOperation is nullptr");
          if ((void *)local_298._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_298._padding_);
          }
        }
      }
      else {
        UDS_RingCommandDeckData::GetData
                  ((ulong64)&local_438,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DeckNum,0));
        bVar4 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                          (&local_438,(void *)0x0);
        if (bVar4) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_VM_W_RingCmd_MenuSlot::OnEventOnDrop",0x28,Yes);
            UDS_LogManager::PrintLog(pUVar5,1,Warning,local_178.Ptr,0xfe,L"ringCmdData is nullptr");
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
        else {
          pUVar7 = FWeakObjectPtr::Get(&local_488);
          if ((*(longlong *)&pUVar7[4].field_0x8 == 0) ||
             (*(char *)(*(longlong *)&pUVar7[4].field_0x8 + 8) != '\x01')) {
            pUVar7 = FWeakObjectPtr::Get(&local_488);
            if (*(longlong *)&pUVar7[4].field_0x8 == 0) {
              return;
            }
            if (*(char *)(*(longlong *)&pUVar7[4].field_0x8 + 8) != '\x04') {
              return;
            }
            pUVar7 = FWeakObjectPtr::Get(&local_488);
            puVar1 = &pUVar7[4].field_0x8;
            if (*(longlong *)puVar1 == 0) {
              FStack_458.Handle = ::operator_new(0x38);
              if ((UDragDropOperation *)FStack_458.Handle == (UDragDropOperation *)0x0) {
                local_460 = ___xmm_00000000000000000000000000000010;
                plVar9 = (longlong *)&DAT_00000010;
                FStack_458 = _UNK_150651568;
              }
              else {
                *(undefined4 *)&(FStack_458.Handle)->field_0x8 = 1;
                plVar9 = (longlong *)&(FStack_458.Handle)->field_0x10;
                *(undefined4 *)&(FStack_458.Handle)->field_0xc = 1;
                *(undefined ***)FStack_458.Handle =
                     &
                     ___7__TIntrusiveReferenceController_UFDS_RingCmdSlotInfo___00_SharedPointerInternals__6B_
                ;
                *(undefined ***)&(FStack_458.Handle)->field_0x10 = &___7FDS_RingCmdSlotInfo__6B_;
                *(undefined8 *)&(FStack_458.Handle)->field_0x1c = 0;
                *(undefined8 *)&(FStack_458.Handle)->field_0x24 = 0;
                FStack_458.Handle[1].field_0x8 = 0;
                *(int *)&FStack_458.Handle[1].field_0xc = 0;
                if ((plVar9 == (longlong *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                LOCK();
                *(int *)&(FStack_458.Handle)->field_0x8 =
                     (int)*(longlong *)&(FStack_458.Handle)->field_0x8 + 1;
                UNLOCK();
                FVar10.Handle = FStack_458.Handle;
                local_460 = plVar9;
              }
              if ((longlong **)puVar1 != &local_460) {
                *(longlong **)puVar1 = plVar9;
                local_460 = (longlong *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          ((FSharedReferencer<1> *)&pUVar7[4].field_0x10,
                           (FSharedReferencer<1> *)&FStack_458);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FStack_458.Handle);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar10.Handle);
            }
            lVar2 = *(longlong *)puVar1;
            if (lVar2 == 0) {
              return;
            }
            FDS_RingCommandSlotData::FDS_RingCommandSlotData
                      (local_408,this->DeckNum,this->SlotIndex);
            local_428 = (longlong)*(int *)(lVar2 + 0x24);
            FDS_RingCommandSlotData::SetSlotData
                      (local_408,*(EDS_RingCmdType *)(lVar2 + 0x20),&local_428);
            local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_450.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,0,&local_450.AllocatorInstance,1,&local_450.ArrayMax);
            *(undefined8 *)local_450.AllocatorInstance.Data = local_408[0]._0_8_;
            *(undefined8 *)(local_450.AllocatorInstance.Data + 8) = local_408[0]._8_8_;
            *(long64 *)(local_450.AllocatorInstance.Data + 0x10) = local_408[0].SlotData;
            FDS_RingCommandService::RequestRingCommandSetting(&local_450);
            FVar8.Data = local_450.AllocatorInstance.Data;
          }
          else {
            pUVar7 = FWeakObjectPtr::Get(&local_488);
            puVar1 = &pUVar7[4].field_0x8;
            if (*(longlong *)puVar1 == 0) {
              FStack_478.Handle = ::operator_new(0x48);
              if ((UDragDropOperation *)FStack_478.Handle == (UDragDropOperation *)0x0) {
                local_480 = ___xmm_00000000000000000000000000000010;
                plVar9 = (longlong *)&DAT_00000010;
                FStack_478 = _UNK_150651568;
              }
              else {
                *(undefined4 *)&(FStack_478.Handle)->field_0x8 = 1;
                plVar9 = (longlong *)&(FStack_478.Handle)->field_0x10;
                *(undefined4 *)&(FStack_478.Handle)->field_0xc = 1;
                *(undefined ***)FStack_478.Handle =
                     &
                     ___7__TIntrusiveReferenceController_UFDS_ItemSlotInfo___00_SharedPointerInternals__6B_
                ;
                *(undefined ***)&(FStack_478.Handle)->field_0x10 = &___7FDS_ItemSlotInfo__6B_;
                *(undefined8 *)&(FStack_478.Handle)->field_0x1c = 0;
                *(undefined8 *)&(FStack_478.Handle)->field_0x24 = 0;
                FStack_478.Handle[1].field_0x9 = 0;
                *(int *)&FStack_478.Handle[1].field_0xc = 0;
                (((TObjectPtr<UObject> *)&FStack_478.Handle[1].field_0x10)->field0_0x0).DebugPtr =
                     (UObject *)0x0;
                (((TObjectPtr<UWidget> *)&FStack_478.Handle[1].field_0x18)->field0_0x0).DebugPtr =
                     (UWidget *)0x0;
                if ((plVar9 == (longlong *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                LOCK();
                *(int *)&(FStack_478.Handle)->field_0x8 =
                     (int)*(longlong *)&(FStack_478.Handle)->field_0x8 + 1;
                UNLOCK();
                FVar10.Handle = FStack_478.Handle;
                local_480 = plVar9;
              }
              if ((longlong **)puVar1 != &local_480) {
                *(longlong **)puVar1 = plVar9;
                local_480 = (longlong *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          ((FSharedReferencer<1> *)&pUVar7[4].field_0x10,
                           (FSharedReferencer<1> *)&FStack_478);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FStack_478.Handle);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)FVar10.Handle);
            }
            lVar2 = *(longlong *)puVar1;
            if (lVar2 == 0) {
              return;
            }
            FDS_RingCommandSlotData::FDS_RingCommandSlotData
                      (&local_420,this->DeckNum,this->SlotIndex);
            local_430 = *(long64 *)(lVar2 + 0x30);
            FDS_RingCommandSlotData::SetSlotData(&local_420,Item,&local_430);
            local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_470.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,0,&local_470.AllocatorInstance,1,&local_470.ArrayMax);
            *(undefined8 *)local_470.AllocatorInstance.Data = local_420._0_8_;
            *(undefined8 *)(local_470.AllocatorInstance.Data + 8) = local_420._8_8_;
            *(long64 *)(local_470.AllocatorInstance.Data + 0x10) = local_420.SlotData;
            FDS_RingCommandService::RequestRingCommandSetting(&local_470);
            FVar8.Data = local_470.AllocatorInstance.Data;
          }
          if (FVar8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar8.Data);
          }
        }
      }
    }
  }
  return;
}

// OnRingCmdSlotIndexChagned @ 14c02f5b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::OnRingCmdSlotIndexChagned
          (UDS_VM_W_RingCmd_MenuSlot *this,int param_1,int param_2)

{
  ESlateVisibility EVar1;
  bool bVar2;
  FName local_18;
  int local_10;
  
  this->SelectedIndex = param_2;
  this->SelectedDeckNum = param_1;
  local_18 = FFieldNotificationClassDescriptor::SlotSelectedVisibility.FieldName;
  if (this->bIsEditMode == true) {
    if ((param_2 == this->SlotIndex) && (this->DeckNum == param_1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    EVar1 = Collapsed;
    if (bVar2) {
      EVar1 = HitTestInvisible;
    }
    if (this->SlotSelectedVisibility != EVar1) {
      local_10 = FFieldNotificationClassDescriptor::SlotSelectedVisibility.BitNumber;
      this->SlotSelectedVisibility = EVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
      UpdateSwitcher(this);
      return;
    }
  }
  else {
    if ((param_2 == this->SlotIndex) && (this->DeckNum == param_1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    this->SlotHoverState = bVar2;
  }
  UpdateSwitcher(this);
  return;
}

// OnSetViewModel @ 14c0344c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::OnSetViewModel
          (UDS_VM_W_RingCmd_MenuSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_RingCmdType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  ESlateVisibility EVar8;
  FColor FVar9;
  UDS_LogManager *pUVar10;
  UDS_RingCommandDeckData *pUVar11;
  UObject *pUVar12;
  FDS_ItemBaseTableRow *pFVar13;
  undefined4 extraout_var;
  wchar_t *pwVar14;
  undefined1 auStackY_6a8 [32];
  undefined1 local_678 [16];
  TSharedPtr<FDS_ViewModelContext_RingCmd,1> local_668;
  FWeakObjectPtr local_658;
  FWeakObjectPtr local_650;
  TSharedPtr<FDS_RingCommandSlotData,1> local_648;
  TSharedPtr<FDS_RingCommandSlotData,1> local_638;
  undefined8 local_628;
  FName local_618;
  int local_610;
  FName local_608;
  int local_600;
  FString local_5f8;
  TSharedPtr<FDS_ViewModelContext,1> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar3 = param_1->Object;
  if (pFVar3 == (FDS_ViewModelContext *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_5d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5d8,"UDS_VM_W_RingCmd_MenuSlot::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_5d8.Ptr,0x1e,L"InViewModelContext is nullptr");
      if ((void *)local_5d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5d8._padding_);
      }
    }
  }
  else {
    local_5e8.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_5e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_5e8.Object = pFVar3;
    SafeCast<FDS_ViewModelContext_RingCmd>(&local_668,&local_5e8);
    if (local_668.Object == (FDS_ViewModelContext_RingCmd *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_4b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4b8,"UDS_VM_W_RingCmd_MenuSlot::OnSetViewModel",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar10,1,Warning,local_4b8.Ptr,0x25,L"context is nullptr");
        if ((void *)local_4b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4b8._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_668.SharedReferenceCount.ReferenceController);
    }
    else {
      this->bIsEditMode = (local_668.Object)->bIsEditMode;
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
                (&this->OnClickRingMenuDelegate,&(local_668.Object)->OnClickRingMenuDelegate);
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
                (&this->OnDoubleClickRingMenuDelegate,
                 &(local_668.Object)->OnDoubleClickRingMenuDelegate);
      TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::operator=
                (&this->OnHoverRingMenuDelegate,&(local_668.Object)->OnHoverRingMenuDelegate);
      this->DeckNum = (local_668.Object)->RingCmdDeckNum;
      this->SlotIndex = (local_668.Object)->RingCmdIndex;
      TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)(local_678 + 8));
      bVar7 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)
                         (local_678 + 8),(void *)0x0);
      if (bVar7) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          local_398._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_398,"UDS_VM_W_RingCmd_MenuSlot::OnSetViewModel",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,local_398.Ptr,0x33,L"ringCmdDataSet is nullptr.");
          if ((void *)local_398._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_398._padding_);
          }
        }
      }
      else {
        UDS_RingCommandDeckData::GetData
                  ((ulong64)&local_658,UDS_PlayerData::MainPlayerEntityID,SUB41(this->DeckNum,0));
        bVar7 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)&local_658,
                           (void *)0x0);
        if (bVar7) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 != (UDS_LogManager *)0x0) {
            pUVar10 = UDS_LogManager::GetInst();
            local_278._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_278,"UDS_VM_W_RingCmd_MenuSlot::OnSetViewModel",0x29,Yes);
            UDS_LogManager::PrintLog(pUVar10,1,Warning,local_278.Ptr,0x3a,L"ringCmdData is nullptr")
            ;
            if ((void *)local_278._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_278._padding_);
            }
          }
        }
        else {
          pUVar11 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&local_658);
          UDS_RingCommandDeckData::GetRingCommandData(pUVar11,&local_648,&this->SlotIndex);
          if (local_648.Object != (FDS_RingCommandSlotData *)0x0) {
            pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_678 + 8));
            uVar4 = *(undefined8 *)&pUVar12[4].field_0x20;
            this->SelectedDeckNum = (int)uVar4;
            this->SelectedIndex = (int)((ulonglong)uVar4 >> 0x20);
            if ((local_648.Object == (FDS_RingCommandSlotData *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            EVar1 = (local_648.Object)->SlotType;
            this->RingCmdType = EVar1;
            if (EVar1 == Item) {
              pwVar14 = L"FFFFFF";
              ::FString::FString(&local_5f8,L"FFFFFF");
              UDS_RingCommandDeckData::GetData
                        ((ulong64)&local_650,UDS_PlayerData::MainPlayerEntityID,
                         SUB41(this->DeckNum,0));
              bVar7 = TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_RingCommandDeckData,FWeakObjectPtr> *)
                                 &local_650,(void *)0x0);
              if (bVar7) {
                pUVar10 = UDS_LogManager::GetInst();
                if (pUVar10 != (UDS_LogManager *)0x0) {
                  pUVar10 = UDS_LogManager::GetInst();
                  local_158._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,"UDS_VM_W_RingCmd_MenuSlot::GetItemGradeColor",0x2c,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar10,1,Warning,local_158.Ptr,0x8e,L"ringCmdData is nullptr");
                  if ((void *)local_158._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_158._padding_);
                  }
                }
              }
              else {
                pUVar11 = (UDS_RingCommandDeckData *)FWeakObjectPtr::Get(&local_650);
                UDS_RingCommandDeckData::GetRingCommandData(pUVar11,&local_638,&this->SlotIndex);
                if ((local_638.Object != (FDS_RingCommandSlotData *)0x0) &&
                   ((local_638.Object)->SlotType == Item)) {
                  pFVar13 = FDS_ItemBaseTableRow::GetRef((local_638.Object)->SlotData,true);
                  switch(pFVar13->ID_GradeType) {
                  case High:
                    pwVar14 = L"4E915A";
                    break;
                  case Rare:
                    pwVar14 = L"4D75AE";
                    break;
                  case Epic:
                    pwVar14 = L"874E98";
                    break;
                  case Legendary:
                    pwVar14 = L"CFAE44";
                    break;
                  case Myth:
                    pwVar14 = L"E39C50";
                  }
                  ::FString::operator=(&local_5f8,pwVar14);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_638.SharedReferenceCount.ReferenceController);
              }
              FVar9 = FColor::FromHex((FString *)local_678);
              (this->ItemGradeColor).field0_0x0 =
                   *(FColor_u_0 *)CONCAT44(extraout_var,FVar9.field0_0x0);
              if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
              }
              local_610 = FFieldNotificationClassDescriptor::ItemGradeColor.BitNumber;
              local_618 = FFieldNotificationClassDescriptor::ItemGradeColor.FieldName;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_618);
            }
            pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_678 + 8));
            FVar6 = FFieldNotificationClassDescriptor::SlotSelectedVisibility.FieldName;
            uVar4 = *(undefined8 *)&pUVar12[4].field_0x20;
            if (((this->SelectedIndex != this->SlotIndex) ||
                (this->DeckNum != this->SelectedDeckNum)) ||
               (EVar8 = HitTestInvisible, this->bIsEditMode == false)) {
              EVar8 = Collapsed;
            }
            local_628 = uVar4;
            if (this->SlotSelectedVisibility != EVar8) {
              local_600 = FFieldNotificationClassDescriptor::SlotSelectedVisibility.BitNumber;
              this->SlotSelectedVisibility = EVar8;
              local_608 = FVar6;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_608);
            }
            OnRingCmdSlotIndexChagned(this,(int)uVar4,local_628._4_4_);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_648.SharedReferenceCount.ReferenceController);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_668.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PlayAni @ 14c03d2c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_MenuSlot::PlayAni(UDS_VM_W_RingCmd_MenuSlot *this,FName param_1)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = param_1;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetEventMouseButtonDoubleClick @ 14c0410c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::SetEventMouseButtonDoubleClick
          (UDS_VM_W_RingCmd_MenuSlot *this,FDS_WidgetPointerEventField *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  if (this->bIsEditMode != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnDoubleClickRingMenuDelegate,&local_28);
    if ((*(int *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnDoubleClickRingMenuDelegate).field_0x8,
       plVar3 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar3 + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        iVar1 = this->SlotIndex;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnDoubleClickRingMenuDelegate,&local_28);
        if (*(int *)&(this->OnDoubleClickRingMenuDelegate).field_0x10 == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)&(this->OnDoubleClickRingMenuDelegate).field_0x8;
        }
        (**(code **)(*plVar3 + 0x60))(plVar3,iVar1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// SetEventMouseButtonDownClick @ 14c041160

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::SetEventMouseButtonDownClick
          (UDS_VM_W_RingCmd_MenuSlot *this,FDS_WidgetPointerEventField *param_1)

{
  this->bIsClicked = true;
  UpdateSwitcher(this);
  return;
}

// SetEventMouseButtonUpClick @ 14c041180

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::SetEventMouseButtonUpClick
          (UDS_VM_W_RingCmd_MenuSlot *this,FDS_WidgetPointerEventField *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  if (this->bIsEditMode == true) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnClickRingMenuDelegate,&local_28);
    if (((*(int *)&(this->OnClickRingMenuDelegate).field_0x10 == 0) ||
        (plVar3 = *(longlong **)&(this->OnClickRingMenuDelegate).field_0x8,
        plVar3 == (longlong *)0x0)) || (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      iVar1 = this->SlotIndex;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnClickRingMenuDelegate,&local_28);
      if (*(int *)&(this->OnClickRingMenuDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->OnClickRingMenuDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,iVar1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  this->preClicked = this->bIsClicked;
  this->bIsClicked = false;
  UpdateSwitcher(this);
  return;
}

// SetEventMouseEnter @ 14c041250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::SetEventMouseEnter
          (UDS_VM_W_RingCmd_MenuSlot *this,FDS_WidgetPointerEventField *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  this->SlotHoverState = true;
  UpdateSwitcher(this);
  if (this->bIsEditMode != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnHoverRingMenuDelegate,&local_28);
    if ((*(int *)&(this->OnHoverRingMenuDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnHoverRingMenuDelegate).field_0x8, plVar3 != (longlong *)0x0
       )) {
      cVar2 = (**(code **)(*plVar3 + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        iVar1 = this->SlotIndex;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnHoverRingMenuDelegate,&local_28);
        if (*(int *)&(this->OnHoverRingMenuDelegate).field_0x10 == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)&(this->OnHoverRingMenuDelegate).field_0x8;
        }
        (**(code **)(*plVar3 + 0x60))(plVar3,iVar1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// SetEventMouseLeave @ 14c0412f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::SetEventMouseLeave
          (UDS_VM_W_RingCmd_MenuSlot *this,FDS_WidgetPointerEventField *param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  this->preClicked = this->bIsClicked;
  this->SlotHoverState = false;
  this->bIsClicked = false;
  UpdateSwitcher(this);
  if (this->bIsEditMode != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnHoverRingMenuDelegate,&local_28);
    if ((*(int *)&(this->OnHoverRingMenuDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnHoverRingMenuDelegate).field_0x8, plVar2 != (longlong *)0x0
       )) {
      cVar1 = (**(code **)(*plVar2 + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnHoverRingMenuDelegate,&local_28);
        if (*(int *)&(this->OnHoverRingMenuDelegate).field_0x10 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)&(this->OnHoverRingMenuDelegate).field_0x8;
        }
        (**(code **)(*plVar2 + 0x60))(plVar2,0xffffffff);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// SetSlotSelectedVisibility @ 14c0437e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCmd_MenuSlot::SetSlotSelectedVisibility
          (UDS_VM_W_RingCmd_MenuSlot *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::SlotSelectedVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SlotSelectedVisibility.FieldName;
  if (this->SlotSelectedVisibility != *param_1) {
    this->SlotSelectedVisibility = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// StopAni @ 14c047b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_MenuSlot::StopAni(UDS_VM_W_RingCmd_MenuSlot *this,FName param_1)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = param_1;
  (this->AnimationEvent).AnimationEventType = StopAnimation;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  return;
}

// UnbindModel @ 14c048f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_MenuSlot::UnbindModel(UDS_VM_W_RingCmd_MenuSlot *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  TDS_DataSetGetter<UDS_RingCommandDeckDataSet>::Get((ulong64)local_148);
  bVar1 = TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_RingCommandDeckDataSet,FWeakObjectPtr> *)local_148,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCmd_MenuSlot::UnbindModel",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x68,L"ringCmdData is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(local_148);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 5),this);
  }
  return;
}

// UpdateSwitcher @ 14c04ed90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_RingCmd_MenuSlot::UpdateSwitcher(UDS_VM_W_RingCmd_MenuSlot *this)

{
  FDS_EventDelegate<int_const_,int_const_> *this_00;
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FName *pFVar10;
  UDS_RingCommandUIEvent *pUVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  FName local_res8;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FDestructionSentinel local_48;
  
  if ((this->SlotHoverState == true) && (this->bIsClicked == false)) {
    iVar14 = 0;
  }
  else {
    if ((this->SlotSelectedVisibility == Collapsed) && (this->bIsClicked != true)) {
      this->SlotBG_Vis = false;
      this->AddSlot_Vis = false;
      this->ItemSlotBG_Vis = false;
      if (this->RingCmdType == Item) {
        this->SwitcherSlotIndex = 2;
        this->ItemSlotBG_Vis = true;
      }
      else {
        this->SwitcherSlotIndex = -1;
      }
      goto LAB_14c04eefb;
    }
    iVar14 = 1;
  }
  this->SwitcherSlotIndex = iVar14;
  this->AddSlot_Vis = false;
  this->SlotBG_Vis = false;
  this->ItemSlotBG_Vis = false;
  if (this->SelectedIndex < 0) {
LAB_14c04ee8c:
    if (this->RingCmdType == Item) {
      this->ItemSlotBG_Vis = true;
    }
    else {
      this->SlotBG_Vis = true;
    }
    if (((this->AnimationEvent).AnimationEventType == None) && (this->preClicked == false)) {
      pFVar10 = ::FName::FName(&local_res8,L"Hover_Ani");
      (this->AnimationEvent).AnimationName = *pFVar10;
      (this->AnimationEvent).AnimationEventType = PlayForward;
      local_90 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
  }
  else {
    if (this->SlotIndex == this->SelectedIndex) {
      if (this->DeckNum == this->SelectedDeckNum) goto LAB_14c04ee8c;
    }
    else if (this->DeckNum != this->SelectedDeckNum) {
      this->AddSlot_Vis = true;
      goto LAB_14c04eefb;
    }
    this->AddSlot_Vis = true;
  }
LAB_14c04eefb:
  local_80 = FFieldNotificationClassDescriptor::SwitcherSlotIndex.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::SwitcherSlotIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_70 = FFieldNotificationClassDescriptor::AddSlot_Vis.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::AddSlot_Vis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  local_60 = FFieldNotificationClassDescriptor::SlotBG_Vis.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::SlotBG_Vis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  local_50 = FFieldNotificationClassDescriptor::ItemSlotBG_Vis.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::ItemSlotBG_Vis.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  pUVar11 = UDS_EventManager::GetEvent<UDS_RingCommandUIEvent>();
  if (pUVar11 != (UDS_RingCommandUIEvent *)0x0) {
    this_00 = &pUVar11->OnRingCmdSlotStateChanged;
    iVar14 = this->SlotIndex;
    iVar2 = this->SwitcherSlotIndex;
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_48);
      puVar1 = &(pUVar11->OnRingCmdSlotStateChanged).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar12 = *(int *)&(pUVar11->OnRingCmdSlotStateChanged).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar12 < *(int *)&(pUVar11->OnRingCmdSlotStateChanged).Delegate.field_0x10) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(pUVar11->OnRingCmdSlotStateChanged).Delegate.field_0x8;
          if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar13 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,iVar14,iVar2), cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      puVar1 = &(pUVar11->OnRingCmdSlotStateChanged).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
  }
  return;
}

