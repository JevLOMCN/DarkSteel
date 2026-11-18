// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// GatherResourceMemory @ 1493e3910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ulong64 __thiscall
FNiagaraSystemMemReport::GatherResourceMemory
          (FNiagaraSystemMemReport *this,EReportType param_1,UObject *param_2,uint param_3)

{
  FName *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  UClass *pUVar16;
  ulong64 uVar17;
  FName FVar18;
  FVersionedNiagaraEmitterData *pFVar19;
  FNiagaraScriptExecutionParameterStore *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  UNiagaraScript *this_00;
  ENiagaraSimTarget EVar28;
  undefined1 local_res8 [8];
  EReportType local_res10;
  UObject *local_res18;
  uint local_res20;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_78;
  FVersionedNiagaraEmitter local_68;
  
  uVar13 = (this->Nodes).ArrayNum;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (uVar13 == (this->Nodes).ArrayMax) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,(ForAnyElementType *)this,&(this->Nodes).ArrayMax);
  }
  (this->Nodes).ArrayNum = uVar13 + 1;
  lVar2 = (longlong)(int)uVar13 * 0x28;
  FNode::FNode((FNode *)((this->Nodes).AllocatorInstance.Data + lVar2),param_2,param_3);
  uVar24 = 0;
  if (param_1 != Verbose) goto LAB_1493e3dc1;
  if (param_2 == (UObject *)0x0) {
LAB_1493e39cd:
    this_00 = (UNiagaraScript *)0x0;
  }
  else {
    pUVar16 = Z_Construct_UClass_UNiagaraScript_NoRegister();
    iVar14 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar14) ||
       (this_00 = (UNiagaraScript *)param_2,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
       &pUVar16->_padding_)) goto LAB_1493e39cd;
  }
  param_3 = local_res20;
  if (this_00 != (UNiagaraScript *)0x0) {
    iVar14 = (this->Nodes).ArrayNum;
    uVar27 = local_res20 + 1;
    FVar18.Number = 0;
    FVar18.ComparisonIndex.Value = (this_00->CachedScriptVM).ByteCode.Data.ArrayNum;
    if (iVar14 == (this->Nodes).ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,(ForAnyElementType *)this,&(this->Nodes).ArrayMax);
    }
    (this->Nodes).ArrayNum = iVar14 + 1;
    pFVar1 = (FName *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar14 * 0x28);
    *pFVar1 = NiagaraMemReportInternal::NAME_ByteCode;
    pFVar1[1].ComparisonIndex = 0;
    pFVar1[1].Number = 0;
    pFVar1[3] = FVar18;
    pFVar1[4] = FVar18;
    pFVar1[2].ComparisonIndex.Value = uVar27;
    iVar14 = (this->Nodes).ArrayNum;
    uVar22 = iVar14 - 1;
    uVar27 = uVar24;
    if ((int)uVar22 < iVar14) {
      uVar27 = ~uVar22 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return uVar17;
    }
    iVar14 = (this->Nodes).ArrayNum;
    uVar22 = ~uVar13 >> 0x1f;
    lVar10 = *(longlong *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar14 * 0x28 + -0x10);
    uVar27 = uVar24;
    if ((int)uVar13 < iVar14) {
      uVar27 = uVar22;
    }
    if ((uVar27 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return uVar17;
    }
    pFVar3 = (this->Nodes).AllocatorInstance.Data + lVar2 + 0x18;
    *(longlong *)pFVar3 = *(longlong *)pFVar3 - lVar10;
    iVar14 = (this_00->RapidIterationParameters).Bindings.ArrayMax;
    iVar25 = (this_00->RapidIterationParameters).OriginalPositionData.ArrayMax;
    iVar5 = (this_00->RapidIterationParameters).SortedParameterOffsets.ArrayMax;
    iVar6 = (this_00->RapidIterationParameters).SourceStores.ArrayMax;
    iVar7 = (this_00->RapidIterationParameters).UObjects.ArrayMax;
    iVar8 = (this_00->RapidIterationParameters).DataInterfaces.ArrayMax;
    iVar9 = (this_00->RapidIterationParameters).ParameterData.ArrayMax;
    iVar15 = (this->Nodes).ArrayNum;
    if (iVar15 == (this->Nodes).ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,(ForAnyElementType *)this,&(this->Nodes).ArrayMax);
    }
    (this->Nodes).ArrayNum = iVar15 + 1;
    pFVar1 = (FName *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar15 * 0x28);
    *pFVar1 = NiagaraMemReportInternal::NAME_RapidIterationParameters;
    pFVar1[1].ComparisonIndex = 0;
    pFVar1[1].Number = 0;
    pFVar1[2].ComparisonIndex.Value = local_res20 + 1;
    FVar18 = (FName)((longlong)iVar9 +
                     ((longlong)iVar14 * 7 + (longlong)iVar25 * 4 + (longlong)iVar5 * 5 +
                      (longlong)iVar6 + (longlong)iVar7 + (longlong)iVar8 + 0x11) * 8 & 0xffffffff);
    pFVar1[3] = FVar18;
    pFVar1[4] = FVar18;
    iVar14 = (this->Nodes).ArrayNum;
    uVar23 = iVar14 - 1;
    uVar27 = uVar24;
    if ((int)uVar23 < iVar14) {
      uVar27 = ~uVar23 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return uVar17;
    }
    iVar14 = (this->Nodes).ArrayNum;
    lVar10 = *(longlong *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar14 * 0x28 + -0x10);
    uVar27 = uVar24;
    if ((int)uVar13 < iVar14) {
      uVar27 = uVar22;
    }
    if ((uVar27 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return uVar17;
    }
    pFVar3 = (this->Nodes).AllocatorInstance.Data + lVar2 + 0x18;
    *(longlong *)pFVar3 = *(longlong *)pFVar3 - lVar10;
    EVar28 = CPUSim;
    UNiagaraScript::GetOuterEmitter(this_00,&local_68);
    pFVar19 = FVersionedNiagaraEmitter::GetEmitterData(&local_68);
    if (pFVar19 != (FVersionedNiagaraEmitterData *)0x0) {
      EVar28 = pFVar19->SimTarget;
    }
    pFVar20 = UNiagaraScript::GetExecutionReadyParameterStore(this_00,EVar28);
    param_3 = local_res20;
    if (pFVar20 != (FNiagaraScriptExecutionParameterStore *)0x0) {
      iVar14 = *(int *)((longlong)&pFVar20->_padding_ + 4);
      iVar25 = *(int *)((longlong)&pFVar20->_padding_ + 4);
      iVar5 = *(int *)((longlong)&pFVar20->_padding_ + 4);
      iVar6 = *(int *)((longlong)&pFVar20->_padding_ + 4);
      iVar7 = *(int *)((longlong)&pFVar20->_padding_ + 4);
      iVar8 = *(int *)((longlong)&pFVar20->_padding_ + 4);
      iVar9 = *(int *)((longlong)&pFVar20->_padding_ + 4);
      iVar15 = (this->Nodes).ArrayNum;
      if (iVar15 == (this->Nodes).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,(ForAnyElementType *)this,&(this->Nodes).ArrayMax);
      }
      (this->Nodes).ArrayNum = iVar15 + 1;
      pFVar1 = (FName *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar15 * 0x28);
      *pFVar1 = NiagaraMemReportInternal::NAME_ScriptExecutionParamStore;
      pFVar1[1].ComparisonIndex = 0;
      pFVar1[1].Number = 0;
      pFVar1[2].ComparisonIndex.Value = local_res20 + 1;
      FVar18 = (FName)((longlong)iVar9 +
                       ((longlong)iVar14 * 7 + (longlong)iVar25 * 4 + (longlong)iVar5 * 5 +
                        (longlong)iVar6 + (longlong)iVar7 + (longlong)iVar8 + 0x12) * 8 & 0xffffffff
                      );
      pFVar1[3] = FVar18;
      pFVar1[4] = FVar18;
      iVar14 = (this->Nodes).ArrayNum;
      uVar23 = iVar14 - 1;
      uVar27 = uVar24;
      if ((int)uVar23 < iVar14) {
        uVar27 = ~uVar23 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return uVar17;
      }
      iVar14 = (this->Nodes).ArrayNum;
      lVar10 = *(longlong *)((this->Nodes).AllocatorInstance.Data + (longlong)iVar14 * 0x28 + -0x10)
      ;
      uVar27 = uVar24;
      if ((int)uVar13 < iVar14) {
        uVar27 = uVar22;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return uVar17;
      }
      pFVar3 = (this->Nodes).AllocatorInstance.Data + lVar2 + 0x18;
      *(longlong *)pFVar3 = *(longlong *)pFVar3 - lVar10;
      param_3 = local_res20;
    }
  }
