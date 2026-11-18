// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> @ 14157dec0

TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *
__thiscall
TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          (TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *param_1)

{
  uint uVar1;
  TPairInitializer<FString_const_&,int_const_&> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
  *pTVar7;
  sbyte sVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  wchar_t *pwVar12;
  int iVar13;
  ulonglong uVar14;
  TPairInitializer<FString_const_&,int_const_&> *pTVar15;
  longlong lVar16;
  void *_Dst;
  FCompactSetLayout local_res8;
  initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *local_res10;
  
  uVar14 = 0;
  pTVar2 = param_1->_Last;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  iVar11 = (int)((longlong)pTVar2 - (longlong)param_1->_First >> 4);
  local_res10 = param_1;
  if (iVar11 != 0) {
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)iVar11);
    }
    local_res8.Size = 0x18;
    local_res8.Alignment = 8;
    bVar5 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,iVar11,&local_res8,true)
    ;
    if ((bVar5) && (uVar6 = *(uint *)&this->field_0xc, 0 < (int)uVar6)) {
      lVar3 = *(longlong *)this;
      uVar1 = *(uint *)((ulonglong)(uVar6 * 0x18) + lVar3);
      lVar16 = lVar3 + 4 + (ulonglong)(uVar6 * 0x18);
      sVar8 = (0xff < uVar6) + (0xffff < uVar6);
      _Dst = (void *)(((ulonglong)uVar6 << sVar8) + lVar16);
      memset(_Dst,0xff,(ulonglong)uVar1 << sVar8);
      if (0 < *(int *)&this->field_0x8) {
        iVar11 = 0;
        if (0xffff < uVar6) {
          iVar11 = 2;
        }
        iVar11 = (0xff < uVar6) + 1 + iVar11;
        do {
          iVar13 = (int)uVar14;
          iVar9 = *(int *)(lVar3 + 8 + (longlong)iVar13 * 0x18);
          if (iVar9 == 0) {
            pwVar12 = L"";
            iVar9 = 0;
          }
          else {
            pwVar12 = *(wchar_t **)(lVar3 + (longlong)iVar13 * 0x18);
            iVar9 = iVar9 + -1;
          }
          uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar12);
          if (iVar11 == 1) {
            uVar10 = (ulonglong)(uVar6 & uVar1 - 1);
            *(undefined1 *)(uVar14 + lVar16) = *(undefined1 *)(uVar10 + (longlong)_Dst);
            *(char *)(uVar10 + (longlong)_Dst) = (char)uVar14;
          }
          else if (iVar11 == 2) {
            uVar10 = (ulonglong)(uVar1 - 1 & uVar6);
            *(undefined2 *)(lVar16 + uVar14 * 2) = *(undefined2 *)((longlong)_Dst + uVar10 * 2);
            *(short *)((longlong)_Dst + uVar10 * 2) = (short)uVar14;
          }
          else if (iVar11 == 4) {
            uVar10 = (ulonglong)(uVar1 - 1 & uVar6);
            *(undefined4 *)(lVar16 + uVar14 * 4) = *(undefined4 *)((longlong)_Dst + uVar10 * 4);
            *(int *)((longlong)_Dst + uVar10 * 4) = iVar13;
          }
          else {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pTVar7 = (TCompactMap<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                        *)(*pcVar4)();
              return pTVar7;
            }
          }
          uVar14 = (ulonglong)(iVar13 + 1U);
          param_1 = local_res10;
        } while ((int)(iVar13 + 1U) < *(int *)&this->field_0x8);
      }
    }
  }
  pTVar2 = param_1->_Last;
  for (pTVar15 = param_1->_First; pTVar15 != pTVar2; pTVar15 = pTVar15 + 1) {
    TCompactMapBase<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
    ::Emplace<FString_const_&,int_const_&>
              ((TCompactMapBase<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                *)this,pTVar15->Key,pTVar15->Value);
  }
  return this;
}

