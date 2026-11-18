// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// PushDrawSegment @ 148a9dba0

bool __thiscall
FWorldPartitionDraw2DContext::PushDrawSegment
          (FWorldPartitionDraw2DContext *this,TBox2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,FLinearColor *param_4,float param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  FWorldPartitionCanvasItems *pFVar9;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  undefined4 uStack_14;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  bVar5 = BoxSegmentIntersect(this,param_1,param_2,param_3,&local_68);
  if (bVar5) {
    if (local_68.ArrayNum < 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    FVar4.Data = local_68.AllocatorInstance.Data;
    if (local_68.ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar9 = &this->CanvasItems;
    local_58 = *(undefined8 *)&param_4->field0_0x0;
    uStack_50 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    pFVar2 = (pFVar9->Lines).AllocatorInstance.Data;
    local_48 = *(undefined8 *)local_68.AllocatorInstance.Data;
    uStack_40 = *(undefined8 *)(local_68.AllocatorInstance.Data + 8);
    local_38 = 0;
    uStack_30 = *(undefined8 *)(FVar4.Data + 0x10);
    local_28 = *(undefined8 *)(FVar4.Data + 0x18);
    uStack_20 = 0;
    local_18 = param_5;
    if ((pFVar2 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar2 + (longlong)(this->CanvasItems).Lines.ArrayMax * 0x48)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    iVar7 = (this->CanvasItems).Lines.ArrayNum;
    piVar1 = &(this->CanvasItems).Lines.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,(ForAnyElementType *)pFVar9,piVar1);
    }
    (this->CanvasItems).Lines.ArrayNum = iVar7 + 1;
    lVar8 = (longlong)iVar7;
    pFVar2 = (pFVar9->Lines).AllocatorInstance.Data;
    bVar5 = true;
    *(undefined8 *)(pFVar2 + lVar8 * 0x48) = local_58;
    *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 8) = uStack_50;
    *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x10) = local_48;
    *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x10 + 8) = uStack_40;
    *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x20) = local_38;
    *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x20 + 8) = uStack_30;
    *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x30) = local_28;
    *(undefined8 *)(pFVar2 + lVar8 * 0x48 + 0x30 + 8) = uStack_20;
    *(ulonglong *)(pFVar2 + lVar8 * 0x48 + 0x40) = CONCAT44(uStack_14,local_18);
  }
  else {
    bVar5 = false;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return bVar5;
}

// PushDrawTile @ 148a9ddb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FWorldPartitionDraw2DContext::PushDrawTile
          (FWorldPartitionDraw2DContext *this,TBox2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TVector2<double> *param_5,
          FLinearColor *param_6)

