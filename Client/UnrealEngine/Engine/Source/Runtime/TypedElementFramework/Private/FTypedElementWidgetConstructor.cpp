// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 19

// StaticStruct @ 142c87930

UScriptStruct * __cdecl FTypedElementWidgetConstructor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementWidgetConstructor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTypedElementWidgetConstructor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementWidgetConstructor,(UObject *)pUVar1,
                         L"TypedElementWidgetConstructor");
  }
  return Z_Registration_Info_UScriptStruct_FTypedElementWidgetConstructor.OuterSingleton;
}

// GetAdditionalColumnsList @ 142c87970

TArrayView<UScriptStruct_const_*_const,int> * __thiscall
FTypedElementWidgetConstructor::GetAdditionalColumnsList
          (FTypedElementWidgetConstructor *this,
          TArrayView<UScriptStruct_const_*_const,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (UScriptStruct **)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// CreateWidgetDisplayNameText @ 142c87990

FText * __thiscall
FTypedElementWidgetConstructor::CreateWidgetDisplayNameText
          (FTypedElementWidgetConstructor *this,FText *__return_storage_ptr__,ICoreProvider *param_1
          ,ulong64 param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UObject *pUVar5;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  FWeakObjectPtr *this_00;
  int iVar13;
  FString local_98;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FScriptContainerElement *local_68;
  undefined8 uStack_60;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  longlong *local_48 [2];
  FString local_38;
  
  iVar1 = *(int *)&this->field_0x10;
  if (iVar1 == 0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"FTypedElementWidgetConstructor",L"TEDSColumn",L"TEDS Column"
              );
    return __return_storage_ptr__;
  }
  pcVar2 = *(code **)(*(longlong *)this + 0x80);
  if (iVar1 == 1) {
    pUVar5 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)&this->field_0x8);
    (*pcVar2)(this,__return_storage_ptr__,pUVar5);
  }
  else {
    if ((iVar1 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
    pUVar5 = FWeakObjectPtr::Get(*(FWeakObjectPtr **)&this->field_0x8);
    pFVar4 = (FText *)(*pcVar2)(this,&local_58,pUVar5);
    pFVar6 = FText::ToString(pFVar4);
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    lVar11 = (longlong)local_98.Data.ArrayNum;
    pFVar7 = (pFVar6->Data).AllocatorInstance.Data;
    if (local_98.Data.ArrayNum == 0) {
      local_98.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_98,local_98.Data.ArrayNum,
                 &local_98.Data.ArrayMax);
      memcpy(local_98.Data.AllocatorInstance.Data,pFVar7,lVar11 * 2);
    }
    if (local_58 != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_58 + 0x10))();
    }
    lVar11 = *(longlong *)&this->field_0x8;
    iVar1 = *(int *)&this->field_0x10;
    iVar13 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    FVar9.Data = local_98.Data.AllocatorInstance.Data;
    for (this_00 = (FWeakObjectPtr *)(lVar11 + 8);
        this_00 != (FWeakObjectPtr *)(lVar11 + (longlong)iVar1 * 8); this_00 = this_00 + 1) {
      pcVar2 = *(code **)(*(longlong *)this + 0x80);
      pUVar5 = FWeakObjectPtr::Get(this_00);
      pFVar4 = (FText *)(*pcVar2)(this,local_48,pUVar5);
      pFVar6 = FText::ToString(pFVar4);
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = (pFVar6->Data).ArrayNum;
      lVar12 = (longlong)local_80;
      pFVar7 = (pFVar6->Data).AllocatorInstance.Data;
      if (local_80 == 0) {
        local_7c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_80,0,&local_88,local_80,&local_7c);
        memcpy(local_88.Data,pFVar7,lVar12 * 2);
      }
      iVar10 = 0;
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      iVar8 = local_80 + -1;
      if (local_80 == 0) {
        iVar8 = 0;
      }
      if (FVar9.Data == FVar9.Data + (longlong)iVar13 * 2) {
LAB_142c87cc5:
        FText::FromString(__return_storage_ptr__,&local_98);
        FVar9.Data = local_88.Data;
        goto LAB_142c87c75;
      }
      pFVar7 = FVar9.Data;
      do {
        if ((pFVar7 + ((longlong)local_88.Data - (longlong)FVar9.Data) ==
             local_88.Data + (longlong)iVar8 * 2) ||
           (*(wchar_t *)pFVar7 !=
            *(wchar_t *)(pFVar7 + ((longlong)local_88.Data - (longlong)FVar9.Data)))) break;
        iVar10 = iVar10 + 1;
        pFVar7 = pFVar7 + 2;
      } while (pFVar7 != FVar9.Data + (longlong)iVar13 * 2);
      if (iVar10 < 3) goto LAB_142c87cc5;
      if (iVar10 < iVar13) {
        iVar13 = iVar10;
      }
      iStack_50 = 0;
      if (0 < iVar13) {
        iStack_50 = iVar13;
      }
      uStack_60 = CONCAT44(uStack_4c,iStack_50);
      local_68 = FVar9.Data;
      local_58 = FVar9.Data;
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
      iVar13 = (int)uStack_60;
      FVar9.Data = local_68;
    }
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    pFVar6 = ::FString::ConstructFromPtrSize(&local_38,(wchar_t *)FVar9.Data,iVar13);
    if (&local_78 != pFVar6) {
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_78.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FText::FromString(__return_storage_ptr__,&local_78);
    FVar9.Data = local_78.Data.AllocatorInstance.Data;
LAB_142c87c75:
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar9.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ConstructFinalWidget @ 142c87d30

TSharedPtr<SWidget,1> * __thiscall
FTypedElementWidgetConstructor::ConstructFinalWidget
          (FTypedElementWidgetConstructor *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          ulong64 param_1,ICoreProvider *param_2,IUiProvider *param_3,FMetaDataView *param_4)

{
  atomic<int> *paVar1;
  code *pcVar2;
  ICoreProvider IVar3;
  FSharedReferencer<1> FVar4;
  byte bVar5;
  byte bVar6;
  UScriptStruct *pUVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pcVar2 = *(code **)((longlong)*param_2 + 0xf0);
  pUVar7 = FTypedElementRowReferenceColumn::StaticStruct();
  puVar8 = (undefined8 *)(*pcVar2)(param_2,param_1,pUVar7);
  IVar3 = *param_2;
  if (puVar8 == (undefined8 *)0x0) {
    puVar10 = (undefined4 *)(**(code **)(*(longlong *)this + 0x28))(this,local_28);
    local_38 = *puVar10;
    uStack_34 = puVar10[1];
    uStack_30 = puVar10[2];
    uStack_2c = puVar10[3];
    (**(code **)((longlong)IVar3 + 0xb8))(param_2,param_1,&local_38);
    pTVar11 = (TSharedPtr<SWidget,1> *)
              (**(code **)(*(longlong *)this + 0x40))
                        (this,&local_38,param_1,param_2,param_3,param_4);
    if (__return_storage_ptr__ == pTVar11) goto LAB_142c87ed6;
    __return_storage_ptr__->Object = pTVar11->Object;
  }
  else {
    bVar5 = (**(code **)((longlong)IVar3 + 0x90))(param_2,*puVar8);
    lVar9 = (**(code **)(*(longlong *)this + 0x20))(this,param_2);
    if (lVar9 != 0) {
      if (bVar5 == 0) {
        return __return_storage_ptr__;
      }
      bVar6 = (**(code **)((longlong)*param_2 + 0x118))(param_2,*puVar8,lVar9);
      bVar5 = bVar5 & bVar6;
    }
    if (bVar5 == 0) {
      return __return_storage_ptr__;
    }
    pcVar2 = *(code **)((longlong)*param_2 + 0xb8);
    puVar10 = (undefined4 *)(**(code **)(*(longlong *)this + 0x28))(this,local_28);
    local_38 = *puVar10;
    uStack_34 = puVar10[1];
    uStack_30 = puVar10[2];
    uStack_2c = puVar10[3];
    (*pcVar2)(param_2,param_1,&local_38);
    pTVar11 = (TSharedPtr<SWidget,1> *)
              (**(code **)(*(longlong *)this + 0x40))
                        (this,&local_38,param_1,param_2,param_3,param_4);
    if (__return_storage_ptr__ == pTVar11) goto LAB_142c87ed6;
    __return_storage_ptr__->Object = pTVar11->Object;
  }
  pTVar11->Object = (SWidget *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&__return_storage_ptr__->SharedReferenceCount,&pTVar11->SharedReferenceCount);
LAB_142c87ed6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(uStack_2c,uStack_30));
  return __return_storage_ptr__;
}

