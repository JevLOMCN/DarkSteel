// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 5

// FromJson @ 14e66ed70

void __thiscall
UE::Interchange::FAnimationPayloadQuery::FromJson(FAnimationPayloadQuery *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar5;
  EInterchangeAnimationPayLoadType local_res18 [8];
  TSharedPtr<FJsonObject,1> local_128;
  StackState local_118;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  wchar_t *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  wchar_t *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  wchar_t *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pTVar5 = TJsonStringReader<wchar_t>::Create(&local_78,param_1);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  local_118.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Identifier.Data.ArrayNum = 0;
  local_118.Identifier.Data.ArrayMax = 0;
  local_118.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Object = (FJsonObject *)0x0;
  local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_118.Array.ArrayNum = 0;
  local_118.Array.ArrayMax = 0;
  local_118.Object.Object = (FJsonObject *)0x0;
  local_118.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_118,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_118,&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_118.Array.AllocatorInstance.Data,
               local_118.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_118.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_118.Array.AllocatorInstance.Data);
    }
    if (local_118.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_128.Object != (FJsonObject *)0x0)) {
      if ((local_128.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack_d0 = 0x11;
      local_d8 = L"SceneNodeUniqueID";
      local_68._12_4_ = uStack_cc;
      local_68.Size = 0x11;
      local_68.DataPtr = L"SceneNodeUniqueID";
      FJsonObject::TryGetStringField(local_128.Object,&local_68,&this->SceneNodeUniqueID);
      if ((local_128.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_c8 = L"PayloadKey.UniqueId";
      uStack_c0 = 0x13;
      local_58._12_4_ = uStack_bc;
      local_58.Size = 0x13;
      local_58.DataPtr = L"PayloadKey.UniqueId";
      FJsonObject::TryGetStringField(local_128.Object,&local_58,&(this->PayloadKey).UniqueId);
      if ((local_128.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_b8 = L"PayloadKey.Type";
      uStack_b0 = 0xf;
      local_48._12_4_ = uStack_ac;
      local_48.Size = 0xf;
      local_48.DataPtr = L"PayloadKey.Type";
      bVar4 = FJsonObject::TryGetNumberField(local_128.Object,&local_48,local_res18);
      if (bVar4) {
        (this->PayloadKey).Type = local_res18[0];
      }
      if ((local_128.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_a8 = L"TimeDescription.BakeFrequency";
      uStack_a0 = 0x1d;
      local_38._12_4_ = uStack_9c;
      local_38.Size = 0x1d;
      local_38.DataPtr = L"TimeDescription.BakeFrequency";
      FJsonObject::TryGetNumberField
                (local_128.Object,&local_38,&(this->TimeDescription).BakeFrequency);
      if ((local_128.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_98 = L"TimeDescription.RangeStartSecond";
      uStack_90 = 0x20;
      local_28._12_4_ = uStack_8c;
      local_28.Size = 0x20;
      local_28.DataPtr = L"TimeDescription.RangeStartSecond";
      FJsonObject::TryGetNumberField
                (local_128.Object,&local_28,&(this->TimeDescription).RangeStartSecond);
      if ((local_128.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_88 = L"TimeDescription.RangeStopSecond";
      uStack_80 = 0x1f;
      local_18._12_4_ = uStack_7c;
      local_18.Size = 0x1f;
      local_18.DataPtr = L"TimeDescription.RangeStopSecond";
      FJsonObject::TryGetNumberField
                (local_128.Object,&local_18,&(this->TimeDescription).RangeStopSecond);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_118.Array.AllocatorInstance.Data,
               local_118.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_118.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_118.Array.AllocatorInstance.Data);
    }
    if (local_118.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Identifier.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// FromJson @ 14e66f0f0

void __cdecl
UE::Interchange::FAnimationPayloadQuery::FromJson
          (FString *param_1,
          TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TJsonStringReader<wchar_t> *pTVar4;
  FAnimationPayloadQuery *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  undefined8 _Src;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_f8;
  StackState local_e8;
  FAnimationPayloadQuery local_a8;
  FString local_58;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_48 [2];
  
  pTVar11 = TJsonStringReader<wchar_t>::Create(local_48,param_1);
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  pTVar4 = pTVar11->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48[0].SharedReferenceCount.ReferenceController);
  uVar16 = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Object.Object = (FJsonObject *)0x0;
  local_e8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e8.Identifier.Data.ArrayNum = 0;
  local_e8.Identifier.Data.ArrayMax = 0;
  local_e8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Array.ArrayNum = 0;
  local_e8.Array.ArrayMax = 0;
  bVar8 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar4,&local_e8,None);
  if (bVar8) {
    bVar8 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_e8,&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data,
               local_e8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_e8.Array.AllocatorInstance.Data);
    }
    if (local_e8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Identifier.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      uVar12 = local_f8._8_8_ & 0xffffffff;
      if (local_f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar12);
      }
      piVar1 = &param_2->ArrayMax;
      if (param_2->ArrayMax < local_f8.ArrayNum) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,local_f8.ArrayNum,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
        uVar12 = local_f8._8_8_ & 0xffffffff;
      }
      iVar10 = 0;
      if ((int)uVar12 != 0) {
        do {
          uVar15 = (uint)uVar16;
          uVar9 = 0;
          if ((int)uVar15 < (int)uVar12) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar7.Data = local_f8.AllocatorInstance.Data;
          if ((*(longlong *)&local_f8.AllocatorInstance.Data[(longlong)(int)uVar15 * 0x10].field_0x0
               == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FJsonValue::AsString
                    (*(FJsonValue **)&FVar7.Data[(longlong)(int)uVar15 * 0x10].field_0x0,&local_58);
          local_a8.SceneNodeUniqueID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.SceneNodeUniqueID.Data.ArrayNum = 0;
          local_a8.SceneNodeUniqueID.Data.ArrayMax = 0;
          ::FString::FString(&local_a8.PayloadKey.UniqueId,"");
          local_a8.TimeDescription.BakeFrequency = 0.0;
          local_a8.TimeDescription.RangeStartSecond = 0.0;
          local_a8.TimeDescription.RangeStopSecond = 0.0;
          local_a8.PayloadKey.Type = NONE;
          local_a8.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
               (ForAnyElementType)(FScriptContainerElement *)0x0;
          local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayNum = 0;
          local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayMax = -1;
          FromJson(&local_a8,&local_58);
          pFVar5 = (FAnimationPayloadQuery *)(param_2->AllocatorInstance).Data;
          if (((pFVar5 <= &local_a8) && (&local_a8 < pFVar5 + *piVar1)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = param_2->ArrayNum;
          if (iVar10 == *piVar1) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x850,&param_2->AllocatorInstance,piVar1);
            param_2->ArrayNum = iVar10;
          }
          FVar7.Data = local_a8.SceneNodeUniqueID.Data.AllocatorInstance.Data;
          param_2->ArrayNum = iVar10 + 1;
          pFVar14 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 0x50;
          *(undefined8 *)&pFVar14->field_0x0 = 0;
          lVar13 = (longlong)local_a8.SceneNodeUniqueID.Data.ArrayNum;
          *(int *)&pFVar14[8].field_0x0 = local_a8.SceneNodeUniqueID.Data.ArrayNum;
          if (local_a8.SceneNodeUniqueID.Data.ArrayNum == 0) {
            *(int *)(pFVar14 + 0xc) = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_a8.SceneNodeUniqueID.Data.ArrayNum,0,(ForAnyElementType *)pFVar14,
                       local_a8.SceneNodeUniqueID.Data.ArrayNum,(int *)(pFVar14 + 0xc));
            memcpy(*(void **)&pFVar14->field_0x0,FVar7.Data,lVar13 * 2);
          }
          ::FString::FString((FString *)(pFVar14 + 0x10),&local_a8.PayloadKey.UniqueId);
          _Src = local_a8.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
          pFVar2 = pFVar14 + 0x40;
          pFVar14[0x20].field_0x0 = local_a8.PayloadKey.Type;
          *(double *)&pFVar14[0x28].field_0x0 = local_a8.TimeDescription.BakeFrequency;
          *(double *)&pFVar14[0x30].field_0x0 = local_a8.TimeDescription.RangeStartSecond;
          *(double *)&pFVar14[0x38].field_0x0 = local_a8.TimeDescription.RangeStopSecond;
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          *(undefined4 *)&pFVar14[0x48].field_0x0 = 0;
          *(undefined4 *)(pFVar14 + 0x4c) = 0xffffffff;
          if (local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayMax != -1) {
            lVar13 = (longlong)local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayNum;
            *(int *)&pFVar14[0x48].field_0x0 =
                 local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayNum;
            if (local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayNum == 0) {
              *(int *)(pFVar14 + 0x4c) = 0;
            }
            else {
              Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayNum,0,
                         (ForAnyElementType *)pFVar2,
                         local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayNum,
                         (int *)(pFVar14 + 0x4c));
              memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,(void *)_Src,lVar13 * 2);
            }
          }
          if ((local_a8.HashStringCache.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
             (local_a8.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0)) {
            FMemory::Free((void *)local_a8.HashStringCache.field0_0x0.TypedValue.Data.
                                  AllocatorInstance.Data);
          }
          if (local_a8.PayloadKey.UniqueId.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.PayloadKey.UniqueId.Data.AllocatorInstance.Data);
          }
          if (local_a8.SceneNodeUniqueID.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.SceneNodeUniqueID.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          uVar12 = (ulonglong)local_f8.ArrayNum;
          uVar16 = uVar16 + 1;
          iVar10 = local_f8.ArrayNum;
        } while (uVar16 < uVar12);
      }
      goto LAB_14e66f1b0;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data,
               local_e8.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_e8.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_e8.Array.AllocatorInstance.Data);
    }
    if (local_e8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Identifier.Data.AllocatorInstance.Data);
    }
  }
  iVar10 = local_f8.ArrayNum;
LAB_14e66f1b0:
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_f8.AllocatorInstance.Data,iVar10);
  if ((TSharedPtr<FJsonValue,1> *)local_f8.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetHashString @ 14e66f5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Interchange::FAnimationPayloadQuery::GetHashString
          (FAnimationPayloadQuery *this,FString *__return_storage_ptr__)

{
  TOptional<FString> *pTVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FString *pFVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined7 uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_218 [32];
  FString local_1d8;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  FGuid local_1a0;
  FString local_190;
  FArchiveState local_178;
  undefined8 local_e8;
  ForAnyElementType *local_e0;
  undefined8 local_d8;
  FSHA1 local_c8;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (*(int *)((longlong)&(this->HashStringCache).field0_0x0 + 0xc) == -1) {
    dVar4 = (this->TimeDescription).RangeStopSecond;
    uVar14 = (int)((ulonglong)dVar4 >> 0x20) * 0x17 + SUB84(dVar4,0);
    dVar4 = (this->TimeDescription).RangeStartSecond;
    uVar13 = (int)((ulonglong)dVar4 >> 0x20) * 0x17 + SUB84(dVar4,0);
    dVar4 = (this->TimeDescription).BakeFrequency;
    uVar10 = ((int)((ulonglong)dVar4 >> 0x20) * 0x17 - uVar13) + SUB84(dVar4,0) ^ uVar13 >> 0xd;
    uVar9 = (-0x61c88647 - uVar10) - uVar13 ^ uVar10 << 8;
    uVar13 = (uVar13 - uVar9) - uVar10 ^ uVar9 >> 0xd;
    uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 >> 0xc;
    uVar9 = (uVar9 - uVar10) - uVar13 ^ uVar10 << 0x10;
    uVar13 = (uVar13 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar13 ^ uVar10 << 10;
    uVar10 = ((uVar13 - uVar9) - uVar10 ^ uVar9 >> 0xf) - uVar14 ^ uVar14 >> 0xd;
    uVar9 = (-0x61c88647 - uVar10) - uVar14 ^ uVar10 << 8;
    uVar13 = (uVar14 - uVar9) - uVar10 ^ uVar9 >> 0xd;
    uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 >> 0xc;
    local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar9 = (uVar9 - uVar10) - uVar13 ^ uVar10 << 0x10;
    local_1b0.Data.ArrayNum = 0;
    local_1b0.Data.ArrayMax = 0;
    uVar13 = (uVar13 - uVar9) - uVar10 ^ uVar9 >> 5;
    uVar10 = (uVar10 - uVar13) - uVar9 ^ uVar13 >> 3;
    uVar9 = (uVar9 - uVar10) - uVar13 ^ uVar10 << 10;
    ::FString::AppendInt(&local_1b0,(uVar13 - uVar9) - uVar10 ^ uVar9 >> 0xf);
    ::FString::ConcatFF(&local_190,&(this->PayloadKey).UniqueId,&local_1b0);
    if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
    }
    local_1c8.Data = (FScriptContainerElement *)0x0;
    uVar11 = 0;
    local_1c0 = 0;
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x40,&local_1c8,0,(int *)((longlong)&local_1c0 + 4));
    local_1b8 = 0;
    local_178._padding_ = 0;
    local_178.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_178.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_178.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_178._40_8_ = 0;
    local_178.ArSerializingDefaults = 0;
    local_178.ArPortFlags = 0;
    local_178.ArMaxSerializeSize = 0;
    local_178.ArUEVer.FileVersionUE4 = 0;
    local_178.ArUEVer.FileVersionUE5 = 0;
    local_178.ArLicenseeUEVer = 0;
    local_178.ArEngineVer.Major = 0;
    local_178.ArEngineVer.Minor = 0;
    local_178.ArEngineVer.Patch = 0;
    local_178.ArEngineVer._6_2_ = 0;
    local_178.ArEngineVer.Changelist = 0;
    local_178.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_178.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_178.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_178.SerializedProperty = (FProperty *)0x0;
    local_178.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_178.bCustomVersionsAreReset = false;
    local_178._129_7_ = 0;
    local_178.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_178);
    local_e8 = 0;
    local_178._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_e0 = &local_1c8;
    uVar12 = (undefined7)((ulonglong)uVar11 >> 8);
    local_d8 = 0;
    FArchiveState::SetIsSaving(&local_178,true);
    (**(code **)(local_178._padding_ + 0x108))(&local_178,CONCAT71(uVar12,1));
    local_178._padding_ = (longlong)&___7FMemoryWriter__6B_;
    ::operator<<((FArchive *)&local_178,&local_190);
    FSHA1::FSHA1(&local_c8);
    FSHA1::Update(&local_c8,(uchar *)local_1c8.Data,local_1c0 & 0xffffffff);
    FSHA1::Final(&local_c8);
    FSHA1::GetHash(&local_c8,(uchar *)&local_38);
    local_1a0.A = local_38 ^ local_28;
    local_1a0.B = local_34;
    local_1a0.C = local_30;
    local_1a0.D = local_2c;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Data.ArrayNum = 0;
    local_1d8.Data.ArrayMax = 0;
    FGuid::AppendString(&local_1a0,&local_1d8,Base36Encoded);
    FSHA1::~FSHA1(&local_c8);
    FArchive::~FArchive((FArchive *)&local_178);
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    pTVar1 = &this->HashStringCache;
    if (&local_1d8 != (FString *)pTVar1) {
      pFVar5 = (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           local_1d8.Data.AllocatorInstance.Data;
      *(int *)((longlong)&(this->HashStringCache).field0_0x0 + 8) = local_1d8.Data.ArrayNum;
      iVar3 = local_1d8.Data.ArrayMax;
      local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)&(this->HashStringCache).field0_0x0 + 0xc) = local_1d8.Data.ArrayMax;
      local_1d8.Data.ArrayNum = 0;
      local_1d8.Data.ArrayMax = 0;
      if ((iVar3 == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FString *)(*pcVar6)();
        return pFVar8;
      }
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)((longlong)&(this->HashStringCache).field0_0x0 + 0xc) == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FString *)(*pcVar6)();
    return pFVar8;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(__return_storage_ptr__->Data).ArrayMax;
  iVar3 = *(int *)((longlong)&(this->HashStringCache).field0_0x0 + 8);
  pFVar5 = (this->HashStringCache).field0_0x0.TypedValue.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar2);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,pFVar5,(longlong)iVar3 * 2);
  }
  return __return_storage_ptr__;
}

