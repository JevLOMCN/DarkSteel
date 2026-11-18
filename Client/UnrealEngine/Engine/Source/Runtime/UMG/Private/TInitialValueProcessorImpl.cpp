// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 14

// Finalize @ 146919950

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Finalize(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this)

{
  int *piVar1;
  
  piVar1 = &(this->ValuesByChannel).Pairs.ArrayMax;
  (this->ValuesByChannel).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->ValuesByChannel,0,piVar1);
    this->Interrogation = (IInterrogationExtension *)0x0;
    this->CacheStorage =
         (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          *)0x0;
    return;
  }
  this->Interrogation = (IInterrogationExtension *)0x0;
  this->CacheStorage =
       (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
        *)0x0;
  return;
}

// Finalize @ 1469199c0

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Finalize(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this)

{
  int *piVar1;
  
  piVar1 = &(this->ValuesByChannel).Pairs.ArrayMax;
  (this->ValuesByChannel).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->ValuesByChannel,0,piVar1);
    this->Interrogation = (IInterrogationExtension *)0x0;
    this->CacheStorage =
         (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          *)0x0;
    return;
  }
  this->Interrogation = (IInterrogationExtension *)0x0;
  this->CacheStorage =
       (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
        *)0x0;
  return;
}

// Initialize @ 146929fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Initialize(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
             *this,UMovieSceneEntitySystemLinker *param_1,FInitialValueCache *param_2)

{
  longlong lVar1;
  ICustomPropertyRegistration *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  IInterrogationExtension *pIVar6;
  FEntityAllocationWriteContext *pFVar7;
  undefined8 *puVar8;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
  *pTVar9;
  int iVar10;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
  *pTVar11;
  undefined1 *puVar12;
  TComponentTypeID<UE::MovieScene::FIntermediateMargin> local_res8 [4];
  TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>
  local_res10;
  FEntityAllocationWriteContext local_res20;
  TComponentTypeID<UE::MovieScene::FIntermediateMargin> *local_48;
  TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>
  **local_40;
  undefined1 local_38 [24];
  
  pIVar6 = UMovieSceneEntitySystemLinker::FindExtension<UE::MovieScene::IInterrogationExtension>
                     (param_1);
  this->Interrogation = pIVar6;
  pFVar7 = FEntityAllocationWriteContext::FEntityAllocationWriteContext
                     (&local_res20,&param_1->EntityManager);
  pIVar2 = this->CustomPropertyRegistration;
  (this->WriteContext).SystemSerial = pFVar7->SystemSerial;
  if (pIVar2 != (ICustomPropertyRegistration *)0x0) {
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_38);
    uVar4 = puVar8[1];
    (this->CustomAccessors).Base = (uchar *)*puVar8;
    (this->CustomAccessors).ViewNum = (int)uVar4;
    (this->CustomAccessors).Stride = (int)((ulonglong)uVar4 >> 0x20);
  }
  if (param_2 != (FInitialValueCache *)0x0) {
    local_res8[0] = this->InitialValueType;
    if (*(int *)&(param_2->StorageByComponent).field_0x8 !=
        *(int *)&(param_2->StorageByComponent).field_0x34) {
      puVar12 = *(undefined1 **)&(param_2->StorageByComponent).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(param_2->StorageByComponent).field_0x38;
      }
      iVar10 = *(int *)(puVar12 +
                       ((ulonglong)(*(int *)&(param_2->StorageByComponent).field_0x48 - 1) &
                       (ulonglong)(ushort)local_res8[0]) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *(longlong *)&param_2->StorageByComponent + (longlong)iVar10 * 0x18;
          if (*(TComponentTypeID<UE::MovieScene::FIntermediateMargin> *)
               (*(longlong *)&param_2->StorageByComponent + (longlong)iVar10 * 0x18) ==
              local_res8[0]) {
            pTVar11 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
                       *)(lVar1 + 8);
            if (lVar1 == 0) {
              pTVar11 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
                         *)0x0;
            }
            if (pTVar11 !=
                (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
                 *)0x0) {
              if ((pTVar11->_padding_ == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Existing->IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                                     ,0x86,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pTVar11 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
                         *)pTVar11->_padding_;
              if (pTVar11 !=
                  (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
                   *)0x0) goto LAB_14692a15d;
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x10);
        } while (iVar10 != -1);
      }
    }
    pTVar9 = ::operator_new(0x98);
    pTVar11 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
               *)0x0;
    if (pTVar9 != (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
                   *)0x0) {
      pTVar9->_padding_ = 0;
      *(undefined8 *)&pTVar9->PropertyValues = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x8 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x10 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x18 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x20 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x28 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x30 = 0;
      *(undefined8 *)&pTVar9->KeyToPropertyIndex = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x8 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x10 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x18 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x20 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x28 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x30 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x38 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x40 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x48 = 0;
      *(undefined8 *)&pTVar9->bLUTContainsInvalidEntries = 0;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TPropertyValueStorage_U__TPropertyTraits_UFMargin__UFIntermediateMargin_MovieScene_UE___00_MovieScene_UE___MovieScene_UE__6B_
      ;
      *(undefined4 *)&(pTVar9->PropertyValues).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar9->PropertyValues).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar9->KeyToPropertyIndex).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar9->KeyToPropertyIndex).field_0x30 = 0xffffffff;
      pTVar11 = pTVar9;
    }
    local_48 = local_res8;
    local_40 = &local_res10.Value;
    local_res10.Value =
         (TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>
          *)pTVar11;
    TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>_>
              ((TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
                *)param_2,&local_res10,(bool *)&local_48);
    if ((TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
         *)local_res10.Value !=
        (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
         *)0x0) {
      (**(code **)(local_res10.Value)->Ptr)(local_res10.Value,1);
    }
LAB_14692a15d:
    this->CacheStorage = pTVar11;
  }
  return;
}

// Initialize @ 14692a180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Initialize(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
             *this,UMovieSceneEntitySystemLinker *param_1,FInitialValueCache *param_2)

{
  longlong lVar1;
  ICustomPropertyRegistration *pIVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  IInterrogationExtension *pIVar6;
  FEntityAllocationWriteContext *pFVar7;
  undefined8 *puVar8;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
  *pTVar9;
  int iVar10;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
  *pTVar11;
  undefined1 *puVar12;
  TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> local_res8 [4];
  TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>
  local_res10;
  FEntityAllocationWriteContext local_res20;
  TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> *local_48;
  TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>
  **local_40;
  undefined1 local_38 [24];
  
  pIVar6 = UMovieSceneEntitySystemLinker::FindExtension<UE::MovieScene::IInterrogationExtension>
                     (param_1);
  this->Interrogation = pIVar6;
  pFVar7 = FEntityAllocationWriteContext::FEntityAllocationWriteContext
                     (&local_res20,&param_1->EntityManager);
  pIVar2 = this->CustomPropertyRegistration;
  (this->WriteContext).SystemSerial = pFVar7->SystemSerial;
  if (pIVar2 != (ICustomPropertyRegistration *)0x0) {
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_38);
    uVar4 = puVar8[1];
    (this->CustomAccessors).Base = (uchar *)*puVar8;
    (this->CustomAccessors).ViewNum = (int)uVar4;
    (this->CustomAccessors).Stride = (int)((ulonglong)uVar4 >> 0x20);
  }
  if (param_2 != (FInitialValueCache *)0x0) {
    local_res8[0] = this->InitialValueType;
    if (*(int *)&(param_2->StorageByComponent).field_0x8 !=
        *(int *)&(param_2->StorageByComponent).field_0x34) {
      puVar12 = *(undefined1 **)&(param_2->StorageByComponent).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(param_2->StorageByComponent).field_0x38;
      }
      iVar10 = *(int *)(puVar12 +
                       ((ulonglong)(*(int *)&(param_2->StorageByComponent).field_0x48 - 1) &
                       (ulonglong)(ushort)local_res8[0]) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *(longlong *)&param_2->StorageByComponent + (longlong)iVar10 * 0x18;
          if (*(TComponentTypeID<UE::MovieScene::FIntermediateWidgetTransform> *)
               (*(longlong *)&param_2->StorageByComponent + (longlong)iVar10 * 0x18) ==
              local_res8[0]) {
            pTVar11 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                       *)(lVar1 + 8);
            if (lVar1 == 0) {
              pTVar11 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                         *)0x0;
            }
            if (pTVar11 !=
                (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                 *)0x0) {
              if ((pTVar11->_padding_ == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Existing->IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                                     ,0x86,L""), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pTVar11 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                         *)pTVar11->_padding_;
              if (pTVar11 !=
                  (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                   *)0x0) goto LAB_14692a33d;
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x10);
        } while (iVar10 != -1);
      }
    }
    pTVar9 = ::operator_new(0x98);
    pTVar11 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
               *)0x0;
    if (pTVar9 != (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                   *)0x0) {
      pTVar9->_padding_ = 0;
      *(undefined8 *)&pTVar9->PropertyValues = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x8 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x10 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x18 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x20 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x28 = 0;
      *(undefined8 *)&(pTVar9->PropertyValues).field_0x30 = 0;
      *(undefined8 *)&pTVar9->KeyToPropertyIndex = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x8 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x10 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x18 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x20 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x28 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x30 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x38 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x40 = 0;
      *(undefined8 *)&(pTVar9->KeyToPropertyIndex).field_0x48 = 0;
      *(undefined8 *)&pTVar9->bLUTContainsInvalidEntries = 0;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TPropertyValueStorage_U__TPropertyTraits_UFWidgetTransform__UFIntermediateWidgetTransform_MovieScene_UE___00_MovieScene_UE___MovieScene_UE__6B_
      ;
      *(undefined4 *)&(pTVar9->PropertyValues).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar9->PropertyValues).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar9->KeyToPropertyIndex).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar9->KeyToPropertyIndex).field_0x30 = 0xffffffff;
      pTVar11 = pTVar9;
    }
    local_48 = local_res8;
    local_40 = &local_res10.Value;
    local_res10.Value =
         (TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>
          *)pTVar11;
    TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>_>
              ((TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
                *)param_2,&local_res10,(bool *)&local_48);
    if ((TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
         *)local_res10.Value !=
        (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
         *)0x0) {
      (**(code **)(local_res10.Value)->Ptr)(local_res10.Value,1);
    }
LAB_14692a33d:
    this->CacheStorage = pTVar11;
  }
  return;
}

// PopulateFilter @ 146932200

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::PopulateFilter(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                 *this,FEntityComponentFilter *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *this_00;
  FComponentTypeID local_res8;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_resa;
  FComponentTypeID local_resc [14];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res8.Value = *(ushort *)&this->BuiltInComponents->BoundObject;
  local_resa = (this->BuiltInComponents->Interrogation).OutputKey;
  piVar1 = &(param_1->ComplexMasks).ArrayMax;
  iVar2 = (param_1->ComplexMasks).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&(param_1->ComplexMasks).AllocatorInstance,piVar1);
  }
  (param_1->ComplexMasks).ArrayNum = iVar2 + 1;
  local_18._First = &local_res8;
  this_00 = (param_1->ComplexMasks).AllocatorInstance.Data + (longlong)iVar2 * 0x3c;
  local_18._Last = local_resc;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  FComponentMask::SetAll((FComponentMask *)this_00,&local_18);
  return;
}

// PopulateFilter @ 146932290

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::PopulateFilter(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                 *this,FEntityComponentFilter *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *this_00;
  FComponentTypeID local_res8;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> local_resa;
  FComponentTypeID local_resc [14];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res8.Value = *(ushort *)&this->BuiltInComponents->BoundObject;
  local_resa = (this->BuiltInComponents->Interrogation).OutputKey;
  piVar1 = &(param_1->ComplexMasks).ArrayMax;
  iVar2 = (param_1->ComplexMasks).ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&(param_1->ComplexMasks).AllocatorInstance,piVar1);
  }
  (param_1->ComplexMasks).ArrayNum = iVar2 + 1;
  local_18._First = &local_res8;
  this_00 = (param_1->ComplexMasks).AllocatorInstance.Data + (longlong)iVar2 * 0x3c;
  local_18._Last = local_resc;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  FComponentMask::SetAll((FComponentMask *)this_00,&local_18);
  return;
}

// Process @ 146934210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Process(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
          *this,FEntityAllocation *param_1,FComponentMask *param_2)

{
  undefined8 *puVar1;
  uchar uVar2;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar3;
  ushort uVar4;
  undefined2 uVar5;
  EComponentHeaderLockMode EVar6;
  int iVar7;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
  *pTVar8;
  UObject *pUVar9;
  undefined1 *puVar10;
  longlong lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *pTVar16;
  bool bVar17;
  uint uVar18;
  undefined8 *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  FResolvedPropertyAndFunction *this_00;
  FMargin *pFVar22;
  FName *pFVar23;
  FComponentHeader *pFVar24;
  ulonglong uVar25;
  int iVar26;
  undefined1 *puVar27;
  wchar_t *pwVar28;
  longlong lVar29;
  longlong lVar30;
  FComponentHeader *pFVar31;
  longlong lVar32;
  undefined8 *puVar33;
  FComponentHeader *pFVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [4];
  undefined1 auStack_264 [12];
  FComponentHeader *pFStack_258;
  FWeakObjectPtr FStack_250;
  undefined1 auStack_248 [8];
  FComponentHeader *pFStack_240;
  FWeakObjectPtr FStack_238;
  FWeakObjectPtr FStack_230;
  FWeakObjectPtr FStack_228;
  FWeakObjectPtr FStack_220;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *pTStack_218;
  EComponentHeaderLockMode EStack_210;
  ulonglong uStack_208;
  FComponentHeader *pFStack_200;
  undefined8 uStack_1f8;
  ushort *puStack_1f0;
  undefined1 auStack_1e8 [32];
  UObject *pUStack_1c8;
  UObject *pUStack_1c0;
  FName FStack_1b8;
  UObject *pUStack_1b0;
  UObject *pUStack_1a8;
  UObject *pUStack_1a0;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> TStack_198;
  undefined1 auStack_178 [24];
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  TStack_140;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  FName FStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [32];
  FKeyType FStack_c0;
  FKeyType FStack_ac;
  undefined1 auStack_98 [28];
  undefined2 uStack_7c;
  undefined1 uStack_74;
  FIntermediateMargin FStack_70;
  
  if ((((this->Interrogation != (IInterrogationExtension *)0x0) &&
       (TVar3 = (this->BuiltInComponents->Interrogation).OutputKey,
       TVar3 != (TComponentTypeID<UE::MovieScene::FInterrogationKey>)0xffff)) &&
      ((int)(uint)(ushort)TVar3 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[(ushort)TVar3 >> 5].Pad >>
       ((ushort)TVar3 & 0x1f) & 1) != 0)) {
    VisitInterrogationAllocation(this,param_1);
    return;
  }
  if (this->CacheStorage ==
      (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
       *)0x0) {
    VisitAllocation(this,param_1);
    return;
  }
  FStack_70.Bottom = (double)(__security_cookie.value ^ (ulonglong)auStack_288);
  uVar25 = (ulonglong)param_1->Size;
  pTStack_218 = this;
  FEntityAllocation::WriteComponents<UE::MovieScene::FInitialValueIndex>
            (param_1,&TStack_198,this->BuiltInComponents->InitialValueIndex,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateMargin>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> *
                     )auStack_1e8,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  pFStack_258 = param_1->ComponentHeaders;
  pFVar31 = pFStack_258 + param_1->NumComponents;
  for (; pFStack_258 != pFVar31; pFStack_258 = pFStack_258 + 1) {
    pFVar34 = pFStack_258;
    if ((TComponentTypeID<UObject_*>)(pFStack_258->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14694b8c6;
  }
  pFStack_258 = (FComponentHeader *)0x0;
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar34 = (FComponentHeader *)0x0;
  if (bVar17) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
LAB_14694b8c6:
  EStack_210 = param_1->LockMode;
  if (EStack_210 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar34->ReadWriteLock);
  }
  LOCK();
  pFVar34->ScheduledAccessCount = (atomic<int>)((int)pFVar34->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar31 = param_1->ComponentHeaders;
  auStack_264._4_8_ = pFVar34->Components;
  pFVar24 = pFVar31 + param_1->NumComponents;
  for (; pFVar31 != pFVar24; pFVar31 = pFVar31 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar31->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      EVar6 = param_1->LockMode;
      pFStack_240 = pFVar31;
      if (EVar6 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar31->ReadWriteLock);
      }
      LOCK();
      pFVar31->ScheduledAccessCount = (atomic<int>)((int)pFVar31->ScheduledAccessCount + 1);
      UNLOCK();
      puStack_1f0 = (ushort *)pFVar31->Components;
      uStack_1f8 = CONCAT44(uStack_1f8._4_4_,EVar6);
      pFStack_200 = pFVar31;
      goto LAB_14694b943;
    }
  }
  pFStack_240 = (FComponentHeader *)0x0;
  uStack_1f8 = 0;
  puStack_1f0 = (ushort *)0x0;
  pFStack_200 = (FComponentHeader *)0x0;
LAB_14694b943:
  pFVar31 = pFStack_200;
  pTVar16 = pTStack_218;
  uStack_208 = uVar25;
  if (puStack_1f0 == (ushort *)0x0) {
    FEntityAllocation::TryReadComponents<unsigned_short>
              (param_1,(TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> *)auStack_178
               ,this->BuiltInComponents->FastPropertyOffset);
    if ((FComponentHeader *)auStack_178._16_8_ == (FComponentHeader *)0x0) {
      FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                (param_1,&TStack_140,this->BuiltInComponents->SlowProperty);
      if ((TStack_140._16_8_ != 0) && (uVar25 != 0)) {
        lVar32 = 0;
        lVar29 = 0;
        lVar30 = 0;
        do {
          pTVar8 = this->CacheStorage;
          if ((*(longlong *)(TStack_140._16_8_ + lVar29) == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(int *)(*(longlong *)(TStack_140._16_8_ + lVar29) + 0x58) == 0) {
            pwVar28 = L"";
          }
          else {
            pwVar28 = *(wchar_t **)(*(longlong *)(TStack_140._16_8_ + lVar29) + 0x50);
          }
          ::FName::FName(&FStack_1b8,pwVar28);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          ::FindPropertyIndex(pTVar8,(UObject *)auStack_248,
                              *(FName **)(auStack_264._4_8_ + lVar32 * 8));
          uVar13 = auStack_264._4_8_;
          if (auStack_248[2] == '\0') {
            fVar35 = 0.0;
            fVar36 = 0.0;
            fVar37 = 0.0;
            fVar38 = 0.0;
            this_00 = FTrackInstancePropertyBindings::FindOrAdd
                                (*(FTrackInstancePropertyBindings **)(TStack_140._16_8_ + lVar29),
                                 *(UObject **)(auStack_264._4_8_ + lVar32 * 8));
            uVar2 = (this_00->ResolvedProperty).TypeIndex;
            if (uVar2 == '\0') {
              pFVar22 = FCachedProperty::GetPropertyAddress<FMargin>((FCachedProperty *)this_00);
LAB_14694bfc8:
              if (pFVar22 != (FMargin *)0x0) {
                fVar35 = pFVar22->Left;
                fVar36 = pFVar22->Top;
                fVar37 = pFVar22->Right;
                fVar38 = pFVar22->Bottom;
              }
            }
            else if (uVar2 == '\x01') {
              pFVar22 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
              goto LAB_14694bfc8;
            }
            dStack_120 = (double)fVar36;
            dStack_118 = (double)fVar37;
            dStack_110 = (double)fVar38;
            dStack_128 = (double)fVar35;
            *(double *)(lVar30 + auStack_1e8._24_8_) = dStack_128;
            *(double *)(lVar30 + 8 + auStack_1e8._24_8_) = dStack_120;
            *(double *)(lVar30 + 0x10 + auStack_1e8._24_8_) = dStack_118;
            *(double *)(lVar30 + 0x18 + auStack_1e8._24_8_) = dStack_110;
            pUVar9 = *(UObject **)(uVar13 + lVar32 * 8);
            pTVar8 = this->CacheStorage;
            lVar11 = *(longlong *)(TStack_140._16_8_ + lVar29);
            FStack_70.Left = 0.0;
            if (pUVar9 != (UObject *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar9);
              }
              FStack_250.ObjectIndex = 0;
              FStack_250.ObjectSerialNumber = 0;
              pUStack_1b0 = pUVar9;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar9);
              }
              FWeakObjectPtr::operator=(&FStack_250,(FObjectPtr)&pUStack_1b0);
              FStack_70.Left = (double)FStack_250;
            }
            iVar7 = *(int *)(lVar11 + 0x58);
            iVar26 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar26 = 0;
            }
            pFVar23 = ::FName::FName(&FStack_108,iVar26,*(wchar_t **)(lVar11 + 0x50),FNAME_Add);
            FStack_70.Top = *(double *)pFVar23;
            FStack_70.Right._0_1_ = 2;
            TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
            ::AddInitialValue(pTVar8,(FKeyType *)auStack_264,&FStack_70);
            *(undefined2 *)(TStack_198._24_8_ + lVar32 * 2) = auStack_264._0_2_;
            this = pTStack_218;
          }
          else {
            lVar11 = *(longlong *)&this->CacheStorage->PropertyValues;
            puVar33 = (undefined8 *)((ulonglong)(ushort)auStack_248._0_2_ * 0x20 + lVar11);
            uVar13 = puVar33[1];
            puVar19 = (undefined8 *)((ulonglong)(ushort)auStack_248._0_2_ * 0x20 + 0x10 + lVar11);
            uVar14 = *puVar19;
            uVar15 = puVar19[1];
            *(undefined8 *)(lVar30 + auStack_1e8._24_8_) = *puVar33;
            ((undefined8 *)(lVar30 + auStack_1e8._24_8_))[1] = uVar13;
            puVar33 = (undefined8 *)(lVar30 + 0x10 + auStack_1e8._24_8_);
            *puVar33 = uVar14;
            puVar33[1] = uVar15;
          }
          lVar32 = lVar32 + 1;
          lVar30 = lVar30 + 0x20;
          lVar29 = lVar29 + 0x10;
          pFVar31 = pFStack_200;
        } while (lVar32 < (longlong)uStack_208);
      }
      if (TStack_140._0_8_ != 0) {
        LOCK();
        *(int *)(TStack_140._0_8_ + 0x30) = *(int *)(TStack_140._0_8_ + 0x30) + -1;
        UNLOCK();
        if (TStack_140._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(TStack_140._0_8_ + 0x20));
        }
      }
    }
    else {
      pFStack_240 = (FComponentHeader *)auStack_178._16_8_;
      if (uVar25 != 0) {
        lVar32 = 0;
        lVar29 = 0;
        pFVar34 = (FComponentHeader *)auStack_178._16_8_;
        puVar33 = (undefined8 *)auStack_1e8._24_8_;
        do {
          pTVar8 = this->CacheStorage;
          uVar5 = *(undefined2 *)((longlong)&pFVar34->_padding_ + lVar32 * 2);
          pUVar9 = *(UObject **)(auStack_264._4_8_ + lVar32 * 8);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          ::CleanupStaleEntries(pTVar8);
          FStack_c0.Object.ObjectIndex = 0;
          FStack_c0.Object.ObjectSerialNumber = 0;
          if (pUVar9 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar9);
            }
            FStack_228.ObjectIndex = 0;
            FStack_228.ObjectSerialNumber = 0;
            pUStack_1c8 = pUVar9;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar9);
            }
            FWeakObjectPtr::operator=(&FStack_228,(FObjectPtr)&pUStack_1c8);
            FStack_c0.Object = (FObjectKey)FStack_228;
          }
          FStack_c0.Property.TypeIndex = '\0';
          FStack_c0.Property._0_2_ = uVar5;
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          ::CleanupStaleEntries(pTVar8);
          uVar18 = MovieScene::GetTypeHash(&FStack_c0);
          if (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x8 !=
              *(int *)&(pTVar8->KeyToPropertyIndex).field_0x34) {
            puVar10 = *(undefined1 **)&(pTVar8->KeyToPropertyIndex).field_0x40;
            puVar27 = &(pTVar8->KeyToPropertyIndex).field_0x38;
            if (puVar10 != (undefined1 *)0x0) {
              puVar27 = puVar10;
            }
            iVar26 = *(int *)(puVar27 +
                             (ulonglong)
                             (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x48 - 1U & uVar18) * 4);
            while (iVar26 != -1) {
              lVar30 = (longlong)iVar26 * 0x20;
              bVar17 = MovieScene::operator==
                                 ((FKeyType *)(*(longlong *)&pTVar8->KeyToPropertyIndex + lVar30),
                                  &FStack_c0);
              if (bVar17) {
                lVar30 = *(longlong *)&pTVar8->KeyToPropertyIndex + lVar30;
                puVar21 = (ushort *)(lVar30 + 0x14);
                if (lVar30 == 0) {
                  puVar21 = (ushort *)0x0;
                }
                if (puVar21 != (ushort *)0x0) {
                  lVar30 = *(longlong *)&pTStack_218->CacheStorage->PropertyValues;
                  puVar19 = (undefined8 *)((ulonglong)*puVar21 * 0x20 + lVar30);
                  uVar13 = puVar19[1];
                  puVar1 = (undefined8 *)((ulonglong)*puVar21 * 0x20 + 0x10 + lVar30);
                  uVar14 = *puVar1;
                  uVar15 = puVar1[1];
                  *(undefined8 *)(lVar29 + (longlong)puVar33) = *puVar19;
                  ((undefined8 *)(lVar29 + (longlong)puVar33))[1] = uVar13;
                  puVar19 = (undefined8 *)(lVar29 + 0x10 + (longlong)puVar33);
                  *puVar19 = uVar14;
                  puVar19[1] = uVar15;
                  this = pTStack_218;
                  goto LAB_14694be52;
                }
                break;
              }
              iVar26 = *(int *)(*(longlong *)&pTVar8->KeyToPropertyIndex + 0x18 + lVar30);
            }
          }
          this = pTStack_218;
          uVar25 = (ulonglong)*(ushort *)((longlong)&pFStack_240->_padding_ + lVar32 * 2);
          lVar30 = *(longlong *)(auStack_264._4_8_ + lVar32 * 8);
          dStack_158 = (double)*(float *)(uVar25 + 4 + lVar30);
          dStack_150 = (double)*(float *)(uVar25 + 8 + lVar30);
          dStack_148 = (double)*(float *)(uVar25 + 0xc + lVar30);
          dStack_160 = (double)*(float *)(uVar25 + lVar30);
          *(double *)(lVar29 + (longlong)puVar33) = dStack_160;
          *(double *)(lVar29 + 8 + (longlong)puVar33) = dStack_158;
          *(double *)(lVar29 + 0x10 + (longlong)puVar33) = dStack_150;
          *(double *)(lVar29 + 0x18 + (longlong)puVar33) = dStack_148;
          pUVar9 = *(UObject **)(auStack_264._4_8_ + lVar32 * 8);
          pTVar8 = pTStack_218->CacheStorage;
          uVar5 = *(undefined2 *)((longlong)&pFStack_240->_padding_ + lVar32 * 2);
          auStack_98._20_4_ = 0;
          auStack_98._24_4_ = 0;
          if (pUVar9 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar9);
            }
            FStack_220.ObjectIndex = 0;
            FStack_220.ObjectSerialNumber = 0;
            pUStack_1c0 = pUVar9;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar9);
            }
            FWeakObjectPtr::operator=(&FStack_220,(FObjectPtr)&pUStack_1c0);
            auStack_98._20_8_ = FStack_220;
          }
          uStack_74 = 0;
          uStack_7c = uVar5;
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          ::AddInitialValue(pTVar8,(FKeyType *)(auStack_268 + 2),
                            (FIntermediateMargin *)(auStack_98 + 0x14));
          *(undefined2 *)(TStack_198._24_8_ + lVar32 * 2) = auStack_268._2_2_;
          pFVar34 = (FComponentHeader *)auStack_178._16_8_;
          puVar33 = (undefined8 *)auStack_1e8._24_8_;