LAB_1493e3dc1:
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  GetObjectsWithOuter((UObjectBase *)param_2,&local_78,false,RF_NoFlags,Borrowed);
  iVar14 = local_78.ArrayNum;
  uVar21 = (ulonglong)local_78.ArrayNum;
  if (0 < local_78.ArrayNum) {
    pFVar3 = local_78.AllocatorInstance.Data + uVar21 * 8;
    FVar26.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar21 != iVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      param_2 = local_res18;
      if (FVar26.Data == pFVar3) break;
      uVar17 = GatherResourceMemory(this,local_res10,*(UObject **)FVar26.Data,param_3 + 1);
      uVar27 = uVar24;
      if ((int)uVar13 < (this->Nodes).ArrayNum) {
        uVar27 = ~uVar13 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        uVar17 = (*pcVar11)();
        return uVar17;
      }
      pFVar4 = (this->Nodes).AllocatorInstance.Data + lVar2 + 0x20;
      *(ulong64 *)pFVar4 = *(longlong *)pFVar4 + uVar17;
      uVar21 = local_78._8_8_ & 0xffffffff;
      FVar26.Data = FVar26.Data + 8;
      param_3 = local_res20;
    }
  }
  pUVar16 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
  iVar14 = (int)pUVar16->_padding_;
  uVar24 = 0;
  if ((iVar14 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar14 * 8) ==
      &pUVar16->_padding_)) {
    uVar27 = uVar24;
    if ((int)uVar13 < (this->Nodes).ArrayNum) {
      uVar27 = ~uVar13 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      uVar17 = (*pcVar11)();
      return uVar17;
    }
    this->DataInterfaceSizeBytes =
         this->DataInterfaceSizeBytes +
         *(longlong *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x28 + 0x20);
  }
  uVar27 = uVar24;
  if ((int)uVar13 < (this->Nodes).ArrayNum) {
    uVar27 = ~uVar13 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    uVar17 = (*pcVar11)();
    return uVar17;
  }
  uVar17 = *(ulong64 *)((this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x28 + 0x20);
  if (local_res10 == Basic) {
    iVar14 = (this->Nodes).ArrayNum;
    iVar25 = iVar14 - uVar13;
    if (0 < iVar25) {
      pUVar16 = UNiagaraSystem::StaticClass();
      iVar5 = (int)pUVar16->_padding_;
      if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar16->_padding_)) {
        pUVar16 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
        iVar5 = (int)pUVar16->_padding_;
        if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar5) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar16->_padding_)) {
          if (iVar14 <= (this->Nodes).ArrayNum) {
            uVar24 = ~uVar13 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar12)) {
            pcVar11 = (code *)swi(3);
            uVar17 = (*pcVar11)();
            return uVar17;
          }
          pFVar3 = (this->Nodes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x28;
          iVar14 = ((this->Nodes).ArrayNum - uVar13) - iVar25;
          if (iVar14 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)iVar25 * 0x28,(longlong)iVar14 * 0x28);
          }
          iVar25 = (this->Nodes).ArrayNum - iVar25;
          (this->Nodes).ArrayNum = iVar25;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,(ForAnyElementType *)this,iVar25,&(this->Nodes).ArrayMax);
        }
      }
    }
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return uVar17;
}

// GenerateReport @ 1493e4500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraSystemMemReport::GenerateReport
          (FNiagaraSystemMemReport *this,EReportType param_1,UNiagaraSystem *param_2)

{
  (this->Nodes).ArrayNum = 0;
  if ((this->Nodes).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,&(this->Nodes).ArrayMax);
  }
  this->DataInterfaceSizeBytes = 0;
  GatherResourceMemory(this,param_1,(UObject *)param_2,0);
  return;
}

