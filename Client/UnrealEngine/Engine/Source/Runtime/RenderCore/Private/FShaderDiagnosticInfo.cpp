// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// FShaderDiagnosticInfo @ 145e419d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderDiagnosticInfo * __thiscall
FShaderDiagnosticInfo::FShaderDiagnosticInfo
          (FShaderDiagnosticInfo *this,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *this_00;
  FParameters *pFVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  byte bVar11;
  FShaderCompileJob *pFVar12;
  void *pvVar13;
  FShaderDiagnosticInfo *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  ulonglong uVar17;
  undefined ***pppuVar18;
  ForAnyElementType FVar19;
  FShaderCompileJob *pFVar20;
  FParameters FVar21;
  FShaderCompileJob *pFVar22;
  FParameters *pFVar23;
  ushort *puVar24;
  int iVar25;
  ForAnyElementType FVar26;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6 [2];
  uint local_f4;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  code *local_98;
  undefined **local_88;
  FName local_80;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  FName local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  (this->ErrorJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorJobs).ArrayNum = 0;
  (this->ErrorJobs).ArrayMax = 0;
  (this->UniqueErrors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueErrors).ArrayNum = 0;
  (this->UniqueErrors).ArrayMax = 0;
  (this->UniqueWarnings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueWarnings).ArrayNum = 0;
  (this->UniqueWarnings).ArrayMax = 0;
  (this->ErrorPlatforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ErrorPlatforms).ArrayNum = 0;
  (this->ErrorPlatforms).ArrayMax = 0;
  (this->TargetShaderPlatformString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetShaderPlatformString).Data.ArrayNum = 0;
  (this->TargetShaderPlatformString).Data.ArrayMax = 0;
  (this->UniqueErrorHashes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueErrorHashes).ArrayNum = 0;
  (this->UniqueErrorHashes).ArrayMax = 0;
  local_f4 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_f4;
  FVar26.Data = (param_1->AllocatorInstance).Data;
  FVar19.Data = FVar26.Data + uVar17 * 8;
  local_f0 = (FName)this;
  local_e8 = (FName)param_1;
  local_d0.Data.AllocatorInstance.Data = FVar19.Data;
LAB_145e41a68:
  do {
    pFVar22 = (FShaderCompileJob *)0x0;
    local_e0.Data.AllocatorInstance.Data = FVar26.Data;
    if (*(int *)((longlong)local_e8 + 8) != (int)uVar17) {
      local_f8 = 0;
      `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_f8);
    }
    pTVar9 = CVarShowShaderWarnings.Ref;
    if (FVar26.Data == FVar19.Data) {
      puVar24 = *(ushort **)((longlong)this + 0x30);
      this_00 = (FString *)((longlong)this + 0x40);
      iVar5 = *(int *)((longlong)this + 0x38);
      puVar2 = puVar24 + iVar5;
      while( true ) {
        if (*(int *)((longlong)this + 0x38) != iVar5) {
          local_f6[0] = 0;
          `TCheckedPointerIterator<enum_EShaderPlatform,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_f6);
        }
        if (puVar24 == puVar2) break;
        uVar4 = *puVar24;
        bVar11 = FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bContainsValidPlatformInfo;
        if (*(int *)((longlong)this + 0x48) < 2) {
          if ((bVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid(Platform)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                  ,0x9d,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            pFVar14 = (FShaderDiagnosticInfo *)(*pcVar7)();
            return pFVar14;
          }
          local_e8 = FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].Name;
          pFVar15 = ::FName::ToString(&local_e8,&local_d0);
          FVar26.Data = local_d0.Data.AllocatorInstance.Data;
          if (this_00 != pFVar15) {
            pFVar6 = (this_00->Data).AllocatorInstance.Data;
            if (pFVar6 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar6);
            }
            (this_00->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
            (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)((longlong)this + 0x48) = (pFVar15->Data).ArrayNum;
            *(int *)((longlong)this + 0x4c) = (pFVar15->Data).ArrayMax;
            (pFVar15->Data).ArrayNum = 0;
            (pFVar15->Data).ArrayMax = 0;
            FVar26.Data = local_d0.Data.AllocatorInstance.Data;
          }
        }
        else {
          if ((bVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid(Platform)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                  ,0x9d,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            pFVar14 = (FShaderDiagnosticInfo *)(*pcVar7)();
            return pFVar14;
          }
          local_f0 = FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].Name;
          pFVar15 = ::FName::ToString(&local_f0,&local_b0);
          pFVar16 = ::FString::FString(&local_c0,L", ");
          ::FString::ConcatFF(&local_e0,pFVar16,pFVar15);
          iVar25 = local_e0.Data.ArrayNum + -1;
          if (local_e0.Data.ArrayNum == 0) {
            iVar25 = 0;
          }
          ::FString::AppendChars(this_00,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar25);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          FVar26.Data = local_b0.Data.AllocatorInstance.Data;
          if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            FVar26.Data = local_b0.Data.AllocatorInstance.Data;
          }
        }
        if (FVar26.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar26.Data);
        }
        puVar24 = puVar24 + 1;
      }
      return (FShaderDiagnosticInfo *)(FName)this;
    }
    if ((*(FShaderCommonCompileJob **)FVar26.Data)->bSucceeded == '\0') {
      local_40 = (undefined ***)0x0;
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_&>
                    ::Call;
      local_50 = (FName)this;
      FShaderCommonCompileJob::ForEachSingleShaderJob
                (*(FShaderCommonCompileJob **)FVar26.Data,
                 (TFunction<void___cdecl(FShaderCompileJob_&)> *)local_68);
      if (local_68[0] != (code *)0x0) {
        pppuVar18 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar18 = local_40;
        }
        (*(code *)(*pppuVar18)[2])();
        FVar26.Data = FVar26.Data + 8;
        uVar17 = (ulonglong)local_f4;
        goto LAB_145e41a68;
      }
    }
    else {
      bVar10 = IsInParallelGameThread();
      if (bVar10) {
LAB_145e41b19:
        pFVar12 = pFVar22;
      }
      else {
        bVar10 = IsInGameThread();
        pFVar12 = (FShaderCompileJob *)&DAT_00000004;
        if (bVar10) goto LAB_145e41b19;
      }
      pTVar8 = CVarShaderDevelopmentMode.Ref;
      if (*(int *)((longlong)&pFVar12->_padding_ + (longlong)pTVar9->ShadowedValue) == 0) {
        bVar10 = IsInParallelGameThread();
        if (bVar10) {
LAB_145e41b40:
          pFVar12 = pFVar22;
        }
        else {
          bVar10 = IsInGameThread();
          pFVar12 = (FShaderCompileJob *)&DAT_00000004;
          if (bVar10) goto LAB_145e41b40;
        }
        FVar19.Data = local_d0.Data.AllocatorInstance.Data;
        if (*(int *)((longlong)&pFVar12->_padding_ + (longlong)pTVar8->ShadowedValue) == 0)
        goto LAB_145e41c9c;
      }
      pFVar12 = *(FShaderCompileJob **)FVar26.Data;
      local_70 = (undefined ***)0x0;
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_80 = (FName)this;
      cVar3 = (char)pFVar12->_padding_;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
                 ::Call;
      pFVar20 = pFVar22;
      if (cVar3 == '\0') {
        pFVar20 = pFVar12;
      }
      if (pFVar20 == (FShaderCompileJob *)0x0) {
        if (cVar3 == '\x01') {
          pFVar22 = pFVar12;
        }
        if (pFVar22 != (FShaderCompileJob *)0x0) {
          pFVar23 = (pFVar22->ShaderParameters).Object;
          iVar5 = *(int *)&(pFVar22->ShaderParameters).SharedReferenceCount.ReferenceController;
          pFVar1 = pFVar23 + iVar5;
          while( true ) {
            if (*(int *)&(pFVar22->ShaderParameters).SharedReferenceCount.ReferenceController !=
                iVar5) {
              local_f7 = 0;
              `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>_const_,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_f7);
            }
            FVar26.Data = local_e0.Data.AllocatorInstance.Data;
            this = (FShaderDiagnosticInfo *)local_f0;
            if (pFVar23 == pFVar1) break;
            FVar21 = (FParameters)0x0;
            if (*(char *)((longlong)*pFVar23 + 0x30) == '\0') {
              FVar21 = *pFVar23;
            }
            if (FVar21 == (FParameters)0x0) {
LAB_145e41c5e:
              pFVar23 = pFVar23 + 1;
            }
            else {
              UE::Core::Private::Function::CheckCallable(local_98);
              pcVar7 = local_98;
              pppuVar18 = &local_88;
              if (local_70 != (undefined ***)0x0) {
                pppuVar18 = local_70;
              }
              pvVar13 = (void *)(*(code *)(*pppuVar18)[1])();
              if (pcVar7 != UE::Core::Private::Function::
                            TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
                            ::Call) {
                (*pcVar7)();
                goto LAB_145e41c5e;
              }
              `FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>::operator()
                        (pvVar13,(FShaderCompileJob *)FVar21);
              pFVar23 = pFVar23 + 1;
            }
          }
        }
      }
      else {
        UE::Core::Private::Function::CheckCallable
                  (UE::Core::Private::Function::
                   TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
                   ::Call);
        pcVar7 = local_98;
        pppuVar18 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar18 = local_70;
        }
        pvVar13 = (void *)(*(code *)(*pppuVar18)[1])();
        if (pcVar7 == UE::Core::Private::Function::
                      TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
                      ::Call) {
          `FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>::operator()(pvVar13,pFVar20);
        }
        else {
          (*pcVar7)();
        }
      }
      FVar19.Data = local_d0.Data.AllocatorInstance.Data;
      if (local_98 != (code *)0x0) {
        pppuVar18 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar18 = local_70;
        }
        (*(code *)(*pppuVar18)[2])();
        FVar19.Data = local_d0.Data.AllocatorInstance.Data;
      }
    }
LAB_145e41c9c:
    FVar26.Data = FVar26.Data + 8;
    uVar17 = (ulonglong)local_f4;
  } while( true );
}

// operator() @ 145e48180

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>::operator()
          (void *this,FShaderCompileJob *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType *pFVar8;
  EShaderPlatform local_res8 [4];
  uint local_58 [2];
  FString local_50;
  FString local_40;
  
  local_res8[0] = (EShaderPlatform)((param_1->Input).Target.field0_0x0.Packed >> 4);
  TArray<enum_EShaderPlatform,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EShaderPlatform>
            ((void *)(*(longlong *)this + 0x30),local_res8);
  if ((param_1->Output).Errors.ArrayNum == 0) {
    GetSingleJobCompilationDump(&local_40,param_1);
    ::FString::PrintfImpl(&local_50,L"Internal Error!\n\t%s");
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    lVar2 = *(longlong *)this;
    if (((*(FString **)(lVar2 + 0x10) <= &local_50) &&
        (&local_50 < *(FString **)(lVar2 + 0x10) + *(int *)(lVar2 + 0x1c))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)(lVar2 + 0x18);
    if (iVar7 == *(int *)(lVar2 + 0x1c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(lVar2 + 0x10),(int *)(lVar2 + 0x1c));
    }
    iVar5 = local_50.Data.ArrayNum;
    FVar4.Data = local_50.Data.AllocatorInstance.Data;
    *(int *)(lVar2 + 0x18) = iVar7 + 1;
    pFVar8 = (ForAnyElementType *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar7 * 0x10);
    pFVar8->Data = (FScriptContainerElement *)0x0;
    piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
    *(int *)&pFVar8[1].Data = local_50.Data.ArrayNum;
    if (local_50.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50.Data.ArrayNum,0,pFVar8,local_50.Data.ArrayNum,piVar1);
      memcpy(pFVar8->Data,FVar4.Data,(longlong)iVar5 * 2);
    }
    lVar2 = *(longlong *)this;
    iVar7 = local_50.Data.ArrayNum + -1;
    FVar4.Data = local_50.Data.AllocatorInstance.Data;
    if (local_50.Data.ArrayNum == 0) {
      iVar7 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    local_58[0] = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar4.Data);
    if (((*(uint **)(lVar2 + 0x50) <= local_58) &&
        (local_58 < *(uint **)(lVar2 + 0x50) + *(int *)(lVar2 + 0x5c))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = *(int *)(lVar2 + 0x58);
    if (iVar7 == *(int *)(lVar2 + 0x5c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)(lVar2 + 0x50),(int *)(lVar2 + 0x5c));
    }
    *(int *)(lVar2 + 0x58) = iVar7 + 1;
    *(uint *)(*(longlong *)(lVar2 + 0x50) + (longlong)iVar7 * 4) = local_58[0];
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = FShaderDiagnosticInfo::AddAndProcessErrorsForFailedJobFiltered
                    (*(FShaderDiagnosticInfo **)this,param_1,L"error");
  if (iVar7 == 0) {
    FShaderDiagnosticInfo::AddAndProcessErrorsForFailedJobFiltered
              (*(FShaderDiagnosticInfo **)this,param_1,(wchar_t *)0x0);
  }
  return;
}

// operator() @ 145e48450

/* WARNING: Removing unreachable block (ram,0x000145e48561) */
/* WARNING: Removing unreachable block (ram,0x000145e48569) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>::operator()
          (void *this,FShaderCompileJob *param_1)

{
  EShaderTypeForDynamicCast EVar1;
  int iVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  FString *pFVar6;
  FShaderCompilerError *this_00;
  FShaderCompilerError *pFVar7;
  undefined4 local_res10 [2];
  FString local_58;
  FString local_48 [2];
  
  pTVar3 = CVarShaderWarningsFilter.Ref;
  local_res10[0] = 0;
  EVar1 = ((param_1->Key).ShaderType)->ShaderTypeForDynamicCast;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  iVar2 = *(int *)((longlong)pTVar3->ShadowedValue + lVar5);
  if ((iVar2 == 0) || ((iVar2 == 1 && (EVar1 != Global)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (((param_1->_padding_ & 2) != 0) && (!bVar4)) {
    this_00 = (FShaderCompilerError *)(param_1->Output).Errors.AllocatorInstance.Data;
    iVar2 = (param_1->Output).Errors.ArrayNum;
    pFVar7 = this_00 + iVar2;
    while( true ) {
      if ((param_1->Output).Errors.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FShaderCompilerError_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar7) break;
      lVar5 = *(longlong *)this;
      pFVar6 = FShaderCompilerError::GetErrorStringWithLineMarker(this_00,local_48);
      local_58.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString>
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x20),&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 1;
    }
  }
  return;
}

// AddAndProcessErrorsForFailedJobFiltered @ 145e49ce0

/* WARNING: Removing unreachable block (ram,0x000145e4a64a) */
/* WARNING: Removing unreachable block (ram,0x000145e49de8) */
/* WARNING: Removing unreachable block (ram,0x000145e49df8) */
/* WARNING: Removing unreachable block (ram,0x000145e4a46e) */
/* WARNING: Removing unreachable block (ram,0x000145e4a47e) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FShaderDiagnosticInfo::AddAndProcessErrorsForFailedJobFiltered
          (FShaderDiagnosticInfo *this,FShaderCompileJob *param_1,wchar_t *param_2)

{
  int *piVar1;
  FVertexFactoryType *pFVar2;
  FShaderType *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FString *pFVar11;
  size_t sVar12;
  FShaderCompilerError *pFVar13;
  IFileManager *pIVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  FShaderCompilerError *pFVar22;
  int iVar23;
  undefined1 local_198 [4];
  uint local_194;
  int local_190;
  uint local_18c;
  FString local_188;
  FString local_178;
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> local_168;
  FString local_158;
  longlong local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FShaderCompileJob *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  bVar5 = false;
  iVar10 = 0;
  local_190 = 0;
  iVar9 = (param_1->Output).Errors.ArrayNum;
  bVar7 = false;
  local_18c = 0;
  if (0 < iVar9) {
    local_148 = 0;
    do {
      lVar21 = local_148;
      uVar19 = local_18c;
      uVar8 = 0;
      if ((int)local_18c < iVar9) {
        uVar8 = ~local_18c >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      pFVar22 = (FShaderCompilerError *)((param_1->Output).Errors.AllocatorInstance.Data + lVar21);
      pFVar11 = FShaderCompilerError::GetErrorStringWithLineMarker(pFVar22,&local_c8);
      local_158.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_158.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (((byte)LogShaders._0_1_ < 5) && (param_2 != (wchar_t *)0x0)) {
        sVar12 = wcslen(param_2);
        iVar9 = ::FString::Find(&pFVar22->StrippedErrorMessage,param_2,(int)sVar12,IgnoreCase,
                                FromStart,-1);
        if (iVar9 != -1) goto LAB_145e49e42;
      }
      else {
LAB_145e49e42:
        FShaderCompilerError::ExtractSourceLocation(pFVar22);
        if ((pFVar22->ErrorVirtualFilePath).Data.ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
        }
        iVar9 = FGenericPlatformStricmp::Stricmp(pwVar20,L"/Engine/Generated/Material.ush");
        if (iVar9 == 0) {
          ::FString::operator=((FString *)pFVar22,L"/Engine/Private/MaterialTemplate.ush");
        }
        else {
          iVar9 = ::FString::Find((FString *)pFVar22,L"memory",6,IgnoreCase,FromStart,-1);
          if (iVar9 == -1) {
            if ((pFVar22->ErrorVirtualFilePath).Data.ArrayNum == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)(pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp(pwVar20,L"/Engine/Generated/VertexFactory.ush")
            ;
            if (iVar9 == 0) {
              if (((param_1->Key).VFType == (FVertexFactoryType *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CurrentJob.Key.VFType",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderDiagnostics.cpp"
                                     ,0x46,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                iVar9 = (*pcVar4)();
                return iVar9;
              }
              pFVar13 = (FShaderCompilerError *)
                        ::FString::FString(&local_a8,((param_1->Key).VFType)->ShaderFilename);
              FVar15.Data = local_a8.Data.AllocatorInstance.Data;
              if (pFVar22 != pFVar13) {
                pFVar18 = (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
                if (pFVar18 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar18);
                }
                (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data =
                     (pFVar13->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
                (pFVar13->ErrorVirtualFilePath).Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                (pFVar22->ErrorVirtualFilePath).Data.ArrayNum =
                     (pFVar13->ErrorVirtualFilePath).Data.ArrayNum;
                (pFVar22->ErrorVirtualFilePath).Data.ArrayMax =
                     (pFVar13->ErrorVirtualFilePath).Data.ArrayMax;
                (pFVar13->ErrorVirtualFilePath).Data.ArrayNum = 0;
                (pFVar13->ErrorVirtualFilePath).Data.ArrayMax = 0;
                FVar15.Data = local_a8.Data.AllocatorInstance.Data;
              }
            }
            else {
              if ((pFVar22->ErrorVirtualFilePath).Data.ArrayNum == 0) {
                pwVar20 = L"";
              }
              else {
                pwVar20 = (wchar_t *)(pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
              }
              iVar9 = FGenericPlatformStricmp::Stricmp
                                (pwVar20,L"/Engine/Generated/VertexFactoryFwd.ush");
              if (iVar9 == 0) {
                if (((param_1->Key).VFType == (FVertexFactoryType *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("CurrentJob.Key.VFType",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderDiagnostics.cpp"
                                       ,0x4c,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar9 = (*pcVar4)();
                  return iVar9;
                }
                if (((((param_1->Key).VFType)->Flags & IncludesFwdShader) == None) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("CurrentJob.Key.VFType->IncludesFwdShaderFile()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderDiagnostics.cpp"
                                       ,0x4d,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar9 = (*pcVar4)();
                  return iVar9;
                }
                pFVar2 = (param_1->Key).VFType;
                if ((pFVar2->ShaderFwdFilename).Data.ArrayNum == 0) {
                  pwVar20 = L"";
                }
                else {
                  pwVar20 = (wchar_t *)(pFVar2->ShaderFwdFilename).Data.AllocatorInstance.Data;
                }
                pFVar13 = (FShaderCompilerError *)::FString::FString(&local_98,pwVar20);
                FVar15.Data = local_98.Data.AllocatorInstance.Data;
                if (pFVar22 != pFVar13) {
                  pFVar18 = (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
                  if (pFVar18 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar18);
                  }
                  (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data =
                       (pFVar13->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
                  (pFVar13->ErrorVirtualFilePath).Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  (pFVar22->ErrorVirtualFilePath).Data.ArrayNum =
                       (pFVar13->ErrorVirtualFilePath).Data.ArrayNum;
                  (pFVar22->ErrorVirtualFilePath).Data.ArrayMax =
                       (pFVar13->ErrorVirtualFilePath).Data.ArrayMax;
                  (pFVar13->ErrorVirtualFilePath).Data.ArrayNum = 0;
                  (pFVar13->ErrorVirtualFilePath).Data.ArrayMax = 0;
                  FVar15.Data = local_98.Data.AllocatorInstance.Data;
                }
              }
              else {
                if ((pFVar22->ErrorVirtualFilePath).Data.ArrayNum == 0) {
                  pwVar20 = L"";
                }
                else {
                  pwVar20 = (wchar_t *)(pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
                }
                iVar9 = FGenericPlatformStricmp::Stricmp(pwVar20,L"");
                if ((iVar9 != 0) ||
                   (pFVar3 = (param_1->Key).ShaderType, pFVar3 == (FShaderType *)0x0))
                goto LAB_145e4a120;
                pFVar13 = (FShaderCompilerError *)
                          ::FString::FString(&local_88,pFVar3->SourceFilename);
                FVar15.Data = local_88.Data.AllocatorInstance.Data;
                if (pFVar22 != pFVar13) {
                  pFVar18 = (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
                  if (pFVar18 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar18);
                  }
                  (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data =
                       (pFVar13->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
                  (pFVar13->ErrorVirtualFilePath).Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  (pFVar22->ErrorVirtualFilePath).Data.ArrayNum =
                       (pFVar13->ErrorVirtualFilePath).Data.ArrayNum;
                  (pFVar22->ErrorVirtualFilePath).Data.ArrayMax =
                       (pFVar13->ErrorVirtualFilePath).Data.ArrayMax;
                  (pFVar13->ErrorVirtualFilePath).Data.ArrayNum = 0;
                  (pFVar13->ErrorVirtualFilePath).Data.ArrayMax = 0;
                  FVar15.Data = local_88.Data.AllocatorInstance.Data;
                }
              }
            }
          }
          else {
            if (((param_1->Key).ShaderType == (FShaderType *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurrentJob.Key.ShaderType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderDiagnostics.cpp"
                                   ,0x3d,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              iVar9 = (*pcVar4)();
              return iVar9;
            }
            pFVar13 = (FShaderCompilerError *)
                      ::FString::FString(&local_b8,((param_1->Key).ShaderType)->SourceFilename);
            FVar15.Data = local_b8.Data.AllocatorInstance.Data;
            if (pFVar22 != pFVar13) {
              pFVar18 = (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
              if (pFVar18 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar18);
              }
              (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data =
                   (pFVar13->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
              (pFVar13->ErrorVirtualFilePath).Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              (pFVar22->ErrorVirtualFilePath).Data.ArrayNum =
                   (pFVar13->ErrorVirtualFilePath).Data.ArrayNum;
              (pFVar22->ErrorVirtualFilePath).Data.ArrayMax =
                   (pFVar13->ErrorVirtualFilePath).Data.ArrayMax;
              (pFVar13->ErrorVirtualFilePath).Data.ArrayNum = 0;
              (pFVar13->ErrorVirtualFilePath).Data.ArrayMax = 0;
              FVar15.Data = local_b8.Data.AllocatorInstance.Data;
            }
          }
          if (FVar15.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar15.Data);
          }
        }
LAB_145e4a120:
        iVar9 = 0;
        if (local_158.Data.ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          iVar9 = local_158.Data.ArrayNum + -1;
          pwVar20 = (wchar_t *)local_158.Data.AllocatorInstance.Data;
        }
        local_194 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar20);
        pFVar17 = (this->UniqueErrorHashes).AllocatorInstance.Data;
        pFVar18 = pFVar17 + (longlong)(this->UniqueErrorHashes).ArrayNum * 4;
        for (; pFVar17 != pFVar18; pFVar17 = pFVar17 + 4) {
          if (*(uint *)pFVar17 == local_194) goto LAB_145e4a6b2;
        }
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        if ((GIsBuildMachine == false) && (!bVar5)) {
          iVar9 = (param_1->Input).DumpDebugInfoPath.Data.ArrayNum;
          iVar10 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar10 = 0;
          }
          if (0 < iVar10) {
            if (iVar9 == 0) {
              pwVar20 = L"";
            }
            else {
              pwVar20 = (wchar_t *)(param_1->Input).DumpDebugInfoPath.Data.AllocatorInstance.Data;
            }
            pIVar14 = IFileManager::Get();
            (**(code **)((longlong)*pIVar14 + 0x100))(pIVar14,&local_110,pwVar20);
            FPaths::MakePlatformFilename(&local_110);
            ::FString::PrintfImpl(&local_f8,L"Shader debug info dumped to: \"%s\"\n\n");
            iVar9 = local_f8.Data.ArrayNum + -1;
            if (local_f8.Data.ArrayNum == 0) {
              iVar9 = 0;
            }
            ::FString::AppendChars(&local_140,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar9)
            ;
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            bVar7 = true;
            if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_110.Data.AllocatorInstance.Data);
            }
          }
        }
        bVar5 = bVar7;
        local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.ArrayNum = 0;
        local_168.ArrayMax = 0;
        if (((pFVar22->ErrorVirtualFilePath).Data.ArrayNum < 2) ||
           (*(short *)(pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data != 0x2f)) {
          local_178.Data.ArrayNum = (pFVar22->ErrorVirtualFilePath).Data.ArrayNum;
          lVar21 = (longlong)local_178.Data.ArrayNum;
          pFVar18 = (pFVar22->ErrorVirtualFilePath).Data.AllocatorInstance.Data;
          local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_178.Data.ArrayNum == 0) {
            local_178.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_178.Data.ArrayNum,0,(ForAnyElementType *)&local_178,
                       local_178.Data.ArrayNum,&local_178.Data.ArrayMax);
            memcpy(local_178.Data.AllocatorInstance.Data,pFVar18,lVar21 * 2);
          }
        }
        else {
          GetShaderSourceFilePath(&local_178,(FString *)pFVar22,&local_168);
        }
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_178.Data.ArrayNum != 0) {
          FVar15.Data = local_178.Data.AllocatorInstance.Data;
        }
        pIVar14 = IFileManager::Get();
        (**(code **)((longlong)*pIVar14 + 0x100))(pIVar14,&local_130,FVar15.Data);
        FPaths::MakePlatformFilename(&local_130);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        pFVar18 = (FScriptContainerElement *)&u_0;
        if (1 < (pFVar22->ErrorLineString).Data.ArrayNum) {
          pFVar18 = (pFVar22->ErrorLineString).Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_120,(wchar_t *)pFVar18);
        if ((param_1->Key).ShaderType == (FShaderType *)0x0) {
          ::FString::PrintfImpl(&local_d8,L"%s(%s): ");
          iVar9 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar9 = 0;
          }
          ::FString::AppendChars(&local_140,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar9);
          FVar15.Data = local_d8.Data.AllocatorInstance.Data;
        }
        else {
          ::FString::PrintfImpl(&local_e8,L"%s(%s): Shader %s, Permutation %d, VF %s:\n\t");
          iVar9 = local_e8.Data.ArrayNum + -1;
          if (local_e8.Data.ArrayNum == 0) {
            iVar9 = 0;
          }
          ::FString::AppendChars(&local_140,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar9);
          FVar15.Data = local_e8.Data.AllocatorInstance.Data;
        }
        if (FVar15.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar15.Data);
        }
        iVar9 = local_168.ArrayNum;
        uVar16 = (ulonglong)local_168.ArrayNum;
        pFVar22 = (FShaderCompilerError *)(local_168.AllocatorInstance.Data + uVar16 * 0x50);
        FVar15.Data = local_168.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar16 != iVar9) {
            local_198[0] = 0;
            `TCheckedPointerIterator<FShaderCompilerError,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_198);
          }
          if ((FShaderCompilerError *)FVar15.Data == pFVar22) break;
          pFVar11 = FShaderCompilerError::GetErrorStringWithLineMarker
                              ((FShaderCompilerError *)FVar15.Data,local_78);
          pFVar18 = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar10 = (pFVar11->Data).ArrayNum;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
          if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
          ::FString::AppendChar(&local_158,L'\n');
          iVar23 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar23 = 0;
          }
          ::FString::AppendChars(&local_158,(wchar_t *)pFVar18,iVar23);
          if (pFVar18 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar18);
          }
          uVar16 = local_168._8_8_ & 0xffffffff;
          FVar15.Data = FVar15.Data + 0x50;
        }
        pFVar18 = (this->UniqueErrorHashes).AllocatorInstance.Data;
        if (((pFVar18 <= (FScriptContainerElement *)&local_194) &&
            ((FScriptContainerElement *)&local_194 <
             pFVar18 + (longlong)(this->UniqueErrorHashes).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        iVar9 = (this->UniqueErrorHashes).ArrayNum;
        piVar1 = &(this->UniqueErrorHashes).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->UniqueErrorHashes).AllocatorInstance,piVar1);
        }
        (this->UniqueErrorHashes).ArrayNum = iVar9 + 1;
        *(uint *)((this->UniqueErrorHashes).AllocatorInstance.Data + (longlong)iVar9 * 4) =
             local_194;
        ::FString::ConcatFF(&local_188,&local_140,&local_158);
        pFVar18 = (this->UniqueErrors).AllocatorInstance.Data;
        if (((pFVar18 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 <
             pFVar18 + (longlong)(this->UniqueErrors).ArrayMax * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        iVar9 = (this->UniqueErrors).ArrayNum;
        piVar1 = &(this->UniqueErrors).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->UniqueErrors).AllocatorInstance,piVar1);
        }
        (this->UniqueErrors).ArrayNum = iVar9 + 1;
        pFVar18 = (this->UniqueErrors).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar18 = 0;
        *(FScriptContainerElement **)pFVar18 = local_188.Data.AllocatorInstance.Data;
        *(int *)(pFVar18 + 8) = local_188.Data.ArrayNum;
        *(int *)(pFVar18 + 0xc) = local_188.Data.ArrayMax;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100 = param_1;
        TArray<FShaderCompileJob_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FShaderCompileJob_*>
                  (&this->ErrorJobs,&local_100);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        DestructItems<FShaderCompilerError,int>
                  ((FShaderCompilerError *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
        if ((FShaderCompilerError *)local_168.AllocatorInstance.Data != (FShaderCompilerError *)0x0)
        {
          FMemory::Free(local_168.AllocatorInstance.Data);
        }
        bVar7 = bVar5;
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
LAB_145e4a6b2:
        local_190 = local_190 + 1;
        uVar19 = local_18c;
      }
      iVar10 = local_190;
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      local_148 = local_148 + 0x50;
      local_18c = uVar19 + 1;
      iVar9 = (param_1->Output).Errors.ArrayNum;
    } while ((int)local_18c < iVar9);
  }
  return iVar10;
}

