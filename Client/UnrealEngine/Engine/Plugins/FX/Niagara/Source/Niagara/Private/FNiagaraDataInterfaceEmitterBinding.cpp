// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticStruct @ 14915bfe0

UScriptStruct * __cdecl FNiagaraDataInterfaceEmitterBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceEmitterBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceEmitterBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding,
                         (UObject *)pUVar1,L"NiagaraDataInterfaceEmitterBinding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataInterfaceEmitterBinding.OuterSingleton;
}

// operator() @ 14916dbc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraDataInterfaceEmitterBinding::ResolveHandle'::__l27::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TStringView<wchar_t> local_18;
  
  iVar1 = (param_1->ResolvedDataInterfaces).ArrayNum;
  pFVar6 = (param_1->ResolvedDataInterfaces).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x50;
  if (pFVar6 != pFVar5) {
    while( true ) {
      if (*(longlong *)(pFVar6 + 0x40) == 0) {
        bVar4 = *(longlong *)this == 0;
      }
      else {
        bVar4 = *(longlong *)(pFVar6 + 0x40) == *(longlong *)this;
      }
      if (bVar4) break;
      pFVar6 = pFVar6 + 0x50;
      if (pFVar6 == pFVar5) {
        return;
      }
    }
    **(undefined1 **)((longlong)this + 8) = 1;
    uVar2 = *(undefined8 *)((longlong)this + 0x10);
    local_18.DataPtr =
         (wchar_t *)FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance.Data;
    local_18.Size = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum + -1;
    if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    bVar4 = FNiagaraVariableBase::IsInNameSpace(&local_18,*(FName *)(pFVar6 + 8));
    *(bool *)uVar2 = bVar4;
  }
  return;
}

// Resolve @ 14918b690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraEmitterInstance * __thiscall
FNiagaraDataInterfaceEmitterBinding::Resolve
          (FNiagaraDataInterfaceEmitterBinding *this,FNiagaraSystemInstance *param_1,
          UNiagaraDataInterface *param_2)

