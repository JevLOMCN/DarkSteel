// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// operator() @ 148a83ab0

uint __thiscall
`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
GetAllocatedSize'::__l2::<lambda_1>::operator()(void *this,FNode *param_1,uint param_2)

{
  uchar uVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  
  uVar10 = (ulonglong)(param_1->Content).TypeIndex;
  if (1 < uVar10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  uVar1 = (param_1->Content).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,TArray<struct_FStaticSpatialIndex::TRTreeImpl<struct_FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,class_TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10 + 4) != '\0') {
    if (uVar1 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    uVar6 = *(int *)((longlong)&(param_1->Content)._padding_ + 4) * 0x38 + param_2;
    if ((param_1->Content).TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    iVar2 = (int)(param_1->Content)._padding_;
    lVar11 = (param_1->Content)._padding_;
    lVar12 = (longlong)iVar2 * 0x38 + lVar11;
    while( true ) {
      if ((int)(param_1->Content)._padding_ != iVar2) {
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (lVar11 == lVar12) break;
      puVar3 = *(undefined8 **)((longlong)this + 8);
      local_res10[0] = 0x38;
      local_res20 = lVar11;
      UE::Core::Private::Function::CheckCallable((void *)*puVar3);
      pcVar4 = (code *)*puVar3;
      plVar9 = (longlong *)puVar3[5];
      if ((longlong *)puVar3[5] == (longlong *)0x0) {
        plVar9 = puVar3 + 2;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      iVar7 = (*pcVar4)(uVar8,&local_res20,local_res10);
      uVar6 = uVar6 + iVar7;
      lVar11 = lVar11 + 0x38;
    }
    return uVar6;
  }
  if (uVar1 != '\x01') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  return param_2 + 8;
}

// operator() @ 148a83c50

uint __thiscall
`FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
GetAllocatedSize'::__l2::<lambda_1>::operator()(void *this,FNode *param_1,uint param_2)

{
  longlong lVar1;
  uchar uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  
  uVar11 = (ulonglong)(param_1->Content).TypeIndex;
  if (1 < uVar11) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  uVar2 = (param_1->Content).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,TArray<struct_FStaticSpatialIndex::TRTreeImpl<struct_FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,class_TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar11) != '\0') {
    if (uVar2 != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    uVar7 = param_2 + *(int *)((longlong)&(param_1->Content)._padding_ + 4) * 0x48;
    if ((param_1->Content).TypeIndex != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return uVar7;
      }
    }
    iVar3 = (int)(param_1->Content)._padding_;
    lVar12 = (param_1->Content)._padding_;
    lVar1 = lVar12 + (longlong)iVar3 * 0x48;
    while( true ) {
      if ((int)(param_1->Content)._padding_ != iVar3) {
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (lVar12 == lVar1) break;
      puVar4 = *(undefined8 **)((longlong)this + 8);
      local_res10[0] = 0x48;
      local_res20 = lVar12;
      UE::Core::Private::Function::CheckCallable((void *)*puVar4);
      pcVar5 = (code *)*puVar4;
      plVar10 = (longlong *)puVar4[5];
      if ((longlong *)puVar4[5] == (longlong *)0x0) {
        plVar10 = puVar4 + 2;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      iVar8 = (*pcVar5)(uVar9,&local_res20,local_res10);
      uVar7 = uVar7 + iVar8;
      lVar12 = lVar12 + 0x48;
    }
    return uVar7;
  }
  if (uVar2 != '\x01') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  return param_2 + 8;
}

// ForEachIntersectingElement @ 148a910c0

bool __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
ForEachIntersectingElement
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *this,FCone *param_1,
          TFunctionRef<bool___cdecl(unsigned_int)> *param_2)

{
  double dVar1;
  bool bVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  TFunctionRef<bool___cdecl(unsigned_int)> local_48;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28 [2];
  
  dVar1 = (double)param_1->_padding_;
  __libm_sse2_sincos_();
  local_38._s_0.X = (param_1->Axis).field0_0x0._s_0.X;
  local_38._s_0.Y = (param_1->Axis).field0_0x0._s_0.Y;
  local_48._0_8_ = *(undefined8 *)param_2;
  local_48._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_28[0]._0_8_ = param_1->_padding_;
  local_28[0]._8_8_ = param_1->_padding_;
  bVar2 = ForEachIntersectingElementRecursive
                    (this,&this->RootNode,(TVector2<double> *)&local_28[0]._s_0,dVar1 * dVar1,
                     (TVector2<double> *)&local_38._s_0,(float)param_1->Angle,
                     (float)(double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),
                     (float)(double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc),&local_48);
  return bVar2;
}

// ForEachIntersectingElement @ 148a911a0

bool __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
ForEachIntersectingElement
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *this,FCone *param_1,
          TFunctionRef<bool___cdecl(unsigned_int)> *param_2)

{
  double dVar1;
  bool bVar2;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  TFunctionRef<bool___cdecl(unsigned_int)> local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  dVar1 = (double)param_1->_padding_;
  __libm_sse2_sincos_();
  local_48._s_0.X = (param_1->Axis).field0_0x0._s_0.X;
  local_48._s_0.Y = (param_1->Axis).field0_0x0._s_0.Y;
  local_58._0_8_ = *(undefined8 *)param_2;
  local_48._s_0.Z = (param_1->Axis).field0_0x0._s_0.Z;
  local_30._s_0.X = (double)param_1->_padding_;
  local_30._s_0.Y = (double)param_1->_padding_;
  local_58._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_30._s_0.Z = (double)param_1->_padding_;
  bVar2 = ForEachIntersectingElementRecursive
                    (this,&this->RootNode,(TVector<double> *)&local_30._s_0,dVar1 * dVar1,
                     (TVector<double> *)&local_48._s_0,(float)param_1->Angle,(float)extraout_XMM0_Qa
                     ,(float)extraout_XMM0_Qb,&local_58);
  return bVar2;
}

// ForEachIntersectingElementRecursive @ 148a912a0

bool __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
ForEachIntersectingElementRecursive
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *this,FNode *param_1,
          TBox2<double> *param_2,TFunctionRef<bool___cdecl(unsigned_int)> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  double *pdVar8;
  int iVar9;
  ulonglong uVar10;
  FNode *pFVar11;
  FNode *pFVar12;
  int iVar13;
  TVector2<double> *pTVar14;
  undefined1 local_res10 [8];
  int local_48 [2];
  uint local_40 [2];
  TFunctionRef<bool___cdecl(unsigned_int)> local_38;
  
  uVar10 = (ulonglong)(param_1->Content).TypeIndex;
  if ((1 < uVar10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,TArray<struct_FStaticSpatialIndex::TRTreeImpl<struct_FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,class_TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10 + 4) != '\0') {
    if (((param_1->Content).TypeIndex != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pFVar11 = (FNode *)(param_1->Content)._padding_;
    iVar9 = (int)(param_1->Content)._padding_;
    pTVar14 = &pFVar11->BoxMax;
    pFVar12 = pFVar11 + iVar9;
    while( true ) {
      if ((int)(param_1->Content)._padding_ != iVar9) {
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar12) break;
      dVar3 = (pFVar11->BoxMin).field0_0x0._s_0.X;
      dVar4 = (pFVar11->BoxMin).field0_0x0._s_0.Y;
      if ((((dVar3 < (param_2->Max).field0_0x0._s_0.X || dVar3 == (param_2->Max).field0_0x0._s_0.X)
           && ((param_2->Min).field0_0x0._s_0.X <= (pTVar14->field0_0x0)._s_0.X)) &&
          (pdVar8 = &(param_2->Max).field0_0x0._s_0.Y, dVar4 < *pdVar8 || dVar4 == *pdVar8)) &&
         ((param_2->Min).field0_0x0._s_0.Y <= (pTVar14->field0_0x0)._s_0.Y)) {
        local_38._0_8_ = *(undefined8 *)param_3;
        local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
        bVar5 = ForEachIntersectingElementRecursive(this,pFVar11,param_2,&local_38);
        if (!bVar5) {
          return false;
        }
      }
      pFVar11 = pFVar11 + 1;
      pTVar14 = (TVector2<double> *)((longlong)(pTVar14 + 3) + 8);
    }
    return true;
  }
  plVar1 = (longlong *)this->_padding_;
  pcVar2 = *(code **)(*plVar1 + 0x18);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  pdVar8 = (double *)(*pcVar2)(plVar1,(int)(param_1->Content)._padding_,local_40);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  iVar9 = (int)(param_1->Content)._padding_;
  iVar13 = *(int *)((longlong)&(param_1->Content)._padding_ + 4) + iVar9;
  while( true ) {
    if (iVar9 == iVar13) {
      return true;
    }
    if ((((*pdVar8 <= (param_2->Max).field0_0x0._s_0.X) &&
         ((param_2->Min).field0_0x0._s_0.X <= pdVar8[2])) &&
        (pdVar8[1] <= (param_2->Max).field0_0x0._s_0.Y)) &&
       (((param_2->Min).field0_0x0._s_0.Y <= pdVar8[3] &&
        (local_48[0] = iVar9,
        cVar7 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_48), cVar7 == '\0'))))
    break;
    iVar9 = iVar9 + 1;
    pdVar8 = (double *)((longlong)pdVar8 + (ulonglong)local_40[0]);
  }
  return false;
}

