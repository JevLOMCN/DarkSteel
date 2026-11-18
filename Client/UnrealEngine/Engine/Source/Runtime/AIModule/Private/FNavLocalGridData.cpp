// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 17

// FNavLocalGridData @ 146f91be0

FNavLocalGridData * __thiscall
FNavLocalGridData::FNavLocalGridData(FNavLocalGridData *this,FNavLocalGridData *param_1)

{
  longlong *plVar1;
  int *piVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  void *_Src;
  FScriptContainerElement *_Src_00;
  longlong lVar5;
  
  plVar1 = &this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = param_1->_padding_;
  lVar5 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar5;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *plVar1 = 0;
  iVar4 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar4,0,(ForAnyElementType *)plVar1,iVar4,piVar2);
    memcpy((void *)*plVar1,_Src,(longlong)iVar4);
  }
  pTVar3 = &this->CellZ;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->CellZ).ArrayMax;
  iVar4 = (param_1->CellZ).ArrayNum;
  _Src_00 = (param_1->CellZ).AllocatorInstance.Data;
  (this->CellZ).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,_Src_00,(longlong)iVar4 << 3);
  }
  this->LastAccessTime = param_1->LastAccessTime;
  this->GridId = param_1->GridId;
  *(undefined8 *)&(this->OriginWorldCoord).field0_0x0 =
       *(undefined8 *)&(param_1->OriginWorldCoord).field0_0x0;
  (this->OriginWorldCoord).field0_0x0._s_0.Z = (param_1->OriginWorldCoord).field0_0x0._s_0.Z;
  return this;
}

// FNavLocalGridData @ 146f91d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNavLocalGridData * __thiscall
FNavLocalGridData::FNavLocalGridData
          (FNavLocalGridData *this,TVector<double> *param_1,TVector2<double> *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  FNavLocalGridData *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  TVector<double>_u_0 local_88;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  dVar3 = __real_3fe0000000000000;
  dVar2 = __real_3ff0000000000000;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_58 = 1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CellZ).ArrayNum = 0;
  (this->CellZ).ArrayMax = 0;
  this->GridId = 0;
  this->_padding_ = 0;
  (this->CellZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar2 = dVar2 / (double)UNavLocalGridManager::GridCellSize;
  dVar9 = dVar2 + dVar2;
  local_70 = (double)((float)((longlong)ROUND(dVar9 * (param_1->field0_0x0)._s_0.X + dVar3) >> 1) *
                     UNavLocalGridManager::GridCellSize);
  local_68 = (double)((float)((longlong)ROUND(dVar9 * (param_1->field0_0x0)._s_0.Y + dVar3) >> 1) *
                     UNavLocalGridManager::GridCellSize);
  local_88._s_0.Y = local_68 - (param_2->field0_0x0)._s_0.Y;
  local_68 = local_68 + (param_2->field0_0x0)._s_0.Y;
  local_88._s_0.Z =
       (double)((float)((longlong)ROUND(dVar9 * (param_1->field0_0x0)._s_0.Z + dVar3) >> 1) *
               UNavLocalGridManager::GridCellSize);
  local_88._s_0.X = local_70 - (param_2->field0_0x0)._s_0.X;
  local_70 = local_70 + (param_2->field0_0x0)._s_0.X;
  local_60 = local_88._s_0.Z;
  TSimpleCellGrid<unsigned_char,255>::Init
            ((TSimpleCellGrid<unsigned_char,255> *)this,UNavLocalGridManager::GridCellSize,
             (TBox<double> *)&local_88._s_0);
  local_98 = (longlong)(dVar2 * (double)this->_padding_);
  iVar6 = (int)local_98;
  if (local_98 != iVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNavLocalGridData *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_98 = (longlong)(dVar2 * (double)this->_padding_);
  iVar7 = (int)local_98;
  if (local_98 != iVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNavLocalGridData *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_98 = (longlong)(dVar2 * (double)this->_padding_);
  iVar8 = (int)local_98;
  if (local_98 != iVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNavLocalGridData *)(*pcVar1)();
      return pFVar5;
    }
  }
  (this->OriginWorldCoord).field0_0x0._s_0.X = iVar6;
  (this->OriginWorldCoord).field0_0x0._s_0.Y = iVar7;
  (this->OriginWorldCoord).field0_0x0._s_0.Z = iVar8;
  return this;
}

// FNavLocalGridData @ 146f92010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNavLocalGridData * __thiscall
FNavLocalGridData::FNavLocalGridData(FNavLocalGridData *this,TVector<double> *param_1,float param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  FNavLocalGridData *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  TVector<double>_u_0 local_88;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  dVar3 = __real_3fe0000000000000;
  dVar2 = __real_3ff0000000000000;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_58 = 1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CellZ).ArrayNum = 0;
  (this->CellZ).ArrayMax = 0;
  this->GridId = 0;
  this->_padding_ = 0;
  (this->CellZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  dVar2 = dVar2 / (double)UNavLocalGridManager::GridCellSize;
  dVar9 = dVar2 + dVar2;
  local_70 = (double)((float)((longlong)ROUND(dVar9 * (param_1->field0_0x0)._s_0.X + dVar3) >> 1) *
                     UNavLocalGridManager::GridCellSize);
  dVar10 = (double)param_2;
  dVar11 = (double)((float)((longlong)ROUND(dVar9 * (param_1->field0_0x0)._s_0.Y + dVar3) >> 1) *
                   UNavLocalGridManager::GridCellSize);
  local_88._s_0.X = local_70 - dVar10;
  local_70 = local_70 + dVar10;
  local_88._s_0.Z =
       (double)((float)((longlong)ROUND(dVar9 * (param_1->field0_0x0)._s_0.Z + dVar3) >> 1) *
               UNavLocalGridManager::GridCellSize);
  local_68 = dVar11 + dVar10;
  local_88._s_0.Y = dVar11 - dVar10;
  local_60 = local_88._s_0.Z;
  TSimpleCellGrid<unsigned_char,255>::Init
            ((TSimpleCellGrid<unsigned_char,255> *)this,UNavLocalGridManager::GridCellSize,
             (TBox<double> *)&local_88._s_0);
  local_98 = (longlong)(dVar2 * (double)this->_padding_);
  iVar6 = (int)local_98;
  if (local_98 != iVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNavLocalGridData *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_98 = (longlong)(dVar2 * (double)this->_padding_);
  iVar7 = (int)local_98;
  if (local_98 != iVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNavLocalGridData *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_98 = (longlong)(dVar2 * (double)this->_padding_);
  iVar8 = (int)local_98;
  if (local_98 != iVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNavLocalGridData *)(*pcVar1)();
      return pFVar5;
    }
  }
  (this->OriginWorldCoord).field0_0x0._s_0.X = iVar6;
  (this->OriginWorldCoord).field0_0x0._s_0.Y = iVar7;
  (this->OriginWorldCoord).field0_0x0._s_0.Z = iVar8;
  return this;
}

