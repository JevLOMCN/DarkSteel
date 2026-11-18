// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 116

// FUN_14fa1f970 @ 14fa1f970

void FUN_14fa1f970(undefined8 *param_1,undefined8 param_2,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_3);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa1f9a0 @ 14fa1f9a0

void FUN_14fa1f9a0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_3 + 0x18))(param_3);
  if (*(char *)(lVar2 + 0x3c) == '\0') {
    uVar1 = *(uint *)(lVar2 + 0x28);
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x18))(param_3);
    *(longlong *)*param_1 = *(longlong *)*param_1 + (lVar2 - (ulonglong)uVar1);
  }
  return;
}

// FUN_14fa1fa80 @ 14fa1fa80

void FUN_14fa1fa80(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (plVar6 + 1));
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa1fbf0 @ 14fa1fbf0

void FUN_14fa1fbf0(undefined8 *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_1;
  local_10 = param_1[1];
  FUN_14fa233d0(local_18,&local_18);
  return;
}

// FUN_14fa1fc40 @ 14fa1fc40

void FUN_14fa1fc40(undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  lVar1 = param_1[1];
  puVar6 = *(undefined8 **)*param_1;
  uVar3 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8), plVar5 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar4 = (undefined4 *)((ulonglong)*(byte *)(param_1[2] + 0xe) + (longlong)puVar6);
        puVar6 = (undefined8 *)*puVar6;
        *puVar4 = *(undefined4 *)((ulonglong)*(byte *)(param_1[1] + 0xe) + (longlong)plVar5);
        plVar5 = (longlong *)*plVar5;
      } while (plVar5 != (longlong *)0x0);
      uVar2 = (int)uVar3 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar2) break;
      while( true ) {
        uVar3 = (ulonglong)uVar2;
        plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8);
        if (plVar5 != (longlong *)0x0) break;
        uVar2 = uVar2 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar2) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa1fcd0 @ 14fa1fcd0

void FUN_14fa1fcd0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  KeyNode<unsigned_int> KVar3;
  KeyMapBase<unsigned_int> *this;
  longlong lVar4;
  KeyNode<unsigned_int> KVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  byte bVar15;
  ulonglong uVar16;
  bool bVar17;
  
  lVar2 = *param_1;
  uVar12 = (ulonglong)*(uint *)(lVar2 + 8);
  if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
     (plVar14 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar12 * 8), plVar14 != (longlong *)0x0
     )) {
    do {
      KVar3 = *(KeyNode<unsigned_int> *)param_1[1];
      *(KeyNode<unsigned_int> *)param_1[1] = *(KeyNode<unsigned_int> *)KVar3;
      uVar11 = *(uint *)(plVar14 + 1);
      *(uint *)((longlong)KVar3 + 8) = uVar11;
      this = (KeyMapBase<unsigned_int> *)param_1[2];
      lVar4 = *(longlong *)&this->field_0x10;
      uVar1 = *(uint *)&this->field_0x4;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                     (ulonglong)uVar11;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0) ^
                     SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8)) + lVar4;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar7,0) ^
                     SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar7,8)) + lVar4;
      uVar13 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar8,0) ^
               SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar8,8)) & uVar1 - 1;
      for (KVar5 = *(KeyNode<unsigned_int> *)(lVar4 + (ulonglong)uVar13 * 8);
          KVar5 != (KeyNode<unsigned_int>)0x0; KVar5 = *(KeyNode<unsigned_int> *)KVar5) {
        if (*(uint *)((longlong)KVar5 + 8) == uVar11) {
          if (KVar5 != (KeyNode<unsigned_int>)0x0) {
            google::protobuf::internal::KeyMapBase<unsigned_int>::EraseImpl
                      (this,uVar13,(KeyNode<unsigned_int> *)KVar5,true);
            goto LAB_14fa1fe82;
          }
          break;
        }
      }
      uVar16 = (ulonglong)(*(int *)this + 1);
      uVar10 = ((ulonglong)uVar1 + (ulonglong)(uVar1 >> 4) * -4) - (ulonglong)(uVar1 & 1);
      if (uVar10 < uVar16) {
        if (uVar1 < 0x80000000) {
          uVar11 = uVar1 * 2;
LAB_14fa1fe6c:
          google::protobuf::internal::KeyMapBase<unsigned_int>::Resize(this,uVar11);
          uVar13 = google::protobuf::internal::KeyMapBase<unsigned_int>::BucketNumber
                             (this,*(uint *)((longlong)KVar3 + 8));
        }
      }
      else if ((uVar16 <= uVar10 >> 2) && (2 < uVar1)) {
        bVar15 = 1;
        uVar16 = uVar16 * 5 >> 2;
        if (uVar16 * 4 + 4 < uVar10) {
          bVar9 = 2;
          do {
            bVar9 = bVar9 + 1;
            bVar15 = bVar15 + 1;
          } while (uVar16 + 1 << (bVar9 & 0x3f) < uVar10);
        }
        uVar10 = (ulonglong)(uVar1 >> (bVar15 & 0x3f));
        uVar16 = 2;
        if (2 < uVar10) {
          uVar16 = uVar10;
        }
        uVar11 = (uint)uVar16;
        if (uVar16 != uVar1) goto LAB_14fa1fe6c;
      }
LAB_14fa1fe82:
      google::protobuf::internal::KeyMapBase<unsigned_int>::InsertUnique
                (this,uVar13,(KeyNode<unsigned_int> *)KVar3);
      *(int *)this = *(int *)this + 1;
      plVar14 = (longlong *)*plVar14;
      bVar17 = false;
      if (plVar14 == (longlong *)0x0) {
        uVar11 = (int)uVar12 + 1;
        if (uVar11 < *(uint *)(lVar2 + 4)) {
          do {
            uVar12 = (ulonglong)uVar11;
            plVar14 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar12 * 8);
            bVar17 = plVar14 == (longlong *)0x0;
            if (!bVar17) goto LAB_14fa1febd;
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(lVar2 + 4));
        }
        plVar14 = (longlong *)0x0;
        uVar12 = 0;
        bVar17 = true;
      }
LAB_14fa1febd:
    } while (!bVar17);
  }
  return;
}

// FUN_14fa1ff60 @ 14fa1ff60

void FUN_14fa1ff60(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (plVar6 + 1));
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa200e0 @ 14fa200e0

void FUN_14fa200e0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar1 = param_1[1];
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  puVar7 = *(undefined8 **)*param_1;
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    lVar2 = param_1[2];
    while( true ) {
      do {
        puVar3 = (undefined4 *)((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)puVar7);
        puVar7 = (undefined8 *)*puVar7;
        *puVar3 = *(undefined4 *)((ulonglong)*(byte *)(lVar1 + 0xe) + (longlong)plVar6);
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa201d0 @ 14fa201d0

void FUN_14fa201d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (plVar6 + 1));
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20350 @ 14fa20350

void FUN_14fa20350(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  lVar1 = param_1[1];
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  puVar7 = *(undefined8 **)*param_1;
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    lVar2 = param_1[2];
    while( true ) {
      do {
        puVar3 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)puVar7);
        puVar7 = (undefined8 *)*puVar7;
        *puVar3 = *(undefined8 *)((ulonglong)*(byte *)(lVar1 + 0xe) + (longlong)plVar6);
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa203e0 @ 14fa203e0

void FUN_14fa203e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           ((ulonglong)*(byte *)(*param_1 + 0xe) + (longlong)plVar6));
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20480 @ 14fa20480

void FUN_14fa20480(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  __uint64 _Var5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  lVar2 = *param_1;
  uVar7 = (ulonglong)*(uint *)(lVar2 + 8);
  if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
     (plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar3 = (undefined8 *)param_1[1];
        bVar1 = *(byte *)(*param_1 + 0xe);
        _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (plVar8 + 1));
        plVar4 = (longlong *)*puVar3;
        *plVar4 = *plVar4 + _Var5;
        _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           ((ulonglong)bVar1 + (longlong)plVar8));
        plVar4 = (longlong *)*puVar3;
        *plVar4 = *plVar4 + _Var5;
        plVar8 = (longlong *)*plVar8;
      } while (plVar8 != (longlong *)0x0);
      uVar6 = (int)uVar7 + 1;
      if (*(uint *)(lVar2 + 4) <= uVar6) break;
      while( true ) {
        uVar7 = (ulonglong)uVar6;
        plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
        if (plVar8 != (longlong *)0x0) break;
        uVar6 = uVar6 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar6) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20540 @ 14fa20540

void FUN_14fa20540(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           ((ulonglong)*(byte *)(*param_1 + 0xe) + (longlong)plVar6));
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa205e0 @ 14fa205e0

void FUN_14fa205e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           ((ulonglong)*(byte *)(*param_1 + 0xe) + (longlong)plVar6));
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20680 @ 14fa20680

void FUN_14fa20680(undefined8 *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_1;
  local_10 = param_1[1];
  FUN_14fa23730(local_18,&local_18);
  return;
}

// FUN_14fa206b0 @ 14fa206b0

void FUN_14fa206b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  lVar1 = **(longlong **)(param_1 + 0x10);
  uVar2 = *(ulonglong *)(lVar1 + 0x20);
  if (0xf < uVar2) {
    pvVar3 = *(void **)(lVar1 + 8);
    uVar5 = uVar2 + 1;
    pvVar4 = pvVar3;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)pvVar3 + -8);
      uVar5 = uVar2 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar4,uVar5);
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0xf;
  *(undefined1 *)(lVar1 + 8) = 0;
  return;
}

// FUN_14fa20720 @ 14fa20720

void FUN_14fa20720(longlong param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)
           ((ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0xe) + **(longlong **)(param_1 + 0x10)
           );
  uVar1 = plVar5[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*plVar5;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  plVar5[2] = 0;
  plVar5[3] = 0xf;
  *(undefined1 *)plVar5 = 0;
  return;
}

// FUN_14fa207a0 @ 14fa207a0

void FUN_14fa207a0(undefined8 *param_1)

{
  longlong lVar1;
  ThreadSafeArena *this;
  uint uVar2;
  ulonglong uVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_00;
  longlong *plVar4;
  undefined8 *puVar5;
  
  lVar1 = param_1[1];
  uVar3 = (ulonglong)*(uint *)(lVar1 + 8);
  puVar5 = *(undefined8 **)*param_1;
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8), plVar4 != (longlong *)0x0))
  {
    while( true ) {
      do {
        this = *(ThreadSafeArena **)(param_1[2] + 0x18);
        this_00 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  ((ulonglong)*(byte *)(param_1[2] + 0xe) + (longlong)puVar5);
        puVar5 = (undefined8 *)*puVar5;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (this_00,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           ((ulonglong)*(byte *)(param_1[1] + 0xe) + (longlong)plVar4));
        if ((this != (ThreadSafeArena *)0x0) &&
           (this_00 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
          google::protobuf::internal::ThreadSafeArena::AddCleanup
                    (this,this_00,
                     google::protobuf::internal::cleanup::
                     arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                    );
        }
        plVar4 = (longlong *)*plVar4;
      } while (plVar4 != (longlong *)0x0);
      uVar2 = (int)uVar3 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar2) break;
      while( true ) {
        uVar3 = (ulonglong)uVar2;
        plVar4 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8);
        if (plVar4 != (longlong *)0x0) break;
        uVar2 = uVar2 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar2) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20890 @ 14fa20890

void FUN_14fa20890(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ThreadSafeArena *this;
  KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *this_00;
  longlong lVar4;
  uint uVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  NodeAndBucket local_58;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_48;
  ulong64 uStack_40;
  basic_string_view<char,std::char_traits<char>_> local_38;
  
  lVar2 = *param_1;
  uVar11 = (ulonglong)*(uint *)(lVar2 + 8);
  if ((*(uint *)(lVar2 + 8) == *(uint *)(lVar2 + 4)) ||
     (plVar12 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar11 * 8), plVar12 == (longlong *)0x0
     )) {
    return;
  }
  do {
    plVar3 = *(longlong **)param_1[1];
    this_01 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(plVar3 + 1);
    *(longlong *)param_1[1] = *plVar3;
    this = *(ThreadSafeArena **)(param_1[2] + 0x18);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (this_01,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       (plVar12 + 1));
    if ((this != (ThreadSafeArena *)0x0) &&
       (this_01 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
      google::protobuf::internal::ThreadSafeArena::AddCleanup
                (this,this_01,
                 google::protobuf::internal::cleanup::
                 arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                );
    }
    this_00 = (KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
              param_1[2];
    local_38._Mydata = (char *)this_01;
    if (0xf < (ulonglong)plVar3[4]) {
      local_38._Mydata = (this_01->_Mypair)._Myval2._Bx._Ptr;
    }
    local_38._Mysize = plVar3[3];
    google::protobuf::internal::
    KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::FindHelper
              (this_00,&local_58,&local_38);
    uVar10 = local_58.bucket;
    if ((KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
        local_58.node ==
        (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)0x0) {
      uVar7 = *(uint *)(this_00 + 4);
      uVar14 = (ulonglong)(*(int *)this_00 + 1);
      uVar13 = ((ulonglong)uVar7 + (ulonglong)(uVar7 >> 4) * -4) - (ulonglong)(uVar7 & 1);
      if (uVar13 < uVar14) {
        if (uVar7 < 0x80000000) {
          uVar9 = uVar7 * 2;
LAB_14fa20a2c:
          google::protobuf::internal::
          KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::Resize
                    (this_00,uVar9);
          if (0xf < (ulonglong)plVar3[4]) {
            this_01 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                      (this_01->_Mypair)._Myval2._Bx._Ptr;
          }
          uStack_40 = plVar3[3];
          local_48 = this_01;
          local_38._Mydata = (char *)this_01;
          local_38._Mysize = uStack_40;
          uVar10 = google::protobuf::internal::
                   KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                   ::BucketNumber(this_00,&local_38);
        }
      }
      else if ((uVar14 <= uVar13 >> 2) && (2 < uVar7)) {
        bVar8 = 1;
        uVar14 = uVar14 * 5 >> 2;
        if (uVar14 * 4 + 4 < uVar13) {
          bVar6 = 2;
          do {
            bVar6 = bVar6 + 1;
            bVar8 = bVar8 + 1;
          } while (uVar14 + 1 << (bVar6 & 0x3f) < uVar13);
        }
        uVar5 = uVar7 >> (bVar8 & 0x3f);
        uVar9 = 2;
        if (2 < uVar5) {
          uVar9 = uVar5;
        }
        if (uVar9 != uVar7) goto LAB_14fa20a2c;
      }
    }
    else {
      google::protobuf::internal::
      KeyMapBase<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>::EraseImpl
                (this_00,local_58.bucket,
                 (KeyNode<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> *)
                 local_58.node,true);
    }
    puVar1 = (undefined8 *)(*(longlong *)(this_00 + 0x10) + (ulonglong)uVar10 * 8);
    lVar4 = *(longlong *)(*(longlong *)(this_00 + 0x10) + (ulonglong)uVar10 * 8);
    if (lVar4 == 0) {
      *puVar1 = plVar3;
      *plVar3 = 0;
      uVar7 = *(uint *)(this_00 + 8);
      if (uVar10 < *(uint *)(this_00 + 8)) {
        uVar7 = uVar10;
      }
      *(uint *)(this_00 + 8) = uVar7;
    }
    else {
      *plVar3 = lVar4;
      *puVar1 = plVar3;
    }
    *(int *)this_00 = *(int *)this_00 + 1;
    plVar12 = (longlong *)*plVar12;
    if (plVar12 == (longlong *)0x0) {
      uVar10 = (int)uVar11 + 1;
      if (*(uint *)(lVar2 + 4) <= uVar10) {
        return;
      }
      while( true ) {
        uVar11 = (ulonglong)uVar10;
        plVar12 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar11 * 8);
        if (plVar12 != (longlong *)0x0) break;
        uVar10 = uVar10 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar10) {
          return;
        }
      }
    }
  } while( true );
}

// FUN_14fa20b20 @ 14fa20b20

void FUN_14fa20b20(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        plVar7 = (longlong *)((ulonglong)*(byte *)(*param_1 + 0xe) + (longlong)plVar6);
        lVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
        if (*(char *)(lVar3 + 0x3c) == '\0') {
          uVar4 = *(uint *)(lVar3 + 0x28);
          lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x40) + 0x18))(plVar7);
          lVar3 = lVar3 - (ulonglong)uVar4;
        }
        else {
          lVar3 = 0;
        }
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + lVar3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20bf0 @ 14fa20bf0

