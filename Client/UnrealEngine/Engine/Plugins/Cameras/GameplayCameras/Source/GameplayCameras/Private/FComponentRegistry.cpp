// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// MakeComponentTypeInfoWithoutComponentOps<FCameraFramingZone> @ 14d5f7910

FComponentTypeInfo * __thiscall
UE::MovieScene::FComponentRegistry::MakeComponentTypeInfoWithoutComponentOps<FCameraFramingZone>
          (FComponentRegistry *this,FComponentTypeInfo *__return_storage_ptr__,wchar_t *param_1,
          FNewComponentTypeParams *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  EComponentTypeFlags EVar4;
  FComponentTypeDebugInfo *pFVar5;
  FComponentTypeDebugInfo *pFVar6;
  
  __return_storage_ptr__->Sizeof = ' ';
  __return_storage_ptr__->Alignment = '\b';
  pFVar6 = (FComponentTypeDebugInfo *)0x0;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = '\0';
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  (__return_storage_ptr__->ComplexComponentOps).Ptr = (IComplexComponentOps *)0x0;
  (__return_storage_ptr__->DebugInfo).Ptr = (FComponentTypeDebugInfo *)0x0;
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = '\0';
  __return_storage_ptr__->bIsPreserved = EVar4;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = '\0';
  __return_storage_ptr__->bIsCopiedToOutput = EVar4 >> 2;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  EVar4 = param_2->Flags;
  puVar2 = &__return_storage_ptr__->field_0x12;
  __return_storage_ptr__->bIsZeroConstructType = '\0';
  __return_storage_ptr__->bHasReferencedObjects = '\0';
  __return_storage_ptr__->bIsMigratedToOutput = EVar4 >> 3;
  __return_storage_ptr__->bIsTriviallyCopyAssignable = '\x01';
  __return_storage_ptr__->bIsTriviallyDestructable = '\x01';
  pFVar5 = ::operator_new(0x20);
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar5->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar5->_padding_ =
         (longlong)&___7__TComponentTypeDebugInfo_UFCameraFramingZone___MovieScene_UE__6B_;
    (pFVar5->DebugName).Data.ArrayNum = 0;
    (pFVar5->DebugName).Data.ArrayMax = 0;
    pFVar5->DebugTypeName = (wchar_t *)0x0;
    pFVar6 = pFVar5;
  }
  pFVar5 = (__return_storage_ptr__->DebugInfo).Ptr;
  (__return_storage_ptr__->DebugInfo).Ptr = pFVar6;
  if (pFVar5 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  ::FString::operator=(&((__return_storage_ptr__->DebugInfo).Ptr)->DebugName,param_1);
  ((__return_storage_ptr__->DebugInfo).Ptr)->DebugTypeName = L"struct FCameraFramingZone";
  return __return_storage_ptr__;
}

