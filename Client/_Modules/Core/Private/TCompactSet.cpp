// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 46

// Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_> @ 1415065b0

TTuple<FSetElementId,bool> __thiscall
TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
::Emplace<TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&>_>
          (TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
           *this,EInPlace param_1,
          TPairInitializer<TUniquePtr<FString,TDefaultDelete<FString>_>_&&,int_&&> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  TTuple<FSetElementId,bool> TVar5;
  undefined8 *in_R9;
  undefined4 *puVar6;
  ulonglong *puVar7;
  bool bVar8;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FCompactSetLayout local_48;
  undefined4 *local_40;
  longlong local_38;
  uint local_30;
  undefined4 local_2c;
  
  TVar5._4_4_ = in_register_00000014;
  TVar5._0_4_ = param_1;
  puVar6 = (undefined4 *)in_R9[1];
  local_58.Ptr = *(FString **)*in_R9;
  *(ulonglong *)*in_R9 = 0;
  uStack_50 = *puVar6;
  uVar4 = ((uint)((ulonglong)local_58.Ptr >> 0x14) & 0xffff ^ (uint)((ulonglong)local_58.Ptr >> 4))
          * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  iVar2 = FindIndexByHash<TUniquePtr<FString,TDefaultDelete<FString>_>_>(this,uVar4,&local_58);
  bVar8 = iVar2 != -1;
  if (bVar8) {
    puVar7 = (ulonglong *)((longlong)iVar2 * 0x10 + *(longlong *)this);
    puVar1 = (undefined8 *)*puVar7;
    if (puVar1 != (undefined8 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      ::operator_delete(puVar1,0x10);
    }
    *puVar7 = (ulonglong)local_58.Ptr;
    puVar7[1] = CONCAT44(uStack_4c,uStack_50);
  }
  else {
    iVar2 = *(int *)&this->field_0x8;
    if (iVar2 == *(int *)&this->field_0xc) {
      local_48 = (FCompactSetLayout)&DAT_800000010;
      iVar3 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                        ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,iVar2 + 1,&local_48);
      Reserve(this,iVar3);
    }
    local_30 = *(uint *)&this->field_0xc;
    puVar6 = (undefined4 *)((ulonglong)(local_30 << 4) + *(longlong *)this);
    local_40 = puVar6 + 1;
    local_38 = ((ulonglong)local_30 << (0xff < local_30) + (0xffff < local_30)) + (longlong)local_40
    ;
    local_2c = *puVar6;
    FCompactHashTableView::Add((FCompactHashTableView *)&local_40,*(uint *)&this->field_0x8,uVar4);
    iVar3 = *(int *)&this->field_0x8;
    *(int *)&this->field_0x8 = iVar3 + 1;
    puVar7 = (ulonglong *)(*(longlong *)this + (longlong)iVar3 * 0x10);
    *puVar7 = (ulonglong)local_58.Ptr;
    puVar7[1] = CONCAT44(uStack_4c,uStack_50);
  }
  *(int *)TVar5 = iVar2;
  *(bool *)((longlong)TVar5 + 4) = bVar8;
  return TVar5;
}

// Emplace<TPairInitializer<FString_const_&,int_const_&>_> @ 141508340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FSetElementId,bool> __thiscall
TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
::Emplace<TPairInitializer<FString_const_&,int_const_&>_>
          (TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *this,EInPlace param_1,TPairInitializer<FString_const_&,int_const_&> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  TTuple<FSetElementId,bool> TVar10;
  undefined4 *puVar11;
  undefined8 *in_R9;
  bool bVar12;
  undefined1 auStack_98 [32];
  FCompactSetLayout local_78;
  undefined4 *local_70;
  longlong local_68;
  uint local_60;
  undefined4 local_5c;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  TVar10._4_4_ = in_register_00000014;
  TVar10._0_4_ = param_1;
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar11 = (undefined4 *)in_R9[1];
  ::FString::FString(&local_58,(FString *)*in_R9);
  local_48 = *puVar11;
  iVar8 = local_58.Data.ArrayNum + -1;
  FVar5.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    iVar8 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar5.Data);
  iVar8 = FindIndexByHash<FString>(this,uVar7,&local_58);
  bVar12 = iVar8 != -1;
  if (bVar12) {
    puVar1 = (undefined8 *)(*(longlong *)this + (longlong)iVar8 * 0x18);
    pvVar4 = *(void **)(*(longlong *)this + (longlong)iVar8 * 0x18);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *puVar1 = local_58.Data.AllocatorInstance.Data;
    puVar1[1] = CONCAT44(local_58.Data.ArrayMax,local_58.Data.ArrayNum);
    puVar1[2] = CONCAT44(uStack_44,local_48);
  }
  else {
    iVar8 = *(int *)&this->field_0x8;
    if (iVar8 == *(int *)&this->field_0xc) {
      local_78.Size = 0x18;
      local_78.Alignment = 8;
      uVar9 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                        ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,iVar8 + 1,&local_78);
      if (*(uint *)&this->field_0xc < uVar9) {
        if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
        }
        local_78.Size = 0x18;
        local_78.Alignment = 8;
        bVar6 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                          ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,uVar9,&local_78,true
                          );
        if (bVar6) {
          Rehash(this);
        }
      }
    }
    local_60 = *(uint *)&this->field_0xc;
    puVar11 = (undefined4 *)((ulonglong)(local_60 * 0x18) + *(longlong *)this);
    local_70 = puVar11 + 1;
    local_68 = ((ulonglong)local_60 << (0xff < local_60) + (0xffff < local_60)) + (longlong)local_70
    ;
    local_5c = *puVar11;
    FCompactHashTableView::Add((FCompactHashTableView *)&local_70,*(uint *)&this->field_0x8,uVar7);
    iVar2 = *(int *)&this->field_0x8;
    *(int *)&this->field_0x8 = iVar2 + 1;
    lVar3 = *(longlong *)this;
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
    *puVar1 = local_58.Data.AllocatorInstance.Data;
    puVar1[1] = CONCAT44(local_58.Data.ArrayMax,local_58.Data.ArrayNum);
    *(ulonglong *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = CONCAT44(uStack_44,local_48);
  }
  *(int *)TVar10 = iVar8;
  *(bool *)((longlong)TVar10 + 4) = bVar12;
  return TVar10;
}

// EmplaceByHash<int_const_&> @ 14150a290

TTuple<FSetElementId,bool> __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::EmplaceByHash<int_const_&>
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,
          EInPlace param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_register_00000014;
  TTuple<FSetElementId,bool> TVar4;
  undefined4 *puVar5;
  bool bVar6;
  int iStack0000000000000028;
  int iStack000000000000002c;
  undefined4 *local_38;
  longlong local_30;
  uint local_28;
  undefined4 local_24;
  
  TVar4._4_4_ = in_register_00000014;
  TVar4._0_4_ = param_1;
  iVar1 = *(int *)_iStack0000000000000028;
  iStack0000000000000028 = iVar1;
  iVar2 = FindIndexByHash<int>(this,(uint)param_3,&stack0x00000028);
  bVar6 = iVar2 != -1;
  if (bVar6) {
    *(int *)(*(longlong *)this + (longlong)iVar2 * 4) = iVar1;
  }
  else {
    iVar2 = *(int *)&this->field_0x8;
    if (iVar2 == *(int *)&this->field_0xc) {
      iStack0000000000000028 = 4;
      iStack000000000000002c = 4;
      iVar3 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                        ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,iVar2 + 1,
                         (FCompactSetLayout *)&stack0x00000028);
      Reserve(this,iVar3);
    }
    local_28 = *(uint *)&this->field_0xc;
    puVar5 = (undefined4 *)((ulonglong)(local_28 * 4) + *(longlong *)this);
    local_38 = puVar5 + 1;
    local_30 = ((ulonglong)local_28 << (0xff < local_28) + (0xffff < local_28)) + (longlong)local_38
    ;
    local_24 = *puVar5;
    FCompactHashTableView::Add
              ((FCompactHashTableView *)&local_38,*(uint *)&this->field_0x8,(uint)param_3);
    iVar3 = *(int *)&this->field_0x8;
    *(int *)&this->field_0x8 = iVar3 + 1;
    *(int *)(*(longlong *)this + (longlong)iVar3 * 4) = iVar1;
  }
  *(int *)TVar4 = iVar2;
  *(bool *)((longlong)TVar4 + 4) = bVar6;
  return TVar4;
}

// EmplaceByHash<FString_const_&> @ 14150a4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FSetElementId,bool> __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::
EmplaceByHash<FString_const_&>
          (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *this,
          EInPlace param_1,uint param_2,FString *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  FString *_Src;
  undefined8 *_Dst;
  undefined4 in_register_00000014;
  TTuple<FSetElementId,bool> TVar4;
  undefined4 *puVar5;
  bool bVar6;
  FString *in_stack_00000028;
  undefined1 auStack_98 [32];
  FCompactSetLayout local_78;
  undefined4 *local_70;
  longlong local_68;
  uint local_60;
  undefined4 local_5c;
  FString local_58;
  ulonglong local_48;
  
  TVar4._4_4_ = in_register_00000014;
  TVar4._0_4_ = param_1;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  _Src = ::FString::FString(&local_58,in_stack_00000028);
  iVar2 = FindIndexByHash<FString>(this,(uint)param_3,_Src);
  bVar6 = iVar2 != -1;
  if (bVar6) {
    _Dst = (undefined8 *)(*(longlong *)this + (longlong)iVar2 * 0x10);
    if ((void *)*_Dst != (void *)0x0) {
      FMemory::Free((void *)*_Dst);
    }
  }
  else {
    iVar2 = *(int *)&this->field_0x8;
    if (iVar2 == *(int *)&this->field_0xc) {
      local_78 = (FCompactSetLayout)&DAT_800000010;
      uVar3 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                        ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,iVar2 + 1,&local_78);
      if (*(uint *)&this->field_0xc < uVar3) {
        if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar3);
        }
        local_78 = (FCompactSetLayout)&DAT_800000010;
        bVar1 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                          ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,uVar3,&local_78,true
                          );
        if (bVar1) {
          Rehash(this);
        }
      }
    }
    local_60 = *(uint *)&this->field_0xc;
    puVar5 = (undefined4 *)((ulonglong)(local_60 << 4) + *(longlong *)this);
    local_70 = puVar5 + 1;
    local_68 = ((ulonglong)local_60 << (0xff < local_60) + (0xffff < local_60)) + (longlong)local_70
    ;
    local_5c = *puVar5;
    FCompactHashTableView::Add
              ((FCompactHashTableView *)&local_70,*(uint *)&this->field_0x8,(uint)param_3);
    _Dst = (undefined8 *)((longlong)*(int *)&this->field_0x8 * 0x10 + *(longlong *)this);
    *(int *)&this->field_0x8 = *(int *)&this->field_0x8 + 1;
  }
  memmove(_Dst,_Src,0x10);
  *(int *)TVar4 = iVar2;
  *(bool *)((longlong)TVar4 + 4) = bVar6;
  return TVar4;
}

// EmplaceByHash<TUniquePtr<FString,TDefaultDelete<FString>_>_> @ 14150ae90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FSetElementId,bool> __thiscall
TCompactSet<TUniquePtr<FString,TDefaultDelete<FString>_>,DefaultKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,0>,FDefaultCompactSetAllocator>
::EmplaceByHash<TUniquePtr<FString,TDefaultDelete<FString>_>_>
          (TCompactSet<TUniquePtr<FString,TDefaultDelete<FString>_>,DefaultKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,0>,FDefaultCompactSetAllocator>
           *this,EInPlace param_1,uint param_2,TUniquePtr<FString,TDefaultDelete<FString>_> *param_3
          )

{
  byte bVar1;
  ushort uVar2;
  FString *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TTuple<FSetElementId,bool> TVar8;
  char cVar9;
  undefined4 in_register_00000014;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *in_stack_00000028;
  undefined1 auStack_88 [32];
  FCompactSetLayout local_68;
  undefined4 *local_60;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  TUniquePtr<FString,TDefaultDelete<FString>_> local_48;
  ulonglong local_40;
  
  TVar8._4_4_ = in_register_00000014;
  TVar8._0_4_ = param_1;
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar14 = (ulonglong)param_3 & 0xffffffff;
  pFVar3 = (FString *)*in_stack_00000028;
  *in_stack_00000028 = 0;
  cVar9 = '\0';
  local_48.Ptr = pFVar3;
  if (*(int *)&this->field_0x8 != 0) {
    uVar10 = *(uint *)&this->field_0xc;
    lVar13 = (longlong)(int)uVar10;
    lVar4 = *(longlong *)this;
    iVar7 = *(int *)((ulonglong)(uVar10 * 8) + lVar4);
    lVar11 = lVar4 + 4 + (ulonglong)(uVar10 * 8);
    if (0xffff < uVar10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar10) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      for (bVar1 = *(byte *)(lVar13 + (uVar14 & iVar7 - 1) + lVar11); bVar1 != 0xff;
          bVar1 = *(byte *)((ulonglong)bVar1 + lVar11)) {
        if (*(FString **)(lVar4 + (ulonglong)bVar1 * 8) == pFVar3) {
          uVar10 = (uint)bVar1;
          goto LAB_14150b0d1;
        }
      }
    }
    else if (cVar9 == '\x02') {
      for (uVar2 = *(ushort *)(lVar11 + ((iVar7 - 1 & uVar14) + lVar13) * 2); uVar2 != 0xffff;
          uVar2 = *(ushort *)(lVar11 + (ulonglong)uVar2 * 2)) {
        if (*(FString **)(lVar4 + (ulonglong)uVar2 * 8) == pFVar3) {
          uVar10 = (uint)uVar2;
          goto LAB_14150b0d1;
        }
      }
    }
    else if (cVar9 == '\x04') {
      for (uVar10 = *(uint *)(lVar11 + ((iVar7 - 1 & uVar14) + lVar13) * 4); uVar10 != 0xffffffff;
          uVar10 = *(uint *)(lVar11 + (ulonglong)uVar10 * 4)) {
        if (*(FString **)(lVar4 + (ulonglong)uVar10 * 8) == pFVar3) goto LAB_14150b0d1;
      }
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        TVar8 = (TTuple<FSetElementId,bool>)(*pcVar5)();
        return TVar8;
      }
    }
  }
  bVar6 = false;