// ForEachIntersectingElementRecursive @ 148a914d0

bool __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
ForEachIntersectingElementRecursive
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *this,FNode *param_1,
          TVector2<double> *param_2,double param_3,TVector2<double> *param_4,float param_5,
          float param_6,float param_7,TFunctionRef<bool___cdecl(unsigned_int)> *param_8)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  TBox2<double> *pTVar10;
  int iVar11;
  ulonglong uVar12;
  FNode *pFVar13;
  TVector2<double> *pTVar14;
  int iVar15;
  FNode *pFVar16;
  double dVar17;
  double dVar18;
  undefined1 local_res10 [8];
  int local_98 [2];
  uint local_90 [2];
  TFunctionRef<bool___cdecl(unsigned_int)> local_88;
  TVector2<double>_u_0 local_78 [5];
  
  uVar12 = (ulonglong)(param_1->Content).TypeIndex;
  if ((1 < uVar12) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,TArray<struct_FStaticSpatialIndex::TRTreeImpl<struct_FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,class_TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar12 + 4) != '\0') {
    if (((param_1->Content).TypeIndex != '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    pFVar13 = (FNode *)(param_1->Content)._padding_;
    iVar11 = (int)(param_1->Content)._padding_;
    pTVar14 = &pFVar13->BoxMax;
    pFVar16 = pFVar13 + iVar11;
    while( true ) {
      if ((int)(param_1->Content)._padding_ != iVar11) {
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar16) break;
      dVar3 = (param_2->field0_0x0)._s_0.X;
      dVar4 = (param_2->field0_0x0)._s_0.Y;
      dVar17 = (pTVar14->field0_0x0)._s_0.X;
      dVar18 = (pTVar14->field0_0x0)._s_0.Y;
      dVar5 = (pFVar13->BoxMin).field0_0x0._s_0.X;
      dVar6 = (pFVar13->BoxMin).field0_0x0._s_0.Y;
      if (dVar3 <= dVar17) {
        dVar17 = dVar3;
      }
      if (dVar17 <= dVar5) {
        dVar17 = dVar5;
      }
      if (dVar4 <= dVar18) {
        dVar18 = dVar4;
      }
      if (dVar18 <= dVar6) {
        dVar18 = dVar6;
      }
      if ((dVar18 - dVar4) * (dVar18 - dVar4) + (dVar17 - dVar3) * (dVar17 - dVar3) <= param_3) {
        local_88._0_8_ = *(undefined8 *)param_8;
        local_88._8_8_ = *(undefined8 *)&param_8->field_0x8;
        bVar7 = ForEachIntersectingElementRecursive
                          (this,pFVar13,param_2,param_3,param_4,param_5,param_6,param_7,&local_88);
        if (!bVar7) {
          return false;
        }
      }
      pFVar13 = pFVar13 + 1;
      pTVar14 = (TVector2<double> *)((longlong)(pTVar14 + 3) + 8);
    }
    return true;
  }
  plVar1 = (longlong *)this->_padding_;
  pcVar2 = *(code **)(*plVar1 + 0x18);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  pTVar10 = (TBox2<double> *)(*pcVar2)(plVar1,(int)(param_1->Content)._padding_,local_90);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  iVar11 = (int)(param_1->Content)._padding_;
  iVar15 = *(int *)((longlong)&(param_1->Content)._padding_ + 4) + iVar11;
  if (iVar11 != iVar15) {
    do {
      local_78[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
      local_78[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
      bVar7 = FastConeAABBIntersection<FStaticSpatialIndex::FSpatialIndexProfile2D>
                        ((TVector2<double> *)&local_78[0]._s_0,param_3,param_4,(double)param_5,
                         (double)param_6,(double)param_7,pTVar10);
      if ((bVar7) &&
         (local_98[0] = iVar11,
         cVar9 = (**(code **)param_8)(*(undefined8 *)&param_8->field_0x8,local_98), cVar9 == '\0'))
      {
        return false;
      }
      iVar11 = iVar11 + 1;
      pTVar10 = (TBox2<double> *)((longlong)&(pTVar10->Min).field0_0x0 + (ulonglong)local_90[0]);
    } while (iVar11 != iVar15);
  }
  return true;
}

// ForEachIntersectingElementRecursive @ 148a91810

bool __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::
ForEachIntersectingElementRecursive
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *this,FNode *param_1,
          TVector2<double> *param_2,double param_3,TFunctionRef<bool___cdecl(unsigned_int)> *param_4
          )

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  double *pdVar10;
  int iVar11;
  ulonglong uVar12;
  FNode *pFVar13;
  FNode *pFVar14;
  TVector2<double> *pTVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  undefined1 local_res10 [8];
  int local_58 [2];
  uint local_50 [2];
  TFunctionRef<bool___cdecl(unsigned_int)> local_48 [2];
  
  uVar12 = (ulonglong)(param_1->Content).TypeIndex;
  if ((1 < uVar12) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,TArray<struct_FStaticSpatialIndex::TRTreeImpl<struct_FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,class_TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar12 + 4) != '\0') {
    if (((param_1->Content).TypeIndex != '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar8 = (*pcVar2)();
      return (bool)uVar8;
    }
    pFVar13 = (FNode *)(param_1->Content)._padding_;
    iVar11 = (int)(param_1->Content)._padding_;
    pTVar15 = &pFVar13->BoxMax;
    pFVar14 = pFVar13 + iVar11;
    while( true ) {
      if ((int)(param_1->Content)._padding_ != iVar11) {
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar13 == pFVar14) break;
      dVar3 = (param_2->field0_0x0)._s_0.X;
      dVar4 = (param_2->field0_0x0)._s_0.Y;
      dVar18 = (pTVar15->field0_0x0)._s_0.X;
      dVar17 = (pTVar15->field0_0x0)._s_0.Y;
      dVar5 = (pFVar13->BoxMin).field0_0x0._s_0.X;
      dVar6 = (pFVar13->BoxMin).field0_0x0._s_0.Y;
      if (dVar3 <= dVar18) {
        dVar18 = dVar3;
      }
      if (dVar18 <= dVar5) {
        dVar18 = dVar5;
      }
      if (dVar4 <= dVar17) {
        dVar17 = dVar4;
      }
      if (dVar17 <= dVar6) {
        dVar17 = dVar6;
      }
      if ((dVar17 - dVar4) * (dVar17 - dVar4) + (dVar18 - dVar3) * (dVar18 - dVar3) <= param_3) {
        local_48[0]._0_8_ = *(undefined8 *)param_4;
        local_48[0]._8_8_ = *(undefined8 *)&param_4->field_0x8;
        bVar7 = ForEachIntersectingElementRecursive(this,pFVar13,param_2,param_3,local_48);
        if (!bVar7) {
          return false;
        }
      }
      pFVar13 = pFVar13 + 1;
      pTVar15 = (TVector2<double> *)((longlong)(pTVar15 + 3) + 8);
    }
    return true;
  }
  plVar1 = (longlong *)this->_padding_;
  pcVar2 = *(code **)(*plVar1 + 0x18);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  pdVar10 = (double *)(*pcVar2)(plVar1,(int)(param_1->Content)._padding_,local_50);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar8 = (*pcVar2)();
    return (bool)uVar8;
  }
  iVar11 = (int)(param_1->Content)._padding_;
  iVar16 = *(int *)((longlong)&(param_1->Content)._padding_ + 4) + iVar11;
  while( true ) {
    if (iVar11 == iVar16) {
      return true;
    }
    dVar3 = (param_2->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Y;
    dVar18 = dVar3;
    if (pdVar10[2] <= dVar3) {
      dVar18 = pdVar10[2];
    }
    if (dVar18 <= *pdVar10) {
      dVar18 = *pdVar10;
    }
    dVar17 = pdVar10[3];
    if (dVar4 <= pdVar10[3]) {
      dVar17 = dVar4;
    }
    if (dVar17 <= pdVar10[1]) {
      dVar17 = pdVar10[1];
    }
    if (((dVar17 - dVar4) * (dVar17 - dVar4) + (dVar18 - dVar3) * (dVar18 - dVar3) <= param_3) &&
       (local_58[0] = iVar11,
       cVar9 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_58), cVar9 == '\0'))
    break;
    iVar11 = iVar11 + 1;
    pdVar10 = (double *)((longlong)pdVar10 + (ulonglong)local_50[0]);
  }
  return false;
}

// ForEachIntersectingElementRecursive @ 148a91aa0

bool __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
ForEachIntersectingElementRecursive
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *this,FNode *param_1,
          TBox<double> *param_2,TFunctionRef<bool___cdecl(unsigned_int)> *param_3)

