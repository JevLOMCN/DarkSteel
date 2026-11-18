// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Nanosvg
// Functions: 71

// nsvg__addActive @ 14240e870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

NSVGactiveEdge * __cdecl nsvg__addActive(NSVGrasterizer *param_1,NSVGedge *param_2,float param_3)

{
  NSVGmemPage *pNVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  NSVGmemPage *_Dst;
  NSVGactiveEdge *pNVar5;
  int iVar6;
  NSVGactiveEdge *pNVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 in_XMM2_Db;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  pNVar7 = param_1->freelist;
  auVar11._4_4_ = in_XMM2_Db;
  auVar11._0_4_ = param_3;
  auVar11._8_4_ = in_XMM2_Dc;
  auVar11._12_4_ = in_XMM2_Dd;
  if (pNVar7 != (NSVGactiveEdge *)0x0) {
    pNVar5 = pNVar7->next;
    param_1->freelist = pNVar5;
    goto LAB_14240e897;
  }
  pNVar1 = param_1->curpage;
  if (pNVar1 == (NSVGmemPage *)0x0) {
LAB_14240e94d:
    _Dst = malloc(0x410);
    if (_Dst == (NSVGmemPage *)0x0) {
      _Dst = (NSVGmemPage *)0x0;
    }
    else {
      memset(_Dst,0,0x410);
      if (pNVar1 == (NSVGmemPage *)0x0) {
        param_1->pages = _Dst;
      }
      else {
        pNVar1->next = _Dst;
      }
    }
LAB_14240e996:
    param_1->curpage = _Dst;
  }
  else {
    _Dst = pNVar1;
    if (0x400 < pNVar1->size + 0x18) {
      _Dst = pNVar1->next;
      if (_Dst == (NSVGmemPage *)0x0) goto LAB_14240e94d;
      goto LAB_14240e996;
    }
  }
  pNVar7 = (NSVGactiveEdge *)(_Dst->mem + _Dst->size);
  uVar3 = _Dst->size + 0x18;
  pNVar5 = (NSVGactiveEdge *)(ulonglong)uVar3;
  _Dst->size = uVar3;
  if (pNVar7 == (NSVGactiveEdge *)0x0) {
    return (NSVGactiveEdge *)0x0;
  }
LAB_14240e897:
  fVar2 = __real_44800000;
  fVar10 = (param_2->x1 - param_2->x0) / (param_2->y1 - param_2->y0);
  if (0.0 <= fVar10) {
    auVar9._0_4_ = fVar10 * __real_44800000;
    iVar6 = (int)auVar9._0_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar9._0_4_)) {
      auVar9._4_4_ = auVar9._0_4_;
      auVar9._8_8_ = 0;
      uVar3 = movmskps((int)pNVar5,auVar9);
      iVar6 = iVar6 - (uVar3 & 1);
      auVar9._0_4_ = (float)iVar6;
    }
  }
  else {
    auVar8._0_4_ = fVar10 * ___real_c4800000;
    iVar6 = (int)auVar8._0_4_;
    if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar8._0_4_)) {
      auVar8._4_4_ = auVar8._0_4_;
      auVar8._8_8_ = 0;
      uVar3 = movmskps((int)pNVar5,auVar8);
      iVar6 = iVar6 - (uVar3 & 1);
      auVar8._0_4_ = (float)iVar6;
    }
    auVar9._0_4_ = (float)((uint)auVar8._0_4_ ^ __xmm_80000000800000008000000080000000);
  }
  pNVar7->dx = (int)auVar9._0_4_;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = ((param_3 - param_2->y0) * fVar10 + param_2->x0) * fVar2;
  iVar4 = (int)auVar12._0_4_;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar12._0_4_)) {
    auVar14._0_8_ = auVar12._0_8_;
    auVar14._8_4_ = in_XMM2_Db;
    auVar14._12_4_ = in_XMM2_Db;
    auVar13._8_8_ = auVar14._8_8_;
    auVar13._4_4_ = auVar12._0_4_;
    auVar13._0_4_ = auVar12._0_4_;
    uVar3 = movmskps(iVar6,auVar13);
    auVar12 = ZEXT416((uint)(float)(int)(iVar4 - (uVar3 & 1)));
  }
  pNVar7->x = (int)auVar12._0_4_;
  pNVar7->ey = param_2->y1;
  pNVar7->next = (NSVGactiveEdge *)0x0;
  pNVar7->dir = param_2->dir;
  return pNVar7;
}

// nsvg__addEdge @ 14240ea80

void __cdecl
nsvg__addEdge(NSVGrasterizer *param_1,float param_2,float param_3,float param_4,float param_5)

{
  NSVGedge *pNVar1;
  int iVar2;
  
  if (param_3 != param_5) {
    iVar2 = param_1->cedges;
    if (iVar2 < param_1->nedges + 1) {
      if (iVar2 < 1) {
        iVar2 = 0x40;
      }
      else {
        iVar2 = iVar2 * 2;
      }
      param_1->cedges = iVar2;
      pNVar1 = realloc(param_1->edges,(longlong)iVar2 << 5);
      param_1->edges = pNVar1;
      if (pNVar1 == (NSVGedge *)0x0) {
        return;
      }
    }
    iVar2 = param_1->nedges;
    pNVar1 = param_1->edges;
    param_1->nedges = iVar2 + 1;
    if (param_5 <= param_3) {
      pNVar1[iVar2].x0 = param_4;
      pNVar1[iVar2].y0 = param_5;
      pNVar1[iVar2].x1 = param_2;
      pNVar1[iVar2].y1 = param_3;
      pNVar1[iVar2].dir = -1;
    }
    else {
      pNVar1[iVar2].x0 = param_2;
      pNVar1[iVar2].y0 = param_3;
      pNVar1[iVar2].x1 = param_4;
      pNVar1[iVar2].y1 = param_5;
      pNVar1[iVar2].dir = 1;
    }
  }
  return;
}

// nsvg__addPath @ 14240eb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl nsvg__addPath(NSVGparser *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  NSVGpath *_Memory;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_58 [32];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  iVar1 = param_1->attrHead;
  if (3 < param_1->npts) {
    if (param_2 != '\0') {
      nsvg__lineTo(param_1,*param_1->pts,param_1->pts[1]);
    }
    _Memory = malloc(0x28);
    if (_Memory != (NSVGpath *)0x0) {
      uVar5 = 0;
      _Memory->npts = 0;
      _Memory->closed = '\0';
      *(undefined3 *)&_Memory->field_0xd = 0;
      _Memory->bounds[0] = 0.0;
      _Memory->bounds[1] = 0.0;
      _Memory->bounds[2] = 0.0;
      _Memory->bounds[3] = 0.0;
      _Memory->next = (NSVGpath *)0x0;
      pfVar3 = malloc((longlong)(param_1->npts * 2) << 2);
      _Memory->pts = pfVar3;
      if (pfVar3 == (float *)0x0) {
        free(_Memory);
      }
      else {
        iVar2 = param_1->npts;
        _Memory->closed = param_2;
        _Memory->npts = iVar2;
        uVar4 = uVar5;
        uVar7 = uVar5;
        if (0 < iVar2) {
          do {
            uVar6 = (int)uVar7 + 1;
            fVar9 = *(float *)(uVar4 + 4 + (longlong)param_1->pts);
            fVar8 = *(float *)(uVar4 + (longlong)param_1->pts);
            *(float *)(uVar4 + (longlong)pfVar3) =
                 fVar9 * param_1->attr[iVar1].xform[2] + fVar8 * param_1->attr[iVar1].xform[0] +
                 param_1->attr[iVar1].xform[4];
            *(float *)(uVar4 + 4 + (longlong)pfVar3) =
                 fVar8 * param_1->attr[iVar1].xform[1] + fVar9 * param_1->attr[iVar1].xform[3] +
                 param_1->attr[iVar1].xform[5];
            uVar4 = uVar4 + 8;
            uVar7 = (ulonglong)uVar6;
          } while ((int)uVar6 < param_1->npts);
        }
        iVar1 = _Memory->npts;
        if (0 < iVar1 + -1) {
          do {
            iVar2 = (int)uVar5;
            nsvg__curveBounds(&local_38,_Memory->pts + iVar2 * 2);
            if (iVar2 == 0) {
              *(ulonglong *)_Memory->bounds = CONCAT44(fStack_34,local_38);
              *(ulonglong *)(_Memory->bounds + 2) = CONCAT44(fStack_2c,fStack_30);
            }
            else {
              fVar9 = _Memory->bounds[1];
              if (fStack_34 <= _Memory->bounds[1]) {
                fVar9 = fStack_34;
              }
              fVar8 = local_38;
              if (_Memory->bounds[0] <= local_38) {
                fVar8 = _Memory->bounds[0];
              }
              _Memory->bounds[1] = fVar9;
              fVar9 = _Memory->bounds[3];
              if (_Memory->bounds[3] <= fStack_2c) {
                fVar9 = fStack_2c;
              }
              _Memory->bounds[0] = fVar8;
              fVar8 = _Memory->bounds[2];
              if (_Memory->bounds[2] <= fStack_30) {
                fVar8 = fStack_30;
              }
              _Memory->bounds[3] = fVar9;
              _Memory->bounds[2] = fVar8;
            }
            uVar5 = (ulonglong)(iVar2 + 3U);
          } while ((int)(iVar2 + 3U) < iVar1 + -1);
        }
        _Memory->next = param_1->plist;
        param_1->plist = _Memory;
      }
    }
  }
  return;
}

// nsvg__addPathPoint @ 14240ed70

void __cdecl nsvg__addPathPoint(NSVGrasterizer *param_1,float param_2,float param_3,int param_4)

{
  NSVGpoint **ppNVar1;
  int iVar2;
  int iVar3;
  NSVGpoint *pNVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = param_1->npoints;
  ppNVar1 = &param_1->points;
  if ((0 < iVar3) &&
     (pNVar4 = *ppNVar1, fVar6 = param_3 - pNVar4[(longlong)iVar3 + -1].y,
     fVar5 = param_2 - pNVar4[(longlong)iVar3 + -1].x,
     fVar6 * fVar6 + fVar5 * fVar5 < param_1->distTol * param_1->distTol)) {
    pNVar4[(longlong)iVar3 + -1].flags = pNVar4[(longlong)iVar3 + -1].flags | (byte)param_4;
    return;
  }
  iVar2 = param_1->cpoints;
  if (iVar2 < iVar3 + 1) {
    iVar3 = iVar2 * 2;
    if (iVar2 < 1) {
      iVar3 = 0x40;
    }
    param_1->cpoints = iVar3;
    pNVar4 = realloc(*ppNVar1,(longlong)iVar3 << 5);
    *ppNVar1 = pNVar4;
    if (pNVar4 == (NSVGpoint *)0x0) {
      return;
    }
  }
  iVar3 = param_1->npoints;
  pNVar4 = *ppNVar1;
  pNVar4[iVar3].x = param_2;
  pNVar4[iVar3].y = param_3;
  pNVar4[iVar3].flags = (byte)param_4;
  param_1->npoints = param_1->npoints + 1;
  return;
}

// nsvg__addPoint @ 14240ee70

void __cdecl nsvg__addPoint(NSVGparser *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  iVar1 = param_1->cpts;
  if (iVar1 < param_1->npts + 1) {
    iVar2 = iVar1 * 2;
    if (iVar1 == 0) {
      iVar2 = 8;
    }
    param_1->cpts = iVar2;
    pfVar3 = realloc(param_1->pts,(longlong)(iVar2 * 2) << 2);
    param_1->pts = pfVar3;
    if (pfVar3 == (float *)0x0) {
      return;
    }
  }
  param_1->pts[param_1->npts * 2] = param_2;
  param_1->pts[(longlong)(param_1->npts * 2) + 1] = param_3;
  param_1->npts = param_1->npts + 1;
  return;
}

// nsvg__addShape @ 14240ef20

void __cdecl nsvg__addShape(NSVGparser *param_1)

{
  float *pfVar1;
  char cVar2;
  NSVGpath *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  NSVGshape *_Dst;
  float *pfVar8;
  NSVGgradient *pNVar9;
  NSVGpath *pNVar10;
  longlong lVar11;
  NSVGattrib *pNVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_38 [4];
  float local_28 [8];
  
  pNVar12 = param_1->attr + param_1->attrHead;
  if (param_1->plist == (NSVGpath *)0x0) {
    return;
  }
  _Dst = malloc(0xb8);
  if (_Dst == (NSVGshape *)0x0) {
    return;
  }
  memset(_Dst,0,0xb8);
  uVar4 = *(undefined8 *)pNVar12->id;
  uVar5 = *(undefined8 *)(pNVar12->id + 8);
  lVar13 = (longlong)pNVar12->strokeDashCount;
  lVar14 = 0;
  fVar17 = pNVar12->xform[3];
  fVar20 = pNVar12->xform[1];
  _Dst->strokeDashCount = (char)pNVar12->strokeDashCount;
  uVar6 = *(undefined8 *)(pNVar12->id + 0x10);
  uVar7 = *(undefined8 *)(pNVar12->id + 0x18);
  *(undefined8 *)_Dst->id = uVar4;
  *(undefined8 *)(_Dst->id + 8) = uVar5;
  uVar4 = *(undefined8 *)(pNVar12->id + 0x20);
  uVar5 = *(undefined8 *)(pNVar12->id + 0x28);
  *(undefined8 *)(_Dst->id + 0x10) = uVar6;
  *(undefined8 *)(_Dst->id + 0x18) = uVar7;
  uVar6 = *(undefined8 *)(pNVar12->id + 0x30);
  uVar7 = *(undefined8 *)(pNVar12->id + 0x38);
  *(undefined8 *)(_Dst->id + 0x20) = uVar4;
  *(undefined8 *)(_Dst->id + 0x28) = uVar5;
  fVar21 = pNVar12->xform[2];
  *(undefined8 *)(_Dst->id + 0x30) = uVar6;
  *(undefined8 *)(_Dst->id + 0x38) = uVar7;
  fVar20 = (SQRT(pNVar12->xform[0] * pNVar12->xform[0] + fVar21 * fVar21) +
           SQRT(fVar20 * fVar20 + fVar17 * fVar17)) * __real_3f000000;
  fVar17 = pNVar12->strokeDashOffset;
  _Dst->strokeWidth = fVar20 * pNVar12->strokeWidth;
  _Dst->strokeDashOffset = fVar20 * fVar17;
  if (3 < lVar13) {
    lVar11 = (lVar13 - 4U >> 2) + 1;
    lVar14 = lVar11 * 4;
    pfVar8 = _Dst->strokeDashArray;
    do {
      pfVar1 = (float *)((longlong)pNVar12 + (0x88 - (longlong)_Dst) + (longlong)pfVar8);
      fVar17 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      *pfVar8 = *pfVar1 * fVar20;
      pfVar8[1] = fVar17 * fVar20;
      pfVar8[2] = fVar21 * fVar20;
      pfVar8[3] = fVar22 * fVar20;
      lVar11 = lVar11 + -1;
      pfVar8 = pfVar8 + 4;
    } while (lVar11 != 0);
  }
  if (lVar14 < lVar13) {
    lVar13 = lVar13 - lVar14;
    pfVar8 = _Dst->strokeDashArray + lVar14;
    do {
      *pfVar8 = fVar20 * *(float *)((longlong)pNVar12 + (0x84 - (longlong)_Dst) +
                                   (longlong)(pfVar8 + 1));
      lVar13 = lVar13 + -1;
      pfVar8 = pfVar8 + 1;
    } while (lVar13 != 0);
  }
  _Dst->strokeLineJoin = pNVar12->strokeLineJoin;
  _Dst->strokeLineCap = pNVar12->strokeLineCap;
  _Dst->miterLimit = pNVar12->miterLimit;
  _Dst->fillRule = pNVar12->fillRule;
  _Dst->opacity = pNVar12->opacity;
  pNVar3 = param_1->plist;
  param_1->plist = (NSVGpath *)0x0;
  _Dst->paths = pNVar3;
  fVar17 = pNVar3->bounds[0];
  fVar20 = pNVar3->bounds[1];
  fVar21 = pNVar3->bounds[2];
  pNVar10 = pNVar3->next;
  fVar22 = pNVar3->bounds[3];
  _Dst->bounds[0] = fVar17;
  _Dst->bounds[1] = fVar20;
  _Dst->bounds[2] = fVar21;
  _Dst->bounds[3] = fVar22;
  if (pNVar10 != (NSVGpath *)0x0) {
    do {
      fVar15 = pNVar10->bounds[0];
      if (fVar17 <= pNVar10->bounds[0]) {
        fVar15 = fVar17;
      }
      fVar18 = pNVar10->bounds[1];
      if (fVar20 <= pNVar10->bounds[1]) {
        fVar18 = fVar20;
      }
      fVar16 = pNVar10->bounds[2];
      if (pNVar10->bounds[2] <= fVar21) {
        fVar16 = fVar21;
      }
      pfVar8 = pNVar10->bounds;
      pNVar10 = pNVar10->next;
      fVar19 = pfVar8[3];
      if (pfVar8[3] <= fVar22) {
        fVar19 = fVar22;
      }
      fVar17 = fVar15;
      fVar20 = fVar18;
      fVar21 = fVar16;
      fVar22 = fVar19;
    } while (pNVar10 != (NSVGpath *)0x0);
    _Dst->bounds[0] = fVar15;
    _Dst->bounds[1] = fVar18;
    _Dst->bounds[2] = fVar16;
    _Dst->bounds[3] = fVar19;
  }
  cVar2 = pNVar12->hasFill;
  if (cVar2 == '\0') {
LAB_14240f1ef:
    (_Dst->fill).type = '\0';
  }
  else if (cVar2 == '\x01') {
    fVar17 = pNVar12->fillOpacity * __real_437f0000;
    (_Dst->fill).type = '\x01';
    (_Dst->fill).field1_0x8.color = (int)(longlong)fVar17 << 0x18 | pNVar12->fillColor;
  }
  else if (cVar2 == '\x02') {
    nsvg__xformInverse(local_28,pNVar12->xform);
    nsvg__getLocalBounds(local_38,_Dst,local_28);
    pNVar9 = nsvg__createGradient(param_1,pNVar12->fillGradient,local_38,&(_Dst->fill).type);
    (_Dst->fill).field1_0x8.gradient = pNVar9;
    if (pNVar9 == (NSVGgradient *)0x0) goto LAB_14240f1ef;
  }
  cVar2 = pNVar12->hasStroke;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      fVar17 = pNVar12->strokeOpacity * __real_437f0000;
      (_Dst->stroke).type = '\x01';
      (_Dst->stroke).field1_0x8.color = (int)(longlong)fVar17 << 0x18 | pNVar12->strokeColor;
      goto LAB_14240f26b;
    }
    if (cVar2 != '\x02') goto LAB_14240f26b;
    nsvg__xformInverse(local_28,pNVar12->xform);
    nsvg__getLocalBounds(local_38,_Dst,local_28);
    pNVar9 = nsvg__createGradient(param_1,pNVar12->strokeGradient,local_38,&(_Dst->stroke).type);
    (_Dst->stroke).field1_0x8.gradient = pNVar9;
    if (pNVar9 != (NSVGgradient *)0x0) goto LAB_14240f26b;
  }
  (_Dst->stroke).type = '\0';
LAB_14240f26b:
  _Dst->flags = pNVar12->visible != '\0';
  if (param_1->image->shapes == (NSVGshape *)0x0) {
    param_1->image->shapes = _Dst;
  }
  else {
    param_1->shapesTail->next = _Dst;
  }
  param_1->shapesTail = _Dst;
  return;
}

// nsvg__atof @ 14240f2d0