LAB_14150af67:
  uVar10 = *(uint *)&this->field_0x8;
  if (uVar10 == *(uint *)&this->field_0xc) {
    local_68.Size = 8;
    local_68.Alignment = 8;
    iVar7 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,uVar10 + 1,&local_68);
    Reserve(this,iVar7);
  }
  local_50 = *(uint *)&this->field_0xc;
  puVar12 = (undefined4 *)((ulonglong)(local_50 * 8) + *(longlong *)this);
  local_60 = puVar12 + 1;
  local_58 = ((ulonglong)local_50 << (0xff < local_50) + (0xffff < local_50)) + (longlong)local_60;
  local_4c = *puVar12;
  FCompactHashTableView::Add
            ((FCompactHashTableView *)&local_60,*(uint *)&this->field_0x8,(uint)param_3);
  iVar7 = *(int *)&this->field_0x8;
  *(int *)&this->field_0x8 = iVar7 + 1;
  *(FString **)(*(longlong *)this + (longlong)iVar7 * 8) = pFVar3;
LAB_14150b00a:
  *(uint *)TVar8 = uVar10;
  *(bool *)((longlong)TVar8 + 4) = bVar6;
  return TVar8;
LAB_14150b0d1:
  bVar6 = uVar10 != 0xffffffff;
  if (bVar6) {
    MoveByRelocate<TUniquePtr<FString,TDefaultDelete<FString>_>_>
              ((TUniquePtr<FString,TDefaultDelete<FString>_> *)(lVar4 + (longlong)(int)uVar10 * 8),
               &local_48);
    goto LAB_14150b00a;
  }
  goto LAB_14150af67;
}

// FindIndexByHash<int> @ 14150b1f0

int __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::FindIndexByHash<int>
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,uint param_1,
          int *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (*(int *)&this->field_0x8 != 0) {
    uVar8 = *(uint *)&this->field_0xc;
    lVar10 = (longlong)(int)uVar8;
    lVar1 = *(longlong *)this;
    iVar5 = *(int *)((ulonglong)(uVar8 * 4) + lVar1);
    cVar6 = '\0';
    lVar9 = lVar1 + 4 + (ulonglong)(uVar8 * 4);
    if (0xffff < uVar8) {
      cVar6 = '\x02';
    }
    cVar6 = (0xff < uVar8) + '\x01' + cVar6;
    if (cVar6 == '\x01') {
      bVar7 = *(byte *)(lVar10 + (ulonglong)(param_1 & iVar5 - 1U) + lVar9);
      if (bVar7 != 0xff) {
        do {
          if (*(int *)(lVar1 + (ulonglong)bVar7 * 4) == *param_2) {
            return (int)bVar7;
          }
          bVar7 = *(byte *)((ulonglong)bVar7 + lVar9);
        } while (bVar7 != 0xff);
        return -1;
      }
    }
    else if (cVar6 == '\x02') {
      uVar4 = *(ushort *)(lVar9 + ((ulonglong)(iVar5 - 1U & param_1) + lVar10) * 2);
      if (uVar4 != 0xffff) {
        do {
          if (*(int *)(lVar1 + (ulonglong)uVar4 * 4) == *param_2) {
            return (int)uVar4;
          }
          uVar4 = *(ushort *)(lVar9 + (ulonglong)uVar4 * 2);
        } while (uVar4 != 0xffff);
        return -1;
      }
    }
    else if (cVar6 == '\x04') {
      uVar8 = *(uint *)(lVar9 + ((ulonglong)(iVar5 - 1U & param_1) + lVar10) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          if (*(int *)(lVar1 + (ulonglong)uVar8 * 4) == *param_2) {
            return uVar8;
          }
          uVar8 = *(uint *)(lVar9 + (ulonglong)uVar8 * 4);
        } while (uVar8 != 0xffffffff);
        return -1;
      }
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TUniquePtr<FString,TDefaultDelete<FString>_>_> @ 14150b9f0

int __thiscall
TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
::FindIndexByHash<TUniquePtr<FString,TDefaultDelete<FString>_>_>
          (TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
           *this,uint param_1,TUniquePtr<FString,TDefaultDelete<FString>_> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (*(int *)&this->field_0x8 != 0) {
    uVar8 = *(uint *)&this->field_0xc;
    lVar10 = (longlong)(int)uVar8;
    lVar1 = *(longlong *)this;
    iVar4 = *(int *)((ulonglong)(uVar8 << 4) + lVar1);
    lVar9 = lVar1 + 4 + (ulonglong)(uVar8 << 4);
    cVar5 = '\0';
    if (0xffff < uVar8) {
      cVar5 = '\x02';
    }
    cVar5 = (0xff < uVar8) + '\x01' + cVar5;
    if (cVar5 == '\x01') {
      bVar6 = *(byte *)(lVar10 + (ulonglong)(param_1 & iVar4 - 1U) + lVar9);
      if (bVar6 != 0xff) {
        do {
          if (*(FString **)(lVar1 + (ulonglong)bVar6 * 0x10) == param_2->Ptr) {
            return (int)bVar6;
          }
          bVar6 = *(byte *)((ulonglong)bVar6 + lVar9);
        } while (bVar6 != 0xff);
        return -1;
      }
    }
    else if (cVar5 == '\x02') {
      uVar7 = *(ushort *)(lVar9 + ((ulonglong)(iVar4 - 1U & param_1) + lVar10) * 2);
      if (uVar7 != 0xffff) {
        do {
          if (*(FString **)(lVar1 + (ulonglong)uVar7 * 0x10) == param_2->Ptr) {
            return (int)uVar7;
          }
          uVar7 = *(ushort *)(lVar9 + (ulonglong)uVar7 * 2);
        } while (uVar7 != 0xffff);
        return -1;
      }
    }
    else if (cVar5 == '\x04') {
      uVar8 = *(uint *)(lVar9 + ((ulonglong)(iVar4 - 1U & param_1) + lVar10) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          if (*(FString **)(lVar1 + (ulonglong)uVar8 * 0x10) == param_2->Ptr) {
            return uVar8;
          }
          uVar8 = *(uint *)(lVar9 + (ulonglong)uVar8 * 4);
        } while (uVar8 != 0xffffffff);
        return -1;
      }
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14150bb90

int __thiscall
TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
::FindIndexByHash<FString>
          (TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *this,uint param_1,FString *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (*(int *)&this->field_0x8 != 0) {
    uVar3 = *(uint *)&this->field_0xc;
    lVar11 = (longlong)(int)uVar3;
    lVar5 = *(longlong *)this;
    lVar12 = lVar5 + 4 + (ulonglong)(uVar3 * 0x18);
    iVar8 = *(int *)((ulonglong)(uVar3 * 0x18) + lVar5);
    cVar9 = '\0';
    if (0xffff < uVar3) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar3) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      bVar1 = *(byte *)(lVar11 + (ulonglong)(param_1 & iVar8 - 1U) + lVar12);
      while (bVar1 != 0xff) {
        iVar8 = (param_2->Data).ArrayNum;
        uVar10 = (ulonglong)bVar1;
        iVar4 = *(int *)(lVar5 + 8 + uVar10 * 0x18);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) goto LAB_14150bd76;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + uVar10 * 0x18),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
LAB_14150bd76:
          return (uint)bVar1;
        }
        bVar1 = *(byte *)(uVar10 + lVar12);
      }
    }
    else if (cVar9 == '\x02') {
      uVar2 = *(ushort *)(lVar12 + ((ulonglong)(iVar8 - 1U & param_1) + lVar11) * 2);
      while (uVar2 != 0xffff) {
        iVar8 = (param_2->Data).ArrayNum;
        uVar10 = (ulonglong)uVar2;
        iVar4 = *(int *)(lVar5 + 8 + uVar10 * 0x18);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) goto LAB_14150bd06;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + uVar10 * 0x18),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
LAB_14150bd06:
          return (uint)uVar2;
        }
        uVar2 = *(ushort *)(lVar12 + uVar10 * 2);
      }
    }
    else if (cVar9 == '\x04') {
      uVar3 = *(uint *)(lVar12 + ((ulonglong)(iVar8 - 1U & param_1) + lVar11) * 4);
      while (uVar3 != 0xffffffff) {
        iVar8 = (param_2->Data).ArrayNum;
        uVar10 = (ulonglong)uVar3;
        iVar4 = *(int *)(lVar5 + 8 + uVar10 * 0x18);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) {
            return uVar3;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + uVar10 * 0x18),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
          return uVar3;
        }
        uVar3 = *(uint *)(lVar12 + uVar10 * 4);
      }
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14150bd90

int __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::
FindIndexByHash<FString>
          (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *this,
          uint param_1,FString *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (*(int *)&this->field_0x8 != 0) {
    uVar3 = *(uint *)&this->field_0xc;
    lVar11 = (longlong)(int)uVar3;
    lVar5 = *(longlong *)this;
    iVar8 = *(int *)((ulonglong)(uVar3 << 4) + lVar5);
    lVar10 = lVar5 + 4 + (ulonglong)(uVar3 << 4);
    cVar9 = '\0';
    if (0xffff < uVar3) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar3) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      bVar1 = *(byte *)(lVar11 + (ulonglong)(param_1 & iVar8 - 1U) + lVar10);
      while (bVar1 != 0xff) {
        iVar8 = (param_2->Data).ArrayNum;
        uVar12 = (ulonglong)bVar1;
        iVar4 = *(int *)(lVar5 + 8 + uVar12 * 0x10);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) goto LAB_14150bf76;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + uVar12 * 0x10),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
LAB_14150bf76:
          return (uint)bVar1;
        }
        bVar1 = *(byte *)(uVar12 + lVar10);
      }
    }
    else if (cVar9 == '\x02') {
      for (uVar2 = *(ushort *)(lVar10 + ((ulonglong)(iVar8 - 1U & param_1) + lVar11) * 2);
          uVar2 != 0xffff; uVar2 = *(ushort *)(lVar10 + (ulonglong)uVar2 * 2)) {
        iVar8 = (param_2->Data).ArrayNum;
        iVar4 = *(int *)(lVar5 + 8 + (ulonglong)uVar2 * 0x10);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) goto LAB_14150bf05;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + (ulonglong)uVar2 * 0x10),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
LAB_14150bf05:
          return (uint)uVar2;
        }
      }
    }
    else if (cVar9 == '\x04') {
      for (uVar3 = *(uint *)(lVar10 + ((ulonglong)(iVar8 - 1U & param_1) + lVar11) * 4);
          uVar3 != 0xffffffff; uVar3 = *(uint *)(lVar10 + (ulonglong)uVar3 * 4)) {
        iVar8 = (param_2->Data).ArrayNum;
        iVar4 = *(int *)(lVar5 + 8 + (ulonglong)uVar3 * 0x10);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) {
            return uVar3;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + (ulonglong)uVar3 * 0x10),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
          return uVar3;
        }
      }
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
  }
  return -1;
}

// RemoveByIndexAndHash<0> @ 14151da40