LAB_14694be52:
          lVar32 = lVar32 + 1;
          lVar29 = lVar29 + 0x20;
          pFVar31 = pFStack_200;
        } while (lVar32 < (longlong)uStack_208);
      }
    }
    pFVar34 = pFStack_258;
    if (auStack_178._0_8_ != 0) {
      LOCK();
      *(int *)(auStack_178._0_8_ + 0x30) = *(int *)(auStack_178._0_8_ + 0x30) + -1;
      UNLOCK();
      if (auStack_178._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(auStack_178._0_8_ + 0x20));
        pFVar34 = pFStack_258;
      }
    }
  }
  else if (uVar25 != 0) {
    FStack_250 = (FWeakObjectPtr)(TStack_198._24_8_ - (longlong)puStack_1f0);
    lVar32 = 0;
    puVar33 = (undefined8 *)auStack_1e8._24_8_;
    puVar21 = puStack_1f0;
    do {
      pTVar8 = pTVar16->CacheStorage;
      pUVar9 = *(UObject **)(auStack_264._4_8_ + lVar32 * 8);
      uVar4 = *puVar21;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
      ::CleanupStaleEntries(pTVar8);
      FStack_ac.Object.ObjectIndex = 0;
      FStack_ac.Object.ObjectSerialNumber = 0;
      if (pUVar9 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FStack_238.ObjectIndex = 0;
        FStack_238.ObjectSerialNumber = 0;
        pUStack_1a8 = pUVar9;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&FStack_238,(FObjectPtr)&pUStack_1a8);
        FStack_ac.Object = (FObjectKey)FStack_238;
      }
      FStack_ac.Property.TypeIndex = '\x01';
      FStack_ac.Property._0_2_ = uVar4;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
      ::CleanupStaleEntries(pTVar8);
      uVar18 = MovieScene::GetTypeHash(&FStack_ac);
      if (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x8 !=
          *(int *)&(pTVar8->KeyToPropertyIndex).field_0x34) {
        puVar10 = *(undefined1 **)&(pTVar8->KeyToPropertyIndex).field_0x40;
        puVar27 = &(pTVar8->KeyToPropertyIndex).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar27 = puVar10;
        }
        iVar26 = *(int *)(puVar27 +
                         (ulonglong)(*(int *)&(pTVar8->KeyToPropertyIndex).field_0x48 - 1U & uVar18)
                         * 4);
        while (iVar26 != -1) {
          lVar29 = (longlong)iVar26 * 0x20;
          bVar17 = MovieScene::operator==
                             ((FKeyType *)(*(longlong *)&pTVar8->KeyToPropertyIndex + lVar29),
                              &FStack_ac);
          if (bVar17) {
            lVar29 = *(longlong *)&pTVar8->KeyToPropertyIndex + lVar29;
            puVar20 = (ushort *)(lVar29 + 0x14);
            if (lVar29 == 0) {
              puVar20 = (ushort *)0x0;
            }
            if (puVar20 != (ushort *)0x0) {
              lVar29 = *(longlong *)&pTVar16->CacheStorage->PropertyValues;
              puVar19 = (undefined8 *)((ulonglong)*puVar20 * 0x20 + lVar29);
              uVar13 = puVar19[1];
              puVar1 = (undefined8 *)((ulonglong)*puVar20 * 0x20 + 0x10 + lVar29);
              uVar14 = *puVar1;
              uVar15 = puVar1[1];
              *puVar33 = *puVar19;
              puVar33[1] = uVar13;
              puVar33[2] = uVar14;
              puVar33[3] = uVar15;
              goto LAB_14694bb6c;
            }
            break;
          }
          iVar26 = *(int *)(*(longlong *)&pTVar8->KeyToPropertyIndex + 0x18 + lVar29);
        }
      }
      uVar13 = auStack_264._4_8_;
      puVar19 = (undefined8 *)
                (**(code **)((pTVar16->CustomAccessors).Base +
                            (longlong)(int)((uint)*puVar21 * (pTVar16->CustomAccessors).Stride) +
                            0x18))(auStack_e0,*(undefined8 *)(auStack_264._4_8_ + lVar32 * 8));
      auStack_98._0_4_ = 0;
      auStack_98._4_4_ = 0;
      uStack_100 = *puVar19;
      uStack_f8 = puVar19[1];
      uStack_f0 = puVar19[2];
      uStack_e8 = puVar19[3];
      *puVar33 = uStack_100;
      puVar33[1] = uStack_f8;
      puVar33[2] = uStack_f0;
      puVar33[3] = uStack_e8;
      pUVar9 = *(UObject **)(uVar13 + lVar32 * 8);
      pTVar8 = pTVar16->CacheStorage;
      uVar4 = *puVar21;
      if (pUVar9 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FStack_230.ObjectIndex = 0;
        FStack_230.ObjectSerialNumber = 0;
        pUStack_1a0 = pUVar9;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&FStack_230,(FObjectPtr)&pUStack_1a0);
        auStack_98._0_8_ = FStack_230;
      }
      auStack_98[0x10] = 1;
      auStack_98._8_2_ = uVar4;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
      ::AddInitialValue(pTVar8,(FKeyType *)auStack_268,(FIntermediateMargin *)auStack_98);
      *(undefined2 *)((longlong)FStack_250 + (longlong)puVar21) = auStack_268._0_2_;
LAB_14694bb6c:
      lVar32 = lVar32 + 1;
      puVar33 = puVar33 + 4;
      puVar21 = puVar21 + 1;
      pFVar31 = pFStack_240;
      pFVar34 = pFStack_258;
    } while (lVar32 < (longlong)uStack_208);
  }
  if (pFVar31 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar31->ScheduledAccessCount = (atomic<int>)((int)pFVar31->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)uStack_1f8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar31->ReadWriteLock);
    }
  }
  LOCK();
  pFVar34->ScheduledAccessCount = (atomic<int>)((int)pFVar34->ScheduledAccessCount + -1);
  UNLOCK();
  if (EStack_210 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar34->ReadWriteLock);
  }
  if (auStack_1e8._0_8_ != 0) {
    if ((ulonglong)auStack_1e8._8_8_ < *(ulonglong *)(auStack_1e8._0_8_ + 0x28)) {
      auStack_1e8._8_8_ = *(ulonglong *)(auStack_1e8._0_8_ + 0x28);
    }
    *(undefined8 *)(auStack_1e8._0_8_ + 0x28) = auStack_1e8._8_8_;
    LOCK();
    *(int *)(auStack_1e8._0_8_ + 0x30) = *(int *)(auStack_1e8._0_8_ + 0x30) + -1;
    UNLOCK();
    if (auStack_1e8._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(auStack_1e8._0_8_ + 0x20));
    }
  }
  if (TStack_198._0_8_ != 0) {
    if ((ulonglong)TStack_198._8_8_ < *(ulonglong *)(TStack_198._0_8_ + 0x28)) {
      TStack_198._8_8_ = *(ulonglong *)(TStack_198._0_8_ + 0x28);
    }
    *(undefined8 *)(TStack_198._0_8_ + 0x28) = TStack_198._8_8_;
    LOCK();
    *(int *)(TStack_198._0_8_ + 0x30) = *(int *)(TStack_198._0_8_ + 0x30) + -1;
    UNLOCK();
    if (TStack_198._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(TStack_198._0_8_ + 0x20));
    }
  }
  return;
}

// Process @ 146934270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::Process(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
          *this,FEntityAllocation *param_1,FComponentMask *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uchar uVar3;
  TComponentTypeID<UE::MovieScene::FInterrogationKey> TVar4;
  ushort uVar5;
  undefined2 uVar6;
  EComponentHeaderLockMode EVar7;
  int iVar8;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
  *pTVar9;
  UObject *pUVar10;
  undefined1 *puVar11;
  code *pcVar12;
  double *pdVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  uint uVar20;
  undefined8 *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  FResolvedPropertyAndFunction *this_00;
  FWidgetTransform *pFVar24;
  FName *pFVar25;
  FComponentHeader *pFVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  undefined1 *puVar30;
  longlong lVar31;
  wchar_t *pwVar32;
  longlong lVar33;
  longlong lVar34;
  FComponentHeader *pFVar35;
  undefined8 *puVar36;
  longlong lVar37;
  FComponentHeader *pFVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  undefined1 auStack_348 [32];
  undefined1 auStack_328 [4];
  undefined1 auStack_324 [12];
  FComponentHeader *pFStack_318;
  FWeakObjectPtr FStack_310;
  undefined1 auStack_308 [16];
  FWeakObjectPtr FStack_2f8;
  FWeakObjectPtr FStack_2f0;
  FWeakObjectPtr FStack_2e8;
  FWeakObjectPtr FStack_2e0;
  EComponentHeaderLockMode EStack_2d8;
  FComponentHeader *pFStack_2d0;
  ulonglong uStack_2c8;
  FComponentHeader *pFStack_2c0;
  undefined8 uStack_2b8;
  ushort *puStack_2b0;
  undefined1 auStack_2a8 [16];
  double dStack_298;
  double dStack_290;
  undefined1 auStack_288 [16];
  ulonglong uStack_278;
  undefined1 auStack_270 [32];
  UObject *pUStack_250;
  FName FStack_248;
  UObject *pUStack_240;
  UObject *pUStack_238;
  UObject *pUStack_230;
  UObject *pUStack_228;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> TStack_220;
  undefined1 auStack_200 [24];
  TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  TStack_1e8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  double dStack_170;
  double dStack_168;
  FName FStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [56];
  FKeyType FStack_e8;
  FKeyType FStack_d4;
  undefined1 auStack_c0 [28];
  undefined2 uStack_a4;
  undefined1 uStack_9c;
  FIntermediateWidgetTransform FStack_98;
  
  if ((((this->Interrogation != (IInterrogationExtension *)0x0) &&
       (TVar4 = (this->BuiltInComponents->Interrogation).OutputKey,
       TVar4 != (TComponentTypeID<UE::MovieScene::FInterrogationKey>)0xffff)) &&
      ((int)(uint)(ushort)TVar4 < (param_2->Bits).NumBits)) &&
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
       ((ushort)TVar4 & 0x1f) & 1) != 0)) {
    VisitInterrogationAllocation(this,param_1);
    return;
  }
  if (this->CacheStorage ==
      (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
       *)0x0) {
    VisitAllocation(this,param_1);
    return;
  }
  FStack_98.ScaleX = (double)(__security_cookie.value ^ (ulonglong)auStack_348);
  uVar27 = (ulonglong)param_1->Size;
  auStack_308._8_8_ = this;
  FEntityAllocation::WriteComponents<UE::MovieScene::FInitialValueIndex>
            (param_1,&TStack_220,this->BuiltInComponents->InitialValueIndex,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateWidgetTransform>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_>
                      *)auStack_270,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  pFStack_318 = param_1->ComponentHeaders;
  pFVar35 = pFStack_318 + param_1->NumComponents;
  for (; pFStack_318 != pFVar35; pFStack_318 = pFStack_318 + 1) {
    pFVar38 = pFStack_318;
    if ((TComponentTypeID<UObject_*>)(pFStack_318->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14694c333;
  }
  pFStack_318 = (FComponentHeader *)0x0;
  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar38 = (FComponentHeader *)0x0;
  if (bVar19) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
LAB_14694c333:
  EStack_2d8 = param_1->LockMode;
  if (EStack_2d8 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar38->ReadWriteLock);
  }
  LOCK();
  pFVar38->ScheduledAccessCount = (atomic<int>)((int)pFVar38->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar35 = param_1->ComponentHeaders;
  auStack_324._4_8_ = pFVar38->Components;
  pFVar26 = pFVar35 + param_1->NumComponents;
  for (; pFVar35 != pFVar26; pFVar35 = pFVar35 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar35->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      EVar7 = param_1->LockMode;
      pFStack_2d0 = pFVar35;
      if (EVar7 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar35->ReadWriteLock);
      }
      LOCK();
      pFVar35->ScheduledAccessCount = (atomic<int>)((int)pFVar35->ScheduledAccessCount + 1);
      UNLOCK();
      puStack_2b0 = (ushort *)pFVar35->Components;
      uStack_2b8 = CONCAT44(uStack_2b8._4_4_,EVar7);
      pFStack_2c0 = pFVar35;
      goto LAB_14694c3b3;
    }
  }
  pFStack_2d0 = (FComponentHeader *)0x0;
  uStack_2b8 = 0;
  puStack_2b0 = (ushort *)0x0;
  pFStack_2c0 = (FComponentHeader *)0x0;
