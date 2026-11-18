// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// Exec @ 147b97120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEmbeddedCommunicationExec::Exec
          (FEmbeddedCommunicationExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *pTVar6;
  undefined8 uVar7;
  FElement *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  FName *pFVar13;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar14;
  TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>
  *pTVar15;
  FString *pFVar16;
  TJsonStringReader<wchar_t> *pTVar17;
  FJsonObject *pFVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong lVar21;
  longlong *plVar22;
  ForAnyElementType FVar23;
  int iVar24;
  atomic<int> *paVar25;
  FSharedReferencer<1> FVar26;
  TJsonStringReader<wchar_t> *pTVar27;
  uint uVar28;
  undefined1 *puVar29;
  uint uVar30;
  uint *puVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  uint uVar34;
  FElement *pFVar35;
  TReferenceControllerBase<1> *pTVar36;
  undefined1 auStackY_468 [32];
  undefined1 local_438 [4];
  uint local_434;
  wchar_t *local_430;
  TSharedPtr<FJsonObject,1> local_428;
  FString local_418;
  FString local_408;
  FScriptContainerElement *local_3f8;
  TReferenceControllerBase<1> *local_3f0;
  FString local_3e8;
  TSharedPtr<FJsonObject,1> *local_3d8;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_3d0;
  longlong *local_3c8;
  TBitArray<FDefaultBitArrayAllocator> *local_3c0;
  FName local_3b8;
  FString local_3b0;
  StackState local_3a0;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_368;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_358;
  int local_348;
  int local_344;
  TPairInitializer<FString_const_&,FString_const_&> local_340;
  FJsonObject *local_330;
  TReferenceControllerBase<1> *local_328;
  FString local_320;
  FJsonObject *local_310;
  uint uStack_308;
  uint uStack_304;
  undefined1 *local_300;
  undefined4 uStack_2f8;
  uint uStack_2f4;
  uint local_2f0;
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  FJsonObject *local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 uStack_2b8;
  wchar_t *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  wchar_t *local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_278;
  TSharedPtr<FJsonObject,1> local_268;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_258;
  FString *local_248;
  FString *local_240;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_238;
  FString local_228;
  FString local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  FName local_1e8 [2];
  TStringView<wchar_t> local_1d8;
  FName local_1c8 [4];
  undefined4 local_1a4;
  undefined1 local_198 [16];
  undefined1 local_188 [32];
  void *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  void *local_148;
  undefined4 local_140;
  longlong local_138;
  longlong local_128 [3];
  longlong *local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8 [3];
  longlong *plStack_e0;
  undefined1 local_d8 [16];
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_c8;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  ulonglong local_48;
  TJsonStringReader<wchar_t> *pTVar31;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_430 = param_2;
  bVar9 = FParse::Command(&local_430,L"exitembedded",true);
  if (bVar9) {
    local_15c = 0x80;
    local_198._0_8_ = (FScriptContainerElement *)0x0;
    local_198._8_4_ = 0;
    local_198._12_4_ = 0;
    local_188._0_8_ = (FScriptContainerElement *)0x0;
    local_188._8_8_ = 0;
    local_168 = (void *)0x0;
    local_160 = 0;
    local_154 = 0;
    local_148 = (void *)0x0;
    local_140 = 0;
    local_138 = 0;
    local_110 = (longlong *)0x0;
    local_158 = 0xffffffff;
    ::FString::operator=((FString *)local_198,L"exitembedded");
    pFVar13 = ::FName::FName(local_1c8,L"native");
    pTVar14 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              FEmbeddedDelegates::GetEmbeddedToNativeParamsDelegateForSubsystem(*pFVar13);
    bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(pTVar14);
    if (bVar9) {
      pFVar13 = ::FName::FName(local_1e8,L"native");
      pTVar15 = FEmbeddedDelegates::GetEmbeddedToNativeParamsDelegateForSubsystem(*pFVar13);
      TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(pTVar15,(FEmbeddedCallParamsHelper *)local_198);
    }
    if (local_138 != 0) {
      plVar22 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar22 = local_110;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    local_140 = 0;
    if (local_148 != (void *)0x0) {
      FMemory::Free(local_148);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_188,0,local_188._8_4_);
    iVar24 = SUB84(local_188._8_8_,4);
    local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
    if (iVar24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_188,0,(int *)(local_188 + 0xc));
    }
    local_158 = 0xffffffff;
    local_154 = 0;
    local_160 = 0;
    if (0x80 < local_15c) {
      local_15c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10),0);
    }
    if (local_168 != (void *)0x0) {
      FMemory::Free(local_168);
    }
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_198._0_8_;
    if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_188._0_8_);
      local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_198._0_8_;
    }
    goto LAB_147b97f81;
  }
  bVar9 = FParse::Command(&local_430,L"DumpEmbedded",true);
  if (bVar9) {
    if ((byte)LogEngine._0_1_ < 4) {
      return true;
    }
    FEmbeddedCommunication::GetDebugInfo(&local_228);
    UE::Logging::Private::BasicLog<4>
              (&`public:_virtual_bool___cdecl_FEmbeddedCommunicationExec::Exec(UWorld*___ptr64,wchar_t_const*___ptr64,FOutputDevice&___ptr64)___ptr64'
                ::__l13::LOG_Static,(FLogCategoryBase *)&LogEngine);
    goto LAB_147b97f81;
  }
  bVar9 = FParse::Command(&local_430,L"webcall",true);
  if (!bVar9) {
    return false;
  }
  _wtoi(local_430);
  ::FString::PrintfImpl(&local_320,L"Calls[%d]");
  pTVar27 = (TJsonStringReader<wchar_t> *)0x0;
  uVar28 = 0;
  uVar30 = 0;
  local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_320.Data.ArrayNum != 0) {
    FVar23.Data = local_320.Data.AllocatorInstance.Data;
  }
  local_3b0.Data.ArrayNum = 0;
  local_3b0.Data.ArrayMax = 0;
  bVar9 = FConfigCacheIni::GetString
                    (GConfig,L"WebCalls",(wchar_t *)FVar23.Data,&local_3b0,&GEngineIni);
  if (bVar9) {
    pFVar16 = ::FString::Replace(&local_3b0,&local_218,L"\'",L"\"",IgnoreCase);
    pTVar17 = ::operator_new(0x88);
    local_340.Value = (FString *)pTVar27;
    if (pTVar17 != (TJsonStringReader<wchar_t> *)0x0) {
      local_340.Value =
           (FString *)TJsonStringReader<wchar_t>::TJsonStringReader<wchar_t>(pTVar17,pFVar16);
    }
    TSharedRef<TJsonStringReader<wchar_t>,1>::
    TSharedRef<TJsonStringReader<wchar_t>,1><TJsonStringReader<wchar_t>_>
              (&local_238,(TRawPtrProxy<TJsonStringReader<wchar_t>_> *)&local_340.Value);
    local_328 = local_238.SharedReferenceCount.ReferenceController;
    if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.SharedReferenceCount.ReferenceController);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    local_3a0.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.Identifier.Data.ArrayNum = 0;
    local_3a0.Identifier.Data.ArrayMax = 0;
    local_428.Object = (FJsonObject *)0x0;
    local_428.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_3a0.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.Object.Object = (FJsonObject *)0x0;
    local_3a0.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_3a0.Array.ArrayNum = 0;
    local_3a0.Array.ArrayMax = 0;
    bVar9 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)local_238.Object,&local_3a0,None);
    FVar26.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
    if (bVar9) {
      bVar9 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_3a0,&local_428);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3a0.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_3a0.Array.AllocatorInstance.Data,
                 local_3a0.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_3a0.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_3a0.Array.AllocatorInstance.Data);
      }
      if (local_3a0.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a0.Identifier.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        local_d8._0_8_ = (FScriptContainerElement *)0x0;
        local_d8._8_4_ = 0;
        local_d8._12_4_ = 0;
        local_c8.Elements._0_8_ = 0;
        local_c8.Elements._8_8_ = 0;
        local_c8.Elements._32_8_ = 0;
        local_c8.Elements._40_4_ = 0;
        local_c8.Elements._44_4_ = 0x80;
        local_c8.Elements._48_4_ = 0xffffffff;
        local_c8.Elements._52_4_ = 0;
        local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_c8.HashSize = 0;
        local_78 = (code *)0x0;
        plStack_50 = (longlong *)0x0;
        local_3e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e8.Data.ArrayNum = 0;
        local_3e8.Data.ArrayMax = 0;
        if ((local_428.Object == (FJsonObject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        local_2a8 = L"Subsystem";
        uStack_2a0 = 9;
        local_1d8._12_4_ = uStack_29c;
        local_1d8.Size = 9;
        local_1d8.DataPtr = L"Subsystem";
        FJsonObject::TryGetStringField(local_428.Object,&local_1d8,&local_3e8);
        if ((local_428.Object == (FJsonObject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        local_298 = L"Command";
        uStack_290 = 7;
        local_208._12_4_ = uStack_28c;
        local_208.Size = 7;
        local_208.DataPtr = L"Command";
        FJsonObject::TryGetStringField(local_428.Object,&local_208,(FString *)local_d8);
        local_3d8 = (TSharedPtr<FJsonObject,1> *)0x0;
        if ((local_428.Object == (FJsonObject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        local_288 = L"Args";
        uStack_280 = 4;
        local_1f8._12_4_ = uStack_27c;
        local_1f8.Size = 4;
        local_1f8.DataPtr = L"Args";
        bVar9 = FJsonObject::TryGetObjectField(local_428.Object,&local_1f8,&local_3d8);
        if (bVar9) {
          pFVar18 = TSharedPtr<FJsonObject,1>::operator->(local_3d8);
          uVar2 = *(uint *)&(pFVar18->Values).field_0x28;
          uStack_304 = 1;
          pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar18->Values).field_0x10;
          uStack_2f4 = uVar30;
          if (uVar2 != 0) {
            puVar32 = *(uint **)&(pFVar18->Values).field_0x20;
            if (puVar32 == (uint *)0x0) {
              puVar32 = (uint *)pTVar33;
            }
            uVar12 = *puVar32;
            pTVar17 = pTVar27;
            pTVar31 = pTVar27;
            uVar30 = 0;
            uVar28 = 0;
            while (uVar12 == 0) {
              iVar24 = (int)pTVar17;
              uVar30 = (int)pTVar31 + 0x20;
              pTVar31 = (TJsonStringReader<wchar_t> *)(ulonglong)uVar30;
              uVar28 = iVar24 + 1;
              pTVar17 = (TJsonStringReader<wchar_t> *)(ulonglong)uVar28;
              uStack_2f4 = uVar2;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
              goto LAB_147b9779d;
              uVar12 = puVar32[(longlong)iVar24 + 1];
            }
            uStack_304 = -uVar12 & uVar12;
            uVar1 = (ulonglong)uStack_304 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_348 = (int)lVar21;
            uStack_2f4 = (uVar30 - 1) + local_348;
            if ((int)uVar2 < (int)uStack_2f4) {
              uStack_2f4 = uVar2;
            }
          }
LAB_147b9779d:
          uVar12 = *(uint *)&(pFVar18->Values).field_0x28;
          uStack_2ec = local_1a4;
          iStack_2e8 = *(int *)&(pFVar18->Values).field_0x8 - *(int *)&(pFVar18->Values).field_0x34;
          uVar34 = uVar12 & 0xffffffe0;
          uStack_2f8 = 0xffffffff;
          TStack_2d8._padding_ = CONCAT44(uStack_304,uVar28);
          TStack_2d8.CurrentBitIndex = uStack_2f4;
          TStack_2d8.UnvisitedBitMask = 0xffffffff;
          iVar24 = (int)uVar12 >> 5;
          TStack_2d8._28_4_ = local_1a4;
          TStack_2d8.BaseBitIndex = uVar30;
          uStack_2b8 = CONCAT44(uStack_2e4,iStack_2e8);
          local_434 = uVar12;
          local_3c0 = pTVar33;
          local_330 = pFVar18;
          local_310 = pFVar18;
          uStack_308 = uVar28;
          local_300 = (undefined1 *)pTVar33;
          local_2f0 = uVar30;
          local_2e0 = pFVar18;
          TStack_2d8.Array = pTVar33;
          if ((((int)uVar12 < 0) || ((int)uVar2 < (int)uVar12)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          uVar30 = *(uint *)&(pFVar18->Values).field_0x28;
          if (uVar12 != uVar30) {
            puVar3 = *(undefined1 **)&(pFVar18->Values).field_0x20;
            puVar29 = (undefined1 *)pTVar33;
            if (puVar3 != (undefined1 *)0x0) {
              puVar29 = puVar3;
            }
            uVar28 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar24 * 4);
            while (uVar28 == 0) {
              lVar21 = (longlong)iVar24;
              uVar34 = uVar34 + 0x20;
              iVar24 = iVar24 + 1;
              uVar12 = uVar30;
              local_434 = uVar30;
              if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
              goto LAB_147b978b4;
              uVar28 = *(uint *)(puVar29 + lVar21 * 4 + 4);
            }
            uVar1 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
            lVar21 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            local_344 = (int)lVar21;
            uVar12 = local_344 + -1 + uVar34;
            local_434 = uVar12;
            if ((int)uVar30 < (int)uVar12) {
              uVar12 = uVar30;
              local_434 = uVar30;
            }
          }
LAB_147b978b4:
          pFVar35 = ___xmm_00000000000000000000000000000010;
          pTVar36 = _UNK_150651568;
          while( true ) {
            pFVar18 = local_2e0;
            if (*(int *)&(local_2e0->Values).field_0x8 - *(int *)&(local_2e0->Values).field_0x34 !=
                (int)uStack_2b8) {
              local_438[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_438);
            }
            if (((TStack_2d8.CurrentBitIndex == uVar12) && (TStack_2d8.Array == pTVar33)) &&
               (FVar26.ReferenceController = local_328, pFVar18 == local_330)) break;
            pFVar16 = (FString *)
                      (*(longlong *)&pFVar18->Values + (longlong)TStack_2d8.CurrentBitIndex * 0x28);
            ::FString::FString(&local_408,pFVar16);
            local_3f8 = pFVar16[1].Data.AllocatorInstance.Data;
            local_3f0 = *(TReferenceControllerBase<1> **)&pFVar16[1].Data.ArrayNum;
            if (local_3f0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_3f0->SharedReferenceCount =
                   (atomic<int>)((int)local_3f0->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_418.Data.ArrayNum = 0;
            local_418.Data.ArrayMax = 0;
            if ((local_3f8 == (FScriptContainerElement *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar10 = (*pcVar4)();
              return (bool)uVar10;
            }
            cVar11 = (**(code **)(*(longlong *)local_3f8 + 0x58))(local_3f8,&local_418);
            if (cVar11 == '\0') {
              local_3d0 = (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)0x0;
              if ((local_3f8 == (FScriptContainerElement *)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar10 = (*pcVar4)();
                return (bool)uVar10;
              }
              cVar11 = (**(code **)(*(longlong *)local_3f8 + 0x78))(local_3f8,&local_3d0);
              if (cVar11 == '\0') {
                local_3c8 = (longlong *)0x0;
                if ((local_3f8 == (FScriptContainerElement *)0x0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  uVar10 = (*pcVar4)();
                  return (bool)uVar10;
                }
                cVar11 = (**(code **)(*(longlong *)local_3f8 + 0x88))(local_3f8,&local_3c8);
                if (cVar11 != '\0') {
                  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
                            (&local_258,&local_418,0);
                  plVar22 = local_3c8;
                  if ((*local_3c8 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x408,L""), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                  pFVar18 = (FJsonObject *)*plVar22;
                  pTVar19 = (TReferenceControllerBase<1> *)plVar22[1];
                  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar19->SharedReferenceCount =
                         (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  if ((pFVar18 == (FJsonObject *)0x0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x25d,L""), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                  pTVar6 = local_258.Object;
                  if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
                    paVar25 = (atomic<int> *)&DAT_00000008;
                  }
                  else {
                    paVar25 = &pTVar19->SharedReferenceCount;
                    LOCK();
                    *paVar25 = (atomic<int>)((int)*paVar25 + 1);
                    UNLOCK();
                  }
                  pTVar20 = ::operator_new(0x38);
                  pFVar8 = pFVar35;
                  FVar26.ReferenceController = pTVar36;
                  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
                    pTVar20->SharedReferenceCount = (atomic<int>)0x1;
                    pTVar20->WeakReferenceCount = (atomic<int>)0x1;
                    pTVar20->_padding_ =
                         (longlong)
                         &
                         ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
                    ;
                    pTVar20[1]._padding_ = 0;
                    pTVar20[1].SharedReferenceCount = (atomic<int>)0x0;
                    pTVar20[1].WeakReferenceCount = (atomic<int>)0x0;
                    pTVar17 = ::operator_new(0x30);
                    if (pTVar17 == (TJsonStringReader<wchar_t> *)0x0) {
                      pTVar20[2]._padding_ = 0x10;
                      pTVar20[2].SharedReferenceCount = (atomic<int>)0x0;
                      pTVar20[2].WeakReferenceCount = (atomic<int>)0x0;
                      pTVar17 = pTVar27;
                    }
                    else {
                      *(undefined4 *)&pTVar17->_padding_ = 1;
                      *(undefined4 *)((longlong)&pTVar17->_padding_ + 4) = 1;
                      pTVar17->_padding_ =
                           (longlong)
                           &
                           ___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
                      ;
                      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        *paVar25 = (atomic<int>)((int)*paVar25 + 1);
                        UNLOCK();
                      }
                      local_268.Object = pFVar18;
                      local_268.SharedReferenceCount.ReferenceController = pTVar19;
                      FJsonValueObject::FJsonValueObject
                                ((FJsonValueObject *)&pTVar17->_padding_,&local_268);
                      if ((&pTVar17->_padding_ == (longlong *)0x0) &&
                         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                            ("InObject != nullptr",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x246,L""), bVar9)) {
                        pcVar4 = (code *)swi(3);
                        uVar10 = (*pcVar4)();
                        return (bool)uVar10;
                      }
                      pTVar20[2]._padding_ = (longlong)&pTVar17->_padding_;
                      *(TJsonStringReader<wchar_t> **)&pTVar20[2].SharedReferenceCount = pTVar17;
                      LOCK();
                      *(int *)&pTVar17->_padding_ = (int)pTVar17->_padding_ + 1;
                      UNLOCK();
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pTVar17);
                    local_358.Object = (FElement *)(pTVar20 + 1);
                    *(undefined2 *)&pTVar20[3]._padding_ = 0;
                    pFVar8 = local_358.Object;
                    FVar26.ReferenceController = pTVar20;
                    if ((local_358.Object == (FElement *)0x0) &&
                       (local_358.SharedReferenceCount.ReferenceController = pTVar20,
                       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InObject != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x246,L""), pFVar8 = local_358.Object,
                       FVar26.ReferenceController =
                            local_358.SharedReferenceCount.ReferenceController, bVar9)) {
                      pcVar4 = (code *)swi(3);
                      uVar10 = (*pcVar4)();
                      return (bool)uVar10;
                    }
                  }
                  local_358.SharedReferenceCount.ReferenceController = FVar26.ReferenceController;
                  local_358.Object = pFVar8;
                  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
                  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_358,pTVar6,true);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_358.SharedReferenceCount.ReferenceController)
                  ;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar19);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar19);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_258.SharedReferenceCount.ReferenceController)
                  ;
                  pTVar33 = local_3c0;
                }
              }
              else {
                TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
                          (&local_278,&local_418,0);
                pTVar6 = local_278.Object;
                pTVar5 = local_3d0;
                pTVar19 = ::operator_new(0x38);
                pFVar8 = pFVar35;
                FVar26.ReferenceController = pTVar36;
                if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                  pTVar19->SharedReferenceCount = (atomic<int>)0x1;
                  pTVar19->WeakReferenceCount = (atomic<int>)0x1;
                  pTVar19->_padding_ =
                       (longlong)
                       &
                       ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
                  ;
                  pTVar19[1]._padding_ = 0;
                  pTVar19[1].SharedReferenceCount = (atomic<int>)0x0;
                  pTVar19[1].WeakReferenceCount = (atomic<int>)0x0;
                  pTVar17 = ::operator_new(0x30);
                  if (pTVar17 == (TJsonStringReader<wchar_t> *)0x0) {
                    pTVar19[2]._padding_ = 0x10;
                    pTVar19[2].SharedReferenceCount = (atomic<int>)0x0;
                    pTVar19[2].WeakReferenceCount = (atomic<int>)0x0;
                    pTVar17 = pTVar27;
                  }
                  else {
                    *(undefined4 *)&pTVar17->_padding_ = 1;
                    *(undefined4 *)((longlong)&pTVar17->_padding_ + 4) = 1;
                    pTVar17->_padding_ =
                         (longlong)
                         &
                         ___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_
                    ;
                    FJsonValueArray::FJsonValueArray((FJsonValueArray *)&pTVar17->_padding_,pTVar5);
                    if ((&pTVar17->_padding_ == (longlong *)0x0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("InObject != nullptr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x246,L""), bVar9)) {
                      pcVar4 = (code *)swi(3);
                      uVar10 = (*pcVar4)();
                      return (bool)uVar10;
                    }
                    pTVar19[2]._padding_ = (longlong)&pTVar17->_padding_;
                    *(TJsonStringReader<wchar_t> **)&pTVar19[2].SharedReferenceCount = pTVar17;
                    LOCK();
                    *(int *)&pTVar17->_padding_ = (int)pTVar17->_padding_ + 1;
                    UNLOCK();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pTVar17);
                  local_368.Object = (FElement *)(pTVar19 + 1);
                  *(undefined2 *)&pTVar19[3]._padding_ = 0;
                  pFVar8 = local_368.Object;
                  FVar26.ReferenceController = pTVar19;
                  if ((local_368.Object == (FElement *)0x0) &&
                     (local_368.SharedReferenceCount.ReferenceController = pTVar19,
                     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), pFVar8 = local_368.Object,
                     FVar26.ReferenceController = local_368.SharedReferenceCount.ReferenceController
                     , bVar9)) {
                    pcVar4 = (code *)swi(3);
                    uVar10 = (*pcVar4)();
                    return (bool)uVar10;
                  }
                }
                local_368.SharedReferenceCount.ReferenceController = FVar26.ReferenceController;
                local_368.Object = pFVar8;
                TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
                Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_368,pTVar6,true);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_368.SharedReferenceCount.ReferenceController);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_278.SharedReferenceCount.ReferenceController);
                pTVar33 = local_3c0;
              }
            }
            local_248 = &local_408;
            local_240 = &local_418;
            TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)(local_d8 + 0x10),&local_340,(bool *)&local_248);
            if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_418.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3f0);
            if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_408.Data.AllocatorInstance.Data);
            }
            TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
            uVar12 = local_434;
          }
        }
        plStack_e0 = plStack_50;
        uVar7 = uStack_70;
        local_108 = (longlong)local_78;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString),void,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString>
                   ::Call;
        uStack_70 = uStack_100;
        local_58 = (undefined4)local_f8[2];
        uStack_54 = local_f8[2]._4_4_;
        plStack_50 = (longlong *)0x0;
        local_68 = 0x51875950;
        uStack_64 = 1;
        uStack_60 = 0x47baa060;
        uStack_5c = 1;
        uStack_100 = uVar7;
        if (local_108 != 0) {
          plVar22 = local_f8;
          if (plStack_e0 != (longlong *)0x0) {
            plVar22 = plStack_e0;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_3e8.Data.ArrayNum != 0) {
          FVar23.Data = local_3e8.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_3b8,(wchar_t *)FVar23.Data);
        pTVar14 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                  FEmbeddedDelegates::GetNativeToEmbeddedParamsDelegateForSubsystem(local_3b8);
        bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(pTVar14);
        if (bVar9) {
          pTVar15 = FEmbeddedDelegates::GetNativeToEmbeddedParamsDelegateForSubsystem(local_3b8);
          TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(pTVar15,(FEmbeddedCallParamsHelper *)local_d8);
        }
        if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
        }
        if (local_78 != (code *)0x0) {
          plVar22 = (longlong *)&local_68;
          if (plStack_50 != (longlong *)0x0) {
            plVar22 = plStack_50;
          }
          (**(code **)(*plVar22 + 0x10))();
        }
        local_c8.HashSize = 0;
        if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_c8.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_d8 + 0x10));
        FVar23.Data = (FScriptContainerElement *)local_d8._0_8_;
        goto LAB_147b97f3b;
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3a0.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_3a0.Array.AllocatorInstance.Data,
                 local_3a0.Array.ArrayNum);
      FVar23.Data = local_3a0.Identifier.Data.AllocatorInstance.Data;
      if ((TSharedPtr<FJsonValue,1> *)local_3a0.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_3a0.Array.AllocatorInstance.Data);
        FVar23.Data = local_3a0.Identifier.Data.AllocatorInstance.Data;
      }
LAB_147b97f3b:
      local_238.SharedReferenceCount.ReferenceController = FVar26.ReferenceController;
      if (FVar23.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar23.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_428.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.SharedReferenceCount.ReferenceController);
  }
  local_228.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
  if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
    local_228.Data.AllocatorInstance.Data = local_320.Data.AllocatorInstance.Data;
  }
LAB_147b97f81:
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  return true;
}

// <lambda_invoker_cdecl> @ 147baa060

void __cdecl
`FEmbeddedCommunicationExec::Exec'::__l40::<lambda_1>::<lambda_invoker_cdecl>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this;
  
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator() @ 147bc1430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FEmbeddedCommunicationExec::FEmbeddedCommunicationExec'::__l2::<lambda_1>::operator()
          (void *this,FEmbeddedCallParamsHelper *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FString *pFVar9;
  undefined8 uVar10;
  ULocalPlayer *pUVar11;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar12;
  TTuple<FString,FString> *pTVar13;
  ForAnyElementType FVar14;
  IConsoleManager *pIVar15;
  longlong *plVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  ForAnyElementType FVar19;
  ForAnyElementType FVar20;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar21;
  undefined1 auStackY_a28 [32];
  ForAnyElementType local_9e8;
  undefined8 local_9e0;
  ForAnyElementType local_9d8;
  undefined8 local_9d0;
  ForAnyElementType local_9c8;
  undefined8 local_9c0;
  FString local_9b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString FStack_858;
  longlong lStack_848;
  int local_840;
  undefined4 uStack_83c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_838;
  FOutputDevice local_818;
  FString local_808;
  FName local_7f8;
  FName local_7f0;
  TPairInitializer<FString_const_&,FString_const_&> local_7e8;
  TPairInitializer<FString_const_&,FString_const_&> local_7d8;
  TPairInitializer<FString_const_&,FString_const_&> local_7c8;
  TPairInitializer<FString_const_&,FString_const_&> local_7b8;
  undefined1 local_7a8 [12];
  uint uStack_79c;
  TBitArray<FDefaultBitArrayAllocator> *local_798;
  undefined8 uStack_790;
  longlong local_788;
  undefined8 uStack_780;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  initializer_list<TPairInitializer<FString_const_&,FString_const_&>_> local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  initializer_list<TPairInitializer<FString_const_&,FString_const_&>_> local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  initializer_list<TPairInitializer<FString_const_&,FString_const_&>_> local_638;
  FString local_628;
  FString local_618;
  initializer_list<TPairInitializer<FString_const_&,FString_const_&>_> local_608;
  undefined1 local_5f8 [24];
  longlong lStack_5e0;
  longlong lStack_5d8;
  int local_5d0;
  undefined4 uStack_5cc;
  FString local_5c8;
  void *local_5b8 [2];
  FString local_5a8;
  FText local_598;
  TRangedForConstIterator local_588;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  undefined1 local_498 [24];
  undefined8 uStack_480;
  void *local_478;
  undefined4 local_470;
  uint local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined8 local_460;
  void *local_458;
  ulonglong local_450;
  undefined1 local_448 [24];
  undefined8 uStack_430;
  void *local_428;
  undefined4 local_420;
  uint local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined8 local_410;
  void *local_408;
  ulonglong local_400;
  undefined1 local_3f8 [24];
  undefined8 uStack_3e0;
  void *local_3d8;
  undefined4 local_3d0;
  uint local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined8 local_3c0;
  void *local_3b8;
  ulonglong local_3b0;
  undefined1 local_3a8 [24];
  undefined8 uStack_390;
  void *local_388;
  undefined4 local_380;
  uint local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined8 local_370;
  void *local_368;
  ulonglong local_360;
  undefined1 local_358 [24];
  undefined8 uStack_340;
  void *local_338;
  undefined4 local_330;
  uint local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined8 local_320;
  void *local_318;
  ulonglong local_310;
  undefined1 local_308 [24];
  undefined8 uStack_2f0;
  void *local_2e8;
  undefined4 local_2e0;
  uint local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  void *local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [24];
  undefined8 uStack_2a0;
  void *local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  void *local_278;
  ulonglong local_270;
  undefined1 local_268 [64];
  void *local_228;
  ulonglong local_220;
  undefined1 local_218 [64];
  void *local_1d8;
  ulonglong local_1d0;
  undefined1 local_1c8 [64];
  void *local_188;
  ulonglong local_180;
  undefined1 local_178 [72];
  undefined4 local_130;
  undefined1 local_128 [72];
  undefined4 local_e0;
  undefined1 local_d8 [72];
  undefined4 local_90;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a28;
  if ((param_1->Command).Data.ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
  }
  iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"StartUELive");
  if (iVar7 != 0) {
    if ((param_1->Command).Data.ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"StopUELive");
    if (iVar7 != 0) {
      if ((param_1->Command).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"devicesleep");
      if (iVar7 == 0) {
        ::FString::FString(&local_898,L"enabled");
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_898.Data.ArrayNum != 0) {
          FVar14.Data = local_898.Data.AllocatorInstance.Data;
        }
        iVar7 = local_898.Data.ArrayNum + -1;
        if (local_898.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar14.Data);
        iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&param_1->Parameters,uVar8,&local_898);
        if ((iVar7 == -1) ||
           (lVar2 = *(longlong *)&param_1->Parameters + (longlong)iVar7 * 0x28, lVar2 == 0)) {
          local_9b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_9b8.Data.ArrayNum = 0;
          local_9b8.Data.ArrayMax = 0;
        }
        else {
          local_9b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar7 = *(int *)(lVar2 + 0x18);
          pvVar3 = *(void **)(lVar2 + 0x10);
          local_9b8.Data.ArrayNum = iVar7;
          if (iVar7 == 0) {
            local_9b8.Data.ArrayNum = 0;
            local_9b8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar7,0,(ForAnyElementType *)&local_9b8,iVar7,&local_9b8.Data.ArrayMax);
            memcpy(local_9b8.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar7 * 2);
          }
        }
        ::FString::ToBool(&local_9b8);
        if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
        }
        if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_898.Data.AllocatorInstance.Data);
        }
        pFVar9 = ::FString::FString(&local_538,L"");
        local_3f8._16_8_ = 0;
        uStack_3e0 = 0;
        local_3c0 = 0;
        local_3b0 = 0;
        local_3f8._0_8_ = (FScriptContainerElement *)0x0;
        local_3f8._8_8_ = 0;
        local_3d8 = (void *)0x0;
        local_3d0 = 0;
        local_3cc = 0x80;
        local_3c8 = 0xffffffff;
        local_3c4 = 0;
        local_3b8 = (void *)0x0;
        UE::Core::Private::Function::CheckCallable(*(void **)&param_1->OnCompleteDelegate);
        pcVar4 = *(code **)&param_1->OnCompleteDelegate;
        plVar16 = *(longlong **)&(param_1->OnCompleteDelegate).field_0x28;
        plVar17 = (longlong *)&(param_1->OnCompleteDelegate).field_0x10;
        if (plVar16 != (longlong *)0x0) {
          plVar17 = plVar16;
        }
        uVar10 = (**(code **)(*plVar17 + 8))();
        (*pcVar4)(uVar10,local_3f8,pFVar9);
        pFVar5 = (pFVar9->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        local_3b0 = local_3b0 & 0xffffffff00000000;
        if (local_3b8 != (void *)0x0) {
          FMemory::Free(local_3b8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_3f8,0,local_3f8._8_4_);
        iVar7 = SUB84(local_3f8._8_8_,4);
        local_3f8._8_8_ = local_3f8._8_8_ & 0xffffffff00000000;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_3f8,0,(int *)(local_3f8 + 0xc));
        }
        local_3c8 = 0xffffffff;
        local_3c4 = 0;
        local_3d0 = 0;
        if (0x80 < local_3cc) {
          local_3cc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_3f8 + 0x10),0);
        }
        if (local_3d8 != (void *)0x0) {
          FMemory::Free(local_3d8);
        }
        if ((FScriptContainerElement *)local_3f8._0_8_ == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free((void *)local_3f8._0_8_);
        return;
      }
      if ((param_1->Command).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"shaderresumebatching");
      if (iVar7 == 0) {
        FShaderPipelineCache::ResumeBatching();
        pFVar9 = ::FString::FString(&local_528,L"");
        local_370 = 0;
        local_3a8._16_8_ = 0;
        uStack_390 = 0;
        local_360 = 0;
        local_3a8._0_8_ = (FScriptContainerElement *)0x0;
        local_3a8._8_8_ = 0;
        local_388 = (void *)0x0;
        local_380 = 0;
        local_37c = 0x80;
        local_378 = 0xffffffff;
        local_374 = 0;
        local_368 = (void *)0x0;
        UE::Core::Private::Function::CheckCallable(*(void **)&param_1->OnCompleteDelegate);
        pcVar4 = *(code **)&param_1->OnCompleteDelegate;
        plVar16 = *(longlong **)&(param_1->OnCompleteDelegate).field_0x28;
        plVar17 = (longlong *)&(param_1->OnCompleteDelegate).field_0x10;
        if (plVar16 != (longlong *)0x0) {
          plVar17 = plVar16;
        }
        uVar10 = (**(code **)(*plVar17 + 8))();
        (*pcVar4)(uVar10,local_3a8,pFVar9);
        pFVar5 = (pFVar9->Data).AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
        local_360 = local_360 & 0xffffffff00000000;
        if (local_368 != (void *)0x0) {
          FMemory::Free(local_368);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_3a8,0,local_3a8._8_4_);
        iVar7 = SUB84(local_3a8._8_8_,4);
        local_3a8._8_8_ = local_3a8._8_8_ & 0xffffffff00000000;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_3a8,0,(int *)(local_3a8 + 0xc));
        }
        local_378 = 0xffffffff;
        local_374 = 0;
        local_380 = 0;
        if (0x80 < local_37c) {
          local_37c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_3a8 + 0x10),0);
        }
        if (local_388 != (void *)0x0) {
          FMemory::Free(local_388);
        }
        if ((FScriptContainerElement *)local_3a8._0_8_ == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free((void *)local_3a8._0_8_);
        return;
      }
      if ((param_1->Command).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"shaderpausebatching");
      if (iVar7 == 0) {
        FShaderPipelineCache::PauseBatching();
        pFVar9 = ::FString::FString(&local_518,L"");
        local_32c = 0x80;
        local_320 = 0;
        local_358._16_8_ = 0;
        uStack_340 = 0;
        local_310 = 0;
        local_358._0_8_ = (FScriptContainerElement *)0x0;
        local_358._8_8_ = 0;
        local_338 = (void *)0x0;
        local_330 = 0;
        local_328 = 0xffffffff;
        local_324 = 0;
        local_318 = (void *)0x0;
        UE::Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
        ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                      *)&param_1->OnCompleteDelegate,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_358,pFVar9);
        local_310 = local_310 & 0xffffffff00000000;
        if (local_318 != (void *)0x0) {
          FMemory::Free(local_318);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_358,0,local_358._8_4_);
        iVar7 = SUB84(local_358._8_8_,4);
        local_358._8_8_ = local_358._8_8_ & 0xffffffff00000000;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_358,0,(int *)(local_358 + 0xc));
        }
        local_328 = 0xffffffff;
        local_324 = 0;
        local_330 = 0;
        if (0x80 < local_32c) {
          local_32c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_358 + 0x10),0);
        }
        if (local_338 != (void *)0x0) {
          FMemory::Free(local_338);
        }
        if ((FScriptContainerElement *)local_358._0_8_ == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free((void *)local_358._0_8_);
        return;
      }
      if ((param_1->Command).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"getmemorybucket");
      if (iVar7 == 0) {
        pFVar9 = ::FString::FString(&local_508,L"");
        ::FString::FString(&local_618,L"bucket");
        FGenericPlatformMemory::GetMemorySizeBucket();
        ::FString::PrintfImpl(&local_628,L"%d");
        local_7e8.Key = &local_618;
        local_7e8.Value = &local_628;
        local_638._First = &local_7e8;
        local_638._Last = &local_7d8;
        TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
        TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)local_178,&local_638);
        UE::Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
        ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                      *)&param_1->OnCompleteDelegate,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_178,pFVar9);
        local_130 = 0;
        if ((void *)local_178._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_178._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_178);
        if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_628.Data.AllocatorInstance.Data);
        }
        if (local_618.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_618.Data.AllocatorInstance.Data);
        return;
      }
      if ((param_1->Command).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"console");
      if (iVar7 == 0) {
        pTVar21 = &param_1->Parameters;
        if (GEngine != (UEngine *)0x0) {
          ::FString::FString(&local_808,L"");
          FOutputDevice::FOutputDevice(&local_818);
          local_818._padding_ = (longlong)&___7FStringOutputDevice__6B_;
          local_818.bAutoEmitLineTerminator = false;
          pUVar11 = UEngine::GetDebugLocalPlayer(GEngine);
          local_838._padding_._4_4_ = 1;
          puVar1 = &(param_1->Parameters).field_0x10;
          local_838._padding_._0_4_ = 0;
          local_838.UnvisitedBitMask = 0xffffffff;
          local_838.CurrentBitIndex = 0;
          local_838.BaseBitIndex = 0;
          local_838.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if (*(int *)&(param_1->Parameters).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_838);
          }
          unique0x10001a75 =
               (TBitArray<FDefaultBitArrayAllocator> *)
               CONCAT44(local_838._padding_._4_4_,(undefined4)local_838._padding_);
          uStack_790 = CONCAT44(local_838.CurrentBitIndex,local_838.UnvisitedBitMask);
          local_788 = CONCAT44(local_838._28_4_,local_838.BaseBitIndex);
          local_5d0 = *(int *)&(param_1->Parameters).field_0x8 -
                      *(int *)&(param_1->Parameters).field_0x34;
          local_5f8._16_8_ = local_838.Array;
          uStack_780._4_4_ = uStack_5cc;
          uStack_780._0_4_ = local_5d0;
          local_798 = local_838.Array;
          local_7a8._0_8_ = pTVar21;
          local_5f8._0_8_ = pTVar21;
          local_5f8._8_8_ = unique0x10001a75;
          lStack_5e0 = uStack_790;
          lStack_5d8 = local_788;
          pTVar12 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_5f8,
                               (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                               *(int *)&(param_1->Parameters).field_0x28);
          local_868.Data._8_8_ = pTVar12->_padding_;
          FStack_858.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar12->Array;
          FStack_858.Data.ArrayNum = pTVar12->UnvisitedBitMask;
          FStack_858.Data.ArrayMax = pTVar12->CurrentBitIndex;
          lStack_848 = *(longlong *)&pTVar12->BaseBitIndex;
          local_840 = *(int *)&(param_1->Parameters).field_0x8 -
                      *(int *)&(param_1->Parameters).field_0x34;
          local_588._44_4_ = uStack_83c;
          local_588.InitialNum = local_840;
          local_868.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar21;
          local_588._padding_ = (longlong)pTVar21;
          local_588._padding_ = local_868.Data._8_8_;
          local_588._padding_ = (longlong)FStack_858.Data.AllocatorInstance.Data;
          local_588._padding_ = FStack_858.Data._8_8_;
          local_588._padding_ = lStack_848;
          bVar6 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!=
                            ((TRangedForConstIterator *)local_7a8,&local_588);
          if (bVar6) {
            do {
              pFVar9 = (FString *)(*(longlong *)local_7a8._0_8_ + (longlong)uStack_790._4_4_ * 0x28)
              ;
              ::FString::FString(&local_868,pFVar9);
              ::FString::FString(&FStack_858,pFVar9 + 1);
              if (pUVar11 == (ULocalPlayer *)0x0) {
                FVar14.Data = (FScriptContainerElement *)L"";
                if (local_868.Data.ArrayNum != 0) {
                  FVar14.Data = local_868.Data.AllocatorInstance.Data;
                }
                (**(code **)(GEngine->_padding_ + 8))
                          (&GEngine->_padding_,GWorld.World,FVar14.Data,&local_818);
              }
              else {
                FVar14.Data = (FScriptContainerElement *)L"";
                if (local_868.Data.ArrayNum != 0) {
                  FVar14.Data = local_868.Data.AllocatorInstance.Data;
                }
                pcVar4 = *(code **)(pUVar11->_padding_ + 8);
                uVar10 = (**(code **)(pUVar11->_padding_ + 0x180))(pUVar11);
                (*pcVar4)(&pUVar11->_padding_,uVar10,FVar14.Data,&local_818);
              }
              if ((TBitArray<FDefaultBitArrayAllocator> *)FStack_858.Data.AllocatorInstance.Data !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                FMemory::Free(FStack_858.Data.AllocatorInstance.Data);
              }
              if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_868.Data.AllocatorInstance.Data);
              }
              uStack_790 = CONCAT44(uStack_790._4_4_,(uint)uStack_790 & ~uStack_79c);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_7a8 + 8));
              bVar6 = TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForConstIterator::operator!=
                                ((TRangedForConstIterator *)local_7a8,&local_588);
            } while (bVar6);
          }
          pFVar9 = ::FString::FString(&local_4f8,L"");
          ::FString::FString(&local_778,L"output");
          local_7d8.Key = &local_778;
          local_7d8.Value = &local_808;
          local_608._First = &local_7d8;
          local_608._Last = &local_7c8;
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          ::
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_128,&local_608);
          UE::Core::Private::Function::
          TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
          ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                        *)&param_1->OnCompleteDelegate,
                       (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_128,pFVar9);
          local_e0 = 0;
          if ((void *)local_128._64_8_ != (void *)0x0) {
            FMemory::Free((void *)local_128._64_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_128);
          if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_778.Data.AllocatorInstance.Data);
          }
          FOutputDevice::~FOutputDevice(&local_818);
          if (local_808.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_808.Data.AllocatorInstance.Data);
          return;
        }
        local_9a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_9a8.ArrayNum = 0;
        local_9a8.ArrayMax = 0;
        TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
        ::GetKeys<TSizedDefaultAllocator<32>_>
                  ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)pTVar21,&local_9a8);
        if (((local_9a8.ArrayNum != 0) && (local_9a8.ArrayNum < 1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ::FString::PrintfImpl
                  (&local_5c8,L"GEngine does not exist yet, unable to execute console command (%s)")
        ;
        local_2d0 = 0;
        local_308._16_8_ = 0;
        uStack_2f0 = 0;
        local_2c0 = 0;
        local_308._0_8_ = (FScriptContainerElement *)0x0;
        local_308._8_8_ = 0;
        local_2e8 = (void *)0x0;
        local_2e0 = 0;
        local_2dc = 0x80;
        local_2d8 = 0xffffffff;
        local_2d4 = 0;
        local_2c8 = (void *)0x0;
        UE::Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
        ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                      *)&param_1->OnCompleteDelegate,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_308,&local_5c8);
        local_2c0 = local_2c0 & 0xffffffff00000000;
        if (local_2c8 != (void *)0x0) {
          FMemory::Free(local_2c8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_308,0,local_308._8_4_);
        iVar7 = SUB84(local_308._8_8_,4);
        local_308._8_8_ = local_308._8_8_ & 0xffffffff00000000;
        if (iVar7 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_308,0,(int *)(local_308 + 0xc));
        }
        local_2d8 = 0xffffffff;
        local_2d4 = 0;
        local_2e0 = 0;
        if (0x80 < local_2dc) {
          local_2dc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_308 + 0x10),0);
        }
        if (local_2e8 != (void *)0x0) {
          FMemory::Free(local_2e8);
        }
        if ((FScriptContainerElement *)local_308._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_308._0_8_);
        }
        DestructItems<FString,int>((FString *)local_9a8.AllocatorInstance.Data,local_9a8.ArrayNum);
        if (local_9a8.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_9a8.AllocatorInstance.Data);
        return;
      }
      if ((param_1->Command).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"setconfig");
      if (iVar7 != 0) {
        if ((param_1->Command).Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"getconfig");
        if (iVar7 == 0) {
          ::FString::FString(&local_718,L"file");
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&param_1->Parameters,&local_718);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_958.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_958.Data.ArrayNum = 0;
            local_958.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_958,(FString *)&pTVar13->field_0x10);
          }
          if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_718.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_708,L"section");
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&param_1->Parameters,&local_708);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_988.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_988.Data.ArrayNum = 0;
            local_988.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_988,(FString *)&pTVar13->field_0x10);
          }
          if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_708.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_6f8,L"key");
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&param_1->Parameters,&local_6f8);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_998.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_998.Data.ArrayNum = 0;
            local_998.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_998,(FString *)&pTVar13->field_0x10);
          }
          if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
          }
          pFVar9 = FEmbeddedCommunicationExec::GetConfigFromName(&local_958);
          ::FString::FString(&local_6c8,pFVar9);
          local_8f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_998.Data.ArrayNum != 0) {
            FVar14.Data = local_998.Data.AllocatorInstance.Data;
          }
          local_8f8.Data.ArrayNum = 0;
          local_8f8.Data.ArrayMax = 0;
          FVar20.Data = (FScriptContainerElement *)L"";
          if (local_988.Data.ArrayNum != 0) {
            FVar20.Data = local_988.Data.AllocatorInstance.Data;
          }
          bVar6 = FConfigCacheIni::GetString
                            (GConfig,(wchar_t *)FVar20.Data,(wchar_t *)FVar14.Data,&local_8f8,
                             &local_6c8);
          if (bVar6) {
            pFVar9 = ::FString::FString(&local_4d8,L"");
            ::FString::FString(&local_6d8,L"value");
            local_7c8.Key = &local_6d8;
            local_7c8.Value = &local_8f8;
            local_6e8._First = &local_7c8;
            local_6e8._Last = &local_7b8;
            TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::
            TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_d8,&local_6e8);
            UE::Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
            ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                          *)&param_1->OnCompleteDelegate,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_d8,pFVar9);
            local_90 = 0;
            if ((void *)local_d8._64_8_ != (void *)0x0) {
              FMemory::Free((void *)local_d8._64_8_);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_d8);
            if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
            }
          }
          else {
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_958.Data.ArrayNum != 0) {
              FVar14.Data = local_958.Data.AllocatorInstance.Data;
            }
            FVar20.Data = (FScriptContainerElement *)L"";
            if (local_998.Data.ArrayNum != 0) {
              FVar20.Data = local_998.Data.AllocatorInstance.Data;
            }
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_988.Data.ArrayNum != 0) {
              FVar19.Data = local_988.Data.AllocatorInstance.Data;
            }
            pFVar9 = ::FString::Printf<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                               (&local_4c8,
                                (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                                 )0x15187a380,(wchar_t *)FVar19.Data,(wchar_t *)FVar20.Data,
                                (wchar_t *)FVar14.Data);
            local_268._56_8_ = 0;
            local_268._16_8_ = 0;
            local_268._24_8_ = 0;
            local_220 = 0;
            local_268._0_8_ = 0;
            local_268._8_8_ = 0;
            local_268._32_8_ = 0;
            local_268._40_4_ = 0;
            local_268._44_4_ = 0x80;
            local_268._48_4_ = 0xffffffff;
            local_268._52_4_ = 0;
            local_228 = (void *)0x0;
            UE::Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
            ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                          *)&param_1->OnCompleteDelegate,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_268,pFVar9);
            local_220 = local_220 & 0xffffffff00000000;
            if (local_228 != (void *)0x0) {
              FMemory::Free(local_228);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_268);
          }
          if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
          }
          if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
          }
          if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_998.Data.AllocatorInstance.Data);
          }
          if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_988.Data.AllocatorInstance.Data);
          }
          if (local_958.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_958.Data.AllocatorInstance.Data);
          return;
        }
        if ((param_1->Command).Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"cvar");
        if (iVar7 == 0) {
          ::FString::FString(&local_6b8,L"name");
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&param_1->Parameters,&local_6b8);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_978.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_978.Data.ArrayNum = 0;
            local_978.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_978,(FString *)&pTVar13->field_0x10);
          }
          if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
          }
          pIVar15 = IConsoleManager::Get();
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_978.Data.ArrayNum != 0) {
            FVar14.Data = local_978.Data.AllocatorInstance.Data;
          }
          plVar16 = (longlong *)(**(code **)((longlong)*pIVar15 + 0xc0))(pIVar15,FVar14.Data,1);
          if (plVar16 == (longlong *)0x0) {
            ::FString::PrintfImpl(&local_5a8,L"CVar %s not found");
            local_218._56_8_ = 0;
            local_218._16_8_ = 0;
            local_218._24_8_ = 0;
            local_1d0 = 0;
            local_218._0_8_ = 0;
            local_218._8_8_ = 0;
            local_218._32_8_ = 0;
            local_218._40_4_ = 0;
            local_218._44_4_ = 0x80;
            local_218._48_4_ = 0xffffffff;
            local_218._52_4_ = 0;
            local_1d8 = (void *)0x0;
            UE::Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
            ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                          *)&param_1->OnCompleteDelegate,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_218,&local_5a8);
            local_1d0 = local_1d0 & 0xffffffff00000000;
            if (local_1d8 != (void *)0x0) {
              FMemory::Free(local_1d8);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_218);
          }
          else {
            pFVar9 = ::FString::FString(&local_4b8,L"");
            ::FString::FString(&local_698,L"value");
            local_7b8.Value = (FString *)(**(code **)(*plVar16 + 0xd8))(plVar16,local_5b8);
            local_7b8.Key = &local_698;
            local_6a8._First = &local_7b8;
            local_6a8._Last = (TPairInitializer<FString_const_&,FString_const_&> *)local_7a8;
            TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::
            TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      ((TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)local_88,&local_6a8);
            UE::Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
            ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                          *)&param_1->OnCompleteDelegate,
                         (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)local_88,pFVar9);
            local_40 = 0;
            if ((void *)local_88._64_8_ != (void *)0x0) {
              FMemory::Free((void *)local_88._64_8_);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_88);
            if (local_5b8[0] != (void *)0x0) {
              FMemory::Free(local_5b8[0]);
            }
            if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_698.Data.AllocatorInstance.Data);
            }
          }
          if (local_978.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_978.Data.AllocatorInstance.Data);
          return;
        }
        if ((param_1->Command).Data.ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(param_1->Command).Data.AllocatorInstance.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar18,L"shareurl");
        if (iVar7 == 0) {
          ::FString::FString(&local_688,L"url");
          pTVar21 = &param_1->Parameters;
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)pTVar21,&local_688);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_878.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_878.Data.ArrayNum = 0;
            local_878.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_878,(FString *)&pTVar13->field_0x10);
          }
          if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_688.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_678,L"description");
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)pTVar21,&local_678);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_8e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_8e8.Data.ArrayNum = 0;
            local_8e8.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_8e8,(FString *)&pTVar13->field_0x10);
          }
          if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_678.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_668,L"title");
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)pTVar21,&local_668);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_888.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_888.Data.ArrayNum = 0;
            local_888.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_888,(FString *)&pTVar13->field_0x10);
          }
          if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_668.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_658,L"x");
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)pTVar21,&local_658);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_938.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_938.Data.ArrayNum = 0;
            local_938.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_938,(FString *)&pTVar13->field_0x10);
          }
          if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_658.Data.AllocatorInstance.Data);
          }
          ::FString::FString(&local_648,L"y");
          pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)pTVar21,&local_648);
          if (pTVar13 == (TTuple<FString,FString> *)0x0) {
            local_968.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_968.Data.ArrayNum = 0;
            local_968.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_968,(FString *)&pTVar13->field_0x10);
          }
          if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_648.Data.AllocatorInstance.Data);
          }
          if ((1 < local_938.Data.ArrayNum) && (1 < local_968.Data.ArrayNum)) {
            _wtoi((wchar_t *)local_938.Data.AllocatorInstance.Data);
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_968.Data.ArrayNum != 0) {
              FVar14.Data = local_968.Data.AllocatorInstance.Data;
            }
            _wtoi((wchar_t *)FVar14.Data);
          }
          FText::FromString(&local_598,&local_8e8);
          if (local_598.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_598.TextData.Reference + 0x10))();
          }
          if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_968.Data.AllocatorInstance.Data);
          }
          if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_938.Data.AllocatorInstance.Data);
          }
          if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_888.Data.AllocatorInstance.Data);
          }
          if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
          }
          if (local_878.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_878.Data.AllocatorInstance.Data);
          return;
        }
        pFVar9 = ::FString::FString(&local_4a8,L"Unknown command");
        local_1c8._44_4_ = 0x80;
        local_1c8._56_8_ = 0;
        local_1c8._16_8_ = 0;
        local_1c8._24_8_ = 0;
        local_180 = 0;
        local_1c8._0_8_ = 0;
        local_1c8._8_8_ = 0;
        local_1c8._32_8_ = 0;
        local_1c8._40_4_ = 0;
        local_1c8._48_4_ = 0xffffffff;
        local_1c8._52_4_ = 0;
        local_188 = (void *)0x0;
        UE::Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
        ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                      *)&param_1->OnCompleteDelegate,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_1c8,pFVar9);
        local_180 = local_180 & 0xffffffff00000000;
        if (local_188 != (void *)0x0) {
          FMemory::Free(local_188);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_1c8);
        return;
      }
      ::FString::FString(&local_768,L"file");
      pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&param_1->Parameters,&local_768);
      if (pTVar13 == (TTuple<FString,FString> *)0x0) {
        local_8d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_8d8.Data.ArrayNum = 0;
        local_8d8.Data.ArrayMax = 0;
      }
      else {
        ::FString::FString(&local_8d8,(FString *)&pTVar13->field_0x10);
      }
      if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_758,L"section");
      pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&param_1->Parameters,&local_758);
      if (pTVar13 == (TTuple<FString,FString> *)0x0) {
        local_948.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_948.Data.ArrayNum = 0;
        local_948.Data.ArrayMax = 0;
      }
      else {
        ::FString::FString(&local_948,(FString *)&pTVar13->field_0x10);
      }
      if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_758.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_748,L"key");
      pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&param_1->Parameters,&local_748);
      if (pTVar13 == (TTuple<FString,FString> *)0x0) {
        local_908.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_908.Data.ArrayNum = 0;
        local_908.Data.ArrayMax = 0;
      }
      else {
        ::FString::FString(&local_908,(FString *)&pTVar13->field_0x10);
      }
      if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_738,L"value");
      pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&param_1->Parameters,&local_738);
      if (pTVar13 == (TTuple<FString,FString> *)0x0) {
        local_918.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_918.Data.ArrayNum = 0;
        local_918.Data.ArrayMax = 0;
      }
      else {
        ::FString::FString(&local_918,(FString *)&pTVar13->field_0x10);
      }
      if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_738.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_728,L"skipsave");
      pTVar13 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&param_1->Parameters,&local_728);
      if (pTVar13 == (TTuple<FString,FString> *)0x0) {
        local_928.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_928.Data.ArrayNum = 0;
        local_928.Data.ArrayMax = 0;
      }
      else {
        ::FString::FString(&local_928,(FString *)&pTVar13->field_0x10);
        FVar14.Data = local_928.Data.AllocatorInstance.Data;
        if (local_928.Data.ArrayNum != 0) goto LAB_147bc284f;
      }
      FVar14.Data = (FScriptContainerElement *)L"";