void __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::RemoveByIndexAndHash<0>
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,int param_1,
          uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  puVar1 = &this->field_0x8;
  if ((param_1 < 0) || (*(int *)puVar1 <= param_1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementIndex >= 0 && ElementIndex < this->NumElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                       ,0x5dc,L"Invalid ElementIndex passed to UE_TCOMPACT_SET::RemoveByIndex");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar2 = *(uint *)&this->field_0xc;
  lVar6 = *(longlong *)this;
  uVar3 = *(uint *)((ulonglong)(uVar2 * 4) + lVar6);
  puVar11 = (uint *)(lVar6 + 4 + (ulonglong)(uVar2 * 4));
  iVar4 = *(int *)puVar1;
  uVar12 = iVar4 - 1;
  cVar9 = (0xffff < uVar2) * '\x02' + '\x01' + (0xff < uVar2);
  puVar10 = (uint *)(((ulonglong)uVar2 << (0xffff < uVar2) + (0xff < uVar2)) + (longlong)puVar11);
  if (param_1 == uVar12) {
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (param_1,param_2,param_1,param_2,(uchar *)puVar10,uVar3,(uchar *)puVar11,uVar2);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (param_1,param_2,param_1,param_2,(ushort *)puVar10,uVar3,(ushort *)puVar11,uVar2);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (param_1,param_2,param_1,param_2,puVar10,uVar3,puVar11,uVar2);
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  else {
    uVar5 = *(uint *)(lVar6 + -4 + (longlong)iVar4 * 4);
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (param_1,param_2,uVar12,uVar5,(uchar *)puVar10,uVar3,(uchar *)puVar11,uVar2);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (param_1,param_2,uVar12,uVar5,(ushort *)puVar10,uVar3,(ushort *)puVar11,uVar2);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (param_1,param_2,uVar12,uVar5,puVar10,uVar3,puVar11,uVar2);
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(undefined4 *)(lVar6 + (longlong)param_1 * 4) =
         *(undefined4 *)(lVar6 + (longlong)iVar4 * 4 + -4);
  }
  *(int *)puVar1 = *(int *)puVar1 + -1;
  return;
}

// RemoveByIndexAndHash<0> @ 14151dc90

void __thiscall
TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
::RemoveByIndexAndHash<0>
          (TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *this,int param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  bool bVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  
  puVar1 = &this->field_0x8;
  if (((param_1 < 0) || (*(int *)puVar1 <= param_1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementIndex >= 0 && ElementIndex < this->NumElements",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                          ,0x5dc,L"Invalid ElementIndex passed to UE_TCOMPACT_SET::RemoveByIndex"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar2 = *(uint *)&this->field_0xc;
  iVar15 = 0;
  lVar6 = *(longlong *)this;
  puVar17 = (uint *)(lVar6 + 4 + (ulonglong)(uVar2 * 0x18));
  uVar3 = *(uint *)((ulonglong)(uVar2 * 0x18) + lVar6);
  bVar10 = 0xff < uVar2;
  bVar8 = 0xffff < uVar2;
  iVar4 = *(int *)puVar1;
  puVar16 = (uint *)(((ulonglong)uVar2 << bVar8 + bVar10) + (longlong)puVar17);
  uVar12 = iVar4 - 1;
  if (param_1 == uVar12) {
    cVar11 = bVar8 * '\x02' + '\x01' + bVar10;
    if (cVar11 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (param_1,param_2,param_1,param_2,(uchar *)puVar16,uVar3,(uchar *)puVar17,uVar2);
    }
    else if (cVar11 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (param_1,param_2,param_1,param_2,(ushort *)puVar16,uVar3,(ushort *)puVar17,uVar2);
    }
    else if (cVar11 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (param_1,param_2,param_1,param_2,puVar16,uVar3,puVar17,uVar2);
    }
    else {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                          ,0x178,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pvVar7 = *(void **)(lVar6 + -0x18 + (longlong)iVar4 * 0x18);
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  else {
    iVar5 = *(int *)(lVar6 + -0x10 + (longlong)iVar4 * 0x18);
    if (iVar5 == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)(lVar6 + -0x18 + (longlong)iVar4 * 0x18);
      iVar15 = iVar5 + -1;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar14);
    cVar11 = bVar10 + bVar8 * '\x02';
    if (cVar11 == '\0') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (param_1,param_2,uVar12,uVar13,(uchar *)puVar16,uVar3,(uchar *)puVar17,uVar2);
    }
    else if (cVar11 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (param_1,param_2,uVar12,uVar13,(ushort *)puVar16,uVar3,(ushort *)puVar17,uVar2);
    }
    else if (cVar11 == '\x03') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (param_1,param_2,uVar12,uVar13,puVar16,uVar3,puVar17,uVar2);
    }
    else {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                          ,0x178,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pvVar7 = *(void **)(lVar6 + (longlong)param_1 * 0x18);
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    memmove((void *)(lVar6 + (longlong)param_1 * 0x18),
            (void *)(lVar6 + (longlong)(int)uVar12 * 0x18),0x18);
    *(int *)&this->field_0x8 = *(int *)&this->field_0x8 + -1;
  }
  return;
}

// RemoveImpl<FString,0> @ 141520080

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
::RemoveImpl<FString,0>
          (TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
           *this,uint param_1,FString *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uchar *puVar11;
  bool bVar12;
  FConstCompactHashTableView local_48;
  
  uVar1 = *(uint *)&this->field_0xc;
  lVar3 = *(longlong *)this;
  puVar11 = (uchar *)(lVar3 + 4 + (ulonglong)(uVar1 * 0x18));
  local_48.HashData = puVar11 + ((ulonglong)uVar1 << (0xff < uVar1) + (0xffff < uVar1));
  local_48.HashCount = *(uint *)((ulonglong)(uVar1 * 0x18) + lVar3);
  local_48.NextIndexData = puVar11;
  local_48.NextIndexCount = uVar1;
  uVar5 = FConstCompactHashTableView::GetFirst(&local_48,param_1);
  uVar10 = (ulonglong)uVar5;
  do {
    if (uVar5 == 0xffffffff) {
      return 0;
    }
    iVar9 = (int)uVar10;
    iVar6 = *(int *)(lVar3 + 8 + (longlong)iVar9 * 0x18);
    iVar2 = (param_2->Data).ArrayNum;
    if (iVar6 == iVar2) {
      if (iVar6 < 2) goto LAB_1415201fb;
      iVar6 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)(lVar3 + (longlong)iVar9 * 0x18),
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
      bVar12 = iVar6 == 0;
    }
    else {
      bVar12 = iVar6 + iVar2 == 1;
    }
    if (bVar12) {
LAB_1415201fb:
      RemoveByIndexAndHash<0>(this,iVar9,param_1);
      return 1;
    }
    cVar7 = '\0';
    if (0xffff < uVar1) {
      cVar7 = '\x02';
    }
    cVar7 = (0xff < uVar1) + '\x01' + cVar7;
    if (cVar7 == '\x01') {
      uVar8 = (ulonglong)puVar11[uVar10];
      bVar12 = puVar11[uVar10] == 0xff;
LAB_1415201a1:
      uVar10 = 0xffffffff;
      if (!bVar12) {
        uVar10 = uVar8;
      }
    }
    else {
      if (cVar7 == '\x02') {
        uVar8 = (ulonglong)*(ushort *)(puVar11 + uVar10 * 2);
        bVar12 = *(ushort *)(puVar11 + uVar10 * 2) == 0xffff;
        goto LAB_1415201a1;
      }
      if (cVar7 != '\x04') {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                            ,0x146,L"");
        if (!bVar12) {
          return 0;
        }
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      uVar5 = *(uint *)(puVar11 + uVar10 * 4);
      if (*(uint *)(puVar11 + uVar10 * 4) == 0xffffffff) {
        uVar5 = 0xffffffff;
      }
      uVar10 = (ulonglong)uVar5;
    }
    uVar5 = (uint)uVar10;
  } while( true );
}

// TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> @ 14157e0d0

TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> * __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::
TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
          (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *this,
          initializer_list<FString> *param_1)

{
  uint uVar1;
  FString *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *pTVar7;
  sbyte sVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint *puVar12;
  wchar_t *pwVar13;
  int iVar14;
  ulonglong uVar15;
  FString *pFVar16;
  void *_Dst;
  FCompactSetLayout local_res8;
  longlong local_res10;
  FString *local_res18;
  FString *local_res20;
  
  pFVar16 = param_1->_Last;
  uVar15 = 0;
  pFVar2 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  iVar11 = (int)((longlong)pFVar16 - (longlong)pFVar2 >> 4);
  local_res18 = pFVar2;
  local_res20 = pFVar16;
  if (iVar11 != 0) {
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)iVar11);
    }
    local_res8 = (FCompactSetLayout)&DAT_800000010;
    bVar5 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,iVar11,&local_res8,true)
    ;
    if ((bVar5) && (uVar6 = *(uint *)&this->field_0xc, 0 < (int)uVar6)) {
      local_res10 = *(longlong *)this;
      puVar12 = (uint *)((ulonglong)(uVar6 << 4) + local_res10);
      uVar1 = *puVar12;
      sVar8 = (0xff < uVar6) + (0xffff < uVar6);
      _Dst = (void *)((longlong)puVar12 + ((ulonglong)uVar6 << sVar8) + 4);
      memset(_Dst,0xff,(ulonglong)uVar1 << sVar8);
      lVar4 = local_res10;
      if (0 < *(int *)&this->field_0x8) {
        iVar11 = 0;
        if (0xffff < uVar6) {
          iVar11 = 2;
        }
        iVar11 = (0xff < uVar6) + 1 + iVar11;
        do {
          iVar14 = (int)uVar15;
          iVar9 = *(int *)(lVar4 + 8 + (longlong)iVar14 * 0x10);
          if (iVar9 == 0) {
            pwVar13 = L"";
            iVar9 = 0;
          }
          else {
            pwVar13 = *(wchar_t **)(lVar4 + (longlong)iVar14 * 0x10);
            iVar9 = iVar9 + -1;
          }
          uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
          if (iVar11 == 1) {
            uVar10 = (ulonglong)(uVar6 & uVar1 - 1);
            *(undefined1 *)((longlong)puVar12 + uVar15 + 4) =
                 *(undefined1 *)(uVar10 + (longlong)_Dst);
            *(char *)(uVar10 + (longlong)_Dst) = (char)uVar15;
          }
          else if (iVar11 == 2) {
            uVar10 = (ulonglong)(uVar1 - 1 & uVar6);
            *(undefined2 *)((longlong)puVar12 + uVar15 * 2 + 4) =
                 *(undefined2 *)((longlong)_Dst + uVar10 * 2);
            *(short *)((longlong)_Dst + uVar10 * 2) = (short)uVar15;
          }
          else if (iVar11 == 4) {
            uVar10 = (ulonglong)(uVar1 - 1 & uVar6);
            puVar12[uVar15 + 1] = *(uint *)((longlong)_Dst + uVar10 * 4);
            *(int *)((longlong)_Dst + uVar10 * 4) = iVar14;
          }
          else {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              pTVar7 = (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
                        *)(*pcVar3)();
              return pTVar7;
            }
          }
          uVar15 = (ulonglong)(iVar14 + 1U);
          pFVar2 = local_res18;
          pFVar16 = local_res20;
        } while ((int)(iVar14 + 1U) < *(int *)&this->field_0x8);
      }
    }
  }
  for (; pFVar2 != pFVar16; pFVar2 = pFVar2 + 1) {
    iVar9 = (pFVar2->Data).ArrayNum;
    iVar11 = iVar9 + -1;
    if (iVar9 == 0) {
      pwVar13 = L"";
      iVar11 = 0;
    }
    else {
      pwVar13 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar13);
    EmplaceByHash<FString_const_&>(this,(EInPlace)&local_res10,0,(FString *)(ulonglong)uVar6);
  }
  return this;
}

// Empty @ 1415bf260

void __thiscall
TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
::Empty(TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
        *this,int param_1)

{
  sbyte sVar1;
  uint uVar2;
  uint *puVar3;
  FCompactSetLayout local_res8;
  
  DestructItems<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,int>
            (*(TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int> **)this,
             *(int *)&this->field_0x8);
  local_res8 = (FCompactSetLayout)&DAT_800000010;
  *(undefined4 *)&this->field_0x8 = 0;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,false);
  uVar2 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar2) {
    puVar3 = (uint *)((ulonglong)(uVar2 << 4) + *(longlong *)this);
    sVar1 = (0xff < uVar2) + (0xffff < uVar2);
    memset((void *)((longlong)puVar3 + ((ulonglong)uVar2 << sVar1) + 4),0xff,
           (ulonglong)*puVar3 << sVar1);
  }
  return;
}

// Empty @ 1415bf310

void __thiscall
TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
::Empty(TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
        *this,int param_1)

{
  sbyte sVar1;
  uint uVar2;
  uint *puVar3;
  FCompactSetLayout local_res8;
  
  DestructItems<TTuple<FString,int>,int>(*(TTuple<FString,int> **)this,*(int *)&this->field_0x8);
  local_res8.Size = 0x18;
  local_res8.Alignment = 8;
  *(undefined4 *)&this->field_0x8 = 0;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,false);
  uVar2 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar2) {
    puVar3 = (uint *)((ulonglong)(uVar2 * 0x18) + *(longlong *)this);
    sVar1 = (0xff < uVar2) + (0xffff < uVar2);
    memset((void *)((longlong)puVar3 + ((ulonglong)uVar2 << sVar1) + 4),0xff,
           (ulonglong)*puVar3 << sVar1);
  }
  return;
}

// Empty @ 1415bf3c0

void __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Empty
          (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *this,
          int param_1)

{
  sbyte sVar1;
  uint uVar2;
  uint *puVar3;
  FCompactSetLayout local_res8;
  
  DestructItems<FString,int>(*(FString **)this,*(int *)&this->field_0x8);
  local_res8 = (FCompactSetLayout)&DAT_800000010;
  *(undefined4 *)&this->field_0x8 = 0;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,false);
  uVar2 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar2) {
    puVar3 = (uint *)((ulonglong)(uVar2 << 4) + *(longlong *)this);
    sVar1 = (0xff < uVar2) + (0xffff < uVar2);
    memset((void *)((longlong)puVar3 + ((ulonglong)uVar2 << sVar1) + 4),0xff,
           (ulonglong)*puVar3 << sVar1);
  }
  return;
}

// Rehash @ 1415dbb30

void __thiscall
TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
::Rehash(TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
         *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  sbyte sVar8;
  int iVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  uint uVar12;
  void *_Dst;
  longlong lVar13;
  
  uVar7 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar7) {
    lVar3 = *(longlong *)this;
    uVar1 = *(uint *)((ulonglong)(uVar7 * 0x18) + lVar3);
    lVar13 = lVar3 + 4 + (ulonglong)(uVar7 * 0x18);
    sVar8 = (0xff < uVar7) + (0xffff < uVar7);
    _Dst = (void *)(((ulonglong)uVar7 << sVar8) + lVar13);
    memset(_Dst,0xff,(ulonglong)uVar1 << sVar8);
    uVar12 = 0;
    if (0 < *(int *)&this->field_0x8) {
      cVar5 = '\0';
      if (0xffff < uVar7) {
        cVar5 = '\x02';
      }
      cVar5 = (0xff < uVar7) + '\x01' + cVar5;
      do {
        iVar2 = *(int *)(lVar3 + 8 + (longlong)(int)uVar12 * 0x18);
        iVar9 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar11 = L"";
          iVar9 = 0;
        }
        else {
          pwVar11 = *(wchar_t **)(lVar3 + (longlong)(int)uVar12 * 0x18);
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
        if (cVar5 == '\x01') {
          uVar10 = (ulonglong)(uVar7 & uVar1 - 1);
          *(undefined1 *)((ulonglong)uVar12 + lVar13) = *(undefined1 *)(uVar10 + (longlong)_Dst);
          *(char *)(uVar10 + (longlong)_Dst) = (char)uVar12;
        }
        else if (cVar5 == '\x02') {
          uVar10 = (ulonglong)(uVar1 - 1 & uVar7);
          *(undefined2 *)(lVar13 + (ulonglong)uVar12 * 2) =
               *(undefined2 *)((longlong)_Dst + uVar10 * 2);
          *(short *)((longlong)_Dst + uVar10 * 2) = (short)uVar12;
        }
        else if (cVar5 == '\x04') {
          uVar10 = (ulonglong)(uVar1 - 1 & uVar7);
          *(undefined4 *)(lVar13 + (ulonglong)uVar12 * 4) =
               *(undefined4 *)((longlong)_Dst + uVar10 * 4);
          *(uint *)((longlong)_Dst + uVar10 * 4) = uVar12;
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x171,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < *(int *)&this->field_0x8);
    }
  }
  return;
}

// Rehash @ 1415dbce0

void __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Rehash
          (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  sbyte sVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  void *_Dst;
  longlong lVar12;
  wchar_t *pwVar13;
  
  uVar7 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar7) {
    lVar3 = *(longlong *)this;
    uVar1 = *(uint *)((ulonglong)(uVar7 << 4) + lVar3);
    lVar12 = lVar3 + 4 + (ulonglong)(uVar7 << 4);
    sVar8 = (0xff < uVar7) + (0xffff < uVar7);
    _Dst = (void *)(((ulonglong)uVar7 << sVar8) + lVar12);
    memset(_Dst,0xff,(ulonglong)uVar1 << sVar8);
    uVar11 = 0;
    if (0 < *(int *)&this->field_0x8) {
      cVar5 = '\0';
      if (0xffff < uVar7) {
        cVar5 = '\x02';
      }
      cVar5 = (0xff < uVar7) + '\x01' + cVar5;
      do {
        iVar2 = *(int *)(lVar3 + 8 + (longlong)(int)uVar11 * 0x10);
        iVar9 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar13 = L"";
          iVar9 = 0;
        }
        else {
          pwVar13 = *(wchar_t **)(lVar3 + (longlong)(int)uVar11 * 0x10);
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
        if (cVar5 == '\x01') {
          uVar10 = (ulonglong)(uVar7 & uVar1 - 1);
          *(undefined1 *)((ulonglong)uVar11 + lVar12) = *(undefined1 *)(uVar10 + (longlong)_Dst);
          *(char *)(uVar10 + (longlong)_Dst) = (char)uVar11;
        }
        else if (cVar5 == '\x02') {
          uVar10 = (ulonglong)(uVar1 - 1 & uVar7);
          *(undefined2 *)(lVar12 + (ulonglong)uVar11 * 2) =
               *(undefined2 *)((longlong)_Dst + uVar10 * 2);
          *(short *)((longlong)_Dst + uVar10 * 2) = (short)uVar11;
        }
        else if (cVar5 == '\x04') {
          uVar10 = (ulonglong)(uVar1 - 1 & uVar7);
          *(undefined4 *)(lVar12 + (ulonglong)uVar11 * 4) =
               *(undefined4 *)((longlong)_Dst + uVar10 * 4);
          *(uint *)((longlong)_Dst + uVar10 * 4) = uVar11;
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x171,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)&this->field_0x8);
    }
  }
  return;
}