LAB_14694c3b3:
  pFVar35 = pFStack_2c0;
  uVar2 = auStack_308._8_8_;
  uStack_2c8 = uVar27;
  if (puStack_2b0 == (ushort *)0x0) {
    FEntityAllocation::TryReadComponents<unsigned_short>
              (param_1,(TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> *)auStack_200
               ,this->BuiltInComponents->FastPropertyOffset);
    if ((TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
         *)auStack_200._16_8_ ==
        (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
         *)0x0) {
      FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                (param_1,&TStack_1e8,this->BuiltInComponents->SlowProperty);
      if ((TStack_1e8._16_8_ != 0) && (uVar27 != 0)) {
        lVar29 = 0;
        lVar37 = lVar29;
        lVar34 = lVar29;
        do {
          pTVar9 = this->CacheStorage;
          if ((*(longlong *)(lVar34 + TStack_1e8._16_8_) == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar34 + TStack_1e8._16_8_) + 0x58) == 0) {
            pwVar32 = L"";
          }
          else {
            pwVar32 = *(wchar_t **)(*(longlong *)(lVar34 + TStack_1e8._16_8_) + 0x50);
          }
          ::FName::FName(&FStack_248,pwVar32);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          ::FindPropertyIndex(pTVar9,(UObject *)auStack_308,
                              *(FName **)(auStack_324._4_8_ + lVar37 * 8));
          uVar2 = auStack_324._4_8_;
          if (auStack_308[2] == '\0') {
            uVar39 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X,0);
            uVar40 = (undefined4)
                     ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._0_8_ >> 0x20);
            fVar43 = 0.0;
            uVar41 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y,0);
            uVar42 = (undefined4)
                     ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._8_8_ >> 0x20);
            dStack_298 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
            dStack_290 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
            uStack_278 = uStack_278 & 0xffffffff00000000;
            auStack_2a8 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            auStack_288 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            this_00 = FTrackInstancePropertyBindings::FindOrAdd
                                (*(FTrackInstancePropertyBindings **)(lVar34 + TStack_1e8._16_8_),
                                 *(UObject **)(auStack_324._4_8_ + lVar37 * 8));
            uVar3 = (this_00->ResolvedProperty).TypeIndex;
            if (uVar3 == '\0') {
              pFVar24 = FCachedProperty::GetPropertyAddress<FWidgetTransform>
                                  ((FCachedProperty *)this_00);
LAB_14694cb3d:
              if (pFVar24 != (FWidgetTransform *)0x0) {
                uVar39 = *(undefined4 *)&(pFVar24->Scale).field0_0x0;
                uVar40 = *(undefined4 *)((longlong)&(pFVar24->Scale).field0_0x0 + 4);
                dStack_298 = (pFVar24->Scale).field0_0x0._s_0.X;
                pdVar13 = &(pFVar24->Scale).field0_0x0._s_0.Y;
                uVar41 = *(undefined4 *)pdVar13;
                uVar42 = *(undefined4 *)((longlong)&(pFVar24->Scale).field0_0x0 + 0xc);
                dStack_290 = *pdVar13;
                auStack_2a8 = *(undefined1 (*) [16])&(pFVar24->Translation).field0_0x0._s_0;
                uStack_278 = *(ulonglong *)&pFVar24->Angle;
                fVar43 = (float)uStack_278;
                auStack_288 = *(undefined1 (*) [16])&(pFVar24->Shear).field0_0x0._s_0;
              }
            }
            else if (uVar3 == '\x01') {
              pFVar24 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
              goto LAB_14694cb3d;
            }
            dStack_190 = (double)auStack_2a8._8_8_;
            dStack_198 = (double)auStack_2a8._0_8_;
            dStack_170 = (double)auStack_288._0_8_;
            dStack_168 = (double)auStack_288._8_8_;
            uStack_180 = CONCAT44(uVar40,uVar39);
            uStack_178 = CONCAT44(uVar42,uVar41);
            dStack_188 = (double)fVar43;
            *(undefined8 *)(lVar29 + auStack_270._24_8_) = auStack_2a8._0_8_;
            *(undefined8 *)(lVar29 + 8 + auStack_270._24_8_) = auStack_2a8._8_8_;
            *(double *)(lVar29 + 0x10 + auStack_270._24_8_) = dStack_188;
            *(double *)(lVar29 + 0x18 + auStack_270._24_8_) = dStack_298;
            *(double *)(lVar29 + 0x20 + auStack_270._24_8_) = dStack_290;
            *(undefined8 *)(lVar29 + 0x28 + auStack_270._24_8_) = auStack_288._0_8_;
            *(undefined8 *)(lVar29 + 0x30 + auStack_270._24_8_) = auStack_288._8_8_;
            pUVar10 = *(UObject **)(uVar2 + lVar37 * 8);
            auStack_308._8_8_ = this->CacheStorage;
            lVar31 = *(longlong *)(lVar34 + TStack_1e8._16_8_);
            FStack_98.TranslationX = 0.0;
            if (pUVar10 != (UObject *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar10);
              }
              FStack_310.ObjectIndex = 0;
              FStack_310.ObjectSerialNumber = 0;
              pUStack_240 = pUVar10;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar10);
              }
              FWeakObjectPtr::operator=(&FStack_310,(FObjectPtr)&pUStack_240);
              FStack_98.TranslationX = (double)FStack_310;
            }
            iVar8 = *(int *)(lVar31 + 0x58);
            iVar28 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar28 = 0;
            }
            pFVar25 = ::FName::FName(&FStack_160,iVar28,*(wchar_t **)(lVar31 + 0x50),FNAME_Add);
            FStack_98.TranslationY = *(double *)pFVar25;
            FStack_98.Rotation._0_1_ = 2;
            TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
            ::AddInitialValue((TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                               *)auStack_308._8_8_,(FKeyType *)auStack_324,&FStack_98);
            *(undefined2 *)(TStack_220._24_8_ + lVar37 * 2) = auStack_324._0_2_;
          }
          else {
            lVar33 = (ulonglong)(ushort)auStack_308._0_2_ * 0x38;
            lVar31 = *(longlong *)&this->CacheStorage->PropertyValues;
            uVar1 = ((undefined8 *)(lVar33 + lVar31))[1];
            puVar36 = (undefined8 *)(lVar33 + 0x10 + lVar31);
            uVar14 = *puVar36;
            uVar15 = puVar36[1];
            puVar36 = (undefined8 *)(lVar33 + 0x20 + lVar31);
            uVar16 = *puVar36;
            uVar17 = puVar36[1];
            uVar2 = *(undefined8 *)(lVar33 + 0x30 + lVar31);
            *(undefined8 *)(lVar29 + auStack_270._24_8_) = *(undefined8 *)(lVar33 + lVar31);
            ((undefined8 *)(lVar29 + auStack_270._24_8_))[1] = uVar1;
            puVar36 = (undefined8 *)(lVar29 + 0x10 + auStack_270._24_8_);
            *puVar36 = uVar14;
            puVar36[1] = uVar15;
            puVar36 = (undefined8 *)(lVar29 + 0x20 + auStack_270._24_8_);
            *puVar36 = uVar16;
            puVar36[1] = uVar17;
            *(undefined8 *)(lVar29 + 0x30 + auStack_270._24_8_) = uVar2;
          }
          lVar37 = lVar37 + 1;
          lVar29 = lVar29 + 0x38;
          lVar34 = lVar34 + 0x10;
          pFVar35 = pFStack_2c0;
        } while (lVar37 < (longlong)uStack_2c8);
      }
      if (TStack_1e8._0_8_ != 0) {
        LOCK();
        *(int *)(TStack_1e8._0_8_ + 0x30) = *(int *)(TStack_1e8._0_8_ + 0x30) + -1;
        UNLOCK();
        if (TStack_1e8._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(TStack_1e8._0_8_ + 0x20));
        }
      }
    }
    else {
      auStack_308._8_8_ = auStack_200._16_8_;
      if (uVar27 != 0) {
        lVar34 = 0;
        lVar37 = 0;
        puVar36 = (undefined8 *)auStack_270._24_8_;
        do {
          uVar6 = *(undefined2 *)((longlong)(longlong *)auStack_200._16_8_ + lVar34 * 2);
          pTVar9 = this->CacheStorage;
          pUVar10 = *(UObject **)(auStack_324._4_8_ + lVar34 * 8);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          ::CleanupStaleEntries(pTVar9);
          FStack_d4.Object.ObjectIndex = 0;
          FStack_d4.Object.ObjectSerialNumber = 0;
          if (pUVar10 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar10);
            }
            FStack_2e8.ObjectIndex = 0;
            FStack_2e8.ObjectSerialNumber = 0;
            pUStack_228 = pUVar10;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar10);
            }
            FWeakObjectPtr::operator=(&FStack_2e8,(FObjectPtr)&pUStack_228);
            FStack_d4.Object = (FObjectKey)FStack_2e8;
          }
          FStack_d4.Property.TypeIndex = '\0';
          FStack_d4.Property._0_2_ = uVar6;
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          ::CleanupStaleEntries(pTVar9);
          uVar20 = MovieScene::GetTypeHash(&FStack_d4);
          if (*(int *)&(pTVar9->KeyToPropertyIndex).field_0x8 !=
              *(int *)&(pTVar9->KeyToPropertyIndex).field_0x34) {
            puVar11 = *(undefined1 **)&(pTVar9->KeyToPropertyIndex).field_0x40;
            puVar30 = &(pTVar9->KeyToPropertyIndex).field_0x38;
            if (puVar11 != (undefined1 *)0x0) {
              puVar30 = puVar11;
            }
            iVar28 = *(int *)(puVar30 +
                             (ulonglong)
                             (*(int *)&(pTVar9->KeyToPropertyIndex).field_0x48 - 1U & uVar20) * 4);
            while (iVar28 != -1) {
              lVar29 = (longlong)iVar28 * 0x20;
              bVar19 = MovieScene::operator==
                                 ((FKeyType *)(*(longlong *)&pTVar9->KeyToPropertyIndex + lVar29),
                                  &FStack_d4);
              if (bVar19) {
                lVar29 = *(longlong *)&pTVar9->KeyToPropertyIndex + lVar29;
                puVar23 = (ushort *)(lVar29 + 0x14);
                if (lVar29 == 0) {
                  puVar23 = (ushort *)0x0;
                }
                if (puVar23 != (ushort *)0x0) {
                  lVar31 = (ulonglong)*puVar23 * 0x38;
                  lVar29 = *(longlong *)&this->CacheStorage->PropertyValues;
                  uVar1 = ((undefined8 *)(lVar31 + lVar29))[1];
                  puVar21 = (undefined8 *)(lVar31 + 0x10 + lVar29);
                  uVar14 = *puVar21;
                  uVar15 = puVar21[1];
                  puVar21 = (undefined8 *)(lVar31 + 0x20 + lVar29);
                  uVar16 = *puVar21;
                  uVar17 = puVar21[1];
                  uVar2 = *(undefined8 *)(lVar31 + 0x30 + lVar29);
                  *(undefined8 *)(lVar37 + (longlong)puVar36) = *(undefined8 *)(lVar31 + lVar29);
                  ((undefined8 *)(lVar37 + (longlong)puVar36))[1] = uVar1;
                  puVar21 = (undefined8 *)(lVar37 + 0x10 + (longlong)puVar36);
                  *puVar21 = uVar14;
                  puVar21[1] = uVar15;
                  puVar21 = (undefined8 *)(lVar37 + 0x20 + (longlong)puVar36);
                  *puVar21 = uVar16;
                  puVar21[1] = uVar17;
                  *(undefined8 *)(lVar37 + 0x30 + (longlong)puVar36) = uVar2;
                  goto LAB_14694c95c;
                }
                break;
              }
              iVar28 = *(int *)(lVar29 + 0x18 + *(longlong *)&pTVar9->KeyToPropertyIndex);
            }
          }
          uVar27 = (ulonglong)*(ushort *)((longlong)(longlong *)auStack_308._8_8_ + lVar34 * 2);
          lVar29 = *(longlong *)(auStack_324._4_8_ + lVar34 * 8);
          uStack_1d0 = *(undefined8 *)(uVar27 + lVar29);
          uStack_1c8 = *(undefined8 *)(uVar27 + 8 + lVar29);
          uStack_1b8 = *(undefined8 *)(uVar27 + 0x10 + lVar29);
          uStack_1b0 = *(undefined8 *)(uVar27 + 0x18 + lVar29);
          uStack_1a8 = *(undefined8 *)(uVar27 + 0x20 + lVar29);
          uStack_1a0 = *(undefined8 *)(uVar27 + 0x28 + lVar29);
          dStack_1c0 = (double)*(float *)(uVar27 + 0x30 + lVar29);
          *(undefined8 *)(lVar37 + (longlong)puVar36) = uStack_1d0;
          *(undefined8 *)(lVar37 + 8 + (longlong)puVar36) = uStack_1c8;
          *(double *)(lVar37 + 0x10 + (longlong)puVar36) = dStack_1c0;
          *(undefined8 *)(lVar37 + 0x18 + (longlong)puVar36) = uStack_1b8;
          *(undefined8 *)(lVar37 + 0x20 + (longlong)puVar36) = uStack_1b0;
          *(undefined8 *)(lVar37 + 0x28 + (longlong)puVar36) = uStack_1a8;
          *(undefined8 *)(lVar37 + 0x30 + (longlong)puVar36) = uStack_1a0;
          pUVar10 = *(UObject **)(auStack_324._4_8_ + lVar34 * 8);
          pTVar9 = this->CacheStorage;
          uVar6 = *(undefined2 *)((longlong)(longlong *)auStack_308._8_8_ + lVar34 * 2);
          auStack_c0._20_4_ = 0;
          auStack_c0._24_4_ = 0;
          if (pUVar10 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar10);
            }
            FStack_2e0.ObjectIndex = 0;
            FStack_2e0.ObjectSerialNumber = 0;
            pUStack_250 = pUVar10;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar10);
            }
            FWeakObjectPtr::operator=(&FStack_2e0,(FObjectPtr)&pUStack_250);
            auStack_c0._20_8_ = FStack_2e0;
          }
          uStack_9c = 0;
          uStack_a4 = uVar6;
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          ::AddInitialValue(pTVar9,(FKeyType *)(auStack_328 + 2),
                            (FIntermediateWidgetTransform *)(auStack_c0 + 0x14));
          *(undefined2 *)(TStack_220._24_8_ + lVar34 * 2) = auStack_328._2_2_;
          puVar36 = (undefined8 *)auStack_270._24_8_;
LAB_14694c95c:
          lVar34 = lVar34 + 1;
          lVar37 = lVar37 + 0x38;
          pFVar35 = pFStack_2c0;
        } while (lVar34 < (longlong)uStack_2c8);
      }
    }
    pFVar38 = pFStack_318;
    if (auStack_200._0_8_ != 0) {
      LOCK();
      *(int *)(auStack_200._0_8_ + 0x30) = *(int *)(auStack_200._0_8_ + 0x30) + -1;
      UNLOCK();
      if (auStack_200._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(auStack_200._0_8_ + 0x20));
        pFVar38 = pFStack_318;
      }
    }
  }
  else if (uVar27 != 0) {
    FStack_310 = (FWeakObjectPtr)(TStack_220._24_8_ - (longlong)puStack_2b0);
    lVar37 = 0;
    puVar36 = (undefined8 *)auStack_270._24_8_;
    puVar23 = puStack_2b0;
    do {
      pTVar9 = *(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                 **)&((TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,0>_>
                       *)(uVar2 + 0x40))->field_0x10;
      pUVar10 = *(UObject **)(auStack_324._4_8_ + lVar37 * 8);
      uVar5 = *puVar23;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
      ::CleanupStaleEntries(pTVar9);
      FStack_e8.Object.ObjectIndex = 0;
      FStack_e8.Object.ObjectSerialNumber = 0;
      if (pUVar10 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar10);
        }
        FStack_2f8.ObjectIndex = 0;
        FStack_2f8.ObjectSerialNumber = 0;
        pUStack_238 = pUVar10;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar10);
        }
        FWeakObjectPtr::operator=(&FStack_2f8,(FObjectPtr)&pUStack_238);
        FStack_e8.Object = (FObjectKey)FStack_2f8;
      }
      FStack_e8.Property.TypeIndex = '\x01';
      FStack_e8.Property._0_2_ = uVar5;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
      ::CleanupStaleEntries(pTVar9);
      uVar20 = MovieScene::GetTypeHash(&FStack_e8);
      if (*(int *)&(pTVar9->KeyToPropertyIndex).field_0x8 !=
          *(int *)&(pTVar9->KeyToPropertyIndex).field_0x34) {
        puVar11 = *(undefined1 **)&(pTVar9->KeyToPropertyIndex).field_0x40;
        puVar30 = &(pTVar9->KeyToPropertyIndex).field_0x38;
        if (puVar11 != (undefined1 *)0x0) {
          puVar30 = puVar11;
        }
        iVar28 = *(int *)(puVar30 +
                         (ulonglong)(*(int *)&(pTVar9->KeyToPropertyIndex).field_0x48 - 1U & uVar20)
                         * 4);
        while (iVar28 != -1) {
          lVar34 = (longlong)iVar28 * 0x20;
          bVar19 = MovieScene::operator==
                             ((FKeyType *)(*(longlong *)&pTVar9->KeyToPropertyIndex + lVar34),
                              &FStack_e8);
          if (bVar19) {
            lVar34 = *(longlong *)&pTVar9->KeyToPropertyIndex + lVar34;
            puVar22 = (ushort *)(lVar34 + 0x14);
            if (lVar34 == 0) {
              puVar22 = (ushort *)0x0;
            }
            if (puVar22 != (ushort *)0x0) {
              lVar29 = (ulonglong)*puVar22 * 0x38;
              lVar34 = *(longlong *)
                        &(*(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                            **)&((TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,0>_>
                                  *)(uVar2 + 0x40))->field_0x10)->PropertyValues;
              uVar14 = ((undefined8 *)(lVar29 + lVar34))[1];
              puVar21 = (undefined8 *)(lVar29 + 0x10 + lVar34);
              uVar15 = *puVar21;
              uVar16 = puVar21[1];
              puVar21 = (undefined8 *)(lVar29 + 0x20 + lVar34);
              uVar17 = *puVar21;
              uVar18 = puVar21[1];
              uVar1 = *(undefined8 *)(lVar29 + 0x30 + lVar34);
              *puVar36 = *(undefined8 *)(lVar29 + lVar34);
              puVar36[1] = uVar14;
              puVar36[2] = uVar15;
              puVar36[3] = uVar16;
              puVar36[4] = uVar17;
              puVar36[5] = uVar18;
              puVar36[6] = uVar1;
              goto LAB_14694c611;
            }
            break;
          }
          iVar28 = *(int *)(lVar34 + 0x18 + *(longlong *)&pTVar9->KeyToPropertyIndex);
        }
      }
      uVar17 = auStack_324._4_8_;
      puVar21 = (undefined8 *)
                (**(code **)(((FCustomAccessorView *)
                             &((TSparseArray<UE::MovieScene::FIntermediateWidgetTransform,FDefaultSparseArrayAllocator>
                                *)(uVar2 + 8))->field_0x28)->Base +
                            (longlong)
                            (int)((uint)*puVar23 *
                                 *(int *)&((TSparseArray<UE::MovieScene::FIntermediateWidgetTransform,FDefaultSparseArrayAllocator>
                                            *)(uVar2 + 8))->field_0x34) + 0x18))
                          (auStack_120,*(undefined8 *)(auStack_324._4_8_ + lVar37 * 8));
      auStack_c0._0_4_ = 0;
      auStack_c0._4_4_ = 0;
      uStack_148 = puVar21[2];
      uStack_140 = puVar21[3];
      uStack_158 = *puVar21;
      uStack_150 = puVar21[1];
      uVar14 = puVar21[2];
      uVar15 = puVar21[3];
      uStack_128 = puVar21[6];
      uStack_138 = puVar21[4];
      uStack_130 = puVar21[5];
      uVar16 = puVar21[1];
      uVar1 = puVar21[6];
      *puVar36 = *puVar21;
      puVar36[1] = uVar16;
      puVar36[2] = uVar14;
      puVar36[3] = uVar15;
      puVar36[4] = uStack_138;
      puVar36[5] = uStack_130;
      puVar36[6] = uVar1;
      pUVar10 = *(UObject **)(uVar17 + lVar37 * 8);
      pTVar9 = *(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                 **)&((TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,0>_>
                       *)(uVar2 + 0x40))->field_0x10;
      uVar5 = *puVar23;
      if (pUVar10 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar10);
        }
        FStack_2f0.ObjectIndex = 0;
        FStack_2f0.ObjectSerialNumber = 0;
        pUStack_230 = pUVar10;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar10);
        }
        FWeakObjectPtr::operator=(&FStack_2f0,(FObjectPtr)&pUStack_230);
        auStack_c0._0_8_ = FStack_2f0;
      }
      auStack_c0[0x10] = 1;
      auStack_c0._8_2_ = uVar5;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
      ::AddInitialValue(pTVar9,(FKeyType *)auStack_328,(FIntermediateWidgetTransform *)auStack_c0);
      *(undefined2 *)((longlong)FStack_310 + (longlong)puVar23) = auStack_328._0_2_;