LAB_147bc284f:
      iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"true");
      if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_928.Data.AllocatorInstance.Data);
      }
      if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
      pFVar9 = FEmbeddedCommunicationExec::GetConfigFromName(&local_8d8);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_918.Data.ArrayNum != 0) {
        FVar14.Data = local_918.Data.AllocatorInstance.Data;
      }
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_908.Data.ArrayNum != 0) {
        FVar20.Data = local_908.Data.AllocatorInstance.Data;
      }
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_948.Data.ArrayNum != 0) {
        FVar19.Data = local_948.Data.AllocatorInstance.Data;
      }
      FConfigCacheIni::SetString
                (GConfig,(wchar_t *)FVar19.Data,(wchar_t *)FVar20.Data,(wchar_t *)FVar14.Data,pFVar9
                );
      if (iVar7 != 0) {
        FConfigCacheIni::Flush(GConfig,false,pFVar9);
      }
      pFVar9 = ::FString::FString(&local_4e8,L"");
      local_280 = 0;
      local_2b8._16_8_ = 0;
      uStack_2a0 = 0;
      local_270 = 0;
      local_2b8._0_8_ = (FScriptContainerElement *)0x0;
      local_2b8._8_8_ = 0;
      local_298 = (void *)0x0;
      local_290 = 0;
      local_28c = 0x80;
      local_288 = 0xffffffff;
      local_284 = 0;
      local_278 = (void *)0x0;
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,FString)>
                    *)&param_1->OnCompleteDelegate,
                   (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)local_2b8,pFVar9);
      local_270 = local_270 & 0xffffffff00000000;
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_2b8,0,local_2b8._8_4_);
      iVar7 = SUB84(local_2b8._8_8_,4);
      local_2b8._8_8_ = local_2b8._8_8_ & 0xffffffff00000000;
      if (iVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_2b8,0,(int *)(local_2b8 + 0xc));
      }
      local_288 = 0xffffffff;
      local_284 = 0;
      local_290 = 0;
      if (0x80 < local_28c) {
        local_28c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b8 + 0x10),0);
      }
      if (local_298 != (void *)0x0) {
        FMemory::Free(local_298);
      }
      if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2b8._0_8_);
      }
      if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_918.Data.AllocatorInstance.Data);
      }
      if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_908.Data.AllocatorInstance.Data);
      }
      if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_948.Data.AllocatorInstance.Data);
      }
      if (local_8d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
      return;
    }
    ::FString::FString(&local_8c8,L"requester");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_8c8.Data.ArrayNum != 0) {
      FVar14.Data = local_8c8.Data.AllocatorInstance.Data;
    }
    iVar7 = local_8c8.Data.ArrayNum + -1;
    if (local_8c8.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar14.Data);
    iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&param_1->Parameters,uVar8,&local_8c8);
    if ((iVar7 == -1) ||
       (lVar2 = *(longlong *)&param_1->Parameters + (longlong)iVar7 * 0x28, lVar2 == 0)) {
      local_9c8.Data = (FScriptContainerElement *)0x0;
      local_9c0 = 0;
    }
    else {
      local_9c8.Data = (FScriptContainerElement *)0x0;
      iVar7 = *(int *)(lVar2 + 0x18);
      pvVar3 = *(void **)(lVar2 + 0x10);
      local_9c0 = CONCAT44(local_9c0._4_4_,iVar7);
      if (iVar7 == 0) {
        local_9c0 = 0;
        local_9c0._0_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar7,0,&local_9c8,iVar7,(int *)((longlong)&local_9c0 + 4));
        memcpy(local_9c8.Data,pvVar3,(longlong)iVar7 * 2);
      }
      FVar14.Data = local_9c8.Data;
      if ((int)local_9c0 != 0) goto LAB_147bc190c;
    }
    FVar14.Data = (FScriptContainerElement *)L"";