// Remove @ 1415e0d60

int __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Remove
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar8;
  uchar *puVar9;
  FConstCompactHashTableView local_38;
  
  if (*(int *)&this->field_0x8 == 0) {
    return 0;
  }
  uVar1 = *(uint *)&this->field_0xc;
  lVar2 = *(longlong *)this;
  puVar9 = (uchar *)(lVar2 + 4 + (ulonglong)(uVar1 * 4));
  local_38.HashData = puVar9 + ((ulonglong)uVar1 << (0xff < uVar1) + (0xffff < uVar1));
  local_38.HashCount = *(uint *)((ulonglong)(uVar1 * 4) + lVar2);
  local_38.NextIndexData = puVar9;
  local_38.NextIndexCount = uVar1;
  uVar5 = FConstCompactHashTableView::GetFirst(&local_38,param_1);
  do {
    while( true ) {
      if (uVar5 == 0xffffffff) {
        return 0;
      }
      if (*(int *)(lVar2 + (longlong)(int)uVar5 * 4) == param_1) {
        RemoveByIndexAndHash<0>(this,uVar5,param_1);
        return 1;
      }
      cVar8 = '\0';
      if (0xffff < uVar1) {
        cVar8 = '\x02';
      }
      cVar8 = (0xff < uVar1) + '\x01' + cVar8;
      if (cVar8 != '\x01') break;
      uVar7 = (ulonglong)uVar5;
      uVar5 = (uint)puVar9[uVar7];
      bVar4 = puVar9[uVar7] == 0xff;
LAB_1415e0e52:
      if (bVar4) {
        uVar5 = 0xffffffff;
      }
    }
    if (cVar8 == '\x02') {
      uVar7 = (ulonglong)uVar5;
      uVar5 = (uint)*(ushort *)(puVar9 + uVar7 * 2);
      bVar4 = *(ushort *)(puVar9 + uVar7 * 2) == 0xffff;
      goto LAB_1415e0e52;
    }
    if (cVar8 != '\x04') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x146,L"");
      if (!bVar4) {
        return 0;
      }
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    uVar5 = *(uint *)(puVar9 + (ulonglong)uVar5 * 4);
    if (uVar5 == 0xffffffff) {
      uVar5 = 0xffffffff;
    }
  } while( true );
}

// Reserve @ 1415e7f10

void __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Reserve
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  sbyte sVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  void *_Dst;
  longlong lVar11;
  FCompactSetLayout local_res8;
  
  if (*(uint *)&this->field_0xc < (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    local_res8.Size = 4;
    local_res8.Alignment = 4;
    bVar5 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,true
                      );
    if ((bVar5) && (uVar1 = *(uint *)&this->field_0xc, 0 < (int)uVar1)) {
      uVar10 = 0;
      lVar3 = *(longlong *)this;
      uVar2 = *(uint *)((ulonglong)(uVar1 * 4) + lVar3);
      lVar11 = lVar3 + 4 + (ulonglong)(uVar1 * 4);
      sVar7 = (0xff < uVar1) + (0xffff < uVar1);
      _Dst = (void *)(((ulonglong)uVar1 << sVar7) + lVar11);
      memset(_Dst,0xff,(ulonglong)uVar2 << sVar7);
      cVar6 = '\0';
      if (0 < *(int *)&this->field_0x8) {
        if (0xffff < uVar1) {
          cVar6 = '\x02';
        }
        cVar6 = (0xff < uVar1) + '\x01' + cVar6;
        do {
          iVar9 = (int)uVar10;
          uVar1 = *(uint *)(lVar3 + (longlong)iVar9 * 4);
          if (cVar6 == '\x01') {
            uVar8 = (ulonglong)(uVar1 & uVar2 - 1);
            *(undefined1 *)(uVar10 + lVar11) = *(undefined1 *)(uVar8 + (longlong)_Dst);
            *(char *)(uVar8 + (longlong)_Dst) = (char)uVar10;
          }
          else if (cVar6 == '\x02') {
            uVar8 = (ulonglong)(uVar2 - 1 & uVar1);
            *(undefined2 *)(lVar11 + uVar10 * 2) = *(undefined2 *)((longlong)_Dst + uVar8 * 2);
            *(short *)((longlong)_Dst + uVar8 * 2) = (short)uVar10;
          }
          else if (cVar6 == '\x04') {
            uVar8 = (ulonglong)(uVar2 - 1 & uVar1);
            *(undefined4 *)(lVar11 + uVar10 * 4) = *(undefined4 *)((longlong)_Dst + uVar8 * 4);
            *(int *)((longlong)_Dst + uVar8 * 4) = iVar9;
          }
          else {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar10 = (ulonglong)(iVar9 + 1U);
        } while ((int)(iVar9 + 1U) < *(int *)&this->field_0x8);
      }
    }
  }
  return;
}

// Reserve @ 1415e80c0

void __thiscall
TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
::Reserve(TCompactSet<TTuple<TUniquePtr<FString,TDefaultDelete<FString>_>,int>,TDefaultMapHashableKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,int,0>,FDefaultCompactSetAllocator>
          *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  void *_Dst;
  longlong lVar11;
  FCompactSetLayout local_res8;
  
  if (*(uint *)&this->field_0xc < (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    local_res8 = (FCompactSetLayout)&DAT_800000010;
    bVar4 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,true
                      );
    if ((bVar4) && (uVar7 = *(uint *)&this->field_0xc, 0 < (int)uVar7)) {
      uVar10 = 0;
      lVar2 = *(longlong *)this;
      uVar1 = *(uint *)((ulonglong)(uVar7 << 4) + lVar2);
      lVar11 = lVar2 + 4 + (ulonglong)(uVar7 << 4);
      sVar6 = (0xff < uVar7) + (0xffff < uVar7);
      _Dst = (void *)(((ulonglong)uVar7 << sVar6) + lVar11);
      memset(_Dst,0xff,(ulonglong)uVar1 << sVar6);
      cVar5 = '\0';
      if (0 < *(int *)&this->field_0x8) {
        if (0xffff < uVar7) {
          cVar5 = '\x02';
        }
        cVar5 = (0xff < uVar7) + '\x01' + cVar5;
        do {
          iVar9 = (int)uVar10;
          uVar8 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x10);
          uVar7 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          uVar7 = uVar7 >> 0x10 ^ uVar7;
          if (cVar5 == '\x01') {
            uVar8 = (ulonglong)(uVar7 & uVar1 - 1);
            *(undefined1 *)(uVar10 + lVar11) = *(undefined1 *)(uVar8 + (longlong)_Dst);
            *(char *)(uVar8 + (longlong)_Dst) = (char)uVar10;
          }
          else if (cVar5 == '\x02') {
            uVar8 = (ulonglong)(uVar1 - 1 & uVar7);
            *(undefined2 *)(lVar11 + uVar10 * 2) = *(undefined2 *)((longlong)_Dst + uVar8 * 2);
            *(short *)((longlong)_Dst + uVar8 * 2) = (short)uVar10;
          }
          else if (cVar5 == '\x04') {
            uVar8 = (ulonglong)(uVar1 - 1 & uVar7);
            *(undefined4 *)(lVar11 + uVar10 * 4) = *(undefined4 *)((longlong)_Dst + uVar8 * 4);
            *(int *)((longlong)_Dst + uVar8 * 4) = iVar9;
          }
          else {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar10 = (ulonglong)(iVar9 + 1U);
        } while ((int)(iVar9 + 1U) < *(int *)&this->field_0x8);
      }
    }
  }
  return;
}

// Reserve @ 1415e82a0

void __thiscall
TCompactSet<TUniquePtr<FString,TDefaultDelete<FString>_>,DefaultKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,0>,FDefaultCompactSetAllocator>
::Reserve(TCompactSet<TUniquePtr<FString,TDefaultDelete<FString>_>,DefaultKeyFuncs<TUniquePtr<FString,TDefaultDelete<FString>_>,0>,FDefaultCompactSetAllocator>
          *this,int param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  void *_Dst;
  longlong lVar11;
  FCompactSetLayout local_res8;
  
  if (*(uint *)&this->field_0xc < (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    local_res8.Size = 8;
    local_res8.Alignment = 8;
    bVar4 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,true
                      );
    if ((bVar4) && (uVar7 = *(uint *)&this->field_0xc, 0 < (int)uVar7)) {
      uVar10 = 0;
      lVar2 = *(longlong *)this;
      uVar1 = *(uint *)((ulonglong)(uVar7 * 8) + lVar2);
      lVar11 = lVar2 + 4 + (ulonglong)(uVar7 * 8);
      sVar6 = (0xff < uVar7) + (0xffff < uVar7);
      _Dst = (void *)(((ulonglong)uVar7 << sVar6) + lVar11);
      memset(_Dst,0xff,(ulonglong)uVar1 << sVar6);
      cVar5 = '\0';
      if (0 < *(int *)&this->field_0x8) {
        if (0xffff < uVar7) {
          cVar5 = '\x02';
        }
        cVar5 = (0xff < uVar7) + '\x01' + cVar5;
        do {
          iVar9 = (int)uVar10;
          uVar8 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 8);
          uVar7 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          uVar7 = uVar7 >> 0x10 ^ uVar7;
          if (cVar5 == '\x01') {
            uVar8 = (ulonglong)(uVar7 & uVar1 - 1);
            *(undefined1 *)(uVar10 + lVar11) = *(undefined1 *)(uVar8 + (longlong)_Dst);
            *(char *)(uVar8 + (longlong)_Dst) = (char)uVar10;
          }
          else if (cVar5 == '\x02') {
            uVar8 = (ulonglong)(uVar1 - 1 & uVar7);
            *(undefined2 *)(lVar11 + uVar10 * 2) = *(undefined2 *)((longlong)_Dst + uVar8 * 2);
            *(short *)((longlong)_Dst + uVar8 * 2) = (short)uVar10;
          }
          else if (cVar5 == '\x04') {
            uVar8 = (ulonglong)(uVar1 - 1 & uVar7);
            *(undefined4 *)(lVar11 + uVar10 * 4) = *(undefined4 *)((longlong)_Dst + uVar8 * 4);
            *(int *)((longlong)_Dst + uVar8 * 4) = iVar9;
          }
          else {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar10 = (ulonglong)(iVar9 + 1U);
        } while ((int)(iVar9 + 1U) < *(int *)&this->field_0x8);
      }
    }
  }
  return;
}

// EmplaceByHash<int_const_&> @ 141ae4d10

TTuple<FSetElementId,bool> __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_>::EmplaceByHash<int_const_&>
          (TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_> *this,
          EInPlace param_1,uint param_2,int *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  TTuple<FSetElementId,bool> TVar8;
  char cVar9;
  undefined4 in_register_00000014;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iStack0000000000000028;
  int iStack000000000000002c;
  undefined1 *local_48;
  undefined1 *local_40;
  uint local_38;
  undefined4 local_34;
  
  TVar8._4_4_ = in_register_00000014;
  TVar8._0_4_ = param_1;
  uVar12 = (ulonglong)param_3 & 0xffffffff;
  iVar3 = *(int *)_iStack0000000000000028;
  if (*(int *)&this->field_0x184 != 0) {
    uVar10 = *(uint *)&this->field_0x188;
    lVar11 = (longlong)(int)uVar10;
    iVar7 = *(int *)(&this->field_0x0 + uVar10 * 4);
    lVar5 = (ulonglong)(uVar10 * 4) + 4;
    cVar9 = '\0';
    if (0xffff < uVar10) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar10) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      for (bVar1 = (&this->field_0x4)[lVar11 + (uVar12 & iVar7 - 1) + lVar5 + -4]; bVar1 != 0xff;
          bVar1 = (&this->field_0x4)[(ulonglong)bVar1 + lVar5 + -4]) {
        if (*(int *)(&this->field_0x0 + (ulonglong)bVar1 * 4) == iVar3) {
          uVar10 = (uint)bVar1;
          goto LAB_141ae4f42;
        }
      }
    }
    else if (cVar9 == '\x02') {
      for (uVar2 = *(ushort *)(&this->field_0x4 + ((iVar7 - 1 & uVar12) + lVar11) * 2 + lVar5 + -4);
          uVar2 != 0xffff; uVar2 = *(ushort *)(&this->field_0x4 + (ulonglong)uVar2 * 2 + lVar5 + -4)
          ) {
        if (*(int *)(&this->field_0x0 + (ulonglong)uVar2 * 4) == iVar3) {
          uVar10 = (uint)uVar2;
          goto LAB_141ae4f42;
        }
      }
    }
    else if (cVar9 == '\x04') {
      for (uVar10 = *(uint *)(&this->field_0x4 + ((iVar7 - 1 & uVar12) + lVar11) * 4 + lVar5 + -4);
          uVar10 != 0xffffffff;
          uVar10 = *(uint *)(&this->field_0x4 + (ulonglong)uVar10 * 4 + lVar5 + -4)) {
        if (*(int *)(&this->field_0x0 + (ulonglong)uVar10 * 4) == iVar3) goto LAB_141ae4f42;
      }
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        TVar8 = (TTuple<FSetElementId,bool>)(*pcVar4)();
        return TVar8;
      }
    }
  }
  bVar6 = false;
LAB_141ae4dd1:
  uVar10 = *(uint *)&this->field_0x184;
  if (uVar10 == *(uint *)&this->field_0x188) {
    iStack0000000000000028 = 4;
    iStack000000000000002c = 4;
    iVar7 = TCompactSetBase<TFixedAllocator<388>_>::AllocatorCalculateSlackGrow
                      ((TCompactSetBase<TFixedAllocator<388>_> *)this,uVar10 + 1,
                       (FCompactSetLayout *)&stack0x00000028);
    Reserve(this,iVar7);
  }
  local_38 = *(uint *)&this->field_0x188;
  local_48 = &this->field_0x4 + local_38 * 4;
  local_40 = local_48 + ((ulonglong)local_38 << (0xff < local_38) + (0xffff < local_38));
  local_34 = *(undefined4 *)(&this->field_0x0 + local_38 * 4);
  FCompactHashTableView::Add
            ((FCompactHashTableView *)&local_48,*(uint *)&this->field_0x184,(uint)param_3);
  iVar7 = *(int *)&this->field_0x184;
  *(int *)&this->field_0x184 = iVar7 + 1;
  *(int *)(&this->field_0x0 + (longlong)iVar7 * 4) = iVar3;