{
  int *piVar1;
  TArray<FWorldPartitionCanvasBoxItem,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  char cVar20;
  ForAnyElementType FVar21;
  FScriptContainerElement *pFVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8 [8];
  ForAnyElementType local_1b0;
  uint local_1a8;
  int local_1a4;
  double local_1a0;
  double dStack_198;
  double local_190;
  double dStack_188;
  bool local_158;
  undefined7 uStack_157;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar5 = (param_3->field0_0x0)._s_0.X;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar9 = (param_4->field0_0x0)._s_0.X;
  dVar10 = (param_4->field0_0x0)._s_0.Y;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 4;
  dVar11 = (param_5->field0_0x0)._s_0.X;
  dVar12 = (param_5->field0_0x0)._s_0.Y;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&local_1b0,4,&local_1a4);
  uVar13 = local_1a8;
  local_1a0 = 0.0;
  dStack_198 = 0.0;
  bVar15 = false;
  *(double *)local_1b0.Data = dVar3;
  *(double *)(local_1b0.Data + 8) = dVar4;
  *(double *)(local_1b0.Data + 0x10) = dVar5;
  *(double *)(local_1b0.Data + 0x18) = dVar6;
  *(double *)(local_1b0.Data + 0x20) = dVar9;
  *(double *)(local_1b0.Data + 0x28) = dVar10;
  *(double *)(local_1b0.Data + 0x30) = dVar11;
  *(double *)(local_1b0.Data + 0x38) = dVar12;
  uVar18 = (ulonglong)(int)local_1a8;
  local_190 = 0.0;
  dStack_188 = 0.0;
  uVar29 = 0;
  uVar30 = 0;
  pFVar22 = local_1b0.Data + uVar18 * 0x10;
  FVar21.Data = local_1b0.Data;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar27 = 0;
  uVar35 = 0;
  local_f8 = dVar3;
  dStack_f0 = dVar4;
  local_e8 = dVar5;
  dStack_e0 = dVar6;
  local_d8 = dVar9;
  dStack_d0 = dVar10;
  local_c8 = dVar11;
  dStack_c0 = dVar12;
  while( true ) {
    if ((uint)uVar18 != uVar13) {
      local_1b8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1b8);
      uVar18 = (ulonglong)local_1a8;
    }
    if (FVar21.Data == pFVar22) break;
    if (bVar15) {
      local_190 = *(double *)FVar21.Data;
      dVar3 = *(double *)(FVar21.Data + 8);
      uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar23 = SUB84(local_190,0);
      uVar25 = (int)((ulonglong)local_190 >> 0x20);
      if ((double)CONCAT44(uVar32,uVar31) <= local_190) {
        uVar23 = uVar31;
        uVar25 = uVar32;
      }
      FVar21.Data = FVar21.Data + 0x10;
      if (local_190 <= (double)CONCAT44(uVar30,uVar29)) {
        local_190 = (double)CONCAT44(uVar30,uVar29);
      }
      local_1a0 = (double)CONCAT44(uVar25,uVar23);
      uVar24 = SUB84(dVar3,0);
      uVar26 = uVar28;
      if ((double)CONCAT44(uVar35,uVar27) <= dVar3) {
        uVar24 = uVar27;
        uVar26 = uVar35;
      }
      uVar29 = SUB84(local_190,0);
      uVar30 = (undefined4)((ulonglong)local_190 >> 0x20);
      uVar27 = SUB84(dVar3,0);
      if (dVar3 <= (double)CONCAT44(uVar34,uVar33)) {
        uVar27 = uVar33;
        uVar28 = uVar34;
      }
      dStack_198 = (double)CONCAT44(uVar26,uVar24);
      dStack_188 = (double)CONCAT44(uVar28,uVar27);
      uVar31 = uVar23;
      uVar32 = uVar25;
      uVar33 = uVar27;
      uVar34 = uVar28;
      uVar27 = uVar24;
      uVar35 = uVar26;
    }
    else {
      uVar29 = *(undefined4 *)FVar21.Data;
      uVar30 = *(undefined4 *)(FVar21.Data + 4);
      local_1a0 = *(double *)FVar21.Data;
      local_190 = *(double *)FVar21.Data;
      pFVar8 = FVar21.Data + 8;
      uVar33 = *(undefined4 *)pFVar8;
      uVar34 = *(undefined4 *)(FVar21.Data + 0xc);
      dStack_198 = *(double *)pFVar8;
      dStack_188 = *(double *)pFVar8;
      bVar15 = true;
      FVar21.Data = FVar21.Data + 0x10;
      uVar31 = uVar29;
      uVar32 = uVar30;
      uVar27 = uVar33;
      uVar35 = uVar34;
    }
  }
  dVar3 = (param_1->Min).field0_0x0._s_0.X;
  if (dVar3 < (double)CONCAT44(uVar30,uVar29) || dVar3 == (double)CONCAT44(uVar30,uVar29)) {
    dVar4 = (param_1->Max).field0_0x0._s_0.X;
    if ((double)CONCAT44(uVar32,uVar31) < dVar4 || (double)CONCAT44(uVar32,uVar31) == dVar4) {
      dVar5 = (param_1->Min).field0_0x0._s_0.Y;
      if (dVar5 < (double)CONCAT44(uVar34,uVar33) || dVar5 == (double)CONCAT44(uVar34,uVar33)) {
        dVar6 = (param_1->Max).field0_0x0._s_0.Y;
        if ((double)CONCAT44(uVar35,uVar27) < dVar6 || (double)CONCAT44(uVar35,uVar27) == dVar6) {
          uVar23 = SUB84(dVar3,0);
          uVar25 = (int)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= (double)CONCAT44(uVar32,uVar31)) {
            uVar23 = uVar31;
            uVar25 = uVar32;
          }
          cVar20 = '\x01';
          uVar31 = SUB84(dVar4,0);
          uVar32 = (int)((ulonglong)dVar4 >> 0x20);
          if ((double)CONCAT44(uVar30,uVar29) <= dVar4) {
            uVar31 = uVar29;
            uVar32 = uVar30;
          }
          uVar29 = SUB84(dVar5,0);
          uVar30 = (int)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= (double)CONCAT44(uVar35,uVar27)) {
            uVar29 = uVar27;
            uVar30 = uVar35;
          }
          uVar27 = SUB84(dVar6,0);
          uVar35 = (int)((ulonglong)dVar6 >> 0x20);
          if ((double)CONCAT44(uVar34,uVar33) <= dVar6) {
            uVar27 = uVar33;
            uVar35 = uVar34;
          }
          goto LAB_148a9e05f;
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
       ::__l5::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
     ::__l5::_thread_safe_static_guard_0__ == -1)) {
    `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
    ::__l5::EmptyBox.Min.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
    `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
    ::__l5::EmptyBox.bIsValid = false;
    `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
    ::__l5::EmptyBox._33_7_ = 0;
    `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
    ::__l5::EmptyBox.Max.field0_0x0 = (TVector2<double>_u_0)ZEXT816(0);
    _Init_thread_footer(&`public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  uVar23 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._0_4_;
  uVar25 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._4_4_;
  uVar29 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._8_4_;
  uVar30 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Min.field0_0x0._12_4_;
  uVar31 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._0_4_;
  uVar32 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._4_4_;
  local_158 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
              ::__l5::EmptyBox.bIsValid;
  uStack_157 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
               ::__l5::EmptyBox._33_7_;
  uVar14 = _local_158;
  local_158 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
              ::__l5::EmptyBox.bIsValid;
  uVar27 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._8_4_;
  uVar35 = `public:_struct_UE::Math::TBox2<double>___cdecl_UE::Math::TBox2<double>::Overlap(UE::Math::TBox2<double>_const&___ptr64)const___ptr64'
           ::__l5::EmptyBox.Max.field0_0x0._12_4_;
  cVar20 = local_158;
  _local_158 = uVar14;
LAB_148a9e05f:
  if (local_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  if (cVar20 == '\0') {
    bVar15 = false;
  }
  else {
    pTVar2 = &(this->CanvasItems).Boxes;
    pFVar22 = (pTVar2->AllocatorInstance).Data;
    local_128 = CONCAT44(uVar32,uVar31);
    uStack_120 = CONCAT44(uVar30,uVar29);
    local_148 = *(undefined8 *)&param_6->field0_0x0;
    uStack_140 = *(undefined8 *)((longlong)&param_6->field0_0x0 + 8);
    local_108 = CONCAT44(uVar25,uVar23);
    uStack_100 = CONCAT44(uVar35,uVar27);
    local_138 = uVar23;
    uStack_134 = uVar25;
    uStack_130 = uVar29;
    uStack_12c = uVar30;
    local_118 = uVar31;
    uStack_114 = uVar32;
    uStack_110 = uVar27;
    uStack_10c = uVar35;
    if (((pFVar22 <= (FScriptContainerElement *)&local_148) &&
        ((FScriptContainerElement *)&local_148 <
         pFVar22 + (longlong)(this->CanvasItems).Boxes.ArrayMax * 0x50)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar7 = (code *)swi(3);
      uVar16 = (*pcVar7)();
      return (bool)uVar16;
    }
    iVar17 = (this->CanvasItems).Boxes.ArrayNum;
    piVar1 = &(this->CanvasItems).Boxes.ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->CanvasItems).Boxes.ArrayNum = iVar17 + 1;
    lVar19 = (longlong)iVar17;
    pFVar22 = (pTVar2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar22 + lVar19 * 0x50) = local_148;
    *(undefined8 *)(pFVar22 + lVar19 * 0x50 + 8) = uStack_140;
    *(ulonglong *)(pFVar22 + lVar19 * 0x50 + 0x10) = CONCAT44(uStack_134,local_138);
    *(ulonglong *)(pFVar22 + lVar19 * 0x50 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
    *(undefined8 *)(pFVar22 + lVar19 * 0x50 + 0x20) = local_128;
    *(undefined8 *)(pFVar22 + lVar19 * 0x50 + 0x20 + 8) = uStack_120;
    *(ulonglong *)(pFVar22 + lVar19 * 0x50 + 0x30) = CONCAT44(uStack_114,local_118);
    *(ulonglong *)(pFVar22 + lVar19 * 0x50 + 0x30 + 8) = CONCAT44(uStack_10c,uStack_110);
    *(undefined8 *)(pFVar22 + lVar19 * 0x50 + 0x40) = local_108;
    *(undefined8 *)(pFVar22 + lVar19 * 0x50 + 0x40 + 8) = uStack_100;
    bVar15 = true;
  }
  return bVar15;
}

// BoxSegmentIntersect @ 148ac0500

bool __thiscall
FWorldPartitionDraw2DContext::BoxSegmentIntersect
          (FWorldPartitionDraw2DContext *this,TBox2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int *piVar13;
  double local_268;
  double dStack_260;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90 [5];
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  if (((((param_1->Min).field0_0x0._s_0.X <= dVar2 && dVar2 != (param_1->Min).field0_0x0._s_0.X) &&
       (dVar2 < (param_1->Max).field0_0x0._s_0.X)) &&
      (dVar2 = (param_2->field0_0x0)._s_0.Y, pdVar1 = &(param_1->Min).field0_0x0._s_0.Y,
      *pdVar1 <= dVar2 && dVar2 != *pdVar1)) && (dVar2 < (param_1->Max).field0_0x0._s_0.Y)) {
    pFVar6 = (param_4->AllocatorInstance).Data;
    if (((pFVar6 <= param_2) && (param_2 < pFVar6 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    iVar12 = param_4->ArrayNum;
    if (iVar12 == param_4->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar12 + 1;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    pFVar6 = (param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(double *)pFVar6 = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar6 + 8) = dVar2;
  }
  dVar2 = (param_3->field0_0x0)._s_0.X;
  if ((((param_1->Min).field0_0x0._s_0.X <= dVar2 && dVar2 != (param_1->Min).field0_0x0._s_0.X) &&
      (dVar2 < (param_1->Max).field0_0x0._s_0.X)) &&
     ((dVar2 = (param_3->field0_0x0)._s_0.Y, pdVar1 = &(param_1->Min).field0_0x0._s_0.Y,
      *pdVar1 <= dVar2 && dVar2 != *pdVar1 && (dVar2 < (param_1->Max).field0_0x0._s_0.Y)))) {
    pFVar6 = (param_4->AllocatorInstance).Data;
    if (((pFVar6 <= param_3) && (param_3 < pFVar6 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    iVar12 = param_4->ArrayNum;
    if (iVar12 == param_4->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar12 + 1;
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    pFVar6 = (param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
    *(double *)pFVar6 = (param_3->field0_0x0)._s_0.X;
    *(double *)(pFVar6 + 8) = dVar2;
  }
  piVar13 = &param_4->ArrayMax;
  if (param_4->ArrayNum == 2) {
LAB_148ac0c33:
    bVar10 = true;
  }
  else {
    dVar8 = (param_1->Min).field0_0x0._s_0.X;
    dVar9 = (param_1->Min).field0_0x0._s_0.Y;
    dVar2 = (param_1->Max).field0_0x0._s_0.X;
    dVar3 = (param_1->Min).field0_0x0._s_0.Y;
    dVar4 = (param_1->Max).field0_0x0._s_0.Y;
    dVar5 = (param_1->Min).field0_0x0._s_0.X;
    local_228._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_228._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_258._s_0.Z = 0.0;
    local_210._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_210._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_240._s_0.Z = 0.0;
    local_228._s_0.Z = 0.0;
    local_210._s_0.Z = 0.0;
    local_258._s_0.X = dVar2;
    local_258._s_0.Y = dVar3;
    local_240._s_0.X = dVar8;
    local_240._s_0.Y = dVar9;
    bVar10 = FMath::SegmentIntersection2D
                       ((TVector<double> *)&local_210._s_0,(TVector<double> *)&local_228._s_0,
                        (TVector<double> *)&local_240._s_0,(TVector<double> *)&local_258._s_0,
                        (TVector<double> *)&local_d8._s_0);
    if (bVar10) {
      pFVar6 = (param_4->AllocatorInstance).Data;
      local_268 = local_d8._s_0.X;
      dStack_260 = local_d8._s_0.Y;
      if (((pFVar6 <= (FScriptContainerElement *)&local_268) &&
          ((FScriptContainerElement *)&local_268 < pFVar6 + (longlong)*piVar13 * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar13) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_4->AllocatorInstance,piVar13);
        param_4->ArrayNum = iVar12;
      }
      param_4->ArrayNum = iVar12 + 1;
      pFVar6 = (param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(double *)pFVar6 = local_268;
      *(double *)(pFVar6 + 8) = dStack_260;
      if (param_4->ArrayNum == 2) goto LAB_148ac0c33;
    }
    local_1c8._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_1c8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_1b0._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_1b0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_1f8._s_0.Z = 0.0;
    local_1e0._s_0.Z = 0.0;
    local_1c8._s_0.Z = 0.0;
    local_1b0._s_0.Z = 0.0;
    local_1f8._s_0.X = dVar2;
    local_1f8._s_0.Y = dVar4;
    local_1e0._s_0.X = dVar2;
    local_1e0._s_0.Y = dVar3;
    bVar10 = FMath::SegmentIntersection2D
                       ((TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_1c8._s_0,
                        (TVector<double> *)&local_1e0._s_0,(TVector<double> *)&local_1f8._s_0,
                        (TVector<double> *)&local_c0._s_0);
    if (bVar10) {
      pFVar6 = (param_4->AllocatorInstance).Data;
      local_268 = local_c0._s_0.X;
      dStack_260 = local_c0._s_0.Y;
      if (((pFVar6 <= (FScriptContainerElement *)&local_268) &&
          ((FScriptContainerElement *)&local_268 < pFVar6 + (longlong)*piVar13 * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar13) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_4->AllocatorInstance,piVar13);
        param_4->ArrayNum = iVar12;
      }
      param_4->ArrayNum = iVar12 + 1;
      pFVar6 = (param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(double *)pFVar6 = local_268;
      *(double *)(pFVar6 + 8) = dStack_260;
      if (param_4->ArrayNum == 2) goto LAB_148ac0c33;
    }
    local_168._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_168._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_150._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_150._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_198._s_0.Z = 0.0;
    local_180._s_0.Z = 0.0;
    local_168._s_0.Z = 0.0;
    local_150._s_0.Z = 0.0;
    local_198._s_0.X = dVar5;
    local_198._s_0.Y = dVar4;
    local_180._s_0.X = dVar2;
    local_180._s_0.Y = dVar4;
    bVar10 = FMath::SegmentIntersection2D
                       ((TVector<double> *)&local_150._s_0,(TVector<double> *)&local_168._s_0,
                        (TVector<double> *)&local_180._s_0,(TVector<double> *)&local_198._s_0,
                        (TVector<double> *)&local_a8._s_0);
    if (bVar10) {
      pFVar6 = (param_4->AllocatorInstance).Data;
      local_268 = local_a8._s_0.X;
      dStack_260 = local_a8._s_0.Y;
      if (((pFVar6 <= (FScriptContainerElement *)&local_268) &&
          ((FScriptContainerElement *)&local_268 < pFVar6 + (longlong)*piVar13 * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar13) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_4->AllocatorInstance,piVar13);
        param_4->ArrayNum = iVar12;
      }
      param_4->ArrayNum = iVar12 + 1;
      pFVar6 = (param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(double *)pFVar6 = local_268;
      *(double *)(pFVar6 + 8) = dStack_260;
      if (param_4->ArrayNum == 2) goto LAB_148ac0c33;
    }
    local_108._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_108._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_f0._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_f0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_138._s_0.Z = 0.0;
    local_120._s_0.Z = 0.0;
    local_108._s_0.Z = 0.0;
    local_f0._s_0.Z = 0.0;
    local_138._s_0.X = dVar5;
    local_138._s_0.Y = dVar4;
    local_120._s_0.X = dVar8;
    local_120._s_0.Y = dVar9;
    bVar10 = FMath::SegmentIntersection2D
                       ((TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0,
                        (TVector<double> *)&local_120._s_0,(TVector<double> *)&local_138._s_0,
                        (TVector<double> *)&local_90[0]._s_0);
    if (bVar10) {
      pFVar6 = (param_4->AllocatorInstance).Data;
      local_268 = (double)local_90[0]._0_8_;
      dStack_260 = (double)local_90[0]._8_8_;
      if (((pFVar6 <= (FScriptContainerElement *)&local_268) &&
          ((FScriptContainerElement *)&local_268 < pFVar6 + (longlong)*piVar13 * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      iVar12 = param_4->ArrayNum;
      if (iVar12 == *piVar13) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_4->AllocatorInstance,piVar13);
        param_4->ArrayNum = iVar12;
      }
      param_4->ArrayNum = iVar12 + 1;
      pFVar6 = (param_4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(double *)pFVar6 = local_268;
      *(double *)(pFVar6 + 8) = dStack_260;
      bVar10 = param_4->ArrayNum == 2;
    }
    else {
      bVar10 = false;
    }
  }
  return bVar10;
}

// Initialize @ 148af23d0

void __thiscall
FWorldPartitionDraw2DContext::Initialize
          (FWorldPartitionDraw2DContext *this,TBox2<double> *param_1,TBox2<double> *param_2)

{
  int *piVar1;
  int iVar2;
  FWorldPartitionCanvasMultiLineTextItem *pFVar3;
  double dVar4;
  undefined7 uVar5;
  
  dVar4 = (param_1->Min).field0_0x0._s_0.Y;
  (this->CanvasRegion).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->CanvasRegion).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->Max).field0_0x0._s_0.Y;
  (this->CanvasRegion).Max.field0_0x0._s_0.X = (param_1->Max).field0_0x0._s_0.X;
  (this->CanvasRegion).Max.field0_0x0._s_0.Y = dVar4;
  uVar5 = *(undefined7 *)&param_1->field_0x21;
  (this->CanvasRegion).bIsValid = param_1->bIsValid;
  *(undefined7 *)&(this->CanvasRegion).field_0x21 = uVar5;
  dVar4 = (param_2->Min).field0_0x0._s_0.Y;
  (this->WorldRegion).Min.field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  (this->WorldRegion).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_2->Max).field0_0x0._s_0.Y;
  (this->WorldRegion).Max.field0_0x0._s_0.X = (param_2->Max).field0_0x0._s_0.X;
  (this->WorldRegion).Max.field0_0x0._s_0.Y = dVar4;
  uVar5 = *(undefined7 *)&param_2->field_0x21;
  (this->WorldRegion).bIsValid = param_2->bIsValid;
  *(undefined7 *)&(this->WorldRegion).field_0x21 = uVar5;
  (this->UsedCanvasBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->UsedCanvasBounds).Min.field0_0x0._s_0.Y = 0.0;
  this->bDrawGridBounds = false;
  this->bDrawGridAxis = false;
  (this->UsedCanvasBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->UsedCanvasBounds).Max.field0_0x0._s_0.Y = 0.0;
  this->bIsDetailedMode = false;
  (this->DesiredWorldBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->DesiredWorldBounds).Min.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->UsedCanvasBounds).bIsValid = 0;
  (this->DesiredWorldBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->DesiredWorldBounds).Max.field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&(this->DesiredWorldBounds).bIsValid = 0;
  piVar1 = &(this->CanvasItems).Lines.ArrayMax;
  iVar2 = *piVar1;
  (this->CanvasItems).Lines.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)&this->CanvasItems,0,piVar1);
  }
  iVar2 = (this->CanvasItems).Boxes.ArrayMax;
  (this->CanvasItems).Boxes.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(this->CanvasItems).Boxes.AllocatorInstance,0,
               &(this->CanvasItems).Boxes.ArrayMax);
  }
  piVar1 = &(this->CanvasItems).MultiLineTexts.ArrayMax;
  pFVar3 = (FWorldPartitionCanvasMultiLineTextItem *)
           (this->CanvasItems).MultiLineTexts.AllocatorInstance.Data;
  iVar2 = (this->CanvasItems).MultiLineTexts.ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<FWorldPartitionCanvasMultiLineTextItem,int>(pFVar3,iVar2);
    (this->CanvasItems).MultiLineTexts.ArrayNum = 0;
    return;
  }
  DestructItems<FWorldPartitionCanvasMultiLineTextItem,int>(pFVar3,iVar2);
  (this->CanvasItems).MultiLineTexts.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->CanvasItems).MultiLineTexts.AllocatorInstance,0,piVar1);
  }
  return;
}