LAB_147bc190c:
    ::FName::FName(&local_7f8,(wchar_t *)FVar14.Data);
    if (local_9c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9c8.Data);
    }
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
    FEmbeddedCommunication::AllowSleep(local_7f8);
    pFVar9 = ::FString::FString(&local_548,L"");
    local_448._16_8_ = 0;
    uStack_430 = 0;
    local_410 = 0;
    local_400 = 0;
    local_448._0_8_ = (FScriptContainerElement *)0x0;
    local_448._8_8_ = 0;
    local_428 = (void *)0x0;
    local_420 = 0;
    local_41c = 0x80;
    local_418 = 0xffffffff;
    local_414 = 0;
    local_408 = (void *)0x0;
    UE::Core::Private::Function::CheckCallable(*(void **)&param_1->OnCompleteDelegate);
    pcVar4 = *(code **)&param_1->OnCompleteDelegate;
    plVar16 = *(longlong **)&(param_1->OnCompleteDelegate).field_0x28;
    plVar17 = (longlong *)&(param_1->OnCompleteDelegate).field_0x10;
    if (plVar16 != (longlong *)0x0) {
      plVar17 = plVar16;
    }
    uVar10 = (**(code **)(*plVar17 + 8))();
    (*pcVar4)(uVar10,local_448,pFVar9);
    pFVar5 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    local_400 = local_400 & 0xffffffff00000000;
    if (local_408 != (void *)0x0) {
      FMemory::Free(local_408);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_448,0,local_448._8_4_);
    iVar7 = SUB84(local_448._8_8_,4);
    local_448._8_8_ = local_448._8_8_ & 0xffffffff00000000;
    if (iVar7 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_448,0,(int *)(local_448 + 0xc));
    }
    local_418 = 0xffffffff;
    local_414 = 0;
    local_420 = 0;
    if (0x80 < local_41c) {
      local_41c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_448 + 0x10),0);
    }
    if (local_428 != (void *)0x0) {
      FMemory::Free(local_428);
    }
    if ((FScriptContainerElement *)local_448._0_8_ == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free((void *)local_448._0_8_);
    return;
  }
  ::FString::FString(&local_8b8,L"requester");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_8b8.Data.ArrayNum != 0) {
    FVar14.Data = local_8b8.Data.AllocatorInstance.Data;
  }
  iVar7 = local_8b8.Data.ArrayNum + -1;
  if (local_8b8.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar14.Data);
  iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&param_1->Parameters,uVar8,&local_8b8);
  if ((iVar7 == -1) ||
     (lVar2 = *(longlong *)&param_1->Parameters + (longlong)iVar7 * 0x28, lVar2 == 0)) {
    local_9e8.Data = (FScriptContainerElement *)0x0;
    local_9e0 = 0;
LAB_147bc156b:
    FVar14.Data = (FScriptContainerElement *)L"";
  }
  else {
    local_9e8.Data = (FScriptContainerElement *)0x0;
    iVar7 = *(int *)(lVar2 + 0x18);
    pvVar3 = *(void **)(lVar2 + 0x10);
    local_9e0 = CONCAT44(local_9e0._4_4_,iVar7);
    if (iVar7 == 0) {
      local_9e0 = 0;
      local_9e0._0_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_9e8,iVar7,(int *)((longlong)&local_9e0 + 4));
      memcpy(local_9e8.Data,pvVar3,(longlong)iVar7 * 2);
    }
    FVar14.Data = local_9e8.Data;
    if ((int)local_9e0 == 0) goto LAB_147bc156b;
  }
  ::FName::FName(&local_7f0,(wchar_t *)FVar14.Data);
  if (local_9e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.Data);
  }
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_8a8,L"tickonly");
  iVar7 = local_8a8.Data.ArrayNum + -1;
  FVar14.Data = local_8a8.Data.AllocatorInstance.Data;
  if (local_8a8.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar14.Data = (FScriptContainerElement *)L"";
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar14.Data);
  iVar7 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&param_1->Parameters,uVar8,&local_8a8);
  if ((iVar7 == -1) ||
     (lVar2 = *(longlong *)&param_1->Parameters + (longlong)iVar7 * 0x28, lVar2 == 0)) {
    local_9d8.Data = (FScriptContainerElement *)0x0;
    local_9d0 = 0;
  }
  else {
    local_9d8.Data = (FScriptContainerElement *)0x0;
    iVar7 = *(int *)(lVar2 + 0x18);
    pvVar3 = *(void **)(lVar2 + 0x10);
    local_9d0 = CONCAT44(local_9d0._4_4_,iVar7);
    if (iVar7 == 0) {
      local_9d0 = 0;
      local_9d0._0_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,&local_9d8,iVar7,(int *)((longlong)&local_9d0 + 4));
      memcpy(local_9d8.Data,pvVar3,(longlong)iVar7 * 2);
    }
    FVar14.Data = local_9d8.Data;
    if ((int)local_9d0 != 0) goto LAB_147bc166c;
  }
  FVar14.Data = (FScriptContainerElement *)L"";