// FNavLocalGridData @ 146f922c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNavLocalGridData * __thiscall
FNavLocalGridData::FNavLocalGridData
          (FNavLocalGridData *this,TArray<FNavLocalGridData,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNavLocalGridData *pFVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
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
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  int local_f8;
  uint local_f4;
  longlong local_e8;
  FNavLocalGridData *local_e0;
  TVector<double>_u_0 local_d8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar15 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0x47efffffe0000000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CellZ).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellZ).ArrayNum = 0;
  (this->CellZ).ArrayMax = 0;
  this->GridId = 0;
  iVar12 = param_1->ArrayNum;
  if (iVar12 != 0) {
    local_a8 = 0;
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_d8._s_0.Z = 0.0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_e0 = this;
    if (0 < iVar12) {
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar28 = 0;
      uVar30 = 0;
      uVar27 = 0;
      uVar29 = 0;
      uVar19 = uVar15;
      do {
        uVar13 = (uint)uVar19;
        uVar18 = 0;
        if ((int)uVar13 < iVar12) {
          uVar18 = ~uVar13 >> 0x1f;
        }
        if (uVar18 == 0) {
          local_100 = (longlong)iVar12;
          local_108 = (longlong)(int)uVar13;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            pFVar11 = (FNavLocalGridData *)(*pcVar5)();
            return pFVar11;
          }
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        if ((char)local_a8 == '\0') {
          if (pFVar4[uVar15 + 0x38] != (FScriptContainerElement)0x0) {
            pFVar1 = pFVar4 + uVar15 + 8;
            uVar31 = *(undefined4 *)pFVar1;
            uVar32 = *(undefined4 *)(pFVar1 + 4);
            local_d8._s_0.X = (double)*(undefined8 *)pFVar1;
            uVar27 = *(undefined4 *)(pFVar1 + 8);
            uVar29 = *(undefined4 *)(pFVar1 + 0xc);
            local_d8._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
            pFVar1 = pFVar4 + uVar15 + 0x18;
            uVar33 = *(undefined4 *)pFVar1;
            uVar34 = *(undefined4 *)(pFVar1 + 4);
            local_d8._s_0.Z = (double)*(undefined8 *)pFVar1;
            uVar28 = *(undefined4 *)(pFVar1 + 8);
            uVar30 = *(undefined4 *)(pFVar1 + 0xc);
            uStack_c0 = *(undefined8 *)(pFVar1 + 8);
            pFVar1 = pFVar4 + uVar15 + 0x28;
            uVar35 = *(undefined4 *)pFVar1;
            uVar36 = *(undefined4 *)(pFVar1 + 4);
            local_b8 = *(undefined8 *)pFVar1;
            uVar37 = *(undefined4 *)(pFVar1 + 8);
            uVar38 = *(undefined4 *)(pFVar1 + 0xc);
            uStack_b0 = *(undefined8 *)(pFVar1 + 8);
            local_a8 = *(undefined8 *)(pFVar4 + uVar15 + 0x38);
          }
        }
        else if (pFVar4[uVar15 + 0x38] != (FScriptContainerElement)0x0) {
          dVar2 = *(double *)(pFVar4 + uVar15 + 0x10);
          dVar3 = *(double *)(pFVar4 + uVar15 + 0x18);
          uVar21 = SUB84(dVar2,0);
          uVar24 = (int)((ulonglong)dVar2 >> 0x20);
          if ((double)CONCAT44(uVar29,uVar27) <= dVar2) {
            uVar21 = uVar27;
            uVar24 = uVar29;
          }
          dVar2 = *(double *)(pFVar4 + uVar15 + 8);
          if (dVar2 <= (double)CONCAT44(uVar32,uVar31)) {
            uVar31 = SUB84(dVar2,0);
            uVar32 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          uVar27 = SUB84(dVar3,0);
          uVar29 = (int)((ulonglong)dVar3 >> 0x20);
          if ((double)CONCAT44(uVar34,uVar33) <= dVar3) {
            uVar27 = uVar33;
            uVar29 = uVar34;
          }
          local_d8._s_0.Y = (double)CONCAT44(uVar24,uVar21);
          dVar2 = *(double *)(pFVar4 + uVar15 + 0x20);
          uVar22 = SUB84(dVar2,0);
          uVar25 = (int)((ulonglong)dVar2 >> 0x20);
          if (dVar2 <= (double)CONCAT44(uVar30,uVar28)) {
            uVar22 = uVar28;
            uVar25 = uVar30;
          }
          local_d8._s_0.Z = (double)CONCAT44(uVar29,uVar27);
          local_d8._s_0.X = (double)CONCAT44(uVar32,uVar31);
          dVar2 = *(double *)(pFVar4 + uVar15 + 0x28);
          uVar28 = SUB84(dVar2,0);
          uVar30 = (int)((ulonglong)dVar2 >> 0x20);
          if (dVar2 <= (double)CONCAT44(uVar36,uVar35)) {
            uVar28 = uVar35;
            uVar30 = uVar36;
          }
          uStack_c0 = CONCAT44(uVar25,uVar22);
          dVar2 = *(double *)(pFVar4 + uVar15 + 0x30);
          uVar23 = SUB84(dVar2,0);
          uVar26 = (int)((ulonglong)dVar2 >> 0x20);
          if (dVar2 <= (double)CONCAT44(uVar38,uVar37)) {
            uVar23 = uVar37;
            uVar26 = uVar38;
          }
          local_b8 = CONCAT44(uVar30,uVar28);
          uStack_b0 = CONCAT44(uVar26,uVar23);
          uVar33 = uVar27;
          uVar34 = uVar29;
          uVar35 = uVar28;
          uVar36 = uVar30;
          uVar37 = uVar23;
          uVar38 = uVar26;
          uVar28 = uVar22;
          uVar30 = uVar25;
          uVar27 = uVar21;
          uVar29 = uVar24;
        }
        iVar12 = param_1->ArrayNum;
        uVar19 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 0xb0;
      } while ((int)(uVar13 + 1) < iVar12);
    }
    fVar6 = UNavLocalGridManager::GridCellSize;
    TSimpleCellGrid<unsigned_char,255>::Init
              ((TSimpleCellGrid<unsigned_char,255> *)this,UNavLocalGridManager::GridCellSize,
               (TBox<double> *)&local_d8._s_0);
    dVar2 = __real_3ff0000000000000 / (double)fVar6;
    local_108 = (longlong)(dVar2 * (double)this->_padding_);
    if ((local_108 != (int)local_108) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FNavLocalGridData *)(*pcVar5)();
      return pFVar11;
    }
    local_108 = (longlong)(dVar2 * (double)this->_padding_);
    if ((local_108 != (int)local_108) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FNavLocalGridData *)(*pcVar5)();
      return pFVar11;
    }
    local_108 = (longlong)(dVar2 * (double)this->_padding_);
    if ((local_108 != (int)local_108) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FNavLocalGridData *)(*pcVar5)();
      return pFVar11;
    }
    local_f4 = 0;
    if (0 < (int)this->_padding_) {
      local_e8 = 0;
      do {
        bVar7 = false;
        uVar18 = *(uint *)((longlong)&this->_padding_ + 4);
        uVar13 = local_f4 % uVar18;
        uVar20 = 0;
        iVar17 = (this->OriginWorldCoord).field0_0x0._s_0.X + local_f4 / uVar18;
        iVar12 = (this->OriginWorldCoord).field0_0x0._s_0.Y;
        iVar9 = param_1->ArrayNum;
        local_f8 = iVar17;
        if (0 < iVar9) {
          lVar16 = 0;
          do {
            this = local_e0;
            if (bVar7) break;
            uVar18 = 0;
            if ((int)uVar20 < iVar9) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if (uVar18 == 0) {
              local_100 = (longlong)iVar9;
              local_108 = (longlong)(int)uVar20;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                pFVar11 = (FNavLocalGridData *)(*pcVar5)();
                return pFVar11;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            iVar14 = iVar17 - *(int *)(pFVar4 + lVar16 + 0xa4);
            iVar9 = (iVar12 + uVar13) - *(int *)(pFVar4 + lVar16 + 0xa8);
            if ((((-1 < iVar14) && (iVar14 < *(int *)(pFVar4 + lVar16 + 0x70))) && (-1 < iVar9)) &&
               ((iVar9 < *(int *)(pFVar4 + lVar16 + 0x74) &&
                (uVar18 = *(int *)(pFVar4 + lVar16 + 0x74) * iVar14 + iVar9, iVar17 = local_f8,
                uVar18 != 0xffffffff)))) {
              local_100 = (longlong)*(int *)(pFVar4 + lVar16 + 0x80);
              uVar10 = 0;
              if ((int)uVar18 < *(int *)(pFVar4 + lVar16 + 0x80)) {
                uVar10 = ~uVar18 >> 0x1f;
              }
              if (uVar10 == 0) {
                local_108 = (longlong)(int)uVar18;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  pFVar11 = (FNavLocalGridData *)(*pcVar5)();
                  return pFVar11;
                }
              }
              bVar7 = *(char *)((longlong)(int)uVar18 + *(longlong *)(pFVar4 + lVar16 + 0x78)) !=
                      '\0';
              iVar17 = local_f8;
            }
            iVar9 = param_1->ArrayNum;
            uVar20 = uVar20 + 1;
            lVar16 = lVar16 + 0xb0;
            this = local_e0;
          } while ((int)uVar20 < iVar9);
        }
        lVar16 = local_e8;
        uVar18 = local_f4;
        iVar12 = (int)this->_padding_;
        local_100 = (longlong)iVar12;
        uVar13 = 0;
        if ((int)local_f4 < iVar12) {
          uVar13 = ~local_f4 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_108 = (longlong)(int)local_f4;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            pFVar11 = (FNavLocalGridData *)(*pcVar5)();
            return pFVar11;
          }
        }
        local_f4 = uVar18 + 1;
        *(bool *)(lVar16 + this->_padding_) = bVar7;
        local_e8 = lVar16 + 1;
      } while ((int)local_f4 < (int)this->_padding_);
    }
  }
  return this;
}