// Construct @ 142c87f10

TSharedPtr<SWidget,1> * __thiscall
FTypedElementWidgetConstructor::Construct
          (FTypedElementWidgetConstructor *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          ulong64 param_1,ICoreProvider *param_2,IUiProvider *param_3,FMetaDataView *param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  char cVar6;
  UScriptStruct *pUVar7;
  undefined8 *puVar8;
  UPackage *pUVar9;
  undefined8 uVar10;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  
  uVar10 = 0;
  pcVar3 = *(code **)((longlong)*param_2 + 0xf0);
  pUVar7 = FTypedElementRowReferenceColumn::StaticStruct();
  puVar8 = (undefined8 *)(*pcVar3)(param_2,param_1,pUVar7);
  if (puVar8 != (undefined8 *)0x0) {
    uVar10 = *puVar8;
  }
  (**(code **)(*(longlong *)this + 0x68))(this,&local_28,param_2,param_3,uVar10,param_1,param_4);
  if (local_28 != (SWidget *)0x0) {
    pcVar3 = *(code **)((longlong)*param_2 + 0xf0);
    if (Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_TypedElementFramework();
      Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn,
                           (UObject *)pUVar9,L"TypedElementSlateWidgetReferenceColumn");
    }
    puVar8 = (undefined8 *)
             (*pcVar3)(param_2,param_1,
                       Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.
                       OuterSingleton);
    pTVar5 = local_20;
    *puVar8 = local_28;
    if (local_20 != (TReferenceControllerBase<1> *)puVar8[1]) {
      if (local_20 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)puVar8[1];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      puVar8[1] = pTVar5;
    }
    cVar6 = (**(code **)(*(longlong *)this + 0x78))(this,param_2,param_1);
    if (cVar6 != '\0') {
      cVar6 = (**(code **)(*(longlong *)this + 0x88))(this,param_2,param_3,param_1,&local_28);
      if (cVar6 != '\0') {
        AddDefaultWidgetColumns(this,param_1,param_2);
        __return_storage_ptr__->Object = local_28;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_20;
        local_20 = (TReferenceControllerBase<1> *)0x0;
        local_28 = (SWidget *)0x0;
        goto LAB_142c8809e;
      }
    }
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_142c8809e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return __return_storage_ptr__;
}