// AddAndProcessErrorsForJob @ 145e4a710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderDiagnosticInfo::AddAndProcessErrorsForJob
          (FShaderDiagnosticInfo *this,FShaderCommonCompileJob *param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FShaderDiagnosticInfo *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FShaderDiagnosticInfo::AddAndProcessErrorsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_&>
                ::Call;
  local_30 = this;
  FShaderCommonCompileJob::ForEachSingleShaderJob
            (param_1,(TFunction<void___cdecl(FShaderCompileJob_&)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// AddWarningsForJob @ 145e4b6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderDiagnosticInfo::AddWarningsForJob
          (FShaderDiagnosticInfo *this,FShaderCommonCompileJob *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  void *pvVar4;
  undefined ***pppuVar5;
  FShaderCompileJob *pFVar6;
  FShaderCommonCompileJob *pFVar7;
  FPendingShaderMapCompileResults *pFVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  code *local_68;
  undefined **local_58;
  FShaderDiagnosticInfo *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FShaderDiagnosticInfo::AddWarningsForJob'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  pFVar6 = (FShaderCompileJob *)0x0;
  if (param_1->Type == Single) {
    pFVar6 = (FShaderCompileJob *)param_1;
  }
  local_40 = (undefined ***)0x0;
  local_50 = this;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
             ::Call;
  if (pFVar6 == (FShaderCompileJob *)0x0) {
    pFVar7 = (FShaderCommonCompileJob *)0x0;
    if (param_1->Type == Pipeline) {
      pFVar7 = param_1;
    }
    if (pFVar7 != (FShaderCommonCompileJob *)0x0) {
      pFVar8 = pFVar7[1].PendingShaderMap.Reference;
      iVar1 = pFVar7[1].NumRefs.Counter;
      plVar2 = (longlong *)&pFVar8->field_0x0;
      while( true ) {
        if (pFVar7[1].NumRefs.Counter != iVar1) {
          `TCheckedPointerIterator<TRefCountPtr<FShaderCompileJob>_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_78);
        }
        if (pFVar8 == (FPendingShaderMapCompileResults *)(plVar2 + iVar1)) break;
        pFVar6 = (FShaderCompileJob *)0x0;
        if ((char)(*(FShaderCompileJob **)pFVar8)->_padding_ == '\0') {
          pFVar6 = *(FShaderCompileJob **)pFVar8;
        }
        if (pFVar6 == (FShaderCompileJob *)0x0) {
LAB_145e4b82c:
          pFVar8 = (FPendingShaderMapCompileResults *)&pFVar8->field_0x8;
        }
        else {
          UE::Core::Private::Function::CheckCallable(local_68);
          pcVar3 = local_68;
          pppuVar5 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar5 = local_40;
          }
          pvVar4 = (void *)(*(code *)(*pppuVar5)[1])();
          if (pcVar3 != UE::Core::Private::Function::
                        TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
                        ::Call) {
            (*pcVar3)();
            goto LAB_145e4b82c;
          }
          `FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>::operator()(pvVar4,pFVar6);
          pFVar8 = (FPendingShaderMapCompileResults *)&pFVar8->field_0x8;
        }
      }
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable
              (UE::Core::Private::Function::
               TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
               ::Call);
    pcVar3 = local_68;
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    pvVar4 = (void *)(*(code *)(*pppuVar5)[1])();
    if (pcVar3 == UE::Core::Private::Function::
                  TFunctionRefCaller<`FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>,void,FShaderCompileJob_const_&>
                  ::Call) {
      `FShaderDiagnosticInfo::AddWarningsForJob'::__l2::<lambda_1>::operator()(pvVar4,pFVar6);
    }
    else {
      (*pcVar3)();
    }
  }
  if (local_68 != (code *)0x0) {
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