double __cdecl nsvg__atof(char *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  longlong lVar4;
  char *pcVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *local_res8;
  
  cVar2 = *param_1;
  bVar6 = false;
  uVar9 = (undefined4)__real_3ff0000000000000;
  uVar10 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  bVar1 = false;
  local_res8 = (char *)0x0;
  if (cVar2 != '+') {
    if (cVar2 != '-') goto LAB_14240f321;
    uVar9 = (undefined4)__real_bff0000000000000;
    uVar10 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  cVar2 = param_1[1];
  param_1 = param_1 + 1;
LAB_14240f321:
  dVar8 = 0.0;
  if (((byte)(cVar2 - 0x30U) < 10) &&
     (lVar4 = strtoll(param_1,&local_res8,10), dVar8 = 0.0, param_1 != local_res8)) {
    bVar1 = true;
    dVar8 = (double)lVar4;
    param_1 = local_res8;
  }
  pcVar5 = param_1;
  if ((*param_1 == '.') && (pcVar5 = param_1 + 1, (byte)(param_1[1] - 0x30U) < 10)) {
    lVar4 = strtoll(pcVar5,&local_res8,10);
    bVar6 = pcVar5 != local_res8;
    if (bVar6) {
      dVar7 = pow(__real_4024000000000000,
                  (double)CONCAT44((uint)((ulonglong)
                                          (double)((longlong)local_res8 - (longlong)pcVar5) >> 0x20)
                                   ^ __xmm_80000000000000008000000000000000._4_4_,
                                   SUB84((double)((longlong)local_res8 - (longlong)pcVar5),0) ^
                                   (uint)__xmm_80000000000000008000000000000000));
      dVar8 = dVar8 + dVar7 * (double)lVar4;
      pcVar5 = local_res8;
    }
  }
  if ((bVar1) || (bVar6)) {
    if (((*pcVar5 == 'e') || (*pcVar5 == 'E')) &&
       (lVar3 = strtol(pcVar5 + 1,&local_res8,10), pcVar5 + 1 != local_res8)) {
      dVar7 = pow(__real_4024000000000000,(double)lVar3);
      dVar8 = dVar8 * dVar7;
    }
    dVar8 = (double)CONCAT44(uVar10,uVar9) * dVar8;
  }
  else {
    dVar8 = 0.0;
  }
  return dVar8;
}

// nsvg__cmpEdge @ 14240f450

int __cdecl nsvg__cmpEdge(void *param_1,void *param_2)

{
  if (*(float *)((longlong)param_1 + 4) < *(float *)((longlong)param_2 + 4)) {
    return -1;
  }
  return (int)(*(float *)((longlong)param_2 + 4) < *(float *)((longlong)param_1 + 4));
}

// nsvg__content @ 14240f480

void __cdecl nsvg__content(NSVGparser *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  NSVGstyles *pNVar6;
  int iVar7;
  ulonglong uVar8;
  char *_Str;
  NSVGstyles *pNVar9;
  uint uVar10;
  char *pcVar12;
  char *pcVar11;
  
  if (param_1->styleFlag != false) {
    pcVar12 = (char *)0x0;
    cVar1 = *param_2;
    _Str = param_2;
    pcVar4 = pcVar12;
    pcVar11 = pcVar12;
    while (cVar1 != '\0') {
      iVar7 = (int)pcVar4;
      if (iVar7 == 2) {
        if (cVar1 == '{') {
LAB_14240f612:
          _Str = param_2 + 1;
        }
        else if ((cVar1 == '}') && (pNVar9 = param_1->styles, pcVar4 = pcVar12, 0 < (int)pcVar11)) {
          do {
            sVar2 = strlen(_Str);
            uVar8 = (longlong)param_2 - (longlong)_Str;
            if (sVar2 <= (ulonglong)((longlong)param_2 - (longlong)_Str)) {
              uVar8 = sVar2;
            }
            pvVar3 = malloc(uVar8 + 1);
            pcVar4 = pcVar12;
            if (pvVar3 != (void *)0x0) {
              *(undefined1 *)(uVar8 + (longlong)pvVar3) = 0;
              pcVar4 = memcpy(pvVar3,_Str,uVar8);
            }
            uVar10 = (int)pcVar11 - 1;
            pcVar11 = (char *)(ulonglong)uVar10;
            pNVar9->description = pcVar4;
            pNVar9 = pNVar9->next;
            pcVar4 = pcVar12;
          } while (0 < (int)uVar10);
        }
      }
      else {
        pcVar5 = strchr(" \t\n\v\f\r",(int)cVar1);
        if (((pcVar5 == (char *)0x0) && (cVar1 != '{')) && (cVar1 != ',')) {
          if (iVar7 == 0) {
            pcVar4 = &DAT_00000001;
            _Str = param_2;
          }
        }
        else if (iVar7 == 1) {
          if (*_Str == '.') {
            pNVar9 = param_1->styles;
            pNVar6 = malloc(0x18);
            param_1->styles = pNVar6;
            pNVar6->description = (char *)0x0;
            param_1->styles->next = pNVar9;
            sVar2 = strlen(_Str);
            uVar8 = (longlong)param_2 - (longlong)_Str;
            if (sVar2 <= (ulonglong)((longlong)param_2 - (longlong)_Str)) {
              uVar8 = sVar2;
            }
            pvVar3 = malloc(uVar8 + 1);
            pcVar4 = pcVar12;
            if (pvVar3 != (void *)0x0) {
              *(undefined1 *)(uVar8 + (longlong)pvVar3) = 0;
              pcVar4 = memcpy(pvVar3,_Str,uVar8);
            }
            pcVar11 = (char *)(ulonglong)((int)pcVar11 + 1);
            param_1->styles->name = pcVar4;
          }
          pcVar4 = &DAT_00000002;
          if (cVar1 == 0x2c) {
            pcVar4 = pcVar12;
          }
          goto LAB_14240f612;
        }
      }
      pcVar5 = param_2 + 1;
      param_2 = param_2 + 1;
      cVar1 = *pcVar5;
    }
  }
  return;
}

// nsvg__convertToPixels @ 14240f660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
nsvg__convertToPixels(NSVGparser *param_1,NSVGcoordinate param_2,float param_3,float param_4)

{
  float local_res10;
  
  local_res10 = param_2.value;
  switch(param_2.units) {
  default:
    return local_res10;
  case 2:
    return local_res10 * ___real_3c638e39 * param_1->dpi;
  case 3:
    return local_res10 * __real_3e2aaaab * param_1->dpi;
  case 4:
    return local_res10 * ___real_3d214285 * param_1->dpi;
  case 5:
    return local_res10 * ___real_3ec99326 * param_1->dpi;
  case 6:
    return local_res10 * param_1->dpi;
  case 7:
    return local_res10 * __real_3c23d70a * param_4 + param_3;
  case 8:
    return local_res10 * param_1->attr[param_1->attrHead].fontSize;
  case 9:
    return local_res10 * param_1->attr[param_1->attrHead].fontSize * __real_3f051eb8;
  }
}

// nsvg__createGradient @ 14240f780

NSVGgradient * __cdecl
nsvg__createGradient(NSVGparser *param_1,char *param_2,float *param_3,char *param_4)

{
  NSVGgradientData **ppNVar1;
  char cVar2;
  int iVar3;
  NSVGgradientData *pNVar4;
  NSVGgradientData *_Str1;
  NSVGgradientStop *_Src;
  NSVGcoordinate NVar5;
  int iVar6;
  NSVGgradient *pNVar7;
  NSVGparser *pNVar8;
  NSVGgradient *pNVar9;
  NSVGgradientData *_Str1_00;
  NSVGgradientData *pNVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pNVar4 = param_1->gradients;
  iVar3 = param_1->attrHead;
  _Str1 = pNVar4;
  while( true ) {
    if (_Str1 == (NSVGgradientData *)0x0) {
      return (NSVGgradient *)0x0;
    }
    iVar6 = strcmp(_Str1->id,param_2);
    if (iVar6 == 0) break;
    _Str1 = _Str1->next;
  }
  pNVar10 = _Str1;
  if (_Str1 == (NSVGgradientData *)0x0) {
    return (NSVGgradient *)0x0;
  }
  do {
    _Src = pNVar10->stops;
    _Str1_00 = pNVar4;
    if (_Src != (NSVGgradientStop *)0x0) {
      iVar6 = pNVar10->nstops;
      pNVar7 = malloc((longlong)iVar6 * 8 + 0x28);
      if (pNVar7 == (NSVGgradient *)0x0) {
        return (NSVGgradient *)0x0;
      }
      if (_Str1->units == '\x01') {
        fVar13 = *param_3;
        fVar14 = param_3[1];
        fVar15 = param_3[2] - fVar13;
        fVar16 = param_3[3] - fVar14;
      }
      else {
        fVar13 = param_1->viewMinx;
        fVar14 = param_1->viewMiny;
        fVar15 = param_1->viewWidth;
        fVar16 = param_1->viewHeight;
      }
      cVar2 = _Str1->type;
      if (cVar2 == '\x02') {
        pNVar8 = param_1;
        fVar11 = nsvg__convertToPixels(param_1,(_Str1->field3_0x84).linear.x1,fVar13,fVar15);
        fVar12 = nsvg__convertToPixels(pNVar8,(_Str1->field3_0x84).linear.y1,fVar14,fVar16);
        fVar13 = nsvg__convertToPixels(pNVar8,(_Str1->field3_0x84).linear.x2,fVar13,fVar15);
        fVar13 = fVar13 - fVar11;
        fVar14 = nsvg__convertToPixels(pNVar8,(_Str1->field3_0x84).linear.y2,fVar14,fVar16);
        pNVar7->xform[4] = fVar11;
        pNVar7->xform[1] = (float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000);
        pNVar7->xform[2] = fVar13;
        pNVar7->xform[0] = fVar14 - fVar12;
        pNVar7->xform[3] = fVar14 - fVar12;
        pNVar7->xform[5] = fVar12;
      }
      else {
        pNVar8 = param_1;
        fVar11 = nsvg__convertToPixels
                           (param_1,(_Str1->field3_0x84).linear.x2,0.0,
                            SQRT(fVar16 * fVar16 + fVar15 * fVar15) * __real_3f3504f3);
        NVar5 = (_Str1->field3_0x84).linear.x1;
        pNVar7->xform[0] = fVar11;
        pNVar7->xform[3] = fVar11;
        pNVar7->xform[1] = 0.0;
        pNVar7->xform[2] = 0.0;
        fVar12 = nsvg__convertToPixels(pNVar8,NVar5,fVar13,fVar15);
        NVar5 = (_Str1->field3_0x84).linear.y1;
        pNVar7->xform[4] = fVar12;
        fVar12 = nsvg__convertToPixels(pNVar8,NVar5,fVar14,fVar16);
        NVar5 = (_Str1->field3_0x84).linear.y2;
        fVar11 = __real_3f800000 / fVar11;
        pNVar7->xform[5] = fVar12;
        fVar13 = nsvg__convertToPixels(pNVar8,NVar5,fVar13,fVar15);
        NVar5 = (_Str1->field3_0x84).radial.fy;
        pNVar7->fx = fVar13 * fVar11;
        fVar13 = nsvg__convertToPixels(pNVar8,NVar5,fVar14,fVar16);
        pNVar7->fy = fVar13 * fVar11;
      }
      pNVar9 = pNVar7;
      nsvg__xformMultiply(pNVar7->xform,_Str1->xform);
      nsvg__xformMultiply(pNVar9->xform,param_1->attr[iVar3].xform);
      pNVar7->spread = _Str1->spread;
      memcpy(pNVar7->stops,_Src,(longlong)iVar6 * 8);
      *param_4 = cVar2;
      pNVar7->nstops = iVar6;
      return pNVar7;
    }
    while (iVar6 = strcmp(_Str1_00->id,pNVar10->ref), iVar6 != 0) {
      ppNVar1 = &_Str1_00->next;
      _Str1_00 = *ppNVar1;
      if (*ppNVar1 == (NSVGgradientData *)0x0) {
        return (NSVGgradient *)0x0;
      }
    }
    pNVar10 = _Str1_00;
  } while (_Str1_00 != (NSVGgradientData *)0x0);
  return (NSVGgradient *)0x0;
}

// nsvg__curveBounds @ 14240fab0

void __cdecl nsvg__curveBounds(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  float fVar30;
  double local_b8 [22];
  ulonglong uVar16;
  
  pfVar17 = param_2 + 6;
  fVar20 = param_2[6];
  if (*param_2 <= param_2[6]) {
    fVar20 = *param_2;
  }
  pfVar13 = param_2 + 2;
  pfVar18 = param_2 + 4;
  *param_1 = fVar20;
  fVar30 = param_2[7];
  if (param_2[1] <= param_2[7]) {
    fVar30 = param_2[1];
  }
  param_1[1] = fVar30;
  fVar24 = *pfVar17;
  if (*pfVar17 <= *param_2) {
    fVar24 = *param_2;
  }
  param_1[2] = fVar24;
  fVar23 = param_2[7];
  if (param_2[7] <= param_2[1]) {
    fVar23 = param_2[1];
  }
  param_1[3] = fVar23;
  dVar10 = __real_3fefffffffffdcd1;
  dVar9 = __real_3d719799812dea11;
  dVar8 = __real_4022000000000000;
  dVar7 = __real_4018000000000000;
  dVar6 = __real_4008000000000000;
  dVar5 = __real_bff0000000000000;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3ff0000000000000;
  if ((((*pfVar13 < fVar20) || (fVar24 < *pfVar13)) || (param_2[3] < fVar30)) ||
     (((fVar23 < param_2[3] || (*pfVar18 < fVar20)) ||
      ((fVar24 < *pfVar18 || ((param_2[5] < fVar30 || (fVar23 < param_2[5])))))))) {
    lVar12 = (longlong)param_1 - (longlong)param_2;
    lVar14 = 2;
    do {
      uVar16 = 0;
      uVar15 = 0;
      lVar11 = 0;
      dVar29 = (double)param_2[2];
      local_b8[0] = (double)*param_2 * dVar6;
      auVar27._0_8_ = (double)param_2[4] * dVar7;
      auVar27._8_8_ = 0;
      dVar28 = ((dVar29 * dVar8 - local_b8[0]) - (double)param_2[4] * dVar8) +
               (double)param_2[6] * dVar6;
      local_b8[0] = dVar29 * dVar6 - local_b8[0];
      dVar29 = ((double)*param_2 * dVar7 - dVar29 * __real_4028000000000000) + auVar27._0_8_;
      uVar22 = (uint)((ulonglong)dVar29 >> 0x20);
      if (dVar9 <= (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar4,
                                    SUB84(dVar28,0) & uVar3)) {
        dVar25 = dVar29 * dVar29 - local_b8[0] * __real_4010000000000000 * dVar28;
        if (dVar9 < dVar25) {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = dVar25;
          auVar27 = sqrtpd(auVar27,auVar1);
          local_b8[0] = (auVar27._0_8_ - dVar29) * (__real_3fe0000000000000 / dVar28);
          uVar15 = uVar16;
          if ((dVar9 < local_b8[0]) && (local_b8[0] < dVar10)) {
            lVar11 = 1;
            uVar15 = 1;
          }
          dVar28 = ((double)CONCAT44(uVar22 ^ __xmm_80000000000000008000000000000000._4_4_,
                                     SUB84(dVar29,0) ^ (uint)__xmm_80000000000000008000000000000000)
                   - auVar27._0_8_) * (__real_3fe0000000000000 / dVar28);
          if ((dVar9 < dVar28) && (dVar28 < dVar10)) {
            local_b8[lVar11] = dVar28;
            uVar15 = (ulonglong)((int)uVar15 + 1);
          }
        }
      }
      else {
        uVar19 = SUB84(dVar29,0) & uVar3;
        uVar22 = uVar22 & uVar4;
        uVar15 = uVar16;
        if (((dVar9 <= (double)CONCAT44(uVar22,uVar19) && (double)CONCAT44(uVar22,uVar19) != dVar9)
            && (local_b8[0] = (dVar5 / dVar29) * local_b8[0], dVar9 < local_b8[0])) &&
           (local_b8[0] < dVar10)) {
          uVar15 = 1;
        }
      }
      lVar11 = 0;
      if (3 < uVar15) {
        fVar20 = *(float *)((longlong)param_2 + lVar12);
        fVar30 = *(float *)(lVar12 + 8 + (longlong)param_2);
        do {
          dVar28 = local_b8[lVar11];
          dVar25 = dVar2 - dVar28;
          dVar29 = local_b8[lVar11 + 1];
          dVar26 = dVar2 - dVar29;
          fVar23 = (float)((double)*param_2 * dVar25 * dVar25 * dVar25 +
                           (double)*pfVar13 * dVar25 * dVar6 * dVar28 * dVar25 +
                          ((double)*pfVar17 * dVar28 + (double)*pfVar18 * dVar25 * dVar6) *
                          dVar28 * dVar28);
          fVar24 = fVar23;
          if (fVar20 <= fVar23) {
            fVar24 = fVar20;
          }
          if (fVar23 <= fVar30) {
            fVar23 = fVar30;
          }
          *param_1 = fVar24;
          *(float *)(lVar12 + 8 + (longlong)param_2) = fVar23;
          dVar28 = local_b8[lVar11 + 2];
          dVar25 = dVar2 - dVar28;
          fVar20 = (float)((double)*param_2 * dVar26 * dVar26 * dVar26 +
                           (double)param_2[2] * dVar26 * dVar6 * dVar29 * dVar26 +
                          ((double)param_2[6] * dVar29 + (double)param_2[4] * dVar26 * dVar6) *
                          dVar29 * dVar29);
          if (fVar20 <= fVar24) {
            fVar24 = fVar20;
          }
          if (fVar23 <= fVar20) {
            fVar23 = fVar20;
          }
          *(float *)((longlong)param_2 + lVar12) = fVar24;
          *(float *)(lVar12 + 8 + (longlong)param_2) = fVar23;
          dVar29 = local_b8[lVar11 + 3];
          lVar11 = lVar11 + 4;
          dVar26 = dVar2 - dVar29;
          fVar20 = (float)((double)*param_2 * dVar25 * dVar25 * dVar25 +
                           (double)param_2[2] * dVar25 * dVar6 * dVar28 * dVar25 +
                          ((double)param_2[4] * dVar25 * dVar6 + (double)param_2[6] * dVar28) *
                          dVar28 * dVar28);
          if (fVar20 <= fVar24) {
            fVar24 = fVar20;
          }
          if (fVar23 <= fVar20) {
            fVar23 = fVar20;
          }
          *(float *)((longlong)param_2 + lVar12) = fVar24;
          *(float *)(lVar12 + 8 + (longlong)param_2) = fVar23;
          fVar21 = (float)((double)*param_2 * dVar26 * dVar26 * dVar26 +
                           (double)param_2[2] * dVar26 * dVar6 * dVar29 * dVar26 +
                          ((double)param_2[4] * dVar26 * dVar6 + (double)param_2[6] * dVar29) *
                          dVar29 * dVar29);
          fVar20 = fVar24;
          if (fVar21 <= fVar24) {
            fVar20 = fVar21;
          }
          fVar30 = fVar23;
          if (fVar23 <= fVar21) {
            fVar30 = fVar21;
          }
          *(float *)((longlong)param_2 + lVar12) = fVar20;
          *(float *)(lVar12 + 8 + (longlong)param_2) = fVar30;
        } while (lVar11 < (longlong)(uVar15 - 3));
      }
      if (lVar11 < (longlong)uVar15) {
        fVar20 = *(float *)(lVar12 + 8 + (longlong)param_2);
        fVar30 = *(float *)((longlong)param_2 + lVar12);
        do {
          dVar28 = local_b8[lVar11];
          dVar29 = dVar2 - dVar28;
          lVar11 = lVar11 + 1;
          fVar24 = (float)((double)param_2[2] * dVar29 * dVar6 * dVar28 * dVar29 +
                           (double)*param_2 * dVar29 * dVar29 * dVar29 +
                          ((double)param_2[6] * dVar28 + (double)param_2[4] * dVar29 * dVar6) *
                          dVar28 * dVar28);
          fVar23 = fVar24;
          if (fVar24 <= fVar20) {
            fVar23 = fVar20;
          }
          fVar20 = fVar23;
          if (fVar30 <= fVar24) {
            fVar24 = fVar30;
          }
          *(float *)(lVar12 + 8 + (longlong)param_2) = fVar20;
          *(float *)((longlong)param_2 + lVar12) = fVar24;
          fVar30 = fVar24;
        } while (lVar11 < (longlong)uVar15);
      }
      param_2 = param_2 + 1;
      pfVar13 = pfVar13 + 1;
      pfVar18 = pfVar18 + 1;
      pfVar17 = pfVar17 + 1;
      param_1 = param_1 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// nsvg__endElement @ 1424100b0

void __cdecl nsvg__endElement(NSVGparser *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"g");
  if (iVar1 == 0) {
    if (0 < param_1->attrHead) {
      param_1->attrHead = param_1->attrHead + -1;
      return;
    }
  }
  else {
    iVar1 = strcmp(param_2,"path");
    if (iVar1 == 0) {
      param_1->pathFlag = false;
      return;
    }
    iVar1 = strcmp(param_2,"defs");
    if (iVar1 == 0) {
      param_1->defsFlag = false;
      param_1->parsedDefs = true;
      return;
    }
    iVar1 = strcmp(param_2,"style");
    if (iVar1 == 0) {
      param_1->styleFlag = false;
    }
  }
  return;
}

// nsvg__expandStroke @ 142410170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
nsvg__expandStroke(NSVGrasterizer *param_1,NSVGpoint *param_2,int param_3,int param_4,int param_5,
                  int param_6,float param_7)

{
  undefined4 extraout_EAX;
  uint uVar1;
  undefined4 extraout_EAX_00;
  uint uVar2;
  int iVar3;
  NSVGpoint *pNVar4;
  uint uVar5;
  NSVGpoint *pNVar6;
  ulonglong uVar7;
  bool bVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined1 extraout_var [12];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_res8;
  float local_188;
  NSVGpoint local_180;
  NSVGpoint local_160;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auVar14 [16];
  
  fVar22 = __real_3f000000;
  fVar17 = param_7 * __real_3f000000;
  auVar10._0_4_ = acosf(fVar17 / (fVar17 + param_1->tessTol));
  auVar10._0_4_ = __real_3fc90fdb / auVar10._0_4_;
  iVar3 = (int)auVar10._0_4_;
  if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar10._0_4_)) {
    auVar10._4_4_ = auVar10._0_4_;
    auVar10._8_8_ = 0;
    uVar1 = movmskps(extraout_EAX,auVar10);
    auVar10._0_4_ = (float)(int)(iVar3 + (uVar1 & 1 ^ 1));
  }
  local_180.len = 0.0;
  local_180.dmx = 0.0;
  local_180.dmy = 0.0;
  local_180.flags = '\0';
  local_160.len = 0.0;
  local_160.dmx = 0.0;
  local_160.dmy = 0.0;
  local_160.flags = '\0';
  local_138 = 0.0;
  local_f8 = 0.0;
  uVar1 = (int)auVar10._0_4_;
  if ((int)auVar10._0_4_ < 2) {
    uVar1 = 2;
  }
  local_118 = 0.0;
  local_180.x = 0.0;
  local_180.y = 0.0;
  local_180.dx = 0.0;
  local_180.dy = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  local_160.x = 0.0;
  local_160.y = 0.0;
  local_160.dx = 0.0;
  local_160.dy = 0.0;
  if (param_4 == 0) {
    pNVar4 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  else {
    pNVar4 = param_2;
    param_2 = param_2 + (longlong)param_3 + -1;
  }
  uVar2 = (uint)(param_4 == 0);
  fVar9 = param_2->x;
  auVar10._0_4_ = param_2->y;
  fVar25 = pNVar4->x - fVar9;
  fVar24 = pNVar4->y - auVar10._0_4_;
  fVar15 = SQRT(fVar25 * fVar25 + fVar24 * fVar24);
  if (param_4 == 0) {
    if (__real_358637bd < fVar15) {
      fVar25 = fVar25 * (__real_3f800000 / fVar15);
      fVar24 = fVar24 * (__real_3f800000 / fVar15);
    }
    if (param_6 != 0) {
      if (param_6 != 2) {
        if (param_6 == 1) {
          nsvg__roundCap(param_1,&local_180,&local_160,param_2,fVar25,fVar24,param_7,uVar1,0);
        }
        local_res8 = local_180.x;
        local_188 = local_180.y;
        fVar9 = local_160.x;
        auVar10._0_4_ = local_160.y;
        goto LAB_14241053a;
      }
      auVar10._0_4_ = auVar10._0_4_ - fVar24 * fVar17;
      fVar9 = fVar9 - fVar25 * fVar17;
    }
    local_res8 = fVar9 - fVar24 * fVar17;
    fVar22 = (float)((uint)fVar25 ^ __xmm_80000000800000008000000080000000) * fVar17;
    fVar9 = fVar24 * fVar17 + fVar9;
    local_188 = auVar10._0_4_ - fVar22;
    auVar10._0_4_ = auVar10._0_4_ + fVar22;
    nsvg__addEdge(param_1,local_res8,local_188,fVar9,auVar10._0_4_);
    local_180.y = local_188;
    local_180.x = local_res8;
    local_160.y = auVar10._0_4_;
    local_160.x = fVar9;
  }
  else {
    if (__real_358637bd < fVar15) {
      fVar25 = fVar25 * (__real_3f800000 / fVar15);
      fVar24 = fVar24 * (__real_3f800000 / fVar15);
    }
    auVar10._0_4_ = fVar15 * fVar24 * fVar22 + auVar10._0_4_;
    fVar9 = fVar15 * fVar25 * fVar22 + fVar9;
    local_118 = (float)((uint)fVar25 ^ __xmm_80000000800000008000000080000000) * fVar17;
    local_188 = auVar10._0_4_ - local_118;
    local_118 = local_118 + auVar10._0_4_;
    local_res8 = fVar9 - fVar24 * fVar17;
    local_f8 = fVar24 * fVar17 + fVar9;
    local_128 = CONCAT44(local_188,local_res8);
    uStack_120 = 0;
    local_180.y = local_188;
    local_180.x = local_res8;
    local_180.dx = 0.0;
    local_180.dy = 0.0;
    uStack_f0 = 0;
    uStack_ec = 0;
    local_160.y = local_118;
    local_160.x = local_f8;
    local_160.dx = 0.0;
    local_160.dy = 0.0;
    fVar9 = local_f8;
    auVar10._0_4_ = local_118;
    local_138 = local_188;
    fStack_134 = local_188;
    fStack_130 = local_188;
    fStack_12c = local_188;
    fStack_114 = local_118;
    fStack_110 = local_118;
    fStack_10c = local_118;
    fStack_f4 = local_118;
  }
LAB_14241053a:
  if ((int)uVar2 < param_3) {
    uVar7 = (ulonglong)(param_3 - uVar2);
    pNVar6 = param_2;
    fVar22 = fVar9;
    fVar25 = auVar10._0_4_;
    do {
      param_2 = pNVar4;
      auVar10._0_4_ = __real_40490fdb;
      if ((param_2->flags & 1) == 0) {
        fVar9 = fVar17 * param_2->dmx;
        auVar10._0_4_ = fVar17 * param_2->dmy;
        fVar24 = param_2->x - fVar9;
        fVar9 = fVar9 + param_2->x;
        fVar15 = param_2->y - auVar10._0_4_;
        auVar10._0_4_ = param_2->y + auVar10._0_4_;
        nsvg__addEdge(param_1,fVar24,fVar15,local_res8,local_188);
        nsvg__addEdge(param_1,fVar22,fVar25,fVar9,auVar10._0_4_);
        local_180.y = fVar15;
        local_180.x = fVar24;
        local_160.y = auVar10._0_4_;
        local_160.x = fVar9;
        local_res8 = fVar24;
        local_188 = fVar15;
      }
      else if (param_5 == 1) {
        fVar9 = atan2f((float)((uint)pNVar6->dx ^ __xmm_80000000800000008000000080000000),pNVar6->dy
                      );
        local_140 = fVar9;
        fVar15 = atan2f((float)((uint)param_2->dx ^ __xmm_80000000800000008000000080000000),
                        param_2->dy);
        fVar15 = fVar15 - fVar9;
        bVar8 = false;
        if (fVar15 < auVar10._0_4_) {
          fVar15 = fVar15 + __real_40c90fdb;
          bVar8 = fVar15 < auVar10._0_4_;
        }
        if (!bVar8 && fVar15 != auVar10._0_4_) {
          fVar15 = fVar15 + __real_c0c90fdb;
        }
        auVar11._0_4_ = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar11._4_4_ = extraout_var._0_4_ & _UNK_15061cc74;
        auVar11._8_4_ = extraout_var._4_4_ & _UNK_15061cc78;
        auVar11._12_4_ = extraout_var._8_4_ & _UNK_15061cc7c;
        auVar12._4_12_ = auVar11._4_12_;
        auVar12._0_4_ = auVar11._0_4_ * __real_3ea2f983 * (float)(int)uVar1;
        iVar3 = (int)auVar12._0_4_;
        if ((iVar3 != -0x80000000) && ((float)iVar3 != auVar12._0_4_)) {
          auVar14._0_8_ = auVar12._0_8_;
          auVar14._8_4_ = auVar11._4_4_;
          auVar14._12_4_ = auVar11._4_4_;
          auVar13._8_8_ = auVar14._8_8_;
          auVar13._4_4_ = auVar12._0_4_;
          auVar13._0_4_ = auVar12._0_4_;
          uVar2 = movmskps(extraout_EAX_00,auVar13);
          auVar12 = ZEXT416((uint)(float)(int)(iVar3 + (uVar2 & 1 ^ 1)));
        }
        uVar2 = (uint)auVar12._0_4_;
        if ((int)uVar2 < 2) {
          uVar2 = 2;
        }
        uVar5 = uVar1;
        if (uVar2 <= uVar1) {
          uVar5 = uVar2;
        }
        iVar3 = 0;
        fVar15 = local_res8;
        fVar24 = local_188;
        fVar9 = fVar22;
        auVar10._0_4_ = fVar25;
        if (uVar5 != 0) {
          do {
            __libm_sse2_sincosf_();
            fVar15 = param_2->x - extraout_XMM0_Db * fVar17;
            fVar9 = param_2->x + extraout_XMM0_Db * fVar17;
            fVar24 = param_2->y - extraout_XMM0_Da * fVar17;
            auVar10._0_4_ = param_2->y + extraout_XMM0_Da * fVar17;
            nsvg__addEdge(param_1,fVar15,fVar24,local_res8,local_188);
            nsvg__addEdge(param_1,fVar22,fVar25,fVar9,auVar10._0_4_);
            iVar3 = iVar3 + 1;
            local_res8 = fVar15;
            local_188 = fVar24;
            fVar22 = fVar9;
            fVar25 = auVar10._0_4_;
          } while (iVar3 < (int)uVar5);
        }
        local_180.y = fVar24;
        local_180.x = fVar15;
        local_160.y = auVar10._0_4_;
        local_160.x = fVar9;
        local_res8 = fVar15;
        local_188 = fVar24;
      }
      else if ((param_5 == 2) || ((param_2->flags & 2) != 0)) {
        fVar15 = param_2->y;
        fVar20 = fVar17 * pNVar6->dy;
        fVar9 = param_2->x;
        fVar23 = fVar9 - fVar20;
        fVar24 = (float)((uint)pNVar6->dx ^ __xmm_80000000800000008000000080000000) * fVar17;
        fVar20 = fVar9 + fVar20;
        auVar10._0_4_ = (float)((uint)param_2->dx ^ __xmm_80000000800000008000000080000000) * fVar17
        ;
        fVar21 = fVar17 * param_2->dy;
        fVar16 = fVar15 - fVar24;
        fVar24 = fVar15 + fVar24;
        fVar18 = fVar15 - auVar10._0_4_;
        fVar19 = fVar9 - fVar21;
        fVar9 = fVar9 + fVar21;
        auVar10._0_4_ = auVar10._0_4_ + fVar15;
        nsvg__addEdge(param_1,fVar23,fVar16,local_res8,local_188);
        nsvg__addEdge(param_1,fVar19,fVar18,fVar23,fVar16);
        nsvg__addEdge(param_1,fVar22,fVar25,fVar20,fVar24);
        nsvg__addEdge(param_1,fVar20,fVar24,fVar9,auVar10._0_4_);
        local_180.y = fVar18;
        local_180.x = fVar19;
        local_160.y = auVar10._0_4_;
        local_160.x = fVar9;
        local_res8 = fVar19;
        local_188 = fVar18;
      }
      else {
        nsvg__miterJoin(param_1,&local_180,&local_160,pNVar6,param_2,param_7);
        local_188 = local_180.y;
        local_res8 = local_180.x;
        fVar9 = local_160.x;
        auVar10._0_4_ = local_160.y;
      }
      pNVar4 = param_2 + 1;
      uVar7 = uVar7 - 1;
      pNVar6 = param_2;
      fVar22 = fVar9;
      fVar25 = auVar10._0_4_;
    } while (uVar7 != 0);
  }
  if (param_4 == 0) {
    fVar22 = pNVar4->x;
    fVar25 = pNVar4->y;
    fVar24 = fVar22 - param_2->x;
    fVar20 = fVar25 - param_2->y;
    fVar15 = SQRT(fVar20 * fVar20 + fVar24 * fVar24);
    if (__real_358637bd < fVar15) {
      fVar15 = __real_3f800000 / fVar15;
      fVar24 = fVar24 * fVar15;
      fVar20 = fVar20 * fVar15;
    }
    if (param_6 == 0) {
      fVar21 = fVar25 + fVar24 * fVar17;
      fVar25 = fVar25 - fVar24 * fVar17;
      fVar17 = (float)((uint)(fVar17 * fVar20) ^ __xmm_80000000800000008000000080000000);
      fVar15 = fVar22 - fVar17;
      fVar22 = fVar22 + fVar17;
      nsvg__addEdge(param_1,fVar15,fVar25,fVar22,fVar21);
      nsvg__addEdge(param_1,fVar9,auVar10._0_4_,fVar15,fVar25);
      nsvg__addEdge(param_1,fVar22,fVar21,local_res8,local_188);
    }
    else if (param_6 == 2) {
      fVar24 = fVar24 * fVar17;
      fVar15 = (float)((uint)(fVar20 * fVar17) ^ __xmm_80000000800000008000000080000000);
      fVar17 = (fVar22 + fVar24) - fVar15;
      fVar22 = fVar15 + fVar22 + fVar24;
      fVar20 = (fVar25 - fVar15) + fVar24;
      fVar24 = (fVar25 - fVar15) - fVar24;
      nsvg__addEdge(param_1,fVar17,fVar24,fVar22,fVar20);
      nsvg__addEdge(param_1,fVar9,auVar10._0_4_,fVar17,fVar24);
      nsvg__addEdge(param_1,fVar22,fVar20,local_res8,local_188);
    }
    else if (param_6 == 1) {
      nsvg__roundCap(param_1,&local_160,&local_180,pNVar4,
                     (float)((uint)fVar24 ^ __xmm_80000000800000008000000080000000),
                     (float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000),param_7,uVar1,1)
      ;
    }
  }
  else {
    nsvg__addEdge(param_1,(float)local_128,local_138,local_res8,local_188);
    nsvg__addEdge(param_1,fVar9,auVar10._0_4_,local_f8,local_118);
  }
  return;
}

// nsvg__fillActiveEdges @ 142410c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
nsvg__fillActiveEdges
          (uchar *param_1,int param_2,NSVGactiveEdge *param_3,int param_4,int *param_5,int *param_6,
          char param_7)

{
  uchar *puVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uchar *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  uint uVar21;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar22;
  undefined6 uVar23;
  
  uVar10 = _UNK_150631f6c;
  uVar9 = _UNK_150631f68;
  uVar8 = _UNK_150631f64;
  uVar15 = ___xmm_000000ff000000ff000000ff000000ff;
  uVar21 = 0;
  uVar12 = 0;
  if (param_7 == '\0') {
    for (; param_3 != (NSVGactiveEdge *)0x0; param_3 = param_3->next) {
      uVar24 = param_3->x;
      uVar16 = param_3->dir;
      uVar14 = uVar24;
      if ((uVar12 != 0) && (uVar16 = uVar12 + uVar16, uVar14 = uVar21, uVar16 == 0)) {
        iVar19 = (int)uVar21 >> 10;
        iVar17 = (int)uVar24 >> 10;
        if (iVar19 < *param_5) {
          *param_5 = iVar19;
        }
        if (*param_6 < iVar17) {
          *param_6 = iVar17;
        }
        if ((iVar19 < param_2) && (-1 < iVar17)) {
          if (iVar19 == iVar17) {
            param_1[iVar19] = param_1[iVar19] + (char)((int)((uVar24 - uVar21) * param_4) >> 10);
          }
          else {
            if (iVar19 < 0) {
              iVar19 = -1;
            }
            else {
              param_1[iVar19] =
                   param_1[iVar19] + (char)((int)((0x400 - (uVar21 & 0x3ff)) * param_4) >> 10);
            }
            iVar18 = param_2;
            if (iVar17 < param_2) {
              param_1[iVar17] = param_1[iVar17] + (char)((int)((uVar24 & 0x3ff) * param_4) >> 10);
              iVar18 = iVar17;
            }
            iVar19 = iVar19 + 1;
            if ((iVar19 < iVar18) && (0xf < (uint)(iVar18 - iVar19))) {
              uVar12 = iVar18 - iVar19 & 0x8000000f;
              if ((int)uVar12 < 0) {
                uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
              }
              uVar21 = param_4 & uVar15;
              uVar24 = param_4 & uVar8;
              uVar25 = param_4 & uVar9;
              uVar26 = param_4 & uVar10;
              sVar2 = (short)uVar21;
              cVar4 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar21 - (0xff < sVar2);
              sVar2 = (short)(uVar21 >> 0x10);
              sVar20 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar21 >> 0x10) -
                                (0xff < sVar2),cVar4);
              sVar2 = (short)uVar24;
              cVar5 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar24 - (0xff < sVar2);
              sVar2 = (short)(uVar24 >> 0x10);
              uVar22 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar24 >> 0x10) -
                                (0xff < sVar2),CONCAT12(cVar5,sVar20));
              sVar2 = (short)uVar25;
              cVar6 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar25 - (0xff < sVar2);
              sVar2 = (short)(uVar25 >> 0x10);
              uVar23 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar25 >> 0x10) -
                                (0xff < sVar2),CONCAT14(cVar6,uVar22));
              sVar2 = (short)uVar26;
              cVar7 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar26 - (0xff < sVar2);
              sVar3 = (short)(uVar26 >> 0x10);
              cVar4 = (0 < sVar20) * (sVar20 < 0x100) * cVar4 - (0xff < sVar20);
              sVar2 = (short)((uint)uVar22 >> 0x10);
              cVar5 = (0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2);
              sVar2 = (short)((uint6)uVar23 >> 0x20);
              cVar6 = (0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2);
              sVar2 = (short)(CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar26 >> 0x10) -
                                       (0xff < sVar3),CONCAT16(cVar7,uVar23)) >> 0x30);
              cVar7 = (0 < sVar2) * (sVar2 < 0x100) * cVar7 - (0xff < sVar2);
              puVar11 = param_1 + (longlong)iVar19 + 8;
              do {
                uVar22 = *(undefined4 *)(puVar11 + -8);
                puVar1 = puVar11 + 0x10;
                *(uint *)(puVar11 + -8) =
                     CONCAT13((char)((uint)uVar22 >> 0x18) + cVar7,
                              CONCAT12((char)((uint)uVar22 >> 0x10) + cVar6,
                                       CONCAT11((char)((uint)uVar22 >> 8) + cVar5,
                                                (char)uVar22 + cVar4)));
                iVar19 = iVar19 + 0x10;
                uVar22 = *(undefined4 *)(puVar11 + -4);
                *(uint *)(puVar11 + -4) =
                     CONCAT13(cVar7 + (char)((uint)uVar22 >> 0x18),
                              CONCAT12(cVar6 + (char)((uint)uVar22 >> 0x10),
                                       CONCAT11(cVar5 + (char)((uint)uVar22 >> 8),
                                                cVar4 + (char)uVar22)));
                uVar22 = *(undefined4 *)puVar11;
                *(uint *)puVar11 =
                     CONCAT13(cVar7 + (char)((uint)uVar22 >> 0x18),
                              CONCAT12(cVar6 + (char)((uint)uVar22 >> 0x10),
                                       CONCAT11(cVar5 + (char)((uint)uVar22 >> 8),
                                                cVar4 + (char)uVar22)));
                uVar22 = *(undefined4 *)(puVar11 + 4);
                *(uint *)(puVar11 + 4) =
                     CONCAT13((char)((uint)uVar22 >> 0x18) + cVar7,
                              CONCAT12((char)((uint)uVar22 >> 0x10) + cVar6,
                                       CONCAT11((char)((uint)uVar22 >> 8) + cVar5,
                                                (char)uVar22 + cVar4)));
                puVar11 = puVar1;
              } while ((longlong)(puVar1 + (-8 - (longlong)param_1)) <
                       (longlong)(int)(iVar18 - uVar12));
            }
            lVar13 = (longlong)iVar19;
            if (lVar13 < iVar18) {
              puVar11 = param_1 + lVar13;
              lVar13 = iVar18 - lVar13;
              do {
                *puVar11 = *puVar11 + (char)param_4;
                puVar11 = puVar11 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
          }
        }
      }
      uVar12 = uVar16;
      uVar21 = uVar14;
    }
  }
  else if (param_7 == '\x01') {
    for (; param_3 != (NSVGactiveEdge *)0x0; param_3 = param_3->next) {
      uVar15 = param_3->x;
      if (uVar12 != 0) {
        nsvg__fillScanline(param_1,param_2,uVar21,uVar15,param_4,param_5,param_6);
        uVar15 = uVar21;
      }
      uVar12 = (uint)(uVar12 == 0);
      uVar21 = uVar15;
    }
  }
  return;
}

// nsvg__fillScanline @ 142410ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
nsvg__fillScanline(uchar *param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                  int *param_7)