LAB_14694c611:
      lVar37 = lVar37 + 1;
      puVar36 = puVar36 + 7;
      puVar23 = puVar23 + 1;
      pFVar35 = pFStack_2d0;
      pFVar38 = pFStack_318;
    } while (lVar37 < (longlong)uStack_2c8);
  }
  if (pFVar35 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar35->ScheduledAccessCount = (atomic<int>)((int)pFVar35->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)uStack_2b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar35->ReadWriteLock);
    }
  }
  LOCK();
  pFVar38->ScheduledAccessCount = (atomic<int>)((int)pFVar38->ScheduledAccessCount + -1);
  UNLOCK();
  if (EStack_2d8 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar38->ReadWriteLock);
  }
  if (auStack_270._0_8_ != 0) {
    if ((ulonglong)auStack_270._8_8_ < *(ulonglong *)(auStack_270._0_8_ + 0x28)) {
      auStack_270._8_8_ = *(ulonglong *)(auStack_270._0_8_ + 0x28);
    }
    *(undefined8 *)(auStack_270._0_8_ + 0x28) = auStack_270._8_8_;
    LOCK();
    *(int *)(auStack_270._0_8_ + 0x30) = *(int *)(auStack_270._0_8_ + 0x30) + -1;
    UNLOCK();
    if (auStack_270._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(auStack_270._0_8_ + 0x20));
    }
  }
  if (TStack_220._0_8_ != 0) {
    if ((ulonglong)TStack_220._8_8_ < *(ulonglong *)(TStack_220._0_8_ + 0x28)) {
      TStack_220._8_8_ = *(ulonglong *)(TStack_220._0_8_ + 0x28);
    }
    *(undefined8 *)(TStack_220._0_8_ + 0x28) = TStack_220._8_8_;
    LOCK();
    *(int *)(TStack_220._0_8_ + 0x30) = *(int *)(TStack_220._0_8_ + 0x30) + -1;
    UNLOCK();
    if (TStack_220._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(TStack_220._0_8_ + 0x20));
    }
  }
  return;
}

// VisitAllocation @ 14694ac10

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitAllocation(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                  *this,FEntityAllocation *param_1)

{
  uchar uVar1;
  EComponentHeaderLockMode EVar2;
  uchar *puVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined8 *puVar12;
  FResolvedPropertyAndFunction *this_00;
  FMargin *pFVar13;
  ulonglong uVar14;
  double *pdVar15;
  FComponentHeader *pFVar16;
  ulonglong uVar17;
  FComponentHeader *pFVar18;
  FComponentHeader *pFVar19;
  longlong lVar20;
  longlong *plVar21;
  ushort *puVar22;
  undefined8 *puVar23;
  FComponentHeader *pFVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  EComponentHeaderLockMode local_res8;
  undefined1 local_d8 [32];
  undefined1 local_b8 [24];
  TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_70 [56];
  
  uVar17 = (ulonglong)param_1->Size;
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateMargin>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> *
                     )local_d8,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  pFVar16 = (FComponentHeader *)0x0;
  pFVar18 = param_1->ComponentHeaders;
  pFVar19 = pFVar18 + param_1->NumComponents;
  for (; pFVar18 != pFVar19; pFVar18 = pFVar18 + 1) {
    if ((TComponentTypeID<UObject_*>)(pFVar18->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14694acb8;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar18 = pFVar16;
  if (bVar11) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14694acb8:
  EVar2 = param_1->LockMode;
  if (EVar2 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
  }
  LOCK();
  pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar19 = param_1->ComponentHeaders;
  puVar3 = pFVar18->Components;
  pFVar24 = pFVar19 + param_1->NumComponents;
  for (; pFVar19 != pFVar24; pFVar19 = pFVar19 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar19->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      local_res8 = param_1->LockMode;
      if (local_res8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
      }
      LOCK();
      pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar24 = (FComponentHeader *)pFVar19->Components;
      goto LAB_14694ad2c;
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  local_res8 = LockFree;
  pFVar19 = pFVar16;
  pFVar24 = pFVar16;
LAB_14694ad2c:
  if (pFVar24 != (FComponentHeader *)0x0) {
    puVar23 = (undefined8 *)local_d8._24_8_;
    if (uVar17 != 0) {
      do {
        puVar12 = (undefined8 *)
                  (**(code **)((this->CustomAccessors).Base +
                              (longlong)
                              (int)((uint)(ushort)pFVar24->_padding_ *
                                   (this->CustomAccessors).Stride) + 0x18))
                            (local_70,*(undefined8 *)(puVar3 + (longlong)pFVar16 * 8));
        pFVar16 = (FComponentHeader *)((longlong)&pFVar16->_padding_ + 1);
        pFVar24 = (FComponentHeader *)((longlong)&pFVar24->_padding_ + 2);
        uVar8 = puVar12[1];
        uVar9 = puVar12[2];
        uVar10 = puVar12[3];
        *puVar23 = *puVar12;
        puVar23[1] = uVar8;
        puVar23[2] = uVar9;
        puVar23[3] = uVar10;
        puVar23 = puVar23 + 4;
      } while ((longlong)pFVar16 < (longlong)uVar17);
    }
    goto LAB_14694b0d8;
  }
  FEntityAllocation::TryReadComponents<unsigned_short>
            (param_1,&local_a0,this->BuiltInComponents->FastPropertyOffset);
  if (local_a0._16_8_ == 0) {
    FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
              (param_1,(TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                        *)local_b8,this->BuiltInComponents->SlowProperty);
    if (((undefined8 *)local_b8._16_8_ != (undefined8 *)0x0) && (uVar17 != 0)) {
      pdVar15 = (double *)(local_d8._24_8_ + 0x18);
      puVar23 = (undefined8 *)local_b8._16_8_;
      do {
        fVar25 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        this_00 = FTrackInstancePropertyBindings::FindOrAdd
                            ((FTrackInstancePropertyBindings *)*puVar23,
                             *(UObject **)(puVar3 + (longlong)pFVar16 * 8));
        uVar1 = (this_00->ResolvedProperty).TypeIndex;
        if (uVar1 == '\0') {
          pFVar13 = FCachedProperty::GetPropertyAddress<FMargin>((FCachedProperty *)this_00);
LAB_14694b030:
          if (pFVar13 != (FMargin *)0x0) {
            fVar25 = pFVar13->Left;
            fVar26 = pFVar13->Top;
            fVar27 = pFVar13->Right;
            fVar28 = pFVar13->Bottom;
          }
        }
        else if (uVar1 == '\x01') {
          pFVar13 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
          goto LAB_14694b030;
        }
        pFVar16 = (FComponentHeader *)((longlong)&pFVar16->_padding_ + 1);
        puVar23 = puVar23 + 2;
        auVar7._8_4_ = SUB84((double)fVar27,0);
        auVar7._0_8_ = (double)fVar26;
        auVar7._12_4_ = (int)((ulonglong)(double)fVar27 >> 0x20);
        *(undefined1 (*) [16])(pdVar15 + -2) = auVar7;
        *pdVar15 = (double)fVar28;
        pdVar15[-3] = (double)fVar25;
        pdVar15 = pdVar15 + 4;
      } while ((longlong)pFVar16 < (longlong)uVar17);
    }
    if (local_b8._0_8_ != 0) {
      LOCK();
      *(int *)(local_b8._0_8_ + 0x30) = *(int *)(local_b8._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_b8._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_b8._0_8_ + 0x20));
      }
    }
  }
  else if (uVar17 < 4) {
    if (uVar17 != 0) goto LAB_14694af52;
  }
  else {
    lVar20 = (uVar17 - 4 >> 2) + 1;
    pFVar16 = (FComponentHeader *)(lVar20 * 4);
    pdVar15 = (double *)(local_d8._24_8_ + 0x10);
    plVar21 = (longlong *)(puVar3 + 0x10);
    puVar22 = (ushort *)(local_a0._16_8_ + 4);
    do {
      uVar14 = (ulonglong)puVar22[-2];
      lVar4 = plVar21[-2];
      pdVar15[-1] = (double)*(float *)(uVar14 + 4 + lVar4);
      *pdVar15 = (double)*(float *)(uVar14 + 8 + lVar4);
      pdVar15[1] = (double)*(float *)(uVar14 + 0xc + lVar4);
      lVar5 = plVar21[-1];
      pdVar15[-2] = (double)*(float *)(uVar14 + lVar4);
      uVar14 = (ulonglong)puVar22[-1];
      pdVar15[3] = (double)*(float *)(uVar14 + 4 + lVar5);
      pdVar15[4] = (double)*(float *)(uVar14 + 8 + lVar5);
      pdVar15[5] = (double)*(float *)(uVar14 + 0xc + lVar5);
      lVar4 = *plVar21;
      pdVar15[2] = (double)*(float *)(uVar14 + lVar5);
      uVar14 = (ulonglong)*puVar22;
      pdVar15[7] = (double)*(float *)(uVar14 + 4 + lVar4);
      pdVar15[8] = (double)*(float *)(uVar14 + 8 + lVar4);
      pdVar15[9] = (double)*(float *)(uVar14 + 0xc + lVar4);
      lVar5 = plVar21[1];
      pdVar15[6] = (double)*(float *)(uVar14 + lVar4);
      uVar14 = (ulonglong)puVar22[1];
      pdVar15[0xb] = (double)*(float *)(uVar14 + 4 + lVar5);
      pdVar15[0xc] = (double)*(float *)(uVar14 + 8 + lVar5);
      pdVar15[0xd] = (double)*(float *)(uVar14 + 0xc + lVar5);
      pdVar15[10] = (double)*(float *)(uVar14 + lVar5);
      lVar20 = lVar20 + -1;
      pdVar15 = pdVar15 + 0x10;
      plVar21 = plVar21 + 4;
      puVar22 = puVar22 + 4;
    } while (lVar20 != 0);
    if ((longlong)pFVar16 < (longlong)uVar17) {
LAB_14694af52:
      pdVar15 = (double *)(local_d8._24_8_ + ((longlong)pFVar16 * 4 + 2) * 8);
      do {
        uVar14 = (ulonglong)*(ushort *)(local_a0._16_8_ + (longlong)pFVar16 * 2);
        lVar20 = *(longlong *)(puVar3 + (longlong)pFVar16 * 8);
        pFVar16 = (FComponentHeader *)((longlong)&pFVar16->_padding_ + 1);
        pdVar15[-1] = (double)*(float *)(uVar14 + 4 + lVar20);
        *pdVar15 = (double)*(float *)(uVar14 + 8 + lVar20);
        pdVar15[1] = (double)*(float *)(uVar14 + 0xc + lVar20);
        pdVar15[-2] = (double)*(float *)(uVar14 + lVar20);
        pdVar15 = pdVar15 + 4;
      } while ((longlong)pFVar16 < (longlong)uVar17);
    }
  }
  if (local_a0._0_8_ != 0) {
    LOCK();
    *(int *)(local_a0._0_8_ + 0x30) = *(int *)(local_a0._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_a0._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a0._0_8_ + 0x20));
    }
  }
LAB_14694b0d8:
  if (pFVar19 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar19->ScheduledAccessCount = (atomic<int>)((int)pFVar19->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_res8 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar19->ReadWriteLock);
    }
  }
  LOCK();
  pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar2 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
  }
  if (local_d8._0_8_ != 0) {
    if ((ulonglong)local_d8._8_8_ < *(ulonglong *)(local_d8._0_8_ + 0x28)) {
      local_d8._8_8_ = *(ulonglong *)(local_d8._0_8_ + 0x28);
    }
    *(undefined8 *)(local_d8._0_8_ + 0x28) = local_d8._8_8_;
    LOCK();
    *(int *)(local_d8._0_8_ + 0x30) = *(int *)(local_d8._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_d8._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_d8._0_8_ + 0x20));
    }
  }
  return;
}

// VisitAllocation @ 14694b190

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitAllocation(TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
                  *this,FEntityAllocation *param_1)

{
  undefined8 uVar1;
  uchar uVar2;
  EComponentHeaderLockMode EVar3;
  uchar *puVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined8 *puVar14;
  FResolvedPropertyAndFunction *this_00;
  FWidgetTransform *pFVar15;
  ulonglong uVar16;
  FComponentHeader *pFVar17;
  FComponentHeader *pFVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  double *pdVar21;
  longlong lVar22;
  FComponentHeader *pFVar23;
  ushort *puVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  EComponentHeaderLockMode local_res8;
  FComponentHeader *local_res20;
  undefined1 local_158 [32];
  undefined1 local_138 [24];
  TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> local_120;
  undefined1 local_108 [56];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_b8 [120];
  
  uVar25 = (ulonglong)param_1->Size;
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateWidgetTransform>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_>
                      *)local_158,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  local_res20 = param_1->ComponentHeaders;
  pFVar17 = (FComponentHeader *)0x0;
  pFVar18 = local_res20 + param_1->NumComponents;
  for (; local_res20 != pFVar18; local_res20 = local_res20 + 1) {
    if ((TComponentTypeID<UObject_*>)(local_res20->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14694b248;
  }
  local_res20 = (FComponentHeader *)0x0;
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar13) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14694b248:
  EVar3 = param_1->LockMode;
  if (EVar3 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&local_res20->ReadWriteLock);
  }
  LOCK();
  local_res20->ScheduledAccessCount = (atomic<int>)((int)local_res20->ScheduledAccessCount + 1);
  UNLOCK();
  puVar4 = local_res20->Components;
  pFVar18 = param_1->ComponentHeaders;
  pFVar23 = pFVar18 + param_1->NumComponents;
  for (; pFVar18 != pFVar23; pFVar18 = pFVar18 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar18->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      local_res8 = param_1->LockMode;
      if (local_res8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
      }
      LOCK();
      pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar23 = (FComponentHeader *)pFVar18->Components;
      goto LAB_14694b2b9;
    }
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_res8 = LockFree;
  pFVar18 = pFVar17;
  pFVar23 = pFVar17;
LAB_14694b2b9:
  if (pFVar23 != (FComponentHeader *)0x0) {
    puVar19 = (undefined8 *)local_158._24_8_;
    if (uVar25 != 0) {
      do {
        puVar14 = (undefined8 *)
                  (**(code **)((this->CustomAccessors).Base +
                              (longlong)
                              (int)((uint)(ushort)pFVar23->_padding_ *
                                   (this->CustomAccessors).Stride) + 0x18))
                            (local_b8,*(undefined8 *)(puVar4 + (longlong)pFVar17 * 8));
        pFVar17 = (FComponentHeader *)((longlong)&pFVar17->_padding_ + 1);
        pFVar23 = (FComponentHeader *)((longlong)&pFVar23->_padding_ + 2);
        uVar1 = puVar14[6];
        uVar8 = puVar14[1];
        uVar9 = puVar14[2];
        uVar10 = puVar14[3];
        uVar11 = puVar14[4];
        uVar12 = puVar14[5];
        *puVar19 = *puVar14;
        puVar19[1] = uVar8;
        puVar19[2] = uVar9;
        puVar19[3] = uVar10;
        puVar19[4] = uVar11;
        puVar19[5] = uVar12;
        puVar19[6] = uVar1;
        puVar19 = puVar19 + 7;
      } while ((longlong)pFVar17 < (longlong)uVar25);
    }
    goto LAB_14694b736;
  }
  FEntityAllocation::TryReadComponents<unsigned_short>
            (param_1,&local_120,this->BuiltInComponents->FastPropertyOffset);
  if (local_120._16_8_ == 0) {
    FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
              (param_1,(TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                        *)local_138,this->BuiltInComponents->SlowProperty);
    if (((undefined8 *)local_138._16_8_ != (undefined8 *)0x0) && (uVar25 != 0)) {
      pdVar21 = (double *)(local_158._24_8_ + 0x10);
      puVar19 = (undefined8 *)local_138._16_8_;
      do {
        uVar30 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
        uVar31 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
        uVar32 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
        uVar33 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
        fVar34 = 0.0;
        uVar26 = UE::Math::TVector2<double>::UnitVector.field0_0x0._0_4_;
        uVar27 = UE::Math::TVector2<double>::UnitVector.field0_0x0._4_4_;
        uVar28 = UE::Math::TVector2<double>::UnitVector.field0_0x0._8_4_;
        uVar29 = UE::Math::TVector2<double>::UnitVector.field0_0x0._12_4_;
        local_108._0_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        this_00 = FTrackInstancePropertyBindings::FindOrAdd
                            ((FTrackInstancePropertyBindings *)*puVar19,
                             *(UObject **)(puVar4 + (longlong)pFVar17 * 8));
        uVar2 = (this_00->ResolvedProperty).TypeIndex;
        if (uVar2 == '\0') {
          pFVar15 = FCachedProperty::GetPropertyAddress<FWidgetTransform>
                              ((FCachedProperty *)this_00);
LAB_14694b679:
          if (pFVar15 != (FWidgetTransform *)0x0) {
            local_108._0_16_ = *(undefined1 (*) [16])&(pFVar15->Translation).field0_0x0._s_0;
            uVar26 = *(undefined4 *)&(pFVar15->Scale).field0_0x0;
            uVar27 = *(undefined4 *)((longlong)&(pFVar15->Scale).field0_0x0 + 4);
            uVar28 = *(undefined4 *)((longlong)&(pFVar15->Scale).field0_0x0 + 8);
            uVar29 = *(undefined4 *)((longlong)&(pFVar15->Scale).field0_0x0 + 0xc);
            uVar30 = *(undefined4 *)&(pFVar15->Shear).field0_0x0;
            uVar31 = *(undefined4 *)((longlong)&(pFVar15->Shear).field0_0x0 + 4);
            uVar32 = *(undefined4 *)((longlong)&(pFVar15->Shear).field0_0x0 + 8);
            uVar33 = *(undefined4 *)((longlong)&(pFVar15->Shear).field0_0x0 + 0xc);
            fVar34 = (float)*(undefined8 *)&pFVar15->Angle;
          }
        }
        else if (uVar2 == '\x01') {
          pFVar15 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
          goto LAB_14694b679;
        }
        pFVar17 = (FComponentHeader *)((longlong)&pFVar17->_padding_ + 1);
        puVar19 = puVar19 + 2;
        pdVar21[1] = (double)CONCAT44(uVar27,uVar26);
        pdVar21[-2] = (double)local_108._0_8_;
        pdVar21[-1] = (double)local_108._8_8_;
        pdVar21[3] = (double)CONCAT44(uVar31,uVar30);
        *pdVar21 = (double)fVar34;
        pdVar21[2] = (double)CONCAT44(uVar29,uVar28);
        pdVar21[4] = (double)CONCAT44(uVar33,uVar32);
        pdVar21 = pdVar21 + 7;
      } while ((longlong)pFVar17 < (longlong)uVar25);
    }
    if (local_138._0_8_ != 0) {
      LOCK();
      *(int *)(local_138._0_8_ + 0x30) = *(int *)(local_138._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_138._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_138._0_8_ + 0x20));
      }
    }
  }
  else if (uVar25 < 4) {
    if (uVar25 != 0) goto LAB_14694b566;
  }
  else {
    lVar22 = (uVar25 - 4 >> 2) + 1;
    pFVar17 = (FComponentHeader *)(lVar22 * 4);
    plVar20 = (longlong *)(puVar4 + 0x10);
    pdVar21 = (double *)(local_158._24_8_ + 0x10);
    puVar24 = (ushort *)(local_120._16_8_ + 4);
    do {
      uVar16 = (ulonglong)puVar24[-2];
      lVar5 = plVar20[-2];
      pdVar21[-2] = *(double *)(uVar16 + lVar5);
      pdVar21[-1] = *(double *)(uVar16 + 8 + lVar5);
      *pdVar21 = (double)*(float *)(uVar16 + 0x30 + lVar5);
      pdVar21[1] = *(double *)(uVar16 + 0x10 + lVar5);
      pdVar21[2] = *(double *)(uVar16 + 0x18 + lVar5);
      pdVar21[3] = *(double *)(uVar16 + 0x20 + lVar5);
      lVar6 = plVar20[-1];
      pdVar21[4] = *(double *)(uVar16 + 0x28 + lVar5);
      uVar16 = (ulonglong)puVar24[-1];
      pdVar21[5] = *(double *)(uVar16 + lVar6);
      pdVar21[6] = *(double *)(uVar16 + 8 + lVar6);
      pdVar21[7] = (double)*(float *)(uVar16 + 0x30 + lVar6);
      pdVar21[8] = *(double *)(uVar16 + 0x10 + lVar6);
      pdVar21[9] = *(double *)(uVar16 + 0x18 + lVar6);
      pdVar21[10] = *(double *)(uVar16 + 0x20 + lVar6);
      lVar5 = *plVar20;
      pdVar21[0xb] = *(double *)(uVar16 + 0x28 + lVar6);
      uVar16 = (ulonglong)*puVar24;
      pdVar21[0xc] = *(double *)(uVar16 + lVar5);
      pdVar21[0xd] = *(double *)(uVar16 + 8 + lVar5);
      pdVar21[0xe] = (double)*(float *)(uVar16 + 0x30 + lVar5);
      pdVar21[0xf] = *(double *)(uVar16 + 0x10 + lVar5);
      pdVar21[0x10] = *(double *)(uVar16 + 0x18 + lVar5);
      pdVar21[0x11] = *(double *)(uVar16 + 0x20 + lVar5);
      lVar6 = plVar20[1];
      pdVar21[0x12] = *(double *)(uVar16 + 0x28 + lVar5);
      uVar16 = (ulonglong)puVar24[1];
      pdVar21[0x13] = *(double *)(uVar16 + lVar6);
      pdVar21[0x14] = *(double *)(uVar16 + 8 + lVar6);
      pdVar21[0x15] = (double)*(float *)(uVar16 + 0x30 + lVar6);
      pdVar21[0x16] = *(double *)(uVar16 + 0x10 + lVar6);
      pdVar21[0x17] = *(double *)(uVar16 + 0x18 + lVar6);
      pdVar21[0x18] = *(double *)(uVar16 + 0x20 + lVar6);
      pdVar21[0x19] = *(double *)(uVar16 + 0x28 + lVar6);
      lVar22 = lVar22 + -1;
      plVar20 = plVar20 + 4;
      pdVar21 = pdVar21 + 0x1c;
      puVar24 = puVar24 + 4;
    } while (lVar22 != 0);
    if ((longlong)pFVar17 < (longlong)uVar25) {
LAB_14694b566:
      pdVar21 = (double *)(local_158._24_8_ + ((longlong)pFVar17 * 7 + 2) * 8);
      do {
        uVar16 = (ulonglong)*(ushort *)(local_120._16_8_ + (longlong)pFVar17 * 2);
        lVar22 = *(longlong *)(puVar4 + (longlong)pFVar17 * 8);
        pFVar17 = (FComponentHeader *)((longlong)&pFVar17->_padding_ + 1);
        pdVar21[-2] = *(double *)(uVar16 + lVar22);
        pdVar21[-1] = *(double *)(uVar16 + 8 + lVar22);
        *pdVar21 = (double)*(float *)(uVar16 + 0x30 + lVar22);
        pdVar21[1] = *(double *)(uVar16 + 0x10 + lVar22);
        pdVar21[2] = *(double *)(uVar16 + 0x18 + lVar22);
        pdVar21[3] = *(double *)(uVar16 + 0x20 + lVar22);
        pdVar21[4] = *(double *)(uVar16 + 0x28 + lVar22);
        pdVar21 = pdVar21 + 7;
      } while ((longlong)pFVar17 < (longlong)uVar25);
    }
  }
  if (local_120._0_8_ != 0) {
    LOCK();
    *(int *)(local_120._0_8_ + 0x30) = *(int *)(local_120._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_120._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_120._0_8_ + 0x20));
    }
  }