LAB_141ae4e85:
  *(uint *)TVar8 = uVar10;
  *(bool *)((longlong)TVar8 + 4) = bVar6;
  return TVar8;
LAB_141ae4f42:
  bVar6 = uVar10 != 0xffffffff;
  if (bVar6) {
    *(int *)(&this->field_0x0 + (longlong)(int)uVar10 * 4) = iVar3;
    goto LAB_141ae4e85;
  }
  goto LAB_141ae4dd1;
}

// EmplaceByHash<FString_const_&> @ 141ae4f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FSetElementId,bool> __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
EmplaceByHash<FString_const_&>
          (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *this,
          EInPlace param_1,uint param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  FString *_Src;
  undefined4 in_register_00000014;
  TTuple<FSetElementId,bool> TVar5;
  undefined4 *puVar6;
  FString *in_stack_00000028;
  undefined1 auStack_88 [32];
  FCompactSetLayout local_68;
  undefined4 *local_60;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  FString local_48;
  ulonglong local_38;
  
  TVar5._4_4_ = in_register_00000014;
  TVar5._0_4_ = param_1;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  _Src = ::FString::FString(&local_48,in_stack_00000028);
  iVar1 = *(int *)&this->field_0x8;
  if (iVar1 == *(int *)&this->field_0xc) {
    local_68 = (FCompactSetLayout)&DAT_800000010;
    uVar4 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,iVar1 + 1,&local_68);
    if (*(uint *)&this->field_0xc < uVar4) {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar4);
      }
      local_68 = (FCompactSetLayout)&DAT_800000010;
      bVar3 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                        ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,uVar4,&local_68,true);
      if (bVar3) {
        Rehash(this);
      }
    }
  }
  local_50 = *(uint *)&this->field_0xc;
  puVar6 = (undefined4 *)((ulonglong)(local_50 << 4) + *(longlong *)this);
  local_60 = puVar6 + 1;
  local_58 = ((ulonglong)local_50 << (0xff < local_50) + (0xffff < local_50)) + (longlong)local_60;
  local_4c = *puVar6;
  FCompactHashTableView::Add
            ((FCompactHashTableView *)&local_60,*(uint *)&this->field_0x8,(uint)param_3);
  iVar2 = *(int *)&this->field_0x8;
  *(int *)&this->field_0x8 = iVar2 + 1;
  memmove((void *)((longlong)iVar2 * 0x10 + *(longlong *)this),_Src,0x10);
  *(int *)TVar5 = iVar1;
  *(undefined1 *)((longlong)TVar5 + 4) = 0;
  return TVar5;
}

// FindIndexByHash<FSetTestNonCopyableTestData> @ 141ae5780

int __thiscall
TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
::FindIndexByHash<FSetTestNonCopyableTestData>
          (TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
           *this,uint param_1,FSetTestNonCopyableTestData *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (*(int *)&this->field_0x8 != 0) {
    uVar8 = *(uint *)&this->field_0xc;
    lVar10 = (longlong)(int)uVar8;
    lVar1 = *(longlong *)this;
    iVar5 = *(int *)((ulonglong)(uVar8 * 4) + lVar1);
    cVar6 = '\0';
    lVar9 = lVar1 + 4 + (ulonglong)(uVar8 * 4);
    if (0xffff < uVar8) {
      cVar6 = '\x02';
    }
    cVar6 = (0xff < uVar8) + '\x01' + cVar6;
    if (cVar6 == '\x01') {
      bVar7 = *(byte *)(lVar10 + (ulonglong)(param_1 & iVar5 - 1U) + lVar9);
      if (bVar7 != 0xff) {
        do {
          if (*(uint *)(lVar1 + (ulonglong)bVar7 * 4) == param_2->Value) {
            return (int)bVar7;
          }
          bVar7 = *(byte *)((ulonglong)bVar7 + lVar9);
        } while (bVar7 != 0xff);
        return -1;
      }
    }
    else if (cVar6 == '\x02') {
      uVar4 = *(ushort *)(lVar9 + ((ulonglong)(iVar5 - 1U & param_1) + lVar10) * 2);
      if (uVar4 != 0xffff) {
        do {
          if (*(uint *)(lVar1 + (ulonglong)uVar4 * 4) == param_2->Value) {
            return (int)uVar4;
          }
          uVar4 = *(ushort *)(lVar9 + (ulonglong)uVar4 * 2);
        } while (uVar4 != 0xffff);
        return -1;
      }
    }
    else if (cVar6 == '\x04') {
      uVar8 = *(uint *)(lVar9 + ((ulonglong)(iVar5 - 1U & param_1) + lVar10) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          if (*(uint *)(lVar1 + (ulonglong)uVar8 * 4) == param_2->Value) {
            return uVar8;
          }
          uVar8 = *(uint *)(lVar9 + (ulonglong)uVar8 * 4);
        } while (uVar8 != 0xffffffff);
        return -1;
      }
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 141ae5910

int __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::
FindIndexByHash<FString>
          (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *this,
          uint param_1,FString *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if (*(int *)&this->field_0x8 != 0) {
    uVar3 = *(uint *)&this->field_0xc;
    lVar11 = (longlong)(int)uVar3;
    lVar5 = *(longlong *)this;
    iVar8 = *(int *)((ulonglong)(uVar3 << 4) + lVar5);
    lVar10 = lVar5 + 4 + (ulonglong)(uVar3 << 4);
    cVar9 = '\0';
    if (0xffff < uVar3) {
      cVar9 = '\x02';
    }
    cVar9 = (0xff < uVar3) + '\x01' + cVar9;
    if (cVar9 == '\x01') {
      bVar1 = *(byte *)(lVar11 + (ulonglong)(param_1 & iVar8 - 1U) + lVar10);
      while (bVar1 != 0xff) {
        iVar8 = (param_2->Data).ArrayNum;
        uVar12 = (ulonglong)bVar1;
        iVar4 = *(int *)(lVar5 + 8 + uVar12 * 0x10);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) goto LAB_141ae5af6;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + uVar12 * 0x10),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
LAB_141ae5af6:
          return (uint)bVar1;
        }
        bVar1 = *(byte *)(uVar12 + lVar10);
      }
    }
    else if (cVar9 == '\x02') {
      for (uVar2 = *(ushort *)(lVar10 + ((ulonglong)(iVar8 - 1U & param_1) + lVar11) * 2);
          uVar2 != 0xffff; uVar2 = *(ushort *)(lVar10 + (ulonglong)uVar2 * 2)) {
        iVar8 = (param_2->Data).ArrayNum;
        iVar4 = *(int *)(lVar5 + 8 + (ulonglong)uVar2 * 0x10);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) goto LAB_141ae5a85;
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + (ulonglong)uVar2 * 0x10),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
LAB_141ae5a85:
          return (uint)uVar2;
        }
      }
    }
    else if (cVar9 == '\x04') {
      for (uVar3 = *(uint *)(lVar10 + ((ulonglong)(iVar8 - 1U & param_1) + lVar11) * 4);
          uVar3 != 0xffffffff; uVar3 = *(uint *)(lVar10 + (ulonglong)uVar3 * 4)) {
        iVar8 = (param_2->Data).ArrayNum;
        iVar4 = *(int *)(lVar5 + 8 + (ulonglong)uVar3 * 0x10);
        if (iVar4 == iVar8) {
          if (iVar4 < 2) {
            return uVar3;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar5 + (ulonglong)uVar3 * 0x10),
                             (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar7 = iVar8 == 0;
        }
        else {
          bVar7 = iVar4 + iVar8 == 1;
        }
        if (bVar7) {
          return uVar3;
        }
      }
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
    }
  }
  return -1;
}

// RemoveByIndexAndHash<1> @ 141afce40

