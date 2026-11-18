// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 20

// Reset @ 146dc84d0

void __thiscall FRecastQueryFilter::Reset(FRecastQueryFilter *this)

{
  dtQueryFilterData::dtQueryFilterData((dtQueryFilterData *)&this->field_0x10);
                    /* WARNING: Could not recover jumptable at 0x000146dc84ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x20))(this,0);
  return;
}

// SetAreaCost @ 146dc8500

void __thiscall
FRecastQueryFilter::SetAreaCost(FRecastQueryFilter *this,uchar param_1,float param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)param_2;
  *(double *)(&this->field_0x10 + (ulonglong)param_1 * 8) = dVar2;
  dVar1 = *(double *)&this->field_0x418;
  if (dVar2 <= *(double *)&this->field_0x418) {
    dVar1 = dVar2;
  }
  *(double *)&this->field_0x418 = dVar1;
  return;
}

// SetFixedAreaEnteringCost @ 146dc8530

void __thiscall
FRecastQueryFilter::SetFixedAreaEnteringCost(FRecastQueryFilter *this,uchar param_1,float param_2)

{
  *(double *)(&this->field_0x210 + (ulonglong)param_1 * 8) = (double)param_2;
  return;
}

// SetExcludedArea @ 146dc8550

void __thiscall FRecastQueryFilter::SetExcludedArea(FRecastQueryFilter *this,uchar param_1)

{
  double dVar1;
  
  *(undefined8 *)(&this->field_0x10 + (ulonglong)param_1 * 8) = 0x47efffffe0000000;
  dVar1 = *(double *)&this->field_0x418;
  if (__real_47efffffe0000000 <= *(double *)&this->field_0x418) {
    dVar1 = __real_47efffffe0000000;
  }
  *(double *)&this->field_0x418 = dVar1;
  return;
}

// SetAllAreaCosts @ 146dc8590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastQueryFilter::SetAllAreaCosts(FRecastQueryFilter *this,float *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  float *pfVar4;
  double *pdVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  if ((0x40 < param_2) && (2 < (byte)LogNavigation._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
  }
  iVar2 = 0x40;
  if (param_2 < 0x40) {
    iVar2 = param_2;
  }
  lVar3 = 0;
  lVar6 = (longlong)iVar2;
  puVar1 = &this->field_0x418;
  if (3 < lVar6) {
    lVar7 = (lVar6 - 4U >> 2) + 1;
    lVar3 = lVar7 * 4;
    pfVar4 = param_1 + 2;
    pdVar5 = (double *)&this->field_0x18;
    do {
      dVar9 = (double)pfVar4[-2];
      pdVar5[-1] = dVar9;
      dVar8 = *(double *)puVar1;
      if (dVar9 <= *(double *)puVar1) {
        dVar8 = dVar9;
      }
      *(double *)puVar1 = dVar8;
      dVar9 = (double)pfVar4[-1];
      *pdVar5 = dVar9;
      dVar8 = *(double *)puVar1;
      if (dVar9 <= *(double *)puVar1) {
        dVar8 = dVar9;
      }
      *(double *)puVar1 = dVar8;
      dVar9 = (double)*pfVar4;
      pdVar5[1] = dVar9;
      dVar8 = *(double *)puVar1;
      if (dVar9 <= *(double *)puVar1) {
        dVar8 = dVar9;
      }
      *(double *)puVar1 = dVar8;
      dVar9 = (double)pfVar4[1];
      pdVar5[2] = dVar9;
      dVar8 = *(double *)puVar1;
      if (dVar9 <= *(double *)puVar1) {
        dVar8 = dVar9;
      }
      *(double *)puVar1 = dVar8;
      lVar7 = lVar7 + -1;
      pfVar4 = pfVar4 + 4;
      pdVar5 = pdVar5 + 4;
    } while (lVar7 != 0);
  }
  if (lVar3 < lVar6) {
    pdVar5 = (double *)(&this->field_0x10 + lVar3 * 8);
    do {
      dVar8 = (double)param_1[lVar3];
      lVar3 = lVar3 + 1;
      *pdVar5 = dVar8;
      if (*(double *)puVar1 <= dVar8) {
        dVar8 = *(double *)puVar1;
      }
      *(double *)puVar1 = dVar8;
      pdVar5 = pdVar5 + 1;
    } while (lVar3 < lVar6);
  }
  return;
}

// GetAllAreaCosts @ 146dc86d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRecastQueryFilter::GetAllAreaCosts
          (FRecastQueryFilter *this,float *param_1,float *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float *pfVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  ulonglong uVar16;
  
  auVar9 = ___xmm_c7efffffe0000000c7efffffe0000000;
  auVar8 = ___xmm_47efffffe000000047efffffe0000000;
  puVar1 = &this->field_0x10;
  puVar2 = &this->field_0x210;
  uVar18 = 0x40;
  if (param_3 < 0x40) {
    uVar18 = param_3;
  }
  uVar16 = 0;
  uVar11 = 0;
  uVar15 = 0;
  if ((0 < (int)uVar18) && (3 < uVar18)) {
    lVar12 = (longlong)(int)(uVar18 - 1);
    pfVar10 = param_2 + lVar12;
    if (((puVar2 + lVar12 * 8 < param_2) || (uVar15 = 0, pfVar10 < puVar2)) &&
       ((((pfVar4 = param_1 + lVar12, uVar15 = uVar11, pfVar4 < param_2 || (pfVar10 < param_1)) &&
         ((puVar1 + lVar12 * 8 < param_2 || (pfVar10 < puVar1)))) &&
        (((puVar2 + lVar12 * 8 < param_1 || (pfVar4 < puVar2)) &&
         ((puVar1 + lVar12 * 8 < param_1 || (pfVar4 < puVar1)))))))) {
      uVar11 = uVar18 & 0x80000003;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
      }
      pfVar10 = param_2 + 2;
      uVar17 = uVar16;
      pauVar20 = (undefined1 (*) [16])&this->field_0x220;
      do {
        uVar15 = (int)uVar16 + 4;
        uVar16 = (ulonglong)uVar15;
        uVar17 = uVar17 + 4;
        pfVar4 = pfVar10 + 4;
        auVar22 = minpd(pauVar20[-0x21],auVar8);
        auVar24 = minpd(pauVar20[-1],auVar8);
        auVar22 = maxpd(auVar22,auVar9);
        auVar24 = maxpd(auVar24,auVar9);
        *(ulonglong *)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)pfVar4) =
             CONCAT44((float)auVar22._8_8_,(float)auVar22._0_8_);
        auVar22 = pauVar20[-0x20];
        *(ulonglong *)(pfVar10 + -2) = CONCAT44((float)auVar24._8_8_,(float)auVar24._0_8_);
        auVar22 = minpd(auVar22,auVar8);
        auVar24 = maxpd(auVar22,auVar9);
        auVar22 = *pauVar20;
        *(ulonglong *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pfVar4) =
             CONCAT44((float)auVar24._8_8_,(float)auVar24._0_8_);
        auVar22 = minpd(auVar22,auVar8);
        auVar22 = maxpd(auVar22,auVar9);
        *(ulonglong *)pfVar10 = CONCAT44((float)auVar22._8_8_,(float)auVar22._0_8_);
        pfVar10 = pfVar4;
        pauVar20 = pauVar20 + 2;
      } while ((longlong)uVar17 < (longlong)(int)(uVar18 - uVar11));
    }
  }
  dVar7 = __real_c7efffffe0000000;
  dVar6 = __real_47efffffe0000000;
  lVar12 = (longlong)(int)uVar15;
  lVar19 = (longlong)(int)uVar18;
  if (lVar12 < lVar19) {
    lVar14 = (longlong)param_1 - (longlong)param_2;
    if (3 < lVar19 - lVar12) {
      lVar5 = lVar12 + 1;
      lVar3 = lVar12 * 8;
      lVar21 = ((lVar19 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar21 * 4;
      pfVar10 = param_2 + lVar5;
      pdVar13 = (double *)(&this->field_0x218 + lVar3);
      do {
        dVar23 = pdVar13[-0x41];
        if (dVar6 <= pdVar13[-0x41]) {
          dVar23 = dVar6;
        }
        if (dVar23 <= dVar7) {
          dVar23 = dVar7;
        }
        *(float *)((longlong)pfVar10 + lVar14 + -4) = (float)dVar23;
        dVar23 = pdVar13[-1];
        if (dVar6 <= pdVar13[-1]) {
          dVar23 = dVar6;
        }
        if (dVar23 <= dVar7) {
          dVar23 = dVar7;
        }
        pfVar10[-1] = (float)dVar23;
        dVar23 = pdVar13[-0x40];
        if (dVar6 <= pdVar13[-0x40]) {
          dVar23 = dVar6;
        }
        if (dVar23 <= dVar7) {
          dVar23 = dVar7;
        }
        *(float *)((longlong)pfVar10 + lVar14) = (float)dVar23;
        dVar23 = *pdVar13;
        if (dVar6 <= *pdVar13) {
          dVar23 = dVar6;
        }
        if (dVar23 <= dVar7) {
          dVar23 = dVar7;
        }
        *pfVar10 = (float)dVar23;
        dVar23 = pdVar13[-0x3f];
        if (dVar6 <= pdVar13[-0x3f]) {
          dVar23 = dVar6;
        }
        if (dVar23 <= dVar7) {
          dVar23 = dVar7;
        }
        *(float *)((longlong)pfVar10 + lVar14 + 4) = (float)dVar23;
        dVar23 = pdVar13[1];
        if (dVar6 <= pdVar13[1]) {
          dVar23 = dVar6;
        }
        if (dVar23 <= dVar7) {
          dVar23 = dVar7;
        }
        pfVar10[1] = (float)dVar23;
        dVar23 = pdVar13[-0x3e];
        if (dVar6 <= pdVar13[-0x3e]) {
          dVar23 = dVar6;
        }
        if (dVar23 <= dVar7) {
          dVar23 = dVar7;
        }
        *(float *)((longlong)pfVar10 + lVar14 + 8) = (float)dVar23;
        dVar23 = pdVar13[2];
        if (dVar6 <= pdVar13[2]) {
          dVar23 = dVar6;
        }
        if (dVar23 <= dVar7) {
          dVar23 = dVar7;
        }
        pfVar10[2] = (float)dVar23;
        lVar21 = lVar21 + -1;
        pfVar10 = pfVar10 + 4;
        pdVar13 = pdVar13 + 4;
      } while (lVar21 != 0);
      if (lVar19 <= lVar12) {
        return;
      }
    }
    lVar19 = lVar19 - lVar12;
    pfVar10 = param_2 + lVar12;
    pdVar13 = (double *)(puVar2 + lVar12 * 8);
    do {
      dVar23 = pdVar13[-0x40];
      if (dVar6 <= pdVar13[-0x40]) {
        dVar23 = dVar6;
      }
      if (dVar23 <= dVar7) {
        dVar23 = dVar7;
      }
      *(float *)(lVar14 + -4 + (longlong)(pfVar10 + 1)) = (float)dVar23;
      dVar23 = *pdVar13;
      if (dVar6 <= *pdVar13) {
        dVar23 = dVar6;
      }
      if (dVar23 <= dVar7) {
        dVar23 = dVar7;
      }
      *pfVar10 = (float)dVar23;
      lVar19 = lVar19 + -1;
      pfVar10 = pfVar10 + 1;
      pdVar13 = pdVar13 + 1;
    } while (lVar19 != 0);
  }
  return;
}

// SetBacktrackingEnabled @ 146dc89c0

void __thiscall FRecastQueryFilter::SetBacktrackingEnabled(FRecastQueryFilter *this,bool param_1)

{
  this->field_0x424 = param_1;
  return;
}

// IsBacktrackingEnabled @ 146dc89d0

bool __thiscall FRecastQueryFilter::IsBacktrackingEnabled(FRecastQueryFilter *this)

{
  return (bool)this->field_0x424;
}

// GetHeuristicScale @ 146dc89e0

float __thiscall FRecastQueryFilter::GetHeuristicScale(FRecastQueryFilter *this)

{
  return (float)*(double *)&this->field_0x410;
}

// IsEqual @ 146dc8a00

bool __thiscall
FRecastQueryFilter::IsEqual(FRecastQueryFilter *this,INavigationQueryFilterInterface *param_1)

{
  int iVar1;
  
  iVar1 = memcmp(this,param_1,0x430);
  return iVar1 == 0;
}

// SetIncludeFlags @ 146dc8a20

void __thiscall FRecastQueryFilter::SetIncludeFlags(FRecastQueryFilter *this,ushort param_1)

{
  *(ushort *)&this->field_0x420 = param_1;
  return;
}

// GetIncludeFlags @ 146dc8a30

ushort __thiscall FRecastQueryFilter::GetIncludeFlags(FRecastQueryFilter *this)

{
  return *(ushort *)&this->field_0x420;
}

// SetExcludeFlags @ 146dc8a40

void __thiscall FRecastQueryFilter::SetExcludeFlags(FRecastQueryFilter *this,ushort param_1)

{
  *(ushort *)&this->field_0x422 = param_1;
  return;
}

// GetExcludeFlags @ 146dc8a50

ushort __thiscall FRecastQueryFilter::GetExcludeFlags(FRecastQueryFilter *this)

{
  return *(ushort *)&this->field_0x422;
}

// GetAdjustedEndLocation @ 146dc8a60

TVector<double> * __thiscall
FRecastQueryFilter::GetAdjustedEndLocation
          (FRecastQueryFilter *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// CreateCopy @ 146dc8a80

INavigationQueryFilterInterface * __thiscall
FRecastQueryFilter::CreateCopy(FRecastQueryFilter *this)

{
  INavigationQueryFilterInterface IVar1;
  INavigationQueryFilterInterface *pIVar2;
  INavigationQueryFilterInterface *pIVar3;
  INavigationQueryFilterInterface *pIVar4;
  longlong lVar5;
  INavigationQueryFilterInterface *pIVar6;
  INavigationQueryFilterInterface *pIVar7;
  
  pIVar4 = ::operator_new(0x430);
  if (pIVar4 != (INavigationQueryFilterInterface *)0x0) {
    *pIVar4 = (INavigationQueryFilterInterface)&___7INavigationQueryFilterInterface__6B_;
    pIVar4[1] = (INavigationQueryFilterInterface)&___7dtQueryFilter__6B_;
    lVar5 = 8;
    pIVar2 = (INavigationQueryFilterInterface *)&this->field_0x10;
    pIVar3 = pIVar4 + 2;
    do {
      pIVar7 = pIVar3;
      pIVar6 = pIVar2;
      IVar1 = pIVar6[1];
      *pIVar7 = *pIVar6;
      pIVar7[1] = IVar1;
      IVar1 = pIVar6[3];
      pIVar7[2] = pIVar6[2];
      pIVar7[3] = IVar1;
      IVar1 = pIVar6[5];
      pIVar7[4] = pIVar6[4];
      pIVar7[5] = IVar1;
      IVar1 = pIVar6[7];
      pIVar7[6] = pIVar6[6];
      pIVar7[7] = IVar1;
      IVar1 = pIVar6[9];
      pIVar7[8] = pIVar6[8];
      pIVar7[9] = IVar1;
      IVar1 = pIVar6[0xb];
      pIVar7[10] = pIVar6[10];
      pIVar7[0xb] = IVar1;
      IVar1 = pIVar6[0xd];
      pIVar7[0xc] = pIVar6[0xc];
      pIVar7[0xd] = IVar1;
      IVar1 = pIVar6[0xf];
      pIVar7[0xe] = pIVar6[0xe];
      pIVar7[0xf] = IVar1;
      lVar5 = lVar5 + -1;
      pIVar2 = pIVar6 + 0x10;
      pIVar3 = pIVar7 + 0x10;
    } while (lVar5 != 0);
    IVar1 = pIVar6[0x11];
    pIVar7[0x10] = pIVar6[0x10];
    pIVar7[0x11] = IVar1;
    pIVar7[0x12] = pIVar6[0x12];
    *(undefined1 *)(pIVar4 + 0x85) = this->field_0x428;
    *pIVar4 = (INavigationQueryFilterInterface)&_vftable__for__INavigationQueryFilterInterface__;
    pIVar4[1] = (INavigationQueryFilterInterface)&_vftable__for__dtQueryFilter__;
    return pIVar4;
  }
  return (INavigationQueryFilterInterface *)0x0;
}

// FRecastQueryFilter @ 146dd7b70

FRecastQueryFilter * __thiscall
FRecastQueryFilter::FRecastQueryFilter(FRecastQueryFilter *this,bool param_1)

{
  double dVar1;
  
  *(undefined ***)this = &___7INavigationQueryFilterInterface__6B_;
  *(undefined ***)&this->field_0x8 = &___7dtQueryFilter__6B_;
  dtQueryFilterData::dtQueryFilterData((dtQueryFilterData *)&this->field_0x10);
  this->field_0x428 = param_1;
  *(undefined ***)this = &_vftable__for__INavigationQueryFilterInterface__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__dtQueryFilter__;
  dVar1 = *(double *)&this->field_0x418;
  if (__real_47efffffe0000000 <= *(double *)&this->field_0x418) {
    dVar1 = __real_47efffffe0000000;
  }
  *(undefined8 *)&this->field_0x10 = 0x47efffffe0000000;
  *(double *)&this->field_0x418 = dVar1;
  return this;
}

// ~FRecastQueryFilter @ 146dd9f30

void __thiscall FRecastQueryFilter::~FRecastQueryFilter(FRecastQueryFilter *this)

{
  *(undefined ***)&this->field_0x8 = &___7dtQueryFilter__6B_;
  *(undefined ***)this = &___7INavigationQueryFilterInterface__6B_;
  return;
}

// SetIsVirtual @ 146e28ad0

void __thiscall FRecastQueryFilter::SetIsVirtual(FRecastQueryFilter *this,bool param_1)

{
  this->field_0x428 = param_1;
  return;
}

// SetShouldIgnoreClosedNodes @ 146e29740

void __thiscall
FRecastQueryFilter::SetShouldIgnoreClosedNodes(FRecastQueryFilter *this,bool param_1)

{
  this->field_0x425 = param_1;
  return;
}