LAB_14694b736:
  if (pFVar18 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
    UNLOCK();
    if (local_res8 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
    }
  }
  LOCK();
  local_res20->ScheduledAccessCount = (atomic<int>)((int)local_res20->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar3 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_res20->ReadWriteLock);
  }
  if (local_158._0_8_ != 0) {
    if ((ulonglong)local_158._8_8_ < *(ulonglong *)(local_158._0_8_ + 0x28)) {
      local_158._8_8_ = *(ulonglong *)(local_158._0_8_ + 0x28);
    }
    *(undefined8 *)(local_158._0_8_ + 0x28) = local_158._8_8_;
    LOCK();
    *(int *)(local_158._0_8_ + 0x30) = *(int *)(local_158._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_158._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_158._0_8_ + 0x20));
    }
  }
  return;
}

// VisitAllocationCached @ 14694b7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitAllocationCached
          (TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FEntityAllocation *param_1)

{
  undefined8 *puVar1;
  uchar uVar2;
  ushort uVar3;
  undefined2 uVar4;
  EComponentHeaderLockMode EVar5;
  int iVar6;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
  *pTVar7;
  UObject *pUVar8;
  undefined1 *puVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *pTVar15;
  bool bVar16;
  uint uVar17;
  undefined8 *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  FResolvedPropertyAndFunction *this_00;
  FMargin *pFVar21;
  FName *pFVar22;
  FComponentHeader *pFVar23;
  ulonglong uVar24;
  int iVar25;
  undefined1 *puVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  longlong lVar29;
  FComponentHeader *pFVar30;
  longlong lVar31;
  undefined8 *puVar32;
  FComponentHeader *pFVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_288 [32];
  undefined1 local_268 [4];
  undefined1 local_264 [12];
  FComponentHeader *local_258;
  FWeakObjectPtr local_250;
  undefined1 local_248 [8];
  FComponentHeader *local_240;
  FWeakObjectPtr local_238;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  FWeakObjectPtr local_220;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *local_218;
  EComponentHeaderLockMode local_210;
  ulonglong local_208;
  FComponentHeader *local_200;
  undefined8 local_1f8;
  ushort *puStack_1f0;
  undefined1 local_1e8 [32];
  UObject *local_1c8;
  UObject *local_1c0;
  FName local_1b8;
  UObject *local_1b0;
  UObject *local_1a8;
  UObject *local_1a0;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> local_198;
  undefined1 local_178 [24];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  local_140;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  FName local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [32];
  FKeyType local_c0;
  FKeyType local_ac;
  undefined1 local_98 [28];
  undefined2 local_7c;
  undefined1 local_74;
  FIntermediateMargin local_70;
  
  local_70.Bottom = (double)(__security_cookie.value ^ (ulonglong)auStack_288);
  uVar24 = (ulonglong)param_1->Size;
  local_218 = this;
  FEntityAllocation::WriteComponents<UE::MovieScene::FInitialValueIndex>
            (param_1,&local_198,this->BuiltInComponents->InitialValueIndex,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateMargin>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> *
                     )local_1e8,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  local_258 = param_1->ComponentHeaders;
  pFVar30 = local_258 + param_1->NumComponents;
  for (; local_258 != pFVar30; local_258 = local_258 + 1) {
    pFVar33 = local_258;
    if ((TComponentTypeID<UObject_*>)(local_258->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14694b8c6;
  }
  local_258 = (FComponentHeader *)0x0;
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar33 = (FComponentHeader *)0x0;
  if (bVar16) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_14694b8c6:
  local_210 = param_1->LockMode;
  if (local_210 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar33->ReadWriteLock);
  }
  LOCK();
  pFVar33->ScheduledAccessCount = (atomic<int>)((int)pFVar33->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar30 = param_1->ComponentHeaders;
  local_264._4_8_ = pFVar33->Components;
  pFVar23 = pFVar30 + param_1->NumComponents;
  for (; pFVar30 != pFVar23; pFVar30 = pFVar30 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar30->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      EVar5 = param_1->LockMode;
      local_240 = pFVar30;
      if (EVar5 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar30->ReadWriteLock);
      }
      LOCK();
      pFVar30->ScheduledAccessCount = (atomic<int>)((int)pFVar30->ScheduledAccessCount + 1);
      UNLOCK();
      puStack_1f0 = (ushort *)pFVar30->Components;
      local_1f8 = CONCAT44(local_1f8._4_4_,EVar5);
      local_200 = pFVar30;
      goto LAB_14694b943;
    }
  }
  local_240 = (FComponentHeader *)0x0;
  local_1f8 = 0;
  puStack_1f0 = (ushort *)0x0;
  local_200 = (FComponentHeader *)0x0;
LAB_14694b943:
  pFVar30 = local_200;
  pTVar15 = local_218;
  local_208 = uVar24;
  if (puStack_1f0 == (ushort *)0x0) {
    FEntityAllocation::TryReadComponents<unsigned_short>
              (param_1,(TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> *)local_178,
               this->BuiltInComponents->FastPropertyOffset);
    if ((FComponentHeader *)local_178._16_8_ == (FComponentHeader *)0x0) {
      FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                (param_1,&local_140,this->BuiltInComponents->SlowProperty);
      if ((local_140._16_8_ != 0) && (uVar24 != 0)) {
        lVar31 = 0;
        lVar28 = 0;
        lVar29 = 0;
        do {
          pTVar7 = this->CacheStorage;
          if ((*(longlong *)(local_140._16_8_ + lVar28) == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(int *)(*(longlong *)(local_140._16_8_ + lVar28) + 0x58) == 0) {
            pwVar27 = L"";
          }
          else {
            pwVar27 = *(wchar_t **)(*(longlong *)(local_140._16_8_ + lVar28) + 0x50);
          }
          ::FName::FName(&local_1b8,pwVar27);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          ::FindPropertyIndex(pTVar7,(UObject *)local_248,*(FName **)(local_264._4_8_ + lVar31 * 8))
          ;
          uVar12 = local_264._4_8_;
          if (local_248[2] == '\0') {
            fVar34 = 0.0;
            fVar35 = 0.0;
            fVar36 = 0.0;
            fVar37 = 0.0;
            this_00 = FTrackInstancePropertyBindings::FindOrAdd
                                (*(FTrackInstancePropertyBindings **)(local_140._16_8_ + lVar28),
                                 *(UObject **)(local_264._4_8_ + lVar31 * 8));
            uVar2 = (this_00->ResolvedProperty).TypeIndex;
            if (uVar2 == '\0') {
              pFVar21 = FCachedProperty::GetPropertyAddress<FMargin>((FCachedProperty *)this_00);
LAB_14694bfc8:
              if (pFVar21 != (FMargin *)0x0) {
                fVar34 = pFVar21->Left;
                fVar35 = pFVar21->Top;
                fVar36 = pFVar21->Right;
                fVar37 = pFVar21->Bottom;
              }
            }
            else if (uVar2 == '\x01') {
              pFVar21 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
              goto LAB_14694bfc8;
            }
            local_120 = (double)fVar35;
            local_118 = (double)fVar36;
            local_110 = (double)fVar37;
            local_128 = (double)fVar34;
            *(double *)(lVar29 + local_1e8._24_8_) = local_128;
            *(double *)(lVar29 + 8 + local_1e8._24_8_) = local_120;
            *(double *)(lVar29 + 0x10 + local_1e8._24_8_) = local_118;
            *(double *)(lVar29 + 0x18 + local_1e8._24_8_) = local_110;
            pUVar8 = *(UObject **)(uVar12 + lVar31 * 8);
            pTVar7 = this->CacheStorage;
            lVar10 = *(longlong *)(local_140._16_8_ + lVar28);
            local_70.Left = 0.0;
            if (pUVar8 != (UObject *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar8);
              }
              local_250.ObjectIndex = 0;
              local_250.ObjectSerialNumber = 0;
              local_1b0 = pUVar8;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar8);
              }
              FWeakObjectPtr::operator=(&local_250,(FObjectPtr)&local_1b0);
              local_70.Left = (double)local_250;
            }
            iVar6 = *(int *)(lVar10 + 0x58);
            iVar25 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar25 = 0;
            }
            pFVar22 = ::FName::FName(&local_108,iVar25,*(wchar_t **)(lVar10 + 0x50),FNAME_Add);
            local_70.Top = *(double *)pFVar22;
            local_70.Right._0_1_ = 2;
            TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
            ::AddInitialValue(pTVar7,(FKeyType *)local_264,&local_70);
            *(undefined2 *)(local_198._24_8_ + lVar31 * 2) = local_264._0_2_;
            this = local_218;
          }
          else {
            lVar10 = *(longlong *)&this->CacheStorage->PropertyValues;
            puVar32 = (undefined8 *)((ulonglong)(ushort)local_248._0_2_ * 0x20 + lVar10);
            uVar12 = puVar32[1];
            puVar18 = (undefined8 *)((ulonglong)(ushort)local_248._0_2_ * 0x20 + 0x10 + lVar10);
            uVar13 = *puVar18;
            uVar14 = puVar18[1];
            *(undefined8 *)(lVar29 + local_1e8._24_8_) = *puVar32;
            ((undefined8 *)(lVar29 + local_1e8._24_8_))[1] = uVar12;
            puVar32 = (undefined8 *)(lVar29 + 0x10 + local_1e8._24_8_);
            *puVar32 = uVar13;
            puVar32[1] = uVar14;
          }
          lVar31 = lVar31 + 1;
          lVar29 = lVar29 + 0x20;
          lVar28 = lVar28 + 0x10;
          pFVar30 = local_200;
        } while (lVar31 < (longlong)local_208);
      }
      if (local_140._0_8_ != 0) {
        LOCK();
        *(int *)(local_140._0_8_ + 0x30) = *(int *)(local_140._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_140._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_140._0_8_ + 0x20));
        }
      }
    }
    else {
      local_240 = (FComponentHeader *)local_178._16_8_;
      if (uVar24 != 0) {
        lVar31 = 0;
        lVar28 = 0;
        pFVar33 = (FComponentHeader *)local_178._16_8_;
        puVar32 = (undefined8 *)local_1e8._24_8_;
        do {
          pTVar7 = this->CacheStorage;
          uVar4 = *(undefined2 *)((longlong)&pFVar33->_padding_ + lVar31 * 2);
          pUVar8 = *(UObject **)(local_264._4_8_ + lVar31 * 8);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          ::CleanupStaleEntries(pTVar7);
          local_c0.Object.ObjectIndex = 0;
          local_c0.Object.ObjectSerialNumber = 0;
          if (pUVar8 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar8);
            }
            local_228.ObjectIndex = 0;
            local_228.ObjectSerialNumber = 0;
            local_1c8 = pUVar8;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar8);
            }
            FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_1c8);
            local_c0.Object = (FObjectKey)local_228;
          }
          local_c0.Property.TypeIndex = '\0';
          local_c0.Property._0_2_ = uVar4;
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          ::CleanupStaleEntries(pTVar7);
          uVar17 = MovieScene::GetTypeHash(&local_c0);
          if (*(int *)&(pTVar7->KeyToPropertyIndex).field_0x8 !=
              *(int *)&(pTVar7->KeyToPropertyIndex).field_0x34) {
            puVar9 = *(undefined1 **)&(pTVar7->KeyToPropertyIndex).field_0x40;
            puVar26 = &(pTVar7->KeyToPropertyIndex).field_0x38;
            if (puVar9 != (undefined1 *)0x0) {
              puVar26 = puVar9;
            }
            iVar25 = *(int *)(puVar26 +
                             (ulonglong)
                             (*(int *)&(pTVar7->KeyToPropertyIndex).field_0x48 - 1U & uVar17) * 4);
            while (iVar25 != -1) {
              lVar29 = (longlong)iVar25 * 0x20;
              bVar16 = MovieScene::operator==
                                 ((FKeyType *)(*(longlong *)&pTVar7->KeyToPropertyIndex + lVar29),
                                  &local_c0);
              if (bVar16) {
                lVar29 = *(longlong *)&pTVar7->KeyToPropertyIndex + lVar29;
                puVar20 = (ushort *)(lVar29 + 0x14);
                if (lVar29 == 0) {
                  puVar20 = (ushort *)0x0;
                }
                if (puVar20 != (ushort *)0x0) {
                  lVar29 = *(longlong *)&local_218->CacheStorage->PropertyValues;
                  puVar18 = (undefined8 *)((ulonglong)*puVar20 * 0x20 + lVar29);
                  uVar12 = puVar18[1];
                  puVar1 = (undefined8 *)((ulonglong)*puVar20 * 0x20 + 0x10 + lVar29);
                  uVar13 = *puVar1;
                  uVar14 = puVar1[1];
                  *(undefined8 *)(lVar28 + (longlong)puVar32) = *puVar18;
                  ((undefined8 *)(lVar28 + (longlong)puVar32))[1] = uVar12;
                  puVar18 = (undefined8 *)(lVar28 + 0x10 + (longlong)puVar32);
                  *puVar18 = uVar13;
                  puVar18[1] = uVar14;
                  this = local_218;
                  goto LAB_14694be52;
                }
                break;
              }
              iVar25 = *(int *)(*(longlong *)&pTVar7->KeyToPropertyIndex + 0x18 + lVar29);
            }
          }
          this = local_218;
          uVar24 = (ulonglong)*(ushort *)((longlong)&local_240->_padding_ + lVar31 * 2);
          lVar29 = *(longlong *)(local_264._4_8_ + lVar31 * 8);
          local_158 = (double)*(float *)(uVar24 + 4 + lVar29);
          local_150 = (double)*(float *)(uVar24 + 8 + lVar29);
          local_148 = (double)*(float *)(uVar24 + 0xc + lVar29);
          local_160 = (double)*(float *)(uVar24 + lVar29);
          *(double *)(lVar28 + (longlong)puVar32) = local_160;
          *(double *)(lVar28 + 8 + (longlong)puVar32) = local_158;
          *(double *)(lVar28 + 0x10 + (longlong)puVar32) = local_150;
          *(double *)(lVar28 + 0x18 + (longlong)puVar32) = local_148;
          pUVar8 = *(UObject **)(local_264._4_8_ + lVar31 * 8);
          pTVar7 = local_218->CacheStorage;
          uVar4 = *(undefined2 *)((longlong)&local_240->_padding_ + lVar31 * 2);
          local_98._20_4_ = 0;
          local_98._24_4_ = 0;
          if (pUVar8 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar8);
            }
            local_220.ObjectIndex = 0;
            local_220.ObjectSerialNumber = 0;
            local_1c0 = pUVar8;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar8);
            }
            FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_1c0);
            local_98._20_8_ = local_220;
          }
          local_74 = 0;
          local_7c = uVar4;
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
          ::AddInitialValue(pTVar7,(FKeyType *)(local_268 + 2),
                            (FIntermediateMargin *)(local_98 + 0x14));
          *(undefined2 *)(local_198._24_8_ + lVar31 * 2) = local_268._2_2_;
          pFVar33 = (FComponentHeader *)local_178._16_8_;
          puVar32 = (undefined8 *)local_1e8._24_8_;