void __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::RemoveByIndexAndHash<1>
          (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *this,
          int param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 *_Dst;
  
  puVar1 = &this->field_0x8;
  if (((param_1 < 0) || (*(int *)puVar1 <= param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex >= 0 && ElementIndex < this->NumElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5dc,L"Invalid ElementIndex passed to UE_TCOMPACT_SET::RemoveByIndex"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar2 = *(uint *)&this->field_0xc;
  lVar5 = *(longlong *)this;
  iVar3 = *(int *)puVar1;
  puVar12 = (uint *)(lVar5 + 4 + (ulonglong)(uVar2 << 4));
  iVar10 = iVar3 + -1;
  uVar4 = *(uint *)((ulonglong)(uVar2 << 4) + lVar5);
  puVar11 = (uint *)(((ulonglong)uVar2 << (0xffff < uVar2) + (0xff < uVar2)) + (longlong)puVar12);
  cVar9 = (0xffff < uVar2) * '\x02' + '\x01' + (0xff < uVar2);
  if (param_1 == iVar10) {
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (param_1,param_2,param_1,param_2,(uchar *)puVar11,uVar4,(uchar *)puVar12,uVar2);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (param_1,param_2,param_1,param_2,(ushort *)puVar11,uVar4,(ushort *)puVar12,uVar2);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (param_1,param_2,param_1,param_2,puVar11,uVar4,puVar12,uVar2);
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pvVar6 = *(void **)(lVar5 + -0x10 + (longlong)iVar3 * 0x10);
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
  }
  else {
    if (cVar9 == '\x01') {
      UE::Core::CompactHashTable::RemoveStable<unsigned_char>
                (param_1,param_2,(uchar *)puVar11,uVar4,(uchar *)puVar12,uVar2);
    }
    else if (cVar9 == '\x02') {
      UE::Core::CompactHashTable::RemoveStable<unsigned_short>
                (param_1,param_2,(ushort *)puVar11,uVar4,(ushort *)puVar12,uVar2);
    }
    else if (cVar9 == '\x04') {
      UE::Core::CompactHashTable::RemoveStable<unsigned_int>
                (param_1,param_2,puVar11,uVar4,puVar12,uVar2);
    }
    else {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x17f,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    _Dst = (undefined8 *)((longlong)param_1 * 0x10 + lVar5);
    if ((void *)*_Dst != (void *)0x0) {
      FMemory::Free((void *)*_Dst);
    }
    memmove(_Dst,_Dst + 2,(longlong)(iVar10 - param_1) << 4);
  }
  *(int *)puVar1 = *(int *)puVar1 + -1;
  return;
}

// RemoveByIndexAndHash<0> @ 141afd0b0

void __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::RemoveByIndexAndHash<0>
          (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *this,
          int param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  bool bVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  undefined8 *_Dst;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  
  puVar1 = &this->field_0x8;
  if (((param_1 < 0) || (*(int *)puVar1 <= param_1)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementIndex >= 0 && ElementIndex < this->NumElements",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                          ,0x5dc,L"Invalid ElementIndex passed to UE_TCOMPACT_SET::RemoveByIndex"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar2 = *(uint *)&this->field_0xc;
  iVar15 = 0;
  lVar6 = *(longlong *)this;
  uVar3 = *(uint *)((ulonglong)(uVar2 << 4) + lVar6);
  puVar17 = (uint *)(lVar6 + 4 + (ulonglong)(uVar2 << 4));
  bVar10 = 0xff < uVar2;
  bVar8 = 0xffff < uVar2;
  iVar4 = *(int *)puVar1;
  puVar16 = (uint *)(((ulonglong)uVar2 << bVar8 + bVar10) + (longlong)puVar17);
  uVar12 = iVar4 - 1;
  if (param_1 == uVar12) {
    cVar11 = bVar8 * '\x02' + '\x01' + bVar10;
    if (cVar11 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (param_1,param_2,param_1,param_2,(uchar *)puVar16,uVar3,(uchar *)puVar17,uVar2);
    }
    else if (cVar11 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (param_1,param_2,param_1,param_2,(ushort *)puVar16,uVar3,(ushort *)puVar17,uVar2);
    }
    else if (cVar11 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (param_1,param_2,param_1,param_2,puVar16,uVar3,puVar17,uVar2);
    }
    else {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                          ,0x178,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pvVar7 = *(void **)(lVar6 + -0x10 + (longlong)iVar4 * 0x10);
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    *(int *)puVar1 = *(int *)puVar1 + -1;
  }
  else {
    iVar5 = *(int *)(lVar6 + -8 + (longlong)iVar4 * 0x10);
    if (iVar5 == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)(lVar6 + -0x10 + (longlong)iVar4 * 0x10);
      iVar15 = iVar5 + -1;
    }
    uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,pwVar14);
    cVar11 = bVar10 + bVar8 * '\x02';
    if (cVar11 == '\0') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (param_1,param_2,uVar12,uVar13,(uchar *)puVar16,uVar3,(uchar *)puVar17,uVar2);
    }
    else if (cVar11 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (param_1,param_2,uVar12,uVar13,(ushort *)puVar16,uVar3,(ushort *)puVar17,uVar2);
    }
    else if (cVar11 == '\x03') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (param_1,param_2,uVar12,uVar13,puVar16,uVar3,puVar17,uVar2);
    }
    else {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                          ,0x178,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    _Dst = (undefined8 *)((longlong)param_1 * 0x10 + lVar6);
    pvVar7 = (void *)*_Dst;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    memmove(_Dst,(void *)((longlong)(int)uVar12 * 0x10 + lVar6),0x10);
    *(int *)&this->field_0x8 = *(int *)&this->field_0x8 + -1;
  }
  return;
}

// RemoveImpl<FString,1> @ 141afd3b0

int __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::RemoveImpl<FString,1>
          (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *this,
          uint param_1,FString *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uchar *puVar17;
  bool bVar18;
  FConstCompactHashTableView local_58;
  
  uVar2 = *(uint *)&this->field_0xc;
  iVar10 = 0;
  lVar5 = *(longlong *)this;
  uVar14 = 0xffffffff;
  puVar16 = (uint *)((ulonglong)(uVar2 << 4) + lVar5);
  uVar3 = *puVar16;
  puVar16 = puVar16 + 1;
  puVar17 = (uchar *)(((ulonglong)uVar2 << (0xff < uVar2) + (0xffff < uVar2)) + (longlong)puVar16);
  local_58.NextIndexData = (uchar *)puVar16;
  local_58.HashData = puVar17;
  local_58.NextIndexCount = uVar2;
  local_58.HashCount = uVar3;
  uVar8 = FConstCompactHashTableView::GetFirst(&local_58,param_1);
  uVar7 = (ulonglong)uVar8;
  do {
    if (uVar8 == 0xffffffff) {
      return iVar10;
    }
    puVar15 = (undefined8 *)((longlong)(int)uVar7 * 0x10 + lVar5);
    iVar9 = (param_2->Data).ArrayNum;
    iVar4 = *(int *)(puVar15 + 1);
    if (iVar4 == iVar9) {
      if (1 < iVar4) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar15,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar18 = iVar9 == 0;
        goto LAB_141afd49b;
      }
LAB_141afd510:
      RemoveByIndexAndHash<1>(this,(int)uVar7,param_1);
      iVar10 = iVar10 + 1;
      if ((int)uVar14 == -1) {
        cVar11 = '\0';
        if (0xffff < uVar2) {
          cVar11 = '\x02';
        }
        cVar11 = (0xff < uVar2) + '\x01' + cVar11;
        if (cVar11 == '\x01') {
          uVar13 = (ulonglong)puVar17[uVar3 - 1 & param_1];
          if (puVar17[uVar3 - 1 & param_1] == 0xff) goto LAB_141afd637;
        }
        else if (cVar11 == '\x02') {
          uVar13 = (ulonglong)*(ushort *)(puVar17 + (ulonglong)(uVar3 - 1 & param_1) * 2);
          if (*(ushort *)(puVar17 + (ulonglong)(uVar3 - 1 & param_1) * 2) == 0xffff) {
            uVar13 = 0xffffffff;
          }
        }
        else {
          if (cVar11 != '\x04') {
            iVar9 = 0x133;
            goto LAB_141afd5fe;
          }
          uVar8 = *(uint *)(puVar17 + (ulonglong)(uVar3 - 1 & param_1) * 4);
          if (*(uint *)(puVar17 + (ulonglong)(uVar3 - 1 & param_1) * 4) == 0xffffffff) {
            uVar8 = 0xffffffff;
          }
          uVar13 = (ulonglong)uVar8;
        }
      }
      else {
        if ((int)uVar14 == *(int *)&this->field_0x8) {
          uVar14 = uVar7;
        }
        cVar11 = '\0';
        if (0xffff < uVar2) {
          cVar11 = '\x02';
        }
        cVar11 = (0xff < uVar2) + '\x01' + cVar11;
        if (cVar11 == '\x01') {
          uVar12 = (ulonglong)*(byte *)(uVar14 + (longlong)puVar16);
          uVar13 = 0xffffffff;
          if (*(byte *)(uVar14 + (longlong)puVar16) != 0xff) {
LAB_141afd675:
            uVar13 = uVar12;
          }
        }
        else if (cVar11 == '\x02') {
          uVar1 = *(ushort *)((longlong)puVar16 + uVar14 * 2);
          uVar12 = (ulonglong)uVar1;
          if (uVar1 != 0xffff) goto LAB_141afd675;
          uVar13 = 0xffffffff;
        }
        else {
          if (cVar11 != '\x04') goto LAB_141afd5f8;
          uVar8 = puVar16[uVar14];
          if (puVar16[uVar14] == 0xffffffff) {
            uVar8 = 0xffffffff;
          }
          uVar13 = (ulonglong)uVar8;
        }
      }
    }
    else {
      bVar18 = iVar4 + iVar9 == 1;
LAB_141afd49b:
      if (bVar18) goto LAB_141afd510;
      cVar11 = '\0';
      if (0xffff < uVar2) {
        cVar11 = '\x02';
      }
      cVar11 = (0xff < uVar2) + '\x01' + cVar11;
      if (cVar11 == '\x01') {
        uVar12 = (ulonglong)*(byte *)(uVar7 + (longlong)puVar16);
        uVar14 = uVar7;
        if (*(byte *)(uVar7 + (longlong)puVar16) == 0xff) {
          uVar13 = 0xffffffff;
          goto LAB_141afd678;
        }
        goto LAB_141afd675;
      }
      if (cVar11 == '\x02') {
        uVar1 = *(ushort *)((longlong)puVar16 + uVar7 * 2);
        uVar12 = (ulonglong)uVar1;
        uVar14 = uVar7;
        if (uVar1 != 0xffff) goto LAB_141afd675;
        uVar13 = 0xffffffff;
      }
      else {
        uVar14 = uVar7;
        if (cVar11 == '\x04') {
          uVar8 = puVar16[uVar7];
          if (puVar16[uVar7] == 0xffffffff) {
            uVar8 = 0xffffffff;
          }
          uVar13 = (ulonglong)uVar8;
          goto LAB_141afd678;
        }
LAB_141afd5f8:
        iVar9 = 0x146;
LAB_141afd5fe:
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                            ,iVar9,L"");
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          iVar10 = (*pcVar6)();
          return iVar10;
        }
LAB_141afd637:
        uVar13 = 0xffffffff;
      }
    }
LAB_141afd678:
    uVar8 = (uint)uVar13;
    uVar7 = uVar13;
  } while( true );
}

// RemoveImpl<FString,0> @ 141afd6b0

int __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::RemoveImpl<FString,0>
          (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *this,
          uint param_1,FString *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uchar *puVar17;
  bool bVar18;
  FConstCompactHashTableView local_58;
  
  uVar2 = *(uint *)&this->field_0xc;
  iVar10 = 0;
  lVar5 = *(longlong *)this;
  uVar14 = 0xffffffff;
  puVar16 = (uint *)((ulonglong)(uVar2 << 4) + lVar5);
  uVar3 = *puVar16;
  puVar16 = puVar16 + 1;
  puVar17 = (uchar *)(((ulonglong)uVar2 << (0xff < uVar2) + (0xffff < uVar2)) + (longlong)puVar16);
  local_58.NextIndexData = (uchar *)puVar16;
  local_58.HashData = puVar17;
  local_58.NextIndexCount = uVar2;
  local_58.HashCount = uVar3;
  uVar8 = FConstCompactHashTableView::GetFirst(&local_58,param_1);
  uVar7 = (ulonglong)uVar8;
  do {
    if (uVar8 == 0xffffffff) {
      return iVar10;
    }
    puVar15 = (undefined8 *)((longlong)(int)uVar7 * 0x10 + lVar5);
    iVar9 = (param_2->Data).ArrayNum;
    iVar4 = *(int *)(puVar15 + 1);
    if (iVar4 == iVar9) {
      if (1 < iVar4) {
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar15,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar18 = iVar9 == 0;
        goto LAB_141afd79b;
      }
LAB_141afd810:
      RemoveByIndexAndHash<0>(this,(int)uVar7,param_1);
      iVar10 = iVar10 + 1;
      if ((int)uVar14 == -1) {
        cVar11 = '\0';
        if (0xffff < uVar2) {
          cVar11 = '\x02';
        }
        cVar11 = (0xff < uVar2) + '\x01' + cVar11;
        if (cVar11 == '\x01') {
          uVar13 = (ulonglong)puVar17[uVar3 - 1 & param_1];
          if (puVar17[uVar3 - 1 & param_1] == 0xff) goto LAB_141afd937;
        }
        else if (cVar11 == '\x02') {
          uVar13 = (ulonglong)*(ushort *)(puVar17 + (ulonglong)(uVar3 - 1 & param_1) * 2);
          if (*(ushort *)(puVar17 + (ulonglong)(uVar3 - 1 & param_1) * 2) == 0xffff) {
            uVar13 = 0xffffffff;
          }
        }
        else {
          if (cVar11 != '\x04') {
            iVar9 = 0x133;
            goto LAB_141afd8fe;
          }
          uVar8 = *(uint *)(puVar17 + (ulonglong)(uVar3 - 1 & param_1) * 4);
          if (*(uint *)(puVar17 + (ulonglong)(uVar3 - 1 & param_1) * 4) == 0xffffffff) {
            uVar8 = 0xffffffff;
          }
          uVar13 = (ulonglong)uVar8;
        }
      }
      else {
        if ((int)uVar14 == *(int *)&this->field_0x8) {
          uVar14 = uVar7;
        }
        cVar11 = '\0';
        if (0xffff < uVar2) {
          cVar11 = '\x02';
        }
        cVar11 = (0xff < uVar2) + '\x01' + cVar11;
        if (cVar11 == '\x01') {
          uVar12 = (ulonglong)*(byte *)(uVar14 + (longlong)puVar16);
          uVar13 = 0xffffffff;
          if (*(byte *)(uVar14 + (longlong)puVar16) != 0xff) {
LAB_141afd975:
            uVar13 = uVar12;
          }
        }
        else if (cVar11 == '\x02') {
          uVar1 = *(ushort *)((longlong)puVar16 + uVar14 * 2);
          uVar12 = (ulonglong)uVar1;
          if (uVar1 != 0xffff) goto LAB_141afd975;
          uVar13 = 0xffffffff;
        }
        else {
          if (cVar11 != '\x04') goto LAB_141afd8f8;
          uVar8 = puVar16[uVar14];
          if (puVar16[uVar14] == 0xffffffff) {
            uVar8 = 0xffffffff;
          }
          uVar13 = (ulonglong)uVar8;
        }
      }
    }
    else {
      bVar18 = iVar4 + iVar9 == 1;
LAB_141afd79b:
      if (bVar18) goto LAB_141afd810;
      cVar11 = '\0';
      if (0xffff < uVar2) {
        cVar11 = '\x02';
      }
      cVar11 = (0xff < uVar2) + '\x01' + cVar11;
      if (cVar11 == '\x01') {
        uVar12 = (ulonglong)*(byte *)(uVar7 + (longlong)puVar16);
        uVar14 = uVar7;
        if (*(byte *)(uVar7 + (longlong)puVar16) == 0xff) {
          uVar13 = 0xffffffff;
          goto LAB_141afd978;
        }
        goto LAB_141afd975;
      }
      if (cVar11 == '\x02') {
        uVar1 = *(ushort *)((longlong)puVar16 + uVar7 * 2);
        uVar12 = (ulonglong)uVar1;
        uVar14 = uVar7;
        if (uVar1 != 0xffff) goto LAB_141afd975;
        uVar13 = 0xffffffff;
      }
      else {
        uVar14 = uVar7;
        if (cVar11 == '\x04') {
          uVar8 = puVar16[uVar7];
          if (puVar16[uVar7] == 0xffffffff) {
            uVar8 = 0xffffffff;
          }
          uVar13 = (ulonglong)uVar8;
          goto LAB_141afd978;
        }
LAB_141afd8f8:
        iVar9 = 0x146;
LAB_141afd8fe:
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                            ,iVar9,L"");
        if (bVar18) {
          pcVar6 = (code *)swi(3);
          iVar10 = (*pcVar6)();
          return iVar10;
        }
LAB_141afd937:
        uVar13 = 0xffffffff;
      }
    }
LAB_141afd978:
    uVar8 = (uint)uVar13;
    uVar7 = uVar13;
  } while( true );
}

// operator[] @ 141b2bdb0

FString * __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::operator[]
          (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *this,
          FSetElementId param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((param_1.Index < 0) || (*(int *)&this->field_0x8 <= param_1.Index)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidId(Id)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                       ,0x265,L"Array index out of bounds: %d into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FString *)((longlong)param_1.Index * 0x10 + *(longlong *)this);
}

// AddUninitialized @ 141b383e0

int * __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::AddUninitialized
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FCompactSetLayout local_res8;
  undefined4 *local_28;
  longlong local_20;
  uint local_18;
  undefined4 local_14;
  
  if (*(int *)&this->field_0x8 == *(int *)&this->field_0xc) {
    local_res8.Size = 4;
    local_res8.Alignment = 4;
    iVar1 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,
                       *(int *)&this->field_0x8 + 1,&local_res8);
    Reserve(this,iVar1);
  }
  local_18 = *(uint *)&this->field_0xc;
  puVar2 = (undefined4 *)((ulonglong)(local_18 * 4) + *(longlong *)this);
  local_28 = puVar2 + 1;
  local_20 = ((ulonglong)local_18 << (0xff < local_18) + (0xffff < local_18)) + (longlong)local_28;
  local_14 = *puVar2;
  FCompactHashTableView::Add((FCompactHashTableView *)&local_28,*(uint *)&this->field_0x8,param_1);
  iVar1 = *(int *)&this->field_0x8;
  *(int *)&this->field_0x8 = iVar1 + 1;
  return (int *)(*(longlong *)this + (longlong)iVar1 * 4);
}

// AddUninitialized @ 141b384a0

FSetTestNonCopyableTestData * __thiscall
TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
::AddUninitialized(TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
                   *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FCompactSetLayout local_res8;
  undefined4 *local_28;
  longlong local_20;
  uint local_18;
  undefined4 local_14;
  
  if (*(int *)&this->field_0x8 == *(int *)&this->field_0xc) {
    local_res8.Size = 4;
    local_res8.Alignment = 4;
    iVar1 = TCompactSetBase<TSizedDefaultAllocator<32>_>::AllocatorCalculateSlackGrow
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,
                       *(int *)&this->field_0x8 + 1,&local_res8);
    Reserve(this,iVar1);
  }
  local_18 = *(uint *)&this->field_0xc;
  puVar2 = (undefined4 *)((ulonglong)(local_18 * 4) + *(longlong *)this);
  local_28 = puVar2 + 1;
  local_20 = ((ulonglong)local_18 << (0xff < local_18) + (0xffff < local_18)) + (longlong)local_28;
  local_14 = *puVar2;
  FCompactHashTableView::Add((FCompactHashTableView *)&local_28,*(uint *)&this->field_0x8,param_1);
  iVar1 = *(int *)&this->field_0x8;
  *(int *)&this->field_0x8 = iVar1 + 1;
  return (FSetTestNonCopyableTestData *)(*(longlong *)this + (longlong)iVar1 * 4);
}

// Append @ 141b38a40

void __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Append
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,
          TArrayView<int_const_,int> *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint local_res8 [2];
  
  puVar5 = (uint *)param_1->DataPtr;
  iVar3 = param_1->ArrayNum;
  Reserve(this,*(int *)&this->field_0x8 + iVar3);
  puVar1 = puVar5 + iVar3;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    uVar2 = *puVar5;
    local_res8[0] = uVar2;
    iVar3 = FindIndexByHash<int>(this,uVar2,(int *)local_res8);
    if (iVar3 == -1) {
      puVar4 = (uint *)AddUninitialized(this,uVar2);
      *puVar4 = uVar2;
    }
    else {
      *(uint *)(*(longlong *)this + (longlong)iVar3 * 4) = uVar2;
    }
  }
  return;
}

// Difference @ 141b3d790

TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> * __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Difference
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,
          TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
          *__return_storage_ptr__,
          TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *param_1)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *pTVar11;
  uint *puVar12;
  char cVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  Reserve(__return_storage_ptr__,*(int *)&this->field_0x8);
  puVar14 = *(uint **)this;
  iVar4 = *(int *)&this->field_0x8;
  puVar1 = puVar14 + iVar4;
