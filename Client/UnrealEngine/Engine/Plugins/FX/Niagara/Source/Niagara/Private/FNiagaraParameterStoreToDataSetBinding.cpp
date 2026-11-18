// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Init @ 1493eab60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraParameterStoreToDataSetBinding::Init
          (FNiagaraParameterStoreToDataSetBinding *this,FNiagaraDataSet *param_1,
          FNiagaraParameterStore *param_2)

{
  int iVar1;
  FNiagaraDataSetCompiledData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint local_res20;
  longlong local_60;
  longlong local_50;
  
  pFVar2 = (param_1->CompiledData).StructPtr;
  local_res20 = 0;
  iVar10 = (pFVar2->Variables).ArrayNum;
  if (0 < iVar10) {
    local_60 = 0;
    local_50 = 0;
    do {
      uVar11 = 0;
      if ((int)local_res20 < iVar10) {
        uVar11 = ~local_res20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      piVar8 = (int *)(**(code **)(param_2->_padding_ + 0x58))
                                (param_2,(pFVar2->Variables).AllocatorInstance.Data + local_50,1);
      if (piVar8 != (int *)0x0) {
        uVar11 = 0;
        if ((int)local_res20 < (pFVar2->VariableLayouts).ArrayNum) {
          uVar11 = ~local_res20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = 0;
        iVar10 = *piVar8;
        pFVar14 = (pFVar2->VariableLayouts).AllocatorInstance.Data + local_60;
        if (*(ushort *)(pFVar14 + 8) != 0) {
          do {
            uVar6 = 0;
            if ((int)uVar11 < *(int *)(pFVar14 + 0x18)) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = *(ushort *)pFVar14 + uVar11;
            iVar1 = *(int *)(*(longlong *)(pFVar14 + 0x10) + (longlong)(int)uVar11 * 4);
            iVar7 = (this->FloatOffsets).ArrayNum;
            if (iVar7 == (this->FloatOffsets).ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)this,&(this->FloatOffsets).ArrayMax);
            }
            uVar11 = uVar11 + 1;
            (this->FloatOffsets).ArrayNum = iVar7 + 1;
            pFVar3 = (this->FloatOffsets).AllocatorInstance.Data;
            *(int *)(pFVar3 + (longlong)iVar7 * 8) = iVar10 + iVar1;
            *(int *)(pFVar3 + (longlong)iVar7 * 8 + 4) = iVar13;
          } while (uVar11 < *(ushort *)(pFVar14 + 8));
        }
        uVar11 = 0;
        if (*(ushort *)(pFVar14 + 10) != 0) {
          do {
            uVar12 = uVar11 + (uint)*(ushort *)(pFVar14 + 8) * 2;
            uVar6 = 0;
            if ((int)uVar12 < *(int *)(pFVar14 + 0x18)) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = *(ushort *)(pFVar14 + 2) + uVar11;
            iVar1 = *(int *)(*(longlong *)(pFVar14 + 0x10) + (longlong)(int)uVar12 * 4);
            iVar7 = (this->Int32Offsets).ArrayNum;
            if (iVar7 == (this->Int32Offsets).ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&(this->Int32Offsets).AllocatorInstance,
                                 &(this->Int32Offsets).ArrayMax);
            }
            uVar11 = uVar11 + 1;
            (this->Int32Offsets).ArrayNum = iVar7 + 1;
            pFVar3 = (this->Int32Offsets).AllocatorInstance.Data;
            *(int *)(pFVar3 + (longlong)iVar7 * 8) = iVar10 + iVar1;
            *(int *)(pFVar3 + (longlong)iVar7 * 8 + 4) = iVar13;
          } while (uVar11 < *(ushort *)(pFVar14 + 10));
        }
        uVar11 = 0;
        if (*(ushort *)(pFVar14 + 0xc) != 0) {
          do {
            uVar12 = uVar11 + ((uint)*(ushort *)(pFVar14 + 8) + (uint)*(ushort *)(pFVar14 + 10)) * 2
            ;
            uVar6 = 0;
            if ((int)uVar12 < *(int *)(pFVar14 + 0x18)) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = *(ushort *)(pFVar14 + 4) + uVar11;
            iVar1 = *(int *)(*(longlong *)(pFVar14 + 0x10) + (longlong)(int)uVar12 * 4);
            iVar7 = (this->HalfOffsets).ArrayNum;
            if (iVar7 == (this->HalfOffsets).ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x40c,&(this->HalfOffsets).AllocatorInstance,
                                 &(this->HalfOffsets).ArrayMax);
            }
            uVar11 = uVar11 + 1;
            (this->HalfOffsets).ArrayNum = iVar7 + 1;
            lVar9 = (longlong)iVar7;
            pFVar3 = (this->HalfOffsets).AllocatorInstance.Data;
            *(int *)(pFVar3 + lVar9 * 0xc) = iVar1 * 2 + iVar10;
            *(int *)(pFVar3 + lVar9 * 0xc + 4) = iVar13;
            pFVar3[lVar9 * 0xc + 8] = (FScriptContainerElement)0x1;
          } while (uVar11 < *(ushort *)(pFVar14 + 0xc));
        }
      }
      local_res20 = local_res20 + 1;
      local_50 = local_50 + 0xc;
      local_60 = local_60 + 0x20;
      iVar10 = (pFVar2->Variables).ArrayNum;
    } while ((int)local_res20 < iVar10);
  }
  return;
}