void FUN_14fa20bf0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  __uint64 _Var4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar1 = *param_1;
  uVar7 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar8 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        plVar9 = (longlong *)((ulonglong)*(byte *)(*param_1 + 0xe) + (longlong)plVar8);
        _Var4 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (plVar8 + 1));
        plVar3 = (longlong *)*puVar2;
        *plVar3 = *plVar3 + _Var4;
        lVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
        if (*(char *)(lVar5 + 0x3c) == '\0') {
          uVar6 = *(uint *)(lVar5 + 0x28);
          lVar5 = (**(code **)(*(longlong *)(lVar5 + 0x40) + 0x18))(plVar9);
          lVar5 = lVar5 - (ulonglong)uVar6;
        }
        else {
          lVar5 = 0;
        }
        plVar3 = (longlong *)*puVar2;
        *plVar3 = *plVar3 + lVar5;
        plVar8 = (longlong *)*plVar8;
      } while (plVar8 != (longlong *)0x0);
      uVar6 = (int)uVar7 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar6) break;
      while( true ) {
        uVar7 = (ulonglong)uVar6;
        plVar8 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar7 * 8);
        if (plVar8 != (longlong *)0x0) break;
        uVar6 = uVar6 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar6) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20cd0 @ 14fa20cd0

void FUN_14fa20cd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        plVar7 = (longlong *)((ulonglong)*(byte *)(*param_1 + 0xe) + (longlong)plVar6);
        lVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
        if (*(char *)(lVar3 + 0x3c) == '\0') {
          uVar4 = *(uint *)(lVar3 + 0x28);
          lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x40) + 0x18))(plVar7);
          lVar3 = lVar3 - (ulonglong)uVar4;
        }
        else {
          lVar3 = 0;
        }
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + lVar3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20da0 @ 14fa20da0

void FUN_14fa20da0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        plVar7 = (longlong *)((ulonglong)*(byte *)(*param_1 + 0xe) + (longlong)plVar6);
        lVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
        if (*(char *)(lVar3 + 0x3c) == '\0') {
          uVar4 = *(uint *)(lVar3 + 0x28);
          lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x40) + 0x18))(plVar7);
          lVar3 = lVar3 - (ulonglong)uVar4;
        }
        else {
          lVar3 = 0;
        }
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + lVar3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20e90 @ 14fa20e90

void FUN_14fa20e90(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  MessageLite *this;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  
  lVar2 = param_1[1];
  puVar8 = *(undefined8 **)*param_1;
  if (*(uint *)(lVar2 + 8) == *(uint *)(lVar2 + 4)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)*(uint *)(lVar2 + 8) * 8);
  }
  puVar3 = (undefined8 *)
           (**(code **)(*(longlong *)((ulonglong)*(byte *)(lVar2 + 0xe) + lVar4) + 0x18))();
  lVar2 = param_1[1];
  uVar6 = (ulonglong)*(uint *)(lVar2 + 8);
  if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
     (plVar7 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar6 * 8), plVar7 != (longlong *)0x0))
  {
    while( true ) {
      do {
        bVar1 = *(byte *)(param_1[1] + 0xe);
        lVar4 = (ulonglong)*(byte *)(param_1[2] + 0xe) + (longlong)puVar8;
        puVar8 = (undefined8 *)*puVar8;
        this = (MessageLite *)(*(code *)puVar3[6])(*puVar3,lVar4,*(undefined8 *)(param_1[2] + 0x18))
        ;
        google::protobuf::MessageLite::CheckTypeAndMergeFrom
                  (this,(MessageLite *)((ulonglong)bVar1 + (longlong)plVar7));
        plVar7 = (longlong *)*plVar7;
      } while (plVar7 != (longlong *)0x0);
      uVar5 = (int)uVar6 + 1;
      if (*(uint *)(lVar2 + 4) <= uVar5) break;
      while( true ) {
        uVar6 = (ulonglong)uVar5;
        plVar7 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar6 * 8);
        if (plVar7 != (longlong *)0x0) break;
        uVar5 = uVar5 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar5) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa20ff0 @ 14fa20ff0

void FUN_14fa20ff0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (plVar6 + 1));
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa21160 @ 14fa21160

void FUN_14fa21160(undefined8 *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_1;
  local_10 = param_1[1];
  FUN_14fa23ad0(local_18,&local_18);
  return;
}

// FUN_14fa211b0 @ 14fa211b0

void FUN_14fa211b0(undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  lVar1 = param_1[1];
  puVar6 = *(undefined8 **)*param_1;
  uVar3 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8), plVar5 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar4 = (undefined8 *)((ulonglong)*(byte *)(param_1[2] + 0xe) + (longlong)puVar6);
        puVar6 = (undefined8 *)*puVar6;
        *puVar4 = *(undefined8 *)((ulonglong)*(byte *)(param_1[1] + 0xe) + (longlong)plVar5);
        plVar5 = (longlong *)*plVar5;
      } while (plVar5 != (longlong *)0x0);
      uVar2 = (int)uVar3 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar2) break;
      while( true ) {
        uVar3 = (ulonglong)uVar2;
        plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8);
        if (plVar5 != (longlong *)0x0) break;
        uVar2 = uVar2 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar2) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa21240 @ 14fa21240

void FUN_14fa21240(longlong *param_1)

{
  longlong lVar1;
  KeyNode<unsigned___int64> KVar2;
  KeyNode<unsigned___int64> KVar3;
  KeyMapBase<unsigned___int64> *this;
  longlong lVar4;
  KeyNode<unsigned___int64> KVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  byte bVar16;
  ulonglong uVar17;
  bool bVar18;
  
  lVar1 = *param_1;
  uVar13 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar15 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar13 * 8), plVar15 != (longlong *)0x0
     )) {
    do {
      KVar2 = *(KeyNode<unsigned___int64> *)param_1[1];
      *(KeyNode<unsigned___int64> *)param_1[1] = *(KeyNode<unsigned___int64> *)KVar2;
      KVar3 = *(KeyNode<unsigned___int64> *)(plVar15 + 1);
      *(KeyNode<unsigned___int64> *)((longlong)KVar2 + 8) = KVar3;
      this = (KeyMapBase<unsigned___int64> *)param_1[2];
      lVar4 = *(longlong *)&this->field_0x10;
      uVar12 = *(uint *)&this->field_0x4;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                     (longlong)KVar3;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0) ^
                     SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8)) + lVar4;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar7,0) ^
                     SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar7,8)) + lVar4;
      uVar14 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar8,0) ^
               SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar8,8)) & uVar12 - 1;
      for (KVar5 = *(KeyNode<unsigned___int64> *)(lVar4 + (ulonglong)uVar14 * 8);
          KVar5 != (KeyNode<unsigned___int64>)0x0; KVar5 = *(KeyNode<unsigned___int64> *)KVar5) {
        if (*(KeyNode<unsigned___int64> *)((longlong)KVar5 + 8) == KVar3) {
          if (KVar5 != (KeyNode<unsigned___int64>)0x0) {
            google::protobuf::internal::KeyMapBase<unsigned___int64>::EraseImpl
                      (this,uVar14,(KeyNode<unsigned___int64> *)KVar5,true);
            goto LAB_14fa213f2;
          }
          break;
        }
      }
      uVar17 = (ulonglong)(*(int *)this + 1);
      uVar11 = ((ulonglong)uVar12 + (ulonglong)(uVar12 >> 4) * -4) - (ulonglong)(uVar12 & 1);
      if (uVar11 < uVar17) {
        if (uVar12 < 0x80000000) {
          uVar10 = uVar12 * 2;
LAB_14fa213dc:
          google::protobuf::internal::KeyMapBase<unsigned___int64>::Resize(this,uVar10);
          uVar14 = google::protobuf::internal::KeyMapBase<unsigned___int64>::BucketNumber
                             (this,*(ulong64 *)((longlong)KVar2 + 8));
        }
      }
      else if ((uVar17 <= uVar11 >> 2) && (2 < uVar12)) {
        bVar16 = 1;
        uVar17 = uVar17 * 5 >> 2;
        if (uVar17 * 4 + 4 < uVar11) {
          bVar9 = 2;
          do {
            bVar9 = bVar9 + 1;
            bVar16 = bVar16 + 1;
          } while (uVar17 + 1 << (bVar9 & 0x3f) < uVar11);
        }
        uVar11 = (ulonglong)(uVar12 >> (bVar16 & 0x3f));
        uVar17 = 2;
        if (2 < uVar11) {
          uVar17 = uVar11;
        }
        uVar10 = (uint)uVar17;
        if (uVar17 != uVar12) goto LAB_14fa213dc;
      }
LAB_14fa213f2:
      google::protobuf::internal::KeyMapBase<unsigned___int64>::InsertUnique
                (this,uVar14,(KeyNode<unsigned___int64> *)KVar2);
      *(int *)this = *(int *)this + 1;
      plVar15 = (longlong *)*plVar15;
      bVar18 = false;
      if (plVar15 == (longlong *)0x0) {
        uVar12 = (int)uVar13 + 1;
        if (uVar12 < *(uint *)(lVar1 + 4)) {
          do {
            uVar13 = (ulonglong)uVar12;
            plVar15 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar13 * 8);
            bVar18 = plVar15 == (longlong *)0x0;
            if (!bVar18) goto LAB_14fa2142d;
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(lVar1 + 4));
        }
        plVar15 = (longlong *)0x0;
        uVar13 = 0;
        bVar18 = true;
      }
LAB_14fa2142d:
    } while (!bVar18);
  }
  return;
}

// FUN_14fa214d0 @ 14fa214d0

void FUN_14fa214d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar2 = (undefined8 *)param_1[1];
        _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                          ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                           (plVar6 + 1));
        *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
        plVar6 = (longlong *)*plVar6;
      } while (plVar6 != (longlong *)0x0);
      uVar4 = (int)uVar5 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar4) break;
      while( true ) {
        uVar5 = (ulonglong)uVar4;
        plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if (plVar6 != (longlong *)0x0) break;
        uVar4 = uVar4 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar4) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa21640 @ 14fa21640

void FUN_14fa21640(undefined8 *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_1;
  local_10 = param_1[1];
  FUN_14fa23e30(local_18,&local_18);
  return;
}

// FUN_14fa21690 @ 14fa21690

void FUN_14fa21690(undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  lVar1 = param_1[1];
  puVar6 = *(undefined8 **)*param_1;
  uVar3 = (ulonglong)*(uint *)(lVar1 + 8);
  if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
     (plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8), plVar5 != (longlong *)0x0))
  {
    while( true ) {
      do {
        puVar4 = (undefined1 *)((ulonglong)*(byte *)(param_1[2] + 0xe) + (longlong)puVar6);
        puVar6 = (undefined8 *)*puVar6;
        *puVar4 = *(undefined1 *)((ulonglong)*(byte *)(param_1[1] + 0xe) + (longlong)plVar5);
        plVar5 = (longlong *)*plVar5;
      } while (plVar5 != (longlong *)0x0);
      uVar2 = (int)uVar3 + 1;
      if (*(uint *)(lVar1 + 4) <= uVar2) break;
      while( true ) {
        uVar3 = (ulonglong)uVar2;
        plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8);
        if (plVar5 != (longlong *)0x0) break;
        uVar2 = uVar2 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar2) {
          return;
        }
      }
    }
  }
  return;
}

// FUN_14fa21720 @ 14fa21720

void FUN_14fa21720(longlong *param_1)