// NewComponentType<FCameraFramingZone> @ 14d5f7af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TComponentTypeID<FCameraFramingZone> __thiscall
UE::MovieScene::FComponentRegistry::NewComponentType<FCameraFramingZone>
          (FComponentRegistry *this,wchar_t *param_1,FNewComponentTypeParams *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  TComponentTypeID<FCameraFramingZone> TVar8;
  FComponentTypeDebugInfo *pFVar9;
  FComponentTypeDebugInfo *pFVar10;
  FComponentTypeDebugInfo *pFVar11;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar12;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar13;
  longlong *in_R9;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined8 *puStack_88;
  undefined2 local_80;
  byte local_7e;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_78;
  wchar_t local_70;
  wchar_t local_6e;
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80 = 0x820;
  local_7e = ((*(byte *)(in_R9 + 1) & 1) * '\x02' | *(byte *)(in_R9 + 1) & 0xc) << 2 |
             local_7e & 0x86 | 6;
  local_98._8_8_ = (FComponentTypeDebugInfo *)0x0;
  puStack_88 = (undefined8 *)0x0;
  pFVar9 = ::operator_new(0x20);
  puVar6 = puStack_88;
  pFVar11 = (FComponentTypeDebugInfo *)0x0;
  pFVar10 = pFVar11;
  if (pFVar9 != (FComponentTypeDebugInfo *)0x0) {
    (pFVar9->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar9->_padding_ =
         (longlong)&___7__TComponentTypeDebugInfo_UFCameraFramingZone___MovieScene_UE__6B_;
    (pFVar9->DebugName).Data.ArrayNum = 0;
    (pFVar9->DebugName).Data.ArrayMax = 0;
    pFVar9->DebugTypeName = (wchar_t *)0x0;
    pFVar10 = pFVar9;
  }
  if (puStack_88 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puStack_88;
    puStack_88 = &pFVar10->_padding_;
    (*(code *)*puVar1)(puVar6,1);
    pFVar10 = (FComponentTypeDebugInfo *)puStack_88;
  }
  puStack_88 = &pFVar10->_padding_;
  ::FString::operator=((FString *)((longlong)puStack_88 + 8),(wchar_t *)param_2);
  *(wchar_t **)((longlong)puStack_88 + 0x18) = L"struct FCameraFramingZone";
  local_7e = local_7e | 0x40;
  pFVar2 = (FScriptContainerElement *)*in_R9;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    pFVar10 = ::operator_new(8);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      pFVar10->_padding_ =
           (longlong)
           &___7__TComplexComponentOps_UFCameraFramingZone___FComponentTypeInfo_MovieScene_UE__6B_;
      pFVar11 = pFVar10;
    }
  }
  else {
    pFVar10 = ::operator_new(0x10);
    if (pFVar10 != (FComponentTypeDebugInfo *)0x0) {
      (pFVar10->DebugName).Data.AllocatorInstance.Data = pFVar2;
      pFVar10->_padding_ =
           (longlong)
           &
           ___7__TComplexComponentOpsCustomRefCollection_UFCameraFramingZone___FComponentTypeInfo_MovieScene_UE__6B_
      ;
      pFVar11 = pFVar10;
    }
  }
  uVar5 = local_98._8_8_;
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    plVar4 = (longlong *)local_98._8_8_;
    local_98._8_8_ = pFVar11;
    (**(code **)*plVar4)(uVar5,1);
    pFVar11 = (FComponentTypeDebugInfo *)local_98._8_8_;
  }
  local_98._8_8_ = pFVar11;
  NewComponentTypeInternal(this,(FComponentTypeInfo *)local_98);
  *param_1 = local_98._0_2_;
  if ((*(byte *)(in_R9 + 1) & 2) != 0) {
    local_38 = local_38 | 3;
    local_70 = local_98._0_2_;
    local_6e = local_98._0_2_;
    local_78 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)
               &___7__TDuplicateChildEntityInitializer_UFCameraFramingZone___MovieScene_UE__6B_;
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FCameraFramingZone>)(*pcVar3)();
      return TVar8;
    }
    pTVar13 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar13 = local_78;
    }
    if (((local_38 & 1) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FCameraFramingZone>)(*pcVar3)();
      return TVar8;
    }
    pTVar12 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
    if ((local_38 & 2) == 0) {
      pTVar12 = local_78;
    }
    if ((pTVar13 != pTVar12) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      TVar8 = (TComponentTypeID<FCameraFramingZone>)(*pcVar3)();
      return TVar8;
    }
    FEntityFactories::DefineChildComponent
              (&this->Factories,
               (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78);
    if ((local_38 & 1) != 0) {
      pTVar13 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)&local_78;
      if ((local_38 & 2) == 0) {
        pTVar13 = local_78;
      }
      local_38 = local_38 & 0xfe;
      (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                     (pTVar13->Data).Pad)->Data).Pad)(pTVar13,0);
      if ((local_38 & 2) == 0) {
        FMemory::Free(local_78);
      }
    }
  }
  if ((FComponentTypeDebugInfo *)puStack_88 != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*puStack_88)(puStack_88,1);
  }
  if ((FComponentTypeDebugInfo *)local_98._8_8_ != (FComponentTypeDebugInfo *)0x0) {
    (**(code **)*(longlong *)local_98._8_8_)(local_98._8_8_,1);
  }
  return SUB82(param_1,0);
}