// ParameterStoreToDataSet @ 1493f10e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraParameterStoreToDataSetBinding::ParameterStoreToDataSet
          (FNiagaraParameterStoreToDataSetBinding *this,FNiagaraParameterStore *param_1,
          FNiagaraDataSet *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FNiagaraDataBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  uVar10 = (ulonglong)(uint)param_3;
  if (param_2->DestinationData == (FNiagaraDataBuffer *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestinationData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x15e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar9 = (this->FloatOffsets).AllocatorInstance.Data;
  iVar2 = (this->FloatOffsets).ArrayNum;
  pFVar4 = param_2->DestinationData;
  pFVar5 = (param_1->ParameterData).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->FloatOffsets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    pFVar8 = pFVar9 + 4;
    iVar3 = *(int *)pFVar9;
    pFVar9 = pFVar9 + 8;
    *(undefined4 *)
     ((pFVar4->FloatData).AllocatorInstance.Data +
     (ulonglong)(*(int *)pFVar8 * pFVar4->FloatStride) + uVar10 * 4) =
         *(undefined4 *)(pFVar5 + iVar3);
  }
  pFVar9 = (this->Int32Offsets).AllocatorInstance.Data;
  iVar2 = (this->Int32Offsets).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Int32Offsets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar1) break;
    pFVar8 = pFVar9 + 4;
    iVar3 = *(int *)pFVar9;
    pFVar9 = pFVar9 + 8;
    *(undefined4 *)
     ((pFVar4->Int32Data).AllocatorInstance.Data +
     (ulonglong)(*(int *)pFVar8 * pFVar4->Int32Stride) + uVar10 * 4) =
         *(undefined4 *)(pFVar5 + iVar3);
  }
  iVar2 = (this->HalfOffsets).ArrayNum;
  pFVar9 = (this->HalfOffsets).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->HalfOffsets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar9 == pFVar1) break;
    iVar3 = *(int *)pFVar9;
    pFVar8 = (pFVar4->HalfData).AllocatorInstance.Data +
             (ulonglong)(*(int *)(pFVar9 + 4) * pFVar4->HalfStride) + uVar10 * 2;
    if (pFVar9[8] == (FScriptContainerElement)0x0) {
      pFVar9 = pFVar9 + 0xc;
      *(ushort *)pFVar8 = *(ushort *)(pFVar5 + iVar3);
    }
    else {
      FGenericPlatformMath::StoreHalf((ushort *)pFVar8,*(float *)(pFVar5 + iVar3));
      pFVar9 = pFVar9 + 0xc;
    }
  }
  return;
}