{
  KeyNode<bool> KVar1;
  longlong lVar2;
  KeyNode<bool> *pKVar3;
  KeyMapBase<bool> *this;
  longlong lVar4;
  KeyNode<bool> *pKVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  byte bVar16;
  ulonglong uVar17;
  bool bVar18;
  
  lVar2 = *param_1;
  uVar13 = (ulonglong)*(uint *)(lVar2 + 8);
  if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
     (plVar15 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar13 * 8), plVar15 != (longlong *)0x0
     )) {
    do {
      pKVar3 = *(KeyNode<bool> **)param_1[1];
      *(undefined8 *)param_1[1] = *(undefined8 *)pKVar3;
      KVar1 = *(KeyNode<bool> *)(plVar15 + 1);
      pKVar3[8] = KVar1;
      this = (KeyMapBase<bool> *)param_1[2];
      lVar4 = *(longlong *)(this + 0x10);
      uVar12 = *(uint *)(this + 4);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (longlong)&absl::lts_20240722::hash_internal::MixingHashState::kSeed +
                     (ulonglong)(KVar1 != (KeyNode<bool>)0x0);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,0) ^
                     SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar6,8)) + lVar4;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar7,0) ^
                     SUB168(ZEXT816(0x9ddfea08eb382d69) * auVar7,8)) + lVar4;
      uVar14 = (SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar8,0) ^
               SUB164(ZEXT816(0x9ddfea08eb382d69) * auVar8,8)) & uVar12 - 1;
      for (pKVar5 = *(KeyNode<bool> **)(lVar4 + (ulonglong)uVar14 * 8);
          pKVar5 != (KeyNode<bool> *)0x0; pKVar5 = *(KeyNode<bool> **)pKVar5) {
        if (pKVar5[8] == KVar1) {
          if (pKVar5 != (KeyNode<bool> *)0x0) {
            google::protobuf::internal::KeyMapBase<bool>::EraseImpl(this,uVar14,pKVar5,true);
            goto LAB_14fa218d3;
          }
          break;
        }
      }
      uVar17 = (ulonglong)(*(int *)this + 1);
      uVar11 = ((ulonglong)uVar12 + (ulonglong)(uVar12 >> 4) * -4) - (ulonglong)(uVar12 & 1);
      if (uVar11 < uVar17) {
        if (uVar12 < 0x80000000) {
          uVar10 = uVar12 * 2;
LAB_14fa218bc:
          google::protobuf::internal::KeyMapBase<bool>::Resize(this,uVar10);
          uVar14 = google::protobuf::internal::KeyMapBase<bool>::BucketNumber(this,(bool)pKVar3[8]);
        }
      }
      else if ((uVar17 <= uVar11 >> 2) && (2 < uVar12)) {
        bVar16 = 1;
        uVar17 = uVar17 * 5 >> 2;
        if (uVar17 * 4 + 4 < uVar11) {
          bVar9 = 2;
          do {
            bVar9 = bVar9 + 1;
            bVar16 = bVar16 + 1;
          } while (uVar17 + 1 << (bVar9 & 0x3f) < uVar11);
        }
        uVar11 = (ulonglong)(uVar12 >> (bVar16 & 0x3f));
        uVar17 = 2;
        if (2 < uVar11) {
          uVar17 = uVar11;
        }
        uVar10 = (uint)uVar17;
        if (uVar17 != uVar12) goto LAB_14fa218bc;
      }
LAB_14fa218d3:
      google::protobuf::internal::KeyMapBase<bool>::InsertUnique(this,uVar14,pKVar3);
      *(int *)this = *(int *)this + 1;
      plVar15 = (longlong *)*plVar15;
      bVar18 = false;
      if (plVar15 == (longlong *)0x0) {
        uVar12 = (int)uVar13 + 1;
        if (uVar12 < *(uint *)(lVar2 + 4)) {
          do {
            uVar13 = (ulonglong)uVar12;
            plVar15 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar13 * 8);
            bVar18 = plVar15 == (longlong *)0x0;
            if (!bVar18) goto LAB_14fa21916;
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(lVar2 + 4));
        }
        plVar15 = (longlong *)0x0;
        uVar13 = 0;
        bVar18 = true;
      }
LAB_14fa21916:
    } while (!bVar18);
  }
  return;
}

// FUN_14fa21960 @ 14fa21960

void FUN_14fa21960(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  lVar2 = *param_1;
  uVar10 = (ulonglong)*(uint *)(lVar2 + 8);
  uVar1 = *(uint *)(lVar2 + 4);
  if (*(uint *)(lVar2 + 8) < uVar1) {
    puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + uVar10 * 8);
    do {
      puVar6 = (undefined8 *)*puVar11;
      while (puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar6;
        uVar4 = puVar6[4];
        if (0xf < uVar4) {
          pvVar5 = (void *)puVar6[1];
          uVar8 = uVar4 + 1;
          pvVar7 = pvVar5;
          if (0xfff < uVar8) {
            pvVar7 = *(void **)((longlong)pvVar5 + -8);
            uVar8 = uVar4 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,uVar8);
        }
        puVar6[3] = 0;
        puVar6[4] = 0xf;
        *(undefined1 *)(puVar6 + 1) = 0;
        operator_delete(puVar6,(ulonglong)*(ushort *)(*param_1 + 0xc));
        puVar6 = puVar3;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      puVar11 = puVar11 + 1;
    } while (uVar9 < uVar1);
  }
  return;
}

// FUN_14fa21a50 @ 14fa21a50

void FUN_14fa21a50(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  longlong *plVar9;
  uint uVar10;
  
  lVar2 = *param_1;
  uVar10 = *(uint *)(lVar2 + 8);
  uVar1 = *(uint *)(lVar2 + 4);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  do {
    if (uVar1 <= uVar10) {
      return;
    }
    puVar6 = *(undefined8 **)(lVar2 + (ulonglong)uVar10 * 8);
    while (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar6;
      uVar4 = puVar6[4];
      if (0xf < uVar4) {
        pvVar5 = (void *)puVar6[1];
        uVar8 = uVar4 + 1;
        pvVar7 = pvVar5;
        if (0xfff < uVar8) {
          pvVar7 = *(void **)((longlong)pvVar5 + -8);
          uVar8 = uVar4 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7))) goto LAB_14fa21b8b;
        }
        operator_delete(pvVar7,uVar8);
      }
      puVar6[3] = 0;
      puVar6[4] = 0xf;
      *(undefined1 *)(puVar6 + 1) = 0;
      plVar9 = (longlong *)((ulonglong)*(byte *)(param_2 + 0xe) + (longlong)puVar6);
      uVar4 = plVar9[3];
      if (0xf < uVar4) {
        pvVar5 = (void *)*plVar9;
        uVar8 = uVar4 + 1;
        pvVar7 = pvVar5;
        if (0xfff < uVar8) {
          pvVar7 = *(void **)((longlong)pvVar5 + -8);
          uVar8 = uVar4 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7))) {
LAB_14fa21b8b:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,uVar8);
      }
      plVar9[2] = 0;
      plVar9[3] = 0xf;
      *(undefined1 *)plVar9 = 0;
      operator_delete(puVar6,(ulonglong)*(ushort *)(*param_1 + 0xc));
      puVar6 = puVar3;
    }
    uVar10 = uVar10 + 1;
  } while( true );
}

// FUN_14fa21ba0 @ 14fa21ba0

void FUN_14fa21ba0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  uint uVar9;
  
  lVar2 = *param_1;
  uVar9 = *(uint *)(lVar2 + 8);
  uVar1 = *(uint *)(lVar2 + 4);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  do {
    if (uVar1 <= uVar9) {
      return;
    }
    puVar6 = *(undefined8 **)(lVar2 + (ulonglong)uVar9 * 8);
    while (puVar6 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar6;
      uVar4 = puVar6[4];
      if (0xf < uVar4) {
        pvVar5 = (void *)puVar6[1];
        uVar8 = uVar4 + 1;
        pvVar7 = pvVar5;
        if (0xfff < uVar8) {
          pvVar7 = *(void **)((longlong)pvVar5 + -8);
          uVar8 = uVar4 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        operator_delete(pvVar7,uVar8);
      }
      puVar6[3] = 0;
      puVar6[4] = 0xf;
      *(undefined1 *)(puVar6 + 1) = 0;
      google::protobuf::MessageLite::DestroyInstance
                ((MessageLite *)((ulonglong)*(byte *)(param_2 + 0xe) + (longlong)puVar6));
      operator_delete(puVar6,(ulonglong)*(ushort *)(*param_1 + 0xc));
      puVar6 = puVar3;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

// FUN_14fa21ca0 @ 14fa21ca0

void FUN_14fa21ca0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 8);
  if (uVar1 < *(uint *)(lVar2 + 4)) {
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)uVar1 * 8);
    uVar5 = (ulonglong)(*(uint *)(lVar2 + 4) - uVar1);
    do {
      puVar4 = (undefined8 *)*puVar6;
      while (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar4;
        operator_delete(puVar4,(ulonglong)*(ushort *)(*param_1 + 0xc));
        puVar4 = puVar3;
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// FUN_14fa21d20 @ 14fa21d20

void FUN_14fa21d20(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  byte bVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  
  bVar9 = *(byte *)(*param_1 + 0xf) & 0xf;
  if (bVar9 < 5) {
    plVar2 = (longlong *)param_1[1];
    lVar3 = *plVar2;
    uVar1 = *(uint *)(lVar3 + 8);
    if (uVar1 < *(uint *)(lVar3 + 4)) {
      puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar1 * 8);
      uVar11 = (ulonglong)(*(uint *)(lVar3 + 4) - uVar1);
      do {
        puVar7 = (undefined8 *)*puVar13;
        while (puVar7 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar7;
          operator_delete(puVar7,(ulonglong)*(ushort *)(*plVar2 + 0xc));
          puVar7 = puVar4;
        }
        puVar13 = puVar13 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      return;
    }
  }
  else {
    if (bVar9 != 5) {
                    /* WARNING: Subroutine does not return */
      google::protobuf::internal::Unreachable();
    }
    plVar2 = (longlong *)param_1[1];
    lVar3 = *plVar2;
    uVar11 = (ulonglong)*(uint *)(lVar3 + 8);
    uVar1 = *(uint *)(lVar3 + 4);
    if (*(uint *)(lVar3 + 8) < uVar1) {
      puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x10) + uVar11 * 8);
      do {
        puVar7 = (undefined8 *)*puVar13;
        while (puVar7 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar7;
          uVar5 = puVar7[4];
          if (0xf < uVar5) {
            pvVar6 = (void *)puVar7[1];
            uVar10 = uVar5 + 1;
            pvVar8 = pvVar6;
            if (0xfff < uVar10) {
              pvVar8 = *(void **)((longlong)pvVar6 + -8);
              uVar10 = uVar5 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar6 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar8,uVar10);
          }
          puVar7[3] = 0;
          puVar7[4] = 0xf;
          *(undefined1 *)(puVar7 + 1) = 0;
          operator_delete(puVar7,(ulonglong)*(ushort *)(*plVar2 + 0xc));
          puVar7 = puVar4;
        }
        uVar12 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar12;
        puVar13 = puVar13 + 1;
      } while (uVar12 < uVar1);
    }
  }
  return;
}

// FUN_14fa21e80 @ 14fa21e80

void FUN_14fa21e80(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong64 uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  lVar2 = *param_1;
  uVar11 = (ulonglong)*(uint *)(lVar2 + 8);
  uVar1 = *(uint *)(lVar2 + 4);
  if (*(uint *)(lVar2 + 8) < uVar1) {
    puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + uVar11 * 8);
    do {
      puVar6 = (undefined8 *)*puVar12;
      while (puVar6 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar6;
        plVar9 = (longlong *)((ulonglong)*(byte *)(param_2 + 0xe) + (longlong)puVar6);
        uVar4 = plVar9[3];
        if (0xf < uVar4) {
          pvVar5 = (void *)*plVar9;
          uVar8 = uVar4 + 1;
          pvVar7 = pvVar5;
          if (0xfff < uVar8) {
            pvVar7 = *(void **)((longlong)pvVar5 + -8);
            uVar8 = uVar4 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar7,uVar8);
        }
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
        operator_delete(puVar6,(ulonglong)*(ushort *)(*param_1 + 0xc));
        puVar6 = puVar3;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      puVar12 = puVar12 + 1;
    } while (uVar10 < uVar1);
  }
  return;
}

// FUN_14fa21f80 @ 14fa21f80

void FUN_14fa21f80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  byte bVar9;
  ulong64 uVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  
  bVar9 = *(byte *)(*param_1 + 0xf) & 0xf;
  if (bVar9 < 5) {
    plVar1 = (longlong *)param_1[1];
    lVar2 = *plVar1;
    uVar14 = (ulonglong)*(uint *)(lVar2 + 8);
    uVar13 = *(uint *)(lVar2 + 4);
    if (*(uint *)(lVar2 + 8) < uVar13) {
      puVar15 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + uVar14 * 8);
      do {
        puVar7 = (undefined8 *)*puVar15;
        while (puVar7 != (undefined8 *)0x0) {
          puVar3 = (undefined8 *)*puVar7;
          plVar11 = (longlong *)((ulonglong)*(byte *)(param_2 + 0xe) + (longlong)puVar7);
          uVar4 = plVar11[3];
          if (0xf < uVar4) {
            pvVar5 = (void *)*plVar11;
            uVar10 = uVar4 + 1;
            pvVar8 = pvVar5;
            if (0xfff < uVar10) {
              pvVar8 = *(void **)((longlong)pvVar5 + -8);
              uVar10 = uVar4 + 0x28;
              if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar8))) {
LAB_14fa22190:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            operator_delete(pvVar8,uVar10);
          }
          plVar11[2] = 0;
          plVar11[3] = 0xf;
          *(undefined1 *)plVar11 = 0;
          operator_delete(puVar7,(ulonglong)*(ushort *)(*plVar1 + 0xc));
          puVar7 = puVar3;
        }
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
        puVar15 = puVar15 + 1;
      } while (uVar12 < uVar13);
    }
  }
  else {
    if (bVar9 != 5) {
                    /* WARNING: Subroutine does not return */
      google::protobuf::internal::Unreachable();
    }
    plVar1 = (longlong *)param_1[1];
    lVar2 = *plVar1;
    lVar6 = *(longlong *)(lVar2 + 0x10);
    uVar12 = *(uint *)(lVar2 + 4);
    for (uVar13 = *(uint *)(lVar2 + 8); uVar13 < uVar12; uVar13 = uVar13 + 1) {
      puVar15 = *(undefined8 **)(lVar6 + (ulonglong)uVar13 * 8);
      while (puVar15 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)*puVar15;
        uVar14 = puVar15[4];
        if (0xf < uVar14) {
          pvVar5 = (void *)puVar15[1];
          uVar10 = uVar14 + 1;
          pvVar8 = pvVar5;
          if (0xfff < uVar10) {
            pvVar8 = *(void **)((longlong)pvVar5 + -8);
            uVar10 = uVar14 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar8))) goto LAB_14fa22190;
          }
          operator_delete(pvVar8,uVar10);
        }
        puVar15[3] = 0;
        puVar15[4] = 0xf;
        *(undefined1 *)(puVar15 + 1) = 0;
        plVar11 = (longlong *)((ulonglong)*(byte *)(param_2 + 0xe) + (longlong)puVar15);
        uVar14 = plVar11[3];
        if (0xf < uVar14) {
          pvVar5 = (void *)*plVar11;
          uVar10 = uVar14 + 1;
          pvVar8 = pvVar5;
          if (0xfff < uVar10) {
            pvVar8 = *(void **)((longlong)pvVar5 + -8);
            uVar10 = uVar14 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar8))) goto LAB_14fa22190;
          }
          operator_delete(pvVar8,uVar10);
        }
        plVar11[2] = 0;
        plVar11[3] = 0xf;
        *(undefined1 *)plVar11 = 0;
        operator_delete(puVar15,(ulonglong)*(ushort *)(*plVar1 + 0xc));
        puVar15 = puVar7;
      }
    }
  }
  return;
}