{
  UNiagaraSystem *this_00;
  UNiagaraScript *pUVar1;
  void *_Src;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  UNiagaraEmitter *pUVar8;
  FNiagaraEmitterInstance *pFVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  longlong lVar14;
  UNiagaraScript **ppUVar15;
  undefined1 auStackY_8e8 [32];
  ForAnyElementType local_8a8;
  undefined8 local_8a0;
  UNiagaraScript *local_898;
  UNiagaraScript *local_890;
  TStringBuilderBase<wchar_t> local_888;
  UNiagaraScript local_868 [2];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_8e8;
  if (this->BindingMode == Self) {
    pUVar7 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
    pUVar8 = (UNiagaraEmitter *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_2,pUVar7);
    if (pUVar8 == (UNiagaraEmitter *)0x0) {
      this_00 = param_1->System;
      local_8a8.Data = (FScriptContainerElement *)0x0;
      local_8a0 = 0;
      local_898 = UNiagaraSystem::GetSystemUpdateScript(this_00);
      local_890 = UNiagaraSystem::GetSystemSpawnScript(this_00);
      ppUVar15 = &local_898;
      do {
        pUVar1 = *ppUVar15;
        if (pUVar1 != (UNiagaraScript *)0x0) {
          iVar5 = (pUVar1->ResolvedDataInterfaces).ArrayNum;
          pFVar12 = (pUVar1->ResolvedDataInterfaces).AllocatorInstance.Data;
          if ((iVar5 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FNiagaraEmitterInstance *)(*pcVar2)();
            return pFVar9;
          }
          pFVar11 = pFVar12 + (longlong)iVar5 * 0x50;
          for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 0x50) {
            if (*(UNiagaraDataInterface **)(pFVar12 + 0x40) == (UNiagaraDataInterface *)0x0) {
              bVar4 = param_2 == (UNiagaraDataInterface *)0x0;
            }
            else {
              bVar4 = *(UNiagaraDataInterface **)(pFVar12 + 0x40) == param_2;
            }
            if (bVar4) {
              if ((FScriptContainerElement *)&local_8a8 != pFVar12 + 0x10) {
                iVar5 = *(int *)(pFVar12 + 0x18);
                _Src = *(void **)&pFVar12[0x10].field_0x0;
                local_8a0 = CONCAT44(local_8a0._4_4_,iVar5);
                if (((iVar5 != 0) || (local_8a0._4_4_ != 0)) &&
                   (UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,iVar5,local_8a0._4_4_,&local_8a8,iVar5,
                               (int *)((longlong)&local_8a0 + 4)), iVar5 != 0)) {
                  memcpy(local_8a8.Data,_Src,(longlong)iVar5 * 2);
                }
              }
              goto LAB_14918b866;
            }
          }
        }
        ppUVar15 = ppUVar15 + 1;
      } while ((TStringBuilderBase<wchar_t> *)ppUVar15 != &local_888);
LAB_14918b866:
      if (1 < (int)local_8a0) {
        iVar5 = (param_1->Emitters).ArrayNum;
        pFVar12 = (param_1->Emitters).AllocatorInstance.Data;
        if ((iVar5 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FNiagaraEmitterInstance *)(*pcVar2)();
          return pFVar9;
        }
        pFVar11 = pFVar12 + (longlong)iVar5 * 0x10;
        for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 0x10) {
          if (*(UNiagaraEmitterBase **)(*(longlong *)pFVar12 + 0x28) != (UNiagaraEmitterBase *)0x0)
          {
            pFVar10 = UNiagaraEmitterBase::GetUniqueEmitterName
                                (*(UNiagaraEmitterBase **)(*(longlong *)pFVar12 + 0x28));
            iVar5 = (pFVar10->Data).ArrayNum;
            if (iVar5 == (int)local_8a0) {
              if (iVar5 < 2) goto LAB_14918b949;
              iVar5 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                                 (wchar_t *)local_8a8.Data);
              bVar4 = iVar5 == 0;
            }
            else {
              bVar4 = (int)local_8a0 + iVar5 == 1;
            }
            if (bVar4) {
LAB_14918b949:
              pFVar9 = *(FNiagaraEmitterInstance **)pFVar12;
              if (local_8a8.Data == (FScriptContainerElement *)0x0) {
                return pFVar9;
              }
              FMemory::Free(local_8a8.Data);
              return pFVar9;
            }
          }
        }
      }
      if (local_8a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a8.Data);
      }
    }
    else {
      iVar5 = (param_1->Emitters).ArrayNum;
      pFVar12 = (param_1->Emitters).AllocatorInstance.Data;
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FNiagaraEmitterInstance *)(*pcVar2)();
        return pFVar9;
      }
      pFVar11 = pFVar12 + (longlong)iVar5 * 0x10;
      for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 0x10) {
        if (((*(FNiagaraEmitterInstance **)pFVar12)->VersionedEmitter).Emitter.field0_0x0.DebugPtr
            == pUVar8) {
          return *(FNiagaraEmitterInstance **)pFVar12;
        }
      }
    }
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar4) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  else if (this->EmitterName == (FName)0x0) {
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar4) && (2 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  else {
    local_888.Base = (wchar_t *)local_868;
    local_888.bIsDynamic = false;
    local_888.bIsExternal = false;
    local_888.CurPos = (wchar_t *)local_868;
    local_888.End = local_52;
    ::FName::ToString(&this->EmitterName,&local_888);
    pwVar3 = local_888.Base;
    iVar5 = (param_1->Emitters).ArrayNum;
    lVar14 = (longlong)local_888.CurPos - (longlong)local_888.Base;
    pFVar12 = (param_1->Emitters).AllocatorInstance.Data;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FNiagaraEmitterInstance *)(*pcVar2)();
      return pFVar9;
    }
    pFVar11 = pFVar12 + (longlong)iVar5 * 0x10;
    for (; pFVar12 != pFVar11; pFVar12 = pFVar12 + 0x10) {
      if (*(UNiagaraEmitterBase **)(*(longlong *)pFVar12 + 0x28) != (UNiagaraEmitterBase *)0x0) {
        pFVar10 = UNiagaraEmitterBase::GetUniqueEmitterName
                            (*(UNiagaraEmitterBase **)(*(longlong *)pFVar12 + 0x28));
        iVar13 = (pFVar10->Data).ArrayNum;
        iVar5 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar5 = 0;
        }
        iVar13 = (int)(lVar14 >> 1);
        if ((iVar13 == iVar5) &&
           ((((iVar13 == 0 || (iVar5 == 0)) ||
             (iVar6 = FGenericPlatformStricmp::Strnicmp
                                (pwVar3,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                                 (longlong)iVar5), iVar6 == 0)) && (iVar13 == iVar5)))) {
          pFVar9 = *(FNiagaraEmitterInstance **)pFVar12;
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
          return pFVar9;
        }
      }
    }
    bVar4 = FNiagaraUtilities::LogVerboseWarnings();
    if ((bVar4) && (2 < (byte)LogNiagara._0_1_)) {
      if (local_888.End < (wchar_t *)((longlong)(longlong *)local_888.CurPos + 2U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_888,1);
      }
      *(undefined2 *)(longlong *)local_888.CurPos = 0;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
  }
  return (FNiagaraEmitterInstance *)0x0;
}