// ConstructColumnSorters @ 142c880d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<TSharedPtr<UE::Editor::DataStorage::FColumnSorterInterface_const_,1>,TSizedDefaultAllocator<32>_>
* __thiscall
FTypedElementWidgetConstructor::ConstructColumnSorters
          (FTypedElementWidgetConstructor *this,
          TArray<TSharedPtr<UE::Editor::DataStorage::FColumnSorterInterface_const_,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,ICoreProvider *param_1,IUiProvider *param_2,FMetaDataView *param_3
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TSharedPtr<UE::Editor::DataStorage::FColumnSorterInterface_const_,1>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  int iStack_180;
  undefined4 uStack_17c;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> local_178;
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_148;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = *(int *)&this->field_0x10;
  pcVar2 = *(code **)((longlong)*param_2 + 0xd0);
  local_188 = *(undefined8 *)&this->field_0x8;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<TSharedPtr<UE::Editor::DataStorage::FColumnSorterInterface_const_,1>,TSizedDefaultAllocator<32>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_168 = (undefined4)local_188;
  uStack_164 = local_188._4_4_;
  uStack_15c = uStack_17c;
  iStack_180 = iVar1;
  iStack_160 = iVar1;
  (*pcVar2)(param_2,__return_storage_ptr__,&local_168);
  local_148.AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0x20;
  TMapBase<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,0>_>
  ::GetKeys<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            ((TMapBase<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,0>_>
              *)&this->field_0x18,&local_148);
  iStack_170 = local_148.ArrayNum;
  pcVar2 = *(code **)((longlong)*param_2 + 0xd0);
  local_178 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)&local_148;
  if (local_148.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    local_178 = local_148.AllocatorInstance.SecondaryData;
  }
  if (local_148.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<TSharedPtr<UE::Editor::DataStorage::FColumnSorterInterface_const_,1>,TSizedDefaultAllocator<32>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  local_158 = local_178._0_4_;
  uStack_154 = local_178._4_4_;
  iStack_150 = iStack_170;
  uStack_14c = uStack_16c;
  (*pcVar2)(param_2,__return_storage_ptr__,&local_158);
  if (local_148.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// CreateWidgetDisplayName @ 142c88240

FString * __thiscall
FTypedElementWidgetConstructor::CreateWidgetDisplayName
          (FTypedElementWidgetConstructor *this,FString *__return_storage_ptr__,
          ICoreProvider *param_1,ulong64 param_2)

{
  FText *this_00;
  FString *pFVar1;
  longlong *local_18 [2];
  
  this_00 = (FText *)(**(code **)(*(longlong *)this + 0x30))(this,local_18);
  pFVar1 = FText::ToString(this_00);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return __return_storage_ptr__;
}

// Initialize @ 142c88290

bool __thiscall
FTypedElementWidgetConstructor::Initialize
          (FTypedElementWidgetConstructor *this,FMetaDataView *param_1,
          TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_2,FConditions *param_3)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  *(FConditions **)&this->field_0x70 = param_3;
  local_18.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18.ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  bVar2 = FTedsWidgetConstructorBase::Initialize_Internal
                    ((FTedsWidgetConstructorBase *)this,param_1,&local_18);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return bVar2;
}

// GetQueryConditions @ 142c882f0

FConditions * __thiscall
FTypedElementWidgetConstructor::GetQueryConditions(FTypedElementWidgetConstructor *this)

{
  undefined8 uVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  UPackage *pUVar7;
  FConditions *pFVar8;
  longlong *plVar9;
  
  FVar3 = UE::Editor::DataStorage::StorageFeatureName;
  pIVar5 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,FVar3);
  if (iVar4 < 1) {
    plVar9 = (longlong *)0x0;
  }
  else {
    pIVar5 = IModularFeatures::Get();
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,FVar3,0);
    plVar9 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar9 = (longlong *)0x0;
    }
  }
  uVar1 = *(undefined8 *)&this->field_0x68;
  pcVar2 = *(code **)(*plVar9 + 0xe8);
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetFactoryConditionsColumn,(UObject *)pUVar7,
                         L"WidgetFactoryConditionsColumn");
  }
  pFVar8 = (FConditions *)
           (*pcVar2)(plVar9,uVar1,
                     Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.OuterSingleton
                    );
  if (pFVar8 == (FConditions *)0x0) {
    pFVar8 = *(FConditions **)&this->field_0x70;
  }
  return pFVar8;
}