LAB_14694be52:
          lVar31 = lVar31 + 1;
          lVar28 = lVar28 + 0x20;
          pFVar30 = local_200;
        } while (lVar31 < (longlong)local_208);
      }
    }
    pFVar33 = local_258;
    if (local_178._0_8_ != 0) {
      LOCK();
      *(int *)(local_178._0_8_ + 0x30) = *(int *)(local_178._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_178._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_178._0_8_ + 0x20));
        pFVar33 = local_258;
      }
    }
  }
  else if (uVar24 != 0) {
    local_250 = (FWeakObjectPtr)(local_198._24_8_ - (longlong)puStack_1f0);
    lVar31 = 0;
    puVar32 = (undefined8 *)local_1e8._24_8_;
    puVar20 = puStack_1f0;
    do {
      pTVar7 = pTVar15->CacheStorage;
      pUVar8 = *(UObject **)(local_264._4_8_ + lVar31 * 8);
      uVar3 = *puVar20;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
      ::CleanupStaleEntries(pTVar7);
      local_ac.Object.ObjectIndex = 0;
      local_ac.Object.ObjectSerialNumber = 0;
      if (pUVar8 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar8);
        }
        local_238.ObjectIndex = 0;
        local_238.ObjectSerialNumber = 0;
        local_1a8 = pUVar8;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_1a8);
        local_ac.Object = (FObjectKey)local_238;
      }
      local_ac.Property.TypeIndex = '\x01';
      local_ac.Property._0_2_ = uVar3;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
      ::CleanupStaleEntries(pTVar7);
      uVar17 = MovieScene::GetTypeHash(&local_ac);
      if (*(int *)&(pTVar7->KeyToPropertyIndex).field_0x8 !=
          *(int *)&(pTVar7->KeyToPropertyIndex).field_0x34) {
        puVar9 = *(undefined1 **)&(pTVar7->KeyToPropertyIndex).field_0x40;
        puVar26 = &(pTVar7->KeyToPropertyIndex).field_0x38;
        if (puVar9 != (undefined1 *)0x0) {
          puVar26 = puVar9;
        }
        iVar25 = *(int *)(puVar26 +
                         (ulonglong)(*(int *)&(pTVar7->KeyToPropertyIndex).field_0x48 - 1U & uVar17)
                         * 4);
        while (iVar25 != -1) {
          lVar28 = (longlong)iVar25 * 0x20;
          bVar16 = MovieScene::operator==
                             ((FKeyType *)(*(longlong *)&pTVar7->KeyToPropertyIndex + lVar28),
                              &local_ac);
          if (bVar16) {
            lVar28 = *(longlong *)&pTVar7->KeyToPropertyIndex + lVar28;
            puVar19 = (ushort *)(lVar28 + 0x14);
            if (lVar28 == 0) {
              puVar19 = (ushort *)0x0;
            }
            if (puVar19 != (ushort *)0x0) {
              lVar28 = *(longlong *)&pTVar15->CacheStorage->PropertyValues;
              puVar18 = (undefined8 *)((ulonglong)*puVar19 * 0x20 + lVar28);
              uVar12 = puVar18[1];
              puVar1 = (undefined8 *)((ulonglong)*puVar19 * 0x20 + 0x10 + lVar28);
              uVar13 = *puVar1;
              uVar14 = puVar1[1];
              *puVar32 = *puVar18;
              puVar32[1] = uVar12;
              puVar32[2] = uVar13;
              puVar32[3] = uVar14;
              goto LAB_14694bb6c;
            }
            break;
          }
          iVar25 = *(int *)(*(longlong *)&pTVar7->KeyToPropertyIndex + 0x18 + lVar28);
        }
      }
      uVar12 = local_264._4_8_;
      puVar18 = (undefined8 *)
                (**(code **)((pTVar15->CustomAccessors).Base +
                            (longlong)(int)((uint)*puVar20 * (pTVar15->CustomAccessors).Stride) +
                            0x18))(local_e0,*(undefined8 *)(local_264._4_8_ + lVar31 * 8));
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      local_100 = *puVar18;
      uStack_f8 = puVar18[1];
      local_f0 = puVar18[2];
      uStack_e8 = puVar18[3];
      *puVar32 = local_100;
      puVar32[1] = uStack_f8;
      puVar32[2] = local_f0;
      puVar32[3] = uStack_e8;
      pUVar8 = *(UObject **)(uVar12 + lVar31 * 8);
      pTVar7 = pTVar15->CacheStorage;
      uVar3 = *puVar20;
      if (pUVar8 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar8);
        }
        local_230.ObjectIndex = 0;
        local_230.ObjectSerialNumber = 0;
        local_1a0 = pUVar8;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_1a0);
        local_98._0_8_ = local_230;
      }
      local_98[0x10] = 1;
      local_98._8_2_ = uVar3;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
      ::AddInitialValue(pTVar7,(FKeyType *)local_268,(FIntermediateMargin *)local_98);
      *(undefined2 *)((longlong)local_250 + (longlong)puVar20) = local_268._0_2_;
LAB_14694bb6c:
      lVar31 = lVar31 + 1;
      puVar32 = puVar32 + 4;
      puVar20 = puVar20 + 1;
      pFVar30 = local_240;
      pFVar33 = local_258;
    } while (lVar31 < (longlong)local_208);
  }
  if (pFVar30 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar30->ScheduledAccessCount = (atomic<int>)((int)pFVar30->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_1f8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar30->ReadWriteLock);
    }
  }
  LOCK();
  pFVar33->ScheduledAccessCount = (atomic<int>)((int)pFVar33->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_210 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar33->ReadWriteLock);
  }
  if (local_1e8._0_8_ != 0) {
    if ((ulonglong)local_1e8._8_8_ < *(ulonglong *)(local_1e8._0_8_ + 0x28)) {
      local_1e8._8_8_ = *(ulonglong *)(local_1e8._0_8_ + 0x28);
    }
    *(undefined8 *)(local_1e8._0_8_ + 0x28) = local_1e8._8_8_;
    LOCK();
    *(int *)(local_1e8._0_8_ + 0x30) = *(int *)(local_1e8._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_1e8._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_1e8._0_8_ + 0x20));
    }
  }
  if (local_198._0_8_ != 0) {
    if ((ulonglong)local_198._8_8_ < *(ulonglong *)(local_198._0_8_ + 0x28)) {
      local_198._8_8_ = *(ulonglong *)(local_198._0_8_ + 0x28);
    }
    *(undefined8 *)(local_198._0_8_ + 0x28) = local_198._8_8_;
    LOCK();
    *(int *)(local_198._0_8_ + 0x30) = *(int *)(local_198._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_198._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_198._0_8_ + 0x20));
    }
  }
  return;
}

// VisitAllocationCached @ 14694c250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitAllocationCached
          (TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FEntityAllocation *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uchar uVar3;
  ushort uVar4;
  undefined2 uVar5;
  EComponentHeaderLockMode EVar6;
  int iVar7;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
  *pTVar8;
  UObject *pUVar9;
  undefined1 *puVar10;
  code *pcVar11;
  double *pdVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  FResolvedPropertyAndFunction *this_00;
  FWidgetTransform *pFVar23;
  FName *pFVar24;
  FComponentHeader *pFVar25;
  ulonglong uVar26;
  int iVar27;
  longlong lVar28;
  undefined1 *puVar29;
  longlong lVar30;
  wchar_t *pwVar31;
  longlong lVar32;
  longlong lVar33;
  FComponentHeader *pFVar34;
  undefined8 *puVar35;
  longlong lVar36;
  FComponentHeader *pFVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined1 auStack_348 [32];
  undefined1 local_328 [4];
  undefined1 local_324 [12];
  FComponentHeader *local_318;
  FWeakObjectPtr local_310;
  undefined1 local_308 [16];
  FWeakObjectPtr local_2f8;
  FWeakObjectPtr local_2f0;
  FWeakObjectPtr local_2e8;
  FWeakObjectPtr local_2e0;
  EComponentHeaderLockMode local_2d8;
  FComponentHeader *local_2d0;
  ulonglong local_2c8;
  FComponentHeader *local_2c0;
  undefined8 local_2b8;
  ushort *puStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  ulonglong local_278;
  undefined1 local_270 [32];
  UObject *local_250;
  FName local_248;
  UObject *local_240;
  UObject *local_238;
  UObject *local_230;
  UObject *local_228;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FInitialValueIndex>_> local_220;
  undefined1 local_200 [24];
  TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  local_1e8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  double local_170;
  double dStack_168;
  FName local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 local_120 [56];
  FKeyType local_e8;
  FKeyType local_d4;
  undefined1 local_c0 [28];
  undefined2 local_a4;
  undefined1 local_9c;
  FIntermediateWidgetTransform local_98;
  
  local_98.ScaleX = (double)(__security_cookie.value ^ (ulonglong)auStack_348);
  uVar26 = (ulonglong)param_1->Size;
  local_308._8_8_ = this;
  FEntityAllocation::WriteComponents<UE::MovieScene::FInitialValueIndex>
            (param_1,&local_220,this->BuiltInComponents->InitialValueIndex,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateWidgetTransform>
            (param_1,(TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_>
                      *)local_270,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  local_318 = param_1->ComponentHeaders;
  pFVar34 = local_318 + param_1->NumComponents;
  for (; local_318 != pFVar34; local_318 = local_318 + 1) {
    pFVar37 = local_318;
    if ((TComponentTypeID<UObject_*>)(local_318->ComponentType).Value ==
        this->BuiltInComponents->BoundObject) goto LAB_14694c333;
  }
  local_318 = (FComponentHeader *)0x0;
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  pFVar37 = (FComponentHeader *)0x0;
  if (bVar18) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_14694c333:
  local_2d8 = param_1->LockMode;
  if (local_2d8 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar37->ReadWriteLock);
  }
  LOCK();
  pFVar37->ScheduledAccessCount = (atomic<int>)((int)pFVar37->ScheduledAccessCount + 1);
  UNLOCK();
  pFVar34 = param_1->ComponentHeaders;
  local_324._4_8_ = pFVar37->Components;
  pFVar25 = pFVar34 + param_1->NumComponents;
  for (; pFVar34 != pFVar25; pFVar34 = pFVar34 + 1) {
    if ((TComponentTypeID<UE::MovieScene::FCustomPropertyIndex>)(pFVar34->ComponentType).Value ==
        this->BuiltInComponents->CustomPropertyIndex) {
      EVar6 = param_1->LockMode;
      local_2d0 = pFVar34;
      if (EVar6 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar34->ReadWriteLock);
      }
      LOCK();
      pFVar34->ScheduledAccessCount = (atomic<int>)((int)pFVar34->ScheduledAccessCount + 1);
      UNLOCK();
      puStack_2b0 = (ushort *)pFVar34->Components;
      local_2b8 = CONCAT44(local_2b8._4_4_,EVar6);
      local_2c0 = pFVar34;
      goto LAB_14694c3b3;
    }
  }
  local_2d0 = (FComponentHeader *)0x0;
  local_2b8 = 0;
  puStack_2b0 = (ushort *)0x0;
  local_2c0 = (FComponentHeader *)0x0;
LAB_14694c3b3:
  pFVar34 = local_2c0;
  uVar2 = local_308._8_8_;
  local_2c8 = uVar26;
  if (puStack_2b0 == (ushort *)0x0) {
    FEntityAllocation::TryReadComponents<unsigned_short>
              (param_1,(TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_> *)local_200,
               this->BuiltInComponents->FastPropertyOffset);
    if ((TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
         *)local_200._16_8_ ==
        (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
         *)0x0) {
      FEntityAllocation::TryReadComponents<TSharedPtr<FTrackInstancePropertyBindings,1>_>
                (param_1,&local_1e8,this->BuiltInComponents->SlowProperty);
      if ((local_1e8._16_8_ != 0) && (uVar26 != 0)) {
        lVar28 = 0;
        lVar36 = lVar28;
        lVar33 = lVar28;
        do {
          pTVar8 = this->CacheStorage;
          if ((*(longlong *)(lVar33 + local_1e8._16_8_) == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar18)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar33 + local_1e8._16_8_) + 0x58) == 0) {
            pwVar31 = L"";
          }
          else {
            pwVar31 = *(wchar_t **)(*(longlong *)(lVar33 + local_1e8._16_8_) + 0x50);
          }
          ::FName::FName(&local_248,pwVar31);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          ::FindPropertyIndex(pTVar8,(UObject *)local_308,*(FName **)(local_324._4_8_ + lVar36 * 8))
          ;
          uVar2 = local_324._4_8_;
          if (local_308[2] == '\0') {
            uVar38 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X,0);
            uVar39 = (undefined4)
                     ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._0_8_ >> 0x20);
            fVar42 = 0.0;
            uVar40 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y,0);
            uVar41 = (undefined4)
                     ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._8_8_ >> 0x20);
            local_298 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
            dStack_290 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
            local_278 = local_278 & 0xffffffff00000000;
            local_2a8 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            local_288 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            this_00 = FTrackInstancePropertyBindings::FindOrAdd
                                (*(FTrackInstancePropertyBindings **)(lVar33 + local_1e8._16_8_),
                                 *(UObject **)(local_324._4_8_ + lVar36 * 8));
            uVar3 = (this_00->ResolvedProperty).TypeIndex;
            if (uVar3 == '\0') {
              pFVar23 = FCachedProperty::GetPropertyAddress<FWidgetTransform>
                                  ((FCachedProperty *)this_00);
LAB_14694cb3d:
              if (pFVar23 != (FWidgetTransform *)0x0) {
                uVar38 = *(undefined4 *)&(pFVar23->Scale).field0_0x0;
                uVar39 = *(undefined4 *)((longlong)&(pFVar23->Scale).field0_0x0 + 4);
                local_298 = (pFVar23->Scale).field0_0x0._s_0.X;
                pdVar12 = &(pFVar23->Scale).field0_0x0._s_0.Y;
                uVar40 = *(undefined4 *)pdVar12;
                uVar41 = *(undefined4 *)((longlong)&(pFVar23->Scale).field0_0x0 + 0xc);
                dStack_290 = *pdVar12;
                local_2a8 = *(undefined1 (*) [16])&(pFVar23->Translation).field0_0x0._s_0;
                local_278 = *(ulonglong *)&pFVar23->Angle;
                fVar42 = (float)local_278;
                local_288 = *(undefined1 (*) [16])&(pFVar23->Shear).field0_0x0._s_0;
              }
            }
            else if (uVar3 == '\x01') {
              pFVar23 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
              goto LAB_14694cb3d;
            }
            local_190 = (double)local_2a8._8_8_;
            local_198 = (double)local_2a8._0_8_;
            local_170 = (double)local_288._0_8_;
            dStack_168 = (double)local_288._8_8_;
            local_180 = CONCAT44(uVar39,uVar38);
            local_178 = CONCAT44(uVar41,uVar40);
            local_188 = (double)fVar42;
            *(undefined8 *)(lVar28 + local_270._24_8_) = local_2a8._0_8_;
            *(undefined8 *)(lVar28 + 8 + local_270._24_8_) = local_2a8._8_8_;
            *(double *)(lVar28 + 0x10 + local_270._24_8_) = local_188;
            *(double *)(lVar28 + 0x18 + local_270._24_8_) = local_298;
            *(double *)(lVar28 + 0x20 + local_270._24_8_) = dStack_290;
            *(undefined8 *)(lVar28 + 0x28 + local_270._24_8_) = local_288._0_8_;
            *(undefined8 *)(lVar28 + 0x30 + local_270._24_8_) = local_288._8_8_;
            pUVar9 = *(UObject **)(uVar2 + lVar36 * 8);
            local_308._8_8_ = this->CacheStorage;
            lVar30 = *(longlong *)(lVar33 + local_1e8._16_8_);
            local_98.TranslationX = 0.0;
            if (pUVar9 != (UObject *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar9);
              }
              local_310.ObjectIndex = 0;
              local_310.ObjectSerialNumber = 0;
              local_240 = pUVar9;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable(pUVar9);
              }
              FWeakObjectPtr::operator=(&local_310,(FObjectPtr)&local_240);
              local_98.TranslationX = (double)local_310;
            }
            iVar7 = *(int *)(lVar30 + 0x58);
            iVar27 = iVar7 + -1;
            if (iVar7 == 0) {
              iVar27 = 0;
            }
            pFVar24 = ::FName::FName(&local_160,iVar27,*(wchar_t **)(lVar30 + 0x50),FNAME_Add);
            local_98.TranslationY = *(double *)pFVar24;
            local_98.Rotation._0_1_ = 2;
            TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
            ::AddInitialValue((TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                               *)local_308._8_8_,(FKeyType *)local_324,&local_98);
            *(undefined2 *)(local_220._24_8_ + lVar36 * 2) = local_324._0_2_;
          }
          else {
            lVar32 = (ulonglong)(ushort)local_308._0_2_ * 0x38;
            lVar30 = *(longlong *)&this->CacheStorage->PropertyValues;
            uVar1 = ((undefined8 *)(lVar32 + lVar30))[1];
            puVar35 = (undefined8 *)(lVar32 + 0x10 + lVar30);
            uVar13 = *puVar35;
            uVar14 = puVar35[1];
            puVar35 = (undefined8 *)(lVar32 + 0x20 + lVar30);
            uVar15 = *puVar35;
            uVar16 = puVar35[1];
            uVar2 = *(undefined8 *)(lVar32 + 0x30 + lVar30);
            *(undefined8 *)(lVar28 + local_270._24_8_) = *(undefined8 *)(lVar32 + lVar30);
            ((undefined8 *)(lVar28 + local_270._24_8_))[1] = uVar1;
            puVar35 = (undefined8 *)(lVar28 + 0x10 + local_270._24_8_);
            *puVar35 = uVar13;
            puVar35[1] = uVar14;
            puVar35 = (undefined8 *)(lVar28 + 0x20 + local_270._24_8_);
            *puVar35 = uVar15;
            puVar35[1] = uVar16;
            *(undefined8 *)(lVar28 + 0x30 + local_270._24_8_) = uVar2;
          }
          lVar36 = lVar36 + 1;
          lVar28 = lVar28 + 0x38;
          lVar33 = lVar33 + 0x10;
          pFVar34 = local_2c0;
        } while (lVar36 < (longlong)local_2c8);
      }
      if (local_1e8._0_8_ != 0) {
        LOCK();
        *(int *)(local_1e8._0_8_ + 0x30) = *(int *)(local_1e8._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_1e8._8_4_ == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_1e8._0_8_ + 0x20));
        }
      }
    }
    else {
      local_308._8_8_ = local_200._16_8_;
      if (uVar26 != 0) {
        lVar33 = 0;
        lVar36 = 0;
        puVar35 = (undefined8 *)local_270._24_8_;
        do {
          uVar5 = *(undefined2 *)((longlong)(longlong *)local_200._16_8_ + lVar33 * 2);
          pTVar8 = this->CacheStorage;
          pUVar9 = *(UObject **)(local_324._4_8_ + lVar33 * 8);
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          ::CleanupStaleEntries(pTVar8);
          local_d4.Object.ObjectIndex = 0;
          local_d4.Object.ObjectSerialNumber = 0;
          if (pUVar9 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar9);
            }
            local_2e8.ObjectIndex = 0;
            local_2e8.ObjectSerialNumber = 0;
            local_228 = pUVar9;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar9);
            }
            FWeakObjectPtr::operator=(&local_2e8,(FObjectPtr)&local_228);
            local_d4.Object = (FObjectKey)local_2e8;
          }
          local_d4.Property.TypeIndex = '\0';
          local_d4.Property._0_2_ = uVar5;
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          ::CleanupStaleEntries(pTVar8);
          uVar19 = MovieScene::GetTypeHash(&local_d4);
          if (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x8 !=
              *(int *)&(pTVar8->KeyToPropertyIndex).field_0x34) {
            puVar10 = *(undefined1 **)&(pTVar8->KeyToPropertyIndex).field_0x40;
            puVar29 = &(pTVar8->KeyToPropertyIndex).field_0x38;
            if (puVar10 != (undefined1 *)0x0) {
              puVar29 = puVar10;
            }
            iVar27 = *(int *)(puVar29 +
                             (ulonglong)
                             (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x48 - 1U & uVar19) * 4);
            while (iVar27 != -1) {
              lVar28 = (longlong)iVar27 * 0x20;
              bVar18 = MovieScene::operator==
                                 ((FKeyType *)(*(longlong *)&pTVar8->KeyToPropertyIndex + lVar28),
                                  &local_d4);
              if (bVar18) {
                lVar28 = *(longlong *)&pTVar8->KeyToPropertyIndex + lVar28;
                puVar22 = (ushort *)(lVar28 + 0x14);
                if (lVar28 == 0) {
                  puVar22 = (ushort *)0x0;
                }
                if (puVar22 != (ushort *)0x0) {
                  lVar30 = (ulonglong)*puVar22 * 0x38;
                  lVar28 = *(longlong *)&this->CacheStorage->PropertyValues;
                  uVar1 = ((undefined8 *)(lVar30 + lVar28))[1];
                  puVar20 = (undefined8 *)(lVar30 + 0x10 + lVar28);
                  uVar13 = *puVar20;
                  uVar14 = puVar20[1];
                  puVar20 = (undefined8 *)(lVar30 + 0x20 + lVar28);
                  uVar15 = *puVar20;
                  uVar16 = puVar20[1];
                  uVar2 = *(undefined8 *)(lVar30 + 0x30 + lVar28);
                  *(undefined8 *)(lVar36 + (longlong)puVar35) = *(undefined8 *)(lVar30 + lVar28);
                  ((undefined8 *)(lVar36 + (longlong)puVar35))[1] = uVar1;
                  puVar20 = (undefined8 *)(lVar36 + 0x10 + (longlong)puVar35);
                  *puVar20 = uVar13;
                  puVar20[1] = uVar14;
                  puVar20 = (undefined8 *)(lVar36 + 0x20 + (longlong)puVar35);
                  *puVar20 = uVar15;
                  puVar20[1] = uVar16;
                  *(undefined8 *)(lVar36 + 0x30 + (longlong)puVar35) = uVar2;
                  goto LAB_14694c95c;
                }
                break;
              }
              iVar27 = *(int *)(lVar28 + 0x18 + *(longlong *)&pTVar8->KeyToPropertyIndex);
            }
          }
          uVar26 = (ulonglong)*(ushort *)((longlong)(longlong *)local_308._8_8_ + lVar33 * 2);
          lVar28 = *(longlong *)(local_324._4_8_ + lVar33 * 8);
          local_1d0 = *(undefined8 *)(uVar26 + lVar28);
          local_1c8 = *(undefined8 *)(uVar26 + 8 + lVar28);
          local_1b8 = *(undefined8 *)(uVar26 + 0x10 + lVar28);
          local_1b0 = *(undefined8 *)(uVar26 + 0x18 + lVar28);
          local_1a8 = *(undefined8 *)(uVar26 + 0x20 + lVar28);
          local_1a0 = *(undefined8 *)(uVar26 + 0x28 + lVar28);
          local_1c0 = (double)*(float *)(uVar26 + 0x30 + lVar28);
          *(undefined8 *)(lVar36 + (longlong)puVar35) = local_1d0;
          *(undefined8 *)(lVar36 + 8 + (longlong)puVar35) = local_1c8;
          *(double *)(lVar36 + 0x10 + (longlong)puVar35) = local_1c0;
          *(undefined8 *)(lVar36 + 0x18 + (longlong)puVar35) = local_1b8;
          *(undefined8 *)(lVar36 + 0x20 + (longlong)puVar35) = local_1b0;
          *(undefined8 *)(lVar36 + 0x28 + (longlong)puVar35) = local_1a8;
          *(undefined8 *)(lVar36 + 0x30 + (longlong)puVar35) = local_1a0;
          pUVar9 = *(UObject **)(local_324._4_8_ + lVar33 * 8);
          pTVar8 = this->CacheStorage;
          uVar5 = *(undefined2 *)((longlong)(longlong *)local_308._8_8_ + lVar33 * 2);
          local_c0._20_4_ = 0;
          local_c0._24_4_ = 0;
          if (pUVar9 != (UObject *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar9);
            }
            local_2e0.ObjectIndex = 0;
            local_2e0.ObjectSerialNumber = 0;
            local_250 = pUVar9;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar9);
            }
            FWeakObjectPtr::operator=(&local_2e0,(FObjectPtr)&local_250);
            local_c0._20_8_ = local_2e0;
          }
          local_9c = 0;
          local_a4 = uVar5;
          TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
          ::AddInitialValue(pTVar8,(FKeyType *)(local_328 + 2),
                            (FIntermediateWidgetTransform *)(local_c0 + 0x14));
          *(undefined2 *)(local_220._24_8_ + lVar33 * 2) = local_328._2_2_;
          puVar35 = (undefined8 *)local_270._24_8_;
