// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// Visit @ 14460fc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`UE::IoStore::FCas::GetBlockInfo'::__l2::FDirectoryVisitor::Visit
          (void *this,wchar_t *param_1,bool param_2)

{
  TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
  *this_00;
  int iVar1;
  size_t sVar2;
  TStringView<wchar_t> *pTVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  int iVar10;
  ulonglong *puVar11;
  ulong64 uVar12;
  undefined1 auStack_1e8 [32];
  uint local_1c8 [4];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  int local_198;
  longlong local_190;
  ulonglong local_188;
  undefined8 local_180;
  TStringView<wchar_t> local_178;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (!param_2) {
    puVar11 = (ulonglong *)0x0;
    iVar10 = 0;
    local_198 = iVar10;
    local_1a8._8_8_ = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar2 = wcslen(param_1);
      local_198 = (int)sVar2;
    }
    pTVar3 = FPathViews::GetExtension
                       ((TStringView<wchar_t> *)local_1b8,(TStringView<wchar_t> *)(local_1a8 + 8),
                        false);
    if ((pTVar3->Size == 4) &&
       (iVar1 = FGenericPlatformStricmp::Strnicmp(pTVar3->DataPtr,L"ucas",4), iVar1 == 0)) {
      lVar4 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x80))
                        (*(longlong **)((longlong)this + 0x10),param_1);
      FPathViews::GetBaseFilename(&local_178,(TStringView<wchar_t> *)(local_1a8 + 8));
      uVar12 = (ulong64)local_178.Size;
      local_168.Base = local_148;
      local_168.CurPos = local_148;
      local_168.End = (wchar_t *)local_48;
      local_168.bIsDynamic = false;
      local_168.bIsExternal = false;
      if (local_48 < local_148 + uVar12) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,uVar12);
      }
      if (local_178.Size != 0) {
        pvVar5 = FGenericPlatformString::Memcpy(local_168.CurPos,local_178.DataPtr,uVar12 * 2);
        local_168.CurPos = (wchar_t *)((longlong)pvVar5 + uVar12 * 2);
      }
      if (local_168.End < local_168.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      }
      *local_168.CurPos = L'\0';
      local_1b8._0_8_ = local_168.Base;
      if (local_168.Base != (wchar_t *)0x0) {
        sVar2 = wcslen(local_168.Base);
        iVar10 = (int)sVar2;
      }
      local_1b8._8_4_ = iVar10;
      local_1c8[0] = FParse::HexNumber((TStringView<wchar_t> *)local_1b8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      if ((local_1c8[0] == 0) || (lVar4 < 0)) {
        if (2 < (byte)LogIoStoreOnDemand._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        }
      }
      else {
        this_00 = *(TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
                    **)((longlong)this + 0x18);
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          FVar8 = (this_00->Hash).SecondaryData;
          if (FVar8 == (ForElementType<FSetElementId>)0x0) {
            FVar8 = (ForElementType<FSetElementId>)&this_00->Hash;
          }
          iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this_00->HashSize - 1U & local_1c8[0]) * 4
                           );
          if (iVar10 != -1) {
            do {
              if (*(uint *)(*(longlong *)&this_00->Elements + (longlong)iVar10 * 0x28) ==
                  local_1c8[0]) {
                if ((byte)LogIoStoreOnDemand._0_1_ < 3) {
                  return true;
                }
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
                return true;
              }
              iVar10 = *(int *)(*(longlong *)&this_00->Elements + 0x20 + (longlong)iVar10 * 0x28);
            } while (iVar10 != -1);
          }
        }
        puVar7 = puVar11;
        if (*(int *)((longlong)this + 0x28) != *(int *)((longlong)this + 0x54)) {
          lVar9 = *(longlong *)((longlong)this + 0x60);
          if (*(longlong *)((longlong)this + 0x60) == 0) {
            lVar9 = (longlong)this + 0x58;
          }
          iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)this + 0x68) - 1U & local_1c8[0])
                                    * 4);
          if (iVar10 != -1) {
            do {
              puVar7 = (ulonglong *)(*(longlong *)((longlong)this + 0x20) + (longlong)iVar10 * 0x18)
              ;
              if (*(uint *)(*(longlong *)((longlong)this + 0x20) + (longlong)iVar10 * 0x18) ==
                  local_1c8[0]) break;
              iVar10 = (int)puVar7[2];
              puVar7 = puVar11;
            } while (iVar10 != -1);
          }
        }
        puVar6 = puVar7 + 1;
        if (puVar7 == (ulonglong *)0x0) {
          puVar6 = puVar11;
        }
        if (puVar6 == (ulonglong *)0x0) {
          local_188 = *(ulonglong *)((longlong)this + 0x70);
        }
        else {
          local_188 = *puVar6 & 0x7fffffffffffffff;
        }
        local_1b8._0_8_ = local_1c8;
        local_180 = 0;
        local_1b8._8_8_ = &local_190;
        local_190 = lVar4;
        TSet<TTuple<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo>,TDefaultMapHashableKeyFuncs<UE::IoStore::FCasBlockId,UE::IoStore::FCasBlockInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::IoStore::FCasBlockId_const_&,UE::IoStore::FCasBlockInfo_&&>_>
                  (this_00,(TPairInitializer<UE::IoStore::FCasBlockId_const_&,UE::IoStore::FCasBlockInfo_&&>
                            *)local_1a8,(bool *)local_1b8);
        *(longlong *)((longlong)this + 0x78) = *(longlong *)((longlong)this + 0x78) + lVar4;
      }
    }
  }
  return true;
}