// Resolve @ 14918bb20

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

UNiagaraEmitter * __thiscall
FNiagaraDataInterfaceEmitterBinding::Resolve
          (FNiagaraDataInterfaceEmitterBinding *this,UNiagaraDataInterface *param_1)

{
  UNiagaraEmitter *pUVar1;
  FNiagaraEmitterHandle *this_00;
  FVersionedNiagaraEmitter *pFVar2;
  FVersionedNiagaraEmitter local_28;
  
  this_00 = ResolveHandle(this,param_1);
  if (this_00 != (FNiagaraEmitterHandle *)0x0) {
    pFVar2 = FNiagaraEmitterHandle::GetInstance(this_00,&local_28);
    pUVar1 = (pFVar2->Emitter).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UNiagaraEmitter *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UNiagaraEmitter *)0x0;
}

// ResolveHandle @ 14918bb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraEmitterHandle * __thiscall
FNiagaraDataInterfaceEmitterBinding::ResolveHandle
          (FNiagaraDataInterfaceEmitterBinding *this,UNiagaraDataInterface *param_1)

{
  UNiagaraEmitter *pUVar1;
  UNiagaraScript *pUVar2;
  code *pcVar3;
  char *pcVar4;
  wchar_t *pwVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UClass *pUVar9;
  UNiagaraSystem *pUVar10;
  UNiagaraEmitter *pUVar11;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar12;
  FVersionedNiagaraEmitter *pFVar13;
  FVersionedNiagaraEmitterData *pFVar14;
  FNiagaraEmitterHandle *pFVar15;
  FString *pFVar16;
  longlong lVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FNiagaraEmitterHandle *pFVar21;
  int iVar22;
  ForAnyElementType FVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_9a8 [32];
  char local_968;
  char local_967;
  undefined1 local_966;
  undefined1 local_965;
  undefined1 local_964;
  undefined1 local_963;
  undefined1 local_962 [2];
  ForAnyElementType local_960;
  int local_958;
  int local_954;
  uint local_950;
  uint local_94c;
  FNiagaraEmitterHandle *local_948;
  UNiagaraDataInterface *local_938;
  char *local_930;
  char *local_928;
  FScriptContainerElement *local_918;
  UNiagaraDataInterface *local_910;
  FNiagaraEmitterHandle *local_908;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *local_900;
  UNiagaraSystem *local_8f8;
  TStringView<wchar_t> local_8f0;
  UNiagaraScript *local_8e0;
  UNiagaraScript *pUStack_8d8;
  FString local_8d0;
  FVersionedNiagaraEmitter local_8c0;
  FVersionedNiagaraEmitter local_8a8;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  local_910 = param_1;
  pUVar9 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  pUVar10 = (UNiagaraSystem *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar9);
  if (pUVar10 != (UNiagaraSystem *)0x0) {
    local_8f8 = pUVar10;
    if (this->BindingMode == Self) {
      pUVar9 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
      pUVar11 = (UNiagaraEmitter *)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar9);
      if (pUVar11 == (UNiagaraEmitter *)0x0) {
        local_900 = UNiagaraSystem::GetEmitterHandles(pUVar10);
        local_94c = local_900->ArrayNum;
        uVar24 = (ulonglong)(int)local_94c;
        pFVar21 = (FNiagaraEmitterHandle *)(local_900->AllocatorInstance).Data;
        pFVar15 = pFVar21 + uVar24;
        local_908 = pFVar15;
        while( true ) {
          local_948 = pFVar21;
          if (local_900->ArrayNum != (int)uVar24) {
            local_966 = 0;
            `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_966);
          }
          pUVar10 = local_8f8;
          if (pFVar21 == pFVar15) break;
          pFVar14 = FNiagaraEmitterHandle::GetEmitterData(pFVar21);
          bVar6 = FNiagaraEmitterHandle::GetIsEnabled(pFVar21);
          if ((bVar6) && (pFVar14 != (FVersionedNiagaraEmitterData *)0x0)) {
            local_928 = &local_967;
            local_930 = &local_968;
            local_968 = '\0';
            local_967 = '\0';
            local_938 = param_1;
            `FNiagaraDataInterfaceEmitterBinding::ResolveHandle'::__l27::<lambda_1>::operator()
                      (&local_938,(pFVar14->SpawnScriptProps).Script.field0_0x0.DebugPtr);
            `FNiagaraDataInterfaceEmitterBinding::ResolveHandle'::__l27::<lambda_1>::operator()
                      (&local_938,(pFVar14->UpdateScriptProps).Script.field0_0x0.DebugPtr);
            pUVar2 = (pFVar14->GPUComputeScript).field0_0x0.DebugPtr;
            if (pUVar2 != (UNiagaraScript *)0x0) {
              `FNiagaraDataInterfaceEmitterBinding::ResolveHandle'::__l27::<lambda_1>::operator()
                        (&local_938,pUVar2);
            }
            pcVar4 = local_928;
            local_950 = (pFVar14->EventHandlerScriptProps).ArrayNum;
            uVar24 = (ulonglong)(int)local_950;
            pFVar25 = (pFVar14->EventHandlerScriptProps).AllocatorInstance.Data;
            local_918 = pFVar25 + uVar24 * 0x58;
            pFVar19 = local_918;
LAB_14918bd42:
            if ((pFVar14->EventHandlerScriptProps).ArrayNum != (int)uVar24) {
              local_965 = 0;
              `TCheckedPointerIterator<FNiagaraEventScriptProperties_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_965);
            }
            if (pFVar25 != pFVar19) {
              iVar7 = *(int *)(*(longlong *)pFVar25 + 800);
              lVar20 = *(longlong *)(*(longlong *)pFVar25 + 0x318);
              if ((iVar7 < 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InCount >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xeb,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                pFVar15 = (FNiagaraEmitterHandle *)(*pcVar3)();
                return pFVar15;
              }
              lVar17 = (longlong)iVar7 * 0x50 + lVar20;
              for (; lVar20 != lVar17; lVar20 = lVar20 + 0x50) {
                if (*(UNiagaraDataInterface **)(lVar20 + 0x40) == (UNiagaraDataInterface *)0x0) {
                  bVar6 = param_1 == (UNiagaraDataInterface *)0x0;
                }
                else {
                  bVar6 = *(UNiagaraDataInterface **)(lVar20 + 0x40) == param_1;
                }
                if (bVar6) {
                  local_968 = '\x01';
                  local_8f0.DataPtr =
                       (wchar_t *)
                       FNiagaraConstants::EmitterNamespaceString.Data.AllocatorInstance.Data;
                  local_8f0.Size = FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum + -1;
                  if (FNiagaraConstants::EmitterNamespaceString.Data.ArrayNum == 0) {
                    local_8f0.Size = 0;
                  }
                  bVar6 = FNiagaraVariableBase::IsInNameSpace(&local_8f0,*(FName *)(lVar20 + 8));
                  pFVar19 = local_918;
                  uVar24 = (ulonglong)local_950;
                  pFVar25 = pFVar25 + 0x58;
                  *pcVar4 = bVar6;
                  goto LAB_14918bd42;
                }
              }
              uVar24 = (ulonglong)local_950;
              pFVar25 = pFVar25 + 0x58;
              pFVar19 = local_918;
              goto LAB_14918bd42;
            }
            pFVar21 = local_948;
            pFVar15 = local_908;
            param_1 = local_910;
            if (local_968 != '\0') {
              if (local_967 == '\0') {
                return (FNiagaraEmitterHandle *)0x0;
              }
              return local_948;
            }
          }
          pFVar21 = pFVar21 + 1;
          uVar24 = (ulonglong)local_94c;
        }
        local_8e0 = UNiagaraSystem::GetSystemSpawnScript(local_8f8);
        pUStack_8d8 = UNiagaraSystem::GetSystemUpdateScript(pUVar10);
        local_960.Data = (FScriptContainerElement *)0x0;
        local_958 = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,2,0,&local_960,2,&local_954);
        iVar7 = local_958;
        *(UNiagaraScript **)local_960.Data = local_8e0;
        *(UNiagaraScript **)(local_960.Data + 8) = pUStack_8d8;
        pFVar25 = local_960.Data + (longlong)local_958 * 8;
        FVar23.Data = local_960.Data;
        while( true ) {
          if (local_958 != iVar7) {
            local_964 = 0;
            `TCheckedPointerIterator<UNiagaraScript_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_964);
          }
          if (FVar23.Data == pFVar25) break;
          iVar18 = *(int *)(*(longlong *)FVar23.Data + 800);
          lVar20 = *(longlong *)(*(longlong *)FVar23.Data + 0x318);
          if ((iVar18 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pFVar15 = (FNiagaraEmitterHandle *)(*pcVar3)();
            return pFVar15;
          }
          lVar17 = (longlong)iVar18 * 0x50 + lVar20;
          for (; lVar20 != lVar17; lVar20 = lVar20 + 0x50) {
            if (*(UNiagaraDataInterface **)(lVar20 + 0x40) == (UNiagaraDataInterface *)0x0) {
              bVar6 = param_1 == (UNiagaraDataInterface *)0x0;
            }
            else {
              bVar6 = *(UNiagaraDataInterface **)(lVar20 + 0x40) == param_1;
            }
            if ((bVar6) && (1 < *(int *)(lVar20 + 0x18))) {
              pTVar12 = UNiagaraSystem::GetEmitterHandles(pUVar10);
              pFVar21 = (FNiagaraEmitterHandle *)(pTVar12->AllocatorInstance).Data;
              pFVar15 = pFVar21 + pTVar12->ArrayNum;
              goto joined_r0x00014918bfaa;
            }
          }
          FVar23.Data = FVar23.Data + 8;
        }
        if (local_960.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_960.Data);
        }
      }
      else {
        pTVar12 = UNiagaraSystem::GetEmitterHandles(pUVar10);
        iVar7 = pTVar12->ArrayNum;
        pFVar21 = (FNiagaraEmitterHandle *)(pTVar12->AllocatorInstance).Data;
        pFVar15 = pFVar21 + iVar7;
        while( true ) {
          if (pTVar12->ArrayNum != iVar7) {
            `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_963);
          }
          if (pFVar21 == pFVar15) break;
          pFVar13 = FNiagaraEmitterHandle::GetInstance(pFVar21,&local_8c0);
          pUVar1 = (pFVar13->Emitter).field0_0x0.DebugPtr;
          if ((pUVar1 != (UNiagaraEmitter *)0x0) && (pUVar1 == pUVar11)) {
            return pFVar21;
          }
          pFVar21 = pFVar21 + 1;
        }
      }
    }
    else if ((this->BindingMode == Other) && (this->EmitterName != (FName)0x0)) {
      local_888.Base = local_868;
      local_888.bIsDynamic = false;
      local_888.bIsExternal = false;
      local_888.CurPos = local_868;
      local_888.End = local_52;
      ::FName::ToString(&this->EmitterName,&local_888);
      pwVar5 = local_888.Base;
      lVar20 = (longlong)local_888.CurPos - (longlong)local_888.Base;
      pTVar12 = UNiagaraSystem::GetEmitterHandles(pUVar10);
      iVar7 = pTVar12->ArrayNum;
      pFVar21 = (FNiagaraEmitterHandle *)(pTVar12->AllocatorInstance).Data;
      pFVar15 = pFVar21 + iVar7;
      while( true ) {
        if (pTVar12->ArrayNum != iVar7) {
          `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_962);
        }
        if (pFVar21 == pFVar15) break;
        pFVar13 = FNiagaraEmitterHandle::GetInstance(pFVar21,&local_8a8);
        pUVar11 = (pFVar13->Emitter).field0_0x0.DebugPtr;
        if (pUVar11 != (UNiagaraEmitter *)0x0) {
          pFVar16 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)pUVar11);
          iVar22 = (pFVar16->Data).ArrayNum;
          iVar18 = iVar22 + -1;
          if (iVar22 == 0) {
            iVar18 = 0;
          }
          iVar22 = (int)(lVar20 >> 1);
          if (((iVar22 == iVar18) &&
              (((iVar22 == 0 || (iVar18 == 0)) ||
               (iVar8 = FGenericPlatformStricmp::Strnicmp
                                  (pwVar5,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,
                                   (longlong)iVar18), iVar8 == 0)))) && (iVar22 == iVar18)) {
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
            return pFVar21;
          }
        }
        pFVar21 = pFVar21 + 1;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    }
  }
  return (FNiagaraEmitterHandle *)0x0;