// CreateWidget @ 142c883c0

TSharedPtr<SWidget,1> * __thiscall
FTypedElementWidgetConstructor::CreateWidget
          (FTypedElementWidgetConstructor *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FMetaDataView *param_1)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CreateWidget @ 142c883e0

TSharedPtr<SWidget,1> * __thiscall
FTypedElementWidgetConstructor::CreateWidget
          (FTypedElementWidgetConstructor *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          ICoreProvider *param_1,IUiProvider *param_2,ulong64 param_3,ulong64 param_4,
          FMetaDataView *param_5)

{
  (**(code **)(*(longlong *)this + 0x70))(this,__return_storage_ptr__,param_5);
  return __return_storage_ptr__;
}

// SetColumns @ 142c88410

bool __thiscall
FTypedElementWidgetConstructor::SetColumns
          (FTypedElementWidgetConstructor *this,ICoreProvider *param_1,ulong64 param_2)

{
  return true;
}

// DescribeColumnType @ 142c88420

FText * __thiscall
FTypedElementWidgetConstructor::DescribeColumnType
          (FTypedElementWidgetConstructor *this,FText *__return_storage_ptr__,UScriptStruct *param_1
          )

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"FTypedElementWidgetConstructor",L"Invalid",L"<Invalid>");
  return __return_storage_ptr__;
}

