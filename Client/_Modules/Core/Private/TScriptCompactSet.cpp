// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Rehash @ 141b4a360

void __thiscall
TScriptCompactSet<FDefaultCompactSetAllocator>::Rehash
          (TScriptCompactSet<FDefaultCompactSetAllocator> *this,FCompactSetLayout *param_1,
          TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  sbyte sVar7;
  ulonglong uVar8;
  uint *puVar9;
  int iVar10;
  ulonglong uVar11;
  void *_Dst;
  longlong local_res20;
  
  uVar6 = *(uint *)&this->field_0xc;
  if (0 < (int)uVar6) {
    lVar2 = *(longlong *)this;
    uVar11 = 0;
    puVar9 = (uint *)(((ulonglong)(uVar6 * param_1->Size + 3) & 0xfffffffc) + lVar2);
    uVar1 = *puVar9;
    sVar7 = (0xff < uVar6) + (0xffff < uVar6);
    _Dst = (void *)((longlong)puVar9 + ((ulonglong)uVar6 << sVar7) + 4);
    memset(_Dst,0xff,(ulonglong)uVar1 << sVar7);
    cVar4 = '\0';
    if (0 < *(int *)&this->field_0x8) {
      if (0xffff < uVar6) {
        cVar4 = '\x02';
      }
      cVar4 = (0xff < uVar6) + '\x01' + cVar4;
      do {
        iVar10 = (int)uVar11;
        local_res20 = iVar10 * param_1->Size + lVar2;
        uVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20);
        if (cVar4 == '\x01') {
          uVar8 = (ulonglong)(uVar6 & uVar1 - 1);
          *(undefined1 *)((longlong)puVar9 + uVar11 + 4) = *(undefined1 *)(uVar8 + (longlong)_Dst);
          *(char *)(uVar8 + (longlong)_Dst) = (char)uVar11;
        }
        else if (cVar4 == '\x02') {
          uVar8 = (ulonglong)(uVar1 - 1 & uVar6);
          *(undefined2 *)((longlong)puVar9 + uVar11 * 2 + 4) =
               *(undefined2 *)((longlong)_Dst + uVar8 * 2);
          *(short *)((longlong)_Dst + uVar8 * 2) = (short)uVar11;
        }
        else if (cVar4 == '\x04') {
          uVar8 = (ulonglong)(uVar1 - 1 & uVar6);
          puVar9[uVar11 + 1] = *(uint *)((longlong)_Dst + uVar8 * 4);
          *(int *)((longlong)_Dst + uVar8 * 4) = iVar10;
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
        uVar11 = (ulonglong)(iVar10 + 1U);
      } while ((int)(iVar10 + 1U) < *(int *)&this->field_0x8);
    }
  }
  return;
}

// RemoveAt @ 141b4b0b0

void __thiscall
TScriptCompactSet<FDefaultCompactSetAllocator>::RemoveAt
          (TScriptCompactSet<FDefaultCompactSetAllocator> *this,int param_1,
          FCompactSetLayout *param_2,TFunctionRef<unsigned_int___cdecl(void_const_*)> *param_3,
          TFunctionRef<void___cdecl(void_*)> *param_4)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  void *_Dst;
  uint uVar11;
  void *local_res18;
  TFunctionRef<unsigned_int___cdecl(void_const_*)> *local_res20;
  void *local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  
  puVar1 = &this->field_0x8;
  local_res20 = param_3;
  if ((param_1 < 0) || (*(int *)puVar1 <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptCompactSet.h"
                       ,0x54,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  _Dst = (void *)((longlong)(param_1 * param_2->Size) + *(longlong *)this);
  local_res18 = _Dst;
  uVar8 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_res18);
  if (param_1 == *(int *)puVar1 + -1) {
    uVar3 = *(uint *)&this->field_0xc;
    puVar10 = (uint *)(((ulonglong)(uVar3 * param_2->Size + 3) & 0xfffffffc) + *(longlong *)this);
    puVar2 = puVar10 + 1;
    uVar4 = *puVar10;
    puVar10 = (uint *)(((ulonglong)uVar3 << (0xff < uVar3) + (0xffff < uVar3)) + (longlong)puVar2);
    cVar7 = '\0';
    if (0xffff < uVar3) {
      cVar7 = '\x02';
    }
    cVar7 = (0xff < uVar3) + '\x01' + cVar7;
    if (cVar7 == '\x01') {
      UE::Core::CompactHashTable::Remove<unsigned_char>
                (param_1,uVar8,param_1,0,(uchar *)puVar10,uVar4,(uchar *)puVar2,uVar3);
    }
    else if (cVar7 == '\x02') {
      UE::Core::CompactHashTable::Remove<unsigned_short>
                (param_1,uVar8,param_1,0,(ushort *)puVar10,uVar4,(ushort *)puVar2,uVar3);
    }
    else if (cVar7 == '\x04') {
      UE::Core::CompactHashTable::Remove<unsigned_int>
                (param_1,uVar8,param_1,0,puVar10,uVar4,puVar2,uVar3);
    }
    else {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                         ,0x178,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_68 = _Dst;
    (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_68);
    *(int *)puVar1 = *(int *)puVar1 + -1;
    return;
  }
  uVar3 = *(uint *)&this->field_0xc;
  local_60 = (void *)((longlong)(param_2->Size * (*(int *)puVar1 + -1)) + *(longlong *)this);
  puVar10 = (uint *)(((ulonglong)(uVar3 * param_2->Size + 3) & 0xfffffffc) + *(longlong *)this);
  puVar2 = puVar10 + 1;
  uVar4 = *puVar10;
  puVar10 = (uint *)(((ulonglong)uVar3 << (0xff < uVar3) + (0xffff < uVar3)) + (longlong)puVar2);
  local_50 = local_60;
  uVar9 = (**(code **)local_res20)(*(undefined8 *)&local_res20->field_0x8,&local_60);
  uVar11 = *(int *)puVar1 - 1;
  cVar7 = '\0';
  if (0xffff < uVar3) {
    cVar7 = '\x02';
  }
  cVar7 = (0xff < uVar3) + '\x01' + cVar7;
  if (cVar7 == '\x01') {
    UE::Core::CompactHashTable::Remove<unsigned_char>
              (param_1,uVar8,uVar11,uVar9,(uchar *)puVar10,uVar4,(uchar *)puVar2,uVar3);
  }
  else if (cVar7 == '\x02') {
    UE::Core::CompactHashTable::Remove<unsigned_short>
              (param_1,uVar8,uVar11,uVar9,(ushort *)puVar10,uVar4,(ushort *)puVar2,uVar3);
  }
  else if (cVar7 == '\x04') {
    UE::Core::CompactHashTable::Remove<unsigned_int>
              (param_1,uVar8,uVar11,uVar9,puVar10,uVar4,puVar2,uVar3);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactHashTable.h"
                       ,0x178,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_58 = _Dst;
  (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_58);
  memmove(_Dst,local_50,(longlong)param_2->Size);
  *(int *)puVar1 = *(int *)puVar1 + -1;
  return;
}