joined_r0x00014918bfaa:
  if (pFVar21 == pFVar15) {
    pFVar21 = (FNiagaraEmitterHandle *)0x0;
LAB_14918c00c:
    if (local_960.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_960.Data);
    }
    return pFVar21;
  }
  pFVar16 = FNiagaraEmitterHandle::GetUniqueInstanceName(pFVar21,&local_8d0);
  iVar7 = (pFVar16->Data).ArrayNum;
  if (iVar7 == *(int *)(lVar20 + 0x18)) {
    if (iVar7 < 2) {
      bVar6 = true;
    }
    else {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar16->Data).AllocatorInstance.Data,
                         *(wchar_t **)(lVar20 + 0x10));
      bVar6 = iVar7 == 0;
    }
  }
  else {
    bVar6 = *(int *)(lVar20 + 0x18) + iVar7 == 1;
  }
  if (local_8d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d0.Data.AllocatorInstance.Data);
  }
  if (bVar6) goto LAB_14918c00c;
  pFVar21 = pFVar21 + 1;
  goto joined_r0x00014918bfaa;
}

// ResolveHandle @ 14918c160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FNiagaraEmitterHandle * __thiscall
FNiagaraDataInterfaceEmitterBinding::ResolveHandle
          (FNiagaraDataInterfaceEmitterBinding *this,UNiagaraSystem *param_1,
          FNiagaraEmitterHandle *param_2)