// FUN_14fa221b0 @ 14fa221b0

void FUN_14fa221b0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(lVar2 + 8);
  if (uVar1 < *(uint *)(lVar2 + 4)) {
    puVar6 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)uVar1 * 8);
    uVar5 = (ulonglong)(*(uint *)(lVar2 + 4) - uVar1);
    do {
      puVar4 = (undefined8 *)*puVar6;
      while (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar4;
        google::protobuf::MessageLite::DestroyInstance
                  ((MessageLite *)((ulonglong)*(byte *)(param_2 + 0xe) + (longlong)puVar4));
        operator_delete(puVar4,(ulonglong)*(ushort *)(*param_1 + 0xc));
        puVar4 = puVar3;
      }
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

// FUN_14fa22260 @ 14fa22260

void FUN_14fa22260(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  byte bVar9;
  ulong64 uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  
  bVar9 = *(byte *)(*param_1 + 0xf) & 0xf;
  if (bVar9 < 5) {
    plVar2 = (longlong *)param_1[1];
    lVar3 = *plVar2;
    uVar11 = *(uint *)(lVar3 + 8);
    if (uVar11 < *(uint *)(lVar3 + 4)) {
      puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar11 * 8);
      uVar12 = (ulonglong)(*(uint *)(lVar3 + 4) - uVar11);
      do {
        puVar6 = (undefined8 *)*puVar13;
        while (puVar6 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar6;
          google::protobuf::MessageLite::DestroyInstance
                    ((MessageLite *)((ulonglong)*(byte *)(param_2 + 0xe) + (longlong)puVar6));
          operator_delete(puVar6,(ulonglong)*(ushort *)(*plVar2 + 0xc));
          puVar6 = puVar4;
        }
        puVar13 = puVar13 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      return;
    }
  }
  else {
    if (bVar9 != 5) {
                    /* WARNING: Subroutine does not return */
      google::protobuf::internal::Unreachable();
    }
    plVar2 = (longlong *)param_1[1];
    lVar3 = *plVar2;
    uVar1 = *(uint *)(lVar3 + 4);
    lVar5 = *(longlong *)(lVar3 + 0x10);
    for (uVar11 = *(uint *)(lVar3 + 8); uVar11 < uVar1; uVar11 = uVar11 + 1) {
      puVar13 = *(undefined8 **)(lVar5 + (ulonglong)uVar11 * 8);
      while (puVar13 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar13;
        uVar12 = puVar13[4];
        if (0xf < uVar12) {
          pvVar7 = (void *)puVar13[1];
          uVar10 = uVar12 + 1;
          pvVar8 = pvVar7;
          if (0xfff < uVar10) {
            pvVar8 = *(void **)((longlong)pvVar7 + -8);
            uVar10 = uVar12 + 0x28;
            if (0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar8))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          operator_delete(pvVar8,uVar10);
        }
        puVar13[3] = 0;
        puVar13[4] = 0xf;
        *(undefined1 *)(puVar13 + 1) = 0;
        google::protobuf::MessageLite::DestroyInstance
                  ((MessageLite *)((ulonglong)*(byte *)(param_2 + 0xe) + (longlong)puVar13));
        operator_delete(puVar13,(ulonglong)*(ushort *)(*plVar2 + 0xc));
        puVar13 = puVar6;
      }
    }
  }
  return;
}

// FUN_14fa223e0 @ 14fa223e0

void FUN_14fa223e0(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_2);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa22410 @ 14fa22410

void FUN_14fa22410(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_2);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa22440 @ 14fa22440

void FUN_14fa22440(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_2);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa22470 @ 14fa22470

void FUN_14fa22470(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_2);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_3);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa224b0 @ 14fa224b0

void FUN_14fa224b0(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
                  longlong *param_3)

{
  uint uVar1;
  __uint64 _Var2;
  longlong lVar3;
  
  _Var2 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_2);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var2;
  lVar3 = (**(code **)(*param_3 + 0x18))(param_3);
  if (*(char *)(lVar3 + 0x3c) == '\0') {
    uVar1 = *(uint *)(lVar3 + 0x28);
    lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x40) + 0x18))(param_3);
    *(longlong *)*param_1 = *(longlong *)*param_1 + (lVar3 - (ulonglong)uVar1);
  }
  return;
}

// FUN_14fa22520 @ 14fa22520

void FUN_14fa22520(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_2);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa22550 @ 14fa22550

void FUN_14fa22550(undefined8 *param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_2);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa225b0 @ 14fa225b0

void FUN_14fa225b0(undefined8 *param_1,undefined8 param_2,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_3);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa225e0 @ 14fa225e0

void FUN_14fa225e0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_3 + 0x18))(param_3);
  if (*(char *)(lVar2 + 0x3c) == '\0') {
    uVar1 = *(uint *)(lVar2 + 0x28);
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x18))(param_3);
    *(longlong *)*param_1 = *(longlong *)*param_1 + (lVar2 - (ulonglong)uVar1);
  }
  return;
}

// FUN_14fa22690 @ 14fa22690

void FUN_14fa22690(undefined8 *param_1,undefined8 param_2,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong(param_3);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// FUN_14fa226c0 @ 14fa226c0

void FUN_14fa226c0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_3 + 0x18))(param_3);
  if (*(char *)(lVar2 + 0x3c) == '\0') {
    uVar1 = *(uint *)(lVar2 + 0x28);
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x18))(param_3);
    *(longlong *)*param_1 = *(longlong *)*param_1 + (lVar2 - (ulonglong)uVar1);
  }
  return;
}

// Check_EQImpl<unsigned___int64,unsigned_char> @ 14fa22860

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_EQImpl<unsigned __int64,unsigned char>(unsigned
   __int64 const & __ptr64,unsigned char const & __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_EQImpl<unsigned___int64,unsigned_char>
          (__uint64 *param_1,uchar *param_2,char *param_3)

{
  byte bVar1;
  __uint64 _Var2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  bVar1 = *param_2;
  _Var2 = *param_1;
  if (_Var2 == bVar1) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,_Var2);
  pbVar3 = CheckOpMessageBuilder::ForVar2((CheckOpMessageBuilder *)local_f8);
  MakeCheckOpValueString(pbVar3,bVar1);
  pbVar4 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar4;
}

// Check_EQImpl<unsigned___int64,unsigned_short> @ 14fa22930

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::Check_EQImpl<unsigned __int64,unsigned short>(unsigned
   __int64 const & __ptr64,unsigned short const & __ptr64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::Check_EQImpl<unsigned___int64,unsigned_short>
          (__uint64 *param_1,ushort *param_2,char *param_3)

{
  ushort uVar1;
  __uint64 _Var2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  uVar1 = *param_2;
  _Var2 = *param_1;
  if (_Var2 == uVar1) {
    return (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
  }
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,_Var2);
  this = CheckOpMessageBuilder::ForVar2((CheckOpMessageBuilder *)local_f8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,(ulonglong)uVar1);
  pbVar3 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar3;
}

// CreateInArenaStorage<unsigned_int,unsigned_int&___ptr64> @ 14fa22a10

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<unsigned int,unsigned
   int & __ptr64>(unsigned int * __ptr64,class google::protobuf::Arena * __ptr64,unsigned int &
   __ptr64) */

void __cdecl
google::protobuf::Arena::CreateInArenaStorage<unsigned_int,unsigned_int&___ptr64>
          (uint *param_1,Arena *param_2,uint *param_3)

{
  *param_1 = *param_3;
  return;
}

// CreateInArenaStorage<unsigned_int,unsigned_int_const&___ptr64> @ 14fa22a20

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<unsigned int,unsigned
   int const & __ptr64>(unsigned int * __ptr64,class google::protobuf::Arena * __ptr64,unsigned int
   const & __ptr64) */

void __cdecl
google::protobuf::Arena::CreateInArenaStorage<unsigned_int,unsigned_int_const&___ptr64>
          (uint *param_1,Arena *param_2,uint *param_3)

{
  *param_1 = *param_3;
  return;
}

// CreateInArenaStorage<float,float&___ptr64> @ 14fa22a30

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<float,float &
   __ptr64>(float * __ptr64,class google::protobuf::Arena * __ptr64,float & __ptr64) */

void __cdecl
google::protobuf::Arena::CreateInArenaStorage<float,float&___ptr64>
          (float *param_1,Arena *param_2,float *param_3)

{
  *param_1 = *param_3;
  return;
}

// CreateInArenaStorage<double,double&___ptr64> @ 14fa22a40

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<double,double &
   __ptr64>(double * __ptr64,class google::protobuf::Arena * __ptr64,double & __ptr64) */

void __cdecl
google::protobuf::Arena::CreateInArenaStorage<double,double&___ptr64>
          (double *param_1,Arena *param_2,double *param_3)

{
  *param_1 = *param_3;
  return;
}

// CreateInArenaStorage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64> @ 14fa22a50

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64>(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64,class google::protobuf::Arena * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64) */

void __cdecl
google::protobuf::Arena::
CreateInArenaStorage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_3);
  if ((param_2 != (Arena *)0x0) &&
     (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    internal::ThreadSafeArena::AddCleanup
              (&param_2->impl_,param_1,
               internal::cleanup::
               arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  return;
}

// CreateInArenaStorage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64> @ 14fa22aa0

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64>(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   * __ptr64,class google::protobuf::Arena * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64) */

void __cdecl
google::protobuf::Arena::
CreateInArenaStorage<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,Arena *param_2,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (param_1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)param_3);
  if ((param_2 != (Arena *)0x0) &&
     (param_1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
    internal::ThreadSafeArena::AddCleanup
              (&param_2->impl_,param_1,
               internal::cleanup::
               arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
              );
  }
  return;
}

// CreateInArenaStorage<unsigned___int64,unsigned___int64&___ptr64> @ 14fa22af0

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<unsigned
   __int64,unsigned __int64 & __ptr64>(unsigned __int64 * __ptr64,class google::protobuf::Arena *
   __ptr64,unsigned __int64 & __ptr64) */

void __cdecl
google::protobuf::Arena::CreateInArenaStorage<unsigned___int64,unsigned___int64&___ptr64>
          (__uint64 *param_1,Arena *param_2,__uint64 *param_3)

{
  *param_1 = *param_3;
  return;
}

// CreateInArenaStorage<unsigned___int64,unsigned___int64_const&___ptr64> @ 14fa22b00

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<unsigned
   __int64,unsigned __int64 const & __ptr64>(unsigned __int64 * __ptr64,class
   google::protobuf::Arena * __ptr64,unsigned __int64 const & __ptr64) */

void __cdecl
google::protobuf::Arena::CreateInArenaStorage<unsigned___int64,unsigned___int64_const&___ptr64>
          (__uint64 *param_1,Arena *param_2,__uint64 *param_3)

{
  *param_1 = *param_3;
  return;
}

// CreateInArenaStorage<bool,bool&___ptr64> @ 14fa22b10

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<bool,bool &
   __ptr64>(bool * __ptr64,class google::protobuf::Arena * __ptr64,bool & __ptr64) */

void __cdecl
google::protobuf::Arena::CreateInArenaStorage<bool,bool&___ptr64>
          (bool *param_1,Arena *param_2,bool *param_3)

{
  *param_1 = *param_3;
  return;
}

// CreateInArenaStorage<bool,bool_const&___ptr64> @ 14fa22b20

/* private: static void __cdecl google::protobuf::Arena::CreateInArenaStorage<bool,bool const &
   __ptr64>(bool * __ptr64,class google::protobuf::Arena * __ptr64,bool const & __ptr64) */

void __cdecl
google::protobuf::Arena::CreateInArenaStorage<bool,bool_const&___ptr64>
          (bool *param_1,Arena *param_2,bool *param_3)

{
  *param_1 = *param_3;
  return;
}

// InitializeMapKey<unsigned_int,unsigned_int_const&___ptr64> @ 14fa22b30

/* bool __cdecl google::protobuf::internal::InitializeMapKey<unsigned int,unsigned int const &
   __ptr64>(unsigned int * __ptr64,unsigned int const & __ptr64,class google::protobuf::Arena *
   __ptr64) */

bool __cdecl
google::protobuf::internal::InitializeMapKey<unsigned_int,unsigned_int_const&___ptr64>
          (uint *param_1,uint *param_2,Arena *param_3)

{
  return false;
}

// InitializeMapKey<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64> @ 14fa22b40

/* bool __cdecl google::protobuf::internal::InitializeMapKey<class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> >,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64>(class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64,class google::protobuf::Arena * __ptr64) */

bool __cdecl
google::protobuf::internal::
InitializeMapKey<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_const&___ptr64>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
          Arena *param_3)

{
  return false;
}

// InitializeMapKey<bool,bool_const&___ptr64> @ 14fa22b50

/* bool __cdecl google::protobuf::internal::InitializeMapKey<bool,bool const & __ptr64>(bool *
   __ptr64,bool const & __ptr64,class google::protobuf::Arena * __ptr64) */

bool __cdecl
google::protobuf::internal::InitializeMapKey<bool,bool_const&___ptr64>
          (bool *param_1,bool *param_2,Arena *param_3)

{
  return false;
}

// MakeCheckOpString<unsigned___int64,unsigned_char> @ 14fa22b60

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<unsigned __int64,unsigned
   char>(unsigned __int64,unsigned char,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<unsigned___int64,unsigned_char>
          (__uint64 param_1,uchar param_2,char *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
  pbVar1 = CheckOpMessageBuilder::ForVar2((CheckOpMessageBuilder *)local_f8);
  MakeCheckOpValueString(pbVar1,param_2);
  pbVar2 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar2;
}

// MakeCheckOpString<unsigned___int64,__int64> @ 14fa22c20

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl absl::lts_20240722::log_internal::MakeCheckOpString<unsigned __int64,__int64>(unsigned
   __int64,__int64,char const * __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
absl::lts_20240722::log_internal::MakeCheckOpString<unsigned___int64,__int64>
          (__uint64 param_1,__int64 param_2,char *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  int iStack_fc;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  CheckOpMessageBuilder::CheckOpMessageBuilder((CheckOpMessageBuilder *)local_f8,param_3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
  this = CheckOpMessageBuilder::ForVar2((CheckOpMessageBuilder *)local_f8);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,param_2);
  pbVar1 = CheckOpMessageBuilder::NewString((CheckOpMessageBuilder *)local_f8);
  *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_fc + (longlong)*(int *)(local_f8._0_8_ + 4)) =
       *(int *)(local_f8._0_8_ + 4) + -0x88;
  std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8));
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(&local_70);
  return pbVar1;
}