LAB_141b3d7d2:
  if (*(int *)&this->field_0x8 != iVar4) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (puVar14 == puVar1) {
    return __return_storage_ptr__;
  }
  local_res10[0] = *puVar14;
  iVar9 = FindIndexByHash<int>(param_1,local_res10[0],(int *)local_res10);
  if (iVar9 == -1) {
    uVar5 = *puVar14;
    if (*(int *)&__return_storage_ptr__->field_0x8 != 0) {
      uVar10 = *(uint *)&__return_storage_ptr__->field_0xc;
      lVar16 = (longlong)(int)uVar10;
      lVar6 = *(longlong *)__return_storage_ptr__;
      iVar9 = *(int *)((ulonglong)(uVar10 * 4) + lVar6);
      lVar15 = lVar6 + 4 + (ulonglong)(uVar10 * 4);
      cVar13 = '\0';
      if (0xffff < uVar10) {
        cVar13 = '\x02';
      }
      cVar13 = (0xff < uVar10) + '\x01' + cVar13;
      if (cVar13 == '\x01') {
        for (bVar2 = *(byte *)(lVar16 + (ulonglong)(uVar5 & iVar9 - 1U) + lVar15); bVar2 != 0xff;
            bVar2 = *(byte *)((ulonglong)bVar2 + lVar15)) {
          if (*(uint *)(lVar6 + (ulonglong)bVar2 * 4) == uVar5) {
            uVar10 = (uint)bVar2;
            goto LAB_141b3d922;
          }
        }
      }
      else if (cVar13 == '\x02') {
        for (uVar3 = *(ushort *)(lVar15 + ((ulonglong)(iVar9 - 1U & uVar5) + lVar16) * 2);
            uVar3 != 0xffff; uVar3 = *(ushort *)(lVar15 + (ulonglong)uVar3 * 2)) {
          if (*(uint *)(lVar6 + (ulonglong)uVar3 * 4) == uVar5) {
            uVar10 = (uint)uVar3;
            goto LAB_141b3d922;
          }
        }
      }
      else if (cVar13 == '\x04') {
        for (uVar10 = *(uint *)(lVar15 + ((ulonglong)(iVar9 - 1U & uVar5) + lVar16) * 4);
            uVar10 != 0xffffffff; uVar10 = *(uint *)(lVar15 + (ulonglong)uVar10 * 4)) {
          if (*(uint *)(lVar6 + (ulonglong)uVar10 * 4) == uVar5) goto LAB_141b3d922;
        }
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x5cc,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pTVar11 = (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                    (*pcVar7)();
          return pTVar11;
        }
      }
    }
    goto LAB_141b3d888;
  }
  goto LAB_141b3d894;
LAB_141b3d922:
  if (uVar10 == 0xffffffff) {
LAB_141b3d888:
    puVar12 = (uint *)AddUninitialized(__return_storage_ptr__,uVar5);
    *puVar12 = uVar5;
LAB_141b3d894:
    puVar14 = puVar14 + 1;
  }
  else {
    puVar14 = puVar14 + 1;
    *(uint *)(lVar6 + (longlong)(int)uVar10 * 4) = uVar5;
  }
  goto LAB_141b3d7d2;
}

// Difference @ 141b3d960

TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> * __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Difference
          (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *this,
          TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
          *__return_storage_ptr__,
          TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *pTVar8;
  sbyte sVar9;
  int iVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  int iVar13;
  ulonglong uVar14;
  FString *pFVar15;
  FString *pFVar16;
  longlong lVar17;
  void *_Dst;
  undefined1 local_res10 [8];
  TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *local_res18;
  FCompactSetLayout local_res20;
  undefined1 local_58 [24];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  iVar5 = *(int *)&this->field_0x8;
  local_res18 = param_1;
  if (iVar5 != 0) {
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)iVar5);
    }
    local_res20 = (FCompactSetLayout)&DAT_800000010;
    bVar4 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)__return_storage_ptr__,iVar5,
                       &local_res20,true);
    if ((bVar4) && (uVar6 = *(uint *)&__return_storage_ptr__->field_0xc, 0 < (int)uVar6)) {
      lVar2 = *(longlong *)__return_storage_ptr__;
      lVar17 = lVar2 + 4 + (ulonglong)(uVar6 << 4);
      uVar1 = *(uint *)((ulonglong)(uVar6 << 4) + lVar2);
      sVar9 = (0xff < uVar6) + (0xffff < uVar6);
      _Dst = (void *)(((ulonglong)uVar6 << sVar9) + lVar17);
      memset(_Dst,0xff,(ulonglong)uVar1 << sVar9);
      uVar14 = 0;
      param_1 = local_res18;
      if (0 < *(int *)&__return_storage_ptr__->field_0x8) {
        iVar5 = 0;
        if (0xffff < uVar6) {
          iVar5 = 2;
        }
        iVar5 = (0xff < uVar6) + 1 + iVar5;
        do {
          iVar13 = (int)uVar14;
          iVar7 = *(int *)(lVar2 + 8 + (longlong)iVar13 * 0x10);
          if (iVar7 == 0) {
            pwVar12 = L"";
            iVar7 = 0;
          }
          else {
            pwVar12 = *(wchar_t **)(lVar2 + (longlong)iVar13 * 0x10);
            iVar7 = iVar7 + -1;
          }
          uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar12);
          if (iVar5 == 1) {
            uVar11 = (ulonglong)(uVar6 & uVar1 - 1);
            *(undefined1 *)(uVar14 + lVar17) = *(undefined1 *)(uVar11 + (longlong)_Dst);
            *(char *)(uVar11 + (longlong)_Dst) = (char)uVar14;
          }
          else if (iVar5 == 2) {
            uVar11 = (ulonglong)(uVar1 - 1 & uVar6);
            *(undefined2 *)(lVar17 + uVar14 * 2) = *(undefined2 *)((longlong)_Dst + uVar11 * 2);
            *(short *)((longlong)_Dst + uVar11 * 2) = (short)uVar14;
          }
          else if (iVar5 == 4) {
            uVar11 = (ulonglong)(uVar1 - 1 & uVar6);
            *(undefined4 *)(lVar17 + uVar14 * 4) = *(undefined4 *)((longlong)_Dst + uVar11 * 4);
            *(int *)((longlong)_Dst + uVar11 * 4) = iVar13;
          }
          else {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>
                        *)(*pcVar3)();
              return pTVar8;
            }
          }
          uVar14 = (ulonglong)(iVar13 + 1U);
          param_1 = local_res18;
        } while ((int)(iVar13 + 1U) < *(int *)&__return_storage_ptr__->field_0x8);
      }
    }
  }
  iVar5 = *(int *)&this->field_0x8;
  pFVar15 = *(FString **)this;
  pFVar16 = pFVar15 + iVar5;
  while( true ) {
    if (*(int *)&this->field_0x8 != iVar5) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar15 == pFVar16) break;
    iVar7 = (pFVar15->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    iVar10 = 0;
    iVar13 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar13 = iVar10;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar12);
    iVar7 = FindIndexByHash<FString>(param_1,uVar6,pFVar15);
    if (iVar7 == -1) {
      iVar7 = (pFVar15->Data).ArrayNum;
      if (iVar7 == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        iVar10 = iVar7 + -1;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar12);
      EmplaceByHash<FString_const_&>
                (__return_storage_ptr__,(EInPlace)local_58,0,(FString *)(ulonglong)uVar6);
    }
    pFVar15 = pFVar15 + 1;
  }
  return __return_storage_ptr__;
}

// Empty @ 141b3f410

void __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_>::Empty
          (TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_> *this,int param_1)

{
  sbyte sVar1;
  uint uVar2;
  FCompactSetLayout local_res8;
  
  local_res8.Size = 4;
  local_res8.Alignment = 4;
  *(undefined4 *)&this->field_0x184 = 0;
  TCompactSetBase<TFixedAllocator<388>_>::ResizeAllocationPreserveData
            ((TCompactSetBase<TFixedAllocator<388>_> *)this,param_1,&local_res8,false);
  uVar2 = *(uint *)&this->field_0x188;
  if (0 < (int)uVar2) {
    sVar1 = (0xff < uVar2) + (0xffff < uVar2);
    memset(&this->field_0x4 + ((ulonglong)uVar2 << sVar1) + (ulonglong)(uVar2 * 4),0xff,
           (ulonglong)*(uint *)(&this->field_0x0 + uVar2 * 4) << sVar1);
  }
  return;
}

// Empty @ 141b3f4b0

void __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Empty
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,int param_1)

{
  sbyte sVar1;
  uint uVar2;
  uint *puVar3;
  FCompactSetLayout local_res8;
  
  local_res8.Size = 4;
  local_res8.Alignment = 4;
  *(undefined4 *)&this->field_0x8 = 0;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,false);
  uVar2 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar2) {
    puVar3 = (uint *)((ulonglong)(uVar2 * 4) + *(longlong *)this);
    sVar1 = (0xff < uVar2) + (0xffff < uVar2);
    memset((void *)((longlong)puVar3 + ((ulonglong)uVar2 << sVar1) + 4),0xff,
           (ulonglong)*puVar3 << sVar1);
  }
  return;
}

// Empty @ 141b3f540

void __thiscall
TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
::Empty(TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
        *this,int param_1)

{
  sbyte sVar1;
  uint uVar2;
  uint *puVar3;
  FCompactSetLayout local_res8;
  
  local_res8.Size = 4;
  local_res8.Alignment = 4;
  *(undefined4 *)&this->field_0x8 = 0;
  TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
            ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,false);
  uVar2 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar2) {
    puVar3 = (uint *)((ulonglong)(uVar2 * 4) + *(longlong *)this);
    sVar1 = (0xff < uVar2) + (0xffff < uVar2);
    memset((void *)((longlong)puVar3 + ((ulonglong)uVar2 << sVar1) + 4),0xff,
           (ulonglong)*puVar3 << sVar1);
  }
  return;
}

// Find @ 141b40930

FString * __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator>::Find
          (TCompactSet<FString,DefaultKeyFuncs<FString,0>,FDefaultCompactSetAllocator> *this,
          FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = FindIndexByHash<FString>(this,uVar2,param_1);
  if (iVar3 == -1) {
    return (FString *)0x0;
  }
  return (FString *)((longlong)iVar3 * 0x10 + *(longlong *)this);
}

// Includes @ 141b44730

bool __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Includes
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,
          TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint local_res8 [2];
  
  iVar2 = *(int *)&param_1->field_0x8;
  if (*(int *)&this->field_0x8 < iVar2) {
    return false;
  }
  puVar4 = *(uint **)param_1;
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)&param_1->field_0x8 != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar4 == puVar1) break;
    local_res8[0] = *puVar4;
    iVar3 = FindIndexByHash<int>(this,local_res8[0],(int *)local_res8);
    if (iVar3 == -1) {
      return false;
    }
    puVar4 = puVar4 + 1;
  }
  return true;
}

// Intersect @ 141b45990

TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> * __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Intersect
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,
          TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
          *__return_storage_ptr__,
          TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *param_1)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *pTVar11;
  uint *puVar12;
  char cVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  pTVar11 = param_1;
  if (*(int *)&param_1->field_0x8 < *(int *)&this->field_0x8) {
    pTVar11 = this;
    this = param_1;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  Reserve(__return_storage_ptr__,*(int *)&this->field_0x8);
  puVar14 = *(uint **)this;
  iVar4 = *(int *)&this->field_0x8;
  puVar1 = puVar14 + iVar4;
LAB_141b459e3:
  if (*(int *)&this->field_0x8 != iVar4) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (puVar14 == puVar1) {
    return __return_storage_ptr__;
  }
  local_res10[0] = *puVar14;
  iVar9 = FindIndexByHash<int>(pTVar11,local_res10[0],(int *)local_res10);
  if (iVar9 != -1) {
    uVar5 = *puVar14;
    if (*(int *)&__return_storage_ptr__->field_0x8 != 0) {
      uVar10 = *(uint *)&__return_storage_ptr__->field_0xc;
      lVar16 = (longlong)(int)uVar10;
      lVar6 = *(longlong *)__return_storage_ptr__;
      iVar9 = *(int *)((ulonglong)(uVar10 * 4) + lVar6);
      lVar15 = lVar6 + 4 + (ulonglong)(uVar10 * 4);
      cVar13 = '\0';
      if (0xffff < uVar10) {
        cVar13 = '\x02';
      }
      cVar13 = (0xff < uVar10) + '\x01' + cVar13;
      if (cVar13 == '\x01') {
        for (bVar2 = *(byte *)(lVar16 + (ulonglong)(uVar5 & iVar9 - 1U) + lVar15); bVar2 != 0xff;
            bVar2 = *(byte *)((ulonglong)bVar2 + lVar15)) {
          if (*(uint *)(lVar6 + (ulonglong)bVar2 * 4) == uVar5) {
            uVar10 = (uint)bVar2;
            goto LAB_141b45b32;
          }
        }
      }
      else if (cVar13 == '\x02') {
        for (uVar3 = *(ushort *)(lVar15 + ((ulonglong)(iVar9 - 1U & uVar5) + lVar16) * 2);
            uVar3 != 0xffff; uVar3 = *(ushort *)(lVar15 + (ulonglong)uVar3 * 2)) {
          if (*(uint *)(lVar6 + (ulonglong)uVar3 * 4) == uVar5) {
            uVar10 = (uint)uVar3;
            goto LAB_141b45b32;
          }
        }
      }
      else if (cVar13 == '\x04') {
        for (uVar10 = *(uint *)(lVar15 + ((ulonglong)(iVar9 - 1U & uVar5) + lVar16) * 4);
            uVar10 != 0xffffffff; uVar10 = *(uint *)(lVar15 + (ulonglong)uVar10 * 4)) {
          if (*(uint *)(lVar6 + (ulonglong)uVar10 * 4) == uVar5) goto LAB_141b45b32;
        }
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x5cc,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          pTVar11 = (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                    (*pcVar7)();
          return pTVar11;
        }
      }
    }
    goto LAB_141b45a99;
  }
  goto LAB_141b45aa5;
LAB_141b45b32:
  if (uVar10 == 0xffffffff) {
LAB_141b45a99:
    puVar12 = (uint *)AddUninitialized(__return_storage_ptr__,uVar5);
    *puVar12 = uVar5;
LAB_141b45aa5:
    puVar14 = puVar14 + 1;
  }
  else {
    puVar14 = puVar14 + 1;
    *(uint *)(lVar6 + (longlong)(int)uVar10 * 4) = uVar5;
  }
  goto LAB_141b459e3;
}

// Rehash @ 141b4a1b0