LAB_14694c95c:
          lVar33 = lVar33 + 1;
          lVar36 = lVar36 + 0x38;
          pFVar34 = local_2c0;
        } while (lVar33 < (longlong)local_2c8);
      }
    }
    pFVar37 = local_318;
    if (local_200._0_8_ != 0) {
      LOCK();
      *(int *)(local_200._0_8_ + 0x30) = *(int *)(local_200._0_8_ + 0x30) + -1;
      UNLOCK();
      if (local_200._8_4_ == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_200._0_8_ + 0x20));
        pFVar37 = local_318;
      }
    }
  }
  else if (uVar26 != 0) {
    local_310 = (FWeakObjectPtr)(local_220._24_8_ - (longlong)puStack_2b0);
    lVar36 = 0;
    puVar35 = (undefined8 *)local_270._24_8_;
    puVar22 = puStack_2b0;
    do {
      pTVar8 = *(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                 **)&((TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,0>_>
                       *)(uVar2 + 0x40))->field_0x10;
      pUVar9 = *(UObject **)(local_324._4_8_ + lVar36 * 8);
      uVar4 = *puVar22;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
      ::CleanupStaleEntries(pTVar8);
      local_e8.Object.ObjectIndex = 0;
      local_e8.Object.ObjectSerialNumber = 0;
      if (pUVar9 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        local_2f8.ObjectIndex = 0;
        local_2f8.ObjectSerialNumber = 0;
        local_238 = pUVar9;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&local_2f8,(FObjectPtr)&local_238);
        local_e8.Object = (FObjectKey)local_2f8;
      }
      local_e8.Property.TypeIndex = '\x01';
      local_e8.Property._0_2_ = uVar4;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
      ::CleanupStaleEntries(pTVar8);
      uVar19 = MovieScene::GetTypeHash(&local_e8);
      if (*(int *)&(pTVar8->KeyToPropertyIndex).field_0x8 !=
          *(int *)&(pTVar8->KeyToPropertyIndex).field_0x34) {
        puVar10 = *(undefined1 **)&(pTVar8->KeyToPropertyIndex).field_0x40;
        puVar29 = &(pTVar8->KeyToPropertyIndex).field_0x38;
        if (puVar10 != (undefined1 *)0x0) {
          puVar29 = puVar10;
        }
        iVar27 = *(int *)(puVar29 +
                         (ulonglong)(*(int *)&(pTVar8->KeyToPropertyIndex).field_0x48 - 1U & uVar19)
                         * 4);
        while (iVar27 != -1) {
          lVar33 = (longlong)iVar27 * 0x20;
          bVar18 = MovieScene::operator==
                             ((FKeyType *)(*(longlong *)&pTVar8->KeyToPropertyIndex + lVar33),
                              &local_e8);
          if (bVar18) {
            lVar33 = *(longlong *)&pTVar8->KeyToPropertyIndex + lVar33;
            puVar21 = (ushort *)(lVar33 + 0x14);
            if (lVar33 == 0) {
              puVar21 = (ushort *)0x0;
            }
            if (puVar21 != (ushort *)0x0) {
              lVar28 = (ulonglong)*puVar21 * 0x38;
              lVar33 = *(longlong *)
                        &(*(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                            **)&((TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,0>_>
                                  *)(uVar2 + 0x40))->field_0x10)->PropertyValues;
              uVar13 = ((undefined8 *)(lVar28 + lVar33))[1];
              puVar20 = (undefined8 *)(lVar28 + 0x10 + lVar33);
              uVar14 = *puVar20;
              uVar15 = puVar20[1];
              puVar20 = (undefined8 *)(lVar28 + 0x20 + lVar33);
              uVar16 = *puVar20;
              uVar17 = puVar20[1];
              uVar1 = *(undefined8 *)(lVar28 + 0x30 + lVar33);
              *puVar35 = *(undefined8 *)(lVar28 + lVar33);
              puVar35[1] = uVar13;
              puVar35[2] = uVar14;
              puVar35[3] = uVar15;
              puVar35[4] = uVar16;
              puVar35[5] = uVar17;
              puVar35[6] = uVar1;
              goto LAB_14694c611;
            }
            break;
          }
          iVar27 = *(int *)(lVar33 + 0x18 + *(longlong *)&pTVar8->KeyToPropertyIndex);
        }
      }
      uVar16 = local_324._4_8_;
      puVar20 = (undefined8 *)
                (**(code **)(((FCustomAccessorView *)
                             &((TSparseArray<UE::MovieScene::FIntermediateWidgetTransform,FDefaultSparseArrayAllocator>
                                *)(uVar2 + 8))->field_0x28)->Base +
                            (longlong)
                            (int)((uint)*puVar22 *
                                 *(int *)&((TSparseArray<UE::MovieScene::FIntermediateWidgetTransform,FDefaultSparseArrayAllocator>
                                            *)(uVar2 + 8))->field_0x34) + 0x18))
                          (local_120,*(undefined8 *)(local_324._4_8_ + lVar36 * 8));
      local_c0._0_4_ = 0;
      local_c0._4_4_ = 0;
      local_148 = puVar20[2];
      uStack_140 = puVar20[3];
      local_158 = *puVar20;
      uStack_150 = puVar20[1];
      uVar13 = puVar20[2];
      uVar14 = puVar20[3];
      local_128 = puVar20[6];
      local_138 = puVar20[4];
      uStack_130 = puVar20[5];
      uVar15 = puVar20[1];
      uVar1 = puVar20[6];
      *puVar35 = *puVar20;
      puVar35[1] = uVar15;
      puVar35[2] = uVar13;
      puVar35[3] = uVar14;
      puVar35[4] = local_138;
      puVar35[5] = uStack_130;
      puVar35[6] = uVar1;
      pUVar9 = *(UObject **)(uVar16 + lVar36 * 8);
      pTVar8 = *(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
                 **)&((TMap<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>::FKeyType,unsigned_short,0>_>
                       *)(uVar2 + 0x40))->field_0x10;
      uVar4 = *puVar22;
      if (pUVar9 != (UObject *)0x0) {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        local_2f0.ObjectIndex = 0;
        local_2f0.ObjectSerialNumber = 0;
        local_230 = pUVar9;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable(pUVar9);
        }
        FWeakObjectPtr::operator=(&local_2f0,(FObjectPtr)&local_230);
        local_c0._0_8_ = local_2f0;
      }
      local_c0[0x10] = 1;
      local_c0._8_2_ = uVar4;
      TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
      ::AddInitialValue(pTVar8,(FKeyType *)local_328,(FIntermediateWidgetTransform *)local_c0);
      *(undefined2 *)((longlong)local_310 + (longlong)puVar22) = local_328._0_2_;
LAB_14694c611:
      lVar36 = lVar36 + 1;
      puVar35 = puVar35 + 7;
      puVar22 = puVar22 + 1;
      pFVar34 = local_2d0;
      pFVar37 = local_318;
    } while (lVar36 < (longlong)local_2c8);
  }
  if (pFVar34 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar34->ScheduledAccessCount = (atomic<int>)((int)pFVar34->ScheduledAccessCount + -1);
    UNLOCK();
    if ((int)local_2b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar34->ReadWriteLock);
    }
  }
  LOCK();
  pFVar37->ScheduledAccessCount = (atomic<int>)((int)pFVar37->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_2d8 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar37->ReadWriteLock);
  }
  if (local_270._0_8_ != 0) {
    if ((ulonglong)local_270._8_8_ < *(ulonglong *)(local_270._0_8_ + 0x28)) {
      local_270._8_8_ = *(ulonglong *)(local_270._0_8_ + 0x28);
    }
    *(undefined8 *)(local_270._0_8_ + 0x28) = local_270._8_8_;
    LOCK();
    *(int *)(local_270._0_8_ + 0x30) = *(int *)(local_270._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_270._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_270._0_8_ + 0x20));
    }
  }
  if (local_220._0_8_ != 0) {
    if ((ulonglong)local_220._8_8_ < *(ulonglong *)(local_220._0_8_ + 0x28)) {
      local_220._8_8_ = *(ulonglong *)(local_220._0_8_ + 0x28);
    }
    *(undefined8 *)(local_220._0_8_ + 0x28) = local_220._8_8_;
    LOCK();
    *(int *)(local_220._0_8_ + 0x30) = *(int *)(local_220._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_220._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_220._0_8_ + 0x20));
    }
  }
  return;
}

// VisitInterrogationAllocation @ 14694ce30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitInterrogationAllocation
          (TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FEntityAllocation *param_1)

{
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *this_00;
  undefined8 *puVar1;
  double *pdVar2;
  uchar uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
  *this_01;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *this_02;
  FInterrogationChannelInfo *this_03;
  UObject *pUVar14;
  FString *pFVar15;
  FResolvedPropertyAndFunction *this_04;
  FMargin *pFVar16;
  undefined1 (*pauVar17) [16];
  ulonglong uVar18;
  FComponentHeader *pFVar19;
  longlong lVar20;
  uchar *puVar21;
  FIntermediateMargin *pFVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  FComponentHeader *pFVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex>_> local_1a8;
  FInterrogationChannel local_1a0;
  undefined1 local_19c [6];
  char local_196;
  undefined1 local_194 [4];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  uchar local_170;
  FInterrogationChannel local_168 [2];
  EComponentHeaderLockMode local_160;
  TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
  *local_158;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *local_150;
  FComponentHeader *local_148;
  ulonglong local_140;
  uchar *local_138;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateMargin>_> local_130;
  FCustomAccessorView local_108;
  FString local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [72];
  undefined4 local_80;
  ForAnyElementType local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  uVar18 = (ulonglong)param_1->Size;
  local_158 = this;
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateMargin>
            (param_1,&local_130,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  pFVar28 = param_1->ComponentHeaders;
  pFVar19 = pFVar28 + param_1->NumComponents;
  for (; pFVar28 != pFVar19; pFVar28 = pFVar28 + 1) {
    local_148 = pFVar28;
    if ((TComponentTypeID<UE::MovieScene::FInterrogationKey>)(pFVar28->ComponentType).Value ==
        (this->BuiltInComponents->Interrogation).OutputKey) goto LAB_14694cef1;
  }
  pFVar28 = (FComponentHeader *)0x0;
  local_148 = (FComponentHeader *)0x0;
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar13) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14694cef1:
  local_160 = param_1->LockMode;
  if (local_160 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar28->ReadWriteLock);
  }
  LOCK();
  pFVar28->ScheduledAccessCount = (atomic<int>)((int)pFVar28->ScheduledAccessCount + 1);
  UNLOCK();
  puVar21 = pFVar28->Components;
  local_138 = puVar21;
  this_02 = (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
             *)(**(code **)*this->Interrogation)();
  local_150 = this_02;
  local_140 = uVar18;
  if (uVar18 != 0) {
    lVar29 = 0;
    lVar27 = 0;
    this_00 = &this->ValuesByChannel;
    do {
      uVar4 = (this->ValuesByChannel).Pairs.ArrayNum;
      iVar24 = 0;
      iVar23 = 0;
      local_1a0.Value = *(int *)(puVar21 + lVar29 * 8);
      pFVar5 = (this_00->Pairs).AllocatorInstance.Data;
      uVar25 = uVar4;
      if (0 < (int)uVar4) {
        do {
          uVar26 = uVar25 >> 1;
          iVar23 = iVar24;
          if (*(int *)(pFVar5 + (longlong)(int)(uVar26 + iVar24) * 0x28) < local_1a0.Value) {
            iVar23 = (uVar25 & 1) + uVar26 + iVar24;
          }
          uVar25 = uVar26;
          iVar24 = iVar23;
        } while (uVar26 != 0);
      }
      if (((iVar23 < (int)uVar4) &&
          (lVar20 = (longlong)iVar23, *(int *)(pFVar5 + lVar20 * 0x28) <= local_1a0.Value)) &&
         (iVar23 != -1)) {
        if ((iVar23 < 0) &&
           (local_1b8 = lVar20, local_1b0 = (longlong)(int)uVar4,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this_00->Pairs).AllocatorInstance.Data + lVar20 * 0x28 + 8;
        if (pFVar5 == (FScriptContainerElement *)0x0) goto LAB_14694d024;
        uVar7 = *(undefined8 *)(pFVar5 + 8);
        uVar8 = *(undefined8 *)(pFVar5 + 0x10);
        uVar9 = *(undefined8 *)(pFVar5 + 0x18);
        *(undefined8 *)(lVar27 + local_130._24_8_) = *(undefined8 *)pFVar5;
        ((undefined8 *)(lVar27 + local_130._24_8_))[1] = uVar7;
        puVar1 = (undefined8 *)(lVar27 + 0x10 + local_130._24_8_);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
      }
      else {
LAB_14694d024:
        local_168[0].Value = local_1a0.Value;
        this_03 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                  ::Find(this_02,local_168);
        if (((this_03 != (FInterrogationChannelInfo *)0x0) &&
            (pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_03), pUVar14 != (UObject *)0x0))
           && (this_02 = local_150, (this_03->PropertyBinding).PropertyName != (FName)0x0)) {
          local_108.Base = (local_158->CustomAccessors).Base;
          local_108.ViewNum = (local_158->CustomAccessors).ViewNum;
          local_108.Stride = (local_158->CustomAccessors).Stride;
          FPropertyRegistry::ResolveFastProperty
                    (&local_1a8,pUVar14,&this_03->PropertyBinding,&local_108);
          this_01 = local_158->CacheStorage;
          if (this_01 ==
              (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
               *)0x0) {
LAB_14694d184:
            local_170 = 0;
            if (local_1a8.bIsSet == false) {
              pFVar15 = ::FName::ToString(&(this_03->PropertyBinding).PropertyPath,&local_f8);
              FTrackInstancePropertyBindings::FTrackInstancePropertyBindings
                        ((FTrackInstancePropertyBindings *)local_c8,
                         (this_03->PropertyBinding).PropertyName,pFVar15);
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              local_170 = '\x01';
              local_190 = ZEXT816(0);
              local_180 = ZEXT816(0);
              fVar30 = 0.0;
              fVar31 = 0.0;
              fVar32 = 0.0;
              fVar33 = 0.0;
              this_04 = FTrackInstancePropertyBindings::FindOrAdd
                                  ((FTrackInstancePropertyBindings *)local_c8,pUVar14);
              uVar3 = (this_04->ResolvedProperty).TypeIndex;
              if (uVar3 == '\0') {
                pFVar16 = FCachedProperty::GetPropertyAddress<FMargin>((FCachedProperty *)this_04);
LAB_14694d201:
                if (pFVar16 != (FMargin *)0x0) {
                  fVar30 = pFVar16->Left;
                  fVar31 = pFVar16->Top;
                  fVar32 = pFVar16->Right;
                  fVar33 = pFVar16->Bottom;
                }
              }
              else if (uVar3 == '\x01') {
                pFVar16 = FVolatileProperty::ResolvePropertySteps
                                    ((FVolatileProperty *)this_04,false);
                goto LAB_14694d201;
              }
              local_180._8_8_ = (double)fVar33;
              local_180._0_8_ = (double)fVar32;
              local_190._8_8_ = (double)fVar31;
              local_190._0_8_ = (double)fVar30;
              if (local_78.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data);
              }
              local_80 = 0;
              if ((void *)local_c8._64_8_ != (void *)0x0) {
                FMemory::Free((void *)local_c8._64_8_);
              }
              TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_c8);
LAB_14694d2c7:
              if ((local_170 == '\0') &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              if (local_1a8.TypedValue.TypeIndex == '\x01') {
                local_170 = local_1a8.TypedValue.TypeIndex;
                local_190 = ZEXT816(0);
                local_180 = ZEXT816(0);
                pauVar17 = (undefined1 (*) [16])
                           (**(code **)((local_158->CustomAccessors).Base +
                                       (longlong)
                                       (int)((uint)(ushort)local_1a8.TypedValue._padding_ *
                                            (local_158->CustomAccessors).Stride) + 0x18))
                                     (local_e8,pUVar14);
                local_190 = *pauVar17;
                local_180 = pauVar17[1];
                goto LAB_14694d2c7;
              }
              if ((local_1a8.TypedValue.TypeIndex != '\0') &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index == TypeIndex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                      ,0x97,L""), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar18 = (ulonglong)(ushort)local_1a8.TypedValue._padding_;
              local_170 = '\x01';
              local_190._8_4_ = SUB84((double)*(float *)(&pUVar14->field_0x4 + uVar18),0);
              local_190._0_8_ = (double)*(float *)(&pUVar14->field_0x0 + uVar18);
              local_190._12_4_ =
                   (int)((ulonglong)(double)*(float *)(&pUVar14->field_0x4 + uVar18) >> 0x20);
              local_180._8_4_ = SUB84((double)*(float *)(&pUVar14->field_0xc + uVar18),0);
              local_180._0_8_ = (double)*(float *)(&pUVar14->field_0x8 + uVar18);
              local_180._12_4_ =
                   (int)((ulonglong)(double)*(float *)(&pUVar14->field_0xc + uVar18) >> 0x20);
            }
            *(double *)(lVar27 + local_130._24_8_) = (double)local_190._0_8_;
            ((double *)(lVar27 + local_130._24_8_))[1] = (double)local_190._8_8_;
            pdVar2 = (double *)(lVar27 + 0x10 + local_130._24_8_);
            *pdVar2 = (double)local_180._0_8_;
            pdVar2[1] = (double)local_180._8_8_;
            if ((local_170 == '\0') &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar22 = (FIntermediateMargin *)local_190;
          }
          else {
            if (local_1a8.bIsSet == false) {
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
              ::FindPropertyIndex(this_01,(UObject *)local_19c,(FName *)pUVar14);
              if (local_19c[2] == '\0') goto LAB_14694d15b;
              pFVar22 = (FIntermediateMargin *)
                        ((ulonglong)(ushort)local_19c._0_2_ * 0x20 +
                        *(longlong *)&this_01->PropertyValues);
            }
            else if (local_1a8.TypedValue.TypeIndex == '\x01') {
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
              ::FindPropertyIndex(this_01,(UObject *)(local_19c + 4),
                                  (FCustomPropertyIndex)(ushort)pUVar14);
              if (local_196 == '\0') {
LAB_14694d15b:
                pFVar22 = (FIntermediateMargin *)0x0;
              }
              else {
                pFVar22 = (FIntermediateMargin *)
                          ((ulonglong)(ushort)local_19c._4_2_ * 0x20 +
                          *(longlong *)&this_01->PropertyValues);
              }
            }
            else {
              if ((local_1a8.TypedValue.TypeIndex != '\0') &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index == TypeIndex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                      ,0x97,L""), bVar13)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>
              ::FindPropertyIndex(this_01,(UObject *)local_194,(ushort)pUVar14);
              if (local_194[2] == '\0') goto LAB_14694d15b;
              pFVar22 = (FIntermediateMargin *)
                        ((ulonglong)(ushort)local_194._0_2_ * 0x20 +
                        *(longlong *)&this_01->PropertyValues);
            }
            if (pFVar22 == (FIntermediateMargin *)0x0) goto LAB_14694d184;
            dVar10 = pFVar22->Top;
            dVar11 = pFVar22->Right;
            dVar12 = pFVar22->Bottom;
            *(double *)(lVar27 + local_130._24_8_) = pFVar22->Left;
            ((double *)(lVar27 + local_130._24_8_))[1] = dVar10;
            pdVar2 = (double *)(lVar27 + 0x10 + local_130._24_8_);
            *pdVar2 = dVar11;
            pdVar2[1] = dVar12;
          }
          TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateMargin,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
          ::
          Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediateMargin_const_&>
                    (this_00,&local_1a0,pFVar22);
          this_02 = local_150;
        }
      }
      lVar29 = lVar29 + 1;
      lVar27 = lVar27 + 0x20;
      puVar21 = local_138;
      pFVar28 = local_148;
    } while (lVar29 < (longlong)local_140);
  }
  LOCK();
  pFVar28->ScheduledAccessCount = (atomic<int>)((int)pFVar28->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_160 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar28->ReadWriteLock);
  }
  if (local_130._0_8_ != 0) {
    if ((ulonglong)local_130._8_8_ < *(ulonglong *)(local_130._0_8_ + 0x28)) {
      local_130._8_8_ = *(ulonglong *)(local_130._0_8_ + 0x28);
    }
    *(undefined8 *)(local_130._0_8_ + 0x28) = local_130._8_8_;
    LOCK();
    *(int *)(local_130._0_8_ + 0x30) = *(int *)(local_130._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_130._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_130._0_8_ + 0x20));
    }
  }
  return;
}