// FindPath @ 146fa9110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FNavLocalGridData::FindPath
          (FNavLocalGridData *this,TIntVector3<int> *param_1,TIntVector3<int> *param_2,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 auStackY_188 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  FGridPathFilter local_148;
  FGraphAStarDefaultNode<FNavLocalGridData> local_140;
  FGraphAStarDefaultNode<FNavLocalGridData> local_118;
  undefined1 local_e8 [8];
  undefined1 local_e0 [80];
  void *local_90;
  undefined4 local_88;
  FNodeSorter local_80;
  ForAnyElementType local_78;
  longlong local_70;
  TArray<FGraphAStarDefaultNode<FNavLocalGridData>,FRangeChecklessAllocator<0>_> *local_68;
  FNodeSorter *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar5 = (param_1->field0_0x0)._s_0.Y;
  iVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((iVar1 < 0) || ((int)this->_padding_ <= iVar1)) || (iVar5 < 0)) ||
     (iVar4 = *(int *)((longlong)&this->_padding_ + 4), iVar4 <= iVar5)) {
    iVar5 = -1;
  }
  else {
    iVar5 = iVar4 * iVar1 + iVar5;
  }
  iVar1 = (param_2->field0_0x0)._s_0.X;
  iVar4 = (param_2->field0_0x0)._s_0.Y;
  if (((iVar1 < 0) || ((int)this->_padding_ <= iVar1)) ||
     ((iVar4 < 0 || (iVar2 = *(int *)((longlong)&this->_padding_ + 4), iVar2 <= iVar4)))) {
    iVar4 = -1;
  }
  else {
    iVar4 = iVar2 * iVar1 + iVar4;
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_e8 = (undefined1  [8])this;
  FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
  ::FNodePool::FNodePool((FNodePool *)local_e0);
  local_80.NodePool =
       (TArray<FGraphAStarDefaultNode<FNavLocalGridData>,FRangeChecklessAllocator<0>_> *)local_e0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_68 = (TArray<FGraphAStarDefaultNode<FNavLocalGridData>,FRangeChecklessAllocator<0>_> *)
             local_e0;
  local_70 = 0;
  local_60 = &local_80;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x40,&local_78,0,(int *)((longlong)&local_70 + 4));
  if ((int)local_e0._12_4_ < 0x40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0x40,(ForAnyElementType *)local_e0,local_e0._8_4_,(int *)(local_e0 + 0xc));
  }
  local_140.bIsClosed = '\0';
  local_140.bIsOpened = '\0';
  local_118.bIsClosed = '\0';
  local_118.bIsOpened = '\0';
  local_140.TraversalCost = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_140.TotalCost = _UNK_150a9e648;
  local_118.TraversalCost = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_118.TotalCost = _UNK_150a9e648;
  local_140.ParentRef = -1;
  local_140.SearchNodeIndex = -1;
  local_140.ParentNodeIndex = -1;
  local_118.ParentRef = -1;
  local_118.SearchNodeIndex = -1;
  local_118.ParentNodeIndex = -1;
  local_148.GridRef = this;
  local_140.NodeRef = iVar4;
  local_118.NodeRef = iVar5;
  FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
  ::FindPath<FGridHelpers::FGridPathFilter,TArray<int,TSizedDefaultAllocator<32>_>_>
            ((FGraphAStar<FNavLocalGridData,FGraphAStarDefaultPolicy,FGraphAStarDefaultNode<FNavLocalGridData>,0>
              *)local_e8,&local_118,&local_140,&local_148,&local_158);
  if (local_158.ArrayNum == 0) {
    bVar3 = false;
  }
  else {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    PostProcessPath(this,param_1,param_2,&local_158,param_3);
    bVar3 = true;
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FRangeChecklessAllocator<0>,TSizedInlineAllocator<4,32,FRangeChecklessAllocator<0>_>_>_>
              *)(local_e0 + 0x10));
  if ((FScriptContainerElement *)local_e0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e0._0_8_);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return bVar3;
}

// FindPathForMovingAgent @ 146fa97a0