// FinalizeWidget @ 142c88460

bool __thiscall
FTypedElementWidgetConstructor::FinalizeWidget
          (FTypedElementWidgetConstructor *this,ICoreProvider *param_1,IUiProvider *param_2,
          ulong64 param_3,TSharedPtr<SWidget,1> *param_4)

{
  return true;
}

// FTypedElementWidgetConstructor @ 142c98a00

FTypedElementWidgetConstructor * __thiscall
FTypedElementWidgetConstructor::FTypedElementWidgetConstructor
          (FTypedElementWidgetConstructor *this,UScriptStruct *param_1)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x44 = 0x80;
  *(undefined4 *)&this->field_0x4c = 0;
  *(undefined4 *)&this->field_0x48 = 0xffffffff;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7FTypedElementWidgetConstructor__6B_;
  *(UScriptStruct **)&this->field_0x78 = param_1;
  return this;
}

// ~FTypedElementWidgetConstructor @ 142c9a810

void __thiscall
FTypedElementWidgetConstructor::~FTypedElementWidgetConstructor
          (FTypedElementWidgetConstructor *this)

{
  *(undefined4 *)&this->field_0x60 = 0;
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x18);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  return;
}

// AddDefaultWidgetColumns @ 142ca2d60

void __thiscall
FTypedElementWidgetConstructor::AddDefaultWidgetColumns
          (FTypedElementWidgetConstructor *this,ulong64 param_1,ICoreProvider *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  undefined8 uVar2;
  ForAnyElementType _Src_00;
  int iVar3;
  bool bVar4;
  FText *this_00;
  FString *pFVar5;
  UScriptStruct *pUVar6;
  UPackage *pUVar7;
  longlong *plVar8;
  ulong64 *puVar9;
  longlong lVar10;
  ForAnyElementType local_res8;
  ForAnyElementType local_res18;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  code *local_38;
  ForAnyElementType *local_30;
  
  this_00 = (FText *)(**(code **)(*(longlong *)this + 0x30))(this,&local_38);
  pFVar5 = FText::ToString(this_00);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar5->Data).ArrayNum;
  lVar10 = (longlong)local_50;
  _Src = (pFVar5->Data).AllocatorInstance.Data;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,_Src,lVar10 * 2);
  }
  if (local_38 != (code *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  iVar3 = local_50;
  _Src_00.Data = local_58.Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = local_50;
  if (local_50 == 0) {
    local_3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_48,local_50,&local_3c);
    memcpy(local_48.Data,_Src_00.Data,(longlong)iVar3 * 2);
  }
  pcVar1 = *(code **)((longlong)*param_2 + 0xb0);
  local_res8.Data = (FScriptContainerElement *)&local_48;
  local_30 = &local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Editor::DataStorage::ICoreProvider::AddColumn<FTypedElementLabelColumn>'::__l2::<lambda_1>,void,void_*,UScriptStruct_const_&>
             ::Call;
  pUVar6 = FTypedElementLabelColumn::StaticStruct();
  (*pcVar1)(param_2,param_1,pUVar6,&local_38,
            `UE::Editor::DataStorage::ICoreProvider::AddColumn<FTypedElementLabelColumn>'::__l2::
            <lambda_2>::<lambda_invoker_cdecl>);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  uVar2 = *(undefined8 *)&this->field_0x68;
  pcVar1 = *(code **)((longlong)*param_2 + 0xf0);
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar7 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetFactoryColumn,(UObject *)pUVar7,
                         L"WidgetFactoryColumn");
  }
  plVar8 = (longlong *)
           (*pcVar1)(param_2,uVar2,
                     Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.OuterSingleton);
  if (plVar8 != (longlong *)0x0) {
    local_res8.Data = (FScriptContainerElement *)*plVar8;
    pcVar1 = *(code **)((longlong)*param_2 + 0xb0);
    local_res18.Data = (FScriptContainerElement *)&local_res8;
    local_30 = &local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Editor::DataStorage::ICoreProvider::AddColumn<FWidgetPurposeReferenceColumn>'::__l2::<lambda_1>,void,void_*,UScriptStruct_const_&>
               ::Call;
    if (Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_TypedElementFramework();
      Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FWidgetPurposeReferenceColumn,(UObject *)pUVar7
                           ,L"WidgetPurposeReferenceColumn");
    }
    (*pcVar1)(param_2,param_1,
              Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.OuterSingleton,
              &local_38,
              `UE::Editor::DataStorage::ICoreProvider::AddColumn<FWidgetPurposeReferenceColumn>'::
              __l2::<lambda_2>::<lambda_invoker_cdecl>);
  }
  bVar4 = UE::Editor::DataStorage::ICoreProvider::
          HasColumns<FTypedElementSlateWidgetReferenceColumn>(param_2,param_1);
  if (bVar4) {
    pcVar1 = *(code **)((longlong)*param_2 + 0xf0);
    pUVar6 = FTypedElementRowReferenceColumn::StaticStruct();
    puVar9 = (ulong64 *)(*pcVar1)(param_2,param_1,pUVar6);
    if (puVar9 != (ulong64 *)0x0) {
      bVar4 = UE::Editor::DataStorage::ICoreProvider::
              HasColumns<FTypedElementSlateWidgetReferenceColumn>(param_2,*puVar9);
      if (bVar4) {
        pcVar1 = *(code **)((longlong)*param_2 + 0xa8);
        if (Z_Registration_Info_UScriptStruct_FHideRowFromUITag.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar7 = Z_Construct_UPackage__Script_TypedElementFramework();
          Z_Registration_Info_UScriptStruct_FHideRowFromUITag.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FHideRowFromUITag,(UObject *)pUVar7,
                               L"HideRowFromUITag");
        }
        (*pcVar1)(param_2,param_1,Z_Registration_Info_UScriptStruct_FHideRowFromUITag.OuterSingleton
                 );
      }
    }
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// GetTargetRow @ 142caed60

ulong64 __thiscall
FTypedElementWidgetConstructor::GetTargetRow
          (FTypedElementWidgetConstructor *this,ICoreProvider *param_1,ulong64 param_2)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  ulong64 *puVar3;
  
  pcVar1 = *(code **)((longlong)*param_1 + 0xf0);
  pUVar2 = FTypedElementRowReferenceColumn::StaticStruct();
  puVar3 = (ulong64 *)(*pcVar1)(param_1,param_2,pUVar2);
  if (puVar3 != (ulong64 *)0x0) {
    return *puVar3;
  }
  return 0;
}

// GetWidgetFactoryRow @ 142caef10

ulong64 __thiscall
FTypedElementWidgetConstructor::GetWidgetFactoryRow(FTypedElementWidgetConstructor *this)

{
  return *(ulong64 *)&this->field_0x68;
}