// ToJson @ 14e670a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __thiscall
UE::Interchange::FAnimationPayloadQuery::ToJson
          (FAnimationPayloadQuery *this,FString *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  double dVar2;
  EInterchangeAnimationPayLoadType EVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FString *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *this_00;
  FString local_d8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_c8;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  TSharedPtr<FJsonObject,1> local_48 [2];
  
  pTVar6 = ::operator_new(0x60);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    this_00 = (TReferenceControllerBase<1> *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    this_00 = pTVar6 + 1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[4]._padding_ + 4) = 0;
    pTVar6[5]._padding_ = 0;
    if (this_00 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    if (this_00 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  ::FString::FString(&local_a8,L"SceneNodeUniqueID");
  FJsonObject::SetStringField((FJsonObject *)this_00,&local_a8,&this->SceneNodeUniqueID);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (this_00 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  ::FString::FString(&local_98,L"PayloadKey.UniqueID");
  FJsonObject::SetStringField((FJsonObject *)this_00,&local_98,&(this->PayloadKey).UniqueId);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (this_00 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  EVar3 = (this->PayloadKey).Type;
  ::FString::FString(&local_88,L"PayloadKey.Type");
  FJsonObject::SetNumberField((FJsonObject *)this_00,&local_88,(double)EVar3);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (this_00 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  dVar2 = (this->TimeDescription).BakeFrequency;
  ::FString::FString(&local_78,L"TimeDescription.BakeFrequency");
  FJsonObject::SetNumberField((FJsonObject *)this_00,&local_78,dVar2);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (this_00 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  dVar2 = (this->TimeDescription).RangeStartSecond;
  ::FString::FString(&local_68,L"TimeDescription.RangeStartSecond");
  FJsonObject::SetNumberField((FJsonObject *)this_00,&local_68,dVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (this_00 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  dVar2 = (this->TimeDescription).RangeStopSecond;
  ::FString::FString(&local_58,L"TimeDescription.RangeStopSecond");
  FJsonObject::SetNumberField((FJsonObject *)this_00,&local_58,dVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_b8,&local_d8,0);
  if (this_00 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (TReferenceControllerBase<1> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  paVar1 = &pTVar6->SharedReferenceCount;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pTVar8 = ::operator_new(0x38);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_c8.Object = ___xmm_00000000000000000000000000000010;
    local_c8.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
    ;
    pTVar8[1]._padding_ = 0;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9 = ::operator_new(0x30);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      pTVar8[2]._padding_ = 0x10;
      pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      local_48[0].Object = (FJsonObject *)this_00;
      local_48[0].SharedReferenceCount.ReferenceController = pTVar6;
      FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar9 + 1),local_48);
      if (pTVar9 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar4)();
          return pFVar7;
        }
      }
      pTVar8[2]._padding_ = (longlong)(pTVar9 + 1);
      *(TReferenceControllerBase<1> **)&pTVar8[2].SharedReferenceCount = pTVar9;
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    local_c8.Object = (FElement *)(pTVar8 + 1);
    *(undefined2 *)&pTVar8[3]._padding_ = 0;
    local_c8.SharedReferenceCount.ReferenceController = pTVar8;
    if (local_c8.Object == (FElement *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_c8,local_b8.Object,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  if (bVar5) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_d8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// ToJson @ 14e670f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
UE::Interchange::FAnimationPayloadQuery::ToJson
          (FString *__return_storage_ptr__,
          TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  FElement *pFVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FAnimationPayloadQuery *pFVar9;
  FAnimationPayloadQuery *this;
  undefined1 local_res10 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  TSharedPtr<FJsonValue,1> local_88;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_78;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_68;
  FString local_58 [2];
  
  pTVar8 = _UNK_150651568;
  pFVar3 = ___xmm_00000000000000000000000000000010;
  iVar1 = param_1->ArrayNum;
  this = (FAnimationPayloadQuery *)(param_1->AllocatorInstance).Data;
  pFVar9 = this + iVar1;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FAnimationPayloadQuery_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (this == pFVar9) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_68,&local_98,0);
      pTVar7 = ::operator_new(0x38);
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
        local_78.Object = pFVar3;
        local_78.SharedReferenceCount.ReferenceController = pTVar8;
      }
      else {
        pTVar7->SharedReferenceCount = (atomic<int>)0x1;
        pTVar7->WeakReferenceCount = (atomic<int>)0x1;
        pTVar7->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
        ;
        pTVar7[1]._padding_ = 0;
        pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar8 = ::operator_new(0x30);
        if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          pTVar7[2]._padding_ = 0x10;
          pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          pTVar8->SharedReferenceCount = (atomic<int>)0x1;
          pTVar8->WeakReferenceCount = (atomic<int>)0x1;
          pTVar8->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_
          ;
          FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar8 + 1),&local_a8);
          if ((pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar2)();
            return pFVar6;
          }
          pTVar7[2]._padding_ = (longlong)(pTVar8 + 1);
          *(TReferenceControllerBase<1> **)&pTVar7[2].SharedReferenceCount = pTVar8;
          LOCK();
          pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        local_78.Object = (FElement *)(pTVar7 + 1);
        *(undefined2 *)&pTVar7[3]._padding_ = 0;
        local_78.SharedReferenceCount.ReferenceController = pTVar7;
        if ((local_78.Object == (FElement *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
      }
      bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_78,local_68.Object,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (bVar4) {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_98.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_98.Data.ArrayMax;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      else {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_a8.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pFVar6 = ToJson(this,local_58);
    pTVar7 = ::operator_new(0x30);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      local_88.Object = (FJsonValue *)pFVar3;
      local_88.SharedReferenceCount.ReferenceController = pTVar8;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TJsonValueString__W___00_SharedPointerInternals__6B_
      ;
      FJsonValue::FJsonValue((FJsonValue *)(pTVar7 + 1));
      pTVar7[1]._padding_ = (longlong)&___7__TJsonValueString__W__6B_;
      pTVar7[2]._padding_ = 0;
      pTVar7[2]._padding_ = (longlong)(pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar7[2].SharedReferenceCount = (atomic<int>)(pFVar6->Data).ArrayNum;
      pTVar7[2].WeakReferenceCount = (atomic<int>)(pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
      pTVar7[1].SharedReferenceCount = (atomic<int>)0x2;
      if (((FElement *)(pTVar7 + 1) == (FElement *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      local_88.Object = (FJsonValue *)(pTVar7 + 1);
      local_88.SharedReferenceCount.ReferenceController = pTVar7;
    }
    if (((local_a8.AllocatorInstance.Data <= &local_88) &&
        (&local_88 <
         (TSharedPtr<FJsonValue,1> *)
         (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x10))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = local_a8.ArrayNum;
    if (local_a8.ArrayNum == local_a8.ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
    }
    local_a8.ArrayNum = iVar5 + 1;
    *(FJsonValue **)&local_a8.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
         local_88.Object;
    *(TReferenceControllerBase<1> **)(local_a8.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8)
         = local_88.SharedReferenceCount.ReferenceController;
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_88.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    this = this + 1;
  }
  pcVar2 = (code *)swi(3);
  pFVar6 = (FString *)(*pcVar2)();
  return pFVar6;
}