{
  FNode *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  double *pdVar9;
  int iVar10;
  ulonglong uVar11;
  FNode *pFVar12;
  int iVar13;
  TVector<double> *pTVar14;
  undefined1 local_a8 [8];
  int local_a0 [2];
  uint local_98 [2];
  TFunctionRef<bool___cdecl(unsigned_int)> local_90 [2];
  double local_70;
  double local_58;
  
  uVar11 = (ulonglong)(param_1->Content).TypeIndex;
  if ((1 < uVar11) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,TArray<struct_FStaticSpatialIndex::TRTreeImpl<struct_FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,class_TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar11) != '\0') {
    if (((param_1->Content).TypeIndex != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    iVar10 = (int)(param_1->Content)._padding_;
    pFVar12 = (FNode *)(param_1->Content)._padding_;
    pTVar14 = &pFVar12->BoxMax;
    pFVar1 = pFVar12 + iVar10;
    while( true ) {
      if ((int)(param_1->Content)._padding_ != iVar10) {
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_a8);
      }
      if (pFVar12 == pFVar1) break;
      local_70 = (pFVar12->BoxMin).field0_0x0._s_0.Z;
      dVar4 = (pFVar12->BoxMin).field0_0x0._s_0.X;
      dVar5 = (pFVar12->BoxMin).field0_0x0._s_0.Y;
      local_58 = (pTVar14->field0_0x0)._s_0.Z;
      if ((((dVar4 < (param_2->Max).field0_0x0._s_0.X || dVar4 == (param_2->Max).field0_0x0._s_0.X)
           && ((param_2->Min).field0_0x0._s_0.X <= (pTVar14->field0_0x0)._s_0.X)) &&
          (pdVar9 = &(param_2->Max).field0_0x0._s_0.Y, dVar5 < *pdVar9 || dVar5 == *pdVar9)) &&
         ((((param_2->Min).field0_0x0._s_0.Y <= (pTVar14->field0_0x0)._s_0.Y &&
           (pdVar9 = &(param_2->Max).field0_0x0._s_0.Z, local_70 < *pdVar9 || local_70 == *pdVar9))
          && ((param_2->Min).field0_0x0._s_0.Z <= local_58)))) {
        local_90[0]._0_8_ = *(undefined8 *)param_3;
        local_90[0]._8_8_ = *(undefined8 *)&param_3->field_0x8;
        bVar6 = ForEachIntersectingElementRecursive(this,pFVar12,param_2,local_90);
        if (!bVar6) {
          return false;
        }
      }
      pFVar12 = pFVar12 + 1;
      pTVar14 = pTVar14 + 3;
    }
    return true;
  }
  plVar2 = (longlong *)this->_padding_;
  pcVar3 = *(code **)(*plVar2 + 0x18);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pdVar9 = (double *)(*pcVar3)(plVar2,(int)(param_1->Content)._padding_,local_98);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  iVar10 = (int)(param_1->Content)._padding_;
  iVar13 = *(int *)((longlong)&(param_1->Content)._padding_ + 4) + iVar10;
  while( true ) {
    if (iVar10 == iVar13) {
      return true;
    }
    if (((((*pdVar9 <= (param_2->Max).field0_0x0._s_0.X) &&
          ((param_2->Min).field0_0x0._s_0.X <= pdVar9[3])) &&
         (pdVar9[1] <= (param_2->Max).field0_0x0._s_0.Y)) &&
        (((param_2->Min).field0_0x0._s_0.Y <= pdVar9[4] &&
         (pdVar9[2] <= (param_2->Max).field0_0x0._s_0.Z)))) &&
       (((param_2->Min).field0_0x0._s_0.Z <= pdVar9[5] &&
        (local_a0[0] = iVar10,
        cVar8 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_a0), cVar8 == '\0'))))
    break;
    iVar10 = iVar10 + 1;
    pdVar9 = (double *)((longlong)pdVar9 + (ulonglong)local_98[0]);
  }
  return false;
}

// ForEachIntersectingElementRecursive @ 148a91d30

bool __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
ForEachIntersectingElementRecursive
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *this,FNode *param_1,
          TVector<double> *param_2,double param_3,TVector<double> *param_4,float param_5,
          float param_6,float param_7,TFunctionRef<bool___cdecl(unsigned_int)> *param_8)