LAB_147bc166c:
  iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar14.Data,L"true");
  if (local_9d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d8.Data);
  }
  if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
  }
  FEmbeddedCommunication::KeepAwake(local_7f0,iVar7 != 0);
  pFVar9 = ::FString::FString(&local_558,L"");
  local_498._16_8_ = 0;
  uStack_480 = 0;
  local_460 = 0;
  local_450 = 0;
  local_498._0_8_ = (FScriptContainerElement *)0x0;
  local_498._8_8_ = 0;
  local_478 = (void *)0x0;
  local_470 = 0;
  local_46c = 0x80;
  local_468 = 0xffffffff;
  local_464 = 0;
  local_458 = (void *)0x0;
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->OnCompleteDelegate);
  pcVar4 = *(code **)&param_1->OnCompleteDelegate;
  plVar16 = *(longlong **)&(param_1->OnCompleteDelegate).field_0x28;
  plVar17 = (longlong *)&(param_1->OnCompleteDelegate).field_0x10;
  if (plVar16 != (longlong *)0x0) {
    plVar17 = plVar16;
  }
  uVar10 = (**(code **)(*plVar17 + 8))();
  (*pcVar4)(uVar10,local_498,pFVar9);
  pFVar5 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  local_450 = local_450 & 0xffffffff00000000;
  if (local_458 != (void *)0x0) {
    FMemory::Free(local_458);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_498,0,local_498._8_4_);
  iVar7 = SUB84(local_498._8_8_,4);
  local_498._8_8_ = local_498._8_8_ & 0xffffffff00000000;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_498,0,(int *)(local_498 + 0xc));
  }
  local_468 = 0xffffffff;
  local_464 = 0;
  local_470 = 0;
  if (0x80 < local_46c) {
    local_46c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_498 + 0x10),0);
  }
  if (local_478 != (void *)0x0) {
    FMemory::Free(local_478);
  }
  if ((FScriptContainerElement *)local_498._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_498._0_8_);
  }
  return;
}

// GetConfigFromName @ 147bdf350

FString * __cdecl FEmbeddedCommunicationExec::GetConfigFromName(FString *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"Game");
  if (iVar1 == 0) {
    return &GGameIni;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"Input");
  if (iVar1 == 0) {
    return &GInputIni;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"GameUserSettings");
  if (iVar1 == 0) {
    return &GGameUserSettingsIni;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"Scalability");
  if (iVar1 == 0) {
    return &GScalabilityIni;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,L"Hardware");
  pFVar3 = &GEngineIni;
  if (iVar1 == 0) {
    pFVar3 = &GHardwareIni;
  }
  return pFVar3;
}