{
  uchar *puVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  uchar *puVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  uint uVar14;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar15;
  undefined6 uVar16;
  
  iVar12 = param_3 >> 10;
  iVar11 = param_4 >> 10;
  if (iVar12 < *param_6) {
    *param_6 = iVar12;
  }
  if (*param_7 < iVar11) {
    *param_7 = iVar11;
  }
  if ((iVar12 < param_2) && (-1 < iVar11)) {
    if (iVar12 == iVar11) {
      param_1[iVar12] = param_1[iVar12] + (char)((param_4 - param_3) * param_5 >> 10);
      return;
    }
    if (iVar12 < 0) {
      iVar12 = -1;
    }
    else {
      param_1[iVar12] =
           param_1[iVar12] + (char)((int)((0x400 - (param_3 & 0x3ffU)) * param_5) >> 10);
    }
    if (iVar11 < param_2) {
      param_1[iVar11] = param_1[iVar11] + (char)((int)((param_4 & 0x3ffU) * param_5) >> 10);
      param_2 = iVar11;
    }
    iVar12 = iVar12 + 1;
    if ((iVar12 < param_2) && (0xf < (uint)(param_2 - iVar12))) {
      uVar9 = param_2 - iVar12 & 0x8000000f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff0) + 1;
      }
      uVar14 = param_5 & ___xmm_000000ff000000ff000000ff000000ff;
      uVar17 = param_5 & _UNK_150631f64;
      uVar18 = param_5 & _UNK_150631f68;
      uVar19 = param_5 & _UNK_150631f6c;
      sVar2 = (short)uVar14;
      cVar4 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar14 - (0xff < sVar2);
      sVar2 = (short)(uVar14 >> 0x10);
      sVar13 = CONCAT11((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar14 >> 0x10) - (0xff < sVar2),
                        cVar4);
      sVar2 = (short)uVar17;
      cVar5 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar17 - (0xff < sVar2);
      sVar2 = (short)(uVar17 >> 0x10);
      uVar15 = CONCAT13((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar17 >> 0x10) - (0xff < sVar2),
                        CONCAT12(cVar5,sVar13));
      sVar2 = (short)uVar18;
      cVar6 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar18 - (0xff < sVar2);
      sVar2 = (short)(uVar18 >> 0x10);
      uVar16 = CONCAT15((0 < sVar2) * (sVar2 < 0x100) * (char)(uVar18 >> 0x10) - (0xff < sVar2),
                        CONCAT14(cVar6,uVar15));
      sVar2 = (short)uVar19;
      cVar7 = (0 < sVar2) * (sVar2 < 0x100) * (char)uVar19 - (0xff < sVar2);
      sVar3 = (short)(uVar19 >> 0x10);
      cVar4 = (0 < sVar13) * (sVar13 < 0x100) * cVar4 - (0xff < sVar13);
      sVar2 = (short)((uint)uVar15 >> 0x10);
      cVar5 = (0 < sVar2) * (sVar2 < 0x100) * cVar5 - (0xff < sVar2);
      sVar2 = (short)((uint6)uVar16 >> 0x20);
      cVar6 = (0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2);
      sVar2 = (short)(CONCAT17((0 < sVar3) * (sVar3 < 0x100) * (char)(uVar19 >> 0x10) -
                               (0xff < sVar3),CONCAT16(cVar7,uVar16)) >> 0x30);
      cVar7 = (0 < sVar2) * (sVar2 < 0x100) * cVar7 - (0xff < sVar2);
      puVar8 = param_1 + (longlong)iVar12 + 8;
      do {
        uVar15 = *(undefined4 *)(puVar8 + -8);
        puVar1 = puVar8 + 0x10;
        *(uint *)(puVar8 + -8) =
             CONCAT13(cVar7 + (char)((uint)uVar15 >> 0x18),
                      CONCAT12(cVar6 + (char)((uint)uVar15 >> 0x10),
                               CONCAT11(cVar5 + (char)((uint)uVar15 >> 8),cVar4 + (char)uVar15)));
        iVar12 = iVar12 + 0x10;
        uVar15 = *(undefined4 *)(puVar8 + -4);
        *(uint *)(puVar8 + -4) =
             CONCAT13((char)((uint)uVar15 >> 0x18) + cVar7,
                      CONCAT12((char)((uint)uVar15 >> 0x10) + cVar6,
                               CONCAT11((char)((uint)uVar15 >> 8) + cVar5,(char)uVar15 + cVar4)));
        uVar15 = *(undefined4 *)puVar8;
        *(uint *)puVar8 =
             CONCAT13(cVar7 + (char)((uint)uVar15 >> 0x18),
                      CONCAT12(cVar6 + (char)((uint)uVar15 >> 0x10),
                               CONCAT11(cVar5 + (char)((uint)uVar15 >> 8),cVar4 + (char)uVar15)));
        uVar15 = *(undefined4 *)(puVar8 + 4);
        *(uint *)(puVar8 + 4) =
             CONCAT13(cVar7 + (char)((uint)uVar15 >> 0x18),
                      CONCAT12(cVar6 + (char)((uint)uVar15 >> 0x10),
                               CONCAT11(cVar5 + (char)((uint)uVar15 >> 8),cVar4 + (char)uVar15)));
        puVar8 = puVar1;
      } while ((longlong)(puVar1 + (-8 - (longlong)param_1)) < (longlong)(int)(param_2 - uVar9));
    }
    lVar10 = (longlong)iVar12;
    if (lVar10 < param_2) {
      puVar8 = param_1 + lVar10;
      lVar10 = param_2 - lVar10;
      do {
        *puVar8 = *puVar8 + (char)param_5;
        puVar8 = puVar8 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  return;
}

// nsvg__flattenCubicBez @ 142411070

void __cdecl
nsvg__flattenCubicBez
          (NSVGrasterizer *param_1,float param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,float param_9,int param_10,int param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = __real_3f000000;
  while( true ) {
    if (10 < param_10) {
      return;
    }
    fVar5 = param_6 - param_8;
    fVar9 = (param_4 + param_6) * __real_3e800000;
    fVar4 = param_9 - param_3;
    param_6 = (param_6 + param_8) * fVar1;
    fVar2 = (param_3 + param_5) * fVar1;
    fVar10 = (param_5 + param_7) * __real_3e800000;
    fVar3 = param_8 - param_2;
    fVar11 = (param_2 + param_4) * fVar1;
    fVar8 = fVar2 * fVar1 + fVar10;
    fVar6 = param_7 - param_9;
    param_7 = (param_7 + param_9) * fVar1;
    fVar7 = fVar11 * fVar1 + fVar9;
    fVar5 = (float)((uint)((param_4 - param_8) * fVar4 - (param_5 - param_9) * fVar3) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) +
            (float)((uint)(fVar5 * fVar4 - fVar6 * fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar5 * fVar5 < (fVar4 * fVar4 + fVar3 * fVar3) * param_1->tessTol) break;
    param_10 = param_10 + 1;
    param_5 = param_7 * fVar1 + fVar10;
    param_4 = param_6 * fVar1 + fVar9;
    fVar3 = (param_5 + fVar8) * fVar1;
    fVar4 = (param_4 + fVar7) * fVar1;
    nsvg__flattenCubicBez(param_1,param_2,param_3,fVar11,fVar2,fVar7,fVar8,fVar4,fVar3,param_10,0);
    param_2 = fVar4;
    param_3 = fVar3;
  }
  nsvg__addPathPoint(param_1,param_8,param_9,param_11);
  return;
}

// nsvg__flattenShape @ 142411340

void __cdecl
nsvg__flattenShape(NSVGrasterizer *param_1,NSVGshape *param_2,float param_3,float param_4)

{
  float *pfVar1;
  NSVGpoint *pNVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  NSVGpath *pNVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pNVar10 = param_2->paths;
  if (pNVar10 != (NSVGpath *)0x0) {
    uVar6 = 0;
    do {
      iVar5 = 0;
      param_1->npoints = 0;
      fVar13 = pNVar10->pts[1];
      fVar14 = *pNVar10->pts;
      if (param_1->cpoints < 1) {
        param_1->cpoints = 0x40;
        pNVar2 = realloc(param_1->points,0x800);
        param_1->points = pNVar2;
        if (pNVar2 != (NSVGpoint *)0x0) {
          iVar5 = param_1->npoints;
          goto LAB_1424113d1;
        }
      }
      else {
LAB_1424113d1:
        pNVar2 = param_1->points;
        pNVar2[iVar5].x = param_3 * fVar14;
        pNVar2[iVar5].y = param_4 * fVar13;
        pNVar2[iVar5].flags = '\0';
        param_1->npoints = param_1->npoints + 1;
      }
      uVar4 = uVar6;
      uVar8 = uVar6;
      if (0 < pNVar10->npts + -1) {
        do {
          pfVar1 = pNVar10->pts;
          nsvg__flattenCubicBez
                    (param_1,param_3 * *(float *)(uVar8 + (longlong)pfVar1),
                     param_4 * *(float *)(uVar8 + 4 + (longlong)pfVar1),
                     param_3 * *(float *)(uVar8 + 8 + (longlong)pfVar1),
                     param_4 * *(float *)(uVar8 + 0xc + (longlong)pfVar1),
                     param_3 * *(float *)(uVar8 + 0x10 + (longlong)pfVar1),
                     param_4 * *(float *)(uVar8 + 0x14 + (longlong)pfVar1),
                     param_3 * *(float *)(uVar8 + 0x18 + (longlong)pfVar1),
                     param_4 * *(float *)(uVar8 + 0x1c + (longlong)pfVar1),0,0);
          uVar7 = (int)uVar4 + 3;
          uVar4 = (ulonglong)uVar7;
          uVar8 = uVar8 + 0x18;
        } while ((int)uVar7 < pNVar10->npts + -1);
      }
      fVar13 = param_4 * pNVar10->pts[1];
      fVar14 = param_3 * *pNVar10->pts;
      iVar5 = param_1->npoints;
      if ((iVar5 < 1) ||
         (fVar12 = fVar13 - param_1->points[(longlong)iVar5 + -1].y,
         fVar11 = fVar14 - param_1->points[(longlong)iVar5 + -1].x,
         param_1->distTol * param_1->distTol <= fVar12 * fVar12 + fVar11 * fVar11)) {
        iVar3 = param_1->cpoints;
        if (iVar3 < iVar5 + 1) {
          if (iVar3 < 1) {
            iVar3 = 0x40;
          }
          else {
            iVar3 = iVar3 * 2;
          }
          param_1->cpoints = iVar3;
          pNVar2 = realloc(param_1->points,(longlong)iVar3 << 5);
          param_1->points = pNVar2;
          if (pNVar2 == (NSVGpoint *)0x0) goto LAB_14241154a;
        }
        iVar5 = param_1->npoints;
        pNVar2 = param_1->points;
        pNVar2[iVar5].x = fVar14;
        pNVar2[iVar5].y = fVar13;
        pNVar2[iVar5].flags = '\0';
        param_1->npoints = param_1->npoints + 1;
      }
LAB_14241154a:
      if (0 < param_1->npoints) {
        uVar4 = (longlong)(param_1->npoints + -1) << 5;
        uVar8 = uVar6;
        uVar9 = uVar6;
        do {
          pNVar2 = param_1->points;
          nsvg__addEdge(param_1,*(float *)((longlong)&pNVar2->x + uVar4),
                        *(float *)((longlong)&pNVar2->y + uVar4),
                        *(float *)((longlong)&pNVar2->x + uVar9),
                        *(float *)((longlong)&pNVar2->y + uVar9));
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar4 = uVar9;
          uVar9 = uVar9 + 0x20;
        } while ((int)uVar7 < param_1->npoints);
      }
      pNVar10 = pNVar10->next;
    } while (pNVar10 != (NSVGpath *)0x0);
  }
  return;
}

// nsvg__flattenShapeStroke @ 1424115f0

void __cdecl
nsvg__flattenShapeStroke(NSVGrasterizer *param_1,NSVGshape *param_2,float param_3,float param_4)

{
  float fVar1;
  byte bVar2;
  NSVGpath *pNVar3;
  NSVGpoint *pNVar4;
  undefined8 uVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  NSVGpoint *pNVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  pNVar3 = param_2->paths;
  iVar13 = (int)param_2->strokeLineCap;
  iVar21 = (int)param_2->strokeLineJoin;
  fVar1 = param_2->miterLimit;
  fVar29 = param_3 + param_4;
  fVar28 = fVar29 * param_2->strokeWidth * __real_3f000000;
  fVar25 = __real_3f000000;
  do {
    if (pNVar3 == (NSVGpath *)0x0) {
      return;
    }
    uVar14 = 0;
    param_1->npoints = 0;
    fVar22 = pNVar3->pts[1];
    fVar24 = *pNVar3->pts;
    if (param_1->cpoints < 1) {
      param_1->cpoints = 0x40;
      pNVar9 = realloc(param_1->points,0x800);
      param_1->points = pNVar9;
      if (pNVar9 != (NSVGpoint *)0x0) goto LAB_1424116fd;
    }
    else {
LAB_1424116fd:
      iVar16 = param_1->npoints;
      pNVar9 = param_1->points;
      pNVar9[iVar16].x = param_3 * fVar24;
      pNVar9[iVar16].y = param_4 * fVar22;
      pNVar9[iVar16].flags = '\x01';
      param_1->npoints = param_1->npoints + 1;
    }
    uVar17 = uVar14;
    uVar19 = uVar14;
    if (0 < pNVar3->npts + -1) {
      do {
        pfVar10 = pNVar3->pts;
        nsvg__flattenCubicBez
                  (param_1,param_3 * *(float *)(uVar19 + (longlong)pfVar10),
                   param_4 * *(float *)(uVar19 + 4 + (longlong)pfVar10),
                   param_3 * *(float *)(uVar19 + 8 + (longlong)pfVar10),
                   param_4 * *(float *)(uVar19 + 0xc + (longlong)pfVar10),
                   param_3 * *(float *)(uVar19 + 0x10 + (longlong)pfVar10),
                   param_4 * *(float *)(uVar19 + 0x14 + (longlong)pfVar10),
                   param_3 * *(float *)(uVar19 + 0x18 + (longlong)pfVar10),
                   param_4 * *(float *)(uVar19 + 0x1c + (longlong)pfVar10),0,1);
        uVar15 = (int)uVar17 + 3;
        uVar17 = (ulonglong)uVar15;
        uVar19 = uVar19 + 0x18;
      } while ((int)uVar15 < pNVar3->npts + -1);
    }
    iVar16 = param_1->npoints;
    if (1 < iVar16) {
      pNVar9 = param_1->points;
      iVar18 = (int)pNVar3->closed;
      fVar24 = pNVar9->y - pNVar9[(longlong)iVar16 + -1].y;
      fVar22 = pNVar9->x - pNVar9[(longlong)iVar16 + -1].x;
      if (fVar24 * fVar24 + fVar22 * fVar22 < param_1->distTol * param_1->distTol) {
        param_1->npoints = iVar16 + -1;
        iVar18 = 1;
        iVar16 = iVar16 + -1;
      }
      if (param_2->strokeDashCount < '\x01') {
        nsvg__prepareStroke(param_1,fVar1,iVar21);
        nsvg__expandStroke(param_1,param_1->points,param_1->npoints,iVar18,iVar21,iVar13,fVar28);
      }
      else {
        bVar6 = true;
        if (iVar18 != 0) {
          iVar18 = param_1->cpoints;
          fVar22 = pNVar9->x;
          fVar24 = pNVar9->y;
          fVar23 = pNVar9->dx;
          fVar26 = pNVar9->dy;
          fVar27 = pNVar9->len;
          fVar7 = pNVar9->dmx;
          uVar5 = *(undefined8 *)&pNVar9->dmy;
          if (iVar18 < iVar16 + 1) {
            iVar16 = iVar18 * 2;
            if (iVar18 < 1) {
              iVar16 = 0x40;
            }
            param_1->cpoints = iVar16;
            pNVar9 = realloc(pNVar9,(longlong)iVar16 << 5);
            param_1->points = pNVar9;
            if (pNVar9 == (NSVGpoint *)0x0) goto LAB_142411898;
            iVar16 = param_1->npoints;
          }
          pNVar4 = pNVar9 + iVar16;
          pNVar4->x = fVar22;
          pNVar4->y = fVar24;
          pNVar4->dx = fVar23;
          pNVar4->dy = fVar26;
          pNVar9 = pNVar9 + iVar16;
          pNVar9->len = fVar27;
          pNVar9->dmx = fVar7;
          *(undefined8 *)(&pNVar9->len + 2) = uVar5;
          param_1->npoints = param_1->npoints + 1;
        }
LAB_142411898:
        iVar16 = param_1->npoints;
        pNVar9 = param_1->points2;
        if (param_1->cpoints2 < iVar16) {
          param_1->cpoints2 = iVar16;
          pNVar9 = realloc(pNVar9,(longlong)iVar16 << 5);
          param_1->points2 = pNVar9;
          if (pNVar9 != (NSVGpoint *)0x0) {
            iVar16 = param_1->npoints;
            goto LAB_1424118c4;
          }
        }
        else {
LAB_1424118c4:
          memcpy(pNVar9,param_1->points,(longlong)iVar16 << 5);
          param_1->npoints2 = param_1->npoints;
        }
        pNVar9 = param_1->points2;
        param_1->npoints = 0;
        local_f8 = pNVar9->x;
        fStack_f4 = pNVar9->y;
        fStack_f0 = pNVar9->dx;
        fStack_ec = pNVar9->dy;
        local_e8 = pNVar9->len;
        fStack_e4 = pNVar9->dmx;
        fStack_e0 = pNVar9->dmy;
        fStack_dc = *(float *)&pNVar9->flags;
        iVar16 = 0;
        if (param_1->cpoints < 1) {
          param_1->cpoints = 0x40;
          pNVar9 = realloc(param_1->points,0x800);
          param_1->points = pNVar9;
          if (pNVar9 != (NSVGpoint *)0x0) {
            iVar16 = param_1->npoints;
            goto LAB_142411926;
          }
        }
        else {
LAB_142411926:
          pNVar4 = param_1->points;
          pNVar9 = pNVar4 + iVar16;
          pNVar9->x = local_f8;
          pNVar9->y = fStack_f4;
          pNVar9->dx = fStack_f0;
          pNVar9->dy = fStack_ec;
          pfVar10 = &pNVar4[iVar16].len;
          *pfVar10 = local_e8;
          pfVar10[1] = fStack_e4;
          pfVar10[2] = fStack_e0;
          pfVar10[3] = fStack_dc;
          param_1->npoints = param_1->npoints + 1;
        }
        lVar11 = (longlong)param_2->strokeDashCount;
        lVar20 = 0;
        fVar22 = 0.0;
        if (3 < lVar11) {
          pfVar10 = param_2->strokeDashArray + 1;
          lVar12 = (lVar11 - 4U >> 2) + 1;
          lVar20 = lVar12 * 4;
          do {
            fVar22 = fVar22 + pfVar10[-1] + *pfVar10 + pfVar10[1] + pfVar10[2];
            pfVar10 = pfVar10 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if (lVar20 < lVar11) {
          lVar11 = lVar11 - lVar20;
          pfVar10 = param_2->strokeDashArray + lVar20;
          do {
            fVar22 = fVar22 + *pfVar10;
            pfVar10 = pfVar10 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        bVar2 = param_2->strokeDashCount;
        if ((bVar2 & 1) != 0) {
          fVar22 = fVar22 + fVar22;
        }
        fVar24 = fmodf(param_2->strokeDashOffset,fVar22);
        if (fVar24 < 0.0) {
          fVar24 = fVar24 + fVar22;
        }
        fVar22 = param_2->strokeDashArray[0];
        if (fVar22 < fVar24) {
          do {
            fVar24 = fVar24 - fVar22;
            uVar14 = (ulonglong)(((int)uVar14 + 1) % (int)(char)bVar2);
            fVar22 = param_2->strokeDashArray[uVar14];
          } while (fVar22 < fVar24);
        }
        iVar16 = 1;
        fVar22 = (param_2->strokeDashArray[(int)uVar14] - fVar24) * fVar29 * fVar25;
        if (1 < param_1->npoints2) {
          lVar20 = 0x20;
          fVar24 = 0.0;
          do {
            pNVar9 = param_1->points2;
            fVar25 = *(float *)((longlong)&pNVar9->x + lVar20) - local_f8;
            fVar26 = *(float *)((longlong)&pNVar9->y + lVar20) - fStack_f4;
            fVar27 = SQRT(fVar26 * fVar26 + fVar25 * fVar25);
            fVar23 = fVar27 + fVar24;
            if (fVar23 <= fVar22) {
              pfVar10 = (float *)((longlong)&pNVar9->len + lVar20);
              local_e8 = *pfVar10;
              fStack_e4 = pfVar10[1];
              fStack_e0 = pfVar10[2];
              fStack_dc = pfVar10[3];
              iVar18 = param_1->cpoints;
              pfVar10 = (float *)((longlong)&pNVar9->x + lVar20);
              local_f8 = *pfVar10;
              fStack_f4 = pfVar10[1];
              fStack_f0 = pfVar10[2];
              fStack_ec = pfVar10[3];
              if (iVar18 < param_1->npoints + 1) {
                iVar8 = iVar18 * 2;
                if (iVar18 < 1) {
                  iVar8 = 0x40;
                }
                param_1->cpoints = iVar8;
                pNVar9 = realloc(param_1->points,(longlong)iVar8 << 5);
                param_1->points = pNVar9;
                if (pNVar9 != (NSVGpoint *)0x0) goto LAB_142411be4;
              }
              else {
LAB_142411be4:
                iVar18 = param_1->npoints;
                pNVar4 = param_1->points;
                pNVar9 = pNVar4 + iVar18;
                pNVar9->x = local_f8;
                pNVar9->y = fStack_f4;
                pNVar9->dx = fStack_f0;
                pNVar9->dy = fStack_ec;
                pfVar10 = &pNVar4[iVar18].len;
                *pfVar10 = local_e8;
                pfVar10[1] = fStack_e4;
                pfVar10[2] = fStack_e0;
                pfVar10[3] = fStack_dc;
                param_1->npoints = param_1->npoints + 1;
              }
              iVar16 = iVar16 + 1;
              lVar20 = lVar20 + 0x20;
            }
            else {
              fVar27 = (fVar22 - fVar24) / fVar27;
              fStack_f4 = fVar27 * fVar26 + fStack_f4;
              local_f8 = fVar27 * fVar25 + local_f8;
              nsvg__addPathPoint(param_1,local_f8,fStack_f4,1);
              if ((1 < param_1->npoints) && (bVar6)) {
                nsvg__prepareStroke(param_1,fVar1,iVar21);
                nsvg__expandStroke(param_1,param_1->points,param_1->npoints,0,iVar21,iVar13,fVar28);
              }
              bVar6 = !bVar6;
              fStack_dc = (float)CONCAT31(fStack_dc._1_3_,1);
              fVar23 = 0.0;
              uVar14 = (ulonglong)(((int)uVar14 + 1) % (int)param_2->strokeDashCount);
              fVar25 = param_2->strokeDashArray[uVar14];
              param_1->npoints = 0;
              fVar22 = fVar29 * fVar25 * __real_3f000000;
              if (param_1->cpoints < 1) {
                param_1->cpoints = 0x40;
                pNVar9 = realloc(param_1->points,0x800);
                param_1->points = pNVar9;
                if (pNVar9 == (NSVGpoint *)0x0) goto LAB_142411c10;
              }
              iVar18 = param_1->npoints;
              pNVar4 = param_1->points;
              pNVar9 = pNVar4 + iVar18;
              pNVar9->x = local_f8;
              pNVar9->y = fStack_f4;
              pNVar9->dx = fStack_f0;
              pNVar9->dy = fStack_ec;
              pNVar4 = pNVar4 + iVar18;
              pNVar4->len = local_e8;
              pNVar4->dmx = fStack_e4;
              *(ulonglong *)(&pNVar4->len + 2) = CONCAT44(fStack_dc,fStack_e0);
              param_1->npoints = param_1->npoints + 1;
            }
LAB_142411c10:
            fVar25 = __real_3f000000;
            fVar24 = fVar23;
          } while (iVar16 < param_1->npoints2);
        }
        if ((1 < param_1->npoints) && (bVar6)) {
          nsvg__expandStroke(param_1,param_1->points,param_1->npoints,0,iVar21,iVar13,fVar28);
        }
      }
    }
    pNVar3 = pNVar3->next;
  } while( true );
}

// nsvg__getArgsPerElement @ 142411d30

int __cdecl nsvg__getArgsPerElement(char param_1)

{
  switch(param_1) {
  case 'A':
  case 'a':
    return 7;
  default:
    return 0;
  case 'C':
  case 'c':
    return 6;
  case 'H':
  case 'V':
  case 'h':
  case 'v':
    return 1;
  case 'L':
  case 'M':
  case 'T':
  case 'l':
  case 'm':
  case 't':
    return 2;
  case 'Q':
  case 'S':
  case 'q':
  case 's':
    return 4;
  }
}

// nsvg__getLocalBounds @ 142411dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl nsvg__getLocalBounds(float *param_1,NSVGshape *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  NSVGpath *pNVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_168 [32];
  int local_148;
  float local_140;
  undefined4 uStack_13c;
  int local_138;
  float *local_130;
  float *local_128;
  float *local_120;
  float *local_118;
  float *local_110;
  longlong local_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStack_168;
  pNVar3 = param_2->paths;
  local_148 = 1;
  if (pNVar3 != (NSVGpath *)0x0) {
    pfVar1 = param_3 + 5;
    _local_140 = CONCAT44(uStack_13c,param_3[5]);
    fVar4 = param_3[2];
    fVar7 = *param_3;
    fVar8 = param_3[4];
    fVar5 = param_3[1];
    fVar6 = param_3[3];
    do {
      pfVar2 = pNVar3->pts;
      local_138 = 0;
      local_f0 = fVar4 * pfVar2[1] + *pfVar2 * fVar7 + fVar8;
      local_ec = fVar5 * *pfVar2 + fVar6 * pfVar2[1] + local_140;
      fVar10 = fVar4;
      fVar11 = fVar7;
      fVar12 = fVar8;
      fVar13 = fVar5;
      fVar14 = fVar6;
      if (0 < pNVar3->npts + -1) {
        local_108 = 0;
        fVar9 = local_140;
        do {
          fVar10 = *(float *)((longlong)pfVar2 + local_108 + 0x18);
          local_e8 = fVar7 * *(float *)((longlong)pfVar2 + local_108 + 8) +
                     fVar4 * *(float *)((longlong)pfVar2 + local_108 + 0xc) + fVar8;
          local_e4 = fVar5 * *(float *)((longlong)pfVar2 + local_108 + 8) +
                     fVar6 * *(float *)((longlong)pfVar2 + local_108 + 0xc) + fVar9;
          local_e0 = fVar7 * *(float *)((longlong)pfVar2 + local_108 + 0x10) +
                     fVar4 * *(float *)((longlong)pfVar2 + local_108 + 0x14) + fVar8;
          local_dc = fVar5 * *(float *)((longlong)pfVar2 + local_108 + 0x10) +
                     fVar6 * *(float *)((longlong)pfVar2 + local_108 + 0x14) + fVar9;
          local_d8 = fVar10 * fVar7 + fVar4 * *(float *)((longlong)pfVar2 + local_108 + 0x1c) +
                     fVar8;
          local_d4 = fVar10 * fVar5 + fVar6 * *(float *)((longlong)pfVar2 + local_108 + 0x1c) +
                     fVar9;
          local_108 = local_108 + 0x18;
          nsvg__curveBounds(&local_100,&local_f0);
          if (local_148 == 0) {
            fVar4 = *param_1;
            if (local_100 <= *param_1) {
              fVar4 = local_100;
            }
            fVar5 = param_1[1];
            if (fStack_fc <= param_1[1]) {
              fVar5 = fStack_fc;
            }
            *param_1 = fVar4;
            fVar4 = fStack_f8;
            if (fStack_f8 <= param_1[2]) {
              fVar4 = param_1[2];
            }
            param_1[1] = fVar5;
            fVar5 = param_1[3];
            if (param_1[3] <= fStack_f4) {
              fVar5 = fStack_f4;
            }
            param_1[2] = fVar4;
            param_1[3] = fVar5;
          }
          else {
            local_148 = 0;
            *(ulonglong *)param_1 = CONCAT44(fStack_fc,local_100);
            *(ulonglong *)(param_1 + 2) = CONCAT44(fStack_f4,fStack_f8);
          }
          local_120 = param_3 + 3;
          fVar10 = param_3[2];
          fVar4 = param_3[2];
          fVar11 = *param_3;
          local_138 = local_138 + 3;
          fVar5 = param_3[1];
          fVar13 = param_3[1];
          fVar8 = param_3[4];
          fVar12 = param_3[4];
          fVar7 = *param_3;
          pfVar2 = pNVar3->pts;
          fVar9 = *pfVar1;
          uStack_13c = (undefined4)((ulonglong)pNVar3 >> 0x20);
          _local_140 = CONCAT44(uStack_13c,*pfVar1);
          fVar6 = *local_120;
          fVar14 = *local_120;
          local_f0 = local_d8;
          local_ec = local_d4;
          local_130 = pfVar1;
          local_128 = pfVar1;
          local_118 = local_120;
          local_110 = pfVar2;
        } while (local_138 < pNVar3->npts + -1);
      }
      pNVar3 = pNVar3->next;
      fVar4 = fVar10;
      fVar7 = fVar11;
      fVar8 = fVar12;
      fVar5 = fVar13;
      fVar6 = fVar14;
    } while (pNVar3 != (NSVGpath *)0x0);
  }
  return;
}

// nsvg__initPaint @ 1424121f0

void __cdecl nsvg__initPaint(NSVGcachedPaint *param_1,NSVGpaint *param_2,float param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  NSVGgradient *pNVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  NSVGgradientStop *pNVar17;
  NSVGcachedPaint *pNVar18;
  NSVGgradient *pNVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_res10;
  
  param_1->type = param_2->type;
  if (param_2->type != '\x01') {
    pNVar19 = (param_2->field1_0x8).gradient;
    param_1->spread = pNVar19->spread;
    uVar1 = *(undefined8 *)(pNVar19->xform + 2);
    *(undefined8 *)param_1->xform = *(undefined8 *)pNVar19->xform;
    *(undefined8 *)(param_1->xform + 2) = uVar1;
    *(undefined8 *)(param_1->xform + 4) = *(undefined8 *)(pNVar19->xform + 4);
    if (pNVar19->nstops == 0) {
      lVar9 = 8;
      puVar5 = param_1->colors;
      do {
        puVar5[0] = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        puVar5[0xe] = 0;
        puVar5[0xf] = 0;
        puVar5[0x10] = 0;
        puVar5[0x11] = 0;
        puVar5[0x12] = 0;
        puVar5[0x13] = 0;
        puVar5[0x14] = 0;
        puVar5[0x15] = 0;
        puVar5[0x16] = 0;
        puVar5[0x17] = 0;
        puVar5[0x18] = 0;
        puVar5[0x19] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x1f] = 0;
        lVar9 = lVar9 + -1;
        puVar5 = puVar5 + 0x20;
      } while (lVar9 != 0);
    }
    fVar3 = __real_43800000;
    fVar2 = __real_437f0000;
    fVar20 = __real_3f800000;
    if (pNVar19->nstops == 1) {
      if (0.0 <= param_3) {
        if (__real_3f800000 <= param_3) {
          param_3 = __real_3f800000;
        }
        lVar9 = 0x20;
        iVar13 = (int)(param_3 * __real_43800000);
        pNVar19 = pNVar19 + 1;
        do {
          pNVar18 = (NSVGcachedPaint *)(param_1->colors + 1);
          uVar10 = pNVar19[-1].stops[0].color;
          param_1->colors[0] =
               ((((uVar10 >> 0x18) * iVar13 >> 8 & 0xff) << 8 | uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 8 & 0xff) << 8 | uVar10 & 0xff;
          fVar20 = pNVar19->xform[0];
          uVar10 = (((((uint)fVar20 >> 0x18) * iVar13 >> 8 & 0xff) << 8 |
                    (uint)fVar20 >> 0x10 & 0xff) << 8 | (uint)fVar20 >> 8 & 0xff) << 8 |
                   (uint)fVar20 & 0xff;
          pNVar18->type = (char)uVar10;
          pNVar18->spread = (char)(uVar10 >> 8);
          *(short *)&pNVar18->field_0x2 = (short)(uVar10 >> 0x10);
          fVar20 = pNVar19->xform[2];
          param_1->colors[2] =
               (((((uint)fVar20 >> 0x18) * iVar13 >> 8 & 0xff) << 8 | (uint)fVar20 >> 0x10 & 0xff)
                << 8 | (uint)fVar20 >> 8 & 0xff) << 8 | (uint)fVar20 & 0xff;
          fVar20 = pNVar19->xform[4];
          param_1->colors[3] =
               (((((uint)fVar20 >> 0x18) * iVar13 >> 8 & 0xff) << 8 | (uint)fVar20 >> 0x10 & 0xff)
                << 8 | (uint)fVar20 >> 8 & 0xff) << 8 | (uint)fVar20 & 0xff;
          uVar10 = *(uint *)&pNVar19->spread;
          param_1->colors[4] =
               ((((uVar10 >> 0x18) * iVar13 >> 8 & 0xff) << 8 | uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 8 & 0xff) << 8 | uVar10 & 0xff;
          fVar20 = pNVar19->fy;
          param_1->colors[5] =
               (((((uint)fVar20 >> 0x18) * iVar13 >> 8 & 0xff) << 8 | (uint)fVar20 >> 0x10 & 0xff)
                << 8 | (uint)fVar20 >> 8 & 0xff) << 8 | (uint)fVar20 & 0xff;
          uVar10 = pNVar19->stops[0].color;
          param_1->colors[6] =
               ((((uVar10 >> 0x18) * iVar13 >> 8 & 0xff) << 8 | uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 8 & 0xff) << 8 | uVar10 & 0xff;
          fVar20 = pNVar19[1].xform[0];
          param_1->colors[7] =
               (((((uint)fVar20 >> 0x18) * iVar13 >> 8 & 0xff) << 8 | (uint)fVar20 >> 0x10 & 0xff)
                << 8 | (uint)fVar20 >> 8 & 0xff) << 8 | (uint)fVar20 & 0xff;
          lVar9 = lVar9 + -1;
          pNVar19 = (NSVGgradient *)(pNVar19[1].xform + 4);
          param_1 = pNVar18;
        } while (lVar9 != 0);
      }
      else {
        pNVar17 = pNVar19->stops;
        lVar9 = 0x100;
        puVar5 = param_1->colors;
        do {
          uVar10 = pNVar17->color;
          pNVar17 = pNVar17 + 1;
          *puVar5 = ((uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 8 & 0xff) << 8 | uVar10 & 0xff;
          lVar9 = lVar9 + -1;
          puVar5 = puVar5 + 1;
        } while (lVar9 != 0);
      }
    }
    else {
      uVar16 = 0;
      uVar10 = pNVar19->stops[0].color;
      fVar25 = param_3;
      if (__real_3f800000 <= param_3) {
        fVar25 = __real_3f800000;
      }
      fVar21 = fVar25;
      if (param_3 < 0.0) {
        fVar21 = 0.0;
      }
      fVar21 = fVar21 * __real_43800000;
      fVar22 = pNVar19->stops[0].offset;
      if (0.0 <= fVar22) {
        if (__real_3f800000 <= fVar22) {
          fVar22 = __real_3f800000;
        }
      }
      else {
        fVar22 = 0.0;
      }
      fVar24 = pNVar19->stops[(longlong)pNVar19->nstops + -1].offset;
      fVar23 = fVar22;
      if ((fVar22 <= fVar24) && (fVar23 = fVar24, __real_3f800000 <= fVar24)) {
        fVar23 = __real_3f800000;
      }
      iVar13 = (int)(fVar23 * __real_437f0000);
      lVar9 = (longlong)(int)(fVar22 * __real_437f0000);
      if (0 < (int)(fVar22 * __real_437f0000)) {
        puVar5 = param_1->colors;
        for (; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar5 = ((((int)fVar21 * (uVar10 >> 0x18) >> 8 & 0xff) << 8 | uVar10 >> 0x10 & 0xff) <<
                     8 | uVar10 >> 8 & 0xff) << 8 | uVar10 & 0xff;
          puVar5 = puVar5 + 1;
        }
      }
      local_res10 = 0;
      if (0 < pNVar19->nstops + -1) {
        pNVar12 = pNVar19 + 1;
        do {
          uVar10 = pNVar12[-1].stops[0].color;
          fVar21 = fVar25;
          if (param_3 < 0.0) {
            fVar21 = 0.0;
          }
          fVar22 = pNVar12->xform[0];
          fVar24 = fVar25;
          if (param_3 < 0.0) {
            fVar24 = 0.0;
          }
          fVar23 = pNVar12[-1].stops[0].offset;
          uVar15 = (int)(fVar24 * fVar3) * ((uint)fVar22 >> 0x18) >> 8 & 0xff;
          uVar6 = (uint)fVar22 >> 0x10 & 0xff;
          uVar7 = (uint)fVar22 >> 8 & 0xff;
          uVar16 = ((uVar15 << 8 | uVar6) << 8 | uVar7) << 8 | (uint)fVar22 & 0xff;
          fVar24 = 0.0;
          if ((0.0 <= fVar23) && (fVar24 = fVar23, fVar20 <= fVar23)) {
            fVar24 = fVar20;
          }
          fVar23 = pNVar12->xform[1];
          if (0.0 <= fVar23) {
            if (fVar20 <= fVar23) {
              fVar23 = fVar20;
            }
          }
          else {
            fVar23 = 0.0;
          }
          iVar13 = (int)(fVar23 * fVar2);
          iVar8 = (int)(fVar24 * fVar2);
          iVar4 = iVar13 - iVar8;
          if (0 < iVar4) {
            lVar9 = (longlong)iVar4;
            puVar5 = param_1->colors + iVar8;
            fVar24 = 0.0;
            do {
              if (0.0 <= fVar24) {
                fVar23 = fVar24;
                if (fVar20 <= fVar24) {
                  fVar23 = fVar20;
                }
              }
              else {
                fVar23 = 0.0;
              }
              fVar24 = fVar24 + fVar20 / (float)iVar4;
              iVar14 = (int)(fVar23 * fVar3);
              iVar8 = 0x100 - iVar14;
              *puVar5 = (((((int)(fVar21 * fVar3) * (uVar10 >> 0x18) >> 8 & 0xff) * iVar8 +
                           uVar15 * iVar14 >> 8 & 0xff) << 8 |
                         iVar8 * (uVar10 >> 0x10 & 0xff) + uVar6 * iVar14 >> 8 & 0xff) << 8 |
                        (uVar10 >> 8 & 0xff) * iVar8 + uVar7 * iVar14 >> 8 & 0xff) << 8 |
                        (uVar10 & 0xff) * iVar8 + ((uint)fVar22 & 0xff) * iVar14 >> 8 & 0xff;
              puVar5 = puVar5 + 1;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          pNVar12 = (NSVGgradient *)(pNVar12->xform + 2);
          local_res10 = local_res10 + 1;
        } while (local_res10 < pNVar19->nstops + -1);
      }
      lVar9 = (longlong)iVar13;
      if (lVar9 < 0x100) {
        puVar5 = param_1->colors + lVar9;
        for (lVar11 = 0x100 - lVar9; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar5 = uVar16;
          puVar5 = puVar5 + 1;
        }
      }
    }
    return;
  }
  uVar10 = (param_2->field1_0x8).color;
  fVar20 = 0.0;
  if ((0.0 <= param_3) && (fVar20 = param_3, __real_3f800000 <= param_3)) {
    fVar20 = __real_3f800000;
  }
  param_1->colors[0] =
       ((((int)(fVar20 * __real_43800000) * (uVar10 >> 0x18) >> 8 & 0xff) << 8 |
        uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 8 & 0xff) << 8 | uVar10 & 0xff;
  return;
}

// nsvg__lineTo @ 142412910

void __cdecl nsvg__lineTo(NSVGparser *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (0 < param_1->npts) {
    lVar3 = (longlong)(param_1->npts * 2);
    fVar1 = param_1->pts[lVar3 + -2];
    fVar2 = param_1->pts[lVar3 + -1];
    fVar4 = (param_2 - fVar1) * __real_3eaaaaab;
    fVar5 = (param_3 - fVar2) * __real_3eaaaaab;
    nsvg__addPoint(param_1,fVar1 + fVar4,fVar2 + fVar5);
    nsvg__addPoint(param_1,param_2 - fVar4,param_3 - fVar5);
    nsvg__addPoint(param_1,param_2,param_3);
  }
  return;
}

// nsvg__miterJoin @ 1424129e0

void __cdecl
nsvg__miterJoin(NSVGrasterizer *param_1,NSVGpoint *param_2,NSVGpoint *param_3,NSVGpoint *param_4,
               NSVGpoint *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_4->dy;
  fVar2 = (float)((uint)param_5->dx ^ __xmm_80000000800000008000000080000000);
  fVar3 = param_5->dy;
  fVar5 = (float)((uint)param_4->dx ^ __xmm_80000000800000008000000080000000);
  fVar6 = param_6 * __real_3f000000;
  fVar7 = param_5->x;
  fVar8 = param_5->y;
  if ((param_5->flags & 4) == 0) {
    fVar4 = fVar7 - fVar1 * fVar6;
    fVar1 = fVar8 - fVar5 * fVar6;
    fVar7 = fVar7 - fVar3 * fVar6;
    fVar8 = fVar8 - fVar2 * fVar6;
    nsvg__addEdge(param_1,fVar4,fVar1,param_2->x,param_2->y);
    nsvg__addEdge(param_1,fVar7,fVar8,fVar4,fVar1);
    fVar1 = param_3->x;
    fVar4 = fVar6 * param_5->dmx + param_5->x;
    fVar5 = param_3->y;
    fVar3 = fVar6 * param_5->dmy + param_5->y;
  }
  else {
    fVar7 = fVar7 - fVar6 * param_5->dmx;
    fVar8 = fVar8 - fVar6 * param_5->dmy;
    nsvg__addEdge(param_1,fVar7,fVar8,param_2->x,param_2->y);
    fVar1 = fVar1 * fVar6 + param_5->x;
    fVar5 = fVar5 * fVar6 + param_5->y;
    fVar4 = fVar3 * fVar6 + param_5->x;
    fVar3 = fVar2 * fVar6 + param_5->y;
    nsvg__addEdge(param_1,param_3->x,param_3->y,fVar1,fVar5);
  }
  nsvg__addEdge(param_1,fVar1,fVar5,fVar4,fVar3);
  param_2->x = fVar7;
  param_2->y = fVar8;
  param_3->x = fVar4;
  param_3->y = fVar3;
  return;
}

// nsvg__parseAttr @ 142412c10

int __cdecl nsvg__parseAttr(NSVGparser *param_1,char *param_2,char *param_3)

{
  NSVGstyles *pNVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  NSVGcoordinate NVar5;
  char cVar6;
  float *pfVar7;
  NSVGattrib *_Dest;
  float fVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  _Dest = param_1->attr + param_1->attrHead;
  if (_Dest == (NSVGattrib *)0x0) {
LAB_1424132fe:
    iVar3 = 0;
  }
  else {
    iVar3 = strcmp(param_2,"style");
    if (iVar3 == 0) {
      nsvg__parseStyle(param_1,param_3);
      return 1;
    }
    iVar3 = strcmp(param_2,"display");
    if (iVar3 == 0) {
      iVar3 = strcmp(param_3,"none");
      if (iVar3 == 0) {
        _Dest->visible = '\0';
        return 1;
      }
    }
    else {
      iVar3 = strcmp(param_2,"fill");
      if (iVar3 == 0) {
        iVar3 = strcmp(param_3,"none");
        if (iVar3 == 0) {
          _Dest->hasFill = '\0';
          return 1;
        }
        iVar3 = strncmp(param_3,"url(",4);
        if (iVar3 == 0) {
          _Dest->hasFill = '\x02';
          nsvg__parseUrl(_Dest->fillGradient,param_3);
          return 1;
        }
        _Dest->hasFill = '\x01';
        uVar4 = nsvg__parseColor(param_3);
        _Dest->fillColor = uVar4;
        return 1;
      }
      iVar3 = strcmp(param_2,"opacity");
      if (iVar3 == 0) {
        dVar2 = nsvg__atof(param_3);
        fVar8 = (float)dVar2;
        if ((float)dVar2 <= 0.0) {
          fVar8 = 0.0;
        }
        if (__real_3f800000 <= fVar8) {
          fVar8 = __real_3f800000;
        }
        _Dest->opacity = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"fill-opacity");
      if (iVar3 == 0) {
        dVar2 = nsvg__atof(param_3);
        fVar8 = (float)dVar2;
        if ((float)dVar2 <= 0.0) {
          fVar8 = 0.0;
        }
        if (__real_3f800000 <= fVar8) {
          fVar8 = __real_3f800000;
        }
        _Dest->fillOpacity = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"stroke");
      if (iVar3 == 0) {
        iVar3 = strcmp(param_3,"none");
        if (iVar3 == 0) {
          _Dest->hasStroke = '\0';
          return 1;
        }
        iVar3 = strncmp(param_3,"url(",4);
        if (iVar3 == 0) {
          _Dest->hasStroke = '\x02';
          nsvg__parseUrl(_Dest->strokeGradient,param_3);
          return 1;
        }
        _Dest->hasStroke = '\x01';
        uVar4 = nsvg__parseColor(param_3);
        _Dest->strokeColor = uVar4;
        return 1;
      }
      iVar3 = strcmp(param_2,"stroke-width");
      if (iVar3 == 0) {
        fVar8 = nsvg__parseCoordinate
                          (param_1,param_3,0.0,
                           SQRT(param_1->viewHeight * param_1->viewHeight +
                                param_1->viewWidth * param_1->viewWidth) * __real_3f3504f3);
        _Dest->strokeWidth = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"stroke-dasharray");
      if (iVar3 == 0) {
        iVar3 = nsvg__parseStrokeDashArray(param_1,param_3,_Dest->strokeDashArray);
        _Dest->strokeDashCount = iVar3;
        return 1;
      }
      iVar3 = strcmp(param_2,"stroke-dashoffset");
      if (iVar3 == 0) {
        fVar8 = nsvg__parseCoordinate
                          (param_1,param_3,0.0,
                           SQRT(param_1->viewHeight * param_1->viewHeight +
                                param_1->viewWidth * param_1->viewWidth) * __real_3f3504f3);
        _Dest->strokeDashOffset = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"stroke-opacity");
      if (iVar3 == 0) {
        dVar2 = nsvg__atof(param_3);
        fVar8 = (float)dVar2;
        if ((float)dVar2 <= 0.0) {
          fVar8 = 0.0;
        }
        if (__real_3f800000 <= fVar8) {
          fVar8 = __real_3f800000;
        }
        _Dest->strokeOpacity = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"stroke-linecap");
      if (iVar3 == 0) {
        iVar3 = strcmp(param_3,"butt");
        if (iVar3 == 0) {
          _Dest->strokeLineCap = '\0';
          return 1;
        }
        iVar3 = strcmp(param_3,"round");
        if (iVar3 == 0) {
          _Dest->strokeLineCap = '\x01';
          return 1;
        }
        iVar3 = strcmp(param_3,"square");
        cVar6 = '\0';
        if (iVar3 == 0) {
          cVar6 = '\x02';
        }
        _Dest->strokeLineCap = cVar6;
        return 1;
      }
      iVar3 = strcmp(param_2,"stroke-linejoin");
      if (iVar3 == 0) {
        iVar3 = strcmp(param_3,"miter");
        if (iVar3 == 0) {
          _Dest->strokeLineJoin = '\0';
          return 1;
        }
        iVar3 = strcmp(param_3,"round");
        if (iVar3 == 0) {
          _Dest->strokeLineJoin = '\x01';
          return 1;
        }
        iVar3 = strcmp(param_3,"bevel");
        cVar6 = '\0';
        if (iVar3 == 0) {
          cVar6 = '\x02';
        }
        _Dest->strokeLineJoin = cVar6;
        return 1;
      }
      iVar3 = strcmp(param_2,"stroke-miterlimit");
      if (iVar3 == 0) {
        dVar2 = nsvg__atof(param_3);
        fVar8 = (float)dVar2;
        if ((float)dVar2 <= 0.0) {
          fVar8 = 0.0;
        }
        _Dest->miterLimit = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"fill-rule");
      if (iVar3 == 0) {
        iVar3 = strcmp(param_3,"nonzero");
        if (iVar3 == 0) {
          _Dest->fillRule = '\0';
          return 1;
        }
        iVar3 = strcmp(param_3,"evenodd");
        _Dest->fillRule = iVar3 == 0;
        return 1;
      }
      iVar3 = strcmp(param_2,"font-size");
      if (iVar3 == 0) {
        fVar8 = nsvg__parseCoordinate
                          (param_1,param_3,0.0,
                           SQRT(param_1->viewHeight * param_1->viewHeight +
                                param_1->viewWidth * param_1->viewWidth) * __real_3f3504f3);
        _Dest->fontSize = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"transform");
      if (iVar3 == 0) {
        nsvg__parseTransform((float *)&local_20,param_3);
        pfVar7 = _Dest->xform;
        local_38 = local_20;
        uStack_30 = uStack_18;
        local_28 = local_10;
        nsvg__xformMultiply((float *)&local_38,pfVar7);
        *(undefined8 *)pfVar7 = local_38;
        *(undefined8 *)(pfVar7 + 2) = uStack_30;
        *(undefined8 *)(pfVar7 + 4) = local_28;
        return 1;
      }
      iVar3 = strcmp(param_2,"stop-color");
      if (iVar3 == 0) {
        uVar4 = nsvg__parseColor(param_3);
        _Dest->stopColor = uVar4;
        return 1;
      }
      iVar3 = strcmp(param_2,"stop-opacity");
      if (iVar3 == 0) {
        dVar2 = nsvg__atof(param_3);
        fVar8 = (float)dVar2;
        if ((float)dVar2 <= 0.0) {
          fVar8 = 0.0;
        }
        if (__real_3f800000 <= fVar8) {
          fVar8 = __real_3f800000;
        }
        _Dest->stopOpacity = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"offset");
      if (iVar3 == 0) {
        NVar5 = nsvg__parseCoordinateRaw(param_3);
        fVar8 = nsvg__convertToPixels(param_1,NVar5,0.0,__real_3f800000);
        _Dest->stopOffset = fVar8;
        return 1;
      }
      iVar3 = strcmp(param_2,"id");
      if (iVar3 == 0) {
        strncpy(_Dest->id,param_3,0x3f);
        _Dest->id[0x3f] = '\0';
        return 1;
      }
      iVar3 = strcmp(param_2,"class");
      if (iVar3 != 0) goto LAB_1424132fe;
      for (pNVar1 = param_1->styles; pNVar1 != (NSVGstyles *)0x0; pNVar1 = pNVar1->next) {
        iVar3 = strcmp(pNVar1->name + 1,param_3);
        if (iVar3 == 0) {
          nsvg__parseStyle(param_1,pNVar1->description);
        }
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}

// nsvg__parseAttribs @ 142413320

void __cdecl nsvg__parseAttribs(NSVGparser *param_1,char **param_2)

{
  int iVar1;
  char *_Str1;
  char **ppcVar2;
  longlong lVar3;
  
  _Str1 = *param_2;
  if (_Str1 != (char *)0x0) {
    ppcVar2 = param_2 + 1;
    lVar3 = 0;
    do {
      iVar1 = strcmp(_Str1,"style");
      if (iVar1 == 0) {
        nsvg__parseStyle(param_1,*ppcVar2);
      }
      else {
        nsvg__parseAttr(param_1,_Str1,*ppcVar2);
      }
      _Str1 = *(char **)(lVar3 + 0x10 + (longlong)param_2);
      lVar3 = lVar3 + 0x10;
      ppcVar2 = ppcVar2 + 2;
    } while (_Str1 != (char *)0x0);
  }
  return;
}

// nsvg__parseCircle @ 1424133b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl nsvg__parseCircle(NSVGparser *param_1,char **param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  NSVGcoordinate NVar4;
  char **ppcVar5;
  char **ppcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = __real_3f3504f3;
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pcVar3 = *param_2;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar11 = 0.0;
  if (pcVar3 != (char *)0x0) {
    ppcVar6 = param_2 + 1;
    lVar7 = 0;
    ppcVar5 = param_2;
    do {
      iVar2 = nsvg__parseAttr(param_1,pcVar3,*ppcVar6);
      if (iVar2 == 0) {
        iVar2 = strcmp(*ppcVar5,"cx");
        if (iVar2 == 0) {
          fVar13 = param_1->viewWidth;
          fVar9 = param_1->viewMinx;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar6);
          fVar13 = nsvg__convertToPixels(param_1,NVar4,fVar9,fVar13);
        }
        iVar2 = strcmp(*ppcVar5,"cy");
        if (iVar2 == 0) {
          fVar12 = param_1->viewHeight;
          fVar9 = param_1->viewMiny;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar6);
          fVar12 = nsvg__convertToPixels(param_1,NVar4,fVar9,fVar12);
        }
        iVar2 = strcmp(*ppcVar5,"r");
        if (iVar2 == 0) {
          fVar11 = param_1->viewWidth;
          fVar9 = param_1->viewHeight;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar6);
          fVar11 = nsvg__convertToPixels
                             (param_1,NVar4,0.0,SQRT(fVar9 * fVar9 + fVar11 * fVar11) * fVar8);
          fVar11 = (float)((uint)fVar11 & uVar1);
        }
      }
      lVar7 = lVar7 + 0x10;
      ppcVar6 = ppcVar6 + 2;
      pcVar3 = *(char **)(lVar7 + (longlong)param_2);
      ppcVar5 = (char **)(lVar7 + (longlong)param_2);
    } while (pcVar3 != (char *)0x0);
    if (0.0 < fVar11) {
      param_1->npts = 0;
      fVar10 = fVar11 + fVar13;
      nsvg__addPoint(param_1,fVar10,fVar12);
      fVar9 = fVar11 * ___real_3f0d6289;
      nsvg__addPoint(param_1,fVar10,fVar9 + fVar12);
      fVar8 = fVar11 + fVar12;
      nsvg__addPoint(param_1,fVar9 + fVar13,fVar8);
      nsvg__addPoint(param_1,fVar13,fVar8);
      nsvg__addPoint(param_1,fVar13 - fVar9,fVar8);
      fVar8 = fVar13 - fVar11;
      nsvg__addPoint(param_1,fVar8,fVar9 + fVar12);
      nsvg__addPoint(param_1,fVar8,fVar12);
      nsvg__addPoint(param_1,fVar8,fVar12 - fVar9);
      fVar11 = fVar12 - fVar11;
      nsvg__addPoint(param_1,fVar13 - fVar9,fVar11);
      nsvg__addPoint(param_1,fVar13,fVar11);
      nsvg__addPoint(param_1,fVar9 + fVar13,fVar11);
      nsvg__addPoint(param_1,fVar10,fVar12 - fVar9);
      nsvg__addPoint(param_1,fVar10,fVar12);
      nsvg__addPath(param_1,'\x01');
      nsvg__addShape(param_1);
    }
  }
  return;
}

// nsvg__parseColor @ 1424136f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl nsvg__parseColor(char *param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  NSVGNamedColor *pNVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_b8 [32];
  uint *local_98;
  char *local_90;
  uint *local_88;
  uint local_78;
  uint local_74;
  uint local_70 [2];
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  cVar1 = *param_1;
  while (cVar1 == ' ') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  sVar3 = strlen(param_1);
  if (sVar3 != 0) {
    if (*param_1 == '#') {
      cVar1 = param_1[1];
      pcVar5 = param_1 + 1;
      uVar9 = 0;
      local_78 = 0;
      pcVar7 = pcVar5;
      uVar6 = uVar9;
      if (cVar1 != '\0') {
        do {
          pcVar4 = strchr(" \t\n\v\f\r",(int)cVar1);
          if (pcVar4 != (char *)0x0) break;
          cVar1 = pcVar7[1];
          uVar9 = uVar9 + 1;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (uVar9 == 6) {
          sscanf(pcVar5,"%x");
          uVar6 = local_78;
        }
        else {
          uVar6 = local_78;
          if (uVar9 == 3) {
            sscanf(pcVar5,"%x");
            uVar6 = ((local_78 & 0xf00) << 4 | local_78 & 0xf0) << 4 | local_78 & 0xf;
            return uVar6 << 4 | uVar6;
          }
        }
      }
      return uVar6 & 0xffffff;
    }
    if ((((3 < sVar3) && (*param_1 == 'r')) && (param_1[1] == 'g')) &&
       ((param_1[2] == 'b' && (param_1[3] == '(')))) {
      local_78 = -1;
      local_68[0x11] = '\0';
      local_68[0x12] = '\0';
      local_68[0x13] = '\0';
      local_68[0x14] = '\0';
      local_68[0x15] = '\0';
      local_68[0x16] = '\0';
      local_68[0x17] = '\0';
      local_68[0x18] = '\0';
      local_68[0x19] = '\0';
      local_68[0x1a] = '\0';
      local_68[0x1b] = '\0';
      local_68[0x1c] = '\0';
      local_68[0x1d] = '\0';
      local_68[0x1e] = '\0';
      local_68[0x1f] = 0;
      local_68[0x20] = 0;
      local_68[0x31] = '\0';
      local_68[0x32] = '\0';
      local_68[0x33] = '\0';
      local_68[0x34] = '\0';
      local_68[0x35] = '\0';
      local_68[0x36] = '\0';
      local_68[0x37] = '\0';
      local_68[0x38] = '\0';
      local_68[0x39] = '\0';
      local_68[0x3a] = '\0';
      local_68[0x3b] = '\0';
      local_68[0x3c] = '\0';
      local_68[0x3d] = '\0';
      local_68[0x3e] = '\0';
      local_68[0x3f] = 0;
      local_88 = local_70;
      local_90 = local_68 + 0x20;
      local_98 = &local_74;
      local_74 = 0xffffffff;
      local_70[0] = 0xffffffff;
      local_68[0] = '\0';
      local_68[1] = '\0';
      local_68[2] = '\0';
      local_68[3] = '\0';
      local_68[4] = '\0';
      local_68[5] = '\0';
      local_68[6] = '\0';
      local_68[7] = '\0';
      local_68[8] = '\0';
      local_68[9] = '\0';
      local_68[10] = '\0';
      local_68[0xb] = '\0';
      local_68[0xc] = '\0';
      local_68[0xd] = '\0';
      local_68[0xe] = '\0';
      local_68[0xf] = '\0';
      local_68[0x10] = '\0';
      local_68[0x21] = '\0';
      local_68[0x22] = '\0';
      local_68[0x23] = '\0';
      local_68[0x24] = '\0';
      local_68[0x25] = '\0';
      local_68[0x26] = '\0';
      local_68[0x27] = '\0';
      local_68[0x28] = '\0';
      local_68[0x29] = '\0';
      local_68[0x2a] = '\0';
      local_68[0x2b] = '\0';
      local_68[0x2c] = '\0';
      local_68[0x2d] = '\0';
      local_68[0x2e] = '\0';
      local_68[0x2f] = '\0';
      local_68[0x30] = '\0';
      sscanf(param_1 + 4,"%d%[%%, \t]%d%[%%, \t]%d");
      pcVar5 = strchr(local_68,0x25);
      if (pcVar5 != (char *)0x0) {
        return ((local_78 * 0xff) / 100 << 8 | (local_74 * 0xff) / 100) << 8 |
               (local_70[0] * 0xff) / 100;
      }
      return (local_78 << 8 | local_74) << 8 | local_70[0];
    }
  }
  iVar10 = 0;
  pNVar8 = nsvg__colors;
  do {
    iVar2 = strcmp(pNVar8->name,param_1);
    if (iVar2 == 0) {
      return nsvg__colors[iVar10].color;
    }
    iVar10 = iVar10 + 1;
    pNVar8 = pNVar8 + 1;
  } while ((longlong)pNVar8 < 0x154ba5a40);
  return 0x808080;
}

// nsvg__parseCoordinate @ 1424139b0

float __cdecl nsvg__parseCoordinate(NSVGparser *param_1,char *param_2,float param_3,float param_4)

{
  NSVGcoordinate NVar1;
  float fVar2;
  
  NVar1 = nsvg__parseCoordinateRaw(param_2);
  fVar2 = nsvg__convertToPixels(param_1,NVar1,param_3,param_4);
  return fVar2;
}

// nsvg__parseCoordinateRaw @ 142413a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

NSVGcoordinate __cdecl nsvg__parseCoordinateRaw(char *param_1)

{
  NSVGcoordinate NVar1;
  char *pcVar2;
  double dVar3;
  undefined1 auStack_88 [36];
  int iStack_64;
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pcVar2 = nsvg__parseNumber(param_1,local_58,0x40);
  iStack_64 = nsvg__parseUnits(pcVar2);
  dVar3 = nsvg__atof(local_58);
  NVar1.units = iStack_64;
  NVar1.value = (float)dVar3;
  return NVar1;
}

// nsvg__parseDefs @ 142413a70

int __cdecl
nsvg__parseDefs(char *param_1,_func___cdecl_void_NSVGparser_ptr_char_ptr_char_ptr_ptr *param_2,
               _func___cdecl_void_NSVGparser_ptr_char_ptr *param_3,
               _func___cdecl_void_NSVGparser_ptr_char_ptr *param_4,NSVGparser *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char *_Dest;
  char *pcVar5;
  char *pcVar6;
  
  pcVar3 = strstr(param_1,"<defs");
  if (pcVar3 == (char *)0x0) {
    return 1;
  }
  sVar4 = strlen(pcVar3);
  _Dest = malloc(sVar4 + 1);
  if (_Dest != (char *)0x0) {
    strcpy(_Dest,pcVar3);
    iVar2 = 2;
    cVar1 = param_5->parsedDefs;
    pcVar3 = _Dest;
    pcVar6 = _Dest;
    while (cVar1 == '\0') {
      if (*pcVar6 == '<') {
        if (iVar2 == 2) {
          *pcVar6 = '\0';
          cVar1 = *pcVar3;
          if (cVar1 == '\0') {
LAB_142413b5d:
            iVar2 = 1;
            pcVar3 = pcVar6 + 1;
          }
          else {
            do {
              pcVar5 = strchr(" \t\n\v\f\r",(int)cVar1);
              if (pcVar5 == (char *)0x0) {
                if ((*pcVar3 != '\0') &&
                   (param_4 != (_func___cdecl_void_NSVGparser_ptr_char_ptr *)0x0)) {
                  (*param_4)(param_5,pcVar3);
                }
                goto LAB_142413b5d;
              }
              cVar1 = pcVar3[1];
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            iVar2 = 1;
            pcVar3 = pcVar6 + 1;
          }
        }
      }
      else if ((*pcVar6 == '>') && (iVar2 == 1)) {
        *pcVar6 = '\0';
        nsvg__parseElement(pcVar3,param_2,param_3,param_5);
        iVar2 = 2;
        pcVar3 = pcVar6 + 1;
      }
      pcVar6 = pcVar6 + 1;
      cVar1 = param_5->parsedDefs;
    }
    free(_Dest);
  }
  return 1;
}

// nsvg__parseElement @ 142413bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
nsvg__parseElement(char *param_1,_func___cdecl_void_NSVGparser_ptr_char_ptr_char_ptr_ptr *param_2,
                  _func___cdecl_void_NSVGparser_ptr_char_ptr *param_3,NSVGparser *param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_888 [32];
  int local_868;
  NSVGparser *local_860;
  char *local_858 [256];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_888;
  cVar2 = *param_1;
  iVar7 = 0;
  local_868 = 0;
  local_860 = param_4;
  while ((cVar2 != '\0' && (pcVar3 = strchr(" \t\n\v\f\r",(int)cVar2), pcVar3 != (char *)0x0))) {
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  cVar2 = *param_1;
  if (cVar2 == '/') {
    pcVar3 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar3;
  }
  else {
    local_868 = 1;
    cVar1 = cVar2;
  }
  bVar9 = cVar2 == '/';
  if (((cVar1 != '\0') && (cVar1 = *param_1, cVar1 != '?')) && (pcVar3 = param_1, cVar1 != '!')) {
    while ((cVar1 != '\0' && (pcVar4 = strchr(" \t\n\v\f\r",(int)cVar1), pcVar4 == (char *)0x0))) {
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    }
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
    }
    if (cVar2 != '/') {
      lVar8 = 0;
      do {
        cVar2 = *pcVar3;
        param_4 = local_860;
        if ((cVar2 == '\0') || (0xfc < lVar8)) break;
        do {
          pcVar5 = strchr(" \t\n\v\f\r",(int)cVar2);
          pcVar4 = pcVar3;
          if (pcVar5 == (char *)0x0) break;
          cVar2 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar3;
        } while (cVar2 != '\0');
        cVar2 = *pcVar4;
        param_4 = local_860;
        if (cVar2 == '\0') break;
        pcVar5 = pcVar4;
        if (cVar2 == '/') {
          bVar9 = true;
          break;
        }
        do {
          pcVar3 = strchr(" \t\n\v\f\r",(int)cVar2);
          if ((pcVar3 != (char *)0x0) || (*pcVar5 == '=')) break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (*pcVar5 != '\0') {
          *pcVar5 = '\0';
          pcVar5 = pcVar5 + 1;
          cVar2 = *pcVar5;
          while (((cVar2 != '\0' && (cVar2 != '\"')) && (cVar2 != '\''))) {
            pcVar3 = pcVar5 + 1;
            pcVar5 = pcVar5 + 1;
            cVar2 = *pcVar3;
          }
        }
        param_4 = local_860;
        if (*pcVar5 == '\0') break;
        cVar2 = pcVar5[1];
        pcVar6 = pcVar5 + 1;
        pcVar3 = pcVar6;
        if (cVar2 != '\0') {
          do {
            if (cVar2 == *pcVar5) break;
            cVar2 = pcVar3[1];
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            pcVar3 = pcVar3 + 1;
          }
        }
        if ((pcVar4 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
          local_858[lVar8] = pcVar4;
          iVar7 = iVar7 + 2;
          local_858[lVar8 + 1] = pcVar6;
          lVar8 = lVar8 + 2;
        }
      } while( true );
    }
    local_858[iVar7] = (char *)0x0;
    local_858[(longlong)iVar7 + 1] = (char *)0x0;
    if ((local_868 != 0) &&
       (param_2 != (_func___cdecl_void_NSVGparser_ptr_char_ptr_char_ptr_ptr *)0x0)) {
      (*param_2)(param_4,param_1,local_858);
    }
    if ((bVar9) && (param_3 != (_func___cdecl_void_NSVGparser_ptr_char_ptr *)0x0)) {
      (*param_3)(param_4,param_1);
    }
  }
  return;
}

// nsvg__parseEllipse @ 142413e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl nsvg__parseEllipse(NSVGparser *param_1,char **param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  NSVGcoordinate NVar4;
  char **ppcVar5;
  char **ppcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_res10;
  float local_res18;
  
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pcVar3 = *param_2;
  fVar8 = 0.0;
  fVar15 = 0.0;
  local_res10 = 0.0;
  local_res18 = 0.0;
  fVar14 = 0.0;
  if (pcVar3 != (char *)0x0) {
    ppcVar6 = param_2 + 1;
    lVar7 = 0;
    ppcVar5 = param_2;
    do {
      iVar2 = nsvg__parseAttr(param_1,pcVar3,*ppcVar6);
      if (iVar2 == 0) {
        iVar2 = strcmp(*ppcVar5,"cx");
        if (iVar2 == 0) {
          fVar8 = param_1->viewWidth;
          fVar9 = param_1->viewMinx;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar6);
          local_res10 = nsvg__convertToPixels(param_1,NVar4,fVar9,fVar8);
          fVar8 = local_res18;
        }
        iVar2 = strcmp(*ppcVar5,"cy");
        if (iVar2 == 0) {
          fVar8 = param_1->viewHeight;
          fVar9 = param_1->viewMiny;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar6);
          fVar8 = nsvg__convertToPixels(param_1,NVar4,fVar9,fVar8);
          local_res18 = fVar8;
        }
        iVar2 = strcmp(*ppcVar5,"rx");
        if (iVar2 == 0) {
          fVar15 = param_1->viewWidth;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar6);
          fVar15 = nsvg__convertToPixels(param_1,NVar4,0.0,fVar15);
          fVar15 = (float)((uint)fVar15 & uVar1);
        }
        iVar2 = strcmp(*ppcVar5,"ry");
        if (iVar2 == 0) {
          fVar14 = param_1->viewHeight;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar6);
          fVar14 = nsvg__convertToPixels(param_1,NVar4,0.0,fVar14);
          fVar14 = (float)((uint)fVar14 & uVar1);
        }
      }
      lVar7 = lVar7 + 0x10;
      ppcVar6 = ppcVar6 + 2;
      pcVar3 = *(char **)(lVar7 + (longlong)param_2);
      ppcVar5 = (char **)(lVar7 + (longlong)param_2);
    } while (pcVar3 != (char *)0x0);
    if ((0.0 < fVar15) && (0.0 < fVar14)) {
      fVar13 = fVar15 + local_res10;
      param_1->npts = 0;
      nsvg__addPoint(param_1,fVar13,fVar8);
      fVar11 = fVar14 * ___real_3f0d6289;
      fVar10 = fVar11 + fVar8;
      nsvg__addPoint(param_1,fVar13,fVar10);
      fVar8 = fVar14 + fVar8;
      fVar9 = fVar15 * ___real_3f0d6289;
      fVar12 = fVar9 + local_res10;
      nsvg__addPoint(param_1,fVar12,fVar8);
      nsvg__addPoint(param_1,local_res10,fVar8);
      fVar9 = local_res10 - fVar9;
      nsvg__addPoint(param_1,fVar9,fVar8);
      fVar15 = local_res10 - fVar15;
      nsvg__addPoint(param_1,fVar15,fVar10);
      nsvg__addPoint(param_1,fVar15,local_res18);
      fVar11 = local_res18 - fVar11;
      nsvg__addPoint(param_1,fVar15,fVar11);
      fVar14 = local_res18 - fVar14;
      nsvg__addPoint(param_1,fVar9,fVar14);
      nsvg__addPoint(param_1,local_res10,fVar14);
      nsvg__addPoint(param_1,fVar12,fVar14);
      nsvg__addPoint(param_1,fVar13,fVar11);
      nsvg__addPoint(param_1,fVar13,local_res18);
      nsvg__addPath(param_1,'\x01');
      nsvg__addShape(param_1);
    }
  }
  return;
}

// nsvg__parseGradient @ 142414230

void __cdecl nsvg__parseGradient(NSVGparser *param_1,char **param_2,char param_3)

{
  int iVar1;
  NSVGgradientData *_Dest;
  NSVGcoordinate NVar2;
  longlong lVar3;
  char **ppcVar4;
  char *pcVar5;
  char **ppcVar6;
  
  _Dest = malloc(0xe0);
  if (_Dest != (NSVGgradientData *)0x0) {
    memset(_Dest,0,0xe0);
    _Dest->units = '\x01';
    _Dest->type = param_3;
    if (param_3 == '\x02') {
      *(float *)&_Dest->field3_0x84 = 0.0;
      *(int *)((longlong)&_Dest->field3_0x84 + 4) = 7;
      *(float *)((longlong)&_Dest->field3_0x84 + 8) = 0.0;
      *(int *)((longlong)&_Dest->field3_0x84 + 0xc) = 7;
      *(float *)((longlong)&_Dest->field3_0x84 + 0x10) = 100.0;
      *(int *)((longlong)&_Dest->field3_0x84 + 0x14) = 7;
      *(float *)((longlong)&_Dest->field3_0x84 + 0x18) = 0.0;
      *(int *)((longlong)&_Dest->field3_0x84 + 0x1c) = 7;
    }
    else if (param_3 == '\x03') {
      *(float *)&_Dest->field3_0x84 = 50.0;
      *(int *)((longlong)&_Dest->field3_0x84 + 4) = 7;
      *(float *)((longlong)&_Dest->field3_0x84 + 8) = 50.0;
      *(int *)((longlong)&_Dest->field3_0x84 + 0xc) = 7;
      *(float *)((longlong)&_Dest->field3_0x84 + 0x10) = 50.0;
      *(int *)((longlong)&_Dest->field3_0x84 + 0x14) = 7;
    }
    pcVar5 = *param_2;
    lVar3 = 0;
    _Dest->xform[0] = 1.0;
    _Dest->xform[1] = 0.0;
    _Dest->xform[2] = 0.0;
    _Dest->xform[3] = 1.0;
    _Dest->xform[4] = 0.0;
    _Dest->xform[5] = 0.0;
    if (pcVar5 != (char *)0x0) {
      ppcVar4 = param_2 + 1;
      ppcVar6 = param_2;
      do {
        iVar1 = strcmp(pcVar5,"id");
        if (iVar1 == 0) {
          strncpy(_Dest->id,*ppcVar4,0x3f);
          _Dest->id[0x3f] = '\0';
        }
        else {
          iVar1 = nsvg__parseAttr(param_1,pcVar5,*ppcVar4);
          if (iVar1 == 0) {
            pcVar5 = *ppcVar6;
            iVar1 = strcmp(pcVar5,"gradientUnits");
            if (iVar1 == 0) {
              iVar1 = strcmp(*ppcVar4,"objectBoundingBox");
              _Dest->units = iVar1 == 0;
            }
            else {
              iVar1 = strcmp(pcVar5,"gradientTransform");
              if (iVar1 == 0) {
                nsvg__parseTransform(_Dest->xform,*ppcVar4);
              }
              else {
                iVar1 = strcmp(pcVar5,"cx");
                if (iVar1 == 0) {
                  NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                  (_Dest->field3_0x84).linear.x1 = NVar2;
                }
                else {
                  iVar1 = strcmp(pcVar5,"cy");
                  if (iVar1 == 0) {
                    NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                    (_Dest->field3_0x84).linear.y1 = NVar2;
                  }
                  else {
                    iVar1 = strcmp(pcVar5,"r");
                    if (iVar1 == 0) {
                      NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                      (_Dest->field3_0x84).linear.x2 = NVar2;
                    }
                    else {
                      iVar1 = strcmp(pcVar5,"fx");
                      if (iVar1 == 0) {
                        NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                        (_Dest->field3_0x84).linear.y2 = NVar2;
                      }
                      else {
                        iVar1 = strcmp(pcVar5,"fy");
                        if (iVar1 == 0) {
                          NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                          (_Dest->field3_0x84).radial.fy = NVar2;
                        }
                        else {
                          iVar1 = strcmp(pcVar5,"x1");
                          if (iVar1 == 0) {
                            NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                            (_Dest->field3_0x84).linear.x1 = NVar2;
                          }
                          else {
                            iVar1 = strcmp(pcVar5,"y1");
                            if (iVar1 == 0) {
                              NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                              (_Dest->field3_0x84).linear.y1 = NVar2;
                            }
                            else {
                              iVar1 = strcmp(pcVar5,"x2");
                              if (iVar1 == 0) {
                                NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                                (_Dest->field3_0x84).linear.x2 = NVar2;
                              }
                              else {
                                iVar1 = strcmp(pcVar5,"y2");
                                if (iVar1 == 0) {
                                  NVar2 = nsvg__parseCoordinateRaw(*ppcVar4);
                                  (_Dest->field3_0x84).linear.y2 = NVar2;
                                }
                                else {
                                  iVar1 = strcmp(pcVar5,"spreadMethod");
                                  if (iVar1 == 0) {
                                    pcVar5 = *ppcVar4;
                                    iVar1 = strcmp(pcVar5,"pad");
                                    if (iVar1 == 0) {
                                      _Dest->spread = '\0';
                                    }
                                    else {
                                      iVar1 = strcmp(pcVar5,"reflect");
                                      if (iVar1 == 0) {
                                        _Dest->spread = '\x01';
                                      }
                                      else {
                                        iVar1 = strcmp(pcVar5,"repeat");
                                        if (iVar1 == 0) {
                                          _Dest->spread = '\x02';
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    iVar1 = strcmp(pcVar5,"xlink:href");
                                    if (iVar1 == 0) {
                                      strncpy(_Dest->ref,*ppcVar4 + 1,0x3e);
                                      _Dest->ref[0x3e] = '\0';
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        lVar3 = lVar3 + 0x10;
        ppcVar4 = ppcVar4 + 2;
        pcVar5 = *(char **)((longlong)param_2 + lVar3);
        ppcVar6 = (char **)((longlong)param_2 + lVar3);
      } while (pcVar5 != (char *)0x0);
    }
    _Dest->next = param_1->gradients;
    param_1->gradients = _Dest;
  }
  return;
}

// nsvg__parseGradientStop @ 142414690

void __cdecl nsvg__parseGradientStop(NSVGparser *param_1,char **param_2)

{
  char **ppcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  NSVGgradientData *pNVar5;
  NSVGgradientStop *pNVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  
  iVar2 = param_1->attrHead;
  uVar7 = 0;
  param_1->attr[iVar2].stopOpacity = 1.0;
  param_1->attr[iVar2].stopOffset = 0.0;
  param_1->attr[iVar2].stopColor = 0;
  pcVar4 = *param_2;
  ppcVar1 = param_2;
  uVar11 = uVar7;
  while (pcVar4 != (char *)0x0) {
    nsvg__parseAttr(param_1,pcVar4,ppcVar1[1]);
    uVar11 = uVar11 + 0x10;
    ppcVar1 = (char **)(uVar11 + (longlong)param_2);
    pcVar4 = *(char **)(uVar11 + (longlong)param_2);
  }
  pNVar5 = param_1->gradients;
  if (pNVar5 != (NSVGgradientData *)0x0) {
    iVar12 = pNVar5->nstops;
    pNVar5->nstops = iVar12 + 1;
    pNVar6 = realloc(pNVar5->stops,(longlong)iVar12 * 8 + 8);
    pNVar5->stops = pNVar6;
    if (pNVar6 != (NSVGgradientStop *)0x0) {
      iVar8 = pNVar5->nstops + -1;
      iVar12 = iVar8;
      if (0 < iVar8) {
        uVar11 = uVar7;
        do {
          iVar10 = (int)uVar11;
          if (param_1->attr[iVar2].stopOffset < *(float *)((longlong)&pNVar6->offset + uVar7)) {
            iVar12 = iVar10;
            if (iVar10 != iVar8) {
              for (lVar9 = (longlong)iVar8; iVar10 < lVar9; lVar9 = lVar9 + -1) {
                pNVar5->stops[lVar9] = pNVar5->stops[lVar9 + -1];
              }
            }
            break;
          }
          uVar11 = (ulonglong)(iVar10 + 1U);
          uVar7 = uVar7 + 8;
        } while ((int)(iVar10 + 1U) < iVar8);
      }
      uVar3 = param_1->attr[iVar2].stopColor;
      pNVar6 = pNVar5->stops;
      pNVar6[iVar12].color = uVar3;
      pNVar6[iVar12].color =
           (int)(longlong)(param_1->attr[iVar2].stopOpacity * __real_437f0000) << 0x18 | uVar3;
      pNVar6[iVar12].offset = param_1->attr[iVar2].stopOffset;
    }
  }
  return;
}

// nsvg__parseLine @ 142414810

void __cdecl nsvg__parseLine(NSVGparser *param_1,char **param_2)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  NSVGcoordinate NVar4;
  char **ppcVar5;
  char **ppcVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pcVar3 = *param_2;
  fVar8 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar9 = 0.0;
  if (pcVar3 != (char *)0x0) {
    ppcVar5 = param_2 + 1;
    lVar7 = 0;
    ppcVar6 = param_2;
    do {
      iVar2 = nsvg__parseAttr(param_1,pcVar3,*ppcVar5);
      if (iVar2 == 0) {
        iVar2 = strcmp(*ppcVar6,"x1");
        if (iVar2 == 0) {
          fVar8 = param_1->viewWidth;
          fVar1 = param_1->viewMinx;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar5);
          fVar8 = nsvg__convertToPixels(param_1,NVar4,fVar1,fVar8);
        }
        iVar2 = strcmp(*ppcVar6,"y1");
        if (iVar2 == 0) {
          fVar11 = param_1->viewHeight;
          fVar1 = param_1->viewMiny;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar5);
          fVar11 = nsvg__convertToPixels(param_1,NVar4,fVar1,fVar11);
        }
        iVar2 = strcmp(*ppcVar6,"x2");
        if (iVar2 == 0) {
          fVar10 = param_1->viewWidth;
          fVar1 = param_1->viewMinx;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar5);
          fVar10 = nsvg__convertToPixels(param_1,NVar4,fVar1,fVar10);
        }
        iVar2 = strcmp(*ppcVar6,"y2");
        if (iVar2 == 0) {
          fVar9 = param_1->viewHeight;
          fVar1 = param_1->viewMiny;
          NVar4 = nsvg__parseCoordinateRaw(*ppcVar5);
          fVar9 = nsvg__convertToPixels(param_1,NVar4,fVar1,fVar9);
        }
      }
      lVar7 = lVar7 + 0x10;
      ppcVar5 = ppcVar5 + 2;
      pcVar3 = *(char **)(lVar7 + (longlong)param_2);
      ppcVar6 = (char **)(lVar7 + (longlong)param_2);
    } while (pcVar3 != (char *)0x0);
  }
  param_1->npts = 0;
  nsvg__addPoint(param_1,fVar8,fVar11);
  nsvg__lineTo(param_1,fVar10,fVar9);
  nsvg__addPath(param_1,'\0');
  nsvg__addShape(param_1);
  return;
}

// nsvg__parseNumber @ 142414a40

char * __cdecl nsvg__parseNumber(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar2 = *param_1;
  iVar4 = param_3 + -1;
  uVar3 = 0;
  if ((cVar2 == '-') || (cVar2 == '+')) {
    if (0 < iVar4) {
      *param_2 = cVar2;
    }
    uVar3 = (ulonglong)(0 < iVar4);
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  lVar8 = (longlong)iVar4;
  uVar6 = uVar3;
  if (cVar2 != '\0') {
    cVar2 = *param_1;
    do {
      if (9 < (byte)(cVar2 - 0x30U)) break;
      if ((longlong)uVar3 < lVar8) {
        uVar6 = (ulonglong)((int)uVar6 + 1);
        param_2[uVar3] = cVar2;
        uVar3 = uVar3 + 1;
      }
      cVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
  }
  if (*param_1 == '.') {
    iVar5 = (int)uVar6;
    if (iVar5 < iVar4) {
      uVar6 = (ulonglong)(iVar5 + 1);
      param_2[iVar5] = '.';
    }
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar2 != '\0') {
      lVar7 = (longlong)(int)uVar6;
      do {
        if (9 < (byte)(cVar2 - 0x30U)) break;
        if (lVar7 < lVar8) {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          param_2[lVar7] = cVar2;
          lVar7 = lVar7 + 1;
        }
        cVar2 = param_1[1];
        param_1 = param_1 + 1;
      } while (cVar2 != '\0');
    }
  }
  iVar5 = (int)uVar6;
  cVar2 = *param_1;
  if ((cVar2 == 'e') || (cVar2 == 'E')) {
    if ((param_1[1] != 'm') && (param_1[1] != 'x')) {
      if (iVar5 < iVar4) {
        uVar6 = (ulonglong)(iVar5 + 1);
        param_2[iVar5] = cVar2;
      }
      cVar2 = param_1[1];
      if ((cVar2 == '-') || (pcVar1 = param_1 + 1, cVar2 == '+')) {
        iVar5 = (int)uVar6;
        if (iVar5 < iVar4) {
          uVar6 = (ulonglong)(iVar5 + 1);
          param_2[iVar5] = cVar2;
        }
        cVar2 = param_1[2];
        pcVar1 = param_1 + 2;
      }
      param_1 = pcVar1;
      iVar5 = (int)uVar6;
      if (cVar2 != '\0') {
        cVar2 = *param_1;
        lVar7 = (longlong)iVar5;
        do {
          iVar5 = (int)uVar6;
          if (9 < (byte)(cVar2 - 0x30U)) break;
          if (lVar7 < lVar8) {
            uVar6 = (ulonglong)(iVar5 + 1);
            param_2[lVar7] = cVar2;
            lVar7 = lVar7 + 1;
          }
          iVar5 = (int)uVar6;
          cVar2 = param_1[1];
          param_1 = param_1 + 1;
        } while (cVar2 != '\0');
      }
    }
  }
  param_2[iVar5] = '\0';
  return param_1;
}

// nsvg__parsePath @ 142414b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl nsvg__parsePath(NSVGparser *param_1,char **param_2)

{
  byte *pbVar1;
  double dVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  char **ppcVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_198 [32];
  byte local_168;
  float local_164;
  char **local_160;
  float local_158 [2];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_128 [64];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pcVar4 = *param_2;
  local_168 = 0;
  local_158[0] = 0.0;
  local_160 = param_2;
  if (pcVar4 != (char *)0x0) {
    lVar10 = 0;
    ppcVar11 = param_2 + 1;
    pbVar7 = (byte *)0x0;
    do {
      iVar3 = strcmp(pcVar4,"d");
      pbVar1 = (byte *)*ppcVar11;
      pbVar8 = pbVar1;
      if (iVar3 != 0) {
        lVar12 = 0;
        local_140 = 0;
        uStack_138 = 0;
        pbVar8 = pbVar7;
        local_150 = pcVar4;
        local_148 = pbVar1;
        if (pcVar4 != (char *)0x0) {
          puVar13 = &local_148;
          do {
            iVar3 = strcmp(pcVar4,"style");
            if (iVar3 == 0) {
              nsvg__parseStyle(param_1,(char *)*puVar13);
            }
            else {
              nsvg__parseAttr(param_1,pcVar4,(char *)*puVar13);
            }
            pcVar4 = (char *)(&local_140)[lVar12];
            lVar12 = lVar12 + 2;
            puVar13 = puVar13 + 2;
          } while (pcVar4 != (char *)0x0);
        }
      }
      lVar10 = lVar10 + 0x10;
      ppcVar11 = ppcVar11 + 2;
      pcVar4 = *(char **)(lVar10 + (longlong)local_160);
      pbVar7 = pbVar8;
    } while (pcVar4 != (char *)0x0);
    if (pbVar8 != (byte *)0x0) {
      iVar3 = 0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      param_1->npts = 0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      local_160 = (char **)((ulonglong)local_160 & 0xffffffff00000000);
      local_164 = 0.0;
      if (*pbVar8 != 0) {
        lVar10 = 0;
        fVar23 = local_148._4_4_;
        fVar25 = (float)local_148;
        fVar26 = (float)local_150;
        fVar27 = local_150._4_4_;
        do {
          local_128[0] = 0;
          bVar5 = *pbVar8;
          if (bVar5 != 0) {
            do {
              pcVar4 = strchr(" \t\n\v\f\r",(int)(char)bVar5);
              if ((pcVar4 == (char *)0x0) && (bVar6 = *pbVar8, bVar6 != 0x2c)) break;
              bVar5 = pbVar8[1];
              pbVar8 = pbVar8 + 1;
              bVar6 = 0;
            } while (bVar5 != 0);
            if (bVar6 != 0) {
              if ((((bVar6 - 0x2b & 0xfc) == 0) && (bVar6 != 0x2c)) || ((byte)(bVar6 - 0x30) < 10))
              {
                pbVar8 = (byte *)nsvg__parseNumber((char *)pbVar8,(char *)local_128,0x40);
              }
              else {
                local_128[1] = 0;
                pbVar8 = pbVar8 + 1;
                local_128[0] = bVar6;
              }
            }
          }
          if (local_128[0] == 0) break;
          pcVar4 = strchr("0123456789+-.eE",(int)(char)local_128[0]);
          if (pcVar4 == (char *)0x0) {
            uVar9 = (uint)local_128[0];
            local_168 = local_128[0];
            local_158[0] = (float)nsvg__getArgsPerElement(local_128[0]);
            if (((char)uVar9 == 'M') || ((char)uVar9 == 'm')) {
              if (0 < param_1->npts) {
                nsvg__addPath(param_1,'\0');
              }
              param_1->npts = 0;
            }
            else {
              if ((uVar9 - 0x5a & 0xdf) != 0) goto LAB_142415332;
              if (0 < param_1->npts) {
                fVar16 = *param_1->pts;
                fVar17 = param_1->pts[1];
                local_160 = (char **)CONCAT44(local_160._4_4_,fVar17);
                local_164 = fVar16;
                nsvg__addPath(param_1,'\x01');
                fVar18 = fVar16;
                fVar19 = fVar17;
              }
              param_1->npts = 0;
              nsvg__addPoint(param_1,fVar16,fVar17);
            }
            goto LAB_14241532d;
          }
          if (lVar10 < 10) {
            dVar2 = nsvg__atof((char *)local_128);
            iVar3 = iVar3 + 1;
            *(float *)((longlong)&local_150 + lVar10 * 4) = (float)dVar2;
            lVar10 = lVar10 + 1;
            fVar23 = local_148._4_4_;
            fVar25 = (float)local_148;
            fVar26 = (float)local_150;
            fVar27 = local_150._4_4_;
          }
          fVar15 = __real_3f2aaaab;
          if (iVar3 < (int)local_158[0]) goto LAB_142415332;
          fVar20 = fVar26;
          fVar21 = fVar27;
          fVar22 = (float)local_148;
          fVar24 = local_148._4_4_;
          switch((int)(char)local_168) {
          case 0x41:
          case 0x61:
            nsvg__pathArcTo(param_1,&local_164,(float *)&local_160,(float *)&local_150,
                            (uint)(local_168 == 0x61));
            fVar16 = local_164;
            fVar17 = local_160._0_4_;
            fVar18 = local_164;
            fVar19 = local_160._0_4_;
            break;
          default:
            if (1 < lVar10) {
              fVar16 = local_158[lVar10];
              fVar17 = local_158[lVar10 + 1];
              local_160 = (char **)CONCAT44(local_160._4_4_,fVar17);
              fVar18 = fVar16;
              fVar19 = fVar17;
              local_164 = fVar16;
            }
            break;
          case 0x43:
          case 99:
            fVar15 = fVar27;
            fVar21 = (float)local_140;
            fVar22 = local_140._4_4_;
            fVar18 = fVar25;
            fVar19 = fVar23;
            if (local_168 == 99) {
              fVar15 = fVar27 + fVar17;
              fVar20 = fVar26 + fVar16;
              fVar21 = (float)local_140 + fVar16;
              fVar22 = local_140._4_4_ + fVar17;
              fVar18 = fVar25 + fVar16;
              fVar19 = fVar23 + fVar17;
            }
            nsvg__addPoint(param_1,fVar20,fVar15);
            nsvg__addPoint(param_1,fVar18,fVar19);
            nsvg__addPoint(param_1,fVar21,fVar22);
            local_160 = (char **)CONCAT44(local_160._4_4_,fVar22);
            fVar16 = fVar21;
            fVar17 = fVar22;
            local_164 = fVar21;
            break;
          case 0x48:
          case 0x68:
            fVar18 = fVar26;
            if (local_168 == 0x68) {
              fVar18 = fVar26 + fVar16;
            }
            local_164 = fVar18;
            nsvg__lineTo(param_1,fVar18,fVar17);
            fVar16 = fVar18;
            fVar19 = fVar17;
            break;
          case 0x4c:
          case 0x6c:
            fVar18 = fVar26;
            fVar19 = fVar27;
            local_164 = fVar26;
            if (local_168 == 0x6c) {
              fVar18 = fVar26 + fVar16;
              fVar19 = fVar27 + fVar17;
              local_164 = fVar26 + fVar16;
            }
            goto LAB_142414f1f;
          case 0x4d:
          case 0x6d:
            fVar18 = fVar26;
            fVar19 = fVar27;
            if ((char)local_168 == 0x6d) {
              fVar18 = fVar26 + fVar16;
              fVar19 = fVar27 + fVar17;
            }
            local_160 = (char **)CONCAT44(local_160._4_4_,fVar19);
            local_164 = fVar18;
            if (param_1->npts < 1) {
              nsvg__addPoint(param_1,fVar18,fVar19);
            }
            else {
              param_1->pts[(longlong)(param_1->npts * 2) + -2] = fVar18;
              param_1->pts[(longlong)(param_1->npts * 2) + -1] = fVar19;
            }
            bVar14 = local_168 == 0x6d;
            local_168 = 0x4c;
            if (bVar14) {
              local_168 = 0x6c;
            }
            local_158[0] = (float)nsvg__getArgsPerElement(local_168);
            fVar16 = fVar18;
            fVar17 = fVar19;
            break;
          case 0x51:
          case 0x71:
            if (local_168 == 0x71) {
              fVar20 = fVar26 + fVar16;
              fVar21 = fVar27 + fVar17;
              fVar22 = (float)local_148 + fVar16;
              fVar24 = local_148._4_4_ + fVar17;
            }
            nsvg__addPoint(param_1,(fVar20 - fVar16) * __real_3f2aaaab + fVar16,
                           (fVar21 - fVar17) * __real_3f2aaaab + fVar17);
            nsvg__addPoint(param_1,(fVar20 - fVar22) * fVar15 + fVar22,
                           (fVar21 - fVar24) * fVar15 + fVar24);
            nsvg__addPoint(param_1,fVar22,fVar24);
            goto LAB_14241509b;
          case 0x53:
          case 0x73:
            if (local_168 == 0x73) {
              fVar20 = fVar26 + fVar16;
              fVar21 = fVar27 + fVar17;
              fVar22 = (float)local_148 + fVar16;
              fVar24 = local_148._4_4_ + fVar17;
            }
            nsvg__addPoint(param_1,(fVar16 + fVar16) - fVar18,(fVar17 + fVar17) - fVar19);
            nsvg__addPoint(param_1,fVar20,fVar21);
            nsvg__addPoint(param_1,fVar22,fVar24);
LAB_14241509b:
            local_160 = (char **)CONCAT44(local_160._4_4_,fVar24);
            fVar16 = fVar22;
            fVar17 = fVar24;
            fVar18 = fVar20;
            fVar19 = fVar21;
            fVar23 = local_148._4_4_;
            fVar25 = (float)local_148;
            local_164 = fVar22;
            break;
          case 0x54:
          case 0x74:
            if (local_168 == 0x74) {
              fVar20 = fVar26 + fVar16;
              fVar21 = fVar27 + fVar17;
            }
            fVar19 = (fVar17 + fVar17) - fVar19;
            fVar18 = (fVar16 + fVar16) - fVar18;
            nsvg__addPoint(param_1,(fVar18 - fVar16) * __real_3f2aaaab + fVar16,
                           (fVar19 - fVar17) * __real_3f2aaaab + fVar17);
            nsvg__addPoint(param_1,(fVar18 - fVar20) * fVar15 + fVar20,
                           (fVar19 - fVar21) * fVar15 + fVar21);
            nsvg__addPoint(param_1,fVar20,fVar21);
            local_160 = (char **)CONCAT44(local_160._4_4_,fVar21);
            fVar16 = fVar20;
            fVar17 = fVar21;
            local_164 = fVar20;
            break;
          case 0x56:
          case 0x76:
            fVar18 = fVar16;
            fVar19 = fVar26;
            if (local_168 == 0x76) {
              fVar19 = fVar26 + fVar17;
            }
LAB_142414f1f:
            local_160 = (char **)CONCAT44(local_160._4_4_,fVar19);
            nsvg__lineTo(param_1,fVar18,fVar19);
            fVar16 = fVar18;
            fVar17 = fVar19;
          }
LAB_14241532d:
          iVar3 = 0;
          lVar10 = 0;
LAB_142415332:
        } while (*pbVar8 != 0);
      }
      if (param_1->npts != 0) {
        nsvg__addPath(param_1,'\0');
      }
    }
  }
  nsvg__addShape(param_1);
  return;
}

// nsvg__parsePoly @ 142415450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl nsvg__parsePoly(NSVGparser *param_1,char **param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char **ppcVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  char **ppcVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  float local_98 [4];
  char local_88;
  undefined1 local_87;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  iVar7 = 0;
  param_1->npts = 0;
  pcVar6 = *param_2;
  if (pcVar6 != (char *)0x0) {
    ppcVar9 = param_2 + 1;
    lVar10 = 0;
    ppcVar5 = param_2;
    do {
      iVar1 = nsvg__parseAttr(param_1,pcVar6,*ppcVar9);
      if ((iVar1 == 0) && (iVar1 = strcmp(*ppcVar5,"points"), iVar1 == 0)) {
        pcVar6 = *ppcVar9;
        lVar8 = 0;
        cVar3 = *pcVar6;
        while (cVar3 != '\0') {
          local_88 = '\0';
          cVar3 = *pcVar6;
          if (cVar3 != '\0') {
            do {
              pcVar2 = strchr(" \t\n\v\f\r",(int)cVar3);
              if ((pcVar2 == (char *)0x0) && (cVar4 = *pcVar6, cVar4 != ',')) break;
              cVar3 = pcVar6[1];
              pcVar6 = pcVar6 + 1;
              cVar4 = '\0';
            } while (cVar3 != '\0');
            if (cVar4 != '\0') {
              if ((((cVar4 - 0x2bU & 0xfc) == 0) && (cVar4 != ',')) || ((byte)(cVar4 - 0x30U) < 10))
              {
                pcVar6 = nsvg__parseNumber(pcVar6,&local_88,0x40);
              }
              else {
                pcVar6 = pcVar6 + 1;
                local_87 = 0;
                local_88 = cVar4;
              }
            }
          }
          dVar11 = nsvg__atof(&local_88);
          local_98[lVar8] = (float)dVar11;
          lVar8 = lVar8 + 1;
          if (1 < lVar8) {
            if (iVar7 == 0) {
              if (param_1->npts < 1) {
                nsvg__addPoint(param_1,local_98[0],local_98[1]);
              }
              else {
                param_1->pts[(longlong)(param_1->npts * 2) + -2] = local_98[0];
                param_1->pts[(longlong)(param_1->npts * 2) + -1] = local_98[1];
              }
            }
            else {
              nsvg__lineTo(param_1,local_98[0],local_98[1]);
            }
            lVar8 = 0;
            iVar7 = iVar7 + 1;
          }
          cVar3 = *pcVar6;
        }
      }
      lVar10 = lVar10 + 0x10;
      ppcVar9 = ppcVar9 + 2;
      pcVar6 = *(char **)(lVar10 + (longlong)param_2);
      ppcVar5 = (char **)(lVar10 + (longlong)param_2);
    } while (pcVar6 != (char *)0x0);
  }
  nsvg__addPath(param_1,(char)param_3);
  nsvg__addShape(param_1);
  return;
}

// nsvg__parseRect @ 142415670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl nsvg__parseRect(NSVGparser *param_1,char **param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  NSVGcoordinate NVar5;
  char **ppcVar6;
  char **ppcVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res10;
  float local_res18;
  float local_res20;
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pcVar4 = *param_2;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  local_res10 = 0.0;
  local_res20 = 0.0;
  local_res18 = 0.0;
  fVar15 = __real_bf800000;
  fVar10 = __real_bf800000;
  if (pcVar4 != (char *)0x0) {
    ppcVar7 = param_2 + 1;
    lVar8 = 0;
    ppcVar6 = param_2;
    fVar9 = __real_bf800000;
    do {
      iVar3 = nsvg__parseAttr(param_1,pcVar4,*ppcVar7);
      if (iVar3 == 0) {
        iVar3 = strcmp(*ppcVar6,"x");
        if (iVar3 == 0) {
          fVar11 = param_1->viewWidth;
          fVar15 = param_1->viewMinx;
          NVar5 = nsvg__parseCoordinateRaw(*ppcVar7);
          local_res10 = nsvg__convertToPixels(param_1,NVar5,fVar15,fVar11);
        }
        iVar3 = strcmp(*ppcVar6,"y");
        if (iVar3 == 0) {
          fVar11 = param_1->viewHeight;
          fVar15 = param_1->viewMiny;
          NVar5 = nsvg__parseCoordinateRaw(*ppcVar7);
          fVar13 = nsvg__convertToPixels(param_1,NVar5,fVar15,fVar11);
        }
        iVar3 = strcmp(*ppcVar6,"width");
        if (iVar3 == 0) {
          fVar11 = param_1->viewWidth;
          NVar5 = nsvg__parseCoordinateRaw(*ppcVar7);
          fVar12 = nsvg__convertToPixels(param_1,NVar5,0.0,fVar11);
        }
        iVar3 = strcmp(*ppcVar6,"height");
        if (iVar3 == 0) {
          fVar11 = param_1->viewHeight;
          NVar5 = nsvg__parseCoordinateRaw(*ppcVar7);
          local_res18 = nsvg__convertToPixels(param_1,NVar5,0.0,fVar11);
        }
        iVar3 = strcmp(*ppcVar6,"rx");
        if (iVar3 == 0) {
          fVar11 = param_1->viewWidth;
          NVar5 = nsvg__parseCoordinateRaw(*ppcVar7);
          fVar9 = nsvg__convertToPixels(param_1,NVar5,0.0,fVar11);
          fVar9 = (float)((uint)fVar9 & uVar2);
        }
        iVar3 = strcmp(*ppcVar6,"ry");
        fVar11 = local_res18;
        if (iVar3 == 0) {
          fVar15 = param_1->viewHeight;
          NVar5 = nsvg__parseCoordinateRaw(*ppcVar7);
          fVar10 = nsvg__convertToPixels(param_1,NVar5,0.0,fVar15);
          fVar10 = (float)((uint)fVar10 & uVar2);
        }
      }
      lVar8 = lVar8 + 0x10;
      ppcVar7 = ppcVar7 + 2;
      pcVar4 = *(char **)(lVar8 + (longlong)param_2);
      ppcVar6 = (char **)(lVar8 + (longlong)param_2);
    } while (pcVar4 != (char *)0x0);
    local_res20 = fVar13;
    if ((((0.0 <= fVar9) || (fVar15 = fVar10, fVar10 <= 0.0)) && (fVar15 = fVar9, fVar10 < 0.0)) &&
       (0.0 < fVar9)) {
      fVar10 = fVar9;
    }
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (fVar12 * __real_3f000000 <= fVar15) {
    fVar15 = fVar12 * __real_3f000000;
  }
  if (fVar11 * __real_3f000000 <= fVar10) {
    fVar10 = fVar11 * __real_3f000000;
  }
  if ((fVar12 != 0.0) && (fVar11 != 0.0)) {
    bVar1 = fVar15 < __real_3727c5ac;
    param_1->npts = 0;
    if ((bVar1) || (fVar10 < __real_38d1b717)) {
      nsvg__addPoint(param_1,local_res10,local_res20);
      nsvg__lineTo(param_1,fVar12 + local_res10,local_res20);
      nsvg__lineTo(param_1,fVar12 + local_res10,fVar11 + local_res20);
      nsvg__lineTo(param_1,local_res10,fVar11 + local_res20);
    }
    else {
      fVar14 = fVar15 + local_res10;
      nsvg__addPoint(param_1,fVar14,local_res20);
      fVar12 = fVar12 + local_res10;
      nsvg__lineTo(param_1,fVar12 - fVar15,local_res20);
      fVar16 = fVar15 * ___real_3ee53aee;
      fVar13 = fVar12 - fVar16;
      nsvg__addPoint(param_1,fVar13,local_res20);
      fVar11 = fVar10 * ___real_3ee53aee;
      fVar9 = fVar11 + local_res20;
      nsvg__addPoint(param_1,fVar12,fVar9);
      nsvg__addPoint(param_1,fVar12,fVar10 + local_res20);
      local_res18 = local_res18 + local_res20;
      nsvg__lineTo(param_1,fVar12,local_res18 - fVar10);
      fVar11 = local_res18 - fVar11;
      nsvg__addPoint(param_1,fVar12,fVar11);
      nsvg__addPoint(param_1,fVar13,local_res18);
      nsvg__addPoint(param_1,fVar12 - fVar15,local_res18);
      nsvg__lineTo(param_1,fVar14,local_res18);
      fVar16 = fVar16 + local_res10;
      nsvg__addPoint(param_1,fVar16,local_res18);
      nsvg__addPoint(param_1,local_res10,fVar11);
      nsvg__addPoint(param_1,local_res10,local_res18 - fVar10);
      nsvg__lineTo(param_1,local_res10,fVar10 + local_res20);
      nsvg__addPoint(param_1,local_res10,fVar9);
      nsvg__addPoint(param_1,fVar16,local_res20);
      nsvg__addPoint(param_1,fVar14,local_res20);
    }
    nsvg__addPath(param_1,'\x01');
    nsvg__addShape(param_1);
  }
  return;
}

// nsvg__parseSVG @ 142415c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl nsvg__parseSVG(NSVGparser *param_1,char **param_2)

{
  int iVar1;
  NSVGcoordinate NVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char **ppcVar7;
  longlong lVar8;
  char **ppcVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_98 [32];
  char local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pcVar3 = *param_2;
  if (pcVar3 != (char *)0x0) {
    ppcVar9 = param_2 + 1;
    lVar8 = 0;
    ppcVar7 = param_2;
    do {
      iVar1 = nsvg__parseAttr(param_1,pcVar3,*ppcVar9);
      if (iVar1 == 0) {
        pcVar3 = *ppcVar7;
        iVar1 = strcmp(pcVar3,"width");
        if (iVar1 == 0) {
          NVar2 = nsvg__parseCoordinateRaw(*ppcVar9);
          fVar10 = nsvg__convertToPixels(param_1,NVar2,0.0,0.0);
          param_1->image->width = fVar10;
        }
        else {
          iVar1 = strcmp(pcVar3,"height");
          if (iVar1 == 0) {
            NVar2 = nsvg__parseCoordinateRaw(*ppcVar9);
            fVar10 = nsvg__convertToPixels(param_1,NVar2,0.0,0.0);
            param_1->image->height = fVar10;
          }
          else {
            iVar1 = strcmp(pcVar3,"viewBox");
            if (iVar1 == 0) {
              pcVar3 = nsvg__parseNumber(*ppcVar9,local_78,0x40);
              dVar11 = nsvg__atof(local_78);
              param_1->viewMinx = (float)dVar11;
              cVar5 = *pcVar3;
              if (cVar5 == '\0') {
                return;
              }
              do {
                pcVar4 = strchr(" \t\n\v\f\r",(int)cVar5);
                if (((pcVar4 == (char *)0x0) && (cVar6 = *pcVar3, cVar6 != '%')) && (cVar6 != ','))
                break;
                cVar5 = pcVar3[1];
                pcVar3 = pcVar3 + 1;
                cVar6 = '\0';
              } while (cVar5 != '\0');
              if (cVar6 == '\0') {
                return;
              }
              pcVar3 = nsvg__parseNumber(pcVar3,local_78,0x40);
              dVar11 = nsvg__atof(local_78);
              param_1->viewMiny = (float)dVar11;
              cVar5 = *pcVar3;
              if (cVar5 == '\0') {
                return;
              }
              do {
                pcVar4 = strchr(" \t\n\v\f\r",(int)cVar5);
                if (((pcVar4 == (char *)0x0) && (cVar6 = *pcVar3, cVar6 != '%')) && (cVar6 != ','))
                break;
                cVar5 = pcVar3[1];
                pcVar3 = pcVar3 + 1;
                cVar6 = '\0';
              } while (cVar5 != '\0');
              if (cVar6 == '\0') {
                return;
              }
              pcVar3 = nsvg__parseNumber(pcVar3,local_78,0x40);
              dVar11 = nsvg__atof(local_78);
              param_1->viewWidth = (float)dVar11;
              cVar5 = *pcVar3;
              if (cVar5 == '\0') {
                return;
              }
              do {
                pcVar4 = strchr(" \t\n\v\f\r",(int)cVar5);
                if (((pcVar4 == (char *)0x0) && (cVar6 = *pcVar3, cVar6 != '%')) && (cVar6 != ','))
                break;
                cVar5 = pcVar3[1];
                pcVar3 = pcVar3 + 1;
                cVar6 = '\0';
              } while (cVar5 != '\0');
              if (cVar6 == '\0') {
                return;
              }
              nsvg__parseNumber(pcVar3,local_78,0x40);
              dVar11 = nsvg__atof(local_78);
              param_1->viewHeight = (float)dVar11;
            }
            else {
              iVar1 = strcmp(pcVar3,"preserveAspectRatio");
              if (iVar1 == 0) {
                pcVar3 = strstr(*ppcVar9,"none");
                if (pcVar3 == (char *)0x0) {
                  pcVar3 = strstr(*ppcVar9,"xMin");
                  if (pcVar3 == (char *)0x0) {
                    pcVar3 = strstr(*ppcVar9,"xMid");
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = strstr(*ppcVar9,"xMax");
                      if (pcVar3 != (char *)0x0) {
                        param_1->alignX = 2;
                      }
                    }
                    else {
                      param_1->alignX = 1;
                    }
                  }
                  else {
                    param_1->alignX = 0;
                  }
                  pcVar3 = strstr(*ppcVar9,"yMin");
                  if (pcVar3 == (char *)0x0) {
                    pcVar3 = strstr(*ppcVar9,"yMid");
                    if (pcVar3 == (char *)0x0) {
                      pcVar3 = strstr(*ppcVar9,"yMax");
                      if (pcVar3 != (char *)0x0) {
                        param_1->alignY = 2;
                      }
                    }
                    else {
                      param_1->alignY = 1;
                    }
                  }
                  else {
                    param_1->alignY = 0;
                  }
                  param_1->alignType = 1;
                  pcVar3 = strstr(*ppcVar9,"slice");
                  if (pcVar3 != (char *)0x0) {
                    param_1->alignType = 2;
                  }
                }
                else {
                  param_1->alignType = 0;
                }
              }
            }
          }
        }
      }
      lVar8 = lVar8 + 2;
      ppcVar9 = ppcVar9 + 2;
      pcVar3 = param_2[lVar8];
      ppcVar7 = param_2 + lVar8;
    } while (pcVar3 != (char *)0x0);
  }
  return;
}

// nsvg__parseStrokeDashArray @ 142416020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl nsvg__parseStrokeDashArray(NSVGparser *param_1,char *param_2,float *param_3)

{
  NSVGcoordinate NVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  ulonglong uVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_148 [32];
  float local_128;
  int iStack_124;
  char local_118 [64];
  char local_d8 [64];
  ulonglong local_98;
  ulonglong uVar10;
  
  fVar18 = __real_3f3504f3;
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_148;
  cVar3 = *param_2;
  uVar5 = 0;
  uVar9 = 0;
  fVar24 = 0.0;
  uVar12 = uVar9;
  uVar10 = uVar5;
  uVar15 = uVar5;
  if (cVar3 == 'n') {
    return 0;
  }
  while (cVar3 != '\0') {
    uVar12 = (uint)uVar10;
    local_118[0] = '\0';
    do {
      pcVar4 = strchr(" \t\n\v\f\r",(int)cVar3);
      if ((pcVar4 == (char *)0x0) && (cVar2 = *param_2, cVar2 != ',')) break;
      cVar3 = param_2[1];
      param_2 = param_2 + 1;
      cVar2 = '\0';
    } while (cVar3 != '\0');
    uVar13 = uVar5;
    if (cVar2 != '\0') {
      cVar3 = *param_2;
      do {
        pcVar4 = strchr(" \t\n\v\f\r",(int)cVar3);
        if ((pcVar4 != (char *)0x0) || (*param_2 == ',')) break;
        if ((longlong)uVar13 < 0x3f) {
          local_118[uVar13] = *param_2;
          uVar13 = uVar13 + 1;
        }
        cVar3 = param_2[1];
        param_2 = param_2 + 1;
      } while (cVar3 != '\0');
    }
    local_118[uVar13] = '\0';
    if (local_118[0] == '\0') break;
    if ((longlong)uVar15 < 8) {
      fVar16 = param_1->viewWidth;
      fVar19 = param_1->viewHeight;
      pcVar4 = nsvg__parseNumber(local_118,local_d8,0x40);
      iStack_124 = nsvg__parseUnits(pcVar4);
      dVar17 = nsvg__atof(local_d8);
      local_128 = (float)dVar17;
      NVar1.units = iStack_124;
      NVar1.value = local_128;
      fVar16 = nsvg__convertToPixels
                         (param_1,NVar1,0.0,SQRT(fVar19 * fVar19 + fVar16 * fVar16) * fVar18);
      uVar10 = (ulonglong)(uVar12 + 1);
      param_3[uVar15] = (float)((uint)fVar16 & uVar7);
      uVar15 = uVar15 + 1;
    }
    uVar12 = (uint)uVar10;
    cVar3 = *param_2;
  }
  if ((0 < (int)uVar12) && (7 < uVar12)) {
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar18 = 0.0;
    fVar24 = 0.0;
    fVar16 = 0.0;
    fVar19 = 0.0;
    uVar7 = uVar12 & 0x80000007;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
    }
    uVar10 = uVar5;
    do {
      pfVar6 = param_3 + uVar5;
      uVar9 = (int)uVar10 + 8;
      uVar10 = (ulonglong)uVar9;
      fVar20 = fVar20 + *pfVar6;
      fVar21 = fVar21 + pfVar6[1];
      fVar22 = fVar22 + pfVar6[2];
      fVar23 = fVar23 + pfVar6[3];
      pfVar6 = param_3 + uVar5 + 4;
      uVar5 = uVar5 + 8;
      fVar18 = fVar18 + *pfVar6;
      fVar24 = fVar24 + pfVar6[1];
      fVar16 = fVar16 + pfVar6[2];
      fVar19 = fVar19 + pfVar6[3];
    } while ((longlong)uVar5 < (longlong)(int)(uVar12 - uVar7));
    fVar24 = fVar16 + fVar22 + fVar18 + fVar20 + fVar19 + fVar23 + fVar24 + fVar21;
  }
  lVar8 = (longlong)(int)uVar9;
  lVar14 = (longlong)(int)uVar12;
  if (lVar8 < lVar14) {
    if (3 < lVar14 - lVar8) {
      pfVar6 = param_3 + lVar8 + 2;
      lVar11 = ((lVar14 - lVar8) - 4U >> 2) + 1;
      lVar8 = lVar8 + lVar11 * 4;
      do {
        fVar24 = fVar24 + pfVar6[-2] + pfVar6[-1] + *pfVar6 + pfVar6[1];
        pfVar6 = pfVar6 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      if (lVar14 <= lVar8) goto LAB_1424162ee;
    }
    do {
      fVar24 = fVar24 + param_3[lVar8];
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar14);
  }
LAB_1424162ee:
  if (fVar24 <= __real_358637bd) {
    uVar12 = 0;
  }
  return uVar12;
}

// nsvg__parseStyle @ 142416330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl nsvg__parseStyle(NSVGparser *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  int iVar7;
  char *pcVar8;
  undefined1 auStack_458 [32];
  char local_438 [512];
  char local_238 [512];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_458;
  cVar1 = *param_2;
  do {
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = *param_2;
    do {
      pcVar2 = strchr(" \t\n\v\f\r",(int)cVar1);
      if (pcVar2 == (char *)0x0) break;
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    cVar1 = *param_2;
    pcVar2 = param_2;
    while ((pcVar8 = pcVar2, cVar1 != '\0' && (cVar1 != ';'))) {
      pcVar8 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar8;
    }
    while ((param_2 < pcVar8 &&
           ((*pcVar8 == ';' || (pcVar3 = strchr(" \t\n\v\f\r",(int)*pcVar8), pcVar3 != (char *)0x0))
           ))) {
      pcVar8 = pcVar8 + -1;
    }
    pcVar8 = pcVar8 + 1;
    for (pcVar3 = param_2; (pcVar5 = pcVar3, pcVar3 < pcVar8 && (*pcVar3 != ':'));
        pcVar3 = pcVar3 + 1) {
    }
    while ((param_2 < pcVar5 &&
           ((*pcVar5 == ':' || (pcVar4 = strchr(" \t\n\v\f\r",(int)*pcVar5), pcVar4 != (char *)0x0))
           ))) {
      pcVar5 = pcVar5 + -1;
    }
    iVar7 = ((int)pcVar5 - (int)param_2) + 1;
    if (iVar7 < 0x200) {
      uVar6 = (ulonglong)iVar7;
      if (iVar7 != 0) goto LAB_14241644c;
    }
    else {
      uVar6 = 0x1ff;
LAB_14241644c:
      memcpy(local_238,param_2,uVar6);
    }
    if (0x1ff < uVar6) goto LAB_142416540;
    local_238[uVar6] = '\0';
    while ((pcVar3 < pcVar8 &&
           ((*pcVar3 == ':' || (pcVar5 = strchr(" \t\n\v\f\r",(int)*pcVar3), pcVar5 != (char *)0x0))
           ))) {
      pcVar3 = pcVar3 + 1;
    }
    iVar7 = (int)pcVar8 - (int)pcVar3;
    if (iVar7 < 0x200) {
      uVar6 = (ulonglong)iVar7;
      if (iVar7 != 0) goto LAB_1424164bc;
    }
    else {
      uVar6 = 0x1ff;
LAB_1424164bc:
      memcpy(local_438,pcVar3,uVar6);
    }
    if (0x1ff < uVar6) {
LAB_142416540:
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_438[uVar6] = '\0';
    nsvg__parseAttr(param_1,local_238,local_438);
    if (*pcVar2 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    param_2 = pcVar2 + 1;
  } while( true );
}

// nsvg__parseTransform @ 142416550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl nsvg__parseTransform(float *param_1,char *param_2)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  longlong lVar15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  int local_138 [2];
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[5] = 0.0;
  param_1[3] = 1.0;
  fVar10 = __real_3bb60b61;
  uVar9 = _UNK_15076b188;
  uVar8 = ___xmm_3f80000000000000000000003f800000;
  fVar7 = _UNK_15068950c;
  fVar6 = _UNK_150689508;
  fVar5 = _UNK_150689504;
  fVar4 = ___xmm_00000000000000003f80000000000000;
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar2 = __real_40490fdb;
  param_1[4] = 0.0;
  cVar1 = *param_2;
  fVar17 = fStack_11c;
  fVar16 = local_120;
  do {
    if (cVar1 == '\0') {
      return;
    }
    iVar14 = strncmp(param_2,"matrix",6);
    if (iVar14 == 0) {
      local_138[0] = 0;
      iVar14 = nsvg__parseTransformArgs(param_2,(float *)&local_f0,6,local_138);
      if (local_138[0] == 6) {
        local_130 = (float)local_f0;
        fStack_12c = (float)((ulonglong)local_f0 >> 0x20);
        fStack_128 = (float)uStack_e8;
        fStack_124 = (float)((ulonglong)uStack_e8 >> 0x20);
        fVar16 = (float)local_e0;
        fVar17 = (float)((ulonglong)local_e0 >> 0x20);
      }
LAB_14241693a:
      local_f0 = CONCAT44(fStack_12c,local_130);
      uStack_e8 = CONCAT44(fStack_124,fStack_128);
      local_e0 = CONCAT44(fVar17,fVar16);
      nsvg__xformMultiply((float *)&local_f0,param_1);
      lVar15 = (longlong)iVar14;
      *(undefined8 *)param_1 = local_f0;
      *(undefined8 *)(param_1 + 2) = uStack_e8;
      *(undefined8 *)(param_1 + 4) = local_e0;
    }
    else {
      iVar14 = strncmp(param_2,"translate",9);
      if (iVar14 == 0) {
        local_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&local_110,2,local_138);
        local_130 = (float)uVar8;
        fStack_12c = (float)((ulonglong)uVar8 >> 0x20);
        fStack_128 = (float)uVar9;
        fStack_124 = (float)((ulonglong)uVar9 >> 0x20);
        fVar16 = local_110;
        fVar17 = local_10c;
        if (local_138[0] == 1) {
          local_10c = 0.0;
          fVar17 = 0.0;
        }
        goto LAB_14241693a;
      }
      iVar14 = strncmp(param_2,"scale",5);
      if (iVar14 == 0) {
        local_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&local_108,2,local_138);
        if (local_138[0] == 1) {
          local_104 = local_108;
        }
        local_130 = local_108;
        fStack_12c = 0.0;
        fStack_128 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        fStack_124 = local_104;
        goto LAB_14241693a;
      }
      iVar14 = strncmp(param_2,"rotate",6);
      if (iVar14 == 0) {
        local_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&local_100,3,local_138);
        iVar11 = local_138[0];
        if (local_138[0] == 1) {
          local_fc = 0.0;
          local_f8 = 0.0;
        }
        fVar13 = local_f8;
        fVar12 = local_fc;
        fVar18 = 0.0;
        fVar17 = 0.0;
        if (1 < local_138[0]) {
          fVar17 = (float)((uint)local_f8 ^ uVar3);
          fVar18 = (float)((uint)local_fc ^ uVar3);
        }
        __libm_sse2_sincosf_();
        fStack_128 = (float)((uint)extraout_XMM0_Da ^ uVar3);
        fVar16 = fVar17 * fStack_128 + fVar18 * extraout_XMM0_Db;
        fVar17 = fVar17 * extraout_XMM0_Db + fVar18 * extraout_XMM0_Da;
        local_130 = extraout_XMM0_Db;
        fStack_12c = extraout_XMM0_Da;
        fStack_124 = extraout_XMM0_Db;
        if (1 < iVar11) {
          fVar17 = fVar13 + fVar17;
          fVar16 = fVar12 + fVar16;
        }
        goto LAB_14241693a;
      }
      iVar14 = strncmp(param_2,"skewX",5);
      if (iVar14 == 0) {
        local_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&local_118,1,local_138);
        local_130 = 1.0;
        fStack_12c = 0.0;
        fStack_128 = tanf(local_118 * fVar10 * fVar2);
        fStack_124 = 1.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        goto LAB_14241693a;
      }
      iVar14 = strncmp(param_2,"skewY",5);
      if (iVar14 == 0) {
        local_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&local_114,1,local_138);
        local_130 = 1.0;
        fStack_12c = tanf(local_114 * fVar10 * fVar2);
        fStack_128 = fVar4;
        fStack_124 = fVar5;
        local_120 = fVar6;
        fStack_11c = fVar7;
        fVar16 = fVar6;
        fVar17 = fVar7;
        goto LAB_14241693a;
      }
      lVar15 = 1;
    }
    param_2 = param_2 + lVar15;
    cVar1 = *param_2;
  } while( true );
}

// nsvg__parseTransformArgs @ 142416a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl nsvg__parseTransformArgs(char *param_1,float *param_2,int param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  double dVar5;
  undefined1 auStack_98 [32];
  char local_78 [64];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  *param_4 = 0;
  cVar2 = *param_1;
  pcVar3 = param_1;
  if (cVar2 == '\0') {
LAB_142416a85:
    cVar2 = *pcVar3;
    pcVar4 = pcVar3;
    while (cVar2 != '\0') {
      if (cVar2 == ')') {
        if (*pcVar4 == '\0') {
          return 1;
        }
        while( true ) {
          while( true ) {
            if (pcVar4 <= pcVar3) {
              return (int)pcVar4 - (int)param_1;
            }
            cVar2 = *pcVar3;
            if ((((cVar2 == '-') || (cVar2 == '+')) || (cVar2 == '.')) ||
               ((byte)(cVar2 - 0x30U) < 10)) break;
            pcVar3 = pcVar3 + 1;
          }
          if (param_3 <= *param_4) break;
          pcVar3 = nsvg__parseNumber(pcVar3,local_78,0x40);
          dVar5 = nsvg__atof(local_78);
          param_2[*param_4] = (float)dVar5;
          *param_4 = *param_4 + 1;
        }
        return 0;
      }
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
      cVar2 = *pcVar1;
    }
  }
  else {
    do {
      if (cVar2 == '(') goto LAB_142416a85;
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
  }
  return 1;
}

// nsvg__parseUnits @ 142416b20

int __cdecl nsvg__parseUnits(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  cVar2 = *param_1;
  pcVar1 = param_1 + 1;
  if (cVar2 == 'p') {
    cVar3 = *pcVar1;
    if (cVar3 == 'x') {
      return 1;
    }
    if (cVar3 == 't') {
      return 2;
    }
    if (cVar3 == 'c') {
      return 3;
    }
  }
  if (cVar2 == 'm') {
    if (*pcVar1 == 'm') {
      return 4;
    }
  }
  else if (cVar2 == 'c') {
    if (*pcVar1 == 'm') {
      return 5;
    }
    goto LAB_142416b82;
  }
  if (cVar2 == 'i') {
    iVar4 = 0;
    if (*pcVar1 == 'n') {
      iVar4 = 6;
    }
    return iVar4;
  }
LAB_142416b82:
  if (cVar2 == '%') {
    return 7;
  }
  if (cVar2 == 'e') {
    if (param_1[1] == 'm') {
      return 8;
    }
    iVar4 = 0;
    if (param_1[1] == 'x') {
      iVar4 = 9;
    }
    return iVar4;
  }
  return 0;
}

// nsvg__parseUrl @ 142416bc0

void __cdecl nsvg__parseUrl(char *param_1,char *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  pcVar2 = param_2 + (ulonglong)(param_2[4] == '#') + 4;
  uVar4 = uVar1;
  do {
    uVar3 = (uint)uVar4;
    if (*pcVar2 == ')') break;
    param_1[uVar1] = *pcVar2;
    pcVar2 = pcVar2 + 1;
    uVar1 = uVar1 + 1;
    uVar3 = uVar3 + 1;
    uVar4 = (ulonglong)uVar3;
  } while ((longlong)uVar1 < 0x3f);
  param_1[(int)uVar3] = '\0';
  return;
}

// nsvg__parseXML @ 142416c10

int __cdecl
nsvg__parseXML(char *param_1,_func___cdecl_void_NSVGparser_ptr_char_ptr_char_ptr_ptr *param_2,
              _func___cdecl_void_NSVGparser_ptr_char_ptr *param_3,
              _func___cdecl_void_NSVGparser_ptr_char_ptr *param_4,NSVGparser *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar3 = strstr(param_1,"<defs");
  if (pcVar3 != (char *)0x0) {
    sVar4 = strlen(pcVar3);
    pcVar5 = malloc(sVar4 + 1);
    if (pcVar5 != (char *)0x0) {
      strcpy(pcVar5,pcVar3);
      iVar2 = 2;
      cVar1 = param_5->parsedDefs;
      pcVar3 = pcVar5;
      pcVar7 = pcVar5;
      while (cVar1 == '\0') {
        if (*pcVar7 == '<') {
          if (iVar2 == 2) {
            *pcVar7 = '\0';
            cVar1 = *pcVar3;
            if (cVar1 == '\0') {
LAB_142416cfe:
              iVar2 = 1;
              pcVar3 = pcVar7 + 1;
            }
            else {
              do {
                pcVar6 = strchr(" \t\n\v\f\r",(int)cVar1);
                if (pcVar6 == (char *)0x0) {
                  if ((*pcVar3 != '\0') &&
                     (param_4 != (_func___cdecl_void_NSVGparser_ptr_char_ptr *)0x0)) {
                    (*param_4)(param_5,pcVar3);
                  }
                  goto LAB_142416cfe;
                }
                cVar1 = pcVar3[1];
                pcVar3 = pcVar3 + 1;
              } while (cVar1 != '\0');
              iVar2 = 1;
              pcVar3 = pcVar7 + 1;
            }
          }
        }
        else if ((*pcVar7 == '>') && (iVar2 == 1)) {
          *pcVar7 = '\0';
          nsvg__parseElement(pcVar3,param_2,param_3,param_5);
          iVar2 = 2;
          pcVar3 = pcVar7 + 1;
        }
        pcVar7 = pcVar7 + 1;
        cVar1 = param_5->parsedDefs;
      }
      free(pcVar5);
    }
  }
  cVar1 = *param_1;
  iVar2 = 2;
  pcVar3 = param_1;
  do {
    if (cVar1 == '\0') {
      return 1;
    }
    if (cVar1 == '<') {
      if (iVar2 == 2) {
        *pcVar3 = '\0';
        cVar1 = *param_1;
        if (cVar1 == '\0') {
LAB_142416dce:
          iVar2 = 1;
          param_1 = pcVar3 + 1;
        }
        else {
          do {
            pcVar5 = strchr(" \t\n\v\f\r",(int)cVar1);
            if (pcVar5 == (char *)0x0) {
              if ((*param_1 != '\0') &&
                 (param_4 != (_func___cdecl_void_NSVGparser_ptr_char_ptr *)0x0)) {
                (*param_4)(param_5,param_1);
              }
              goto LAB_142416dce;
            }
            cVar1 = param_1[1];
            param_1 = param_1 + 1;
          } while (cVar1 != '\0');
          iVar2 = 1;
          param_1 = pcVar3 + 1;
        }
      }
    }
    else if ((cVar1 == '>') && (iVar2 == 1)) {
      *pcVar3 = '\0';
      nsvg__parseElement(param_1,param_2,param_3,param_5);
      iVar2 = 2;
      param_1 = pcVar3 + 1;
    }
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  } while( true );
}

// nsvg__pathArcTo @ 142416e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
nsvg__pathArcTo(NSVGparser *param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_134;
  
  iVar3 = 0;
  fVar10 = (float)((uint)*param_4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar11 = (float)((uint)param_4[1] & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar21 = param_4[5];
  fVar18 = 0.0;
  fVar22 = param_4[6];
  fVar19 = 0.0;
  fVar20 = 0.0;
  local_134 = 0.0;
  bVar1 = __real_3eb0c6f7a0b5ed8d <
          (double)(float)((uint)param_4[3] & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar6 = *param_2;
  fVar7 = *param_3;
  bVar2 = __real_3eb0c6f7a0b5ed8d <
          (double)(float)((uint)param_4[4] & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_5 != 0) {
    fVar21 = fVar21 + fVar6;
    fVar22 = fVar22 + fVar7;
  }
  fVar12 = fVar6 - fVar21;
  fVar15 = fVar7 - fVar22;
  if (((SQRT(fVar15 * fVar15 + fVar12 * fVar12) < __real_358637bd) || (fVar10 < __real_358637bd)) ||
     (fVar11 < __real_358637bd)) {
    nsvg__lineTo(param_1,fVar21,fVar22);
    *param_2 = fVar21;
    *param_3 = fVar22;
    return;
  }
  __libm_sse2_sincosf_();
  fVar14 = __real_3f800000;
  fVar8 = extraout_XMM0_Db * fVar12 + extraout_XMM0_Da * fVar15;
  fVar5 = fVar8 * __real_3f000000;
  fVar8 = fVar8 * fVar8 * __real_3e800000;
  fVar15 = extraout_XMM0_Db * fVar15 * __real_3f000000 - extraout_XMM0_Da * fVar12 * __real_3f000000
  ;
  fVar12 = (fVar15 * fVar15) / (fVar11 * fVar11) + fVar8 / (fVar10 * fVar10);
  if (__real_3f800000 < fVar12) {
    fVar12 = SQRT(fVar12);
    fVar10 = fVar10 * fVar12;
    fVar11 = fVar11 * fVar12;
  }
  fVar23 = 0.0;
  fVar8 = fVar11 * fVar11 * fVar8;
  fVar12 = fVar10 * fVar10 * fVar15 * fVar15;
  fVar9 = fVar12 + fVar8;
  fVar8 = (fVar11 * fVar11 * fVar10 * fVar10 - fVar12) - fVar8;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (0.0 < fVar9) {
    fVar23 = SQRT(fVar8 / fVar9);
  }
  if (bVar1 == bVar2) {
    fVar23 = (float)((uint)fVar23 ^ __xmm_80000000800000008000000080000000);
  }
  fVar13 = __real_3f800000 / fVar10;
  fVar16 = __real_3f800000 / fVar11;
  fVar8 = fVar23 * fVar10 * fVar15 * fVar16;
  fVar23 = (float)((uint)(fVar23 * fVar11 * fVar5 * fVar13) ^ __xmm_80000000800000008000000080000000
                  );
  fVar12 = (fVar15 - fVar23) * fVar16;
  fVar9 = (fVar5 - fVar8) * fVar13;
  nsvg__vecang(__real_3f800000,0.0,fVar9,fVar12);
  uVar17 = __xmm_80000000800000008000000080000000;
  fVar12 = nsvg__vecang(fVar9,fVar12,
                        ((float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000) - fVar8) *
                        fVar13,((float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000) -
                               fVar23) * fVar16);
  if (bVar2) {
    fVar15 = __real_40c90fdb;
    if (0.0 <= fVar12) goto LAB_1424171d4;
  }
  else {
    fVar15 = __real_c0c90fdb;
    if (fVar12 <= 0.0) goto LAB_1424171d4;
  }
  fVar12 = fVar12 + fVar15;
LAB_1424171d4:
  fVar15 = (float)((uint)extraout_XMM0_Da ^ uVar17);
  fVar6 = (fVar6 + fVar21) * __real_3f000000;
  fVar7 = (fVar7 + fVar22) * __real_3f000000;
  iVar4 = (int)((float)((uint)fVar12 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3f22f983 +
               fVar14);
  __libm_sse2_sincosf_();
  fVar14 = (float)((uint)(((fVar14 - extraout_XMM0_Db_00) * ___real_3faaaaab) / extraout_XMM0_Da_00)
                  & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar12 < 0.0) {
    fVar14 = (float)((uint)fVar14 ^ uVar17);
  }
  if (iVar4 < 0) {
    *param_2 = fVar21;
  }
  else {
    do {
      __libm_sse2_sincosf_();
      fVar12 = (float)((uint)(extraout_XMM0_Da_01 * fVar10 * fVar14) ^ uVar17);
      fVar5 = extraout_XMM0_Db_01 * fVar11 * fVar14;
      fVar9 = extraout_XMM0_Db * extraout_XMM0_Db_01 * fVar10 +
              fVar15 * extraout_XMM0_Da_01 * fVar11 +
              ((fVar6 + extraout_XMM0_Db * fVar8) - extraout_XMM0_Da * fVar23);
      fVar13 = extraout_XMM0_Db * extraout_XMM0_Da_01 * fVar11 +
               extraout_XMM0_Da * extraout_XMM0_Db_01 * fVar10 +
               fVar7 + extraout_XMM0_Da * fVar8 + extraout_XMM0_Db * fVar23;
      fVar16 = extraout_XMM0_Db * fVar12 + fVar15 * fVar5;
      fVar12 = extraout_XMM0_Da * fVar12 + extraout_XMM0_Db * fVar5;
      if (0 < iVar3) {
        nsvg__addPoint(param_1,fVar19 + fVar18,fVar20 + local_134);
        nsvg__addPoint(param_1,fVar9 - fVar16,fVar13 - fVar12);
        nsvg__addPoint(param_1,fVar9,fVar13);
      }
      iVar3 = iVar3 + 1;
      uVar17 = __xmm_80000000800000008000000080000000;
      fVar18 = fVar9;
      fVar19 = fVar16;
      fVar20 = fVar12;
      local_134 = fVar13;
    } while (iVar3 <= iVar4);
    *param_2 = fVar21;
  }
  *param_3 = fVar22;
  return;
}

// nsvg__prepareStroke @ 1424174f0

void __cdecl nsvg__prepareStroke(NSVGrasterizer *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  NSVGpoint *pNVar7;
  NSVGpoint *pNVar8;
  NSVGpoint *pNVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar3 = __real_358637bd;
  fVar2 = __real_3f800000;
  iVar10 = param_1->npoints;
  iVar11 = 0;
  iVar5 = 0;
  pNVar7 = param_1->points + (iVar10 + -1);
  pNVar9 = param_1->points;
  if (0 < iVar10) {
    do {
      fVar16 = pNVar9->x - pNVar7->x;
      pNVar7->dx = fVar16;
      fVar14 = pNVar9->y - pNVar7->y;
      pNVar7->dy = fVar14;
      fVar17 = SQRT(fVar14 * fVar14 + fVar16 * fVar16);
      if (fVar3 < fVar17) {
        pNVar7->dx = (fVar2 / fVar17) * fVar16;
        pNVar7->dy = fVar14 * (fVar2 / fVar17);
      }
      pNVar7->len = fVar17;
      iVar5 = iVar5 + 1;
      iVar10 = param_1->npoints;
      pNVar7 = pNVar9;
      pNVar9 = pNVar9 + 1;
    } while (iVar5 < iVar10);
  }
  fVar4 = __real_44160000;
  fVar17 = __real_3e800000;
  fVar16 = __real_3f000000;
  fVar14 = __real_bf000000;
  pNVar9 = param_1->points + (iVar10 + -1);
  pNVar7 = param_1->points;
  if (0 < iVar10) {
    do {
      pNVar8 = pNVar7;
      fVar1 = pNVar8->dx;
      fVar12 = pNVar9->dx * fVar16;
      fVar15 = pNVar8->dy + pNVar9->dy;
      fVar18 = fVar1 * fVar14 - fVar12;
      pNVar8->dmx = fVar15 * fVar16;
      pNVar8->dmy = fVar18;
      fVar12 = fVar15 * fVar15 * fVar17 - (fVar1 * fVar16 + fVar12) * fVar18;
      if (fVar3 < fVar12) {
        fVar13 = fVar2 / fVar12;
        if (fVar4 <= fVar2 / fVar12) {
          fVar13 = fVar4;
        }
        pNVar8->dmy = fVar18 * fVar13;
        pNVar8->dmx = fVar13 * fVar15 * fVar16;
      }
      bVar6 = pNVar8->flags & 1;
      pNVar8->flags = bVar6;
      if (0.0 < fVar1 * pNVar9->dy - pNVar8->dy * pNVar9->dx) {
        bVar6 = bVar6 | 4;
        pNVar8->flags = bVar6;
      }
      if (((bVar6 & 1) != 0) && ((fVar12 * param_2 * param_2 < fVar2 || (param_3 - 1U < 2)))) {
        pNVar8->flags = bVar6 | 2;
      }
      iVar11 = iVar11 + 1;
      pNVar7 = pNVar8 + 1;
      pNVar9 = pNVar8;
    } while (iVar11 < param_1->npoints);
  }
  return;
}

// nsvg__pushAttr @ 142417760

void __cdecl nsvg__pushAttr(NSVGparser *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  NSVGattrib *pNVar11;
  NSVGattrib *pNVar12;
  NSVGattrib *pNVar13;
  longlong lVar14;
  NSVGattrib *pNVar15;
  
  iVar1 = param_1->attrHead;
  if (iVar1 < 0x7f) {
    param_1->attrHead = iVar1 + 1;
    lVar14 = 2;
    pNVar11 = param_1->attr + iVar1;
    pNVar12 = param_1->attr + iVar1 + 1;
    do {
      pNVar15 = pNVar12;
      pNVar13 = pNVar11;
      uVar2 = *(undefined8 *)(pNVar13->id + 8);
      *(undefined8 *)pNVar15->id = *(undefined8 *)pNVar13->id;
      *(undefined8 *)(pNVar15->id + 8) = uVar2;
      uVar2 = *(undefined8 *)(pNVar13->id + 0x18);
      *(undefined8 *)(pNVar15->id + 0x10) = *(undefined8 *)(pNVar13->id + 0x10);
      *(undefined8 *)(pNVar15->id + 0x18) = uVar2;
      uVar2 = *(undefined8 *)(pNVar13->id + 0x28);
      *(undefined8 *)(pNVar15->id + 0x20) = *(undefined8 *)(pNVar13->id + 0x20);
      *(undefined8 *)(pNVar15->id + 0x28) = uVar2;
      uVar2 = *(undefined8 *)(pNVar13->id + 0x38);
      *(undefined8 *)(pNVar15->id + 0x30) = *(undefined8 *)(pNVar13->id + 0x30);
      *(undefined8 *)(pNVar15->id + 0x38) = uVar2;
      uVar2 = *(undefined8 *)(pNVar13->xform + 2);
      *(undefined8 *)pNVar15->xform = *(undefined8 *)pNVar13->xform;
      *(undefined8 *)(pNVar15->xform + 2) = uVar2;
      uVar3 = pNVar13->fillColor;
      uVar4 = pNVar13->strokeColor;
      *(undefined8 *)(pNVar15->xform + 4) = *(undefined8 *)(pNVar13->xform + 4);
      pNVar15->fillColor = uVar3;
      pNVar15->strokeColor = uVar4;
      fVar5 = pNVar13->fillOpacity;
      fVar6 = pNVar13->strokeOpacity;
      cVar7 = pNVar13->fillGradient[0];
      cVar8 = pNVar13->fillGradient[1];
      cVar9 = pNVar13->fillGradient[2];
      cVar10 = pNVar13->fillGradient[3];
      pNVar15->opacity = pNVar13->opacity;
      pNVar15->fillOpacity = fVar5;
      pNVar15->strokeOpacity = fVar6;
      pNVar15->fillGradient[0] = cVar7;
      pNVar15->fillGradient[1] = cVar8;
      pNVar15->fillGradient[2] = cVar9;
      pNVar15->fillGradient[3] = cVar10;
      uVar2 = *(undefined8 *)(pNVar13->fillGradient + 0xc);
      *(undefined8 *)(pNVar15->fillGradient + 4) = *(undefined8 *)(pNVar13->fillGradient + 4);
      *(undefined8 *)(pNVar15->fillGradient + 0xc) = uVar2;
      lVar14 = lVar14 + -1;
      pNVar11 = (NSVGattrib *)(pNVar13->fillGradient + 0x14);
      pNVar12 = (NSVGattrib *)(pNVar15->fillGradient + 0x14);
    } while (lVar14 != 0);
    uVar2 = *(undefined8 *)(pNVar13->fillGradient + 0x1c);
    *(undefined8 *)((NSVGattrib *)(pNVar15->fillGradient + 0x14))->id =
         *(undefined8 *)((NSVGattrib *)(pNVar13->fillGradient + 0x14))->id;
    *(undefined8 *)(pNVar15->fillGradient + 0x1c) = uVar2;
    uVar2 = *(undefined8 *)(pNVar13->fillGradient + 0x2c);
    *(undefined8 *)(pNVar15->fillGradient + 0x24) = *(undefined8 *)(pNVar13->fillGradient + 0x24);
    *(undefined8 *)(pNVar15->fillGradient + 0x2c) = uVar2;
    uVar2 = *(undefined8 *)(pNVar13->fillGradient + 0x3c);
    *(undefined8 *)(pNVar15->fillGradient + 0x34) = *(undefined8 *)(pNVar13->fillGradient + 0x34);
    *(undefined8 *)(pNVar15->fillGradient + 0x3c) = uVar2;
    *(undefined8 *)(pNVar15->strokeGradient + 4) = *(undefined8 *)(pNVar13->strokeGradient + 4);
  }
  return;
}

// nsvg__rasterizeSortedEdges @ 142417810

void __cdecl
nsvg__rasterizeSortedEdges
          (NSVGrasterizer *param_1,float param_2,float param_3,float param_4,float param_5,
          NSVGcachedPaint *param_6,char param_7)

{
  NSVGedge *pNVar1;
  NSVGactiveEdge *pNVar2;
  NSVGactiveEdge *pNVar3;
  int iVar4;
  bool bVar5;
  NSVGactiveEdge *pNVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  NSVGactiveEdge *pNVar11;
  NSVGactiveEdge *pNVar12;
  NSVGactiveEdge **ppNVar13;
  uint uVar14;
  longlong lVar16;
  NSVGactiveEdge *pNVar17;
  NSVGactiveEdge *pNVar18;
  float fVar19;
  int local_res8 [2];
  int local_a8;
  int local_a4;
  uint local_a0;
  NSVGactiveEdge *local_98 [14];
  NSVGactiveEdge *pNVar15;
  
  fVar7 = __real_3f000000;
  pNVar11 = (NSVGactiveEdge *)0x0;
  local_98[0] = (NSVGactiveEdge *)0x0;
  local_a4 = 0;
  if (0 < param_1->height) {
    local_a0 = 0;
    pNVar15 = pNVar11;
    pNVar17 = pNVar11;
    pNVar18 = pNVar11;
    do {
      memset(param_1->scanline,0,(longlong)param_1->width);
      local_res8[0] = param_1->width;
      iVar9 = 0;
      local_a8 = 0;
      do {
        ppNVar13 = local_98;
        fVar19 = (float)(int)pNVar17 + fVar7;
        pNVar12 = pNVar11;
        while (pNVar11 != (NSVGactiveEdge *)0x0) {
          if (fVar19 < pNVar11->ey) {
            pNVar11->x = pNVar11->x + pNVar11->dx;
            ppNVar13 = &(*ppNVar13)->next;
          }
          else {
            *ppNVar13 = pNVar11->next;
            pNVar11->next = param_1->freelist;
            param_1->freelist = pNVar11;
          }
          pNVar12 = local_98[0];
          pNVar11 = *ppNVar13;
        }
        do {
          bVar5 = false;
          ppNVar13 = local_98;
          pNVar11 = pNVar12;
          if (pNVar12 == (NSVGactiveEdge *)0x0) break;
          do {
            pNVar11 = pNVar12->next;
            if (pNVar11 == (NSVGactiveEdge *)0x0) break;
            if (pNVar11->x < pNVar12->x) {
              bVar5 = true;
              pNVar12->next = pNVar11->next;
              pNVar11->next = pNVar12;
              *ppNVar13 = pNVar11;
              pNVar12 = pNVar11;
            }
            ppNVar13 = &pNVar12->next;
            pNVar12 = pNVar12->next;
          } while (pNVar12 != (NSVGactiveEdge *)0x0);
          pNVar11 = local_98[0];
          pNVar12 = local_98[0];
        } while (bVar5);
        if ((int)pNVar15 < param_1->nedges) {
          lVar16 = (longlong)pNVar18 << 5;
          do {
            pNVar1 = param_1->edges;
            if (fVar19 < *(float *)((longlong)&pNVar1->y0 + lVar16)) break;
            if (fVar19 < *(float *)((longlong)&pNVar1->y1 + lVar16)) {
              pNVar12 = nsvg__addActive(param_1,pNVar1 + (int)pNVar15,fVar19);
              if (pNVar12 == (NSVGactiveEdge *)0x0) break;
              if (pNVar11 == (NSVGactiveEdge *)0x0) {
                local_98[0] = pNVar12;
                pNVar11 = pNVar12;
              }
              else if (pNVar12->x < pNVar11->x) {
                pNVar12->next = pNVar11;
                local_98[0] = pNVar12;
                pNVar11 = pNVar12;
              }
              else {
                pNVar2 = pNVar11->next;
                pNVar6 = pNVar11;
                while ((pNVar2 != (NSVGactiveEdge *)0x0 &&
                       (pNVar3 = pNVar6->next, pNVar3->x < pNVar12->x))) {
                  pNVar2 = pNVar3->next;
                  pNVar6 = pNVar3;
                }
                pNVar12->next = pNVar6->next;
                pNVar6->next = pNVar12;
              }
            }
            uVar14 = (int)pNVar15 + 1;
            pNVar15 = (NSVGactiveEdge *)(ulonglong)uVar14;
            pNVar18 = (NSVGactiveEdge *)((longlong)&pNVar18->x + 1);
            lVar16 = lVar16 + 0x20;
          } while ((int)uVar14 < param_1->nedges);
        }
        if (pNVar11 != (NSVGactiveEdge *)0x0) {
          nsvg__fillActiveEdges
                    (param_1->scanline,param_1->width,pNVar11,0x33,local_res8,&local_a8,param_7);
        }
        iVar8 = local_a4;
        iVar9 = iVar9 + 1;
        pNVar17 = (NSVGactiveEdge *)(ulonglong)((int)pNVar17 + 1);
      } while (iVar9 < 5);
      iVar9 = local_res8[0];
      if (local_res8[0] < 0) {
        iVar9 = 0;
      }
      iVar10 = param_1->width + -1;
      iVar4 = local_a8;
      if (iVar10 < local_a8) {
        iVar4 = iVar10;
      }
      if (iVar9 <= iVar4) {
        nsvg__scanlineSolid(param_1->bitmap +
                            (longlong)(local_a4 * param_1->stride) + (longlong)(iVar9 * 4),
                            (iVar4 - iVar9) + 1,param_1->scanline + iVar9,iVar9,local_a4,param_2,
                            param_3,param_4,param_5,param_6);
      }
      local_a4 = iVar8 + 1;
      local_a0 = local_a0 + 5;
      pNVar17 = (NSVGactiveEdge *)(ulonglong)local_a0;
    } while (local_a4 < param_1->height);
  }
  return;
}

// nsvg__roundCap @ 142417b50

void __cdecl
nsvg__roundCap(NSVGrasterizer *param_1,NSVGpoint *param_2,NSVGpoint *param_3,NSVGpoint *param_4,
              float param_5,float param_6,float param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = param_4->y;
  fVar6 = 0.0;
  fVar10 = 0.0;
  fVar12 = 0.0;
  iVar3 = 0;
  fVar13 = 0.0;
  fVar2 = param_4->x;
  fVar14 = param_7 * __real_3f000000;
  if (0 < param_8) {
    fVar7 = fVar6;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar11 = fVar10;
    do {
      __libm_sse2_sincosf_();
      fVar10 = extraout_XMM0_Db * fVar14;
      fVar6 = extraout_XMM0_Da * fVar14;
      fVar5 = (fVar2 - fVar10 * param_6) - fVar6 * param_5;
      fVar4 = (fVar10 * param_5 + fVar1) - fVar6 * param_6;
      fVar6 = fVar5;
      fVar10 = fVar4;
      if ((iVar3 != 0) &&
         (nsvg__addEdge(param_1,fVar8,fVar9,fVar5,fVar4), fVar6 = fVar7, fVar10 = fVar11,
         iVar3 == param_8 + -1)) {
        fVar12 = fVar5;
        fVar13 = fVar4;
      }
      iVar3 = iVar3 + 1;
      fVar7 = fVar6;
      fVar8 = fVar5;
      fVar9 = fVar4;
      fVar11 = fVar10;
    } while (iVar3 < param_8);
  }
  if (param_9 != 0) {
    nsvg__addEdge(param_1,param_2->x,param_2->y,fVar6,fVar10);
    nsvg__addEdge(param_1,fVar12,fVar13,param_3->x,param_3->y);
  }
  param_2->x = fVar6;
  param_2->y = fVar10;
  param_3->x = fVar12;
  param_3->y = fVar13;
  return;
}

// nsvg__scaleToViewbox @ 142417dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl nsvg__scaleToViewbox(NSVGparser *param_1,char *param_2)

{
  char cVar1;
  NSVGshape *pNVar2;
  NSVGpath *pNVar3;
  NSVGcoordinate NVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  NSVGgradient *pNVar9;
  float *pfVar10;
  NSVGshape *pNVar11;
  NSVGimage *pNVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pNVar12 = param_1->image;
  fVar16 = 0.0;
  pNVar11 = pNVar12->shapes;
  if (pNVar11 == (NSVGshape *)0x0) {
    fVar20 = 0.0;
    fVar19 = 0.0;
    fVar18 = 0.0;
    fVar17 = 0.0;
  }
  else {
    pNVar2 = pNVar11->next;
    fVar17 = pNVar11->bounds[0];
    fVar18 = pNVar11->bounds[1];
    fVar19 = pNVar11->bounds[2];
    fVar14 = pNVar11->bounds[3];
    while (fVar20 = fVar14, pNVar2 != (NSVGshape *)0x0) {
      fVar14 = pNVar2->bounds[0];
      if (fVar17 <= pNVar2->bounds[0]) {
        fVar14 = fVar17;
      }
      fVar21 = pNVar2->bounds[1];
      if (fVar18 <= pNVar2->bounds[1]) {
        fVar21 = fVar18;
      }
      fVar13 = pNVar2->bounds[2];
      if (pNVar2->bounds[2] <= fVar19) {
        fVar13 = fVar19;
      }
      pfVar10 = pNVar2->bounds;
      pNVar2 = pNVar2->next;
      fVar17 = fVar14;
      fVar18 = fVar21;
      fVar19 = fVar13;
      fVar14 = pfVar10[3];
      if (pfVar10[3] <= fVar20) {
        fVar14 = fVar20;
      }
    }
  }
  fVar14 = param_1->viewWidth;
  if (fVar14 == 0.0) {
    fVar14 = pNVar12->width;
    if (fVar14 <= 0.0) {
      param_1->viewMinx = fVar17;
      fVar14 = fVar19 - fVar17;
    }
    param_1->viewWidth = fVar14;
  }
  fVar17 = param_1->viewHeight;
  if (fVar17 == 0.0) {
    fVar17 = pNVar12->height;
    if (fVar17 <= 0.0) {
      param_1->viewMiny = fVar18;
      fVar17 = fVar20 - fVar18;
    }
    param_1->viewHeight = fVar17;
  }
  if (pNVar12->width == 0.0) {
    pNVar12->width = fVar14;
    fVar17 = param_1->viewHeight;
  }
  pNVar12 = param_1->image;
  if (pNVar12->height == 0.0) {
    pNVar12->height = fVar17;
    fVar17 = param_1->viewHeight;
    pNVar12 = param_1->image;
  }
  fVar18 = param_1->viewWidth;
  fVar14 = (float)((uint)param_1->viewMinx ^ __xmm_80000000800000008000000080000000);
  fVar19 = (float)((uint)param_1->viewMiny ^ __xmm_80000000800000008000000080000000);
  if (fVar18 <= 0.0) {
    fVar20 = 0.0;
  }
  else {
    fVar20 = pNVar12->width / fVar18;
  }
  if (fVar17 <= 0.0) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = pNVar12->height / fVar17;
  }
  fVar13 = __real_3f800000;
  iVar7 = nsvg__parseUnits(param_2);
  NVar4.units = iVar7;
  NVar4.value = 1.0;
  fVar15 = nsvg__convertToPixels(param_1,NVar4,fVar16,fVar13);
  uVar6 = _UNK_15076b188;
  uVar5 = ___xmm_3f80000000000000000000003f800000;
  if (param_1->alignType == 1) {
    if (fVar20 <= fVar21) {
      fVar21 = fVar20;
    }
  }
  else {
    if (param_1->alignType != 2) goto LAB_142418034;
    if (fVar21 <= fVar20) {
      fVar21 = fVar20;
    }
  }
  fVar20 = fVar21;
  fVar21 = fVar16;
  if ((param_1->alignX != 0) && (fVar21 = pNVar12->width - fVar18 * fVar20, param_1->alignX != 2)) {
    fVar21 = fVar21 * __real_3f000000;
  }
  fVar14 = fVar14 + fVar21 * (fVar13 / fVar20);
  if ((param_1->alignY != 0) && (fVar16 = pNVar12->height - fVar17 * fVar20, param_1->alignY != 2))
  {
    fVar16 = fVar16 * __real_3f000000;
  }
  fVar19 = fVar19 + fVar16 * (fVar13 / fVar20);
  fVar21 = fVar20;
LAB_142418034:
  fVar21 = fVar21 * (fVar13 / fVar15);
  fVar20 = fVar20 * (fVar13 / fVar15);
  fVar16 = (fVar21 + fVar20) * __real_3f000000;
  for (pNVar11 = pNVar12->shapes; pNVar11 != (NSVGshape *)0x0; pNVar11 = pNVar11->next) {
    pNVar3 = pNVar11->paths;
    fVar17 = pNVar11->bounds[1];
    pNVar11->bounds[0] = (fVar14 + pNVar11->bounds[0]) * fVar20;
    pNVar11->bounds[1] = (fVar19 + fVar17) * fVar21;
    pNVar11->bounds[2] = (fVar14 + pNVar11->bounds[2]) * fVar20;
    pNVar11->bounds[3] = (fVar19 + pNVar11->bounds[3]) * fVar21;
    for (; pNVar3 != (NSVGpath *)0x0; pNVar3 = pNVar3->next) {
      fVar17 = pNVar3->bounds[1];
      iVar7 = 0;
      pNVar3->bounds[0] = (fVar14 + pNVar3->bounds[0]) * fVar20;
      pNVar3->bounds[1] = (fVar19 + fVar17) * fVar21;
      pNVar3->bounds[2] = (fVar14 + pNVar3->bounds[2]) * fVar20;
      pNVar3->bounds[3] = (fVar19 + pNVar3->bounds[3]) * fVar21;
      if (0 < pNVar3->npts) {
        lVar8 = 0;
        do {
          pfVar10 = pNVar3->pts;
          iVar7 = iVar7 + 1;
          *(float *)((longlong)pfVar10 + lVar8) =
               (fVar14 + *(float *)((longlong)pfVar10 + lVar8)) * fVar20;
          *(float *)((longlong)pfVar10 + lVar8 + 4) =
               (fVar19 + *(float *)((longlong)pfVar10 + lVar8 + 4)) * fVar21;
          lVar8 = lVar8 + 8;
        } while (iVar7 < pNVar3->npts);
      }
    }
    cVar1 = (pNVar11->fill).type;
    if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      pNVar9 = (pNVar11->fill).field1_0x8.gradient;
      local_88 = CONCAT44(fVar19,fVar14);
      local_98 = uVar5;
      uStack_90 = uVar6;
      nsvg__xformMultiply(pNVar9->xform,(float *)&local_98);
      local_98 = CONCAT44(local_98._4_4_,fVar20);
      uStack_90 = CONCAT44(fVar21,(undefined4)uStack_90);
      local_88 = 0;
      nsvg__xformMultiply(pNVar9->xform,(float *)&local_98);
      pNVar9 = (pNVar11->fill).field1_0x8.gradient;
      local_80 = *(undefined8 *)pNVar9->xform;
      uStack_78 = *(undefined8 *)(pNVar9->xform + 2);
      local_70 = *(undefined8 *)(pNVar9->xform + 4);
      nsvg__xformInverse(pNVar9->xform,(float *)&local_80);
    }
    cVar1 = (pNVar11->stroke).type;
    if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      pNVar9 = (pNVar11->stroke).field1_0x8.gradient;
      local_88 = CONCAT44(fVar19,fVar14);
      local_98 = uVar5;
      uStack_90 = uVar6;
      nsvg__xformMultiply(pNVar9->xform,(float *)&local_98);
      local_98 = CONCAT44(local_98._4_4_,fVar20);
      uStack_90 = CONCAT44(fVar21,(undefined4)uStack_90);
      local_88 = 0;
      nsvg__xformMultiply(pNVar9->xform,(float *)&local_98);
      pNVar9 = (pNVar11->stroke).field1_0x8.gradient;
      local_80 = *(undefined8 *)pNVar9->xform;
      uStack_78 = *(undefined8 *)(pNVar9->xform + 2);
      local_70 = *(undefined8 *)(pNVar9->xform + 4);
      nsvg__xformInverse(pNVar9->xform,(float *)&local_80);
    }
    iVar7 = 0;
    pNVar11->strokeWidth = fVar16 * pNVar11->strokeWidth;
    pNVar11->strokeDashOffset = fVar16 * pNVar11->strokeDashOffset;
    if ('\0' < pNVar11->strokeDashCount) {
      pfVar10 = pNVar11->strokeDashArray;
      do {
        iVar7 = iVar7 + 1;
        *pfVar10 = fVar16 * *pfVar10;
        pfVar10 = pfVar10 + 1;
      } while (iVar7 < pNVar11->strokeDashCount);
    }
  }
  return;
}

// nsvg__scanlineSolid @ 142418300

void __cdecl
nsvg__scanlineSolid(uchar *param_1,int param_2,uchar *param_3,int param_4,int param_5,float param_6,
                   float param_7,float param_8,float param_9,NSVGcachedPaint *param_10)

{
  float *pfVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar4 = __real_437f0000;
  cVar2 = param_10->type;
  if (cVar2 == '\x01') {
    uVar5 = param_10->colors[0];
    if (0 < param_2) {
      uVar11 = (ulonglong)(uint)param_2;
      pbVar7 = param_1 + 2;
      do {
        bVar3 = *param_3;
        param_3 = param_3 + 1;
        uVar8 = ((uint)bVar3 * (uVar5 >> 0x18) + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar6 = 0xff - uVar9;
        pbVar7[-2] = (char)(((uint)pbVar7[-2] * iVar6 + 1) * 0x101 >> 0x10) +
                     (char)((uVar9 * (uVar5 & 0xff) + 1) * 0x101 >> 0x10);
        pbVar7[-1] = (char)(((uint)pbVar7[-1] * iVar6 + 1) * 0x101 >> 0x10) +
                     (char)((uVar9 * (uVar5 >> 8 & 0xff) + 1) * 0x101 >> 0x10);
        *pbVar7 = (char)(((uint)*pbVar7 * iVar6 + 1) * 0x101 >> 0x10) +
                  (char)((uVar9 * (uVar5 >> 0x10 & 0xff) + 1) * 0x101 >> 0x10);
        pbVar7[1] = (char)(((uint)pbVar7[1] * iVar6 + 1) * 0x101 >> 0x10) + (char)(uVar8 >> 0x10);
        uVar11 = uVar11 - 1;
        pbVar7 = pbVar7 + 4;
      } while (uVar11 != 0);
    }
  }
  else if (cVar2 == '\x02') {
    pfVar1 = param_10->xform + 3;
    fVar16 = __real_3f800000 / param_8;
    iVar6 = 0;
    fVar14 = ((float)param_4 - param_6) * fVar16;
    fVar15 = ((float)param_5 - param_7) / param_9;
    if (3 < param_2) {
      uVar5 = (param_2 - 4U >> 2) + 1;
      uVar11 = (ulonglong)uVar5;
      iVar6 = uVar5 * 4;
      do {
        fVar12 = (fVar14 * param_10->xform[1] + fVar15 * *pfVar1 + param_10->xform[5]) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        uVar5 = param_10->colors[(int)fVar12];
        uVar8 = ((uVar5 >> 0x18) * (uint)*param_3 + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar10 = 0xff - uVar9;
        *param_1 = (char)(((uint)*param_1 * iVar10 + 1) * 0x101 >> 0x10) +
                   (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10);
        param_1[1] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[1] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[2] = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[2] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[3] = (char)(((uint)param_1[3] * iVar10 + 1) * 0x101 >> 0x10) + (char)(uVar8 >> 0x10)
        ;
        fVar12 = ((fVar14 + fVar16) * param_10->xform[1] + fVar15 * *pfVar1 + param_10->xform[5]) *
                 fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16 + fVar16;
        uVar5 = param_10->colors[(int)fVar12];
        uVar8 = ((uint)param_3[1] * (uVar5 >> 0x18) + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar10 = 0xff - uVar9;
        param_1[4] = (char)(((uint)param_1[4] * iVar10 + 1) * 0x101 >> 0x10) +
                     (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10);
        param_1[5] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[5] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[6] = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[6] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[7] = (char)(((uint)param_1[7] * iVar10 + 1) * 0x101 >> 0x10) + (char)(uVar8 >> 0x10)
        ;
        fVar12 = (fVar14 * param_10->xform[1] + fVar15 * *pfVar1 + param_10->xform[5]) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16;
        uVar5 = param_10->colors[(int)fVar12];
        uVar8 = ((uint)param_3[2] * (uVar5 >> 0x18) + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar10 = 0xff - uVar9;
        param_1[8] = (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[8] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[9] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[9] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[10] = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                      (char)(((uint)param_1[10] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[0xb] = (char)(((uint)param_1[0xb] * iVar10 + 1) * 0x101 >> 0x10) +
                       (char)(uVar8 >> 0x10);
        fVar12 = (fVar14 * param_10->xform[1] + fVar15 * *pfVar1 + param_10->xform[5]) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16;
        uVar5 = param_10->colors[(int)fVar12];
        pbVar7 = param_3 + 3;
        param_3 = param_3 + 4;
        uVar8 = ((uint)*pbVar7 * (uVar5 >> 0x18) + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar10 = 0xff - uVar9;
        param_1[0xc] = (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                       (char)(((uint)param_1[0xc] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[0xd] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                       (char)(((uint)param_1[0xd] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[0xe] = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                       (char)(((uint)param_1[0xe] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[0xf] = (char)(((uint)param_1[0xf] * iVar10 + 1) * 0x101 >> 0x10) +
                       (char)(uVar8 >> 0x10);
        param_1 = param_1 + 0x10;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (iVar6 < param_2) {
      pbVar7 = param_1 + 2;
      uVar11 = (ulonglong)(uint)(param_2 - iVar6);
      do {
        fVar12 = (fVar14 * param_10->xform[1] + fVar15 * *pfVar1 + param_10->xform[5]) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16;
        bVar3 = *param_3;
        param_3 = param_3 + 1;
        uVar5 = param_10->colors[(int)fVar12];
        uVar8 = ((uVar5 >> 0x18) * (uint)bVar3 + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar6 = 0xff - uVar9;
        pbVar7[-2] = (char)(((uint)pbVar7[-2] * iVar6 + 1) * 0x101 >> 0x10) +
                     (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10);
        pbVar7[-1] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)pbVar7[-1] * iVar6 + 1) * 0x101 >> 0x10);
        *pbVar7 = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                  (char)(((uint)*pbVar7 * iVar6 + 1) * 0x101 >> 0x10);
        pbVar7[1] = (char)(((uint)pbVar7[1] * iVar6 + 1) * 0x101 >> 0x10) + (char)(uVar8 >> 0x10);
        pbVar7 = pbVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else if (cVar2 == '\x03') {
    iVar6 = 0;
    fVar16 = __real_3f800000 / param_8;
    fVar14 = ((float)param_4 - param_6) * fVar16;
    fVar15 = ((float)param_5 - param_7) / param_9;
    if (3 < param_2) {
      uVar5 = (param_2 - 4U >> 2) + 1;
      uVar11 = (ulonglong)uVar5;
      iVar6 = uVar5 * 4;
      do {
        fVar13 = fVar14 * param_10->xform[0] + fVar15 * param_10->xform[2] + param_10->xform[4];
        fVar12 = fVar15 * param_10->xform[3] + fVar14 * param_10->xform[1] + param_10->xform[5];
        fVar12 = SQRT(fVar13 * fVar13 + fVar12 * fVar12) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16;
        uVar5 = param_10->colors[(int)fVar12];
        uVar8 = ((uVar5 >> 0x18) * (uint)*param_3 + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar10 = 0xff - uVar9;
        *param_1 = (char)(((uint)*param_1 * iVar10 + 1) * 0x101 >> 0x10) +
                   (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10);
        param_1[1] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[1] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[2] = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[2] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[3] = (char)(((uint)param_1[3] * iVar10 + 1) * 0x101 >> 0x10) + (char)(uVar8 >> 0x10)
        ;
        fVar13 = fVar15 * param_10->xform[2] + fVar14 * param_10->xform[0] + param_10->xform[4];
        fVar12 = fVar14 * param_10->xform[1] + fVar15 * param_10->xform[3] + param_10->xform[5];
        fVar12 = SQRT(fVar13 * fVar13 + fVar12 * fVar12) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16;
        uVar5 = param_10->colors[(int)fVar12];
        uVar8 = ((uint)param_3[1] * (uVar5 >> 0x18) + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar10 = 0xff - uVar9;
        param_1[4] = (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[4] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[5] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[5] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[6] = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[6] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[7] = (char)(((uint)param_1[7] * iVar10 + 1) * 0x101 >> 0x10) + (char)(uVar8 >> 0x10)
        ;
        fVar13 = fVar15 * param_10->xform[2] + fVar14 * param_10->xform[0] + param_10->xform[4];
        fVar12 = fVar14 * param_10->xform[1] + fVar15 * param_10->xform[3] + param_10->xform[5];
        fVar12 = SQRT(fVar12 * fVar12 + fVar13 * fVar13) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16;
        uVar5 = param_10->colors[(int)fVar12];
        uVar8 = ((uint)param_3[2] * (uVar5 >> 0x18) + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar10 = 0xff - uVar9;
        param_1[8] = (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[8] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[9] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)param_1[9] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[10] = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                      (char)(((uint)param_1[10] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[0xb] = (char)(((uint)param_1[0xb] * iVar10 + 1) * 0x101 >> 0x10) +
                       (char)(uVar8 >> 0x10);
        fVar13 = fVar15 * param_10->xform[2] + fVar14 * param_10->xform[0] + param_10->xform[4];
        fVar12 = fVar14 * param_10->xform[1] + fVar15 * param_10->xform[3] + param_10->xform[5];
        fVar12 = SQRT(fVar12 * fVar12 + fVar13 * fVar13) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16;
        uVar5 = param_10->colors[(int)fVar12];
        pbVar7 = param_3 + 3;
        param_3 = param_3 + 4;
        uVar8 = ((uint)*pbVar7 * (uVar5 >> 0x18) + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar10 = 0xff - uVar9;
        param_1[0xc] = (char)(((uint)param_1[0xc] * iVar10 + 1) * 0x101 >> 0x10) +
                       (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10);
        param_1[0xd] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                       (char)(((uint)param_1[0xd] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[0xe] = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                       (char)(((uint)param_1[0xe] * iVar10 + 1) * 0x101 >> 0x10);
        param_1[0xf] = (char)(((uint)param_1[0xf] * iVar10 + 1) * 0x101 >> 0x10) +
                       (char)(uVar8 >> 0x10);
        param_1 = param_1 + 0x10;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (iVar6 < param_2) {
      pbVar7 = param_1 + 2;
      uVar11 = (ulonglong)(uint)(param_2 - iVar6);
      do {
        fVar13 = fVar14 * param_10->xform[0] + fVar15 * param_10->xform[2] + param_10->xform[4];
        fVar12 = fVar15 * param_10->xform[3] + fVar14 * param_10->xform[1] + param_10->xform[5];
        fVar12 = SQRT(fVar13 * fVar13 + fVar12 * fVar12) * fVar4;
        if (0.0 <= fVar12) {
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
          }
        }
        else {
          fVar12 = 0.0;
        }
        fVar14 = fVar14 + fVar16;
        bVar3 = *param_3;
        param_3 = param_3 + 1;
        uVar5 = param_10->colors[(int)fVar12];
        uVar8 = ((uVar5 >> 0x18) * (uint)bVar3 + 1) * 0x101;
        uVar9 = uVar8 >> 0x10;
        iVar6 = 0xff - uVar9;
        pbVar7[-2] = (char)(((uint)pbVar7[-2] * iVar6 + 1) * 0x101 >> 0x10) +
                     (char)(((uVar5 & 0xff) * uVar9 + 1) * 0x101 >> 0x10);
        pbVar7[-1] = (char)(((uVar5 >> 8 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                     (char)(((uint)pbVar7[-1] * iVar6 + 1) * 0x101 >> 0x10);
        *pbVar7 = (char)(((uVar5 >> 0x10 & 0xff) * uVar9 + 1) * 0x101 >> 0x10) +
                  (char)(((uint)*pbVar7 * iVar6 + 1) * 0x101 >> 0x10);
        pbVar7[1] = (char)(((uint)pbVar7[1] * iVar6 + 1) * 0x101 >> 0x10) + (char)(uVar8 >> 0x10);
        pbVar7 = pbVar7 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  return;
}

// nsvg__startElement @ 1424190b0

void __cdecl nsvg__startElement(NSVGparser *param_1,char *param_2,char **param_3)

{
  int iVar1;
  
  if (param_1->defsFlag == false) {
    iVar1 = strcmp(param_2,"g");
    if (iVar1 == 0) {
      nsvg__pushAttr(param_1);
      nsvg__parseAttribs(param_1,param_3);
      return;
    }
    iVar1 = strcmp(param_2,"path");
    if (iVar1 == 0) {
      if (param_1->pathFlag != false) {
        return;
      }
      nsvg__pushAttr(param_1);
      nsvg__parsePath(param_1,param_3);
    }
    else {
      iVar1 = strcmp(param_2,"rect");
      if (iVar1 == 0) {
        nsvg__pushAttr(param_1);
        nsvg__parseRect(param_1,param_3);
      }
      else {
        iVar1 = strcmp(param_2,"circle");
        if (iVar1 == 0) {
          nsvg__pushAttr(param_1);
          nsvg__parseCircle(param_1,param_3);
        }
        else {
          iVar1 = strcmp(param_2,"ellipse");
          if (iVar1 == 0) {
            nsvg__pushAttr(param_1);
            nsvg__parseEllipse(param_1,param_3);
          }
          else {
            iVar1 = strcmp(param_2,"line");
            if (iVar1 == 0) {
              nsvg__pushAttr(param_1);
              nsvg__parseLine(param_1,param_3);
            }
            else {
              iVar1 = strcmp(param_2,"polyline");
              if (iVar1 == 0) {
                nsvg__pushAttr(param_1);
                iVar1 = 0;
              }
              else {
                iVar1 = strcmp(param_2,"polygon");
                if (iVar1 != 0) {
                  iVar1 = strcmp(param_2,"linearGradient");
                  if (iVar1 == 0) goto LAB_1424192e1;
                  iVar1 = strcmp(param_2,"radialGradient");
                  if (iVar1 == 0) goto LAB_142419311;
                  iVar1 = strcmp(param_2,"stop");
                  if (iVar1 == 0) goto LAB_142419341;
                  iVar1 = strcmp(param_2,"defs");
                  if (iVar1 == 0) {
                    param_1->defsFlag = true;
                    return;
                  }
                  iVar1 = strcmp(param_2,"svg");
                  if (iVar1 == 0) {
                    nsvg__parseSVG(param_1,param_3);
                    return;
                  }
                  iVar1 = strcmp(param_2,"style");
                  if (iVar1 != 0) {
                    return;
                  }
                  goto LAB_1424193c5;
                }
                nsvg__pushAttr(param_1);
                iVar1 = 1;
              }
              nsvg__parsePoly(param_1,param_3,iVar1);
            }
          }
        }
      }
    }
    if (0 < param_1->attrHead) {
      param_1->attrHead = param_1->attrHead + -1;
      return;
    }
  }
  else {
    if (param_1->parsedDefs != false) {
      return;
    }
    iVar1 = strcmp(param_2,"linearGradient");
    if (iVar1 == 0) {
LAB_1424192e1:
      nsvg__parseGradient(param_1,param_3,'\x02');
      return;
    }
    iVar1 = strcmp(param_2,"radialGradient");
    if (iVar1 == 0) {
LAB_142419311:
      nsvg__parseGradient(param_1,param_3,'\x03');
      return;
    }
    iVar1 = strcmp(param_2,"stop");
    if (iVar1 == 0) {
LAB_142419341:
      nsvg__parseGradientStop(param_1,param_3);
      return;
    }
    iVar1 = strcmp(param_2,"style");
    if (iVar1 != 0) {
      return;
    }
LAB_1424193c5:
    param_1->styleFlag = true;
  }
  return;
}

// nsvg__unpremultiplyAlpha @ 1424193f0

void __cdecl nsvg__unpremultiplyAlpha(uchar *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (0 < param_3) {
    lVar12 = (longlong)param_4;
    uVar10 = (ulonglong)(uint)param_3;
    pbVar8 = param_1;
    do {
      pbVar5 = pbVar8;
      uVar6 = (ulonglong)(uint)param_2;
      if (0 < param_2) {
        do {
          bVar1 = pbVar5[3];
          if (bVar1 != 0) {
            *pbVar5 = (byte)(((uint)*pbVar5 * 0xff) / (uint)bVar1);
            pbVar5[1] = (byte)(((uint)pbVar5[1] * 0xff) / (uint)bVar1);
            pbVar5[2] = (byte)(((uint)pbVar5[2] * 0xff) / (uint)bVar1);
          }
          uVar6 = uVar6 - 1;
          pbVar5 = pbVar5 + 4;
        } while (uVar6 != 0);
      }
      pbVar8 = pbVar8 + lVar12;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    iVar3 = 0;
    do {
      puVar2 = param_1 + iVar3 * param_4;
      if (0 < param_2) {
        iVar4 = 1;
        uVar10 = (ulonglong)(uint)param_2;
        do {
          uVar7 = 0;
          uVar9 = 0;
          uVar11 = 0;
          uVar6 = 0;
          if (puVar2[3] == '\0') {
            if ((0 < iVar4 + -2) && (puVar2[-1] != '\0')) {
              uVar7 = (ulonglong)puVar2[-4];
              uVar6 = 1;
              uVar9 = (ulonglong)puVar2[-3];
              uVar11 = (ulonglong)puVar2[-2];
            }
            if ((iVar4 < param_2) && (puVar2[7] != '\0')) {
              uVar7 = (ulonglong)((int)uVar7 + (uint)puVar2[4]);
              uVar9 = (ulonglong)((int)uVar9 + (uint)puVar2[5]);
              uVar11 = (ulonglong)((int)uVar11 + (uint)puVar2[6]);
              uVar6 = (ulonglong)((int)uVar6 + 1);
            }
            if ((0 < iVar3 + -1) && (puVar2[3 - lVar12] != '\0')) {
              uVar7 = (ulonglong)((int)uVar7 + (uint)puVar2[-lVar12]);
              uVar9 = (ulonglong)((int)uVar9 + (uint)puVar2[1 - lVar12]);
              uVar11 = (ulonglong)((int)uVar11 + (uint)puVar2[2 - lVar12]);
              uVar6 = (ulonglong)((int)uVar6 + 1);
            }
            if ((iVar3 + 1 < param_3) && (puVar2[lVar12 + 3] != '\0')) {
              uVar7 = (ulonglong)((int)uVar7 + (uint)puVar2[lVar12]);
              uVar9 = (ulonglong)((int)uVar9 + (uint)puVar2[lVar12 + 1]);
              uVar11 = (ulonglong)((int)uVar11 + (uint)puVar2[lVar12 + 2]);
              uVar6 = (ulonglong)((int)uVar6 + 1);
            }
            if ((int)uVar6 != 0) {
              *puVar2 = (uchar)(uVar7 / uVar6);
              puVar2[1] = (uchar)(uVar9 / uVar6);
              puVar2[2] = (uchar)(uVar11 / uVar6);
            }
          }
          puVar2 = puVar2 + 4;
          iVar4 = iVar4 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return;
}

// nsvg__vecang @ 1424195f0

float __cdecl nsvg__vecang(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1 * param_3 + param_2 * param_4) /
          SQRT((param_1 * param_1 + param_2 * param_2) * (param_3 * param_3 + param_4 * param_4));
  if (fVar1 <= __real_bf800000) {
    fVar1 = __real_bf800000;
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  fVar2 = __real_bf800000;
  if (param_2 * param_3 <= param_1 * param_4) {
    fVar2 = __real_3f800000;
  }
  fVar1 = acosf(fVar1);
  return fVar1 * fVar2;
}

// nsvg__xformInverse @ 1424196c0

void __cdecl nsvg__xformInverse(float *param_1,float *param_2)

{
  double dVar1;
  
  dVar1 = (double)*param_2 * (double)param_2[3] - (double)param_2[2] * (double)param_2[1];
  if ((__real_beb0c6f7a0b5ed8d < dVar1) && (dVar1 < __real_3eb0c6f7a0b5ed8d)) {
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[5] = 0.0;
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    return;
  }
  dVar1 = __real_3ff0000000000000 / dVar1;
  *param_1 = (float)(dVar1 * (double)param_2[3]);
  param_1[2] = (float)((double)(float)((uint)param_2[2] ^ __xmm_80000000800000008000000080000000) *
                      dVar1);
  param_1[4] = (float)((double)(param_2[2] * param_2[5] - param_2[3] * param_2[4]) * dVar1);
  param_1[1] = (float)((double)(float)((uint)param_2[1] ^ __xmm_80000000800000008000000080000000) *
                      dVar1);
  param_1[3] = (float)((double)*param_2 * dVar1);
  param_1[5] = (float)((double)(param_2[4] * param_2[1] - param_2[5] * *param_2) * dVar1);
  return;
}

// nsvg__xformMultiply @ 1424197e0

void __cdecl nsvg__xformMultiply(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[4];
  fVar2 = param_1[1];
  fVar3 = *param_2;
  fVar4 = param_1[3];
  fVar5 = param_2[2];
  fVar6 = param_2[4];
  param_1[1] = *param_1 * param_2[1] + fVar2 * param_2[3];
  param_1[3] = param_1[2] * param_2[1] + fVar4 * param_2[3];
  fVar7 = param_2[1];
  fVar8 = param_2[3];
  fVar9 = param_2[5];
  param_1[2] = param_1[2] * fVar3 + fVar4 * fVar5;
  param_1[4] = fVar1 * fVar3 + param_1[5] * fVar5 + fVar6;
  param_1[5] = fVar1 * fVar7 + param_1[5] * fVar8 + fVar9;
  *param_1 = fVar3 * *param_1 + fVar5 * fVar2;
  return;
}

// __local_stdio_scanf_options @ 1424198f0

ulong64 * __cdecl __local_stdio_scanf_options(void)

{
  return &`__local_stdio_scanf_options'::__l2::_OptionsStorage;
}

// nsvgCreateRasterizer @ 142419900

NSVGrasterizer * __cdecl nsvgCreateRasterizer(void)

{
  NSVGrasterizer *pNVar1;
  
                    /* 0x2419900  180  nsvgCreateRasterizer */
  pNVar1 = malloc(0x80);
  if (pNVar1 == (NSVGrasterizer *)0x0) {
    return (NSVGrasterizer *)0x0;
  }
  pNVar1->px = 0.0;
  pNVar1->py = 0.0;
  pNVar1->tessTol = 0.0;
  pNVar1->distTol = 0.0;
  pNVar1->edges = (NSVGedge *)0x0;
  pNVar1->nedges = 0;
  pNVar1->cedges = 0;
  pNVar1->points = (NSVGpoint *)0x0;
  pNVar1->npoints = 0;
  pNVar1->cpoints = 0;
  pNVar1->points2 = (NSVGpoint *)0x0;
  pNVar1->npoints2 = 0;
  pNVar1->cpoints2 = 0;
  pNVar1->freelist = (NSVGactiveEdge *)0x0;
  pNVar1->pages = (NSVGmemPage *)0x0;
  pNVar1->curpage = (NSVGmemPage *)0x0;
  pNVar1->scanline = (uchar *)0x0;
  *(undefined8 *)&pNVar1->cscanline = 0;
  pNVar1->bitmap = (uchar *)0x0;
  pNVar1->width = 0;
  pNVar1->height = 0;
  *(undefined8 *)&pNVar1->stride = 0;
  pNVar1->tessTol = 0.25;
  pNVar1->distTol = 0.01;
  return pNVar1;
}

// nsvgDelete @ 142419960

void __cdecl nsvgDelete(NSVGimage *param_1)

{
  char cVar1;
  NSVGshape *pNVar2;
  NSVGpath *pNVar3;
  NSVGpath *_Memory;
  NSVGshape *_Memory_00;
  
                    /* 0x2419960  181  nsvgDelete */
  if (param_1 != (NSVGimage *)0x0) {
    _Memory_00 = param_1->shapes;
    while (_Memory_00 != (NSVGshape *)0x0) {
      pNVar2 = _Memory_00->next;
      _Memory = _Memory_00->paths;
      while (_Memory != (NSVGpath *)0x0) {
        pNVar3 = _Memory->next;
        if (_Memory->pts != (float *)0x0) {
          free(_Memory->pts);
        }
        free(_Memory);
        _Memory = pNVar3;
      }
      cVar1 = (_Memory_00->fill).type;
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        free((_Memory_00->fill).field1_0x8.gradient);
      }
      cVar1 = (_Memory_00->stroke).type;
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        free((_Memory_00->stroke).field1_0x8.gradient);
      }
      free(_Memory_00);
      _Memory_00 = pNVar2;
    }
    free(param_1);
  }
  return;
}

// nsvgDeleteRasterizer @ 142419a40

void __cdecl nsvgDeleteRasterizer(NSVGrasterizer *param_1)

{
  NSVGmemPage *pNVar1;
  NSVGmemPage *_Memory;
  
                    /* 0x2419a40  182  nsvgDeleteRasterizer */
  if (param_1 != (NSVGrasterizer *)0x0) {
    _Memory = param_1->pages;
    while (_Memory != (NSVGmemPage *)0x0) {
      pNVar1 = _Memory->next;
      free(_Memory);
      _Memory = pNVar1;
    }
    if (param_1->edges != (NSVGedge *)0x0) {
      free(param_1->edges);
    }
    if (param_1->points != (NSVGpoint *)0x0) {
      free(param_1->points);
    }
    if (param_1->points2 != (NSVGpoint *)0x0) {
      free(param_1->points2);
    }
    if (param_1->scanline != (uchar *)0x0) {
      free(param_1->scanline);
    }
    free(param_1);
  }
  return;
}

// nsvgDuplicatePath @ 142419ad0

NSVGpath * __cdecl nsvgDuplicatePath(NSVGpath *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  NSVGpath *_Memory;
  float *_Dst;
  
                    /* 0x2419ad0  183  nsvgDuplicatePath */
  if (param_1 == (NSVGpath *)0x0) {
    return (NSVGpath *)0x0;
  }
  _Memory = malloc(0x28);
  if (_Memory != (NSVGpath *)0x0) {
    _Memory->npts = 0;
    _Memory->closed = '\0';
    *(undefined3 *)&_Memory->field_0xd = 0;
    _Memory->bounds[0] = 0.0;
    _Memory->bounds[1] = 0.0;
    _Memory->bounds[2] = 0.0;
    _Memory->bounds[3] = 0.0;
    _Memory->next = (NSVGpath *)0x0;
    _Dst = malloc((longlong)(param_1->npts * 2) << 2);
    _Memory->pts = _Dst;
    if (_Dst != (float *)0x0) {
      memcpy(_Dst,param_1->pts,(longlong)param_1->npts << 3);
      uVar1 = *(undefined8 *)param_1->bounds;
      uVar2 = *(undefined8 *)(param_1->bounds + 2);
      _Memory->npts = param_1->npts;
      _Memory->closed = param_1->closed;
      *(undefined8 *)_Memory->bounds = uVar1;
      *(undefined8 *)(_Memory->bounds + 2) = uVar2;
      return _Memory;
    }
    free((void *)0x0);
    free(_Memory);
  }
  return (NSVGpath *)0x0;
}

// nsvgParse @ 142419b90

NSVGimage * __cdecl nsvgParse(char *param_1,char *param_2,float param_3)

{
  char cVar1;
  NSVGstyles *pNVar2;
  NSVGpath *pNVar3;
  NSVGgradientData *pNVar4;
  NSVGimage *_Memory;
  NSVGshape *pNVar5;
  NSVGpath *pNVar6;
  NSVGgradientData *_Memory_00;
  NSVGstyles *_Memory_01;
  NSVGshape *_Memory_02;
  NSVGparser *_Dst;
  NSVGimage *pNVar7;
  
                    /* 0x2419b90  184  nsvgParse */
  _Dst = malloc(0x9c68);
  if (_Dst != (NSVGparser *)0x0) {
    memset(_Dst,0,0x9c68);
    pNVar7 = malloc(0x10);
    _Dst->image = pNVar7;
    if (pNVar7 != (NSVGimage *)0x0) {
      pNVar7->width = 0.0;
      pNVar7->height = 0.0;
      pNVar7->shapes = (NSVGshape *)0x0;
      _Dst->attr[0].xform[0] = 1.0;
      _Dst->attr[0].xform[1] = 0.0;
      _Dst->attr[0].xform[3] = 1.0;
      _Dst->attr[0].xform[4] = 0.0;
      _Dst->attr[0].xform[2] = 0.0;
      *(undefined8 *)(_Dst->attr[0].xform + 5) = 0;
      _Dst->attr[0].id[0] = '\0';
      _Dst->attr[0].id[1] = '\0';
      _Dst->attr[0].id[2] = '\0';
      _Dst->attr[0].id[3] = '\0';
      _Dst->attr[0].id[4] = '\0';
      _Dst->attr[0].id[5] = '\0';
      _Dst->attr[0].id[6] = '\0';
      _Dst->attr[0].id[7] = '\0';
      _Dst->attr[0].id[8] = '\0';
      _Dst->attr[0].id[9] = '\0';
      _Dst->attr[0].id[10] = '\0';
      _Dst->attr[0].id[0xb] = '\0';
      _Dst->attr[0].id[0xc] = '\0';
      _Dst->attr[0].id[0xd] = '\0';
      _Dst->attr[0].id[0xe] = '\0';
      _Dst->attr[0].id[0xf] = '\0';
      _Dst->attr[0].id[0x10] = '\0';
      _Dst->attr[0].id[0x11] = '\0';
      _Dst->attr[0].id[0x12] = '\0';
      _Dst->attr[0].id[0x13] = '\0';
      _Dst->attr[0].id[0x14] = '\0';
      _Dst->attr[0].id[0x15] = '\0';
      _Dst->attr[0].id[0x16] = '\0';
      _Dst->attr[0].id[0x17] = '\0';
      _Dst->attr[0].id[0x18] = '\0';
      _Dst->attr[0].id[0x19] = '\0';
      _Dst->attr[0].id[0x1a] = '\0';
      _Dst->attr[0].id[0x1b] = '\0';
      _Dst->attr[0].id[0x1c] = '\0';
      _Dst->attr[0].id[0x1d] = '\0';
      _Dst->attr[0].id[0x1e] = '\0';
      _Dst->attr[0].id[0x1f] = '\0';
      _Dst->attr[0].id[0x20] = '\0';
      _Dst->attr[0].id[0x21] = '\0';
      _Dst->attr[0].id[0x22] = '\0';
      _Dst->attr[0].id[0x23] = '\0';
      _Dst->attr[0].id[0x24] = '\0';
      _Dst->attr[0].id[0x25] = '\0';
      _Dst->attr[0].id[0x26] = '\0';
      _Dst->attr[0].id[0x27] = '\0';
      _Dst->attr[0].id[0x28] = '\0';
      _Dst->attr[0].id[0x29] = '\0';
      _Dst->attr[0].id[0x2a] = '\0';
      _Dst->attr[0].id[0x2b] = '\0';
      _Dst->attr[0].id[0x2c] = '\0';
      _Dst->attr[0].id[0x2d] = '\0';
      _Dst->attr[0].id[0x2e] = '\0';
      _Dst->attr[0].id[0x2f] = '\0';
      _Dst->attr[0].id[0x30] = '\0';
      _Dst->attr[0].id[0x31] = '\0';
      _Dst->attr[0].id[0x32] = '\0';
      _Dst->attr[0].id[0x33] = '\0';
      _Dst->attr[0].id[0x34] = '\0';
      _Dst->attr[0].id[0x35] = '\0';
      _Dst->attr[0].id[0x36] = '\0';
      _Dst->attr[0].id[0x37] = '\0';
      _Dst->attr[0].id[0x38] = '\0';
      _Dst->attr[0].id[0x39] = '\0';
      _Dst->attr[0].id[0x3a] = '\0';
      _Dst->attr[0].id[0x3b] = '\0';
      _Dst->attr[0].id[0x3c] = '\0';
      _Dst->attr[0].id[0x3d] = '\0';
      _Dst->attr[0].id[0x3e] = '\0';
      _Dst->attr[0].id[0x3f] = '\0';
      _Dst->attr[0].strokeColor = 0;
      _Dst->attr[0].opacity = 1.0;
      _Dst->attr[0].fillOpacity = 1.0;
      _Dst->attr[0].strokeOpacity = 1.0;
      _Dst->attr[0].stopOpacity = 1.0;
      _Dst->attr[0].strokeWidth = 1.0;
      _Dst->attr[0].strokeLineJoin = '\0';
      _Dst->attr[0].strokeLineCap = '\0';
      _Dst->attr[0].miterLimit = 4.0;
      _Dst->attr[0].fillRule = '\0';
      _Dst->attr[0].hasFill = '\x01';
      _Dst->attr[0].visible = '\x01';
      _Dst->dpi = param_3;
      nsvg__parseXML(param_1,nsvg__startElement,nsvg__endElement,nsvg__content,_Dst);
      nsvg__scaleToViewbox(_Dst,param_2);
      pNVar7 = _Dst->image;
      _Dst->image = (NSVGimage *)0x0;
      _Memory_01 = _Dst->styles;
      while (_Memory_01 != (NSVGstyles *)0x0) {
        pNVar2 = _Memory_01->next;
        if (_Memory_01->name != (char *)0x0) {
          free(_Memory_01->name);
        }
        if (_Memory_01->description != (char *)0x0) {
          free(_Memory_01->description);
        }
        free(_Memory_01);
        _Memory_01 = pNVar2;
      }
      pNVar6 = _Dst->plist;
      while (pNVar6 != (NSVGpath *)0x0) {
        pNVar3 = pNVar6->next;
        if (pNVar6->pts != (float *)0x0) {
          free(pNVar6->pts);
        }
        free(pNVar6);
        pNVar6 = pNVar3;
      }
      _Memory_00 = _Dst->gradients;
      while (_Memory_00 != (NSVGgradientData *)0x0) {
        pNVar4 = _Memory_00->next;
        free(_Memory_00->stops);
        free(_Memory_00);
        _Memory_00 = pNVar4;
      }
      _Memory = _Dst->image;
      if (_Memory != (NSVGimage *)0x0) {
        _Memory_02 = _Memory->shapes;
        while (_Memory_02 != (NSVGshape *)0x0) {
          pNVar5 = _Memory_02->next;
          pNVar6 = _Memory_02->paths;
          while (pNVar6 != (NSVGpath *)0x0) {
            pNVar3 = pNVar6->next;
            if (pNVar6->pts != (float *)0x0) {
              free(pNVar6->pts);
            }
            free(pNVar6);
            pNVar6 = pNVar3;
          }
          cVar1 = (_Memory_02->fill).type;
          if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
            free((_Memory_02->fill).field1_0x8.gradient);
          }
          cVar1 = (_Memory_02->stroke).type;
          if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
            free((_Memory_02->stroke).field1_0x8.gradient);
          }
          free(_Memory_02);
          _Memory_02 = pNVar5;
        }
        free(_Memory);
      }
      free(_Dst->pts);
      free(_Dst);
      return pNVar7;
    }
    free(_Dst);
  }
  return (NSVGimage *)0x0;
}

// nsvgParseFromFile @ 142419e70

NSVGimage * __cdecl nsvgParseFromFile(char *param_1,char *param_2,float param_3)

{
  long lVar1;
  FILE *_File;
  char *_DstBuf;
  size_t sVar2;
  NSVGimage *pNVar3;
  size_t _Count;
  
                    /* 0x2419e70  185  nsvgParseFromFile */
  _File = fopen(param_1,"rb");
  if (_File != (FILE *)0x0) {
    fseek(_File,0,2);
    lVar1 = ftell(_File);
    _Count = (size_t)lVar1;
    fseek(_File,0,0);
    _DstBuf = malloc(_Count + 1);
    if ((_DstBuf != (char *)0x0) && (sVar2 = fread(_DstBuf,1,_Count,_File), sVar2 == _Count)) {
      _DstBuf[_Count] = '\0';
      fclose(_File);
      pNVar3 = nsvgParse(_DstBuf,param_2,param_3);
      free(_DstBuf);
      return pNVar3;
    }
    fclose(_File);
    if (_DstBuf != (char *)0x0) {
      free(_DstBuf);
    }
  }
  return (NSVGimage *)0x0;
}

// nsvgParseTransform @ 142419f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl nsvgParseTransform(float *param_1,char *param_2)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  longlong lVar15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  int aiStack_138 [2];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  
  uStack_d8 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_1[0] = 1.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[5] = 0.0;
  param_1[3] = 1.0;
  fVar10 = __real_3bb60b61;
  uVar9 = _UNK_15076b188;
  uVar8 = ___xmm_3f80000000000000000000003f800000;
  fVar7 = _UNK_15068950c;
  fVar6 = _UNK_150689508;
  fVar5 = _UNK_150689504;
  fVar4 = ___xmm_00000000000000003f80000000000000;
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar2 = __real_40490fdb;
  param_1[4] = 0.0;
  cVar1 = *param_2;
                    /* 0x2419f70  186  nsvgParseTransform */
  fVar17 = fStack_11c;
  fVar16 = fStack_120;
  do {
    if (cVar1 == '\0') {
      return;
    }
    iVar14 = strncmp(param_2,"matrix",6);
    if (iVar14 == 0) {
      aiStack_138[0] = 0;
      iVar14 = nsvg__parseTransformArgs(param_2,(float *)&uStack_f0,6,aiStack_138);
      if (aiStack_138[0] == 6) {
        fStack_130 = (float)uStack_f0;
        fStack_12c = (float)((ulonglong)uStack_f0 >> 0x20);
        fStack_128 = (float)uStack_e8;
        fStack_124 = (float)((ulonglong)uStack_e8 >> 0x20);
        fVar16 = (float)uStack_e0;
        fVar17 = (float)((ulonglong)uStack_e0 >> 0x20);
      }
LAB_14241693a:
      uStack_f0 = CONCAT44(fStack_12c,fStack_130);
      uStack_e8 = CONCAT44(fStack_124,fStack_128);
      uStack_e0 = CONCAT44(fVar17,fVar16);
      nsvg__xformMultiply((float *)&uStack_f0,param_1);
      lVar15 = (longlong)iVar14;
      *(undefined8 *)param_1 = uStack_f0;
      *(undefined8 *)(param_1 + 2) = uStack_e8;
      *(undefined8 *)(param_1 + 4) = uStack_e0;
    }
    else {
      iVar14 = strncmp(param_2,"translate",9);
      if (iVar14 == 0) {
        aiStack_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&fStack_110,2,aiStack_138);
        fStack_130 = (float)uVar8;
        fStack_12c = (float)((ulonglong)uVar8 >> 0x20);
        fStack_128 = (float)uVar9;
        fStack_124 = (float)((ulonglong)uVar9 >> 0x20);
        fVar16 = fStack_110;
        fVar17 = fStack_10c;
        if (aiStack_138[0] == 1) {
          fStack_10c = 0.0;
          fVar17 = 0.0;
        }
        goto LAB_14241693a;
      }
      iVar14 = strncmp(param_2,"scale",5);
      if (iVar14 == 0) {
        aiStack_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&fStack_108,2,aiStack_138);
        if (aiStack_138[0] == 1) {
          fStack_104 = fStack_108;
        }
        fStack_130 = fStack_108;
        fStack_12c = 0.0;
        fStack_128 = 0.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        fStack_124 = fStack_104;
        goto LAB_14241693a;
      }
      iVar14 = strncmp(param_2,"rotate",6);
      if (iVar14 == 0) {
        aiStack_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&fStack_100,3,aiStack_138);
        iVar11 = aiStack_138[0];
        if (aiStack_138[0] == 1) {
          fStack_fc = 0.0;
          fStack_f8 = 0.0;
        }
        fVar13 = fStack_f8;
        fVar12 = fStack_fc;
        fVar18 = 0.0;
        fVar17 = 0.0;
        if (1 < aiStack_138[0]) {
          fVar17 = (float)((uint)fStack_f8 ^ uVar3);
          fVar18 = (float)((uint)fStack_fc ^ uVar3);
        }
        __libm_sse2_sincosf_();
        fStack_128 = (float)((uint)extraout_XMM0_Da ^ uVar3);
        fVar16 = fVar17 * fStack_128 + fVar18 * extraout_XMM0_Db;
        fVar17 = fVar17 * extraout_XMM0_Db + fVar18 * extraout_XMM0_Da;
        fStack_130 = extraout_XMM0_Db;
        fStack_12c = extraout_XMM0_Da;
        fStack_124 = extraout_XMM0_Db;
        if (1 < iVar11) {
          fVar17 = fVar13 + fVar17;
          fVar16 = fVar12 + fVar16;
        }
        goto LAB_14241693a;
      }
      iVar14 = strncmp(param_2,"skewX",5);
      if (iVar14 == 0) {
        aiStack_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&fStack_118,1,aiStack_138);
        fStack_130 = 1.0;
        fStack_12c = 0.0;
        fStack_128 = tanf(fStack_118 * fVar10 * fVar2);
        fStack_124 = 1.0;
        fVar16 = 0.0;
        fVar17 = 0.0;
        goto LAB_14241693a;
      }
      iVar14 = strncmp(param_2,"skewY",5);
      if (iVar14 == 0) {
        aiStack_138[0] = 0;
        iVar14 = nsvg__parseTransformArgs(param_2,&fStack_114,1,aiStack_138);
        fStack_130 = 1.0;
        fStack_12c = tanf(fStack_114 * fVar10 * fVar2);
        fStack_128 = fVar4;
        fStack_124 = fVar5;
        fStack_120 = fVar6;
        fStack_11c = fVar7;
        fVar16 = fVar6;
        fVar17 = fVar7;
        goto LAB_14241693a;
      }
      lVar15 = 1;
    }
    param_2 = param_2 + lVar15;
    cVar1 = *param_2;
  } while( true );
}

// nsvgRasterize @ 142419f80

void __cdecl
nsvgRasterize(NSVGrasterizer *param_1,NSVGimage *param_2,float param_3,float param_4,float param_5,
             uchar *param_6,int param_7,int param_8,int param_9)

{
                    /* 0x2419f80  187  nsvgRasterize */
  nsvgRasterizeFull(param_1,param_2,param_3,param_4,param_5,param_5,param_6,param_7,param_8,param_9)
  ;
  return;
}

// nsvgRasterizeFull @ 142419fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
nsvgRasterizeFull(NSVGrasterizer *param_1,NSVGimage *param_2,float param_3,float param_4,
                 float param_5,float param_6,uchar *param_7,int param_8,int param_9,int param_10)

{
  NSVGshape *pNVar1;
  NSVGmemPage *pNVar2;
  NSVGedge *pNVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uchar *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_528 [32];
  NSVGcachedPaint local_4d8;
  ulonglong local_b8;
  
                    /* 0x2419fe0  188  nsvgRasterizeFull */
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  uVar12 = (ulonglong)(uint)param_9;
  param_1->bitmap = param_7;
  param_1->width = param_8;
  param_1->height = param_9;
  param_1->stride = param_10;
  if (param_1->cscanline < param_8) {
    param_1->cscanline = param_8;
    puVar8 = realloc(param_1->scanline,(longlong)param_8);
    param_1->scanline = puVar8;
    if (puVar8 == (uchar *)0x0) {
      return;
    }
  }
  if (0 < param_9) {
    puVar8 = param_7;
    do {
      memset(puVar8,0,(longlong)(param_8 * 4));
      puVar8 = puVar8 + param_10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  fVar6 = __real_40a00000;
  fVar5 = __real_3f000000;
  fVar4 = __real_3c23d70a;
  uVar12 = 0;
  for (pNVar1 = param_2->shapes; pNVar1 != (NSVGshape *)0x0; pNVar1 = pNVar1->next) {
    if ((pNVar1->flags & 1) != 0) {
      if ((pNVar1->fill).type != '\0') {
        for (pNVar2 = param_1->pages; pNVar2 != (NSVGmemPage *)0x0; pNVar2 = pNVar2->next) {
          pNVar2->size = 0;
        }
        param_1->curpage = param_1->pages;
        param_1->freelist = (NSVGactiveEdge *)0x0;
        param_1->nedges = 0;
        nsvg__flattenShape(param_1,pNVar1,param_5,param_6);
        iVar7 = param_1->nedges;
        uVar9 = uVar12;
        uVar11 = uVar12;
        if (0 < iVar7) {
          do {
            pNVar3 = param_1->edges;
            uVar10 = (int)uVar11 + 1;
            *(float *)((longlong)&pNVar3->x0 + uVar9) =
                 param_3 + *(float *)((longlong)&pNVar3->x0 + uVar9);
            *(float *)((longlong)&pNVar3->y0 + uVar9) =
                 (param_4 + *(float *)((longlong)&pNVar3->y0 + uVar9)) * fVar6;
            *(float *)((longlong)&pNVar3->x1 + uVar9) =
                 param_3 + *(float *)((longlong)&pNVar3->x1 + uVar9);
            *(float *)((longlong)&pNVar3->y1 + uVar9) =
                 (param_4 + *(float *)((longlong)&pNVar3->y1 + uVar9)) * fVar6;
            iVar7 = param_1->nedges;
            uVar9 = uVar9 + 0x20;
            uVar11 = (ulonglong)uVar10;
          } while ((int)uVar10 < iVar7);
        }
        qsort(param_1->edges,(longlong)iVar7,0x20,nsvg__cmpEdge);
        nsvg__initPaint(&local_4d8,&pNVar1->fill,pNVar1->opacity);
        nsvg__rasterizeSortedEdges
                  (param_1,param_3,param_4,param_5,param_6,&local_4d8,pNVar1->fillRule);
      }
      if (((pNVar1->stroke).type != '\0') &&
         (fVar4 < (param_5 + param_6) * pNVar1->strokeWidth * fVar5)) {
        for (pNVar2 = param_1->pages; pNVar2 != (NSVGmemPage *)0x0; pNVar2 = pNVar2->next) {
          pNVar2->size = 0;
        }
        param_1->curpage = param_1->pages;
        param_1->freelist = (NSVGactiveEdge *)0x0;
        param_1->nedges = 0;
        nsvg__flattenShapeStroke(param_1,pNVar1,param_5,param_6);
        iVar7 = param_1->nedges;
        uVar9 = uVar12;
        uVar11 = uVar12;
        if (0 < iVar7) {
          do {
            pNVar3 = param_1->edges;
            uVar10 = (int)uVar11 + 1;
            *(float *)((longlong)&pNVar3->x0 + uVar9) =
                 param_3 + *(float *)((longlong)&pNVar3->x0 + uVar9);
            *(float *)((longlong)&pNVar3->y0 + uVar9) =
                 (param_4 + *(float *)((longlong)&pNVar3->y0 + uVar9)) * fVar6;
            *(float *)((longlong)&pNVar3->x1 + uVar9) =
                 param_3 + *(float *)((longlong)&pNVar3->x1 + uVar9);
            *(float *)((longlong)&pNVar3->y1 + uVar9) =
                 (param_4 + *(float *)((longlong)&pNVar3->y1 + uVar9)) * fVar6;
            iVar7 = param_1->nedges;
            uVar9 = uVar9 + 0x20;
            uVar11 = (ulonglong)uVar10;
          } while ((int)uVar10 < iVar7);
        }
        qsort(param_1->edges,(longlong)iVar7,0x20,nsvg__cmpEdge);
        nsvg__initPaint(&local_4d8,&pNVar1->stroke,pNVar1->opacity);
        nsvg__rasterizeSortedEdges(param_1,param_3,param_4,param_5,param_6,&local_4d8,'\0');
      }
    }
  }
  nsvg__unpremultiplyAlpha(param_7,param_8,param_9,param_10);
  param_1->bitmap = (uchar *)0x0;
  param_1->width = 0;
  param_1->height = 0;
  param_1->stride = 0;
  return;
}

// sscanf @ 14241a400

int __cdecl sscanf(char *param_1,char *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res18 [16];
  
  puVar2 = __local_stdio_scanf_options();
  iVar1 = __stdio_common_vsscanf(*puVar2,param_1,0xffffffffffffffff,param_2,0,local_res18);
  return iVar1;
}