{
  int iVar1;
  UNiagaraEmitter *this_00;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  int iVar5;
  FNiagaraEmitterHandle *pFVar6;
  TArray<FNiagaraEmitterHandle,TSizedDefaultAllocator<32>_> *pTVar7;
  FVersionedNiagaraEmitter *pFVar8;
  FString *pFVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  FNiagaraEmitterHandle *this_01;
  undefined1 auStack_8c8 [32];
  undefined1 local_8a8 [8];
  FVersionedNiagaraEmitter local_8a0;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_8c8;
  if ((param_1 == (UNiagaraSystem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerSystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceEmitterBinding.cpp"
                         ,0xc3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FNiagaraEmitterHandle *)(*pcVar2)();
    return pFVar6;
  }
  if (this->BindingMode != Self) {
    if ((this->BindingMode == Other) && (this->EmitterName != (FName)0x0)) {
      local_888.Base = local_868;
      local_888.bIsDynamic = false;
      local_888.bIsExternal = false;
      local_888.CurPos = local_868;
      local_888.End = local_52;
      ::FName::ToString(&this->EmitterName,&local_888);
      pwVar3 = local_888.Base;
      lVar12 = (longlong)local_888.CurPos - (longlong)local_888.Base;
      pTVar7 = UNiagaraSystem::GetEmitterHandles(param_1);
      iVar1 = pTVar7->ArrayNum;
      this_01 = (FNiagaraEmitterHandle *)(pTVar7->AllocatorInstance).Data;
      pFVar6 = this_01 + iVar1;
      while( true ) {
        if (pTVar7->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_8a8);
        }
        if (this_01 == pFVar6) break;
        pFVar8 = FNiagaraEmitterHandle::GetInstance(this_01,&local_8a0);
        this_00 = (pFVar8->Emitter).field0_0x0.DebugPtr;
        if (this_00 != (UNiagaraEmitter *)0x0) {
          pFVar9 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)this_00);
          iVar11 = (pFVar9->Data).ArrayNum;
          iVar10 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar10 = 0;
          }
          iVar11 = (int)(lVar12 >> 1);
          if (((iVar11 == iVar10) &&
              (((iVar11 == 0 || (iVar10 == 0)) ||
               (iVar5 = FGenericPlatformStricmp::Strnicmp
                                  (pwVar3,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                                   (longlong)iVar10), iVar5 == 0)))) && (iVar11 == iVar10)) {
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
            return this_01;
          }
        }
        this_01 = this_01 + 1;
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    }
    param_2 = (FNiagaraEmitterHandle *)0x0;
  }
  return param_2;
}

// ResolveUniqueName @ 14918c330

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FString * __thiscall
FNiagaraDataInterfaceEmitterBinding::ResolveUniqueName
          (FNiagaraDataInterfaceEmitterBinding *this,FString *__return_storage_ptr__,
          UNiagaraDataInterface *param_1)

{
  UNiagaraEmitter *this_00;
  FNiagaraEmitterHandle *this_01;
  FVersionedNiagaraEmitter *pFVar1;
  FString *pFVar2;
  FVersionedNiagaraEmitter local_28;
  
  this_01 = ResolveHandle(this,param_1);
  if (this_01 != (FNiagaraEmitterHandle *)0x0) {
    pFVar1 = FNiagaraEmitterHandle::GetInstance(this_01,&local_28);
    this_00 = (pFVar1->Emitter).field0_0x0.DebugPtr;
    if (this_00 != (UNiagaraEmitter *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar2 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)this_00);
      ::FString::FString(__return_storage_ptr__,pFVar2);
      return __return_storage_ptr__;
    }
  }
  if (this->BindingMode == Self) {
    ::FString::FString(__return_storage_ptr__,L"Self");
    return __return_storage_ptr__;
  }
  if (this->BindingMode == Other) {
    ::FName::ToString(&this->EmitterName,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