void __thiscall
FNavLocalGridData::FindPathForMovingAgent
          (FNavLocalGridData *this,FNavigationPath *param_1,TVector<double> *param_2,int param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,int *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  float fVar12;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  TVector<double> *pTVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  undefined4 uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  double dVar28;
  float local_res8 [2];
  double local_res10;
  TVector<double> *local_res18;
  int local_res20;
  TIntVector3<int>_u_0 local_168;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_158;
  TIntVector3<int>_u_0 local_148;
  undefined8 local_138;
  int local_130;
  undefined8 local_128;
  double local_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  TIntVector3<int>_u_0 local_e0;
  TVector<double>_u_0 local_d0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double> local_a0 [4];
  
  pTVar13 = param_4;
  local_res18 = param_2;
  TSimpleCellGrid<unsigned_char,255>::GetCellCoordsUnsafe
            ((TSimpleCellGrid<unsigned_char,255> *)this,(TIntVector3<int> *)&local_e0._s_0,param_2);
  uVar24 = *(int *)((longlong)&this->_padding_ + 4) + -1;
  local_168._s_0.Z = 0;
  if (local_e0._s_0.Y < (int)uVar24) {
    uVar24 = local_e0._s_0.Y;
  }
  uVar18 = (int)this->_padding_ + -1;
  if (local_e0._s_0.X < (int)uVar18) {
    uVar18 = local_e0._s_0.X;
  }
  local_168._s_0.X = 0;
  if (0 < (int)uVar18) {
    local_168._s_0.X = uVar18;
  }
  local_168._s_0.Y = 0;
  if (0 < (int)uVar24) {
    local_168._s_0.Y = uVar24;
  }
  iVar19 = (param_1->PathPoints).ArrayNum;
  if (iVar19 < 1) {
    pTVar20 = &FNavigationSystem::InvalidLocation;
  }
  else {
    uVar27 = 0;
    if ((int)(iVar19 - 1U) < iVar19) {
      uVar27 = ~(iVar19 - 1U) >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar20 = (TVector<double> *)
              ((param_1->PathPoints).AllocatorInstance.Data +
              (longlong)((param_1->PathPoints).ArrayNum + -1) * 0x30);
  }
  dVar2 = *(double *)pTVar20;
  local_118 = *(double *)((longlong)pTVar20 + 0x10);
  lVar23 = (longlong)
           ((*(double *)((longlong)pTVar20 + 8) - (double)this->_padding_) /
           (double)*(float *)&this->_padding_);
  iVar19 = (int)lVar23;
  if ((lVar23 != iVar19) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar15))
  {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar23 = (longlong)((dVar2 - (double)this->_padding_) / (double)*(float *)&this->_padding_);
  iVar25 = (int)lVar23;
  if ((lVar23 != iVar25) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IntFitsIn<OutType>(In)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                          ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar15))
  {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar21 = *(int *)((longlong)&this->_padding_ + 4) + -1;
  local_148._s_0.Z = 0;
  if (iVar19 < iVar21) {
    iVar21 = iVar19;
  }
  iVar19 = (int)this->_padding_ + -1;
  if (iVar25 < iVar19) {
    iVar19 = iVar25;
  }
  local_148._s_0.X = 0;
  if (0 < iVar19) {
    local_148._s_0.X = iVar19;
  }
  local_148._s_0.Y = 0;
  if (0 < iVar21) {
    local_148._s_0.Y = iVar21;
  }
  uVar27 = param_3 + 1;
  if ((int)uVar27 < (param_1->PathPoints).ArrayNum) {
    lVar23 = (longlong)(int)uVar27 * 0x30;
    do {
      uVar22 = 0;
      if ((int)uVar27 < (param_1->PathPoints).ArrayNum) {
        uVar22 = ~uVar27 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (param_1->PathPoints).AllocatorInstance.Data;
      dVar2 = *(double *)(pFVar6 + lVar23);
      if ((((dVar2 < (double)this->_padding_ || dVar2 == (double)this->_padding_) ||
           ((double)this->_padding_ <= dVar2)) ||
          (dVar2 = *(double *)(pFVar6 + lVar23 + 8),
          dVar2 < (double)this->_padding_ || dVar2 == (double)this->_padding_)) ||
         ((((double)this->_padding_ <= dVar2 ||
           (dVar2 = *(double *)(pFVar6 + lVar23 + 0x10),
           dVar2 < (double)this->_padding_ || dVar2 == (double)this->_padding_)) ||
          ((double)this->_padding_ <= dVar2)))) {
        uVar22 = uVar27 - 1;
        uVar17 = 0;
        if ((int)uVar22 < (param_1->PathPoints).ArrayNum) {
          uVar17 = ~uVar22 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (param_1->PathPoints).AllocatorInstance.Data;
        uVar17 = 0;
        if ((int)uVar27 < (param_1->PathPoints).ArrayNum) {
          uVar17 = ~uVar27 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FMath::LineExtentBoxIntersection
                  ((TBox<double> *)&this->_padding_,
                   (TVector<double> *)
                   ((param_1->PathPoints).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x30),
                   (TVector<double> *)(pFVar6 + (longlong)(int)uVar22 * 0x30),
                   &UE::Math::TVector<double>::ZeroVector,(TVector<double> *)&local_d0._s_0,local_a0
                   ,local_res8);
        lVar23 = (longlong)
                 ((local_d0._s_0.Y - (double)this->_padding_) / (double)*(float *)&this->_padding_);
        iVar19 = (int)lVar23;
        if ((lVar23 != iVar19) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar23 = (longlong)
                 ((local_d0._s_0.X - (double)this->_padding_) / (double)*(float *)&this->_padding_);
        iVar25 = (int)lVar23;
        if ((lVar23 != iVar25) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IntFitsIn<OutType>(In)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
           bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar21 = *(int *)((longlong)&this->_padding_ + 4) + -1;
        if (iVar19 < iVar21) {
          iVar21 = iVar19;
        }
        iVar19 = (int)this->_padding_ + -1;
        if (iVar25 < iVar19) {
          iVar19 = iVar25;
        }
        local_148._s_0.X = 0;
        if (0 < iVar19) {
          local_148._s_0.X = iVar19;
        }
        local_148._s_0.Y = 0;
        if (0 < iVar21) {
          local_148._s_0.Y = iVar21;
        }
        break;
      }
      uVar27 = uVar27 + 1;
      lVar23 = lVar23 + 0x30;
    } while ((int)uVar27 < (param_1->PathPoints).ArrayNum);
  }
  pTVar20 = &FNavigationSystem::InvalidLocation;
  local_138 = local_168._0_8_;
  local_130 = local_168._s_0.Z;
  if ((((-1 < local_168._s_0.X) && (local_168._s_0.X < (int)this->_padding_)) &&
      (-1 < (longlong)local_168._0_8_)) &&
     (iVar19 = *(int *)((longlong)&this->_padding_ + 4), local_168._s_0.Y < iVar19)) {
    bVar15 = false;
    iVar19 = iVar19 * local_168._s_0.X + local_168._s_0.Y;
    if ((iVar19 != -1) && (*(char *)((longlong)iVar19 + this->_padding_) == '\0'))
    goto LAB_146fa9f29;
  }
  iVar19 = (param_1->PathPoints).ArrayNum;
  if (0 < iVar19) {
    uVar22 = 0;
    if ((int)(iVar19 - 1U) < iVar19) {
      uVar22 = ~(iVar19 - 1U) >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar20 = (TVector<double> *)
              ((param_1->PathPoints).AllocatorInstance.Data +
              (longlong)((param_1->PathPoints).ArrayNum + -1) * 0x30);
  }
  dVar2 = __real_3fb1111111111111;
  local_b8 = *(double *)pTVar20;
  dStack_b0 = *(double *)((longlong)pTVar20 + 8);
  local_a8 = *(double *)((longlong)pTVar20 + 0x10);
  uVar9 = (local_res18->field0_0x0)._s_0.X - local_b8;
  dVar28 = (local_res18->field0_0x0)._s_0.Z - local_a8;
  uVar10 = (local_res18->field0_0x0)._s_0.Y - dStack_b0;
  dVar28 = (double)uVar10 * (double)uVar10 + (double)uVar9 * (double)uVar9 + dVar28 * dVar28;
  if (dVar28 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar28) {
      local_res10 = __real_3ff0000000000000 / SQRT(dVar28);
      uVar9 = (double)uVar9 * local_res10;
      uVar10 = (double)uVar10 * local_res10;
    }
    else {
      local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
  }
  iVar25 = 1;
  dVar28 = (double)uVar9 * __real_4062c00000000000;
  dVar11 = (double)uVar10 * __real_4062c00000000000;
  local_128 = local_168._0_8_;
  uVar14 = local_128;
  param_4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
            ((ulonglong)local_168._0_8_ >> 0x20);
  local_128._0_4_ = (int)local_168._0_8_;
  local_res20 = (int)local_128;
  uVar24 = local_168._s_0.Z;
  iVar19 = (int)local_128;
  local_128 = uVar14;
  do {
    dVar3 = (local_res18->field0_0x0)._s_0.X;
    lVar23 = (longlong)
             ((((double)iVar25 * dVar11 * dVar2 + (local_res18->field0_0x0)._s_0.Y) -
              (double)this->_padding_) / (double)*(float *)&this->_padding_);
    uVar22 = (uint)lVar23;
    if ((lVar23 != (int)uVar22) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
       iVar19 = local_res20, bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar23 = (longlong)
             ((((double)iVar25 * dVar28 * dVar2 + dVar3) - (double)this->_padding_) /
             (double)*(float *)&this->_padding_);
    iVar21 = (int)lVar23;
    if ((lVar23 != iVar21) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IntFitsIn<OutType>(In)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                            ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
       iVar19 = local_res20, bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar4 = *(int *)((longlong)&this->_padding_ + 4);
    iVar5 = (int)this->_padding_;
    iVar26 = iVar5 + -1;
    uVar17 = iVar4 - 1U;
    if ((int)uVar22 < (int)(iVar4 - 1U)) {
      uVar17 = uVar22;
    }
    if (iVar21 < iVar26) {
      iVar26 = iVar21;
    }
    iVar21 = 0;
    if (0 < iVar26) {
      iVar21 = iVar26;
    }
    uVar22 = 0;
    if (0 < (int)uVar17) {
      uVar22 = uVar17;
    }
    local_128 = CONCAT44(uVar22,iVar21);
    if (((iVar21 != iVar19) || (uVar22 != (uint)param_4)) || (uVar24 != 0)) {
      iVar26 = 0;
      param_4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar22;
      uVar24 = 0;
      iVar19 = iVar21;
      local_res20 = iVar21;
      if ((((-1 < iVar21) && (iVar21 < iVar5)) &&
          ((uVar24 = iVar26, -1 < (int)uVar22 &&
           (((int)uVar22 < iVar4 && (iVar21 = iVar4 * iVar21 + uVar22, iVar21 != -1)))))) &&
         (*(char *)((longlong)iVar21 + this->_padding_) == '\0')) {
        bVar15 = true;
        local_168._0_8_ = local_128;
        local_168._s_0.Z = 0;
        goto LAB_146fa9f29;
      }
    }
    iVar25 = iVar25 + 1;
  } while (iVar25 < 0xf);
  bVar15 = false;
LAB_146fa9f29:
  piVar1 = &pTVar13->ArrayMax;
  *param_5 = uVar27 - 1;
  pTVar13->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar13->AllocatorInstance,0,piVar1);
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  bVar16 = FindPath(this,(TIntVector3<int> *)&local_168._s_0,(TIntVector3<int> *)&local_148._s_0,
                    &local_158);
  fVar12 = __real_3f000000;
  if (bVar16) {
    if (bVar15) {
      uVar27 = (int)local_138 * *(int *)((longlong)&this->_padding_ + 4) + local_138._4_4_;
      dVar2 = (double)(((float)(int)local_138 + __real_3f000000) * *(float *)&this->_padding_) +
              (double)this->_padding_;
      uVar22 = 0;
      if ((int)uVar27 < (this->CellZ).ArrayNum) {
        uVar22 = ~uVar27 >> 0x1f;
      }
      dVar28 = (double)(((float)local_138._4_4_ + __real_3f000000) * *(float *)&this->_padding_) +
               (double)this->_padding_;
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (pTVar13->AllocatorInstance).Data;
      local_100 = *(undefined8 *)((this->CellZ).AllocatorInstance.Data + (longlong)(int)uVar27 * 8);
      local_110 = dVar2;
      dStack_108 = dVar28;
      if (((pFVar6 <= (FScriptContainerElement *)&local_110) &&
          ((FScriptContainerElement *)&local_110 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar19 = pTVar13->ArrayNum;
      if (iVar19 == *piVar1) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar13->AllocatorInstance,piVar1);
      }
      pTVar13->ArrayNum = iVar19 + 1;
      pFVar7 = (pTVar13->AllocatorInstance).Data;
      pFVar6 = pFVar7 + (longlong)iVar19 * 0x18;
      *(double *)pFVar6 = local_110;
      *(double *)(pFVar6 + 8) = dStack_108;
      *(undefined8 *)(pFVar7 + (longlong)iVar19 * 0x18 + 0x10) = local_100;
    }
    uVar27 = 0;
    if (0 < local_158.ArrayNum) {
      lVar23 = 0;
      do {
        uVar22 = 0;
        if ((int)uVar27 < local_158.ArrayNum) {
          uVar22 = ~uVar27 >> 0x1f;
        }
        iVar19 = local_158.ArrayNum;
        if (uVar22 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar19 = local_158.ArrayNum;
        }
        iVar25 = *(int *)(local_158.AllocatorInstance.Data + lVar23 + 4);
        uVar22 = 0;
        if ((int)uVar27 < iVar19) {
          uVar22 = ~uVar27 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar22 = *(int *)(local_158.AllocatorInstance.Data + lVar23) *
                 *(int *)((longlong)&this->_padding_ + 4) + iVar25;
        uVar17 = 0;
        if ((int)uVar22 < (this->CellZ).ArrayNum) {
          uVar17 = ~uVar22 >> 0x1f;
        }
        dVar2 = (double)(((float)*(int *)(local_158.AllocatorInstance.Data + lVar23) + fVar12) *
                        *(float *)&this->_padding_) + (double)this->_padding_;
        dVar28 = (double)(((float)iVar25 + fVar12) * *(float *)&this->_padding_) +
                 (double)this->_padding_;
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pTVar13->AllocatorInstance).Data;
        local_e8 = *(undefined8 *)((this->CellZ).AllocatorInstance.Data + (longlong)(int)uVar22 * 8)
        ;
        local_f8 = dVar2;
        dStack_f0 = dVar28;
        if (((pFVar6 <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 < pFVar6 + (longlong)pTVar13->ArrayMax * 0x18)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar19 = pTVar13->ArrayNum;
        if (iVar19 == pTVar13->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar13->AllocatorInstance,&pTVar13->ArrayMax);
          pTVar13->ArrayNum = iVar19;
        }
        uVar27 = uVar27 + 1;
        pTVar13->ArrayNum = iVar19 + 1;
        lVar23 = lVar23 + 0xc;
        pFVar7 = (pTVar13->AllocatorInstance).Data;
        pFVar6 = pFVar7 + (longlong)iVar19 * 0x18;
        *(double *)pFVar6 = local_f8;
        *(double *)(pFVar6 + 8) = dStack_f0;
        *(undefined8 *)(pFVar7 + (longlong)iVar19 * 0x18 + 0x10) = local_e8;
      } while ((int)uVar27 < local_158.ArrayNum);
    }
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return;
}

// GetCellIndexFromGlobalCoords2D @ 146fac4d0

int __thiscall
FNavLocalGridData::GetCellIndexFromGlobalCoords2D(FNavLocalGridData *this,TIntVector3<int> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (param_1->field0_0x0)._s_0.X - (this->OriginWorldCoord).field0_0x0._s_0.X;
  if ((((-1 < iVar3) && (iVar3 < (int)this->_padding_)) &&
      (iVar2 = (param_1->field0_0x0)._s_0.Y - (this->OriginWorldCoord).field0_0x0._s_0.Y, -1 < iVar2
      )) && (iVar1 = *(int *)((longlong)&this->_padding_ + 4), iVar2 < iVar1)) {
    return iVar1 * iVar3 + iVar2;
  }
  return -1;
}

// GetNeighbour @ 146fb2d00

int __thiscall FNavLocalGridData::GetNeighbour(FNavLocalGridData *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)((longlong)&this->_padding_ + 4);
  iVar3 = FGridHelpers::Directions[param_2].field0_0x0._s_0.Y + (uint)param_1 % uVar1;
  iVar2 = FGridHelpers::Directions[param_2].field0_0x0._s_0.X + (uint)param_1 / uVar1;
  if ((((-1 < iVar2) && (iVar2 < (int)this->_padding_)) && (-1 < iVar3)) && (iVar3 < (int)uVar1)) {
    return iVar3 + uVar1 * iVar2;
  }
  return -1;
}

// GetProjectedCellCenter @ 146fb44d0

TVector<double> * __thiscall
FNavLocalGridData::GetProjectedCellCenter
          (FNavLocalGridData *this,TVector<double> *__return_storage_ptr__,int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  float fVar11;
  float fVar12;
  
  fVar11 = (float)param_1 + __real_3f000000;
  uVar1 = param_1 * *(int *)((longlong)&this->_padding_ + 4) + param_2;
  fVar2 = *(float *)&this->_padding_;
  dVar4 = (double)this->_padding_;
  fVar12 = (float)param_2 + __real_3f000000;
  fVar3 = *(float *)&this->_padding_;
  dVar5 = (double)this->_padding_;
  uVar9 = 0;
  if ((int)uVar1 < (this->CellZ).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar10 = (TVector<double> *)(*pcVar7)();
      return pTVar10;
    }
  }
  pFVar6 = (this->CellZ).AllocatorInstance.Data;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar11 * fVar2) + dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar12 * fVar3) + dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = *(double *)(pFVar6 + (longlong)(int)uVar1 * 8);
  return __return_storage_ptr__;
}

// IsLineObstructed @ 146fb99a0

bool __thiscall
FNavLocalGridData::IsLineObstructed
          (FNavLocalGridData *this,TIntVector3<int> *param_1,TIntVector3<int> *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  iVar11 = (param_1->field0_0x0)._s_0.X;
  iVar5 = (param_1->field0_0x0)._s_0.Y;
  lVar2 = this->_padding_;
  iVar12 = iVar1 * iVar11;
  if (*(char *)((iVar12 + iVar5) + lVar2) == '\0') {
    iVar7 = (param_2->field0_0x0)._s_0.X;
    iVar6 = (param_2->field0_0x0)._s_0.Y;
    iVar9 = -1;
    if (iVar11 < iVar7) {
      iVar9 = 1;
    }
    iVar3 = -1;
    if (iVar5 < iVar6) {
      iVar3 = 1;
    }
    iVar13 = -(iVar7 - iVar11);
    if (iVar13 < 0) {
      iVar13 = iVar7 - iVar11;
    }
    iVar10 = iVar13 * 2;
    iVar8 = -(iVar6 - iVar5);
    if (iVar8 < 0) {
      iVar8 = iVar6 - iVar5;
    }
    iVar4 = iVar8 * 2;
    if (iVar4 < iVar10) {
      iVar6 = -(iVar10 >> 1);
      if (iVar11 == iVar7) {
        return false;
      }
      while( true ) {
        iVar10 = iVar4 + iVar6;
        iVar6 = iVar5 + iVar3;
        if (iVar10 < 0) {
          iVar6 = iVar5;
        }
        iVar5 = iVar6;
        iVar12 = iVar12 + iVar1 * iVar9;
        iVar11 = iVar11 + iVar9;
        iVar6 = iVar10 + iVar13 * -2;
        if (iVar10 < 0) {
          iVar6 = iVar10;
        }
        if (*(char *)((iVar12 + iVar5) + lVar2) != '\0') break;
        if (iVar11 == iVar7) {
          return false;
        }
      }
    }
    else {
      iVar12 = -(iVar4 >> 1);
      do {
        if (iVar5 == iVar6) {
          return false;
        }
        iVar13 = iVar10 + iVar12;
        iVar7 = iVar11 + iVar9;
        if (iVar13 < 0) {
          iVar7 = iVar11;
        }
        iVar5 = iVar5 + iVar3;
        iVar12 = iVar13 + iVar8 * -2;
        if (iVar13 < 0) {
          iVar12 = iVar13;
        }
        iVar11 = iVar7;
      } while (*(char *)((iVar7 * iVar1 + iVar5) + lVar2) == '\0');
    }
  }
  return true;
}

// MarkBoxObstacle @ 146fbbaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNavLocalGridData::MarkBoxObstacle
          (FNavLocalGridData *this,TVector<double> *param_1,TVector<double> *param_2,
          TQuat<double> *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar32;
  undefined1 auVar31 [16];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  TVector2<double>_u_0 local_158;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_e8;
  undefined1 local_e0 [16];
  TVector<double>_u_0 local_c8;
  TVector<double> local_a8;
  TVector<double> local_90;
  TVector<double> local_78;
  TVector<double> local_60 [2];
  
  dVar25 = param_3->X - UE::Math::TQuat<double>::Identity.X;
  dVar26 = param_3->Y - UE::Math::TQuat<double>::Identity.Y;
  dVar29 = param_3->X + UE::Math::TQuat<double>::Identity.X;
  dVar32 = param_3->Y + UE::Math::TQuat<double>::Identity.Y;
  local_e8 = __real_3e45798ee0000000;
  dVar23 = param_3->Z - UE::Math::TQuat<double>::Identity.Z;
  dVar24 = param_3->W - UE::Math::TQuat<double>::Identity.W;
  dVar5 = param_3->Z + UE::Math::TQuat<double>::Identity.Z;
  dVar30 = param_3->W + UE::Math::TQuat<double>::Identity.W;
  uVar27 = SUB84(__real_3e45798ee0000000,0);
  uVar28 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  auVar17._8_4_ = uVar27;
  auVar17._0_8_ = __real_3e45798ee0000000;
  auVar17._12_4_ = uVar28;
  auVar31._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = SUB84(dVar32,0) & _UNK_15061cc88;
  auVar31._12_4_ = (uint)((ulonglong)dVar32 >> 0x20) & _UNK_15061cc8c;
  auVar18._8_8_ =
       -(ulonglong)
        (auVar17._8_8_ <
        (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c,
                         SUB84(dVar24,0) & _UNK_15061cc88));
  auVar18._0_8_ =
       -(ulonglong)
        (__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  iVar10 = movmskpd((int)this,auVar18);
  auVar19._8_4_ = uVar27;
  auVar19._0_8_ = __real_3e45798ee0000000;
  auVar19._12_4_ = uVar28;
  auVar20._8_8_ =
       -(ulonglong)
        (auVar19._8_8_ <
        (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) & _UNK_15061cc8c,
                         SUB84(dVar26,0) & _UNK_15061cc88));
  auVar20._0_8_ =
       -(ulonglong)
        (__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar25,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  uVar8 = movmskpd((int)&stack0x00000000,auVar20);
  uVar11 = iVar10 << 2 | uVar8;
  if (uVar11 != 0) {
    auVar21._8_4_ = uVar27;
    auVar21._0_8_ = __real_3e45798ee0000000;
    auVar21._12_4_ = uVar28;
    auVar22._8_8_ =
         -(ulonglong)
          (auVar21._8_8_ <
          (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar30,0) & _UNK_15061cc88));
    auVar22._0_8_ =
         -(ulonglong)
          (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar11 = movmskpd(uVar11,auVar22);
    lVar16 = -(ulonglong)(__real_3e45798ee0000000 < auVar31._8_8_);
    auVar3._8_4_ = (int)lVar16;
    auVar3._0_8_ = -(ulonglong)(__real_3e45798ee0000000 < auVar31._0_8_);
    auVar3._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    iVar10 = movmskpd(uVar8,auVar3);
    if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
      local_148._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_148._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      local_148._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      pTVar9 = UE::Math::TQuat<double>::RotateVector
                         (param_3,&local_a8,(TVector<double> *)&local_148._s_0);
      dVar5 = (pTVar9->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
      dVar30 = (pTVar9->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_198.AllocatorInstance,&local_198.ArrayMax);
      uVar11 = __xmm_80000000000000008000000000000000._4_4_;
      uVar8 = (uint)__xmm_80000000000000008000000000000000;
      uVar27 = SUB84(dVar30,0);
      uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
      local_e0._8_4_ = uVar27;
      local_e0._0_8_ = dVar5;
      local_e0._12_4_ = uVar28;
      auVar4._8_4_ = uVar27;
      auVar4._0_8_ = dVar5;
      auVar4._12_4_ = uVar28;
      *(undefined1 (*) [16])(local_198.AllocatorInstance.Data + (longlong)iVar10 * 0x10) = auVar4;
      local_128._s_0.X =
           (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) ^ uVar11,
                            (uint)*(undefined8 *)&param_2->field0_0x0 ^ uVar8);
      local_128._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_128._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_198.ArrayNum = iVar10 + 1;
      pTVar9 = UE::Math::TQuat<double>::RotateVector
                         (param_3,&local_90,(TVector<double> *)&local_128._s_0);
      local_188 = (param_1->field0_0x0)._s_0.X + (pTVar9->field0_0x0)._s_0.X;
      dStack_180 = (pTVar9->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      if (((local_198.AllocatorInstance.Data <= (FScriptContainerElement *)&local_188) &&
          ((FScriptContainerElement *)&local_188 <
           local_198.AllocatorInstance.Data + (longlong)local_198.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_198.ArrayNum == local_198.ArrayMax) {
        local_198.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_198.AllocatorInstance,&local_198.ArrayMax);
      }
      *(double *)(local_198.AllocatorInstance.Data + (longlong)local_198.ArrayNum * 0x10) =
           local_188;
      *(double *)(local_198.AllocatorInstance.Data + (longlong)local_198.ArrayNum * 0x10 + 8) =
           dStack_180;
      local_c8._0_4_ = *(uint *)&param_2->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
      local_c8._4_4_ =
           *(uint *)((longlong)&param_2->field0_0x0 + 4) ^
           __xmm_80000000000000008000000000000000._4_4_;
      local_c8._8_4_ = *(uint *)((longlong)&param_2->field0_0x0 + 8) ^ _UNK_15066df78;
      local_c8._12_4_ = *(uint *)((longlong)&param_2->field0_0x0 + 0xc) ^ _UNK_15066df7c;
      local_c8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_198.ArrayNum = local_198.ArrayNum + 1;
      pTVar9 = UE::Math::TQuat<double>::RotateVector
                         (param_3,&local_78,(TVector<double> *)&local_c8._s_0);
      dStack_170 = (pTVar9->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      local_178 = (pTVar9->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
      if (((local_198.AllocatorInstance.Data <= (FScriptContainerElement *)&local_178) &&
          ((FScriptContainerElement *)&local_178 <
           local_198.AllocatorInstance.Data + (longlong)local_198.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_198.ArrayNum == local_198.ArrayMax) {
        local_198.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_198.AllocatorInstance,&local_198.ArrayMax);
      }
      *(double *)(local_198.AllocatorInstance.Data + (longlong)local_198.ArrayNum * 0x10) =
           local_178;
      *(double *)(local_198.AllocatorInstance.Data + (longlong)local_198.ArrayNum * 0x10 + 8) =
           dStack_170;
      local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
      uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
      local_108._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar11,(uint)uVar1 ^ uVar8);
      local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_198.ArrayNum = local_198.ArrayNum + 1;
      pTVar9 = UE::Math::TQuat<double>::RotateVector
                         (param_3,local_60,(TVector<double> *)&local_108._s_0);
      local_168 = (param_1->field0_0x0)._s_0.X + (pTVar9->field0_0x0)._s_0.X;
      dStack_160 = (pTVar9->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      if (((local_198.AllocatorInstance.Data <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 <
           local_198.AllocatorInstance.Data + (longlong)local_198.ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_198.ArrayNum == local_198.ArrayMax) {
        local_198.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_198.AllocatorInstance,&local_198.ArrayMax);
      }
      iVar10 = 0;
      lVar16 = (longlong)local_198.ArrayNum;
      local_198.ArrayNum = local_198.ArrayNum + 1;
      *(double *)(local_198.AllocatorInstance.Data + lVar16 * 0x10) = local_168;
      *(double *)(local_198.AllocatorInstance.Data + lVar16 * 0x10 + 8) = dStack_160;
      fVar6 = __real_3f000000;
      if (0 < (int)this->_padding_) {
        do {
          iVar14 = 0;
          if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
            do {
              local_158._s_0.X =
                   (double)(((float)iVar10 + fVar6) * *(float *)&this->_padding_) +
                   (double)this->_padding_;
              local_158._s_0.Y =
                   (double)(((float)iVar14 + fVar6) * *(float *)&this->_padding_) +
                   (double)this->_padding_;
              bVar7 = FGeomTools2D::IsPointInPolygon((TVector2<double> *)&local_158._s_0,&local_198)
              ;
              if (bVar7) {
                uVar11 = iVar10 * *(int *)((longlong)&this->_padding_ + 4) + iVar14;
                uVar8 = 0;
                if ((int)uVar11 < (int)this->_padding_) {
                  uVar8 = ~uVar11 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                *(undefined1 *)((longlong)(int)uVar11 + this->_padding_) = 1;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((longlong)&this->_padding_ + 4));
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)this->_padding_);
      }
      if (local_198.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_198.AllocatorInstance.Data);
      return;
    }
  }
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar30 = (param_2->field0_0x0)._s_0.X;
  lVar16 = (longlong)
           ((((param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y) - (double)this->_padding_
            ) / (double)*(float *)&this->_padding_);
  iVar10 = (int)lVar16;
  if ((lVar16 != iVar10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar16 = (longlong)
           (((dVar5 - dVar30) - (double)this->_padding_) / (double)*(float *)&this->_padding_);
  iVar14 = (int)lVar16;
  if ((lVar16 != iVar14) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  dVar5 = (param_1->field0_0x0)._s_0.X;
  iVar12 = *(int *)((longlong)&this->_padding_ + 4) + -1;
  dVar30 = (param_2->field0_0x0)._s_0.X;
  if (iVar10 < iVar12) {
    iVar12 = iVar10;
  }
  iVar10 = (int)this->_padding_ + -1;
  if (iVar14 < iVar10) {
    iVar10 = iVar14;
  }
  iVar14 = 0;
  if (0 < iVar10) {
    iVar14 = iVar10;
  }
  iVar10 = 0;
  if (0 < iVar12) {
    iVar10 = iVar12;
  }
  lVar16 = (longlong)
           ((((param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y) - (double)this->_padding_
            ) / (double)*(float *)&this->_padding_);
  iVar12 = (int)lVar16;
  if ((lVar16 != iVar12) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar16 = (longlong)
           (((dVar5 + dVar30) - (double)this->_padding_) / (double)*(float *)&this->_padding_);
  iVar15 = (int)lVar16;
  if ((lVar16 != iVar15) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar13 = *(int *)((longlong)&this->_padding_ + 4) + -1;
  if (iVar12 < iVar13) {
    iVar13 = iVar12;
  }
  iVar12 = (int)this->_padding_ + -1;
  if (iVar15 < iVar12) {
    iVar12 = iVar15;
  }
  iVar15 = 0;
  if (0 < iVar12) {
    iVar15 = iVar12;
  }
  iVar12 = 0;
  if (0 < iVar13) {
    iVar12 = iVar13;
  }
  do {
    iVar13 = iVar10;
    if (iVar15 < iVar14) {
      return;
    }
    for (; iVar13 <= iVar12; iVar13 = iVar13 + 1) {
      uVar11 = iVar14 * *(int *)((longlong)&this->_padding_ + 4) + iVar13;
      uVar8 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined1 *)((longlong)(int)uVar11 + this->_padding_) = 1;
    }
    iVar14 = iVar14 + 1;
  } while( true );
}

// MarkCapsuleObstacle @ 146fbc2b0

void __thiscall
FNavLocalGridData::MarkCapsuleObstacle
          (FNavLocalGridData *this,TVector<double> *param_1,float param_2,float param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  
  fVar4 = __real_3f000000;
  uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar8 = 0;
  if (0 < (int)this->_padding_) {
    do {
      iVar6 = *(int *)((longlong)&this->_padding_ + 4);
      iVar10 = 0;
      if (0 < iVar6) {
        do {
          dVar12 = ((double)(*(float *)&this->_padding_ * ((float)iVar8 + fVar4)) +
                   (double)this->_padding_) - (param_1->field0_0x0)._s_0.X;
          dVar11 = ((double)(((float)iVar10 + fVar4) * *(float *)&this->_padding_) +
                   (double)this->_padding_) - (param_1->field0_0x0)._s_0.Y;
          if ((dVar11 * dVar11 + dVar12 * dVar12 < (double)(param_2 * param_2)) &&
             (dVar11 = (double)this->_padding_ - (param_1->field0_0x0)._s_0.Z,
             (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar3,SUB84(dVar11,0) & uVar2) <
             (double)param_3)) {
            uVar9 = iVar6 * iVar8 + iVar10;
            uVar7 = 0;
            if ((int)uVar9 < (int)this->_padding_) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            *(undefined1 *)((longlong)(int)uVar9 + this->_padding_) = 1;
          }
          iVar6 = *(int *)((longlong)&this->_padding_ + 4);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar6);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)this->_padding_);
  }
  return;
}

// MarkPointObstacle @ 146fbc470

void __thiscall
FNavLocalGridData::MarkPointObstacle(FNavLocalGridData *this,TVector<double> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TIntVector3<int>_u_0 local_18;
  
  TSimpleCellGrid<unsigned_char,255>::GetCellCoordsUnsafe
            ((TSimpleCellGrid<unsigned_char,255> *)this,(TIntVector3<int> *)&local_18._s_0,param_1);
  if ((((-1 < local_18._s_0.X) && (local_18._s_0.X < (int)this->_padding_)) &&
      (-1 < local_18._s_0.Y)) &&
     ((iVar1 = *(int *)((longlong)&this->_padding_ + 4), local_18._s_0.Y < iVar1 &&
      (uVar5 = iVar1 * local_18._s_0.X + local_18._s_0.Y, uVar5 != 0xffffffff)))) {
    uVar4 = 0;
    if ((int)uVar5 < (int)this->_padding_) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined1 *)((longlong)(int)uVar5 + this->_padding_) = 1;
  }
  return;
}

// PostProcessPath @ 146fc3410

void __thiscall
FNavLocalGridData::PostProcessPath
          (FNavLocalGridData *this,TIntVector3<int> *param_1,TIntVector3<int> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  
  uVar17 = param_3->ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  iVar6 = param_4->ArrayMax;
  piVar16 = &param_4->ArrayMax;
  if (iVar6 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,&param_4->AllocatorInstance,param_4->ArrayNum,piVar16);
    iVar6 = *piVar16;
  }
  pFVar1 = (param_4->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)iVar6 * 0xc)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_4->ArrayNum;
  if (iVar6 == *piVar16) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_4->AllocatorInstance,piVar16);
    param_4->ArrayNum = iVar6;
  }
  param_4->ArrayNum = iVar6 + 1;
  pFVar1 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + (longlong)iVar6 * 0xc) = *(undefined8 *)&param_1->field0_0x0;
  *(int *)(pFVar1 + (longlong)iVar6 * 0xc + 8) = (param_1->field0_0x0)._s_0.Z;
  iVar6 = param_3->ArrayNum;
  if (2 < iVar6) {
    local_48 = *(undefined8 *)&param_1->field0_0x0;
    local_40 = (param_1->field0_0x0)._s_0.Z;
    uVar17 = 2;
    local_50 = 8;
    do {
      uVar7 = 0;
      if ((int)uVar17 < iVar6) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
      lVar2 = this->_padding_;
      iVar6 = (uint)local_48 * uVar7;
      uVar13 = *(uint *)((param_3->AllocatorInstance).Data + local_50);
      uVar9 = uVar13 / uVar7;
      uVar13 = uVar13 % uVar7;
      if (*(char *)((int)(local_48._4_4_ + iVar6) + lVar2) == '\0') {
        iVar18 = -1;
        if ((int)(uint)local_48 < (int)uVar9) {
          iVar18 = 1;
        }
        iVar15 = -1;
        if ((int)local_48._4_4_ < (int)uVar13) {
          iVar15 = 1;
        }
        iVar11 = -(uVar9 - (uint)local_48);
        if (iVar11 < 0) {
          iVar11 = uVar9 - (uint)local_48;
        }
        iVar14 = iVar11 * 2;
        iVar10 = -(uVar13 - local_48._4_4_);
        if (iVar10 < 0) {
          iVar10 = uVar13 - local_48._4_4_;
        }
        iVar4 = iVar10 * 2;
        if (iVar14 <= iVar4) {
          iVar6 = -(iVar4 >> 1);
          uVar9 = (uint)local_48;
          uVar12 = local_48._4_4_;
          do {
            if (uVar12 == uVar13) goto LAB_146fc36b6;
            iVar11 = iVar14 + iVar6;
            uVar8 = uVar9 + iVar18;
            if (iVar11 < 0) {
              uVar8 = uVar9;
            }
            uVar12 = uVar12 + iVar15;
            iVar6 = iVar11 + iVar10 * -2;
            if (iVar11 < 0) {
              iVar6 = iVar11;
            }
            uVar9 = uVar8;
          } while (*(char *)((int)(uVar8 * uVar7 + uVar12) + lVar2) == '\0');
          goto LAB_146fc3837;
        }
        iVar10 = -(iVar14 >> 1);
        if ((uint)local_48 != uVar9) {
          uVar12 = (uint)local_48;
          uVar13 = local_48._4_4_;
          do {
            iVar14 = iVar4 + iVar10;
            uVar8 = uVar13 + iVar15;
            if (iVar14 < 0) {
              uVar8 = uVar13;
            }
            uVar13 = uVar8;
            iVar6 = iVar6 + uVar7 * iVar18;
            uVar12 = uVar12 + iVar18;
            iVar10 = iVar14 + iVar11 * -2;
            if (iVar14 < 0) {
              iVar10 = iVar14;
            }
            if (*(char *)((int)(iVar6 + uVar13) + lVar2) != '\0') goto LAB_146fc3837;
          } while (uVar12 != uVar9);
        }
      }
      else {
LAB_146fc3837:
        uVar7 = 0;
        if ((int)(uVar17 - 1) < param_3->ArrayNum) {
          uVar7 = -uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (param_4->AllocatorInstance).Data;
        uVar7 = *(uint *)((param_3->AllocatorInstance).Data + local_50 + -4);
        uVar13 = *(uint *)((longlong)&this->_padding_ + 4);
        local_40 = 0;
        local_48 = CONCAT44(uVar7 % uVar13,uVar7 / uVar13);
        if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)*piVar16 * 0xc)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_4->ArrayNum;
        if (iVar6 == *piVar16) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        pFVar1 = (param_4->AllocatorInstance).Data;
        *(undefined8 *)(pFVar1 + (longlong)iVar6 * 0xc) = local_48;
        *(int *)(pFVar1 + (longlong)iVar6 * 0xc + 8) = local_40;
      }
LAB_146fc36b6:
      local_50 = local_50 + 4;
      uVar17 = uVar17 + 1;
      iVar6 = param_3->ArrayNum;
    } while ((int)uVar17 < iVar6);
  }
  piVar16 = &param_4->ArrayMax;
  pFVar1 = (param_4->AllocatorInstance).Data;
  if (((pFVar1 <= param_2) && (param_2 < pFVar1 + (longlong)*piVar16 * 0xc)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = param_4->ArrayNum;
  if (iVar6 == *piVar16) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_4->AllocatorInstance,piVar16);
  }
  param_4->ArrayNum = iVar6 + 1;
  pFVar1 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar1 + (longlong)iVar6 * 0xc) = *(undefined8 *)&param_2->field0_0x0;
  *(int *)(pFVar1 + (longlong)iVar6 * 0xc + 8) = (param_2->field0_0x0)._s_0.Z;
  iVar6 = param_4->ArrayNum;
  if (*piVar16 != iVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar6,&param_4->AllocatorInstance,iVar6,piVar16);
  }
  return;
}

// ProjectCells @ 146fc4b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNavLocalGridData::ProjectCells(FNavLocalGridData *this,ANavigationData *param_1)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_178;
  int local_170;
  int iStack_16c;
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118;
  undefined4 uStack_117;
  undefined2 uStack_113;
  undefined1 uStack_111;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_f8;
  double dStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  uint local_88;
  undefined4 uStack_84;
  ulonglong local_78;
  
  dVar7 = __real_3fe0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  dVar19 = ((double)this->_padding_ - (double)this->_padding_) * __real_3fe0000000000000;
  if ((double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    local_150 = (param_1->NavDataConfig).DefaultQueryExtent.field0_0x0._s_0.Z;
    local_160 = *(undefined1 (*) [16])&(param_1->NavDataConfig).DefaultQueryExtent.field0_0x0;
    dVar19 = (double)(float)local_150;
    if ((__real_3fb0000000000000 <
         (double)CONCAT44((uint)((ulonglong)(dVar19 - local_150) >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar19 - local_150,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                         )) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FloatFitsIn<OutType>(In, Precision)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xc0,L"Loss of data caused by narrowing conversion"), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar20 = ((double)this->_padding_ + (double)this->_padding_) * dVar7;
    this->_padding_ = (longlong)(dVar20 - dVar19);
    this->_padding_ = (longlong)(dVar19 + dVar20);
  }
  fVar8 = __real_3f000000;
  uVar16 = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  iStack_16c = 0;
  uVar13 = uVar16;
  uVar15 = uVar16;
  if (0 < (int)this->_padding_) {
    do {
      uVar14 = (uint)uVar15;
      uVar10 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(char *)(uVar13 + this->_padding_) == '\0') {
        local_118 = 0;
        uStack_117 = 0;
        uStack_113 = 0;
        uStack_111 = 0;
        dStack_90 = 0.0;
        uVar5 = (ulonglong)*(uint *)((longlong)&this->_padding_ + 4);
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_88 = local_88 & 0xfffffffd | 5;
        local_128 = 0;
        uStack_124 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        local_f8 = (double)(((float)(int)(uVar15 / uVar5) + fVar8) * *(float *)&this->_padding_) +
                   (double)this->_padding_;
        lStack_e0 = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        dStack_f0 = (double)(((float)(int)(uVar15 % uVar5) + fVar8) * *(float *)&this->_padding_) +
                    (double)this->_padding_;
        local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_c0 = 0;
        uStack_bc = 0;
        uStack_b8 = 0;
        uStack_b4 = 0;
        local_e8 = this->_padding_;
        local_b0 = 0;
        local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (((local_178.Data <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 < local_178.Data + (longlong)iStack_16c * 0x78))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_170 == iStack_16c) {
          local_170 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x878,&local_178,&iStack_16c);
        }
        lVar12 = (longlong)local_170;
        local_170 = local_170 + 1;
        lVar12 = lVar12 * 0x78;
        *(double *)(local_178.Data + lVar12) = local_f8;
        *(double *)(local_178.Data + lVar12 + 8) = dStack_f0;
        *(longlong *)(local_178.Data + lVar12 + 0x10) = local_e8;
        *(longlong *)(local_178.Data + lVar12 + 0x10 + 8) = lStack_e0;
        *(undefined8 *)(local_178.Data + lVar12 + 0x20) = uStack_d8;
        *(undefined8 *)(local_178.Data + lVar12 + 0x20 + 8) = uStack_d0;
        *(undefined8 *)(local_178.Data + lVar12 + 0x30) = uStack_c8;
        *(ulonglong *)(local_178.Data + lVar12 + 0x30 + 8) = CONCAT44(uStack_bc,local_c0);
        *(ulonglong *)(local_178.Data + lVar12 + 0x40) = CONCAT44(uStack_b4,uStack_b8);
        *(undefined8 *)(local_178.Data + lVar12 + 0x40 + 8) = local_b0;
        *(double *)(local_178.Data + lVar12 + 0x50) = local_a8;
        *(double *)(local_178.Data + lVar12 + 0x50 + 8) = dStack_a0;
        *(double *)(local_178.Data + lVar12 + 0x60) = local_98;
        *(double *)(local_178.Data + lVar12 + 0x60 + 8) = dStack_90;
        *(ulonglong *)(local_178.Data + lVar12 + 0x70) = CONCAT44(uStack_84,local_88);
      }
      uVar13 = uVar13 + 1;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (int)this->_padding_);
  }
  dVar19 = (double)(*(float *)&this->_padding_ * __real_3e800000);
  local_160._8_4_ = SUB84(dVar19,0);
  local_160._0_8_ = dVar19;
  local_160._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  local_150 = ((double)this->_padding_ - (double)this->_padding_) * dVar7;
  local_110 = 0;
  uStack_108 = 0;
  (**(code **)(param_1->_padding_ + 0x890))(param_1,&local_178,local_160,&local_110);
  pTVar2 = &this->CellZ;
  uVar10 = (uint)this->_padding_;
  uVar13 = (ulonglong)uVar10;
  local_168 = ((double)this->_padding_ + (double)this->_padding_) * dVar7;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar13);
  }
  piVar1 = &(this->CellZ).ArrayMax;
  (this->CellZ).ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar10) {
    do {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_168) &&
          ((FScriptContainerElement *)&local_168 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->CellZ).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CellZ).ArrayNum = iVar11 + 1;
      *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_168;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (0 < (int)this->_padding_) {
    lVar12 = 0;
    uVar13 = uVar16;
    uVar15 = uVar16;
    do {
      uVar14 = (uint)uVar16;
      uVar18 = ~uVar14 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar10 = uVar18;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(char *)(uVar13 + this->_padding_) == '\0') {
        uVar17 = (uint)uVar15;
        uVar10 = 0;
        if ((int)uVar17 < local_170) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((((byte)local_178.Data[lVar12 + 0x70] & 2) == 0) ||
           (dVar19 * dVar19 <
            (*(double *)(local_178.Data + lVar12 + 8) - *(double *)(local_178.Data + lVar12 + 0x58))
            * (*(double *)(local_178.Data + lVar12 + 8) -
              *(double *)(local_178.Data + lVar12 + 0x58)) +
            (*(double *)(local_178.Data + lVar12) - *(double *)(local_178.Data + lVar12 + 0x50)) *
            (*(double *)(local_178.Data + lVar12) - *(double *)(local_178.Data + lVar12 + 0x50)))) {
          uVar10 = 0;
          if ((int)uVar14 < (int)this->_padding_) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined1 *)(uVar13 + this->_padding_) = 1;
        }
        else {
          uVar3 = *(undefined8 *)(local_178.Data + lVar12 + 0x60);
          uVar10 = 0;
          if ((int)uVar14 < (this->CellZ).ArrayNum) {
            uVar10 = uVar18;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)((pTVar2->AllocatorInstance).Data + uVar13 * 8) = uVar3;
        }
        uVar15 = (ulonglong)(uVar17 + 1);
        lVar12 = lVar12 + 0x78;
      }
      uVar16 = (ulonglong)(uVar14 + 1);
      uVar13 = uVar13 + 1;
    } while ((int)(uVar14 + 1) < (int)this->_padding_);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return;
}

// SetGridId @ 146fd0350

void __thiscall FNavLocalGridData::SetGridId(FNavLocalGridData *this,int param_1)

{
  this->GridId = param_1;
  return;
}

// SetHeight @ 146fd0580

void __thiscall FNavLocalGridData::SetHeight(FNavLocalGridData *this,float param_1)

{
  double dVar1;
  
  dVar1 = ((double)this->_padding_ + (double)this->_padding_) * __real_3fe0000000000000;
  this->_padding_ = (longlong)(dVar1 - (double)param_1);
  this->_padding_ = (longlong)((double)param_1 + dVar1);
  return;
}

