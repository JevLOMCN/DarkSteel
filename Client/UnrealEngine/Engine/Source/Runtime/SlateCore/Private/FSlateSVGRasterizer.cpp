// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// RasterizeSVGFromFile @ 14251a420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
FSlateSVGRasterizer::RasterizeSVGFromFile
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1,TIntPoint<int> param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar5;
  NSVGimage *pNVar6;
  NSVGrasterizer *pNVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iStackX_1c;
  undefined1 auStackY_148 [32];
  FString local_f8;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar13 = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar3 = FFileHelper::LoadFileToString(&local_f8,pwVar12,None,0);
  if (!bVar3) {
    if (2 < (byte)LogSlate._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    }
    goto LAB_14251a6aa;
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  if (local_f8.Data.ArrayNum == 0) {
    pwVar12 = L"";
LAB_14251a4ed:
    sVar4 = wcslen(pwVar12);
    local_58 = (int)sVar4;
    uVar15 = local_58 + 1;
    FVar11.Data = pFVar13;
    if (0x80 < uVar15) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar15,1);
      FVar11.Data = local_68.Data;
    }
    lVar14 = (longlong)(int)uVar15;
    pFVar9 = local_e8;
    if (FVar11.Data != (FScriptContainerElement *)0x0) {
      pFVar9 = FVar11.Data;
    }
    bVar3 = false;
    pFVar8 = pFVar13;
    local_60 = pFVar9;
    if (0 < (int)uVar15) {
      do {
        uVar1 = *(ushort *)((longlong)pwVar12 + (longlong)pFVar8 * 2);
        pFVar9[(longlong)pFVar8] = SUB21(uVar1,0);
        pFVar8 = pFVar8 + 1;
        bVar3 = (bool)(bVar3 | 0x7f < uVar1);
      } while ((longlong)pFVar8 < lVar14);
      if (bVar3) {
        do {
          if (0x7f < *(ushort *)((longlong)pwVar12 + (longlong)pFVar13 * 2)) {
            pFVar13[(longlong)pFVar9] = (FScriptContainerElement)0x3f;
          }
          pFVar13 = pFVar13 + 1;
        } while ((longlong)pFVar13 < lVar14);
      }
    }
    if ((pFVar9 + lVar14 == (FScriptContainerElement *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                           ,0x25,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else {
    pwVar12 = (wchar_t *)local_f8.Data.AllocatorInstance.Data;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14251a4ed;
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
  }
  pNVar6 = nsvgParse((char *)local_60,"px",__real_42c00000);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (pNVar6 != (NSVGimage *)0x0) {
    iStackX_1c = param_2.field0_0x0._4_4_;
    iVar10 = param_2.field0_0x0._0_4_;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iStackX_1c * iVar10 * 4,&__return_storage_ptr__->AllocatorInstance,
               &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    pNVar7 = nsvgCreateRasterizer();
    nsvgRasterizeFull(pNVar7,pNVar6,0.0,0.0,(float)iVar10 / pNVar6->width,
                      (float)iStackX_1c / pNVar6->height,
                      (uchar *)(__return_storage_ptr__->AllocatorInstance).Data,iVar10,iStackX_1c,
                      iVar10 * 4);
    nsvgDeleteRasterizer(pNVar7);
    nsvgDelete(pNVar6);
  }
LAB_14251a6aa:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