// Narrow<unsigned_char,unsigned___int64> @ 14fa22ce0

/* unsigned char __cdecl google::protobuf::internal::Narrow<unsigned char,unsigned __int64>(unsigned
   __int64) */

uchar __cdecl google::protobuf::internal::Narrow<unsigned_char,unsigned___int64>(__uint64 param_1)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  basic_string_view<char,std::char_traits<char>_> local_118;
  LogMessageFatal local_108;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  if (param_1 != (param_1 & 0xff)) {
    absl::lts_20240722::log_internal::CheckOpMessageBuilder::CheckOpMessageBuilder
              ((CheckOpMessageBuilder *)local_f8,"value == static_cast<T>(value)");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
    pbVar1 = absl::lts_20240722::log_internal::CheckOpMessageBuilder::ForVar2
                       ((CheckOpMessageBuilder *)local_f8);
    absl::lts_20240722::log_internal::MakeCheckOpValueString(pbVar1,(uchar)param_1);
    pbVar2 = absl::lts_20240722::log_internal::CheckOpMessageBuilder::NewString
                       ((CheckOpMessageBuilder *)local_f8);
    *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(local_f8 + (longlong)*(int *)(local_f8._0_8_ + 4) + -4) =
         *(int *)(local_f8._0_8_ + 4) + -0x88;
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8))
    ;
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (&local_70);
    if (pbVar2 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_118._Mydata = (char *)pbVar2;
      if (0xf < (pbVar2->_Mypair)._Myval2._Myres) {
        local_118._Mydata = (pbVar2->_Mypair)._Myval2._Bx._Ptr;
      }
      local_118._Mysize = (pbVar2->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_108,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\map.cc"
                 ,0xf0,&local_118);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_108);
    }
  }
  return (uchar)param_1;
}

// Narrow<unsigned_short,unsigned___int64> @ 14fa22e00

/* unsigned short __cdecl google::protobuf::internal::Narrow<unsigned short,unsigned
   __int64>(unsigned __int64) */

ushort __cdecl google::protobuf::internal::Narrow<unsigned_short,unsigned___int64>(__uint64 param_1)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  basic_string_view<char,std::char_traits<char>_> local_118;
  LogMessageFatal local_108;
  undefined1 local_f8 [136];
  basic_ios<char,std::char_traits<char>_> local_70;
  
  if (param_1 != (param_1 & 0xffff)) {
    absl::lts_20240722::log_internal::CheckOpMessageBuilder::CheckOpMessageBuilder
              ((CheckOpMessageBuilder *)local_f8,"value == static_cast<T>(value)");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_f8,param_1);
    this = absl::lts_20240722::log_internal::CheckOpMessageBuilder::ForVar2
                     ((CheckOpMessageBuilder *)local_f8);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,param_1 & 0xffff);
    pbVar1 = absl::lts_20240722::log_internal::CheckOpMessageBuilder::NewString
                       ((CheckOpMessageBuilder *)local_f8);
    *(undefined ***)(local_f8 + *(int *)(local_f8._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(local_f8 + (longlong)*(int *)(local_f8._0_8_ + 4) + -4) =
         *(int *)(local_f8._0_8_ + 4) + -0x88;
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_f8 + 8))
    ;
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(local_f8 + 0x10));
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (&local_70);
    if (pbVar1 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_118._Mydata = (char *)pbVar1;
      if (0xf < (pbVar1->_Mypair)._Myval2._Myres) {
        local_118._Mydata = (pbVar1->_Mypair)._Myval2._Bx._Ptr;
      }
      local_118._Mysize = (pbVar1->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_108,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\map.cc"
                 ,0xf0,&local_118);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_108);
    }
  }
  return (ushort)param_1;
}

// FUN_14fa22f20 @ 14fa22f20

void FUN_14fa22f20(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 local_res10 [3];
  longlong local_18;
  undefined8 *puStack_10;
  
  local_18._0_4_ = (undefined4)param_1;
  local_res10[0] = param_2;
  local_18 = param_1;
  switch(*(byte *)(param_1 + 0xf) & 0xf) {
  case 0:
    puStack_10 = local_res10;
    uVar1 = (undefined4)local_18;
    FUN_14fa23e30(uVar1,&local_18);
    return;
  case 1:
    puStack_10 = local_res10;
    uVar1 = (undefined4)local_18;
    FUN_14fa233d0(uVar1,&local_18);
    return;
  case 2:
    puStack_10 = local_res10;
    uVar1 = (undefined4)local_18;
    FUN_14fa23ad0(uVar1,&local_18);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case 5:
    puStack_10 = local_res10;
    uVar1 = (undefined4)local_18;
    FUN_14fa23730(uVar1,&local_18);
    return;
  }
}

// FUN_14fa23020 @ 14fa23020

void FUN_14fa23020(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  switch(*(byte *)(param_1 + 0xf) & 0xf) {
  case 0:
  case 1:
  case 2:
    goto switchD_14fa23048_caseD_0;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case 5:
    uVar1 = *(ulonglong *)(param_2 + 0x20);
    if (0xf < uVar1) {
      pvVar2 = *(void **)(param_2 + 8);
      uVar4 = uVar1 + 1;
      pvVar3 = pvVar2;
      if (0xfff < uVar4) {
        pvVar3 = *(void **)((longlong)pvVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,uVar4);
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0xf;
    *(undefined1 *)(param_2 + 8) = 0;
switchD_14fa23048_caseD_0:
    return;
  }
}

// FUN_14fa230d0 @ 14fa230d0

void FUN_14fa230d0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  switch(*(byte *)(param_1 + 0xf) & 0xf) {
  case 0:
    local_18 = *param_2;
    local_10 = param_2[1];
    FUN_14fa23e30(local_18,&local_18);
    return;
  case 1:
    local_18 = *param_2;
    local_10 = param_2[1];
    FUN_14fa233d0(local_18,&local_18);
    return;
  case 2:
    local_18 = *param_2;
    local_10 = param_2[1];
    FUN_14fa23ad0(local_18,&local_18);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case 5:
    local_18 = *param_2;
    local_10 = param_2[1];
    FUN_14fa23730(local_18,&local_18);
    return;
  }
}

// FUN_14fa231b0 @ 14fa231b0

void FUN_14fa231b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong64 uVar5;
  
  switch(*(byte *)(param_1 + 0xf) & 0xf) {
  case 0:
  case 1:
  case 2:
    goto switchD_14fa231d4_caseD_0;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case 5:
    lVar1 = **(longlong **)(param_2 + 0x10);
    uVar2 = *(ulonglong *)(lVar1 + 0x20);
    if (0xf < uVar2) {
      pvVar3 = *(void **)(lVar1 + 8);
      uVar5 = uVar2 + 1;
      pvVar4 = pvVar3;
      if (0xfff < uVar5) {
        pvVar4 = *(void **)((longlong)pvVar3 + -8);
        uVar5 = uVar2 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar4,uVar5);
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0xf;
    *(undefined1 *)(lVar1 + 8) = 0;
switchD_14fa231d4_caseD_0:
    return;
  }
}

// FUN_14fa23270 @ 14fa23270

void FUN_14fa23270(longlong param_1,undefined8 param_2)

{
  switch(*(byte *)(param_1 + 0xf) & 0xf) {
  case 0:
    FUN_14fa21720(param_2,0);
    return;
  case 1:
    FUN_14fa1fcd0(param_2,0);
    return;
  case 2:
    FUN_14fa21240(param_2,0);
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  case 5:
    FUN_14fa20890(param_2,0);
    return;
  }
}

// FUN_14fa23300 @ 14fa23300

void FUN_14fa23300(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  switch(*(byte *)(param_1 + 0xf) >> 4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_14fa23326_caseD_0;
  case 5:
    plVar5 = (longlong *)((ulonglong)*(byte *)(param_1 + 0xe) + param_2);
    uVar1 = plVar5[3];
    if (0xf < uVar1) {
      pvVar2 = (void *)*plVar5;
      uVar4 = uVar1 + 1;
      pvVar3 = pvVar2;
      if (0xfff < uVar4) {
        pvVar3 = *(void **)((longlong)pvVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,uVar4);
    }
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    *(undefined1 *)plVar5 = 0;
switchD_14fa23326_caseD_0:
    return;
  case 6:
    google::protobuf::MessageLite::DestroyInstance
              ((MessageLite *)((ulonglong)*(byte *)(param_1 + 0xe) + param_2));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
}

// FUN_14fa233d0 @ 14fa233d0

void FUN_14fa233d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  
  switch(*(byte *)(param_1 + 0xf) >> 4) {
  case 0:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 1:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 2:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 3:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 4:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 5:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
       (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0)
       ) {
      puVar2 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             ((ulonglong)*(byte *)(lVar1 + 0xe) + (longlong)plVar6));
          *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)0x0);
        uVar7 = (int)uVar5 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar7) break;
        while( true ) {
          uVar5 = (ulonglong)uVar7;
          plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          if (plVar6 != (longlong *)0x0) break;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar1 + 4) <= uVar7) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 6:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
       (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0)
       ) {
      puVar2 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          plVar8 = (longlong *)((ulonglong)*(byte *)(lVar1 + 0xe) + (longlong)plVar6);
          lVar4 = (**(code **)(*plVar8 + 0x18))(plVar8);
          if (*(char *)(lVar4 + 0x3c) == '\0') {
            uVar7 = *(uint *)(lVar4 + 0x28);
            lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x18))(plVar8);
            lVar4 = lVar4 - (ulonglong)uVar7;
          }
          else {
            lVar4 = 0;
          }
          *(longlong *)*puVar2 = *(longlong *)*puVar2 + lVar4;
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)0x0);
        uVar7 = (int)uVar5 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar7) break;
        while( true ) {
          uVar5 = (ulonglong)uVar7;
          plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          if (plVar6 != (longlong *)0x0) break;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar1 + 4) <= uVar7) {
            return;
          }
        }
      }
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
  return;
}

// FUN_14fa23730 @ 14fa23730

void FUN_14fa23730(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  __uint64 _Var5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  
  switch(*(byte *)(param_1 + 0xf) >> 4) {
  case 0:
    lVar2 = *param_2;
    uVar7 = (ulonglong)*(uint *)(lVar2 + 8);
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0)
       ) {
      puVar3 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (plVar8 + 1));
          *(longlong *)*puVar3 = *(longlong *)*puVar3 + _Var5;
          plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)0x0);
        uVar9 = (int)uVar7 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar9) break;
        while( true ) {
          uVar7 = (ulonglong)uVar9;
          plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
          if (plVar8 != (longlong *)0x0) break;
          uVar9 = uVar9 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar9) {
            return;
          }
        }
      }
    }
    break;
  case 1:
    lVar2 = *param_2;
    uVar7 = (ulonglong)*(uint *)(lVar2 + 8);
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0)
       ) {
      puVar3 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (plVar8 + 1));
          *(longlong *)*puVar3 = *(longlong *)*puVar3 + _Var5;
          plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)0x0);
        uVar9 = (int)uVar7 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar9) break;
        while( true ) {
          uVar7 = (ulonglong)uVar9;
          plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
          if (plVar8 != (longlong *)0x0) break;
          uVar9 = uVar9 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar9) {
            return;
          }
        }
      }
    }
    break;
  case 2:
    lVar2 = *param_2;
    uVar7 = (ulonglong)*(uint *)(lVar2 + 8);
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0)
       ) {
      puVar3 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (plVar8 + 1));
          *(longlong *)*puVar3 = *(longlong *)*puVar3 + _Var5;
          plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)0x0);
        uVar9 = (int)uVar7 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar9) break;
        while( true ) {
          uVar7 = (ulonglong)uVar9;
          plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
          if (plVar8 != (longlong *)0x0) break;
          uVar9 = uVar9 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar9) {
            return;
          }
        }
      }
    }
    break;
  case 3:
    lVar2 = *param_2;
    uVar7 = (ulonglong)*(uint *)(lVar2 + 8);
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0)
       ) {
      puVar3 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (plVar8 + 1));
          *(longlong *)*puVar3 = *(longlong *)*puVar3 + _Var5;
          plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)0x0);
        uVar9 = (int)uVar7 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar9) break;
        while( true ) {
          uVar7 = (ulonglong)uVar9;
          plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
          if (plVar8 != (longlong *)0x0) break;
          uVar9 = uVar9 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar9) {
            return;
          }
        }
      }
    }
    break;
  case 4:
    lVar2 = *param_2;
    uVar7 = (ulonglong)*(uint *)(lVar2 + 8);
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0)
       ) {
      puVar3 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (plVar8 + 1));
          *(longlong *)*puVar3 = *(longlong *)*puVar3 + _Var5;
          plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)0x0);
        uVar9 = (int)uVar7 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar9) break;
        while( true ) {
          uVar7 = (ulonglong)uVar9;
          plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
          if (plVar8 != (longlong *)0x0) break;
          uVar9 = uVar9 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar9) {
            return;
          }
        }
      }
    }
    break;
  case 5:
    lVar2 = *param_2;
    uVar7 = (ulonglong)*(uint *)(lVar2 + 8);
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0)
       ) {
      puVar3 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          bVar1 = *(byte *)(lVar2 + 0xe);
          _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (plVar8 + 1));
          plVar4 = (longlong *)*puVar3;
          *plVar4 = *plVar4 + _Var5;
          _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             ((ulonglong)bVar1 + (longlong)plVar8));
          plVar4 = (longlong *)*puVar3;
          *plVar4 = *plVar4 + _Var5;
          plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)0x0);
        uVar9 = (int)uVar7 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar9) break;
        while( true ) {
          uVar7 = (ulonglong)uVar9;
          plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
          if (plVar8 != (longlong *)0x0) break;
          uVar9 = uVar9 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar9) {
            return;
          }
        }
      }
    }
    break;
  case 6:
    lVar2 = *param_2;
    uVar7 = (ulonglong)*(uint *)(lVar2 + 8);
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8), plVar8 != (longlong *)0x0)
       ) {
      puVar3 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          plVar10 = (longlong *)((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)plVar8);
          _Var5 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             (plVar8 + 1));
          plVar4 = (longlong *)*puVar3;
          *plVar4 = *plVar4 + _Var5;
          lVar6 = (**(code **)(*plVar10 + 0x18))(plVar10);
          if (*(char *)(lVar6 + 0x3c) == '\0') {
            uVar9 = *(uint *)(lVar6 + 0x28);
            lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x40) + 0x18))(plVar10);
            lVar6 = lVar6 - (ulonglong)uVar9;
          }
          else {
            lVar6 = 0;
          }
          plVar4 = (longlong *)*puVar3;
          *plVar4 = *plVar4 + lVar6;
          plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)0x0);
        uVar9 = (int)uVar7 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar9) break;
        while( true ) {
          uVar7 = (ulonglong)uVar9;
          plVar8 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar7 * 8);
          if (plVar8 != (longlong *)0x0) break;
          uVar9 = uVar9 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar9) {
            return;
          }
        }
      }
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
  return;
}

