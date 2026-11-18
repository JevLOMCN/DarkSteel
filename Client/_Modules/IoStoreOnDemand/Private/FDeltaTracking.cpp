// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// Get @ 1445d0540

long64 __thiscall
UE::IoStore::FDeltaTracking::Get(FDeltaTracking *this,TStringView<wchar_t> *param_1,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  long64 local_res18 [2];
  FString local_58;
  undefined1 local_48 [16];
  
  local_res18[0] = param_2;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,param_1->DataPtr);
  if (*(int *)&(this->IntTotals).field_0x8 != *(int *)&(this->IntTotals).field_0x34) {
    puVar9 = *(undefined1 **)&(this->IntTotals).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->IntTotals).field_0x38;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->IntTotals).field_0x48 - 1U & uVar3) * 4);
    if (iVar8 != -1) {
      pFVar1 = (FScriptContainerElement *)param_1->DataPtr;
      uVar2._0_4_ = param_1->Size;
      uVar2._4_4_ = *(int *)&param_1->field_0xc;
      local_48._0_8_ = pFVar1;
      local_48._8_8_ = uVar2;
      do {
        lVar10 = (longlong)iVar8 * 0x20;
        iVar4 = *(int *)(lVar10 + 8 + *(longlong *)&this->IntTotals);
        iVar7 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar7 = 0;
        }
        if ((int)uVar2 == iVar7) {
          if (((int)uVar2 != 0) && (iVar7 != 0)) {
            iVar4 = iVar7;
            if ((int)uVar2 < iVar7) {
              iVar4 = (int)uVar2;
            }
            iVar4 = FGenericPlatformStricmp::Strnicmp
                              ((wchar_t *)pFVar1,
                               *(wchar_t **)(lVar10 + *(longlong *)&this->IntTotals),(longlong)iVar4
                              );
            if (iVar4 != 0) goto LAB_1445d060a;
          }
          if ((int)uVar2 == iVar7) {
            lVar10 = (longlong)iVar8 * 0x20 + *(longlong *)&this->IntTotals;
            plVar6 = (longlong *)(lVar10 + 0x10);
            if (lVar10 == 0) {
              plVar6 = (longlong *)0x0;
            }
            if (plVar6 != (longlong *)0x0) {
              lVar10 = *plVar6;
              *plVar6 = local_res18[0];
              return local_res18[0] - lVar10;
            }
            break;
          }
        }
LAB_1445d060a:
        iVar8 = *(int *)(lVar10 + 0x18 + *(longlong *)&this->IntTotals);
      } while (iVar8 != -1);
    }
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     ((FString *)local_48,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_58 != pFVar5) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  local_48._0_8_ = &local_58;
  local_48._8_8_ = local_res18;
  TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,__int64_const_&>_>
            ((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,__int64_const_&> *)&stack0x00000008,
             (bool *)local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return local_res18[0];
}

