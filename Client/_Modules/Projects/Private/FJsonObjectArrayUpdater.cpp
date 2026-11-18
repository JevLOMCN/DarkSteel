// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 4

// Execute @ 141e1aa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FJsonObjectArrayUpdater<FLocalizationTargetDescriptor,FString>::Execute
          (FJsonObject *param_1,FString *param_2,
          TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *param_3,
          TDelegate<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
                   *param_5,
          TDelegate<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
          *param_6,TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                   *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *pTVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  FJsonValueObject *pFVar14;
  FJsonValueObject *pFVar15;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  longlong lVar16;
  FJsonValueObject *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_348 [32];
  TSharedPtr<FJsonValue,1> *local_328;
  TSharedPtr<FJsonValue,1> *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_2f8;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6 [6];
  TSharedPtr<FJsonValue,1> local_2e0;
  FString local_2d0;
  uint local_2c0;
  TSharedPtr<FJsonValue,1> local_2b8;
  TSharedPtr<FJsonValue,1> local_2a8;
  longlong *local_298;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_290;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_288;
  TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *local_280;
  TSharedPtr<FJsonObject,1> local_278;
  TSharedPtr<FJsonObject,1> local_268;
  longlong *local_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  int iStack_23c;
  uint local_238;
  undefined4 uStack_234;
  TRawPtrProxy<FJsonObject> local_228;
  TRawPtrProxy<FJsonValueObject> local_220;
  TRawPtrProxy<FJsonObject> local_218;
  TRawPtrProxy<FJsonValueObject> local_210;
  FJsonObject *local_208;
  FString *local_200;
  TPairInitializer<FString_&&,FLocalizationTargetDescriptor_const_*_&&> local_1f8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  void *local_1b8 [2];
  FScriptContainerElement *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  uint uStack_190;
  undefined4 uStack_18c;
  void **local_188;
  FLocalizationTargetDescriptor ***local_180;
  TStringView<wchar_t> local_178;
  TSharedPtr<FJsonObject,1> local_168;
  TStringView<wchar_t> local_158;
  TSharedPtr<FJsonObject,1> local_148;
  FReadAccessScope local_138;
  FReadAccessScope local_120;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FReadAccessScope local_d8 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_280 = param_5;
  pFVar15 = (FJsonValueObject *)0x0;
  iVar11 = (param_2->Data).ArrayNum;
  pFVar21 = (param_2->Data).AllocatorInstance.Data;
  local_290 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_7;
  uVar19 = 0;
  local_288 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_4;
  local_208 = param_1;
  local_200 = param_2;
  if (param_3->ArrayNum < 1) {
    uStack_1a0 = iVar11 - 1U;
    if (iVar11 == 0) {
      uStack_1a0 = uVar19;
    }
    local_158._12_4_ = uStack_19c;
    local_158.Size = uStack_1a0;
    local_1a8 = pFVar21;
    local_158.DataPtr = (wchar_t *)pFVar21;
    FJsonObject::RemoveField(param_1,&local_158);
    this = local_290;
  }
  else {
    uStack_190 = iVar11 - 1U;
    if (iVar11 == 0) {
      uStack_190 = 0;
    }
    local_178._12_4_ = uStack_18c;
    local_178.Size = uStack_190;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
    local_198 = pFVar21;
    local_178.DataPtr = (wchar_t *)pFVar21;
    bVar8 = FJsonObject::TryGetArrayField(param_1,&local_178,&local_1e8);
    iVar11 = param_3->ArrayNum;
    pFVar18 = (param_3->AllocatorInstance).Data;
    pFVar21 = pFVar18 + (longlong)iVar11 * 0x18;
    if (bVar8) {
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      while( true ) {
        if (param_3->ArrayNum != iVar11) {
          local_2e8 = 0;
          `TCheckedPointerIterator<FLocalizationTargetDescriptor_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2e8);
        }
        if (pFVar18 == pFVar21) break;
        local_1f8.Value = (FLocalizationTargetDescriptor **)pFVar18;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_138);
        pFVar17 = pFVar15;
        if (*(int *)&param_4->field_0x10 != 0) {
          pFVar17 = *(FJsonValueObject **)&param_4->field_0x8;
        }
        (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,local_1b8,pFVar18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_138);
        local_188 = local_1b8;
        local_180 = &local_1f8.Value;
        TSet<TTuple<FString,FLocalizationTargetDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FLocalizationTargetDescriptor_const_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FLocalizationTargetDescriptor_const_*_&&>_>
                  ((TSet<TTuple<FString,FLocalizationTargetDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FLocalizationTargetDescriptor_const_*,0>,FDefaultSetAllocator>
                    *)local_98,&local_1f8,(bool *)&local_188);
        if (local_1b8[0] != (void *)0x0) {
          FMemory::Free(local_1b8[0]);
        }
        pFVar18 = pFVar18 + 0x18;
      }
      local_2c0 = local_1e8->ArrayNum;
      uVar13 = (ulonglong)(int)local_2c0;
      pFVar21 = (local_1e8->AllocatorInstance).Data;
      pFVar18 = pFVar21 + uVar13 * 0x10;
      while( true ) {
        if (local_1e8->ArrayNum != (int)uVar13) {
          local_2e7 = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2e7);
        }
        if (pFVar21 == pFVar18) break;
        local_2e0.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar21 + 8);
        local_2e0.Object = *(FJsonValue **)pFVar21;
        if (local_2e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_2e0.Object == (FJsonValue *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar9 = (**(code **)((local_2e0.Object)->_padding_ + 0x88))(local_2e0.Object,&local_298);
        plVar3 = local_298;
        if (cVar9 != '\0') {
          local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.Data.ArrayNum = 0;
          local_2d0.Data.ArrayMax = 0;
          if ((*local_298 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar6 = local_280;
          lVar16 = *plVar3;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,&local_120)
          ;
          pFVar17 = pFVar15;
          if (*(int *)&pTVar6->field_0x10 != 0) {
            pFVar17 = *(FJsonValueObject **)&pTVar6->field_0x8;
          }
          cVar9 = (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,lVar16,&local_2d0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_120);
          if (cVar9 != '\0') {
            uVar10 = local_2d0.Data.ArrayNum - 1;
            FVar5.Data = local_2d0.Data.AllocatorInstance.Data;
            if (local_2d0.Data.ArrayNum == 0) {
              uVar10 = uVar19;
              FVar5.Data = (FScriptContainerElement *)L"";
            }
            uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar10,(wchar_t *)FVar5.Data);
            iVar11 = TSet<TTuple<FString,FLocalizationTargetDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FLocalizationTargetDescriptor_const_*,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>
                               ((TSet<TTuple<FString,FLocalizationTargetDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FLocalizationTargetDescriptor_const_*,0>,FDefaultSetAllocator>
                                 *)local_98,uVar10,&local_2d0);
            plVar3 = local_298;
            if (iVar11 != -1) {
              lVar16 = (longlong)iVar11 * 0x20 + local_98._0_8_;
              pFVar17 = (FJsonValueObject *)(lVar16 + 0x10);
              if (lVar16 == 0) {
                pFVar17 = pFVar15;
              }
              if (pFVar17 != (FJsonValueObject *)0x0) {
                if ((*local_298 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x44d,L""), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar16 = *plVar3;
                lVar1 = pFVar17->_padding_;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,
                           &local_108);
                pFVar17 = pFVar15;
                if (*(int *)&param_6->field_0x10 != 0) {
                  pFVar17 = *(FJsonValueObject **)&param_6->field_0x8;
                }
                (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,lVar1,lVar16);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_108);
                if (local_2f8.AllocatorInstance.Data <= &local_2e0) {
                  if (&local_2e0 <
                      (TSharedPtr<FJsonValue,1> *)
                      (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
                    local_310 = (longlong)local_2f8.ArrayNum;
                    local_308 = 0x10;
                    local_328 = &local_2e0;
                    local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
                    local_318 = (longlong)local_2f8.ArrayMax;
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar8) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                }
                iVar11 = local_2f8.ArrayNum;
                if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
                }
                local_2f8.ArrayNum = iVar11 + 1;
                *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar11 * 0x10].field_0x0
                     = local_2e0.Object;
                *(TReferenceControllerBase<1> **)
                 (local_2f8.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
                     local_2e0.SharedReferenceCount.ReferenceController;
                if (local_2e0.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_2e0.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                if (local_98._8_4_ != local_64) {
                  uVar10 = local_2d0.Data.ArrayNum - 1;
                  FVar5.Data = local_2d0.Data.AllocatorInstance.Data;
                  if (local_2d0.Data.ArrayNum == 0) {
                    uVar10 = uVar19;
                    FVar5.Data = (FScriptContainerElement *)L"";
                  }
                  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar10,(wchar_t *)FVar5.Data);
                  TSet<TTuple<FString,FLocalizationTargetDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FLocalizationTargetDescriptor_const_*,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FString>
                            ((TSet<TTuple<FString,FLocalizationTargetDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FLocalizationTargetDescriptor_const_*,0>,FDefaultSetAllocator>
                              *)local_98,uVar10,&local_2d0);
                }
              }
            }
          }
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e0.SharedReferenceCount.ReferenceController);
        uVar13 = (ulonglong)local_2c0;
        pFVar21 = pFVar21 + 0x10;
      }
      uStack_24c = 1;
      pFVar17 = pFVar15;
      local_238 = uVar19;
      if (local_70 != 0) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar10 = *puVar20;
        uVar19 = 0;
        pFVar14 = pFVar15;
        while (uVar10 == 0) {
          iVar11 = (int)pFVar17;
          local_238 = (int)pFVar14 + 0x20;
          pFVar14 = (FJsonValueObject *)(ulonglong)local_238;
          uVar19 = iVar11 + 1;
          pFVar17 = (FJsonValueObject *)(ulonglong)uVar19;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19) {
            pFVar17 = (FJsonValueObject *)(ulonglong)local_70;
            goto LAB_141e1afc0;
          }
          uVar10 = puVar20[(longlong)iVar11 + 1];
        }
        uStack_24c = -uVar10 & uVar10;
        uVar13 = (ulonglong)uStack_24c * 2 + 1;
        lVar16 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1f8.Key._4_4_ = (int)lVar16;
        uVar10 = local_1f8.Key._4_4_ + -1 + local_238;
        pFVar17 = (FJsonValueObject *)(ulonglong)uVar10;
        if ((int)local_70 < (int)uVar10) {
          pFVar17 = (FJsonValueObject *)(ulonglong)local_70;
        }
      }
LAB_141e1afc0:
      local_258 = (longlong *)local_98;
      local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uStack_240 = 0xffffffff;
      iStack_23c = (int)pFVar17;
      uStack_234 = local_a4;
      TStack_1d8._padding_ = CONCAT44(uStack_24c,uVar19);
      TStack_1d8.CurrentBitIndex = iStack_23c;
      TStack_1d8.UnvisitedBitMask = 0xffffffff;
      TStack_1d8._28_4_ = local_a4;
      TStack_1d8.BaseBitIndex = local_238;
      uStack_250 = uVar19;
      local_1e0 = local_258;
      TStack_1d8.Array = local_248;
      if (iStack_23c < (int)local_70) {
        do {
          pFVar14 = ::operator_new(0x50);
          local_228.Object = (FJsonObject *)pFVar15;
          if (pFVar14 != (FJsonValueObject *)0x0) {
            pFVar14->_padding_ = 0;
            pFVar14->_padding_ = 0;
            pFVar14[1]._padding_ = 0;
            *(undefined4 *)&pFVar14[1]._padding_ = 0;
            *(undefined4 *)((longlong)&pFVar14[1]._padding_ + 4) = 0x80;
            *(undefined4 *)&pFVar14[1].Value.Object = 0xffffffff;
            *(undefined4 *)((longlong)&pFVar14[1].Value.Object + 4) = 0;
            pFVar14[2]._padding_ = 0;
            *(undefined4 *)&pFVar14[2]._padding_ = 0;
            local_228.Object = (FJsonObject *)pFVar14;
          }
          TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_278,&local_228);
          uVar2 = *(undefined8 *)((longlong)(int)pFVar17 * 0x20 + 0x10 + *local_1e0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,
                     (FReadAccessScope *)&local_258);
          pFVar17 = pFVar15;
          if (*(int *)&param_6->field_0x10 != 0) {
            pFVar17 = *(FJsonValueObject **)&param_6->field_0x8;
          }
          (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,uVar2,local_278.Object);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_258);
          pFVar14 = ::operator_new(0x20);
          FVar7.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
          pFVar17 = pFVar15;
          if (pFVar14 != (FJsonValueObject *)0x0) {
            local_168.Object = local_278.Object;
            local_168.SharedReferenceCount.ReferenceController =
                 local_278.SharedReferenceCount.ReferenceController;
            if (local_278.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pFVar17 = FJsonValueObject::FJsonValueObject(pFVar14,&local_168);
          }
          local_220.Object = pFVar17;
          TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>
                    (&local_2b8,&local_220);
          if (local_2f8.AllocatorInstance.Data <= &local_2b8) {
            if (&local_2b8 <
                (TSharedPtr<FJsonValue,1> *)
                (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
              local_310 = (longlong)local_2f8.ArrayNum;
              local_308 = 0x10;
              local_328 = &local_2b8;
              local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
              local_318 = (longlong)local_2f8.ArrayMax;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          iVar11 = local_2f8.ArrayNum;
          if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
          }
          local_2f8.ArrayNum = iVar11 + 1;
          *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar11 * 0x10].field_0x0 =
               local_2b8.Object;
          *(TReferenceControllerBase<1> **)
           (local_2f8.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
               local_2b8.SharedReferenceCount.ReferenceController;
          local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_2b8.Object = (FJsonValue *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar7.ReferenceController);
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
          pFVar17 = (FJsonValueObject *)(ulonglong)(uint)TStack_1d8.CurrentBitIndex;
        } while (TStack_1d8.CurrentBitIndex < (TStack_1d8.Array)->NumBits);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FLocalizationTargetDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FLocalizationTargetDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FLocalizationTargetDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
    }
    else {
      while( true ) {
        if (param_3->ArrayNum != iVar11) {
          local_2e6[0] = 0;
          `TCheckedPointerIterator<FLocalizationTargetDescriptor_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_2e6);
        }
        if (pFVar18 == pFVar21) break;
        pFVar17 = ::operator_new(0x50);
        local_218.Object = (FJsonObject *)pFVar15;
        if (pFVar17 != (FJsonValueObject *)0x0) {
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17[1]._padding_ = 0;
          *(undefined4 *)&pFVar17[1]._padding_ = 0;
          *(undefined4 *)((longlong)&pFVar17[1]._padding_ + 4) = 0x80;
          *(undefined4 *)&pFVar17[1].Value.Object = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar17[1].Value.Object + 4) = 0;
          pFVar17[2]._padding_ = 0;
          *(undefined4 *)&pFVar17[2]._padding_ = 0;
          local_218.Object = (FJsonObject *)pFVar17;
        }
        TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_268,&local_218);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,&local_f0);
        pFVar17 = pFVar15;
        if (*(int *)&param_6->field_0x10 != 0) {
          pFVar17 = *(FJsonValueObject **)&param_6->field_0x8;
        }
        (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,pFVar18,local_268.Object);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_f0);
        pFVar14 = ::operator_new(0x20);
        FVar7.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
        pFVar17 = pFVar15;
        if (pFVar14 != (FJsonValueObject *)0x0) {
          local_148.Object = local_268.Object;
          local_148.SharedReferenceCount.ReferenceController =
               local_268.SharedReferenceCount.ReferenceController;
          if (local_268.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pFVar17 = FJsonValueObject::FJsonValueObject(pFVar14,&local_148);
        }
        local_210.Object = pFVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_2a8,&local_210);
        if (local_2f8.AllocatorInstance.Data <= &local_2a8) {
          if (&local_2a8 <
              (TSharedPtr<FJsonValue,1> *)
              (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
            local_310 = (longlong)local_2f8.ArrayNum;
            local_308 = 0x10;
            local_328 = &local_2a8;
            local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
            local_318 = (longlong)local_2f8.ArrayMax;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        iVar12 = local_2f8.ArrayNum;
        if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
        }
        local_2f8.ArrayNum = iVar12 + 1;
        *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 =
             local_2a8.Object;
        *(TReferenceControllerBase<1> **)
         (local_2f8.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
             local_2a8.SharedReferenceCount.ReferenceController;
        local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_2a8.Object = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        pFVar18 = pFVar18 + 0x18;
      }
    }
    this = local_290;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,local_d8);
    if ((*(int *)&this->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&this->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_2f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_d8);
    FJsonObject::SetArrayField(local_208,local_200,&local_2f8);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data,local_2f8.ArrayNum);
    param_4 = (TDelegate<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
               *)local_288;
    if ((TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
      param_4 = (TDelegate<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
                 *)local_288;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// Execute @ 141e1b4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FJsonObjectArrayUpdater<FModuleDescriptor,FString>::Execute
          (FJsonObject *param_1,FString *param_2,
          TArray<FModuleDescriptor,TSizedDefaultAllocator<32>_> *param_3,
          TDelegate<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy> *param_4,
          TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *param_5
          ,TDelegate<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
           *param_6,
          TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *pTVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FJsonValueObject *pFVar14;
  FJsonValueObject *pFVar15;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  longlong lVar16;
  FJsonValueObject *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_348 [32];
  TSharedPtr<FJsonValue,1> *local_328;
  TSharedPtr<FJsonValue,1> *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_2f8;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6 [6];
  TSharedPtr<FJsonValue,1> local_2e0;
  FString local_2d0;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_2c0;
  TSharedPtr<FJsonValue,1> local_2b8;
  TSharedPtr<FJsonValue,1> local_2a8;
  longlong *local_298;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_290;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_288;
  TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *local_280;
  TSharedPtr<FJsonObject,1> local_278;
  TSharedPtr<FJsonObject,1> local_268;
  longlong *local_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  int iStack_23c;
  uint local_238;
  undefined4 uStack_234;
  TRawPtrProxy<FJsonObject> local_228;
  TRawPtrProxy<FJsonValueObject> local_220;
  TRawPtrProxy<FJsonObject> local_218;
  TRawPtrProxy<FJsonValueObject> local_210;
  FJsonObject *local_208;
  FString *local_200;
  TPairInitializer<FString_&&,FModuleDescriptor_const_*_&&> local_1f8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  void *local_1b8 [2];
  FScriptContainerElement *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  uint uStack_190;
  undefined4 uStack_18c;
  void **local_188;
  FModuleDescriptor ***local_180;
  TStringView<wchar_t> local_178;
  TSharedPtr<FJsonObject,1> local_168;
  TStringView<wchar_t> local_158;
  TSharedPtr<FJsonObject,1> local_148;
  FReadAccessScope local_138;
  FReadAccessScope local_120;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FReadAccessScope local_d8 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_280 = param_5;
  pFVar15 = (FJsonValueObject *)0x0;
  iVar13 = (param_2->Data).ArrayNum;
  pFVar18 = (param_2->Data).AllocatorInstance.Data;
  local_290 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_7;
  local_2c0 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_6;
  uVar19 = 0;
  local_288 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_4;
  local_208 = param_1;
  local_200 = param_2;
  if (param_3->ArrayNum < 1) {
    uStack_1a0 = iVar13 - 1U;
    if (iVar13 == 0) {
      uStack_1a0 = uVar19;
    }
    local_158._12_4_ = uStack_19c;
    local_158.Size = uStack_1a0;
    local_1a8 = pFVar18;
    local_158.DataPtr = (wchar_t *)pFVar18;
    FJsonObject::RemoveField(param_1,&local_158);
    this = local_290;
  }
  else {
    uStack_190 = iVar13 - 1U;
    if (iVar13 == 0) {
      uStack_190 = 0;
    }
    local_178._12_4_ = uStack_18c;
    local_178.Size = uStack_190;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
    local_198 = pFVar18;
    local_178.DataPtr = (wchar_t *)pFVar18;
    bVar9 = FJsonObject::TryGetArrayField(param_1,&local_178,&local_1e8);
    iVar13 = param_3->ArrayNum;
    pFVar18 = (param_3->AllocatorInstance).Data;
    pFVar21 = pFVar18 + (longlong)iVar13 * 0x168;
    if (bVar9) {
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      while( true ) {
        if (param_3->ArrayNum != iVar13) {
          local_2e8 = 0;
          `TCheckedPointerIterator<FModuleDescriptor_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_2e8);
        }
        if (pFVar18 == pFVar21) break;
        local_1f8.Value = (FModuleDescriptor **)pFVar18;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_138);
        pFVar17 = pFVar15;
        if (*(int *)&param_4->field_0x10 != 0) {
          pFVar17 = *(FJsonValueObject **)&param_4->field_0x8;
        }
        (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,local_1b8,pFVar18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_138);
        local_188 = local_1b8;
        local_180 = &local_1f8.Value;
        TSet<TTuple<FString,FModuleDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FModuleDescriptor_const_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FModuleDescriptor_const_*_&&>_>
                  ((TSet<TTuple<FString,FModuleDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FModuleDescriptor_const_*,0>,FDefaultSetAllocator>
                    *)local_98,&local_1f8,(bool *)&local_188);
        if (local_1b8[0] != (void *)0x0) {
          FMemory::Free(local_1b8[0]);
        }
        pFVar18 = pFVar18 + 0x168;
      }
      iVar13 = local_1e8->ArrayNum;
      pFVar18 = (local_1e8->AllocatorInstance).Data;
      pFVar21 = pFVar18 + (longlong)iVar13 * 0x10;
      while( true ) {
        if (local_1e8->ArrayNum != iVar13) {
          local_2e7 = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2e7);
        }
        param_6 = (TDelegate<void___cdecl(FModuleDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                   *)local_2c0;
        if (pFVar18 == pFVar21) break;
        local_2e0.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar18 + 8);
        local_2e0.Object = *(FJsonValue **)pFVar18;
        if (local_2e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_2e0.Object == (FJsonValue *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        cVar10 = (**(code **)((local_2e0.Object)->_padding_ + 0x88))(local_2e0.Object,&local_298);
        plVar4 = local_298;
        if (cVar10 != '\0') {
          local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.Data.ArrayNum = 0;
          local_2d0.Data.ArrayMax = 0;
          if ((*local_298 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar7 = local_280;
          lVar16 = *plVar4;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,&local_120)
          ;
          pFVar17 = pFVar15;
          if (*(int *)&pTVar7->field_0x10 != 0) {
            pFVar17 = *(FJsonValueObject **)&pTVar7->field_0x8;
          }
          cVar10 = (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,lVar16,&local_2d0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_120);
          if (cVar10 != '\0') {
            uVar11 = local_2d0.Data.ArrayNum - 1;
            FVar6.Data = local_2d0.Data.AllocatorInstance.Data;
            if (local_2d0.Data.ArrayNum == 0) {
              uVar11 = uVar19;
              FVar6.Data = (FScriptContainerElement *)L"";
            }
            uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,(wchar_t *)FVar6.Data);
            iVar12 = TSet<TTuple<FString,FModuleDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FModuleDescriptor_const_*,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>
                               ((TSet<TTuple<FString,FModuleDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FModuleDescriptor_const_*,0>,FDefaultSetAllocator>
                                 *)local_98,uVar11,&local_2d0);
            plVar4 = local_298;
            if (iVar12 != -1) {
              lVar16 = (longlong)iVar12 * 0x20 + local_98._0_8_;
              pFVar17 = (FJsonValueObject *)(lVar16 + 0x10);
              if (lVar16 == 0) {
                pFVar17 = pFVar15;
              }
              if (pFVar17 != (FJsonValueObject *)0x0) {
                if ((*local_298 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x44d,L""), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar16 = *plVar4;
                lVar2 = pFVar17->_padding_;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
                           &local_108);
                pFVar17 = pFVar15;
                if (*(int *)&local_2c0->field_0x10 != 0) {
                  pFVar17 = *(FJsonValueObject **)&local_2c0->field_0x8;
                }
                (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,lVar2,lVar16);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_108);
                if (local_2f8.AllocatorInstance.Data <= &local_2e0) {
                  if (&local_2e0 <
                      (TSharedPtr<FJsonValue,1> *)
                      (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
                    local_310 = (longlong)local_2f8.ArrayNum;
                    local_308 = 0x10;
                    local_328 = &local_2e0;
                    local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
                    local_318 = (longlong)local_2f8.ArrayMax;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar9) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                }
                iVar12 = local_2f8.ArrayNum;
                if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
                }
                local_2f8.ArrayNum = iVar12 + 1;
                *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0
                     = local_2e0.Object;
                *(TReferenceControllerBase<1> **)
                 (local_2f8.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
                     local_2e0.SharedReferenceCount.ReferenceController;
                if (local_2e0.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_2e0.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                if (local_98._8_4_ != local_64) {
                  uVar11 = local_2d0.Data.ArrayNum - 1;
                  FVar6.Data = local_2d0.Data.AllocatorInstance.Data;
                  if (local_2d0.Data.ArrayNum == 0) {
                    uVar11 = uVar19;
                    FVar6.Data = (FScriptContainerElement *)L"";
                  }
                  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,(wchar_t *)FVar6.Data);
                  TSet<TTuple<FString,FModuleDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FModuleDescriptor_const_*,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FString>
                            ((TSet<TTuple<FString,FModuleDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FModuleDescriptor_const_*,0>,FDefaultSetAllocator>
                              *)local_98,uVar11,&local_2d0);
                }
              }
            }
          }
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e0.SharedReferenceCount.ReferenceController);
        pFVar18 = pFVar18 + 0x10;
      }
      uStack_24c = 1;
      pFVar17 = pFVar15;
      local_238 = uVar19;
      if (local_70 != 0) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar11 = *puVar20;
        pFVar14 = pFVar15;
        while (uVar11 == 0) {
          iVar13 = (int)pFVar17;
          local_238 = (int)pFVar14 + 0x20;
          pFVar14 = (FJsonValueObject *)(ulonglong)local_238;
          uVar19 = iVar13 + 1;
          pFVar17 = (FJsonValueObject *)(ulonglong)uVar19;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19) {
            pFVar17 = (FJsonValueObject *)(ulonglong)local_70;
            goto LAB_141e1ba50;
          }
          uVar11 = puVar20[(longlong)iVar13 + 1];
        }
        uStack_24c = -uVar11 & uVar11;
        uVar1 = (ulonglong)uStack_24c * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1f8.Key._4_4_ = (int)lVar16;
        uVar11 = local_1f8.Key._4_4_ + -1 + local_238;
        pFVar17 = (FJsonValueObject *)(ulonglong)uVar11;
        if ((int)local_70 < (int)uVar11) {
          pFVar17 = (FJsonValueObject *)(ulonglong)local_70;
        }
      }
LAB_141e1ba50:
      local_258 = (longlong *)local_98;
      local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uStack_240 = 0xffffffff;
      iStack_23c = (int)pFVar17;
      uStack_234 = local_a4;
      TStack_1d8._padding_ = CONCAT44(uStack_24c,uVar19);
      TStack_1d8.CurrentBitIndex = iStack_23c;
      TStack_1d8.UnvisitedBitMask = 0xffffffff;
      TStack_1d8._28_4_ = local_a4;
      TStack_1d8.BaseBitIndex = local_238;
      uStack_250 = uVar19;
      local_1e0 = local_258;
      TStack_1d8.Array = local_248;
      if (iStack_23c < (int)local_70) {
        do {
          pFVar14 = ::operator_new(0x50);
          local_228.Object = (FJsonObject *)pFVar15;
          if (pFVar14 != (FJsonValueObject *)0x0) {
            pFVar14->_padding_ = 0;
            pFVar14->_padding_ = 0;
            pFVar14[1]._padding_ = 0;
            *(undefined4 *)&pFVar14[1]._padding_ = 0;
            *(undefined4 *)((longlong)&pFVar14[1]._padding_ + 4) = 0x80;
            *(undefined4 *)&pFVar14[1].Value.Object = 0xffffffff;
            *(undefined4 *)((longlong)&pFVar14[1].Value.Object + 4) = 0;
            pFVar14[2]._padding_ = 0;
            *(undefined4 *)&pFVar14[2]._padding_ = 0;
            local_228.Object = (FJsonObject *)pFVar14;
          }
          TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_278,&local_228);
          uVar3 = *(undefined8 *)((longlong)(int)pFVar17 * 0x20 + 0x10 + *local_1e0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,
                     (FReadAccessScope *)&local_258);
          pFVar17 = pFVar15;
          if (*(int *)&((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6)->field_0x10 != 0) {
            pFVar17 = *(FJsonValueObject **)
                       &((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6)->field_0x8;
          }
          (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,uVar3,local_278.Object);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_258);
          pFVar14 = ::operator_new(0x20);
          FVar8.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
          pFVar17 = pFVar15;
          if (pFVar14 != (FJsonValueObject *)0x0) {
            local_168.Object = local_278.Object;
            local_168.SharedReferenceCount.ReferenceController =
                 local_278.SharedReferenceCount.ReferenceController;
            if (local_278.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pFVar17 = FJsonValueObject::FJsonValueObject(pFVar14,&local_168);
          }
          local_220.Object = pFVar17;
          TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>
                    (&local_2b8,&local_220);
          if (local_2f8.AllocatorInstance.Data <= &local_2b8) {
            if (&local_2b8 <
                (TSharedPtr<FJsonValue,1> *)
                (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
              local_310 = (longlong)local_2f8.ArrayNum;
              local_308 = 0x10;
              local_328 = &local_2b8;
              local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
              local_318 = (longlong)local_2f8.ArrayMax;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
          }
          iVar13 = local_2f8.ArrayNum;
          if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
          }
          local_2f8.ArrayNum = iVar13 + 1;
          *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar13 * 0x10].field_0x0 =
               local_2b8.Object;
          *(TReferenceControllerBase<1> **)
           (local_2f8.AllocatorInstance.Data + (longlong)iVar13 * 0x10 + 8) =
               local_2b8.SharedReferenceCount.ReferenceController;
          local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_2b8.Object = (FJsonValue *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
          pFVar17 = (FJsonValueObject *)(ulonglong)(uint)TStack_1d8.CurrentBitIndex;
        } while (TStack_1d8.CurrentBitIndex < (TStack_1d8.Array)->NumBits);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FModuleDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FModuleDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FModuleDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
    }
    else {
      while( true ) {
        if (param_3->ArrayNum != iVar13) {
          local_2e6[0] = 0;
          `TCheckedPointerIterator<FModuleDescriptor_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2e6);
        }
        if (pFVar18 == pFVar21) break;
        pFVar17 = ::operator_new(0x50);
        local_218.Object = (FJsonObject *)pFVar15;
        if (pFVar17 != (FJsonValueObject *)0x0) {
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17[1]._padding_ = 0;
          *(undefined4 *)&pFVar17[1]._padding_ = 0;
          *(undefined4 *)((longlong)&pFVar17[1]._padding_ + 4) = 0x80;
          *(undefined4 *)&pFVar17[1].Value.Object = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar17[1].Value.Object + 4) = 0;
          pFVar17[2]._padding_ = 0;
          *(undefined4 *)&pFVar17[2]._padding_ = 0;
          local_218.Object = (FJsonObject *)pFVar17;
        }
        TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_268,&local_218);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,&local_f0);
        pFVar17 = pFVar15;
        if (*(int *)&param_6->field_0x10 != 0) {
          pFVar17 = *(FJsonValueObject **)&param_6->field_0x8;
        }
        (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,pFVar18,local_268.Object);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_f0);
        pFVar14 = ::operator_new(0x20);
        FVar8.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
        pFVar17 = pFVar15;
        if (pFVar14 != (FJsonValueObject *)0x0) {
          local_148.Object = local_268.Object;
          local_148.SharedReferenceCount.ReferenceController =
               local_268.SharedReferenceCount.ReferenceController;
          if (local_268.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pFVar17 = FJsonValueObject::FJsonValueObject(pFVar14,&local_148);
        }
        local_210.Object = pFVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_2a8,&local_210);
        if (local_2f8.AllocatorInstance.Data <= &local_2a8) {
          if (&local_2a8 <
              (TSharedPtr<FJsonValue,1> *)
              (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
            local_310 = (longlong)local_2f8.ArrayNum;
            local_308 = 0x10;
            local_328 = &local_2a8;
            local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
            local_318 = (longlong)local_2f8.ArrayMax;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar12 = local_2f8.ArrayNum;
        if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
        }
        local_2f8.ArrayNum = iVar12 + 1;
        *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 =
             local_2a8.Object;
        *(TReferenceControllerBase<1> **)
         (local_2f8.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
             local_2a8.SharedReferenceCount.ReferenceController;
        local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_2a8.Object = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
        pFVar18 = pFVar18 + 0x168;
      }
    }
    this = local_290;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,local_d8);
    if ((*(int *)&this->field_0x10 != 0) &&
       (plVar4 = *(longlong **)&this->field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_2f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_d8);
    FJsonObject::SetArrayField(local_208,local_200,&local_2f8);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data,local_2f8.ArrayNum);
    param_4 = (TDelegate<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy> *)
              local_288;
    if ((TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
      param_4 = (TDelegate<FString___cdecl(FModuleDescriptor_const_&),FDefaultDelegateUserPolicy> *)
                local_288;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// Execute @ 141e1bf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FJsonObjectArrayUpdater<FPluginDisallowedDescriptor,FString>::Execute
          (FJsonObject *param_1,FString *param_2,
          TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *param_3,
          TDelegate<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
                   *param_5,
          TDelegate<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
          *param_6,TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                   *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *pTVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  FJsonValueObject *pFVar14;
  FJsonValueObject *pFVar15;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  longlong lVar16;
  FJsonValueObject *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_348 [32];
  TSharedPtr<FJsonValue,1> *local_328;
  TSharedPtr<FJsonValue,1> *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_2f8;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6 [6];
  TSharedPtr<FJsonValue,1> local_2e0;
  FString local_2d0;
  uint local_2c0;
  TSharedPtr<FJsonValue,1> local_2b8;
  TSharedPtr<FJsonValue,1> local_2a8;
  longlong *local_298;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_290;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_288;
  TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *local_280;
  TSharedPtr<FJsonObject,1> local_278;
  TSharedPtr<FJsonObject,1> local_268;
  longlong *local_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  int iStack_23c;
  uint local_238;
  undefined4 uStack_234;
  TRawPtrProxy<FJsonObject> local_228;
  TRawPtrProxy<FJsonValueObject> local_220;
  TRawPtrProxy<FJsonObject> local_218;
  TRawPtrProxy<FJsonValueObject> local_210;
  FJsonObject *local_208;
  FString *local_200;
  TPairInitializer<FString_&&,FPluginDisallowedDescriptor_const_*_&&> local_1f8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  void *local_1b8 [2];
  FScriptContainerElement *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  uint uStack_190;
  undefined4 uStack_18c;
  void **local_188;
  FPluginDisallowedDescriptor ***local_180;
  TStringView<wchar_t> local_178;
  TSharedPtr<FJsonObject,1> local_168;
  TStringView<wchar_t> local_158;
  TSharedPtr<FJsonObject,1> local_148;
  FReadAccessScope local_138;
  FReadAccessScope local_120;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FReadAccessScope local_d8 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_280 = param_5;
  pFVar15 = (FJsonValueObject *)0x0;
  iVar11 = (param_2->Data).ArrayNum;
  pFVar18 = (param_2->Data).AllocatorInstance.Data;
  local_290 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_7;
  uVar19 = 0;
  local_288 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_4;
  local_208 = param_1;
  local_200 = param_2;
  if (param_3->ArrayNum < 1) {
    uStack_1a0 = iVar11 - 1U;
    if (iVar11 == 0) {
      uStack_1a0 = uVar19;
    }
    local_158._12_4_ = uStack_19c;
    local_158.Size = uStack_1a0;
    local_1a8 = pFVar18;
    local_158.DataPtr = (wchar_t *)pFVar18;
    FJsonObject::RemoveField(param_1,&local_158);
    this = local_290;
  }
  else {
    uStack_190 = iVar11 - 1U;
    if (iVar11 == 0) {
      uStack_190 = 0;
    }
    local_178._12_4_ = uStack_18c;
    local_178.Size = uStack_190;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
    local_198 = pFVar18;
    local_178.DataPtr = (wchar_t *)pFVar18;
    bVar8 = FJsonObject::TryGetArrayField(param_1,&local_178,&local_1e8);
    iVar11 = param_3->ArrayNum;
    pFVar18 = (param_3->AllocatorInstance).Data;
    pFVar21 = pFVar18 + (longlong)iVar11 * 0x10;
    if (bVar8) {
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      while( true ) {
        if (param_3->ArrayNum != iVar11) {
          local_2e8 = 0;
          `TCheckedPointerIterator<FPluginDisallowedDescriptor_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2e8);
        }
        if (pFVar18 == pFVar21) break;
        local_1f8.Value = (FPluginDisallowedDescriptor **)pFVar18;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_138);
        pFVar17 = pFVar15;
        if (*(int *)&param_4->field_0x10 != 0) {
          pFVar17 = *(FJsonValueObject **)&param_4->field_0x8;
        }
        (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,local_1b8,pFVar18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_138);
        local_188 = local_1b8;
        local_180 = &local_1f8.Value;
        TSet<TTuple<FString,FPluginDisallowedDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginDisallowedDescriptor_const_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FPluginDisallowedDescriptor_const_*_&&>_>
                  ((TSet<TTuple<FString,FPluginDisallowedDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginDisallowedDescriptor_const_*,0>,FDefaultSetAllocator>
                    *)local_98,&local_1f8,(bool *)&local_188);
        if (local_1b8[0] != (void *)0x0) {
          FMemory::Free(local_1b8[0]);
        }
        pFVar18 = pFVar18 + 0x10;
      }
      local_2c0 = local_1e8->ArrayNum;
      uVar13 = (ulonglong)(int)local_2c0;
      pFVar18 = (local_1e8->AllocatorInstance).Data;
      pFVar21 = pFVar18 + uVar13 * 0x10;
      while( true ) {
        if (local_1e8->ArrayNum != (int)uVar13) {
          local_2e7 = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2e7);
        }
        if (pFVar18 == pFVar21) break;
        local_2e0.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar18 + 8);
        local_2e0.Object = *(FJsonValue **)pFVar18;
        if (local_2e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_2e0.Object == (FJsonValue *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar9 = (**(code **)((local_2e0.Object)->_padding_ + 0x88))(local_2e0.Object,&local_298);
        plVar3 = local_298;
        if (cVar9 != '\0') {
          local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.Data.ArrayNum = 0;
          local_2d0.Data.ArrayMax = 0;
          if ((*local_298 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar6 = local_280;
          lVar16 = *plVar3;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,&local_120)
          ;
          pFVar17 = pFVar15;
          if (*(int *)&pTVar6->field_0x10 != 0) {
            pFVar17 = *(FJsonValueObject **)&pTVar6->field_0x8;
          }
          cVar9 = (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,lVar16,&local_2d0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_120);
          if (cVar9 != '\0') {
            uVar10 = local_2d0.Data.ArrayNum - 1;
            FVar5.Data = local_2d0.Data.AllocatorInstance.Data;
            if (local_2d0.Data.ArrayNum == 0) {
              uVar10 = uVar19;
              FVar5.Data = (FScriptContainerElement *)L"";
            }
            uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar10,(wchar_t *)FVar5.Data);
            iVar11 = TSet<TTuple<FString,FPluginDisallowedDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginDisallowedDescriptor_const_*,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>
                               ((TSet<TTuple<FString,FPluginDisallowedDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginDisallowedDescriptor_const_*,0>,FDefaultSetAllocator>
                                 *)local_98,uVar10,&local_2d0);
            plVar3 = local_298;
            if (iVar11 != -1) {
              lVar16 = (longlong)iVar11 * 0x20 + local_98._0_8_;
              pFVar17 = (FJsonValueObject *)(lVar16 + 0x10);
              if (lVar16 == 0) {
                pFVar17 = pFVar15;
              }
              if (pFVar17 != (FJsonValueObject *)0x0) {
                if ((*local_298 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x44d,L""), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                lVar16 = *plVar3;
                lVar1 = pFVar17->_padding_;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,
                           &local_108);
                pFVar17 = pFVar15;
                if (*(int *)&param_6->field_0x10 != 0) {
                  pFVar17 = *(FJsonValueObject **)&param_6->field_0x8;
                }
                (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,lVar1,lVar16);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_108);
                if (local_2f8.AllocatorInstance.Data <= &local_2e0) {
                  if (&local_2e0 <
                      (TSharedPtr<FJsonValue,1> *)
                      (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
                    local_310 = (longlong)local_2f8.ArrayNum;
                    local_308 = 0x10;
                    local_328 = &local_2e0;
                    local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
                    local_318 = (longlong)local_2f8.ArrayMax;
                    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar8) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                }
                iVar11 = local_2f8.ArrayNum;
                if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
                }
                local_2f8.ArrayNum = iVar11 + 1;
                *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar11 * 0x10].field_0x0
                     = local_2e0.Object;
                *(TReferenceControllerBase<1> **)
                 (local_2f8.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
                     local_2e0.SharedReferenceCount.ReferenceController;
                if (local_2e0.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_2e0.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                if (local_98._8_4_ != local_64) {
                  uVar10 = local_2d0.Data.ArrayNum - 1;
                  FVar5.Data = local_2d0.Data.AllocatorInstance.Data;
                  if (local_2d0.Data.ArrayNum == 0) {
                    uVar10 = uVar19;
                    FVar5.Data = (FScriptContainerElement *)L"";
                  }
                  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar10,(wchar_t *)FVar5.Data);
                  TSet<TTuple<FString,FPluginDisallowedDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginDisallowedDescriptor_const_*,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FString>
                            ((TSet<TTuple<FString,FPluginDisallowedDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginDisallowedDescriptor_const_*,0>,FDefaultSetAllocator>
                              *)local_98,uVar10,&local_2d0);
                }
              }
            }
          }
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e0.SharedReferenceCount.ReferenceController);
        uVar13 = (ulonglong)local_2c0;
        pFVar18 = pFVar18 + 0x10;
      }
      uStack_24c = 1;
      pFVar17 = pFVar15;
      local_238 = uVar19;
      if (local_70 != 0) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar10 = *puVar20;
        uVar19 = 0;
        pFVar14 = pFVar15;
        while (uVar10 == 0) {
          iVar11 = (int)pFVar17;
          local_238 = (int)pFVar14 + 0x20;
          pFVar14 = (FJsonValueObject *)(ulonglong)local_238;
          uVar19 = iVar11 + 1;
          pFVar17 = (FJsonValueObject *)(ulonglong)uVar19;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19) {
            pFVar17 = (FJsonValueObject *)(ulonglong)local_70;
            goto LAB_141e1c4f0;
          }
          uVar10 = puVar20[(longlong)iVar11 + 1];
        }
        uStack_24c = -uVar10 & uVar10;
        uVar13 = (ulonglong)uStack_24c * 2 + 1;
        lVar16 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1f8.Key._4_4_ = (int)lVar16;
        uVar10 = local_1f8.Key._4_4_ + -1 + local_238;
        pFVar17 = (FJsonValueObject *)(ulonglong)uVar10;
        if ((int)local_70 < (int)uVar10) {
          pFVar17 = (FJsonValueObject *)(ulonglong)local_70;
        }
      }
LAB_141e1c4f0:
      local_258 = (longlong *)local_98;
      local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uStack_240 = 0xffffffff;
      iStack_23c = (int)pFVar17;
      uStack_234 = local_a4;
      TStack_1d8._padding_ = CONCAT44(uStack_24c,uVar19);
      TStack_1d8.CurrentBitIndex = iStack_23c;
      TStack_1d8.UnvisitedBitMask = 0xffffffff;
      TStack_1d8._28_4_ = local_a4;
      TStack_1d8.BaseBitIndex = local_238;
      uStack_250 = uVar19;
      local_1e0 = local_258;
      TStack_1d8.Array = local_248;
      if (iStack_23c < (int)local_70) {
        do {
          pFVar14 = ::operator_new(0x50);
          local_228.Object = (FJsonObject *)pFVar15;
          if (pFVar14 != (FJsonValueObject *)0x0) {
            pFVar14->_padding_ = 0;
            pFVar14->_padding_ = 0;
            pFVar14[1]._padding_ = 0;
            *(undefined4 *)&pFVar14[1]._padding_ = 0;
            *(undefined4 *)((longlong)&pFVar14[1]._padding_ + 4) = 0x80;
            *(undefined4 *)&pFVar14[1].Value.Object = 0xffffffff;
            *(undefined4 *)((longlong)&pFVar14[1].Value.Object + 4) = 0;
            pFVar14[2]._padding_ = 0;
            *(undefined4 *)&pFVar14[2]._padding_ = 0;
            local_228.Object = (FJsonObject *)pFVar14;
          }
          TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_278,&local_228);
          uVar2 = *(undefined8 *)((longlong)(int)pFVar17 * 0x20 + 0x10 + *local_1e0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,
                     (FReadAccessScope *)&local_258);
          pFVar17 = pFVar15;
          if (*(int *)&param_6->field_0x10 != 0) {
            pFVar17 = *(FJsonValueObject **)&param_6->field_0x8;
          }
          (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,uVar2,local_278.Object);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_258);
          pFVar14 = ::operator_new(0x20);
          FVar7.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
          pFVar17 = pFVar15;
          if (pFVar14 != (FJsonValueObject *)0x0) {
            local_168.Object = local_278.Object;
            local_168.SharedReferenceCount.ReferenceController =
                 local_278.SharedReferenceCount.ReferenceController;
            if (local_278.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pFVar17 = FJsonValueObject::FJsonValueObject(pFVar14,&local_168);
          }
          local_220.Object = pFVar17;
          TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>
                    (&local_2b8,&local_220);
          if (local_2f8.AllocatorInstance.Data <= &local_2b8) {
            if (&local_2b8 <
                (TSharedPtr<FJsonValue,1> *)
                (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
              local_310 = (longlong)local_2f8.ArrayNum;
              local_308 = 0x10;
              local_328 = &local_2b8;
              local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
              local_318 = (longlong)local_2f8.ArrayMax;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          iVar11 = local_2f8.ArrayNum;
          if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
          }
          local_2f8.ArrayNum = iVar11 + 1;
          *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar11 * 0x10].field_0x0 =
               local_2b8.Object;
          *(TReferenceControllerBase<1> **)
           (local_2f8.AllocatorInstance.Data + (longlong)iVar11 * 0x10 + 8) =
               local_2b8.SharedReferenceCount.ReferenceController;
          local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_2b8.Object = (FJsonValue *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar7.ReferenceController);
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
          pFVar17 = (FJsonValueObject *)(ulonglong)(uint)TStack_1d8.CurrentBitIndex;
        } while (TStack_1d8.CurrentBitIndex < (TStack_1d8.Array)->NumBits);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FPluginDisallowedDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FPluginDisallowedDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FPluginDisallowedDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
    }
    else {
      while( true ) {
        if (param_3->ArrayNum != iVar11) {
          local_2e6[0] = 0;
          `TCheckedPointerIterator<FPluginDisallowedDescriptor_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_2e6);
        }
        if (pFVar18 == pFVar21) break;
        pFVar17 = ::operator_new(0x50);
        local_218.Object = (FJsonObject *)pFVar15;
        if (pFVar17 != (FJsonValueObject *)0x0) {
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17[1]._padding_ = 0;
          *(undefined4 *)&pFVar17[1]._padding_ = 0;
          *(undefined4 *)((longlong)&pFVar17[1]._padding_ + 4) = 0x80;
          *(undefined4 *)&pFVar17[1].Value.Object = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar17[1].Value.Object + 4) = 0;
          pFVar17[2]._padding_ = 0;
          *(undefined4 *)&pFVar17[2]._padding_ = 0;
          local_218.Object = (FJsonObject *)pFVar17;
        }
        TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_268,&local_218);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,&local_f0);
        pFVar17 = pFVar15;
        if (*(int *)&param_6->field_0x10 != 0) {
          pFVar17 = *(FJsonValueObject **)&param_6->field_0x8;
        }
        (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,pFVar18,local_268.Object);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_f0);
        pFVar14 = ::operator_new(0x20);
        FVar7.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
        pFVar17 = pFVar15;
        if (pFVar14 != (FJsonValueObject *)0x0) {
          local_148.Object = local_268.Object;
          local_148.SharedReferenceCount.ReferenceController =
               local_268.SharedReferenceCount.ReferenceController;
          if (local_268.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pFVar17 = FJsonValueObject::FJsonValueObject(pFVar14,&local_148);
        }
        local_210.Object = pFVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_2a8,&local_210);
        if (local_2f8.AllocatorInstance.Data <= &local_2a8) {
          if (&local_2a8 <
              (TSharedPtr<FJsonValue,1> *)
              (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
            local_310 = (longlong)local_2f8.ArrayNum;
            local_308 = 0x10;
            local_328 = &local_2a8;
            local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
            local_318 = (longlong)local_2f8.ArrayMax;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        iVar12 = local_2f8.ArrayNum;
        if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
        }
        local_2f8.ArrayNum = iVar12 + 1;
        *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 =
             local_2a8.Object;
        *(TReferenceControllerBase<1> **)
         (local_2f8.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
             local_2a8.SharedReferenceCount.ReferenceController;
        local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_2a8.Object = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar7.ReferenceController);
        pFVar18 = pFVar18 + 0x10;
      }
    }
    this = local_290;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,local_d8);
    if ((*(int *)&this->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&this->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_2f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_d8);
    FJsonObject::SetArrayField(local_208,local_200,&local_2f8);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data,local_2f8.ArrayNum);
    param_4 = (TDelegate<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
               *)local_288;
    if ((TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
      param_4 = (TDelegate<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
                 *)local_288;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

// Execute @ 141e1ca20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FJsonObjectArrayUpdater<FPluginReferenceDescriptor,FString>::Execute
          (FJsonObject *param_1,FString *param_2,
          TArray<FPluginReferenceDescriptor,TSizedDefaultAllocator<32>_> *param_3,
          TDelegate<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy>
                   *param_5,
          TDelegate<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
          *param_6,TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                   *param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *pTVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FJsonValueObject *pFVar14;
  FJsonValueObject *pFVar15;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  longlong lVar16;
  FJsonValueObject *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStack_348 [32];
  TSharedPtr<FJsonValue,1> *local_328;
  TSharedPtr<FJsonValue,1> *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_2f8;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6 [6];
  TSharedPtr<FJsonValue,1> local_2e0;
  FString local_2d0;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_2c0;
  TSharedPtr<FJsonValue,1> local_2b8;
  TSharedPtr<FJsonValue,1> local_2a8;
  longlong *local_298;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_290;
  TDelegateBase<FNotThreadSafeDelegateMode> *local_288;
  TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *local_280;
  TSharedPtr<FJsonObject,1> local_278;
  TSharedPtr<FJsonObject,1> local_268;
  longlong *local_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  int iStack_23c;
  uint local_238;
  undefined4 uStack_234;
  TRawPtrProxy<FJsonObject> local_228;
  TRawPtrProxy<FJsonValueObject> local_220;
  TRawPtrProxy<FJsonObject> local_218;
  TRawPtrProxy<FJsonValueObject> local_210;
  FJsonObject *local_208;
  FString *local_200;
  TPairInitializer<FString_&&,FPluginReferenceDescriptor_const_*_&&> local_1f8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_1e8;
  longlong *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  void *local_1b8 [2];
  FScriptContainerElement *local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  uint uStack_190;
  undefined4 uStack_18c;
  void **local_188;
  FPluginReferenceDescriptor ***local_180;
  TStringView<wchar_t> local_178;
  TSharedPtr<FJsonObject,1> local_168;
  TStringView<wchar_t> local_158;
  TSharedPtr<FJsonObject,1> local_148;
  FReadAccessScope local_138;
  FReadAccessScope local_120;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  FReadAccessScope local_d8 [2];
  undefined4 local_a4;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_280 = param_5;
  pFVar15 = (FJsonValueObject *)0x0;
  iVar13 = (param_2->Data).ArrayNum;
  pFVar18 = (param_2->Data).AllocatorInstance.Data;
  local_290 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_7;
  local_2c0 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_6;
  uVar19 = 0;
  local_288 = (TDelegateBase<FNotThreadSafeDelegateMode> *)param_4;
  local_208 = param_1;
  local_200 = param_2;
  if (param_3->ArrayNum < 1) {
    uStack_1a0 = iVar13 - 1U;
    if (iVar13 == 0) {
      uStack_1a0 = uVar19;
    }
    local_158._12_4_ = uStack_19c;
    local_158.Size = uStack_1a0;
    local_1a8 = pFVar18;
    local_158.DataPtr = (wchar_t *)pFVar18;
    FJsonObject::RemoveField(param_1,&local_158);
    this = local_290;
  }
  else {
    uStack_190 = iVar13 - 1U;
    if (iVar13 == 0) {
      uStack_190 = 0;
    }
    local_178._12_4_ = uStack_18c;
    local_178.Size = uStack_190;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
    local_198 = pFVar18;
    local_178.DataPtr = (wchar_t *)pFVar18;
    bVar9 = FJsonObject::TryGetArrayField(param_1,&local_178,&local_1e8);
    iVar13 = param_3->ArrayNum;
    pFVar18 = (param_3->AllocatorInstance).Data;
    pFVar21 = pFVar18 + (longlong)iVar13 * 0xb8;
    if (bVar9) {
      local_98._0_8_ = 0;
      local_98._8_8_ = 0;
      local_78 = (uint *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      while( true ) {
        if (param_3->ArrayNum != iVar13) {
          local_2e8 = 0;
          `TCheckedPointerIterator<FPluginReferenceDescriptor_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2e8);
        }
        if (pFVar18 == pFVar21) break;
        local_1f8.Value = (FPluginReferenceDescriptor **)pFVar18;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_138);
        pFVar17 = pFVar15;
        if (*(int *)&param_4->field_0x10 != 0) {
          pFVar17 = *(FJsonValueObject **)&param_4->field_0x8;
        }
        (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,local_1b8,pFVar18);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_138);
        local_188 = local_1b8;
        local_180 = &local_1f8.Value;
        TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FPluginReferenceDescriptor_const_*_&&>_>
                  ((TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
                    *)local_98,&local_1f8,(bool *)&local_188);
        if (local_1b8[0] != (void *)0x0) {
          FMemory::Free(local_1b8[0]);
        }
        pFVar18 = pFVar18 + 0xb8;
      }
      iVar13 = local_1e8->ArrayNum;
      pFVar18 = (local_1e8->AllocatorInstance).Data;
      pFVar21 = pFVar18 + (longlong)iVar13 * 0x10;
      while( true ) {
        if (local_1e8->ArrayNum != iVar13) {
          local_2e7 = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_2e7);
        }
        param_6 = (TDelegate<void___cdecl(FPluginReferenceDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                   *)local_2c0;
        if (pFVar18 == pFVar21) break;
        local_2e0.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar18 + 8);
        local_2e0.Object = *(FJsonValue **)pFVar18;
        if (local_2e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_2e0.Object == (FJsonValue *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        cVar10 = (**(code **)((local_2e0.Object)->_padding_ + 0x88))(local_2e0.Object,&local_298);
        plVar4 = local_298;
        if (cVar10 != '\0') {
          local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d0.Data.ArrayNum = 0;
          local_2d0.Data.ArrayMax = 0;
          if ((*local_298 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar7 = local_280;
          lVar16 = *plVar4;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,&local_120)
          ;
          pFVar17 = pFVar15;
          if (*(int *)&pTVar7->field_0x10 != 0) {
            pFVar17 = *(FJsonValueObject **)&pTVar7->field_0x8;
          }
          cVar10 = (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,lVar16,&local_2d0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_120);
          if (cVar10 != '\0') {
            uVar11 = local_2d0.Data.ArrayNum - 1;
            FVar6.Data = local_2d0.Data.AllocatorInstance.Data;
            if (local_2d0.Data.ArrayNum == 0) {
              uVar11 = uVar19;
              FVar6.Data = (FScriptContainerElement *)L"";
            }
            uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,(wchar_t *)FVar6.Data);
            iVar12 = TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>
                               ((TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
                                 *)local_98,uVar11,&local_2d0);
            plVar4 = local_298;
            if (iVar12 != -1) {
              lVar16 = (longlong)iVar12 * 0x20 + local_98._0_8_;
              pFVar17 = (FJsonValueObject *)(lVar16 + 0x10);
              if (lVar16 == 0) {
                pFVar17 = pFVar15;
              }
              if (pFVar17 != (FJsonValueObject *)0x0) {
                if ((*local_298 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x44d,L""), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                lVar16 = *plVar4;
                lVar2 = pFVar17->_padding_;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
                           &local_108);
                pFVar17 = pFVar15;
                if (*(int *)&local_2c0->field_0x10 != 0) {
                  pFVar17 = *(FJsonValueObject **)&local_2c0->field_0x8;
                }
                (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,lVar2,lVar16);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_108);
                if (local_2f8.AllocatorInstance.Data <= &local_2e0) {
                  if (&local_2e0 <
                      (TSharedPtr<FJsonValue,1> *)
                      (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
                    local_310 = (longlong)local_2f8.ArrayNum;
                    local_308 = 0x10;
                    local_328 = &local_2e0;
                    local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
                    local_318 = (longlong)local_2f8.ArrayMax;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar9) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                }
                iVar12 = local_2f8.ArrayNum;
                if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
                }
                local_2f8.ArrayNum = iVar12 + 1;
                *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0
                     = local_2e0.Object;
                *(TReferenceControllerBase<1> **)
                 (local_2f8.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
                     local_2e0.SharedReferenceCount.ReferenceController;
                if (local_2e0.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_2e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_2e0.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                if (local_98._8_4_ != local_64) {
                  uVar11 = local_2d0.Data.ArrayNum - 1;
                  FVar6.Data = local_2d0.Data.AllocatorInstance.Data;
                  if (local_2d0.Data.ArrayNum == 0) {
                    uVar11 = uVar19;
                    FVar6.Data = (FScriptContainerElement *)L"";
                  }
                  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar11,(wchar_t *)FVar6.Data);
                  TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
                  ::RemoveImpl<FString>
                            ((TSet<TTuple<FString,FPluginReferenceDescriptor_const_*>,TDefaultMapHashableKeyFuncs<FString,FPluginReferenceDescriptor_const_*,0>,FDefaultSetAllocator>
                              *)local_98,uVar11,&local_2d0);
                }
              }
            }
          }
          if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2e0.SharedReferenceCount.ReferenceController);
        pFVar18 = pFVar18 + 0x10;
      }
      uStack_24c = 1;
      pFVar17 = pFVar15;
      local_238 = uVar19;
      if (local_70 != 0) {
        puVar20 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar20 = local_78;
        }
        uVar11 = *puVar20;
        pFVar14 = pFVar15;
        while (uVar11 == 0) {
          iVar13 = (int)pFVar17;
          local_238 = (int)pFVar14 + 0x20;
          pFVar14 = (FJsonValueObject *)(ulonglong)local_238;
          uVar19 = iVar13 + 1;
          pFVar17 = (FJsonValueObject *)(ulonglong)uVar19;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19) {
            pFVar17 = (FJsonValueObject *)(ulonglong)local_70;
            goto LAB_141e1cf80;
          }
          uVar11 = puVar20[(longlong)iVar13 + 1];
        }
        uStack_24c = -uVar11 & uVar11;
        uVar1 = (ulonglong)uStack_24c * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1f8.Key._4_4_ = (int)lVar16;
        uVar11 = local_1f8.Key._4_4_ + -1 + local_238;
        pFVar17 = (FJsonValueObject *)(ulonglong)uVar11;
        if ((int)local_70 < (int)uVar11) {
          pFVar17 = (FJsonValueObject *)(ulonglong)local_70;
        }
      }
LAB_141e1cf80:
      local_258 = (longlong *)local_98;
      local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uStack_240 = 0xffffffff;
      iStack_23c = (int)pFVar17;
      uStack_234 = local_a4;
      TStack_1d8._padding_ = CONCAT44(uStack_24c,uVar19);
      TStack_1d8.CurrentBitIndex = iStack_23c;
      TStack_1d8.UnvisitedBitMask = 0xffffffff;
      TStack_1d8._28_4_ = local_a4;
      TStack_1d8.BaseBitIndex = local_238;
      uStack_250 = uVar19;
      local_1e0 = local_258;
      TStack_1d8.Array = local_248;
      if (iStack_23c < (int)local_70) {
        do {
          pFVar14 = ::operator_new(0x50);
          local_228.Object = (FJsonObject *)pFVar15;
          if (pFVar14 != (FJsonValueObject *)0x0) {
            pFVar14->_padding_ = 0;
            pFVar14->_padding_ = 0;
            pFVar14[1]._padding_ = 0;
            *(undefined4 *)&pFVar14[1]._padding_ = 0;
            *(undefined4 *)((longlong)&pFVar14[1]._padding_ + 4) = 0x80;
            *(undefined4 *)&pFVar14[1].Value.Object = 0xffffffff;
            *(undefined4 *)((longlong)&pFVar14[1].Value.Object + 4) = 0;
            pFVar14[2]._padding_ = 0;
            *(undefined4 *)&pFVar14[2]._padding_ = 0;
            local_228.Object = (FJsonObject *)pFVar14;
          }
          TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_278,&local_228);
          uVar3 = *(undefined8 *)((longlong)(int)pFVar17 * 0x20 + 0x10 + *local_1e0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,
                     (FReadAccessScope *)&local_258);
          pFVar17 = pFVar15;
          if (*(int *)&((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6)->field_0x10 != 0) {
            pFVar17 = *(FJsonValueObject **)
                       &((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6)->field_0x8;
          }
          (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,uVar3,local_278.Object);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)&local_258);
          pFVar14 = ::operator_new(0x20);
          FVar8.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
          pFVar17 = pFVar15;
          if (pFVar14 != (FJsonValueObject *)0x0) {
            local_168.Object = local_278.Object;
            local_168.SharedReferenceCount.ReferenceController =
                 local_278.SharedReferenceCount.ReferenceController;
            if (local_278.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pFVar17 = FJsonValueObject::FJsonValueObject(pFVar14,&local_168);
          }
          local_220.Object = pFVar17;
          TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>
                    (&local_2b8,&local_220);
          if (local_2f8.AllocatorInstance.Data <= &local_2b8) {
            if (&local_2b8 <
                (TSharedPtr<FJsonValue,1> *)
                (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
              local_310 = (longlong)local_2f8.ArrayNum;
              local_308 = 0x10;
              local_328 = &local_2b8;
              local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
              local_318 = (longlong)local_2f8.ArrayMax;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
          }
          iVar13 = local_2f8.ArrayNum;
          if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
          }
          local_2f8.ArrayNum = iVar13 + 1;
          *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar13 * 0x10].field_0x0 =
               local_2b8.Object;
          *(TReferenceControllerBase<1> **)
           (local_2f8.AllocatorInstance.Data + (longlong)iVar13 * 0x10 + 8) =
               local_2b8.SharedReferenceCount.ReferenceController;
          local_2b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_2b8.Object = (FJsonValue *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
          pFVar17 = (FJsonValueObject *)(ulonglong)(uint)TStack_1d8.CurrentBitIndex;
        } while (TStack_1d8.CurrentBitIndex < (TStack_1d8.Array)->NumBits);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FPluginReferenceDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FPluginReferenceDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FPluginReferenceDescriptor_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
    }
    else {
      while( true ) {
        if (param_3->ArrayNum != iVar13) {
          local_2e6[0] = 0;
          `TCheckedPointerIterator<FPluginReferenceDescriptor_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_2e6);
        }
        if (pFVar18 == pFVar21) break;
        pFVar17 = ::operator_new(0x50);
        local_218.Object = (FJsonObject *)pFVar15;
        if (pFVar17 != (FJsonValueObject *)0x0) {
          pFVar17->_padding_ = 0;
          pFVar17->_padding_ = 0;
          pFVar17[1]._padding_ = 0;
          *(undefined4 *)&pFVar17[1]._padding_ = 0;
          *(undefined4 *)((longlong)&pFVar17[1]._padding_ + 4) = 0x80;
          *(undefined4 *)&pFVar17[1].Value.Object = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar17[1].Value.Object + 4) = 0;
          pFVar17[2]._padding_ = 0;
          *(undefined4 *)&pFVar17[2]._padding_ = 0;
          local_218.Object = (FJsonObject *)pFVar17;
        }
        TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>(&local_268,&local_218);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_6,&local_f0);
        pFVar17 = pFVar15;
        if (*(int *)&param_6->field_0x10 != 0) {
          pFVar17 = *(FJsonValueObject **)&param_6->field_0x8;
        }
        (**(code **)(pFVar17->_padding_ + 0x60))(pFVar17,pFVar18,local_268.Object);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_f0);
        pFVar14 = ::operator_new(0x20);
        FVar8.ReferenceController = local_268.SharedReferenceCount.ReferenceController;
        pFVar17 = pFVar15;
        if (pFVar14 != (FJsonValueObject *)0x0) {
          local_148.Object = local_268.Object;
          local_148.SharedReferenceCount.ReferenceController =
               local_268.SharedReferenceCount.ReferenceController;
          if (local_268.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pFVar17 = FJsonValueObject::FJsonValueObject(pFVar14,&local_148);
        }
        local_210.Object = pFVar17;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>(&local_2a8,&local_210);
        if (local_2f8.AllocatorInstance.Data <= &local_2a8) {
          if (&local_2a8 <
              (TSharedPtr<FJsonValue,1> *)
              (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) {
            local_310 = (longlong)local_2f8.ArrayNum;
            local_308 = 0x10;
            local_328 = &local_2a8;
            local_320 = (TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data;
            local_318 = (longlong)local_2f8.ArrayMax;
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
        iVar12 = local_2f8.ArrayNum;
        if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
        }
        local_2f8.ArrayNum = iVar12 + 1;
        *(FJsonValue **)&local_2f8.AllocatorInstance.Data[(longlong)iVar12 * 0x10].field_0x0 =
             local_2a8.Object;
        *(TReferenceControllerBase<1> **)
         (local_2f8.AllocatorInstance.Data + (longlong)iVar12 * 0x10 + 8) =
             local_2a8.SharedReferenceCount.ReferenceController;
        local_2a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_2a8.Object = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar8.ReferenceController);
        pFVar18 = pFVar18 + 0xb8;
      }
    }
    this = local_290;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,local_d8);
    if ((*(int *)&this->field_0x10 != 0) &&
       (plVar4 = *(longlong **)&this->field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_2f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_d8);
    FJsonObject::SetArrayField(local_208,local_200,&local_2f8);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data,local_2f8.ArrayNum);
    param_4 = (TDelegate<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
               *)local_288;
    if ((TSharedPtr<FJsonValue,1> *)local_2f8.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
      param_4 = (TDelegate<FString___cdecl(FPluginReferenceDescriptor_const_&),FDefaultDelegateUserPolicy>
                 *)local_288;
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this);
  return;
}