// FUN_14fa23ad0 @ 14fa23ad0

void FUN_14fa23ad0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  
  switch(*(byte *)(param_1 + 0xf) >> 4) {
  case 0:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 1:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 2:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 3:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 4:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 5:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
       (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0)
       ) {
      puVar2 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             ((ulonglong)*(byte *)(lVar1 + 0xe) + (longlong)plVar6));
          *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)0x0);
        uVar7 = (int)uVar5 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar7) break;
        while( true ) {
          uVar5 = (ulonglong)uVar7;
          plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          if (plVar6 != (longlong *)0x0) break;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar1 + 4) <= uVar7) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 6:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
       (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0)
       ) {
      puVar2 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          plVar8 = (longlong *)((ulonglong)*(byte *)(lVar1 + 0xe) + (longlong)plVar6);
          lVar4 = (**(code **)(*plVar8 + 0x18))(plVar8);
          if (*(char *)(lVar4 + 0x3c) == '\0') {
            uVar7 = *(uint *)(lVar4 + 0x28);
            lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x18))(plVar8);
            lVar4 = lVar4 - (ulonglong)uVar7;
          }
          else {
            lVar4 = 0;
          }
          *(longlong *)*puVar2 = *(longlong *)*puVar2 + lVar4;
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)0x0);
        uVar7 = (int)uVar5 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar7) break;
        while( true ) {
          uVar5 = (ulonglong)uVar7;
          plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          if (plVar6 != (longlong *)0x0) break;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar1 + 4) <= uVar7) {
            return;
          }
        }
      }
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
  return;
}

// FUN_14fa23e30 @ 14fa23e30

void FUN_14fa23e30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  __uint64 _Var3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  
  switch(*(byte *)(param_1 + 0xf) >> 4) {
  case 0:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 1:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 2:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 3:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 4:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if (*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) {
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
      if (plVar6 != (longlong *)0x0) {
        do {
          do {
            plVar6 = (longlong *)*plVar6;
          } while (plVar6 != (longlong *)0x0);
          uVar7 = (uint)uVar5;
          do {
            uVar7 = uVar7 + 1;
            if (*(uint *)(lVar1 + 4) <= uVar7) {
              return;
            }
            uVar5 = (ulonglong)uVar7;
            plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          } while (plVar6 == (longlong *)0x0);
        } while( true );
      }
    }
    break;
  case 5:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
       (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0)
       ) {
      puVar2 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          _Var3 = google::protobuf::internal::StringSpaceUsedExcludingSelfLong
                            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             ((ulonglong)*(byte *)(lVar1 + 0xe) + (longlong)plVar6));
          *(longlong *)*puVar2 = *(longlong *)*puVar2 + _Var3;
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)0x0);
        uVar7 = (int)uVar5 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar7) break;
        while( true ) {
          uVar5 = (ulonglong)uVar7;
          plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          if (plVar6 != (longlong *)0x0) break;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar1 + 4) <= uVar7) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 6:
    lVar1 = *param_2;
    uVar5 = (ulonglong)*(uint *)(lVar1 + 8);
    if ((*(uint *)(lVar1 + 8) != *(uint *)(lVar1 + 4)) &&
       (plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8), plVar6 != (longlong *)0x0)
       ) {
      puVar2 = (undefined8 *)param_2[1];
      while( true ) {
        do {
          plVar8 = (longlong *)((ulonglong)*(byte *)(lVar1 + 0xe) + (longlong)plVar6);
          lVar4 = (**(code **)(*plVar8 + 0x18))(plVar8);
          if (*(char *)(lVar4 + 0x3c) == '\0') {
            uVar7 = *(uint *)(lVar4 + 0x28);
            lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x18))(plVar8);
            lVar4 = lVar4 - (ulonglong)uVar7;
          }
          else {
            lVar4 = 0;
          }
          *(longlong *)*puVar2 = *(longlong *)*puVar2 + lVar4;
          plVar6 = (longlong *)*plVar6;
        } while (plVar6 != (longlong *)0x0);
        uVar7 = (int)uVar5 + 1;
        if (*(uint *)(lVar1 + 4) <= uVar7) break;
        while( true ) {
          uVar5 = (ulonglong)uVar7;
          plVar6 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
          if (plVar6 != (longlong *)0x0) break;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar1 + 4) <= uVar7) {
            return;
          }
        }
      }
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
  return;
}

// FUN_14fa24190 @ 14fa24190

void FUN_14fa24190(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  switch(*(byte *)(param_1 + 0xf) >> 4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    goto switchD_14fa241b6_caseD_0;
  case 5:
    plVar5 = (longlong *)
             ((ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + 0xe) +
             **(longlong **)(param_2 + 0x10));
    uVar1 = plVar5[3];
    if (0xf < uVar1) {
      pvVar2 = (void *)*plVar5;
      uVar4 = uVar1 + 1;
      pvVar3 = pvVar2;
      if (0xfff < uVar4) {
        pvVar3 = *(void **)((longlong)pvVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      operator_delete(pvVar3,uVar4);
    }
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    *(undefined1 *)plVar5 = 0;
switchD_14fa241b6_caseD_0:
    return;
  case 6:
    google::protobuf::MessageLite::DestroyInstance
              ((MessageLite *)
               ((ulonglong)*(byte *)(*(longlong *)(param_2 + 8) + 0xe) +
               **(longlong **)(param_2 + 0x10)));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
}

// FUN_14fa24270 @ 14fa24270

void FUN_14fa24270(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ThreadSafeArena *this;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  MessageLite *this_00;
  undefined1 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  
  switch(*(byte *)(param_1 + 0xf) >> 4) {
  case 0:
    lVar2 = param_2[1];
    uVar8 = (ulonglong)*(uint *)(lVar2 + 8);
    puVar11 = *(undefined8 **)*param_2;
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8), plVar9 != (longlong *)0x0)
       ) {
      lVar3 = param_2[2];
      while( true ) {
        do {
          puVar5 = (undefined1 *)((ulonglong)*(byte *)(lVar3 + 0xe) + (longlong)puVar11);
          puVar11 = (undefined8 *)*puVar11;
          *puVar5 = *(undefined1 *)((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)plVar9);
          plVar9 = (longlong *)*plVar9;
        } while (plVar9 != (longlong *)0x0);
        uVar10 = (int)uVar8 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar10) break;
        while( true ) {
          uVar8 = (ulonglong)uVar10;
          plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8);
          if (plVar9 != (longlong *)0x0) break;
          uVar10 = uVar10 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar10) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 1:
    lVar2 = param_2[1];
    uVar8 = (ulonglong)*(uint *)(lVar2 + 8);
    puVar11 = *(undefined8 **)*param_2;
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8), plVar9 != (longlong *)0x0)
       ) {
      lVar3 = param_2[2];
      while( true ) {
        do {
          puVar6 = (undefined4 *)((ulonglong)*(byte *)(lVar3 + 0xe) + (longlong)puVar11);
          puVar11 = (undefined8 *)*puVar11;
          *puVar6 = *(undefined4 *)((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)plVar9);
          plVar9 = (longlong *)*plVar9;
        } while (plVar9 != (longlong *)0x0);
        uVar10 = (int)uVar8 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar10) break;
        while( true ) {
          uVar8 = (ulonglong)uVar10;
          plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8);
          if (plVar9 != (longlong *)0x0) break;
          uVar10 = uVar10 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar10) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 2:
    lVar2 = param_2[1];
    uVar8 = (ulonglong)*(uint *)(lVar2 + 8);
    puVar11 = *(undefined8 **)*param_2;
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8), plVar9 != (longlong *)0x0)
       ) {
      lVar3 = param_2[2];
      while( true ) {
        do {
          puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar3 + 0xe) + (longlong)puVar11);
          puVar11 = (undefined8 *)*puVar11;
          *puVar4 = *(undefined8 *)((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)plVar9);
          plVar9 = (longlong *)*plVar9;
        } while (plVar9 != (longlong *)0x0);
        uVar10 = (int)uVar8 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar10) break;
        while( true ) {
          uVar8 = (ulonglong)uVar10;
          plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8);
          if (plVar9 != (longlong *)0x0) break;
          uVar10 = uVar10 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar10) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 3:
    lVar2 = param_2[1];
    uVar8 = (ulonglong)*(uint *)(lVar2 + 8);
    puVar11 = *(undefined8 **)*param_2;
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8), plVar9 != (longlong *)0x0)
       ) {
      lVar3 = param_2[2];
      while( true ) {
        do {
          puVar6 = (undefined4 *)((ulonglong)*(byte *)(lVar3 + 0xe) + (longlong)puVar11);
          puVar11 = (undefined8 *)*puVar11;
          *puVar6 = *(undefined4 *)((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)plVar9);
          plVar9 = (longlong *)*plVar9;
        } while (plVar9 != (longlong *)0x0);
        uVar10 = (int)uVar8 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar10) break;
        while( true ) {
          uVar8 = (ulonglong)uVar10;
          plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8);
          if (plVar9 != (longlong *)0x0) break;
          uVar10 = uVar10 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar10) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 4:
    lVar2 = param_2[1];
    uVar8 = (ulonglong)*(uint *)(lVar2 + 8);
    puVar11 = *(undefined8 **)*param_2;
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8), plVar9 != (longlong *)0x0)
       ) {
      lVar3 = param_2[2];
      while( true ) {
        do {
          puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar3 + 0xe) + (longlong)puVar11);
          puVar11 = (undefined8 *)*puVar11;
          *puVar4 = *(undefined8 *)((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)plVar9);
          plVar9 = (longlong *)*plVar9;
        } while (plVar9 != (longlong *)0x0);
        uVar10 = (int)uVar8 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar10) break;
        while( true ) {
          uVar8 = (ulonglong)uVar10;
          plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8);
          if (plVar9 != (longlong *)0x0) break;
          uVar10 = uVar10 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar10) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 5:
    lVar2 = param_2[1];
    uVar8 = (ulonglong)*(uint *)(lVar2 + 8);
    puVar11 = *(undefined8 **)*param_2;
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8), plVar9 != (longlong *)0x0)
       ) {
      lVar3 = param_2[2];
      while( true ) {
        do {
          this_01 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                    ((ulonglong)*(byte *)(lVar3 + 0xe) + (longlong)puVar11);
          puVar11 = (undefined8 *)*puVar11;
          this = *(ThreadSafeArena **)(lVar3 + 0x18);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    (this_01,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             ((ulonglong)*(byte *)(lVar2 + 0xe) + (longlong)plVar9));
          if ((this != (ThreadSafeArena *)0x0) &&
             (this_01 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0)) {
            google::protobuf::internal::ThreadSafeArena::AddCleanup
                      (this,this_01,
                       google::protobuf::internal::cleanup::
                       arena_destruct_object<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                      );
          }
          plVar9 = (longlong *)*plVar9;
        } while (plVar9 != (longlong *)0x0);
        uVar10 = (int)uVar8 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar10) break;
        while( true ) {
          uVar8 = (ulonglong)uVar10;
          plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8);
          if (plVar9 != (longlong *)0x0) break;
          uVar10 = uVar10 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar10) {
            return;
          }
        }
      }
      return;
    }
    break;
  case 6:
    lVar2 = param_2[1];
    puVar11 = *(undefined8 **)*param_2;
    if (*(uint *)(lVar2 + 8) == *(uint *)(lVar2 + 4)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)*(uint *)(lVar2 + 8) * 8);
    }
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)((ulonglong)*(byte *)(lVar2 + 0xe) + lVar3) + 0x18))();
    uVar8 = (ulonglong)*(uint *)(lVar2 + 8);
    if ((*(uint *)(lVar2 + 8) != *(uint *)(lVar2 + 4)) &&
       (plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8), plVar9 != (longlong *)0x0)
       ) {
      lVar3 = param_2[2];
      while( true ) {
        do {
          bVar1 = *(byte *)(lVar2 + 0xe);
          lVar7 = (ulonglong)*(byte *)(lVar3 + 0xe) + (longlong)puVar11;
          puVar11 = (undefined8 *)*puVar11;
          this_00 = (MessageLite *)(*(code *)puVar4[6])(*puVar4,lVar7,*(undefined8 *)(lVar3 + 0x18))
          ;
          google::protobuf::MessageLite::CheckTypeAndMergeFrom
                    (this_00,(MessageLite *)((ulonglong)bVar1 + (longlong)plVar9));
          plVar9 = (longlong *)*plVar9;
        } while (plVar9 != (longlong *)0x0);
        uVar10 = (int)uVar8 + 1;
        if (*(uint *)(lVar2 + 4) <= uVar10) break;
        while( true ) {
          uVar8 = (ulonglong)uVar10;
          plVar9 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + uVar8 * 8);
          if (plVar9 != (longlong *)0x0) break;
          uVar10 = uVar10 + 1;
          if (*(uint *)(lVar2 + 4) <= uVar10) {
            return;
          }
        }
      }
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
  return;
}

// _Adl_verify_range<google::protobuf::internal::NodeBase*___ptr64*___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64> @ 14fa24720

/* void __cdecl std::_Adl_verify_range<struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64>(struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64,struct
   google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

void __cdecl
std::
_Adl_verify_range<google::protobuf::internal::NodeBase*___ptr64*___ptr64,google::protobuf::internal::NodeBase*___ptr64*___ptr64>
          (NodeBase ***param_1,NodeBase ***param_2)

{
  return;
}

// _Fill_zero_memset<google::protobuf::internal::NodeBase*___ptr64*___ptr64> @ 14fa24730

/* void __cdecl std::_Fill_zero_memset<struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64>(struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64,unsigned __int64) */