void __thiscall
TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator>::Rehash
          (TCompactSet<FString,DefaultKeyFuncs<FString,1>,FDefaultCompactSetAllocator> *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  sbyte sVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  void *_Dst;
  longlong lVar12;
  wchar_t *pwVar13;
  
  uVar7 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar7) {
    lVar3 = *(longlong *)this;
    uVar1 = *(uint *)((ulonglong)(uVar7 << 4) + lVar3);
    lVar12 = lVar3 + 4 + (ulonglong)(uVar7 << 4);
    sVar8 = (0xff < uVar7) + (0xffff < uVar7);
    _Dst = (void *)(((ulonglong)uVar7 << sVar8) + lVar12);
    memset(_Dst,0xff,(ulonglong)uVar1 << sVar8);
    uVar11 = 0;
    if (0 < *(int *)&this->field_0x8) {
      cVar5 = '\0';
      if (0xffff < uVar7) {
        cVar5 = '\x02';
      }
      cVar5 = (0xff < uVar7) + '\x01' + cVar5;
      do {
        iVar2 = *(int *)(lVar3 + 8 + (longlong)(int)uVar11 * 0x10);
        iVar9 = iVar2 + -1;
        if (iVar2 == 0) {
          pwVar13 = L"";
          iVar9 = 0;
        }
        else {
          pwVar13 = *(wchar_t **)(lVar3 + (longlong)(int)uVar11 * 0x10);
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
        if (cVar5 == '\x01') {
          uVar10 = (ulonglong)(uVar7 & uVar1 - 1);
          *(undefined1 *)((ulonglong)uVar11 + lVar12) = *(undefined1 *)(uVar10 + (longlong)_Dst);
          *(char *)(uVar10 + (longlong)_Dst) = (char)uVar11;
        }
        else if (cVar5 == '\x02') {
          uVar10 = (ulonglong)(uVar1 - 1 & uVar7);
          *(undefined2 *)(lVar12 + (ulonglong)uVar11 * 2) =
               *(undefined2 *)((longlong)_Dst + uVar10 * 2);
          *(short *)((longlong)_Dst + uVar10 * 2) = (short)uVar11;
        }
        else if (cVar5 == '\x04') {
          uVar10 = (ulonglong)(uVar1 - 1 & uVar7);
          *(undefined4 *)(lVar12 + (ulonglong)uVar11 * 4) =
               *(undefined4 *)((longlong)_Dst + uVar10 * 4);
          *(uint *)((longlong)_Dst + uVar10 * 4) = uVar11;
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                             ,0x171,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)&this->field_0x8);
    }
  }
  return;
}

// Reserve @ 141b4c1a0

void __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_>::Reserve
          (TCompactSet<int,DefaultKeyFuncs<int,0>,TFixedCompactSetAllocator<64>_> *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  sbyte sVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  void *_Dst;
  FCompactSetLayout local_res8;
  
  if (*(uint *)&this->field_0x188 < (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    local_res8.Size = 4;
    local_res8.Alignment = 4;
    bVar5 = TCompactSetBase<TFixedAllocator<388>_>::ResizeAllocationPreserveData
                      ((TCompactSetBase<TFixedAllocator<388>_> *)this,param_1,&local_res8,true);
    if ((bVar5) && (uVar1 = *(uint *)&this->field_0x188, 0 < (int)uVar1)) {
      uVar10 = 0;
      uVar2 = *(uint *)(&this->field_0x0 + uVar1 * 4);
      lVar4 = (ulonglong)(uVar1 * 4) + 4;
      sVar7 = (0xff < uVar1) + (0xffff < uVar1);
      _Dst = &this->field_0x4 + ((ulonglong)uVar1 << sVar7) + lVar4 + -4;
      memset(_Dst,0xff,(ulonglong)uVar2 << sVar7);
      cVar6 = '\0';
      if (0 < *(int *)&this->field_0x184) {
        if (0xffff < uVar1) {
          cVar6 = '\x02';
        }
        cVar6 = (0xff < uVar1) + '\x01' + cVar6;
        do {
          iVar9 = (int)uVar10;
          uVar1 = *(uint *)(&this->field_0x0 + (longlong)iVar9 * 4);
          if (cVar6 == '\x01') {
            uVar8 = (ulonglong)(uVar1 & uVar2 - 1);
            (&this->field_0x4)[uVar10 + lVar4 + -4] = *(undefined1 *)(uVar8 + (longlong)_Dst);
            *(char *)(uVar8 + (longlong)_Dst) = (char)uVar10;
          }
          else if (cVar6 == '\x02') {
            uVar8 = (ulonglong)(uVar2 - 1 & uVar1);
            *(undefined2 *)(&this->field_0x4 + uVar10 * 2 + lVar4 + -4) =
                 *(undefined2 *)((longlong)_Dst + uVar8 * 2);
            *(short *)((longlong)_Dst + uVar8 * 2) = (short)uVar10;
          }
          else if (cVar6 == '\x04') {
            uVar8 = (ulonglong)(uVar2 - 1 & uVar1);
            *(undefined4 *)(&this->field_0x4 + uVar10 * 4 + lVar4 + -4) =
                 *(undefined4 *)((longlong)_Dst + uVar8 * 4);
            *(int *)((longlong)_Dst + uVar8 * 4) = iVar9;
          }
          else {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar10 = (ulonglong)(iVar9 + 1U);
        } while ((int)(iVar9 + 1U) < *(int *)&this->field_0x184);
      }
    }
  }
  return;
}

// Reserve @ 141b4c350

void __thiscall
TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
::Reserve(TCompactSet<FSetTestNonCopyableTestData,DefaultKeyFuncs<FSetTestNonCopyableTestData,0>,FDefaultCompactSetAllocator>
          *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  sbyte sVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  void *_Dst;
  longlong lVar11;
  FCompactSetLayout local_res8;
  
  if (*(uint *)&this->field_0xc < (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    local_res8.Size = 4;
    local_res8.Alignment = 4;
    bVar5 = TCompactSetBase<TSizedDefaultAllocator<32>_>::ResizeAllocationPreserveData
                      ((TCompactSetBase<TSizedDefaultAllocator<32>_> *)this,param_1,&local_res8,true
                      );
    if ((bVar5) && (uVar1 = *(uint *)&this->field_0xc, 0 < (int)uVar1)) {
      uVar10 = 0;
      lVar3 = *(longlong *)this;
      uVar2 = *(uint *)((ulonglong)(uVar1 * 4) + lVar3);
      lVar11 = lVar3 + 4 + (ulonglong)(uVar1 * 4);
      sVar7 = (0xff < uVar1) + (0xffff < uVar1);
      _Dst = (void *)(((ulonglong)uVar1 << sVar7) + lVar11);
      memset(_Dst,0xff,(ulonglong)uVar2 << sVar7);
      cVar6 = '\0';
      if (0 < *(int *)&this->field_0x8) {
        if (0xffff < uVar1) {
          cVar6 = '\x02';
        }
        cVar6 = (0xff < uVar1) + '\x01' + cVar6;
        do {
          iVar9 = (int)uVar10;
          uVar1 = *(uint *)(lVar3 + (longlong)iVar9 * 4);
          if (cVar6 == '\x01') {
            uVar8 = (ulonglong)(uVar1 & uVar2 - 1);
            *(undefined1 *)(uVar10 + lVar11) = *(undefined1 *)(uVar8 + (longlong)_Dst);
            *(char *)(uVar8 + (longlong)_Dst) = (char)uVar10;
          }
          else if (cVar6 == '\x02') {
            uVar8 = (ulonglong)(uVar2 - 1 & uVar1);
            *(undefined2 *)(lVar11 + uVar10 * 2) = *(undefined2 *)((longlong)_Dst + uVar8 * 2);
            *(short *)((longlong)_Dst + uVar8 * 2) = (short)uVar10;
          }
          else if (cVar6 == '\x04') {
            uVar8 = (ulonglong)(uVar2 - 1 & uVar1);
            *(undefined4 *)(lVar11 + uVar10 * 4) = *(undefined4 *)((longlong)_Dst + uVar8 * 4);
            *(int *)((longlong)_Dst + uVar8 * 4) = iVar9;
          }
          else {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!\"Enclosing block should never be called\"",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                               ,0x171,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar10 = (ulonglong)(iVar9 + 1U);
        } while ((int)(iVar9 + 1U) < *(int *)&this->field_0x8);
      }
    }
  }
  return;
}

// Union @ 141bbcb20

TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> * __thiscall
TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>::Union
          (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *this,
          TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator>
          *__return_storage_ptr__,
          TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *param_1)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *pTVar10;
  uint *puVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  Reserve(__return_storage_ptr__,*(int *)&param_1->field_0x8 + *(int *)&this->field_0x8);
  puVar14 = *(uint **)this;
  iVar4 = *(int *)&this->field_0x8;
  puVar1 = puVar14 + iVar4;
LAB_141bbcb70:
  if (*(int *)&this->field_0x8 != iVar4) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res8);
  }
  if (puVar14 != puVar1) {
    uVar5 = *puVar14;
    if (*(int *)&__return_storage_ptr__->field_0x8 != 0) {
      uVar13 = *(uint *)&__return_storage_ptr__->field_0xc;
      lVar16 = (longlong)(int)uVar13;
      lVar7 = *(longlong *)__return_storage_ptr__;
      iVar6 = *(int *)((ulonglong)(uVar13 * 4) + lVar7);
      lVar15 = lVar7 + 4 + (ulonglong)(uVar13 * 4);
      cVar12 = '\0';
      if (0xffff < uVar13) {
        cVar12 = '\x02';
      }
      cVar12 = (0xff < uVar13) + '\x01' + cVar12;
      if (cVar12 == '\x01') {
        for (bVar2 = *(byte *)(lVar16 + (ulonglong)(uVar5 & iVar6 - 1U) + lVar15); bVar2 != 0xff;
            bVar2 = *(byte *)((ulonglong)bVar2 + lVar15)) {
          if (*(uint *)(lVar7 + (ulonglong)bVar2 * 4) == uVar5) {
            uVar13 = (uint)bVar2;
            goto LAB_141bbccaf;
          }
        }
      }
      else if (cVar12 == '\x02') {
        for (uVar3 = *(ushort *)(lVar15 + ((ulonglong)(iVar6 - 1U & uVar5) + lVar16) * 2);
            uVar3 != 0xffff; uVar3 = *(ushort *)(lVar15 + (ulonglong)uVar3 * 2)) {
          if (*(uint *)(lVar7 + (ulonglong)uVar3 * 4) == uVar5) {
            uVar13 = (uint)uVar3;
            goto LAB_141bbccaf;
          }
        }
      }
      else if (cVar12 == '\x04') {
        for (uVar13 = *(uint *)(lVar15 + ((ulonglong)(iVar6 - 1U & uVar5) + lVar16) * 4);
            uVar13 != 0xffffffff; uVar13 = *(uint *)(lVar15 + (ulonglong)uVar13 * 4)) {
          if (*(uint *)(lVar7 + (ulonglong)uVar13 * 4) == uVar5) goto LAB_141bbccaf;
        }
      }
      else {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                           ,0x5cc,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          pTVar10 = (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)
                    (*pcVar8)();
          return pTVar10;
        }
      }
    }
    goto LAB_141bbcc0a;
  }
  puVar14 = *(uint **)param_1;
  iVar4 = *(int *)&param_1->field_0x8;
  puVar1 = puVar14 + iVar4;
  goto LAB_141bbcce0;
LAB_141bbccaf:
  if (uVar13 == 0xffffffff) {
LAB_141bbcc0a:
    puVar11 = (uint *)AddUninitialized(__return_storage_ptr__,uVar5);
    puVar14 = puVar14 + 1;
    *puVar11 = uVar5;
  }
  else {
    puVar14 = puVar14 + 1;
    *(uint *)(lVar7 + (longlong)(int)uVar13 * 4) = uVar5;
  }
  goto LAB_141bbcb70;
LAB_141bbcce0:
  if (*(int *)&param_1->field_0x8 != iVar4) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res10);
  }
  if (puVar14 == puVar1) {
    return __return_storage_ptr__;
  }
  uVar5 = *puVar14;
  if (*(int *)&__return_storage_ptr__->field_0x8 != 0) {
    uVar13 = *(uint *)&__return_storage_ptr__->field_0xc;
    lVar16 = (longlong)(int)uVar13;
    lVar7 = *(longlong *)__return_storage_ptr__;
    iVar6 = *(int *)((ulonglong)(uVar13 * 4) + lVar7);
    lVar15 = lVar7 + 4 + (ulonglong)(uVar13 * 4);
    cVar12 = '\0';
    if (0xffff < uVar13) {
      cVar12 = '\x02';
    }
    cVar12 = (0xff < uVar13) + '\x01' + cVar12;
    if (cVar12 == '\x01') {
      for (bVar2 = *(byte *)(lVar16 + (ulonglong)(uVar5 & iVar6 - 1U) + lVar15); bVar2 != 0xff;
          bVar2 = *(byte *)(lVar15 + (ulonglong)bVar2)) {
        if (*(uint *)(lVar7 + (ulonglong)bVar2 * 4) == uVar5) {
          uVar13 = (uint)bVar2;
          goto LAB_141bbce1b;
        }
      }
    }
    else if (cVar12 == '\x02') {
      for (uVar3 = *(ushort *)(lVar15 + ((ulonglong)(iVar6 - 1U & uVar5) + lVar16) * 2);
          uVar3 != 0xffff; uVar3 = *(ushort *)(lVar15 + (ulonglong)uVar3 * 2)) {
        if (*(uint *)(lVar7 + (ulonglong)uVar3 * 4) == uVar5) {
          uVar13 = (uint)uVar3;
          goto LAB_141bbce1b;
        }
      }
    }
    else if (cVar12 == '\x04') {
      for (uVar13 = *(uint *)(lVar15 + ((ulonglong)(iVar6 - 1U & uVar5) + lVar16) * 4);
          uVar13 != 0xffffffff; uVar13 = *(uint *)(lVar15 + (ulonglong)uVar13 * 4)) {
        if (*(uint *)(lVar7 + (ulonglong)uVar13 * 4) == uVar5) goto LAB_141bbce1b;
      }
    }
    else {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                         ,0x5cc,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pTVar10 = (TCompactSet<int,DefaultKeyFuncs<int,0>,FDefaultCompactSetAllocator> *)(*pcVar8)()
        ;
        return pTVar10;
      }
    }
  }
  goto LAB_141bbcd76;
LAB_141bbce1b:
  if (uVar13 == 0xffffffff) {
LAB_141bbcd76:
    puVar11 = (uint *)AddUninitialized(__return_storage_ptr__,uVar5);
    puVar14 = puVar14 + 1;
    *puVar11 = uVar5;
  }
  else {
    puVar14 = puVar14 + 1;
    *(uint *)(lVar7 + (longlong)(int)uVar13 * 4) = uVar5;
  }
  goto LAB_141bbcce0;
}