{
  FNode *pFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  TBox<double> *pTVar11;
  int iVar12;
  ulonglong uVar13;
  FNode *pFVar14;
  TVector<double> *pTVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 local_108 [8];
  int local_100 [2];
  uint local_f8 [2];
  TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *local_f0;
  TFunctionRef<bool___cdecl(unsigned_int)> local_e8;
  TVector<double>_u_0 local_d8 [6];
  
  uVar13 = (ulonglong)(param_1->Content).TypeIndex;
  local_f0 = this;
  if ((1 < uVar13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,TArray<struct_FStaticSpatialIndex::TRTreeImpl<struct_FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,class_TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar13) != '\0') {
    if (((param_1->Content).TypeIndex != '\0') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar14 = (FNode *)(param_1->Content)._padding_;
    iVar12 = (int)(param_1->Content)._padding_;
    pTVar15 = &pFVar14->BoxMax;
    pFVar1 = pFVar14 + iVar12;
    while( true ) {
      if ((int)(param_1->Content)._padding_ != iVar12) {
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (pFVar14 == pFVar1) break;
      auVar3 = *(undefined1 (*) [16])&param_2->field0_0x0;
      dVar19 = auVar3._8_8_;
      auVar4 = *(undefined1 (*) [16])&pTVar15->field0_0x0;
      auVar5 = *(undefined1 (*) [16])&(pFVar14->BoxMin).field0_0x0;
      dVar20 = *(double *)((longlong)&pTVar15->field0_0x0 + 0x10);
      dVar2 = (param_2->field0_0x0)._s_0.Z;
      if (dVar2 <= dVar20) {
        dVar20 = dVar2;
      }
      uVar17 = auVar4._0_4_;
      uVar18 = auVar4._4_4_;
      if (auVar3._0_8_ <= auVar4._0_8_) {
        uVar17 = auVar3._0_4_;
        uVar18 = auVar3._4_4_;
      }
      dVar2 = (pFVar14->BoxMin).field0_0x0._s_0.Z;
      if (dVar20 <= dVar2) {
        dVar20 = dVar2;
      }
      if ((double)CONCAT44(uVar18,uVar17) <= auVar5._0_8_) {
        uVar17 = auVar5._0_4_;
        uVar18 = auVar5._4_4_;
      }
      dVar20 = dVar20 - (param_2->field0_0x0)._s_0.Z;
      dVar2 = (double)CONCAT44(uVar18,uVar17) - auVar3._0_8_;
      dVar21 = auVar4._8_8_;
      if (dVar19 <= auVar4._8_8_) {
        dVar21 = dVar19;
      }
      if (dVar21 <= auVar5._8_8_) {
        dVar21 = auVar5._8_8_;
      }
      if ((dVar21 - dVar19) * (dVar21 - dVar19) + dVar2 * dVar2 + dVar20 * dVar20 <= param_3) {
        local_e8._0_8_ = *(undefined8 *)param_8;
        local_e8._8_8_ = *(undefined8 *)&param_8->field_0x8;
        bVar8 = ForEachIntersectingElementRecursive
                          (local_f0,pFVar14,param_2,param_3,param_4,param_5,param_6,param_7,
                           &local_e8);
        if (!bVar8) {
          return false;
        }
      }
      pFVar14 = pFVar14 + 1;
      pTVar15 = pTVar15 + 3;
    }
    return true;
  }
  plVar6 = (longlong *)local_f0->_padding_;
  pcVar7 = *(code **)(*plVar6 + 0x18);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pTVar11 = (TBox<double> *)(*pcVar7)(plVar6,(int)(param_1->Content)._padding_,local_f8);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar12 = (int)(param_1->Content)._padding_;
  iVar16 = *(int *)((longlong)&(param_1->Content)._padding_ + 4) + iVar12;
  if (iVar12 != iVar16) {
    do {
      local_d8[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
      local_d8[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
      local_d8[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
      bVar8 = FastConeAABBIntersection<FStaticSpatialIndex::FSpatialIndexProfile3D>
                        ((TVector<double> *)&local_d8[0]._s_0,param_3,param_4,(double)param_5,
                         (double)param_6,(double)param_7,pTVar11);
      if ((bVar8) &&
         (local_100[0] = iVar12,
         cVar10 = (**(code **)param_8)(*(undefined8 *)&param_8->field_0x8,local_100), cVar10 == '\0'
         )) {
        return false;
      }
      iVar12 = iVar12 + 1;
      pTVar11 = (TBox<double> *)(pTVar11->Pad + ((ulonglong)local_f8[0] - 0x31));
    } while (iVar12 != iVar16);
  }
  return true;
}

// ForEachIntersectingElementRecursive @ 148a92060

bool __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::
ForEachIntersectingElementRecursive
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *this,FNode *param_1,
          TVector<double> *param_2,double param_3,TFunctionRef<bool___cdecl(unsigned_int)> *param_4)

{
  FNode *pFVar1;
  double dVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  double *pdVar10;
  int iVar11;
  ulonglong uVar12;
  FNode *pFVar13;
  TVector<double> *pTVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 local_d8 [8];
  int local_d0 [2];
  uint local_c8 [2];
  TFunctionRef<bool___cdecl(unsigned_int)> local_c0 [8];
  
  uVar12 = (ulonglong)(param_1->Content).TypeIndex;
  if ((1 < uVar12) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,TArray<struct_FStaticSpatialIndex::TRTreeImpl<struct_FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,class_TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar12) != '\0') {
    if (((param_1->Content).TypeIndex != '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    pFVar13 = (FNode *)(param_1->Content)._padding_;
    iVar11 = (int)(param_1->Content)._padding_;
    pTVar14 = &pFVar13->BoxMax;
    pFVar1 = pFVar13 + iVar11;
    while( true ) {
      if ((int)(param_1->Content)._padding_ != iVar11) {
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_d8);
      }
      if (pFVar13 == pFVar1) break;
      dVar17 = (param_2->field0_0x0)._s_0.X;
      dVar16 = (param_2->field0_0x0)._s_0.Y;
      dVar18 = (pTVar14->field0_0x0)._s_0.X;
      dVar20 = (pTVar14->field0_0x0)._s_0.Y;
      dVar5 = (pFVar13->BoxMin).field0_0x0._s_0.X;
      dVar6 = (pFVar13->BoxMin).field0_0x0._s_0.Y;
      dVar19 = (pTVar14->field0_0x0)._s_0.Z;
      dVar2 = (param_2->field0_0x0)._s_0.Z;
      if (dVar2 <= dVar19) {
        dVar19 = dVar2;
      }
      if (dVar17 <= dVar18) {
        dVar18 = dVar17;
      }
      dVar2 = (pFVar13->BoxMin).field0_0x0._s_0.Z;
      if (dVar19 <= dVar2) {
        dVar19 = dVar2;
      }
      if (dVar18 <= dVar5) {
        dVar18 = dVar5;
      }
      dVar19 = dVar19 - (param_2->field0_0x0)._s_0.Z;
      if (dVar16 <= dVar20) {
        dVar20 = dVar16;
      }
      if (dVar20 <= dVar6) {
        dVar20 = dVar6;
      }
      if ((dVar20 - dVar16) * (dVar20 - dVar16) + (dVar18 - dVar17) * (dVar18 - dVar17) +
          dVar19 * dVar19 <= param_3) {
        local_c0[0]._0_8_ = *(undefined8 *)param_4;
        local_c0[0]._8_8_ = *(undefined8 *)&param_4->field_0x8;
        bVar7 = ForEachIntersectingElementRecursive(this,pFVar13,param_2,param_3,local_c0);
        if (!bVar7) {
          return false;
        }
      }
      pFVar13 = pFVar13 + 1;
      pTVar14 = pTVar14 + 3;
    }
    return true;
  }
  plVar3 = (longlong *)this->_padding_;
  pcVar4 = *(code **)(*plVar3 + 0x18);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  pdVar10 = (double *)(*pcVar4)(plVar3,(int)(param_1->Content)._padding_,local_c8);
  if (((param_1->Content).TypeIndex != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  iVar11 = (int)(param_1->Content)._padding_;
  iVar15 = *(int *)((longlong)&(param_1->Content)._padding_ + 4) + iVar11;
  while( true ) {
    if (iVar11 == iVar15) {
      return true;
    }
    dVar19 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar17 = dVar19;
    if (pdVar10[3] <= dVar19) {
      dVar17 = pdVar10[3];
    }
    dVar16 = (param_2->field0_0x0)._s_0.Z;
    dVar18 = pdVar10[5];
    if (dVar16 <= pdVar10[5]) {
      dVar18 = dVar16;
    }
    if (dVar17 <= *pdVar10) {
      dVar17 = *pdVar10;
    }
    if (dVar18 <= pdVar10[2]) {
      dVar18 = pdVar10[2];
    }
    dVar18 = dVar18 - (param_2->field0_0x0)._s_0.Z;
    dVar16 = pdVar10[4];
    if (dVar2 <= pdVar10[4]) {
      dVar16 = dVar2;
    }
    if (dVar16 <= pdVar10[1]) {
      dVar16 = pdVar10[1];
    }
    if (((dVar16 - dVar2) * (dVar16 - dVar2) + (dVar17 - dVar19) * (dVar17 - dVar19) +
         dVar18 * dVar18 <= param_3) &&
       (local_d0[0] = iVar11,
       cVar9 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,local_d0), cVar9 == '\0'))
    break;
    iVar11 = iVar11 + 1;
    pdVar10 = (double *)((longlong)pdVar10 + (ulonglong)local_c8[0]);
  }
  return false;
}

// Init @ 148a97680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::Init
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64> *this)

{
  TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
  *pTVar1;
  double dVar2;
  ulonglong uVar3;
  FScriptContainerElement FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FNode *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
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
  undefined1 auStackY_178 [32];
  undefined1 local_128 [8];
  ForAnyElementType local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TVector2<double>_u_0_s_0 local_d0;
  TVector2<double>_u_0_s_0 local_c0;
  undefined1 local_b0;
  undefined7 uStack_af;
  longlong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar8 = (**(code **)(*(longlong *)this->_padding_ + 8))();
  if (iVar8 == 0) {
    return;
  }
  pFVar16 = (FScriptContainerElement *)0x0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  local_f0 = 0.0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  iVar8 = (**(code **)(*(longlong *)this->_padding_ + 8))();
  pFVar13 = pFVar16;
  if (0 < iVar8) {
    uVar18 = 0;
    uVar31 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar19 = 0;
    uVar32 = 0;
    uVar29 = 0;
    uVar30 = 0;
    pFVar15 = pFVar16;
    do {
      iVar8 = (int)pFVar15;
      pdVar11 = (double *)
                (**(code **)(*(longlong *)this->_padding_ + 0x10))
                          ((longlong *)this->_padding_,pFVar15);
      if (pFVar13 == (FScriptContainerElement *)0x0) {
LAB_148a97826:
        iVar9 = (int)local_118;
        if ((int)local_118 == local_118._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&local_120,(int *)((longlong)&local_118 + 4));
        }
        local_118 = CONCAT44(local_118._4_4_,iVar9 + 1);
        pFVar13 = local_120.Data + (longlong)iVar9 * 0x38;
        *(undefined8 *)&pFVar13->field_0x0 = 0;
        *(undefined8 *)(pFVar13 + 8) = 0;
        *(undefined8 *)(pFVar13 + 0x10) = 0;
        *(undefined8 *)(pFVar13 + 0x18) = 0;
        *(undefined8 *)(pFVar13 + 0x20) = 0;
        *(undefined8 *)(pFVar13 + 0x28) = 0;
        *(undefined8 *)(pFVar13 + 0x30) = 0;
        DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,int>
                  ((FNode *)0x0,*(int *)(pFVar13 + 0x28));
        if (*(void **)(pFVar13 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar13 + 0x20));
        }
        *(undefined8 *)(pFVar13 + 0x20) = 0;
        pFVar13[0x30] = (FScriptContainerElement)0x1;
      }
      else {
        if ((pFVar13[0x30] != (FScriptContainerElement)0x1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (0x3f < *(uint *)(pFVar13 + 0x24)) {
          *(undefined4 *)(pFVar13 + 0x10) = uVar25;
          *(undefined4 *)(pFVar13 + 0x14) = uVar26;
          *(undefined4 *)(pFVar13 + 0x18) = uVar27;
          *(undefined4 *)(pFVar13 + 0x1c) = uVar28;
          uVar25 = 0;
          uVar26 = 0;
          uVar27 = 0;
          uVar28 = 0;
          local_f0 = 0.0;
          uVar18 = 0;
          uVar33 = 0;
          uVar34 = 0;
          uVar31 = 0;
          uVar29 = 0;
          uVar30 = 0;
          *(undefined4 *)&pFVar13->field_0x0 = uVar21;
          *(undefined4 *)(pFVar13 + 4) = uVar22;
          *(undefined4 *)(pFVar13 + 8) = uVar23;
          *(undefined4 *)(pFVar13 + 0xc) = uVar24;
          uVar21 = 0;
          uVar22 = 0;
          uVar23 = 0;
          uVar24 = 0;
          uVar19 = 0;
          uVar32 = 0;
          local_110 = 0;
          uStack_108 = 0;
          local_100 = 0;
          uStack_f8 = 0;
          goto LAB_148a97826;
        }
      }
      if (local_f0._0_1_ == '\0') {
        if (*(char *)(pdVar11 + 4) != '\0') {
          uVar21 = *(undefined4 *)pdVar11;
          uVar22 = *(undefined4 *)((longlong)pdVar11 + 4);
          uVar23 = *(undefined4 *)(pdVar11 + 1);
          uVar24 = *(undefined4 *)((longlong)pdVar11 + 0xc);
          uVar25 = *(undefined4 *)(pdVar11 + 2);
          uVar26 = *(undefined4 *)((longlong)pdVar11 + 0x14);
          uVar27 = *(undefined4 *)(pdVar11 + 3);
          uVar28 = *(undefined4 *)((longlong)pdVar11 + 0x1c);
          local_f0 = pdVar11[4];
          goto LAB_148a9790c;
        }
      }
      else if (*(char *)(pdVar11 + 4) != '\0') {
        dVar2 = pdVar11[1];
        dVar20 = pdVar11[2];
        uVar23 = SUB84(dVar2,0);
        uVar24 = (int)((ulonglong)dVar2 >> 0x20);
        if ((double)CONCAT44(uVar32,uVar19) <= dVar2) {
          uVar23 = uVar19;
          uVar24 = uVar32;
        }
        dVar2 = *pdVar11;
        if (dVar2 <= (double)CONCAT44(uVar30,uVar29)) {
          uVar29 = SUB84(dVar2,0);
          uVar30 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        if (dVar20 <= (double)CONCAT44(uVar34,uVar33)) {
          dVar20 = (double)CONCAT44(uVar34,uVar33);
        }
        dVar2 = pdVar11[3];
        uVar27 = SUB84(dVar2,0);
        uVar28 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= (double)CONCAT44(uVar31,uVar18)) {
          uVar27 = uVar18;
          uVar28 = uVar31;
        }
        uVar25 = SUB84(dVar20,0);
        uVar26 = (undefined4)((ulonglong)dVar20 >> 0x20);
        uVar21 = uVar29;
        uVar22 = uVar30;
LAB_148a9790c:
        local_100 = CONCAT44(uVar26,uVar25);
        uStack_f8 = CONCAT44(uVar28,uVar27);
        local_110 = CONCAT44(uVar22,uVar21);
        uStack_108 = CONCAT44(uVar24,uVar23);
        uVar29 = uVar21;
        uVar30 = uVar22;
        uVar18 = uVar27;
        uVar31 = uVar28;
        uVar19 = uVar23;
        uVar32 = uVar24;
        uVar33 = uVar25;
        uVar34 = uVar26;
      }
      if ((pFVar13[0x30] != (FScriptContainerElement)0x1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(int *)(pFVar13 + 0x24) == 0) {
        *(int *)(pFVar13 + 0x20) = iVar8;
      }
      if ((*(int *)(pFVar13 + 0x24) + *(int *)(pFVar13 + 0x20) != iVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(StartIndex + NumElements) == InIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\StaticSpatialIndex.h"
                             ,0x22b,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(int *)(pFVar13 + 0x24) = *(int *)(pFVar13 + 0x24) + 1;
      pFVar15 = (FScriptContainerElement *)(ulonglong)(iVar8 + 1U);
      iVar9 = (**(code **)(*(longlong *)this->_padding_ + 8))();
    } while ((int)(iVar8 + 1U) < iVar9);
    if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_148a97a33;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentNode",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\StaticSpatialIndex.h"
                     ,0x1b5,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_148a97a33:
  *(undefined4 *)&pFVar13->field_0x0 = uVar21;
  *(undefined4 *)(pFVar13 + 4) = uVar22;
  *(undefined4 *)(pFVar13 + 8) = uVar23;
  *(undefined4 *)(pFVar13 + 0xc) = uVar24;
  *(undefined4 *)(pFVar13 + 0x10) = uVar25;
  *(undefined4 *)(pFVar13 + 0x14) = uVar26;
  *(undefined4 *)(pFVar13 + 0x18) = uVar27;
  *(undefined4 *)(pFVar13 + 0x1c) = uVar28;
  local_f0 = 0.0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  iVar8 = (int)local_118;
  FVar14.Data = local_120.Data;
  do {
    local_120.Data = FVar14.Data;
    if (iVar8 < 2) {
      iVar9 = 1;
      if (iVar8 != 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Nodes.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\StaticSpatialIndex.h"
                           ,0x1df,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (int)local_118;
      }
      if (iVar9 < 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (int)local_118;
      }
      pTVar1 = &(this->RootNode).Content;
      dVar2 = *(double *)(local_120.Data + 8);
      pFVar13 = local_120.Data + 0x20;
      (this->RootNode).BoxMin.field0_0x0.XY[0] = *(double *)local_120.Data;
      (this->RootNode).BoxMin.field0_0x0._s_0.Y = dVar2;
      dVar2 = *(double *)(local_120.Data + 0x18);
      (this->RootNode).BoxMax.field0_0x0._s_0.X = *(double *)(local_120.Data + 0x10);
      (this->RootNode).BoxMax.field0_0x0._s_0.Y = dVar2;
      if ((TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
           *)pFVar13 != pTVar1) {
        FVar4 = local_120.Data[0x30];
        local_98 = CONCAT71(local_98._1_7_,FVar4);
        if ((1 < (ulonglong)(byte)FVar4) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[(byte)FVar4])(&local_a8,pFVar13);
        lVar5 = pTVar1->_padding_;
        lVar12 = (this->RootNode).Content._padding_;
        uVar3 = *(ulonglong *)&(this->RootNode).Content.TypeIndex;
        pTVar1->_padding_ = local_a8;
        (this->RootNode).Content._padding_ = lStack_a0;
        *(ulonglong *)&(this->RootNode).Content.TypeIndex = local_98;
        local_a8 = lVar5;
        lStack_a0 = lVar12;
        local_98 = uVar3;
        if ((1 < (uVar3 & 0xff)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar3 & 0xff])(&local_a8);
        iVar9 = (int)local_118;
      }
      DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,int>
                ((FNode *)local_120.Data,iVar9);
      if ((FNode *)local_120.Data != (FNode *)0x0) {
        FMemory::Free(local_120.Data);
      }
      return;
    }
    uVar27 = 0;
    uVar28 = 0;
    uVar22 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar21 = 0;
    uVar23 = 0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    pFVar17 = (FNode *)((longlong)FVar14.Data + (longlong)iVar8 * 0x38);
    local_e0 = 0;
    pFVar13 = pFVar16;
    pFVar15 = pFVar16;
    iVar9 = iVar8;
    while( true ) {
      iVar10 = (int)pFVar13;
      if (iVar9 != iVar8) {
        local_128[0] = 0;
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
        iVar10 = (int)local_e0;
      }
      if ((FNode *)FVar14.Data == pFVar17) break;
      if (pFVar15 == (FScriptContainerElement *)0x0) {
LAB_148a97bcf:
        if (iVar10 == local_e0._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&local_e8,(int *)((longlong)&local_e0 + 4));
        }
        pFVar15 = local_e8.Data + (longlong)iVar10 * 0x38;
        local_e0 = CONCAT44(local_e0._4_4_,iVar10 + 1);
        *(undefined8 *)&pFVar15->field_0x0 = 0;
        *(undefined8 *)(pFVar15 + 8) = 0;
        *(undefined8 *)(pFVar15 + 0x10) = 0;
        *(undefined8 *)(pFVar15 + 0x18) = 0;
        *(undefined8 *)(pFVar15 + 0x20) = 0;
        *(undefined8 *)(pFVar15 + 0x28) = 0;
        *(undefined8 *)(pFVar15 + 0x30) = 0;
        UE::Core::Private::
        TDestructorCaller<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>_>
        ::Destruct(pFVar15 + 0x20);
        *(undefined8 *)(pFVar15 + 0x20) = 0;
        *(undefined8 *)(pFVar15 + 0x28) = 0;
        pFVar15[0x30] = (FScriptContainerElement)0x0;
        uVar29 = uVar22;
        uVar30 = uVar24;
        uVar18 = uVar27;
        uVar31 = uVar28;
        uVar19 = uVar25;
        uVar32 = uVar26;
        uVar33 = uVar21;
        uVar34 = uVar23;
      }
      else {
        if ((pFVar15[0x30] != (FScriptContainerElement)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar29 = uVar22;
        uVar30 = uVar24;
        uVar18 = uVar27;
        uVar31 = uVar28;
        uVar19 = uVar25;
        uVar32 = uVar26;
        uVar33 = uVar21;
        uVar34 = uVar23;
        if (0xf < *(int *)(pFVar15 + 0x28)) {
          *(undefined4 *)&pFVar15->field_0x0 = uVar21;
          *(undefined4 *)(pFVar15 + 4) = uVar23;
          *(undefined4 *)(pFVar15 + 8) = uVar25;
          *(undefined4 *)(pFVar15 + 0xc) = uVar26;
          *(undefined4 *)(pFVar15 + 0x10) = uVar22;
          *(undefined4 *)(pFVar15 + 0x14) = uVar24;
          *(undefined4 *)(pFVar15 + 0x18) = uVar27;
          *(undefined4 *)(pFVar15 + 0x1c) = uVar28;
          if ((pFVar15[0x30] != (FScriptContainerElement)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = *(int *)(pFVar15 + 0x28);
          if (*(int *)(pFVar15 + 0x2c) != iVar9) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,iVar9,(ForAnyElementType *)(pFVar15 + 0x20),iVar9,
                       (int *)(pFVar15 + 0x2c));
          }
          uVar22 = 0;
          uVar24 = 0;
          uVar27 = 0;
          uVar21 = 0;
          uVar23 = 0;
          uVar28 = 0;
          local_f0 = 0.0;
          uVar25 = 0;
          uVar26 = 0;
          iVar10 = (int)local_e0;
          goto LAB_148a97bcf;
        }
      }
      local_d0 = (((FNode *)FVar14.Data)->BoxMin).field0_0x0._s_0;
      uVar21 = local_d0.X._0_4_;
      uVar23 = local_d0.X._4_4_;
      uVar25 = local_d0.Y._0_4_;
      uVar26 = local_d0.Y._4_4_;
      local_b0 = 1;
      local_c0 = (((FNode *)FVar14.Data)->BoxMax).field0_0x0._s_0;
      uVar22 = local_c0.X._0_4_;
      uVar24 = local_c0.X._4_4_;
      uVar27 = local_c0.Y._0_4_;
      uVar28 = local_c0.Y._4_4_;
      if (local_f0._0_1_ == '\0') {
        local_f0 = (double)CONCAT71(uStack_af,1);
      }
      else {
        if ((double)CONCAT44(uVar34,uVar33) <= local_d0.X) {
          uVar21 = uVar33;
          uVar23 = uVar34;
        }
        if ((double)CONCAT44(uVar32,uVar19) <= local_d0.Y) {
          uVar25 = uVar19;
          uVar26 = uVar32;
        }
        if (local_c0.X <= (double)CONCAT44(uVar30,uVar29)) {
          uVar22 = uVar29;
          uVar24 = uVar30;
        }
        if (local_c0.Y <= (double)CONCAT44(uVar31,uVar18)) {
          uVar27 = uVar18;
          uVar28 = uVar31;
        }
      }
      local_100 = CONCAT44(uVar24,uVar22);
      uStack_f8 = CONCAT44(uVar28,uVar27);
      local_110 = CONCAT44(uVar23,uVar21);
      uStack_108 = CONCAT44(uVar26,uVar25);
      if ((pFVar15[0x30] != (FScriptContainerElement)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((*(FNode **)(pFVar15 + 0x20) <= FVar14.Data) &&
          (FVar14.Data < *(FNode **)(pFVar15 + 0x20) + *(int *)(pFVar15 + 0x2c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = *(int *)(pFVar15 + 0x28);
      if (iVar9 == *(int *)(pFVar15 + 0x2c)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,(ForAnyElementType *)(pFVar15 + 0x20),(int *)(pFVar15 + 0x2c));
      }
      *(int *)(pFVar15 + 0x28) = iVar9 + 1;
      dVar2 = (((FNode *)FVar14.Data)->BoxMin).field0_0x0._s_0.Y;
      lVar12 = (longlong)iVar9 * 0x38;
      lVar5 = *(longlong *)(pFVar15 + 0x20);
      *(double *)(lVar12 + lVar5) = (((FNode *)FVar14.Data)->BoxMin).field0_0x0._s_0.X;
      ((double *)(lVar12 + lVar5))[1] = dVar2;
      dVar2 = (((FNode *)FVar14.Data)->BoxMax).field0_0x0._s_0.Y;
      pdVar11 = (double *)(lVar12 + 0x10 + lVar5);
      *pdVar11 = (((FNode *)FVar14.Data)->BoxMax).field0_0x0._s_0.X;
      pdVar11[1] = dVar2;
      TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
      ::
      TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
                ((TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode::FLeafType>
                  *)(lVar12 + lVar5 + 0x20),&((FNode *)FVar14.Data)->Content);
      FVar14.Data = FVar14.Data + 0x38;
      pFVar13 = (FScriptContainerElement *)(local_e0 & 0xffffffff);
      iVar9 = (int)local_118;
    }
    if ((pFVar15 == (FScriptContainerElement *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\StaticSpatialIndex.h"
                           ,0x1d5,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)&pFVar15->field_0x0 = uVar21;
    *(undefined4 *)(pFVar15 + 4) = uVar23;
    *(undefined4 *)(pFVar15 + 8) = uVar25;
    *(undefined4 *)(pFVar15 + 0xc) = uVar26;
    *(undefined4 *)(pFVar15 + 0x10) = uVar22;
    *(undefined4 *)(pFVar15 + 0x14) = uVar24;
    *(undefined4 *)(pFVar15 + 0x18) = uVar27;
    *(undefined4 *)(pFVar15 + 0x1c) = uVar28;
    if ((pFVar15[0x30] != (FScriptContainerElement)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = *(int *)(pFVar15 + 0x28);
    if (*(int *)(pFVar15 + 0x2c) != iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar8,(ForAnyElementType *)(pFVar15 + 0x20),iVar8,(int *)(pFVar15 + 0x2c));
    }
    local_f0 = 0.0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,int>
              ((FNode *)local_120.Data,(int)local_118);
    if ((FNode *)local_120.Data != (FNode *)0x0) {
      FMemory::Free(local_120.Data);
    }
    local_120.Data = local_e8.Data;
    local_118 = local_e0;
    local_e0 = 0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>::FNode,int>
              ((FNode *)0x0,0);
    if (local_e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    iVar8 = (int)local_118;
    FVar14.Data = local_120.Data;
  } while( true );
}

// Init @ 148a98100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::Init
          (TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64> *this)

{
  FNode *pFVar1;
  TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
  *pTVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  FScriptContainerElement FVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  undefined4 uVar19;
  undefined4 uVar20;
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
  undefined1 auStackY_198 [32];
  undefined1 local_148 [8];
  undefined1 local_140 [16];
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double dStack_118;
  double local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 auStack_d0 [16];
  double local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  longlong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar10 = (**(code **)(*(longlong *)this->_padding_ + 8))();
  if (iVar10 == 0) {
    return;
  }
  pFVar18 = (FScriptContainerElement *)0x0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_140._0_8_ = 0;
  local_140._8_8_ = 0;
  local_110 = 0.0;
  local_130 = 0.0;
  uStack_128 = 0.0;
  local_120 = 0.0;
  dStack_118 = 0.0;
  iVar10 = (**(code **)(*(longlong *)this->_padding_ + 8))();
  pFVar16 = pFVar18;
  uVar19 = (undefined4)uStack_128;
  uVar24 = uStack_128._4_4_;
  uVar20 = (undefined4)local_120;
  uVar25 = local_120._4_4_;
  if (0 < iVar10) {
    uVar35 = 0;
    uVar36 = 0;
    uVar22 = 0;
    uVar27 = 0;
    pFVar15 = pFVar18;
    uVar33 = (undefined4)local_120;
    uVar34 = local_120._4_4_;
    uVar37 = (undefined4)uStack_128;
    uVar38 = uStack_128._4_4_;
    do {
      iVar10 = (int)pFVar15;
      pdVar13 = (double *)
                (**(code **)(*(longlong *)this->_padding_ + 0x10))
                          ((longlong *)this->_padding_,pFVar15);
      if (pFVar16 == (FScriptContainerElement *)0x0) {
LAB_148a982eb:
        iVar11 = (int)local_100;
        if ((int)local_100 == local_100._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&local_108,(int *)((longlong)&local_100 + 4));
        }
        local_100 = CONCAT44(local_100._4_4_,iVar11 + 1);
        pFVar16 = local_108.Data + (longlong)iVar11 * 0x48;
        *(undefined8 *)&pFVar16->field_0x0 = 0;
        *(undefined8 *)(pFVar16 + 8) = 0;
        *(undefined8 *)(pFVar16 + 0x10) = 0;
        *(undefined8 *)(pFVar16 + 0x18) = 0;
        *(undefined8 *)(pFVar16 + 0x20) = 0;
        *(undefined8 *)(pFVar16 + 0x28) = 0;
        *(undefined8 *)(pFVar16 + 0x30) = 0;
        *(undefined8 *)(pFVar16 + 0x38) = 0;
        *(undefined8 *)(pFVar16 + 0x40) = 0;
        DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,int>
                  ((FNode *)0x0,*(int *)(pFVar16 + 0x38));
        if (*(void **)(pFVar16 + 0x30) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar16 + 0x30));
        }
        *(undefined8 *)(pFVar16 + 0x30) = 0;
        pFVar16[0x40] = (FScriptContainerElement)0x1;
      }
      else {
        if ((pFVar16[0x40] != (FScriptContainerElement)0x1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (0x3f < *(uint *)(pFVar16 + 0x34)) {
          *(undefined4 *)&pFVar16->field_0x0 = uVar29;
          *(undefined4 *)(pFVar16 + 4) = uVar30;
          *(undefined4 *)(pFVar16 + 8) = uVar31;
          *(undefined4 *)(pFVar16 + 0xc) = uVar32;
          local_110 = (double)((ulonglong)local_110 & 0xffffffffffffff00);
          *(double *)(pFVar16 + 0x10) = local_130;
          *(undefined4 *)(pFVar16 + 0x18) = uVar19;
          *(undefined4 *)(pFVar16 + 0x1c) = uVar24;
          *(undefined4 *)(pFVar16 + 0x20) = uVar20;
          *(undefined4 *)(pFVar16 + 0x24) = uVar25;
          *(double *)(pFVar16 + 0x28) = dStack_118;
          dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uStack_128 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
          local_120 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                       UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          local_140._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          local_140._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_140._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_140._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          goto LAB_148a982eb;
        }
      }
      if (local_110._0_1_ == '\0') {
        if (*(char *)(pdVar13 + 6) != '\0') {
          uVar20 = *(undefined4 *)(pdVar13 + 4);
          uVar25 = *(undefined4 *)((longlong)pdVar13 + 0x24);
          dStack_118 = pdVar13[5];
          local_130 = pdVar13[2];
          uVar19 = *(undefined4 *)(pdVar13 + 3);
          uVar24 = *(undefined4 *)((longlong)pdVar13 + 0x1c);
          uVar29 = *(undefined4 *)pdVar13;
          uVar30 = *(undefined4 *)((longlong)pdVar13 + 4);
          uVar31 = *(undefined4 *)(pdVar13 + 1);
          uVar32 = *(undefined4 *)((longlong)pdVar13 + 0xc);
          local_110 = pdVar13[6];
          goto LAB_148a9841d;
        }
      }
      else if (*(char *)(pdVar13 + 6) != '\0') {
        dVar3 = pdVar13[1];
        dVar4 = pdVar13[2];
        uVar20 = SUB84(dVar4,0);
        uVar25 = (undefined4)((ulonglong)dVar4 >> 0x20);
        uVar31 = SUB84(dVar3,0);
        uVar32 = (int)((ulonglong)dVar3 >> 0x20);
        if ((double)CONCAT44(uVar27,uVar22) <= dVar3) {
          uVar31 = uVar22;
          uVar32 = uVar27;
        }
        if (local_130 <= dVar4) {
          uVar20 = SUB84(local_130,0);
          uVar25 = (undefined4)((ulonglong)local_130 >> 0x20);
        }
        dVar3 = *pdVar13;
        if (dVar3 <= (double)CONCAT44(uVar36,uVar35)) {
          uVar35 = SUB84(dVar3,0);
          uVar36 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        dVar3 = pdVar13[3];
        uVar19 = SUB84(dVar3,0);
        uVar24 = (int)((ulonglong)dVar3 >> 0x20);
        if (dVar3 <= (double)CONCAT44(uVar38,uVar37)) {
          uVar19 = uVar37;
          uVar24 = uVar38;
        }
        local_130 = (double)CONCAT44(uVar25,uVar20);
        dVar3 = pdVar13[4];
        uVar20 = SUB84(dVar3,0);
        uVar25 = (int)((ulonglong)dVar3 >> 0x20);
        if (dVar3 <= (double)CONCAT44(uVar34,uVar33)) {
          uVar20 = uVar33;
          uVar25 = uVar34;
        }
        dVar3 = pdVar13[5];
        uVar29 = SUB84(dVar3,0);
        uVar30 = (undefined4)((ulonglong)dVar3 >> 0x20);
        if (dVar3 <= dStack_118) {
          uVar29 = SUB84(dStack_118,0);
          uVar30 = (undefined4)((ulonglong)dStack_118 >> 0x20);
        }
        dStack_118 = (double)CONCAT44(uVar30,uVar29);
        uVar29 = uVar35;
        uVar30 = uVar36;
LAB_148a9841d:
        uStack_128 = (double)CONCAT44(uVar24,uVar19);
        local_120 = (double)CONCAT44(uVar25,uVar20);
        local_140._4_4_ = uVar30;
        local_140._0_4_ = uVar29;
        local_140._12_4_ = uVar32;
        local_140._8_4_ = uVar31;
        uVar33 = uVar20;
        uVar34 = uVar25;
        uVar35 = uVar29;
        uVar36 = uVar30;
        uVar37 = uVar19;
        uVar38 = uVar24;
        uVar22 = uVar31;
        uVar27 = uVar32;
      }
      if ((pFVar16[0x40] != (FScriptContainerElement)0x1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)(pFVar16 + 0x34) == 0) {
        *(int *)(pFVar16 + 0x30) = iVar10;
      }
      if ((*(int *)(pFVar16 + 0x34) + *(int *)(pFVar16 + 0x30) != iVar10) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(StartIndex + NumElements) == InIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\StaticSpatialIndex.h"
                             ,0x22b,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(int *)(pFVar16 + 0x34) = *(int *)(pFVar16 + 0x34) + 1;
      pFVar15 = (FScriptContainerElement *)(ulonglong)(iVar10 + 1U);
      iVar11 = (**(code **)(*(longlong *)this->_padding_ + 8))();
    } while ((int)(iVar10 + 1U) < iVar11);
    if (pFVar16 != (FScriptContainerElement *)0x0) goto LAB_148a9854d;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentNode",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\StaticSpatialIndex.h"
                     ,0x1b5,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_148a9854d:
  *(undefined4 *)(pFVar16 + 0x18) = uVar19;
  *(undefined4 *)(pFVar16 + 0x1c) = uVar24;
  *(undefined4 *)(pFVar16 + 0x20) = uVar20;
  *(undefined4 *)(pFVar16 + 0x24) = uVar25;
  local_110 = (double)((ulonglong)local_110 & 0xffffffffffffff00);
  *(undefined4 *)&pFVar16->field_0x0 = uVar29;
  *(undefined4 *)(pFVar16 + 4) = uVar30;
  *(undefined4 *)(pFVar16 + 8) = uVar31;
  *(undefined4 *)(pFVar16 + 0xc) = uVar32;
  *(double *)(pFVar16 + 0x10) = local_130;
  *(double *)(pFVar16 + 0x28) = dStack_118;
  local_140._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_140._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_140._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_140._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_128 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  local_120 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  iVar10 = (int)local_100;
  dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  FVar17.Data = local_108.Data;
  do {
    local_108.Data = FVar17.Data;
    if (iVar10 < 2) {
      iVar11 = 1;
      if (iVar10 != 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Nodes.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\StaticSpatialIndex.h"
                           ,0x1df,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (int)local_100;
      }
      if (iVar11 < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (int)local_100;
      }
      pTVar2 = &(this->RootNode).Content;
      dVar3 = *(double *)(local_108.Data + 8);
      pFVar16 = local_108.Data + 0x30;
      (this->RootNode).BoxMin.field0_0x0.XYZ[0] = *(double *)local_108.Data;
      (this->RootNode).BoxMin.field0_0x0._s_0.Y = dVar3;
      (this->RootNode).BoxMin.field0_0x0._s_0.Z = *(double *)(local_108.Data + 0x10);
      dVar3 = *(double *)(local_108.Data + 0x20);
      (this->RootNode).BoxMax.field0_0x0._s_0.X = *(double *)(local_108.Data + 0x18);
      (this->RootNode).BoxMax.field0_0x0._s_0.Y = dVar3;
      (this->RootNode).BoxMax.field0_0x0._s_0.Z = *(double *)(local_108.Data + 0x28);
      if ((TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
           *)pFVar16 != pTVar2) {
        FVar6 = local_108.Data[0x40];
        local_98 = CONCAT71(local_98._1_7_,FVar6);
        if ((1 < (ulonglong)(byte)FVar6) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x105,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[(byte)FVar6])(&local_a8,pFVar16);
        lVar14 = pTVar2->_padding_;
        lVar7 = (this->RootNode).Content._padding_;
        uVar5 = *(ulonglong *)&(this->RootNode).Content.TypeIndex;
        pTVar2->_padding_ = local_a8;
        (this->RootNode).Content._padding_ = lStack_a0;
        *(ulonglong *)&(this->RootNode).Content.TypeIndex = local_98;
        local_a8 = lVar14;
        lStack_a0 = lVar7;
        local_98 = uVar5;
        if ((1 < (uVar5 & 0xff)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar5 & 0xff])(&local_a8);
        iVar11 = (int)local_100;
      }
      DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,int>
                ((FNode *)local_108.Data,iVar11);
      if ((FNode *)local_108.Data != (FNode *)0x0) {
        FMemory::Free(local_108.Data);
      }
      return;
    }
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    pFVar1 = (FNode *)((longlong)FVar17.Data + (longlong)iVar10 * 0x48);
    pFVar15 = pFVar18;
    pFVar16 = pFVar18;
    uVar31 = uVar20;
    uVar32 = uVar25;
    uVar29 = uVar19;
    uVar30 = uVar24;
    iVar11 = iVar10;
    while( true ) {
      iVar12 = (int)pFVar15;
      if (iVar11 != iVar10) {
        local_148[0] = 0;
        `TCheckedPointerIterator<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_148);
        iVar12 = (int)local_f0;
      }
      if ((FNode *)FVar17.Data == pFVar1) break;
      uVar33 = uVar19;
      uVar34 = uVar24;
      uVar35 = uVar20;
      uVar36 = uVar25;
      uVar37 = uVar29;
      uVar38 = uVar30;
      if (pFVar16 == (FScriptContainerElement *)0x0) {
LAB_148a98736:
        if (iVar12 == local_f0._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x848,&local_f8,(int *)((longlong)&local_f0 + 4));
        }
        lVar14 = (longlong)iVar12;
        local_f0 = CONCAT44(local_f0._4_4_,iVar12 + 1);
        *(undefined8 *)&local_f8.Data[lVar14 * 0x48].field_0x0 = 0;
        *(undefined8 *)(local_f8.Data + lVar14 * 0x48 + 8) = 0;
        *(undefined8 *)(local_f8.Data + lVar14 * 0x48 + 0x10) = 0;
        *(undefined8 *)(local_f8.Data + lVar14 * 0x48 + 0x10 + 8) = 0;
        pFVar16 = local_f8.Data + lVar14 * 0x48;
        *(undefined8 *)(pFVar16 + 0x20) = 0;
        *(undefined8 *)(pFVar16 + 0x28) = 0;
        *(undefined8 *)(pFVar16 + 0x30) = 0;
        *(undefined8 *)(pFVar16 + 0x38) = 0;
        *(undefined8 *)(pFVar16 + 0x40) = 0;
        UE::Core::Private::
        TDestructorCaller<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>_>
        ::Destruct(pFVar16 + 0x30);
        *(undefined8 *)(pFVar16 + 0x30) = 0;
        *(undefined8 *)(pFVar16 + 0x38) = 0;
        pFVar16[0x40] = (FScriptContainerElement)0x0;
      }
      else {
        if ((pFVar16[0x40] != (FScriptContainerElement)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (0xf < *(int *)(pFVar16 + 0x38)) {
          *(undefined4 *)&pFVar16->field_0x0 = uVar20;
          *(undefined4 *)(pFVar16 + 4) = uVar25;
          *(undefined4 *)(pFVar16 + 8) = uVar19;
          *(undefined4 *)(pFVar16 + 0xc) = uVar24;
          *(double *)(pFVar16 + 0x10) = local_130;
          *(undefined4 *)(pFVar16 + 0x18) = uVar31;
          *(undefined4 *)(pFVar16 + 0x1c) = uVar32;
          *(undefined4 *)(pFVar16 + 0x20) = uVar29;
          *(undefined4 *)(pFVar16 + 0x24) = uVar30;
          *(double *)(pFVar16 + 0x28) = dStack_118;
          if ((pFVar16[0x40] != (FScriptContainerElement)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index == TypeIndex",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                 ,0x97,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = *(int *)(pFVar16 + 0x38);
          if (*(int *)(pFVar16 + 0x3c) != iVar11) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,iVar11,(ForAnyElementType *)(pFVar16 + 0x30),iVar11,
                       (int *)(pFVar16 + 0x3c));
          }
          dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uStack_128 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
          local_120 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                       UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
          local_110 = (double)((ulonglong)local_110 & 0xffffffffffffff00);
          local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          iVar12 = (int)local_f0;
          goto LAB_148a98736;
        }
      }
      local_d8 = *(double *)((longlong)&(((FNode *)FVar17.Data)->BoxMin).field0_0x0 + 0x10);
      local_e8 = *(undefined1 (*) [16])&(((FNode *)FVar17.Data)->BoxMin).field0_0x0;
      uVar20 = local_e8._0_4_;
      uVar25 = local_e8._4_4_;
      uVar19 = local_e8._8_4_;
      uVar24 = local_e8._12_4_;
      local_b8 = 1;
      auStack_d0 = *(undefined1 (*) [16])&(((FNode *)FVar17.Data)->BoxMax).field0_0x0;
      uVar22 = auStack_d0._0_4_;
      uVar27 = auStack_d0._4_4_;
      uVar29 = auStack_d0._8_4_;
      uVar30 = auStack_d0._12_4_;
      local_c0 = *(double *)((longlong)&(((FNode *)FVar17.Data)->BoxMax).field0_0x0 + 0x10);
      uVar23 = SUB84(local_c0,0);
      uVar28 = (undefined4)((ulonglong)local_c0 >> 0x20);
      uVar21 = SUB84(local_d8,0);
      uVar26 = (undefined4)((ulonglong)local_d8 >> 0x20);
      uStack_128 = auStack_d0._0_8_;
      local_120 = auStack_d0._8_8_;
      if (local_110._0_1_ == '\0') {
        local_110 = (double)CONCAT71(uStack_b7,1);
        local_130 = local_d8;
        dStack_118 = local_c0;
      }
      else {
        if ((double)CONCAT44(uVar36,uVar35) <= local_e8._0_8_) {
          uVar20 = uVar35;
          uVar25 = uVar36;
        }
        if ((double)CONCAT44(uVar34,uVar33) <= local_e8._8_8_) {
          uVar19 = uVar33;
          uVar24 = uVar34;
        }
        if (local_130 <= local_d8) {
          uVar21 = SUB84(local_130,0);
          uVar26 = (undefined4)((ulonglong)local_130 >> 0x20);
        }
        if (uStack_128 <= (double)CONCAT44(uVar32,uVar31)) {
          uVar22 = uVar31;
          uVar27 = uVar32;
        }
        if (local_120 <= (double)CONCAT44(uVar38,uVar37)) {
          uVar29 = uVar37;
          uVar30 = uVar38;
        }
        uStack_128 = (double)CONCAT44(uVar27,uVar22);
        if (local_c0 <= dStack_118) {
          uVar23 = SUB84(dStack_118,0);
          uVar28 = (undefined4)((ulonglong)dStack_118 >> 0x20);
        }
        local_120 = (double)CONCAT44(uVar30,uVar29);
        local_130 = (double)CONCAT44(uVar26,uVar21);
        dStack_118 = (double)CONCAT44(uVar28,uVar23);
      }
      local_140._4_4_ = uVar25;
      local_140._0_4_ = uVar20;
      local_140._12_4_ = uVar24;
      local_140._8_4_ = uVar19;
      if ((pFVar16[0x40] != (FScriptContainerElement)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((*(FNode **)(pFVar16 + 0x30) <= FVar17.Data) &&
          (FVar17.Data < *(FNode **)(pFVar16 + 0x30) + *(int *)(pFVar16 + 0x3c))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = *(int *)(pFVar16 + 0x38);
      if (iVar11 == *(int *)(pFVar16 + 0x3c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x848,(ForAnyElementType *)(pFVar16 + 0x30),(int *)(pFVar16 + 0x3c));
      }
      *(int *)(pFVar16 + 0x38) = iVar11 + 1;
      dVar3 = (((FNode *)FVar17.Data)->BoxMin).field0_0x0._s_0.Y;
      lVar7 = *(longlong *)(pFVar16 + 0x30);
      lVar14 = (longlong)iVar11 * 9 + 6;
      pdVar13 = (double *)(lVar7 + -0x30 + lVar14 * 8);
      *pdVar13 = (((FNode *)FVar17.Data)->BoxMin).field0_0x0._s_0.X;
      pdVar13[1] = dVar3;
      *(double *)(lVar7 + -0x20 + lVar14 * 8) = (((FNode *)FVar17.Data)->BoxMin).field0_0x0._s_0.Z;
      dVar3 = (((FNode *)FVar17.Data)->BoxMax).field0_0x0._s_0.Y;
      pdVar13 = (double *)(lVar7 + -0x18 + lVar14 * 8);
      *pdVar13 = (((FNode *)FVar17.Data)->BoxMax).field0_0x0._s_0.X;
      pdVar13[1] = dVar3;
      *(double *)(lVar7 + -8 + lVar14 * 8) = (((FNode *)FVar17.Data)->BoxMax).field0_0x0._s_0.Z;
      TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
      ::
      TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
                ((TVariant<TArray<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,TSizedDefaultAllocator<32>_>,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode::FLeafType>
                  *)(lVar7 + lVar14 * 8),&((FNode *)FVar17.Data)->Content);
      pFVar15 = (FScriptContainerElement *)(local_f0 & 0xffffffff);
      FVar17.Data = FVar17.Data + 0x48;
      uStack_128 = (double)CONCAT44(uVar27,uVar22);
      local_120 = (double)CONCAT44(uVar30,uVar29);
      uVar31 = uVar22;
      uVar32 = uVar27;
      iVar11 = (int)local_100;
    }
    if ((pFVar16 == (FScriptContainerElement *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentNode",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\RuntimeHashSet\\StaticSpatialIndex.h"
                           ,0x1d5,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(undefined4 *)&pFVar16->field_0x0 = uVar20;
    *(undefined4 *)(pFVar16 + 4) = uVar25;
    *(undefined4 *)(pFVar16 + 8) = uVar19;
    *(undefined4 *)(pFVar16 + 0xc) = uVar24;
    *(double *)(pFVar16 + 0x10) = local_130;
    *(undefined4 *)(pFVar16 + 0x18) = uVar31;
    *(undefined4 *)(pFVar16 + 0x1c) = uVar32;
    *(undefined4 *)(pFVar16 + 0x20) = uVar29;
    *(undefined4 *)(pFVar16 + 0x24) = uVar30;
    *(double *)(pFVar16 + 0x28) = dStack_118;
    if ((pFVar16[0x40] != (FScriptContainerElement)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar10 = *(int *)(pFVar16 + 0x38);
    if (*(int *)(pFVar16 + 0x3c) != iVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar10,(ForAnyElementType *)(pFVar16 + 0x30),iVar10,(int *)(pFVar16 + 0x3c))
      ;
    }
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_140._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_140._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_140._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_140._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_110 = (double)((ulonglong)local_110 & 0xffffffffffffff00);
    uStack_128 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    local_120 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,int>
              ((FNode *)local_108.Data,(int)local_100);
    if ((FNode *)local_108.Data != (FNode *)0x0) {
      FMemory::Free(local_108.Data);
    }
    local_108.Data = local_f8.Data;
    local_100 = local_f0;
    local_f0 = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    DestructItems<FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile3D,16,64>::FNode,int>
              ((FNode *)0x0,0);
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    iVar10 = (int)local_100;
    FVar17.Data = local_108.Data;
  } while( true );
}