void __cdecl
std::_Fill_zero_memset<google::protobuf::internal::NodeBase*___ptr64*___ptr64>
          (NodeBase **param_1,__uint64 param_2)

{
  memset(param_1,0,param_2 * 8);
  return;
}

// _Get_unwrapped<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64> @ 14fa24750

/* UNKNOWN __cdecl std::_Get_unwrapped<struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64 const & __ptr64>(struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const &
   __ptr64) */

NodeBase ** __cdecl
std::_Get_unwrapped<google::protobuf::internal::NodeBase*___ptr64*___ptr64_const&___ptr64>
          (NodeBase ***param_1)

{
  return *param_1;
}

// _To_address<google::protobuf::internal::NodeBase*___ptr64*___ptr64> @ 14fa24760

/* UNKNOWN __cdecl std::_To_address<struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64>(struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const & __ptr64) */

NodeBase ** __cdecl
std::_To_address<google::protobuf::internal::NodeBase*___ptr64*___ptr64>(NodeBase ***param_1)

{
  return *param_1;
}

// fill<google::protobuf::internal::NodeBase*___ptr64*___ptr64,std::nullptr_t> @ 14fa24770

/* void __cdecl std::fill<struct google::protobuf::internal::NodeBase * __ptr64 *
   __ptr64,std::nullptr_t>(struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64
   const,struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 const,std::nullptr_t const
   & __ptr64) */

void __cdecl
std::fill<google::protobuf::internal::NodeBase*___ptr64*___ptr64,std::nullptr_t>
          (NodeBase **param_1,NodeBase **param_2,std__nullptr_t *param_3)

{
  memset(param_1,0,(longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8);
  return;
}

// forward<unsigned_int&___ptr64> @ 14fa24790

/* unsigned int & __ptr64 __cdecl std::forward<unsigned int & __ptr64>(unsigned int & __ptr64) */

uint * __cdecl std::forward<unsigned_int&___ptr64>(uint *param_1)

{
  return param_1;
}

// forward<float&___ptr64> @ 14fa247a0

/* float & __ptr64 __cdecl std::forward<float & __ptr64>(float & __ptr64) */

float * __cdecl std::forward<float&___ptr64>(float *param_1)

{
  return param_1;
}

// forward<double&___ptr64> @ 14fa247b0

/* double & __ptr64 __cdecl std::forward<double & __ptr64>(double & __ptr64) */

double * __cdecl std::forward<double&___ptr64>(double *param_1)

{
  return param_1;
}

// forward<bool&___ptr64> @ 14fa247c0

/* bool & __ptr64 __cdecl std::forward<bool & __ptr64>(bool & __ptr64) */

bool * __cdecl std::forward<bool&___ptr64>(bool *param_1)

{
  return param_1;
}

// to_address<google::protobuf::internal::NodeBase*___ptr64> @ 14fa24d40

/* struct google::protobuf::internal::NodeBase * __ptr64 * __ptr64 __cdecl std::to_address<struct
   google::protobuf::internal::NodeBase * __ptr64>(struct google::protobuf::internal::NodeBase *
   __ptr64 * __ptr64 const) */

NodeBase ** __cdecl
std::to_address<google::protobuf::internal::NodeBase*___ptr64>(NodeBase **param_1)

{
  return param_1;
}

// UntypedMapBase @ 14fa250d0

/* public: __cdecl google::protobuf::internal::UntypedMapBase::UntypedMapBase(class
   google::protobuf::Arena * __ptr64,struct google::protobuf::internal::UntypedMapBase::TypeInfo)
   __ptr64 */

UntypedMapBase * __thiscall
google::protobuf::internal::UntypedMapBase::UntypedMapBase
          (UntypedMapBase *this,Arena *param_1,TypeInfo param_2)

{
  this->num_elements_ = 0;
  this->table_ = kGlobalEmptyTable;
  this->num_buckets_ = 1;
  this->index_of_first_non_null_ = 1;
  this->type_info_ = param_2;
  this->arena_ = param_1;
  return this;
}

// FUN_14fa251b0 @ 14fa251b0

void FUN_14fa251b0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = param_2[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*param_2;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return;
}

// FUN_14fa25220 @ 14fa25220

void FUN_14fa25220(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x20);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(param_2 + 8);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xf;
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}

// FUN_14fa25290 @ 14fa25290

void FUN_14fa25290(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  uVar1 = *(ulonglong *)(param_2 + 0x20);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(param_2 + 8);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) goto LAB_14fa25349;
    }
    operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xf;
  *(undefined1 *)(param_2 + 8) = 0;
  plVar5 = (longlong *)((ulonglong)*(byte *)(*param_1 + 0xe) + param_2);
  uVar1 = plVar5[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*plVar5;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
LAB_14fa25349:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  plVar5[2] = 0;
  plVar5[3] = 0xf;
  *(undefined1 *)plVar5 = 0;
  return;
}

// FUN_14fa25360 @ 14fa25360

void FUN_14fa25360(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  
  uVar1 = *(ulonglong *)(param_2 + 0x20);
  if (0xf < uVar1) {
    pvVar2 = *(void **)(param_2 + 8);
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xf;
  *(undefined1 *)(param_2 + 8) = 0;
  google::protobuf::MessageLite::DestroyInstance
            ((MessageLite *)((ulonglong)*(byte *)(*param_1 + 0xe) + param_2));
  return;
}

// FUN_14fa253f0 @ 14fa253f0

longlong FUN_14fa253f0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (*(char *)(lVar2 + 0x3c) != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(lVar2 + 0x28);
  lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x18))(param_2);
  return lVar2 - (ulonglong)uVar1;
}

// FUN_14fa25440 @ 14fa25440

longlong FUN_14fa25440(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (*(char *)(lVar2 + 0x3c) != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(lVar2 + 0x28);
  lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x18))(param_2);
  return lVar2 - (ulonglong)uVar1;
}

// FUN_14fa25490 @ 14fa25490

longlong FUN_14fa25490(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (*(char *)(lVar2 + 0x3c) != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(lVar2 + 0x28);
  lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x18))(param_2);
  return lVar2 - (ulonglong)uVar1;
}

// FUN_14fa254e0 @ 14fa254e0

longlong FUN_14fa254e0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (*(char *)(lVar2 + 0x3c) != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(lVar2 + 0x28);
  lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x40) + 0x18))(param_2);
  return lVar2 - (ulonglong)uVar1;
}

// FUN_14fa25700 @ 14fa25700

void FUN_14fa25700(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong64 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)((ulonglong)*(byte *)(*param_1 + 0xe) + param_2);
  uVar1 = plVar5[3];
  if (0xf < uVar1) {
    pvVar2 = (void *)*plVar5;
    uVar4 = uVar1 + 1;
    pvVar3 = pvVar2;
    if (0xfff < uVar4) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    operator_delete(pvVar3,uVar4);
  }
  plVar5[2] = 0;
  plVar5[3] = 0xf;
  *(undefined1 *)plVar5 = 0;
  return;
}

// FUN_14fa25790 @ 14fa25790

ulonglong *
FUN_14fa25790(ulonglong *param_1,ulonglong param_2,undefined1 param_3,longlong *param_4,
             ulonglong *param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  switch(param_3) {
  case 0:
    *param_1 = param_2;
    uVar3 = *param_5;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    *param_5 = uVar3;
    param_1[1] = param_2 + 1;
    return param_1;
  case 1:
  case 3:
    lVar2 = 4;
    uVar3 = *param_5;
    if (uVar3 < 4) {
      uVar3 = 4;
    }
    *param_5 = uVar3;
    uVar3 = param_2 + 3 & 0xfffffffffffffffc;
    break;
  case 2:
  case 4:
    lVar2 = 8;
    uVar3 = *param_5;
    if (uVar3 < 8) {
      uVar3 = 8;
    }
    *param_5 = uVar3;
    uVar3 = param_2 + 7 & 0xfffffffffffffff8;
    break;
  case 5:
    uVar3 = *param_5;
    if (uVar3 < 8) {
      uVar3 = 8;
    }
    *param_5 = uVar3;
    uVar3 = param_2 + 7 & 0xfffffffffffffff8;
    *param_1 = uVar3;
    param_1[1] = uVar3 + 0x20;
    return param_1;
  case 6:
    lVar2 = (**(code **)(*param_4 + 0x18))(param_4);
    uVar4 = (ulonglong)*(byte *)(lVar2 + 0x2d);
    uVar3 = *param_5;
    if (*param_5 < uVar4) {
      uVar3 = uVar4;
    }
    *param_5 = uVar3;
    uVar3 = (param_2 - 1) + uVar4;
    uVar1 = *(uint *)(lVar2 + 0x28);
    uVar3 = uVar3 - uVar3 % uVar4;
    *param_1 = uVar3;
    param_1[1] = uVar1 + uVar3;
    return param_1;
  default:
                    /* WARNING: Subroutine does not return */
    google::protobuf::internal::Unreachable();
  }
  *param_1 = uVar3;
  param_1[1] = uVar3 + lVar2;
  return param_1;
}

// ClearTableImpl @ 14fa25930

/* protected: void __cdecl google::protobuf::internal::UntypedMapBase::ClearTableImpl(bool) __ptr64
    */

void __thiscall
google::protobuf::internal::UntypedMapBase::ClearTableImpl(UntypedMapBase *this,bool param_1)

{
  NodeBase **_Dst;
  byte bVar1;
  ulong64 uVar2;
  UntypedMapBase *local_res8;
  UntypedMapBase *local_18;
  UntypedMapBase **local_10;
  
  if (this->arena_ == (Arena *)0x0) {
    local_10 = &local_res8;
    bVar1 = (this->type_info_).value_type;
    local_res8 = this;
    local_18 = this;
    if (bVar1 < 5) {
      FUN_14fa21d20(&local_18,(ulonglong)this & 0xff);
    }
    else if (bVar1 == 5) {
      FUN_14fa21f80(&local_18,this);
    }
    else {
      if (bVar1 != 6) {
                    /* WARNING: Subroutine does not return */
        Unreachable();
      }
      FUN_14fa22260(&local_18,this);
    }
  }
  _Dst = this->table_;
  if (param_1) {
    memset(_Dst,0,(ulonglong)this->num_buckets_ << 3);
    this->index_of_first_non_null_ = this->num_buckets_;
    this->num_elements_ = 0;
    return;
  }
  uVar2 = (ulonglong)this->num_buckets_ << 3;
  if (this->arena_ != (Arena *)0x0) {
    Arena::ReturnArrayMemory(this->arena_,_Dst,uVar2);
    return;
  }
  ::operator_delete(_Dst,uVar2);
  return;
}

// DeallocNode @ 14fa25a10

/* protected: void __cdecl google::protobuf::internal::UntypedMapBase::DeallocNode(struct
   google::protobuf::internal::NodeBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::UntypedMapBase::DeallocNode(UntypedMapBase *this,NodeBase *param_1)

{
  ::operator_delete(param_1,(ulonglong)(this->type_info_).node_size);
  return;
}

// DeallocNode @ 14fa25a30

/* protected: void __cdecl google::protobuf::internal::UntypedMapBase::DeallocNode(struct
   google::protobuf::internal::NodeBase * __ptr64,unsigned __int64) __ptr64 */

void __thiscall
google::protobuf::internal::UntypedMapBase::DeallocNode
          (UntypedMapBase *this,NodeBase *param_1,__uint64 param_2)

{
  ::operator_delete(param_1,param_2);
  return;
}

// DeleteNode @ 14fa25a50

/* protected: void __cdecl google::protobuf::internal::UntypedMapBase::DeleteNode(struct
   google::protobuf::internal::NodeBase * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::UntypedMapBase::DeleteNode(UntypedMapBase *this,NodeBase *param_1)

{
  NodeBase *pNVar1;
  NodeBase *pNVar2;
  ulonglong uVar3;
  void *pvVar4;
  NodeBase *pNVar5;
  void *pvVar6;
  NodeBase *pNVar7;
  ulong64 uVar8;
  longlong *plVar9;
  
  switch((this->type_info_).key_type) {
  case 0:
  case 1:
  case 2:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    Unreachable();
  case 5:
    pNVar1 = param_1[4].next;
    if ((NodeBase *)&DAT_0000000f < pNVar1) {
      pNVar2 = param_1[1].next;
      pNVar7 = (NodeBase *)((longlong)&pNVar1->next + 1);
      pNVar5 = pNVar2;
      if ((NodeBase *)0xfff < pNVar7) {
        pNVar5 = pNVar2[-1].next;
        pNVar7 = pNVar1 + 5;
        if (0x1f < (ulonglong)((longlong)pNVar2 + (-8 - (longlong)pNVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pNVar5,(ulong64)pNVar7);
    }
    param_1[3].next = (NodeBase *)0x0;
    param_1[4].next = (NodeBase *)&DAT_0000000f;
    *(undefined1 *)&param_1[1].next = 0;
  }
  switch((this->type_info_).value_type) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    break;
  case 5:
    plVar9 = (longlong *)((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset);
    uVar3 = plVar9[3];
    if (0xf < uVar3) {
      pvVar4 = (void *)*plVar9;
      uVar8 = uVar3 + 1;
      pvVar6 = pvVar4;
      if (0xfff < uVar8) {
        pvVar6 = *(void **)((longlong)pvVar4 + -8);
        uVar8 = uVar3 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      ::operator_delete(pvVar6,uVar8);
    }
    plVar9[2] = 0;
    plVar9[3] = 0xf;
    *(undefined1 *)plVar9 = 0;
    break;
  case 6:
    MessageLite::DestroyInstance
              ((MessageLite *)
               ((longlong)&param_1->next + (ulonglong)(this->type_info_).value_offset));
    break;
  default:
                    /* WARNING: Subroutine does not return */
    Unreachable();
  }
  ::operator_delete(param_1,(ulonglong)(this->type_info_).node_size);
  return;
}

// GetReferenceableValue @ 14fa25bd0

/* unsigned char __cdecl absl::lts_20240722::log_internal::GetReferenceableValue(unsigned char) */

uchar __cdecl absl::lts_20240722::log_internal::GetReferenceableValue(uchar param_1)

{
  return param_1;
}

// GetReferenceableValue @ 14fa25be0

/* unsigned short __cdecl absl::lts_20240722::log_internal::GetReferenceableValue(unsigned short) */

ushort __cdecl absl::lts_20240722::log_internal::GetReferenceableValue(ushort param_1)

{
  return param_1;
}