// VisitInterrogationAllocation @ 14694d4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::
TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
::VisitInterrogationAllocation
          (TInitialValueProcessorImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int>_>
           *this,FEntityAllocation *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  double dVar3;
  uchar uVar4;
  uint uVar5;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
  *this_00;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  FInterrogationChannelInfo *this_01;
  UObject *pUVar18;
  FString *pFVar19;
  FResolvedPropertyAndFunction *this_02;
  FWidgetTransform *pFVar20;
  double *pdVar21;
  ulonglong uVar22;
  FComponentHeader *pFVar23;
  FScriptContainerElement *pFVar24;
  uchar *puVar25;
  longlong lVar26;
  FIntermediateWidgetTransform *pFVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  FComponentHeader *pFVar34;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *pTVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex>_> local_258;
  FInterrogationChannel local_250;
  undefined1 local_24c [6];
  char local_246;
  undefined1 local_244 [12];
  undefined1 local_238 [24];
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  char local_200;
  FInterrogationChannel local_1f8 [2];
  EComponentHeaderLockMode local_1f0;
  FComponentHeader *local_1e8;
  TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
  *local_1e0;
  ulonglong local_1d8;
  uchar *local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  TVector2<double>_u_0 local_1a8;
  ulonglong local_198;
  TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediateWidgetTransform>_> local_190;
  FCustomAccessorView local_168;
  FString local_158;
  undefined1 local_148 [64];
  undefined1 local_108 [72];
  undefined4 local_c0;
  ForAnyElementType local_b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_288;
  uVar22 = (ulonglong)param_1->Size;
  FEntityAllocation::WriteComponents<UE::MovieScene::FIntermediateWidgetTransform>
            (param_1,&local_190,this->InitialValueType,
             (FEntityAllocationWriteContext)(this->WriteContext).SystemSerial);
  pFVar34 = param_1->ComponentHeaders;
  pFVar23 = pFVar34 + param_1->NumComponents;
  for (; pFVar34 != pFVar23; pFVar34 = pFVar34 + 1) {
    local_1e8 = pFVar34;
    if ((TComponentTypeID<UE::MovieScene::FInterrogationKey>)(pFVar34->ComponentType).Value ==
        (this->BuiltInComponents->Interrogation).OutputKey) goto LAB_14694d556;
  }
  pFVar34 = (FComponentHeader *)0x0;
  local_1e8 = (FComponentHeader *)0x0;
  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                     ("Header",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                      ,0x2cd,L"");
  if (bVar17) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14694d556:
  local_1f0 = param_1->LockMode;
  if (local_1f0 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar34->ReadWriteLock);
  }
  LOCK();
  pFVar34->ScheduledAccessCount = (atomic<int>)((int)pFVar34->ScheduledAccessCount + 1);
  UNLOCK();
  puVar25 = pFVar34->Components;
  local_1d0 = puVar25;
  local_1e0 = (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
               *)(**(code **)*this->Interrogation)();
  local_1d8 = uVar22;
  if (uVar22 != 0) {
    lVar33 = 0;
    lVar32 = 0;
    pTVar35 = &this->ValuesByChannel;
    local_244._4_8_ = pTVar35;
    do {
      uVar5 = (pTVar35->Pairs).ArrayNum;
      iVar28 = 0;
      local_250.Value = *(int *)(puVar25 + lVar33 * 8);
      pFVar24 = (pTVar35->Pairs).AllocatorInstance.Data;
      uVar30 = uVar5;
      iVar29 = 0;
      if (0 < (int)uVar5) {
        do {
          uVar31 = uVar30 >> 1;
          iVar28 = iVar29;
          if (*(int *)(pFVar24 + (longlong)(int)(uVar31 + iVar29) * 0x40) < local_250.Value) {
            iVar28 = (uVar30 & 1) + uVar31 + iVar29;
          }
          uVar30 = uVar31;
          iVar29 = iVar28;
        } while (uVar31 != 0);
      }
      if (iVar28 < (int)uVar5) {
        lVar26 = (longlong)iVar28 * 0x40;
        if ((local_250.Value < *(int *)(pFVar24 + lVar26)) || (iVar28 == -1)) goto LAB_14694d6ce;
        if ((iVar28 < 0) &&
           (local_268 = (longlong)iVar28, local_260 = (longlong)(int)uVar5,
           bVar17 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar24 = (pTVar35->Pairs).AllocatorInstance.Data + lVar26 + 8;
        if (pFVar24 == (FScriptContainerElement *)0x0) goto LAB_14694d6ce;
        uVar7 = *(undefined8 *)(pFVar24 + 8);
        uVar8 = *(undefined8 *)(pFVar24 + 0x10);
        uVar9 = *(undefined8 *)(pFVar24 + 0x18);
        uVar10 = *(undefined8 *)(pFVar24 + 0x20);
        uVar11 = *(undefined8 *)(pFVar24 + 0x28);
        uVar2 = *(undefined8 *)(pFVar24 + 0x30);
        *(undefined8 *)(lVar32 + local_190._24_8_) = *(undefined8 *)pFVar24;
        ((undefined8 *)(lVar32 + local_190._24_8_))[1] = uVar7;
        puVar1 = (undefined8 *)(lVar32 + 0x10 + local_190._24_8_);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)(lVar32 + 0x20 + local_190._24_8_);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        *(undefined8 *)(lVar32 + 0x30 + local_190._24_8_) = uVar2;
      }
      else {
LAB_14694d6ce:
        local_1f8[0].Value = local_250.Value;
        this_01 = TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                  ::Find(local_1e0,local_1f8);
        if (((this_01 != (FInterrogationChannelInfo *)0x0) &&
            (pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01), pUVar18 != (UObject *)0x0))
           && (pTVar35 = (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                          *)local_244._4_8_, (this_01->PropertyBinding).PropertyName != (FName)0x0))
        {
          local_168.Base = (this->CustomAccessors).Base;
          local_168.ViewNum = (this->CustomAccessors).ViewNum;
          local_168.Stride = (this->CustomAccessors).Stride;
          FPropertyRegistry::ResolveFastProperty
                    (&local_258,pUVar18,&this_01->PropertyBinding,&local_168);
          this_00 = this->CacheStorage;
          if (this_00 ==
              (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
               *)0x0) {
LAB_14694d849:
            local_200 = 0;
            if (local_258.bIsSet == false) {
              pFVar19 = ::FName::ToString(&(this_01->PropertyBinding).PropertyPath,&local_158);
              FTrackInstancePropertyBindings::FTrackInstancePropertyBindings
                        ((FTrackInstancePropertyBindings *)local_108,
                         (this_01->PropertyBinding).PropertyName,pFVar19);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
              uVar40 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X,0);
              uVar41 = (undefined4)
                       ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._0_8_ >> 0x20);
              uVar42 = SUB84(UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y,0);
              uVar43 = (undefined4)
                       ((ulonglong)UE::Math::TVector2<double>::UnitVector.field0_0x0._8_8_ >> 0x20);
              local_238._0_8_ = 0.0;
              local_238._8_8_ = 0.0;
              stack0xfffffffffffffdd8 = ZEXT816(0);
              local_208 = 0.0;
              local_218 = 0.0;
              dStack_210 = 0.0;
              local_200 = '\x01';
              uVar36 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
              uVar37 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
              uVar38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
              uVar39 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
              local_1b8 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.X;
              fVar44 = 0.0;
              local_1c8 = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
              dStack_1b0 = UE::Math::TVector2<double>::UnitVector.field0_0x0._s_0.Y;
              local_1a8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
              local_198 = local_198 & 0xffffffff00000000;
              this_02 = FTrackInstancePropertyBindings::FindOrAdd
                                  ((FTrackInstancePropertyBindings *)local_108,pUVar18);
              uVar4 = (this_02->ResolvedProperty).TypeIndex;
              if (uVar4 == '\0') {
                pFVar20 = FCachedProperty::GetPropertyAddress<FWidgetTransform>
                                    ((FCachedProperty *)this_02);
LAB_14694d90a:
                if (pFVar20 != (FWidgetTransform *)0x0) {
                  uVar40 = *(undefined4 *)&(pFVar20->Scale).field0_0x0;
                  uVar41 = *(undefined4 *)((longlong)&(pFVar20->Scale).field0_0x0 + 4);
                  local_1b8 = (pFVar20->Scale).field0_0x0._s_0.X;
                  pdVar21 = &(pFVar20->Scale).field0_0x0._s_0.Y;
                  uVar42 = *(undefined4 *)pdVar21;
                  uVar43 = *(undefined4 *)((longlong)&(pFVar20->Scale).field0_0x0 + 0xc);
                  dStack_1b0 = *pdVar21;
                  local_1c8 = *(undefined1 (*) [16])&(pFVar20->Translation).field0_0x0._s_0;
                  uVar36 = *(undefined4 *)&(pFVar20->Shear).field0_0x0;
                  uVar37 = *(undefined4 *)((longlong)&(pFVar20->Shear).field0_0x0 + 4);
                  uVar38 = *(undefined4 *)((longlong)&(pFVar20->Shear).field0_0x0 + 8);
                  uVar39 = *(undefined4 *)((longlong)&(pFVar20->Shear).field0_0x0 + 0xc);
                  local_1a8 = (pFVar20->Shear).field0_0x0;
                  local_198 = *(ulonglong *)&pFVar20->Angle;
                  fVar44 = (float)local_198;
                }
              }
              else if (uVar4 == '\x01') {
                pFVar20 = FVolatileProperty::ResolvePropertySteps
                                    ((FVolatileProperty *)this_02,false);
                goto LAB_14694d90a;
              }
              dStack_210 = (double)CONCAT44(uVar37,uVar36);
              local_238._0_8_ = local_1c8._0_8_;
              local_238._8_8_ = local_1c8._8_8_;
              dStack_220._4_4_ = uVar41;
              dStack_220._0_4_ = uVar40;
              local_218 = (double)CONCAT44(uVar43,uVar42);
              local_208 = (double)CONCAT44(uVar39,uVar38);
              local_238._16_8_ = (double)fVar44;
              if (local_b8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data);
              }
              local_c0 = 0;
              if ((void *)local_108._64_8_ != (void *)0x0) {
                FMemory::Free((void *)local_108._64_8_);
              }
              TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_108);
LAB_14694da17:
              if ((local_200 == '\0') &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              if (local_258.TypedValue.TypeIndex == '\x01') {
                local_200 = '\x01';
                local_208 = 0.0;
                local_238._0_8_ = 0.0;
                local_238._8_8_ = 0.0;
                stack0xfffffffffffffdd8 = ZEXT816(0);
                local_218 = 0.0;
                dStack_210 = 0.0;
                pdVar21 = (double *)
                          (**(code **)((this->CustomAccessors).Base +
                                      (longlong)
                                      (int)((uint)(ushort)local_258.TypedValue._padding_ *
                                           (this->CustomAccessors).Stride) + 0x18))
                                    (local_148,pUVar18);
                local_238._0_8_ = *pdVar21;
                local_238._8_8_ = pdVar21[1];
                unique0x10000f56 = *(undefined1 (*) [16])(pdVar21 + 2);
                local_218 = pdVar21[4];
                dStack_210 = pdVar21[5];
                local_208 = pdVar21[6];
                goto LAB_14694da17;
              }
              if ((local_258.TypedValue.TypeIndex != '\0') &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index == TypeIndex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                      ,0x97,L""), bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_200 = '\x01';
              uVar22 = (ulonglong)(ushort)local_258.TypedValue._padding_;
              local_238._0_8_ = *(undefined8 *)(&pUVar18->field_0x0 + uVar22);
              local_238._8_8_ = *(undefined8 *)(&pUVar18->field_0x8 + uVar22);
              local_218 = *(double *)(&pUVar18->field_0x18 + uVar22);
              dStack_210 = *(double *)(&pUVar18->field_0x20 + uVar22);
              local_208 = *(double *)(&pUVar18[1].field_0x0 + uVar22);
              dStack_220._0_4_ = (int)*(undefined8 *)(&pUVar18->field_0x10 + uVar22);
              local_238._16_8_ = (double)*(float *)(&pUVar18[1].field_0x8 + uVar22);
              dStack_220._4_4_ =
                   (int)((ulonglong)*(undefined8 *)(&pUVar18->field_0x10 + uVar22) >> 0x20);
            }
            *(double *)(lVar32 + local_190._24_8_) = (double)local_238._0_8_;
            ((double *)(lVar32 + local_190._24_8_))[1] = (double)local_238._8_8_;
            pdVar21 = (double *)(lVar32 + 0x10 + local_190._24_8_);
            *pdVar21 = (double)local_238._16_8_;
            pdVar21[1] = dStack_220;
            pdVar21 = (double *)(lVar32 + 0x20 + local_190._24_8_);
            *pdVar21 = local_218;
            pdVar21[1] = dStack_210;
            *(double *)(lVar32 + 0x30 + local_190._24_8_) = local_208;
            if ((local_200 == '\0') &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar27 = (FIntermediateWidgetTransform *)local_238;
          }
          else {
            if (local_258.bIsSet == false) {
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
              ::FindPropertyIndex(this_00,(UObject *)local_24c,(FName *)pUVar18);
              if (local_24c[2] == '\0') goto LAB_14694d7fa;
              pFVar27 = (FIntermediateWidgetTransform *)
                        ((ulonglong)(ushort)local_24c._0_2_ * 0x38 +
                        *(longlong *)&this_00->PropertyValues);
            }
            else if (local_258.TypedValue.TypeIndex == '\x01') {
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
              ::FindPropertyIndex(this_00,(UObject *)(local_24c + 4),
                                  (FCustomPropertyIndex)(ushort)pUVar18);
              if (local_246 == '\0') {
LAB_14694d7fa:
                pFVar27 = (FIntermediateWidgetTransform *)0x0;
              }
              else {
                pFVar27 = (FIntermediateWidgetTransform *)
                          ((ulonglong)(ushort)local_24c._4_2_ * 0x38 +
                          *(longlong *)&this_00->PropertyValues);
              }
            }
            else {
              if ((local_258.TypedValue.TypeIndex != '\0') &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index == TypeIndex",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                      ,0x97,L""), bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>
              ::FindPropertyIndex(this_00,(UObject *)local_244,(ushort)pUVar18);
              if (local_244[2] == '\0') goto LAB_14694d7fa;
              pFVar27 = (FIntermediateWidgetTransform *)
                        ((ulonglong)(ushort)local_244._0_2_ * 0x38 +
                        *(longlong *)&this_00->PropertyValues);
            }
            if (pFVar27 == (FIntermediateWidgetTransform *)0x0) goto LAB_14694d849;
            dVar12 = pFVar27->TranslationY;
            dVar13 = pFVar27->Rotation;
            dVar14 = pFVar27->ScaleX;
            dVar15 = pFVar27->ScaleY;
            dVar16 = pFVar27->ShearX;
            dVar3 = pFVar27->ShearY;
            *(double *)(lVar32 + local_190._24_8_) = pFVar27->TranslationX;
            ((double *)(lVar32 + local_190._24_8_))[1] = dVar12;
            pdVar21 = (double *)(lVar32 + 0x10 + local_190._24_8_);
            *pdVar21 = dVar13;
            pdVar21[1] = dVar14;
            pdVar21 = (double *)(lVar32 + 0x20 + local_190._24_8_);
            *pdVar21 = dVar15;
            pdVar21[1] = dVar16;
            *(double *)(lVar32 + 0x30 + local_190._24_8_) = dVar3;
          }
          pTVar35 = (TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                     *)local_244._4_8_;
          TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
          ::
          Emplace<UE::MovieScene::FInterrogationChannel_const_&,UE::MovieScene::FIntermediateWidgetTransform_const_&>
                    ((TSortedMap<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateWidgetTransform,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FInterrogationChannel_const_&>_>
                      *)local_244._4_8_,&local_250,pFVar27);
        }
      }
      lVar33 = lVar33 + 1;
      lVar32 = lVar32 + 0x38;
      puVar25 = local_1d0;
      pFVar34 = local_1e8;
    } while (lVar33 < (longlong)local_1d8);
  }
  LOCK();
  pFVar34->ScheduledAccessCount = (atomic<int>)((int)pFVar34->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_1f0 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&pFVar34->ReadWriteLock);
  }
  if (local_190._0_8_ != 0) {
    if ((ulonglong)local_190._8_8_ < *(ulonglong *)(local_190._0_8_ + 0x28)) {
      local_190._8_8_ = *(ulonglong *)(local_190._0_8_ + 0x28);
    }
    *(undefined8 *)(local_190._0_8_ + 0x28) = local_190._8_8_;
    LOCK();
    *(int *)(local_190._0_8_ + 0x30) = *(int *)(local_190._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_190._16_4_ == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_190._0_8_ + 0x20));
    }
  }
  return;
}