// GetTypeInfoDynamic @ 14fa25bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct google::protobuf::internal::UntypedMapBase::TypeInfo __cdecl
   google::protobuf::internal::UntypedMapBase::GetTypeInfoDynamic(enum
   google::protobuf::internal::UntypedMapBase::TypeKind,enum
   google::protobuf::internal::UntypedMapBase::TypeKind,class google::protobuf::MessageLite const *
   __ptr64) */

TypeInfo __cdecl
google::protobuf::internal::UntypedMapBase::GetTypeInfoDynamic
          (TypeKind param_1,TypeKind param_2,MessageLite *param_3)

{
  longlong lVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  TypeInfo local_res8;
  basic_string_view<char,std::char_traits<char>_> local_138;
  basic_string_view<char,std::char_traits<char>_> local_128;
  undefined1 local_118 [136];
  basic_ios<char,std::char_traits<char>_> local_90;
  
  switch(param_1) {
  case kBool:
    uVar4 = 9;
    uVar5 = 8;
    break;
  case kU32:
  case kFloat:
    uVar4 = 0xc;
    uVar5 = 8;
    break;
  case kU64:
  case kDouble:
    uVar4 = 0x10;
    uVar5 = 8;
    break;
  case kString:
    uVar4 = 0x28;
    uVar5 = 8;
    break;
  case kMessage:
    lVar1 = (**(code **)(_DAT_00000000 + 0x18))(0);
    uVar6 = (ulonglong)*(byte *)(lVar1 + 0x2d);
    uVar4 = (ulonglong)*(uint *)(lVar1 + 0x28) + ((uVar6 + 7) - (uVar6 + 7) % uVar6);
    uVar5 = 8;
    if (8 < uVar6) {
      uVar5 = uVar6;
    }
    break;
  default:
    goto switchD_14fa25c39_default;
  }
  switch(param_2) {
  case kBool:
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    lVar1 = uVar4 + 1;
    break;
  case kU32:
  case kFloat:
    if (uVar5 < 4) {
      uVar5 = 4;
    }
    uVar4 = uVar4 + 3 & 0xfffffffffffffffc;
    lVar1 = uVar4 + 4;
    break;
  case kU64:
  case kDouble:
    if (uVar5 < 8) {
      uVar5 = 8;
    }
    uVar4 = uVar4 + 7 & 0xfffffffffffffff8;
    lVar1 = uVar4 + 8;
    break;
  case kString:
    if (uVar5 < 8) {
      uVar5 = 8;
    }
    uVar4 = uVar4 + 7 & 0xfffffffffffffff8;
    lVar1 = uVar4 + 0x20;
    break;
  case kMessage:
    lVar1 = (**(code **)(param_3->_padding_ + 0x18))(param_3);
    uVar6 = (ulonglong)*(byte *)(lVar1 + 0x2d);
    if (uVar5 < uVar6) {
      uVar5 = uVar6;
    }
    uVar4 = (uVar4 - 1) + uVar6;
    uVar4 = uVar4 - uVar4 % uVar6;
    lVar1 = *(uint *)(lVar1 + 0x28) + uVar4;
    break;
  default:
switchD_14fa25c39_default:
                    /* WARNING: Subroutine does not return */
    Unreachable();
  }
  uVar6 = lVar1 + -1 + uVar5;
  uVar6 = uVar6 - uVar6 % uVar5;
  if (uVar6 != (uVar6 & 0xffff)) {
    absl::lts_20240722::log_internal::CheckOpMessageBuilder::CheckOpMessageBuilder
              ((CheckOpMessageBuilder *)local_118,"value == static_cast<T>(value)");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_118,uVar6);
    pbVar2 = absl::lts_20240722::log_internal::CheckOpMessageBuilder::ForVar2
                       ((CheckOpMessageBuilder *)local_118);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,uVar6 & 0xffff);
    pbVar3 = absl::lts_20240722::log_internal::CheckOpMessageBuilder::NewString
                       ((CheckOpMessageBuilder *)local_118);
    *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(local_118 + (longlong)*(int *)(local_118._0_8_ + 4) + -4) =
         *(int *)(local_118._0_8_ + 4) + -0x88;
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_118 + 8)
              );
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(local_118 + 0x10));
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (&local_90);
    if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_138._Mydata = (char *)pbVar3;
      if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
        local_138._Mydata = (pbVar3->_Mypair)._Myval2._Bx._Ptr;
      }
      local_138._Mysize = (pbVar3->_Mypair)._Myval2._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                ((LogMessageFatal *)&local_128,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\map.cc"
                 ,0xf0,&local_138);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_128);
    }
  }
  if (uVar4 != (uVar4 & 0xff)) {
    absl::lts_20240722::log_internal::CheckOpMessageBuilder::CheckOpMessageBuilder
              ((CheckOpMessageBuilder *)local_118,"value == static_cast<T>(value)");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)local_118,uVar4);
    pbVar2 = absl::lts_20240722::log_internal::CheckOpMessageBuilder::ForVar2
                       ((CheckOpMessageBuilder *)local_118);
    absl::lts_20240722::log_internal::MakeCheckOpValueString(pbVar2,(uchar)uVar4);
    pbVar3 = absl::lts_20240722::log_internal::CheckOpMessageBuilder::NewString
                       ((CheckOpMessageBuilder *)local_118);
    *(undefined ***)(local_118 + *(int *)(local_118._0_8_ + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(local_118 + (longlong)*(int *)(local_118._0_8_ + 4) + -4) =
         *(int *)(local_118._0_8_ + 4) + -0x88;
    std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
    ~basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> *)(local_118 + 8)
              );
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              ((basic_ostream<char,std::char_traits<char>_> *)(local_118 + 0x10));
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (&local_90);
    if (pbVar3 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_138._Mydata = (char *)pbVar3;
      if (0xf < (pbVar3->_Mypair)._Myval2._Myres) {
        local_138._Mydata = (pbVar3->_Mypair)._Myval2._Bx._Ptr;
      }
      local_138._Mysize = (pbVar3->_Mypair)._Myval2._Mysize;
      local_128._Mydata = local_138._Mydata;
      local_128._Mysize = local_138._Mysize;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                ((LogMessageFatal *)&local_138,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\map.cc"
                 ,0xf0,&local_128);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
                ((LogMessageFatal *)&local_138);
    }
  }
  local_res8.value_offset = (uchar)uVar4;
  local_res8.node_size = (short)uVar6;
  local_res8.value_type = param_2;
  local_res8.key_type = param_1;
  return local_res8;
}

// SpaceUsedExcludingSelfLong @ 14fa25fb0

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::UntypedMapBase::SpaceUsedExcludingSelfLong(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::internal::UntypedMapBase::SpaceUsedExcludingSelfLong(UntypedMapBase *this)

{
  __uint64 *local_res8;
  __uint64 local_res10 [3];
  UntypedMapBase *local_18;
  __uint64 **pp_Stack_10;
  
  local_res10[0] =
       (ulonglong)((uint)(this->type_info_).node_size * this->num_elements_) +
       (ulonglong)this->num_buckets_ * 8;
  local_res8 = local_res10;
  local_18 = this;
  switch((this->type_info_).key_type) {
  case 0:
    pp_Stack_10 = &local_res8;
    FUN_14fa23e30(this,&local_18);
    return local_res10[0];
  case 1:
    pp_Stack_10 = &local_res8;
    FUN_14fa233d0(this,&local_18);
    return local_res10[0];
  case 2:
    pp_Stack_10 = &local_res8;
    FUN_14fa23ad0(this,&local_18);
    return local_res10[0];
  default:
                    /* WARNING: Subroutine does not return */
    Unreachable();
  case 5:
    pp_Stack_10 = &local_res8;
    FUN_14fa23730(this,&local_18);
    return local_res10[0];
  }
}

// UntypedMergeFrom @ 14fa260f0

/* public: void __cdecl google::protobuf::internal::UntypedMapBase::UntypedMergeFrom(class
   google::protobuf::internal::UntypedMapBase const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::UntypedMapBase::UntypedMergeFrom
          (UntypedMapBase *this,UntypedMapBase *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *local_res10;
  UntypedMapBase *local_28;
  UntypedMapBase *local_20;
  UntypedMapBase *local_18;
  
  uVar3 = 0;
  if (param_1->num_elements_ != 0) {
    local_res10 = (undefined8 *)0x0;
    do {
      uVar2 = (ulonglong)(this->type_info_).node_size;
      if (this->arena_ == (Arena *)0x0) {
        puVar1 = ::operator_new(uVar2);
      }
      else {
        puVar1 = Arena::Allocate(this->arena_,uVar2 + 7 & 0xfffffffffffffff8);
      }
      uVar3 = uVar3 + 1;
      *puVar1 = local_res10;
      local_res10 = puVar1;
    } while (uVar3 < param_1->num_elements_);
    local_28 = (UntypedMapBase *)&local_res10;
    local_20 = param_1;
    local_18 = this;
    FUN_14fa24270(this,&local_28);
    local_20 = (UntypedMapBase *)&local_res10;
    local_28 = param_1;
    switch((this->type_info_).key_type) {
    case 0:
      local_18 = this;
      FUN_14fa21720(&local_28,0);
      break;
    case 1:
      local_18 = this;
      FUN_14fa1fcd0(&local_28,0);
      return;
    case 2:
      local_18 = this;
      FUN_14fa21240(&local_28,0);
      return;
    default:
      local_18 = this;
                    /* WARNING: Subroutine does not return */
      Unreachable();
    case 5:
      local_18 = this;
      FUN_14fa20890(&local_28,0);
      return;
    }
  }
  return;
}

// UntypedSwap @ 14fa26260

/* public: void __cdecl google::protobuf::internal::UntypedMapBase::UntypedSwap(class
   google::protobuf::internal::UntypedMapBase & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::UntypedMapBase::UntypedSwap
          (UntypedMapBase *this,UntypedMapBase *param_1)

{
  uint uVar1;
  TypeInfo TVar2;
  NodeBase **ppNVar3;
  Arena *pAVar4;
  byte bVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *local_res8;
  ulonglong **local_48;
  ulonglong **local_40;
  UntypedMapBase *local_38;
  undefined8 local_28;
  uint local_20;
  TypeInfo local_1c;
  NodeBase **local_18;
  Arena *local_10;
  
  uVar8 = 0;
  local_10 = this->arena_;
  if (local_10 == param_1->arena_) {
    uVar1 = this->num_elements_;
    this->num_elements_ = param_1->num_elements_;
    param_1->num_elements_ = uVar1;
    uVar1 = this->num_buckets_;
    this->num_buckets_ = param_1->num_buckets_;
    param_1->num_buckets_ = uVar1;
    uVar1 = this->index_of_first_non_null_;
    this->index_of_first_non_null_ = param_1->index_of_first_non_null_;
    param_1->index_of_first_non_null_ = uVar1;
    TVar2 = this->type_info_;
    this->type_info_ = param_1->type_info_;
    param_1->type_info_ = TVar2;
    ppNVar3 = this->table_;
    this->table_ = param_1->table_;
    param_1->table_ = ppNVar3;
    pAVar4 = this->arena_;
    this->arena_ = param_1->arena_;
    param_1->arena_ = pAVar4;
  }
  else {
    local_1c = this->type_info_;
    local_28._0_4_ = this->num_elements_;
    local_28._4_4_ = this->num_buckets_;
    this->num_elements_ = 0;
    this->num_buckets_ = 1;
    local_20 = this->index_of_first_non_null_;
    this->index_of_first_non_null_ = 1;
    this->type_info_ = local_1c;
    local_18 = this->table_;
    this->table_ = kGlobalEmptyTable;
    this->arena_ = local_10;
    UntypedMergeFrom(this,param_1);
    ClearTable(param_1,true);
    if ((uint)local_28 != 0) {
      local_res8 = (ulonglong *)0x0;
      do {
        uVar7 = (ulonglong)(param_1->type_info_).node_size;
        if (param_1->arena_ == (Arena *)0x0) {
          puVar6 = ::operator_new(uVar7);
        }
        else {
          puVar6 = Arena::Allocate(param_1->arena_,uVar7 + 7 & 0xfffffffffffffff8);
        }
        uVar8 = uVar8 + 1;
        *puVar6 = (ulonglong)local_res8;
        local_res8 = puVar6;
      } while (uVar8 < (uint)local_28);
      local_48 = &local_res8;
      local_40 = (ulonglong **)&local_28;
      local_38 = param_1;
      FUN_14fa24270(param_1,&local_48);
      local_48 = (ulonglong **)&local_28;
      local_40 = &local_res8;
      switch((param_1->type_info_).key_type) {
      case 0:
        local_38 = param_1;
        FUN_14fa21720(&local_48,0);
        break;
      case 1:
        local_38 = param_1;
        FUN_14fa1fcd0(&local_48,0);
        break;
      case 2:
        local_38 = param_1;
        FUN_14fa21240(&local_48,0);
        break;
      default:
        local_38 = param_1;
                    /* WARNING: Subroutine does not return */
        Unreachable();
      case 5:
        local_38 = param_1;
        FUN_14fa20890(&local_48,0);
      }
    }
    if ((this->arena_ == (Arena *)0x0) && (local_28._4_4_ != 1)) {
      if (local_10 == (Arena *)0x0) {
        local_res8 = &local_28;
        local_48 = (ulonglong **)&local_28;
        local_40 = &local_res8;
        bVar5 = local_1c.value_type;
        if (bVar5 < 5) {
          FUN_14fa21d20(&local_48,(ulonglong)local_res8 & 0xff);
        }
        else if (bVar5 == 5) {
          FUN_14fa21f80(&local_48,&local_28);
        }
        else {
          if (bVar5 != 6) {
                    /* WARNING: Subroutine does not return */
            Unreachable();
          }
          FUN_14fa22260(&local_48,&local_28);
        }
      }
      if (local_10 == (Arena *)0x0) {
        ::operator_delete(local_18,(ulonglong)local_28._4_4_ << 3);
      }
      else {
        Arena::ReturnArrayMemory(local_10,local_18,(ulonglong)local_28._4_4_ << 3);
      }
    }
  }
  return;
}

// alignment @ 14fa264f0

/* public: unsigned char __cdecl google::protobuf::internal::ClassData::alignment(void)const __ptr64
    */

uchar __thiscall google::protobuf::internal::ClassData::alignment(ClassData *this)

{
  return (this->message_creator).alignment_;
}

// alignment @ 14fa26500

/* public: unsigned char __cdecl google::protobuf::internal::MessageCreator::alignment(void)const
   __ptr64 */

uchar __thiscall google::protobuf::internal::MessageCreator::alignment(MessageCreator *this)

{
  return this->alignment_;
}

