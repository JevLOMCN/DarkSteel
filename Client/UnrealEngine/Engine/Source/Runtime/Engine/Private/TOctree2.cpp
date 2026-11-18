// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> @ 148348410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> * __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this,
          TVector<double> *param_1,double param_2)

{
  int *piVar1;
  TArray<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,TAlignedHeapAllocator<8>_>
  *pTVar2;
  undefined1 auVar3 [16];
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar7 = (param_1->field0_0x0)._s_0.Z;
  piVar1 = &(this->TreeNodes).ArrayMax;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  pTVar2 = &this->TreeElements;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y = dVar4;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z = dVar7;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.W = 0.0;
  auVar3._8_4_ = SUB84(param_2,0);
  auVar3._0_8_ = param_2;
  auVar3._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  *(undefined1 (*) [16])&(this->RootNodeContext).Bounds.Extent.field0_0x0 = auVar3;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z = param_2;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.W = 0.0;
  dVar7 = param_2 * __real_3fe1000000000000;
  (this->RootNodeContext).InCullBits = 0;
  (this->RootNodeContext).OutCullBits = 0;
  dVar4 = param_2 * ___real_3f408f227be81608;
  (this->RootNodeContext).ChildExtent = dVar7;
  (this->RootNodeContext).ChildCenterOffset = param_2 - dVar7;
  (this->TreeNodes).ArrayNum = 0;
  *piVar1 = 0;
  (this->ParentLinks).ArrayNum = 0;
  (this->ParentLinks).ArrayMax = 0;
  (this->TreeElements).ArrayNum = 0;
  (this->TreeElements).ArrayMax = 0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  (this->TreeNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MinLeafExtent = dVar4;
  iVar5 = (this->TreeNodes).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->TreeNodes).AllocatorInstance,piVar1);
  }
  (this->TreeNodes).ArrayNum = iVar5 + 1;
  DefaultConstructItems<TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar5 * 8,1);
  iVar5 = (this->TreeElements).ArrayNum;
  if (iVar5 == (this->TreeElements).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,&(this->TreeElements).ArrayMax);
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  (this->TreeElements).ArrayNum = iVar5 + 1;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  return this;
}

// ~TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> @ 14834cc20

void __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
~TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)
             (this->TreeElements).AllocatorInstance.Data,(this->TreeElements).ArrayNum);
  pFVar1 = (this->TreeElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParentLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TreeNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14834e000

TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> * __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::operator=
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this,
          TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *param_1)

{
  TArray<TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,TAlignedHeapAllocator<8>_>
  *pTVar5;
  TArray<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,TAlignedHeapAllocator<8>_>
  *pTVar6;
  FScriptContainerElement *pFVar7;
  double dVar8;
  undefined8 uVar9;
  uint uVar10;
  
  dVar8 = (param_1->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y;
  pTVar1 = &param_1->TreeNodes;
  pTVar2 = &this->TreeNodes;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.X =
       (param_1->RootNodeContext).Bounds.Center.field0_0x0._s_0.X;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Y = dVar8;
  dVar8 = (param_1->RootNodeContext).Bounds.Center.field0_0x0._s_0.W;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z =
       (param_1->RootNodeContext).Bounds.Center.field0_0x0._s_0.Z;
  (this->RootNodeContext).Bounds.Center.field0_0x0._s_0.W = dVar8;
  dVar8 = (param_1->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Y;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.X =
       (param_1->RootNodeContext).Bounds.Extent.field0_0x0._s_0.X;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Y = dVar8;
  dVar8 = (param_1->RootNodeContext).Bounds.Extent.field0_0x0._s_0.W;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z =
       (param_1->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z;
  (this->RootNodeContext).Bounds.Extent.field0_0x0._s_0.W = dVar8;
  dVar8 = (param_1->RootNodeContext).ChildCenterOffset;
  (this->RootNodeContext).ChildExtent = (param_1->RootNodeContext).ChildExtent;
  (this->RootNodeContext).ChildCenterOffset = dVar8;
  uVar10 = (param_1->RootNodeContext).OutCullBits;
  uVar9 = *(undefined8 *)&(param_1->RootNodeContext).field_0x58;
  (this->RootNodeContext).InCullBits = (param_1->RootNodeContext).InCullBits;
  (this->RootNodeContext).OutCullBits = uVar10;
  *(undefined8 *)&(this->RootNodeContext).field_0x58 = uVar9;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TreeNodes).ArrayNum = (param_1->TreeNodes).ArrayNum;
    (this->TreeNodes).ArrayMax = (param_1->TreeNodes).ArrayMax;
    (param_1->TreeNodes).ArrayNum = 0;
    (param_1->TreeNodes).ArrayMax = 0;
  }
  pTVar3 = &param_1->ParentLinks;
  pTVar4 = &this->ParentLinks;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParentLinks).ArrayNum = (param_1->ParentLinks).ArrayNum;
    (this->ParentLinks).ArrayMax = (param_1->ParentLinks).ArrayMax;
    (param_1->ParentLinks).ArrayNum = 0;
    (param_1->ParentLinks).ArrayMax = 0;
  }
  pTVar5 = &param_1->TreeElements;
  pTVar6 = &this->TreeElements;
  if (pTVar6 != pTVar5) {
    DestructItems<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)
               (pTVar6->AllocatorInstance).Data,(this->TreeElements).ArrayNum);
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TreeElements).ArrayNum = (param_1->TreeElements).ArrayNum;
    (this->TreeElements).ArrayMax = (param_1->TreeElements).ArrayMax;
    (param_1->TreeElements).ArrayNum = 0;
    (param_1->TreeElements).ArrayMax = 0;
  }
  pTVar3 = &param_1->FreeList;
  pTVar4 = &this->FreeList;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FreeList).ArrayNum = (param_1->FreeList).ArrayNum;
    (this->FreeList).ArrayMax = (param_1->FreeList).ArrayMax;
    (param_1->FreeList).ArrayNum = 0;
    (param_1->FreeList).ArrayMax = 0;
  }
  this->MinLeafExtent = param_1->MinLeafExtent;
  return this;
}

// AddElement @ 1483533d0

void __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::AddElement
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this,
          TVolumeLightingSample<3> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> local_58;
  TVector4<double>_u_0 local_48;
  undefined1 local_28 [16];
  double local_18;
  undefined8 local_10;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  uVar1 = *(undefined8 *)&(param_1->Position).field0_0x0;
  dVar2 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_48._8_4_ = SUB84(dVar2,0);
  local_48._0_8_ = (double)(float)uVar1;
  local_48._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_18 = (double)param_1->Radius;
  local_48._s_0.Z = (double)(param_1->Position).field0_0x0._s_0.Z;
  local_28._8_4_ = SUB84(local_18,0);
  local_28._0_8_ = local_18;
  local_28._12_4_ = (int)((ulonglong)local_18 >> 0x20);
  local_48._s_0.W = 0.0;
  local_10 = 0;
  AddElementInternal(this,0,&this->RootNodeContext,(FBoxCenterAndExtent *)&local_48._s_0,param_1,
                     &local_58);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// AddElementInternal @ 148353460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::AddElementInternal
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this,uint param_1,
          FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,TVolumeLightingSample<3> *param_4
          ,TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FOctreeNodeContext *pFVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *pTVar23;
  TVolumeLightingSample<3> *pTVar24;
  FScriptContainerElement *pFVar25;
  TVolumeLightingSample<3> *pTVar26;
  uint uVar27;
  longlong lVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar34;
  double dVar35;
  uint uVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  undefined4 uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 local_res10 [8];
  FOctreeNodeContext *local_res18;
  FBoxCenterAndExtent *local_res20;
  TVector4<double>_u_0 local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 local_e0;
  TVector4<double>_u_0 local_d8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  double local_98;
  double local_90;
  
  lVar28 = (longlong)(int)param_1;
  uVar27 = ~param_1 >> 0x1f;
  local_res18 = param_2;
  local_res20 = param_3;
  while( true ) {
    uVar34 = 0;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar34 = uVar27;
    }
    if ((uVar34 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar25 = (this->TreeNodes).AllocatorInstance.Data + lVar28 * 8 + 4;
    *(int *)pFVar25 = *(int *)pFVar25 + 1;
    iVar19 = (this->TreeNodes).ArrayNum;
    uVar34 = 0;
    if ((int)param_1 < iVar19) {
      uVar34 = uVar27;
    }
    if (uVar34 == 0) {
      iVar19 = 0x506106c8;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar25 = (this->TreeNodes).AllocatorInstance.Data;
    uVar34 = 0;
    if (*(int *)(pFVar25 + lVar28 * 8) != -1) {
      dVar8 = (param_2->Bounds).Center.field0_0x0._s_0.Z;
      dVar9 = (param_2->Bounds).Center.field0_0x0._s_0.W;
      dVar29 = param_2->ChildCenterOffset;
      dVar10 = (param_2->Bounds).Center.field0_0x0._s_0.X;
      dVar11 = (param_2->Bounds).Center.field0_0x0._s_0.Y;
      dVar35 = param_2->ChildExtent;
      auVar41._8_4_ = SUB84(dVar29,0);
      auVar41._0_8_ = dVar29;
      uVar47 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar41._12_4_ = uVar47;
      dVar12 = (local_res20->Center).field0_0x0._s_0.X;
      dVar13 = (local_res20->Center).field0_0x0._s_0.Y;
      dVar14 = (local_res20->Center).field0_0x0._s_0.Z;
      dVar15 = (local_res20->Center).field0_0x0._s_0.W;
      auVar42._0_8_ = (dVar29 + dVar8) - dVar14;
      auVar42._8_8_ = (auVar41._8_8_ + dVar9) - dVar15;
      dVar5 = dVar15 - (dVar9 - dVar29);
      auVar30._8_4_ = SUB84(dVar35,0);
      auVar30._0_8_ = dVar35;
      auVar30._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar43._8_4_ = SUB84(dVar5,0);
      auVar43._0_8_ = dVar14 - (dVar8 - dVar29);
      auVar43._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar43 = minpd(auVar42,auVar43);
      auVar31._8_8_ =
           -(ulonglong)(auVar30._8_8_ < auVar43._8_8_ + (local_res20->Extent).field0_0x0._s_0.W);
      auVar31._0_8_ = -(ulonglong)(dVar35 < auVar43._0_8_ + (local_res20->Extent).field0_0x0._s_0.Z)
      ;
      uVar18 = movmskpd(iVar19,auVar31);
      auVar44._8_4_ = SUB84(dVar29,0);
      auVar44._0_8_ = dVar29;
      auVar44._12_4_ = uVar47;
      auVar45._0_8_ = (dVar29 + dVar10) - dVar12;
      auVar45._8_8_ = (auVar44._8_8_ + dVar11) - dVar13;
      dVar5 = dVar13 - (dVar11 - dVar29);
      auVar3._8_4_ = SUB84(dVar5,0);
      auVar3._0_8_ = dVar12 - (dVar10 - dVar29);
      auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar43 = minpd(auVar45,auVar3);
      lVar22 = -(ulonglong)(dVar35 < auVar43._8_8_ + (local_res20->Extent).field0_0x0._s_0.Y);
      auVar6._8_4_ = (int)lVar22;
      auVar6._0_8_ = -(ulonglong)(dVar35 < auVar43._0_8_ + (local_res20->Extent).field0_0x0._s_0.X);
      auVar6._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
      iVar19 = movmskpd((int)pFVar25,auVar6);
      if ((uVar18 & 0x3fffffff) == 0 && iVar19 == 0) {
        auVar50._8_8_ = -(ulonglong)(dVar9 < dVar15);
        auVar50._0_8_ = -(ulonglong)(dVar8 < dVar14);
        iVar21 = movmskpd((int)local_res20,auVar50);
        auVar7._8_4_ = (int)-(ulonglong)(dVar11 < dVar13);
        auVar7._0_8_ = -(ulonglong)(dVar10 < dVar12);
        auVar7._12_4_ = (int)(-(ulonglong)(dVar11 < dVar13) >> 0x20);
        uVar18 = movmskpd(iVar19,auVar7);
        uVar18 = (iVar21 << 2 | uVar18) & 7;
        if ((int)param_1 < (this->TreeNodes).ArrayNum) {
          uVar34 = uVar27;
        }
        if ((uVar34 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar48 = SUB84(param_2->ChildCenterOffset,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar49 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar29 = (double)(float)-(uint)((uVar18 & ___xmm_00000008000000040000000200000001) ==
                                       ___xmm_00000008000000040000000200000001);
        dVar35 = (double)(float)-(uint)((uVar18 & _UNK_150744154) == _UNK_150744154);
        uVar27 = SUB84(dVar29,0);
        uVar34 = (uint)((ulonglong)dVar29 >> 0x20);
        uVar20 = SUB84(dVar35,0);
        uVar36 = (uint)((ulonglong)dVar35 >> 0x20);
        auVar32._0_4_ = ~uVar27 & uVar48;
        auVar32._4_4_ = ~uVar34 & uVar49;
        auVar32._8_4_ = ~uVar20 & uVar48;
        auVar32._12_4_ = ~uVar36 & uVar49;
        dVar29 = (double)(float)-(uint)((uVar18 & _UNK_150744158) == _UNK_150744158);
        uVar37 = SUB84(dVar29,0);
        uVar38 = (uint)((ulonglong)dVar29 >> 0x20);
        dVar29 = (double)(float)-(uint)((uVar18 & _UNK_15074415c) == _UNK_15074415c);
        uVar39 = SUB84(dVar29,0);
        uVar40 = (uint)((ulonglong)dVar29 >> 0x20);
        uVar46 = SUB84(param_2->ChildCenterOffset,0);
        auVar51._0_4_ = uVar27 & uVar46;
        uVar27 = (uint)((ulonglong)param_2->ChildCenterOffset >> 0x20);
        auVar51._4_4_ = uVar34 & uVar27;
        auVar51._8_4_ = uVar20 & uVar46;
        auVar51._12_4_ = uVar36 & uVar27;
        local_d8._s_0.X = SUB168(auVar51 | auVar32,0) + (param_2->Bounds).Center.field0_0x0._s_0.X;
        local_d8._s_0.Y = SUB168(auVar51 | auVar32,8) + (param_2->Bounds).Center.field0_0x0._s_0.Y;
        auVar33._0_4_ = uVar37 & uVar46;
        auVar33._4_4_ = uVar38 & uVar27;
        auVar33._8_4_ = uVar39 & uVar46;
        auVar33._12_4_ = uVar40 & uVar27;
        auVar4._4_4_ = ~uVar38 & uVar49;
        auVar4._0_4_ = ~uVar37 & uVar48;
        auVar4._8_4_ = ~uVar39 & uVar48;
        auVar4._12_4_ = ~uVar40 & uVar49;
        local_90 = param_2->ChildExtent;
        local_d8._s_0.Z =
             (SUB168(auVar33 | auVar4,0) + (param_2->Bounds).Center.field0_0x0._s_0.Z) *
             (double)_UNK_150689548;
        local_d8._s_0.W =
             (SUB168(auVar33 | auVar4,8) + (param_2->Bounds).Center.field0_0x0._s_0.W) *
             (double)_UNK_15068954c;
        dVar29 = (double)_UNK_15068954c * local_90;
        local_98 = local_90 * __real_3fe0000000000000 * __real_3ff1000000000000;
        local_b8._8_4_ = SUB84(local_90,0);
        local_b8._0_8_ = local_90;
        local_b8._12_4_ = (int)((ulonglong)local_90 >> 0x20);
        local_a8._8_4_ = SUB84(dVar29,0);
        local_a8._0_8_ = (double)_UNK_150689548 * local_90;
        local_a8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        local_90 = local_90 - local_98;
        AddElementInternal(this,*(int *)((this->TreeNodes).AllocatorInstance.Data + lVar28 * 8) +
                                uVar18,(FOctreeNodeContext *)&local_d8._s_0,local_res20,param_4,
                           param_5);
      }
      else {
        uVar34 = 0;
        if ((int)param_1 < (this->TreeElements).ArrayNum) {
          uVar34 = uVar27;
        }
        if ((uVar34 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar25 = (this->TreeElements).AllocatorInstance.Data + lVar28 * 0x10;
        iVar19 = *(int *)&pFVar25[8].field_0x0;
        if (iVar19 == *(int *)(pFVar25 + 0xc)) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10b0,(ForAnyElementType *)pFVar25,(int *)(pFVar25 + 0xc));
        }
        *(int *)&pFVar25[8].field_0x0 = iVar19 + 1;
        TVolumeLightingSample<3>::TVolumeLightingSample<3>
                  ((TVolumeLightingSample<3> *)
                   (*(longlong *)&pFVar25->field_0x0 + (longlong)iVar19 * 0xb0),param_4);
      }
      return;
    }
    uVar18 = uVar34;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar18 = uVar27;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar22 = lVar28 * 0x10;
    if ((*(int *)((this->TreeElements).AllocatorInstance.Data + lVar22 + 8) + 1 < 5) ||
       ((param_2->Bounds).Extent.field0_0x0._s_0.X <= this->MinLeafExtent)) {
      uVar34 = 0;
      if ((int)param_1 < (this->TreeElements).ArrayNum) {
        uVar34 = uVar27;
      }
      if ((uVar34 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar25 = (this->TreeElements).AllocatorInstance.Data + lVar22;
      iVar19 = *(int *)&pFVar25[8].field_0x0;
      if (iVar19 == *(int *)(pFVar25 + 0xc)) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10b0,(ForAnyElementType *)pFVar25,(int *)(pFVar25 + 0xc));
      }
      *(int *)&pFVar25[8].field_0x0 = iVar19 + 1;
      TVolumeLightingSample<3>::TVolumeLightingSample<3>
                ((TVolumeLightingSample<3> *)
                 (*(longlong *)&pFVar25->field_0x0 + (longlong)iVar19 * 0xb0),param_4);
      return;
    }
    uVar18 = uVar34;
    if ((int)param_1 < (this->TreeElements).ArrayNum) {
      uVar18 = uVar27;
    }
    if ((uVar18 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) break;
    pTVar23 = (TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)
              ((this->TreeElements).AllocatorInstance.Data + lVar22);
    if (param_5 != pTVar23) {
      pFVar25 = (param_5->AllocatorInstance).Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
      (param_5->AllocatorInstance).Data = (pTVar23->AllocatorInstance).Data;
      (pTVar23->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_5->ArrayNum = pTVar23->ArrayNum;
      param_5->ArrayMax = pTVar23->ArrayMax;
      pTVar23->ArrayNum = 0;
      pTVar23->ArrayMax = 0;
    }
    uVar18 = AllocateEightNodes(this);
    uVar20 = uVar18 - 1 >> 3;
    if (((this->ParentLinks).ArrayNum <= (int)uVar20) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)((this->ParentLinks).AllocatorInstance.Data + (ulonglong)uVar20 * 4) = param_1;
    uVar20 = uVar34;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar20 = uVar27;
    }
    if ((uVar20 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)((this->TreeNodes).AllocatorInstance.Data + lVar28 * 8) = uVar18;
    if ((int)param_1 < (this->TreeNodes).ArrayNum) {
      uVar34 = uVar27;
    }
    if ((uVar34 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar16 = local_res18;
    *(undefined4 *)((this->TreeNodes).AllocatorInstance.Data + lVar28 * 8 + 4) = 0;
    iVar19 = param_5->ArrayNum;
    pTVar24 = (TVolumeLightingSample<3> *)(param_5->AllocatorInstance).Data;
    pTVar26 = pTVar24 + iVar19;
    while( true ) {
      if (param_5->ArrayNum != iVar19) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TVolumeLightingSample<3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      param_2 = local_res18;
      if (pTVar24 == pTVar26) break;
      uVar1 = *(undefined8 *)&(pTVar24->Position).field0_0x0;
      local_118._s_0.X = (double)(float)uVar1;
      local_118._s_0.Y = (double)(float)((ulonglong)uVar1 >> 0x20);
      local_f8 = (double)pTVar24->Radius;
      local_118._s_0.Z = (double)(pTVar24->Position).field0_0x0._s_0.Z;
      local_118._s_0.W = 0.0;
      local_e0 = 0;
      dStack_f0 = local_f8;
      local_e8 = local_f8;
      AddElementInternal(this,param_1,pFVar16,(FBoxCenterAndExtent *)&local_118._s_0,pTVar24,param_5
                        );
      pTVar24 = pTVar24 + 1;
    }
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,0x10,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// AllocateEightNodes @ 1483575d0

uint __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::AllocateEightNodes
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  iVar5 = (this->FreeList).ArrayNum;
  if (iVar5 == 0) {
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,8,&(this->TreeNodes).AllocatorInstance,&(this->TreeNodes).ArrayNum,
                       &(this->TreeNodes).ArrayMax);
    DefaultConstructItems<TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode,int>
              ((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)uVar4 * 8,8);
    iVar5 = (this->ParentLinks).ArrayNum;
    piVar1 = &(this->ParentLinks).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->ParentLinks).AllocatorInstance,piVar1);
    }
    (this->ParentLinks).ArrayNum = iVar5 + 1;
    *(undefined4 *)((this->ParentLinks).AllocatorInstance.Data + (longlong)iVar5 * 4) = 0;
    iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x10,8,8,&(this->TreeElements).AllocatorInstance,
                       &(this->TreeElements).ArrayNum,&(this->TreeElements).ArrayMax);
    pFVar6 = (this->TreeElements).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(undefined8 *)(pFVar6 + 8) = 0;
    *(undefined8 *)(pFVar6 + 0x10) = 0;
    *(undefined8 *)(pFVar6 + 0x18) = 0;
    *(undefined8 *)(pFVar6 + 0x20) = 0;
    *(undefined8 *)(pFVar6 + 0x28) = 0;
    *(undefined8 *)(pFVar6 + 0x30) = 0;
    *(undefined8 *)(pFVar6 + 0x38) = 0;
    *(undefined8 *)(pFVar6 + 0x40) = 0;
    *(undefined8 *)(pFVar6 + 0x48) = 0;
    *(undefined8 *)(pFVar6 + 0x50) = 0;
    *(undefined8 *)(pFVar6 + 0x58) = 0;
    *(undefined8 *)(pFVar6 + 0x60) = 0;
    *(undefined8 *)(pFVar6 + 0x68) = 0;
    *(undefined8 *)(pFVar6 + 0x70) = 0;
    *(undefined8 *)(pFVar6 + 0x78) = 0;
    return uVar4;
  }
  if (iVar5 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  iVar5 = (this->FreeList).ArrayNum;
  iVar7 = iVar5 + -1;
  iVar5 = *(int *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar5 * 4 + -4);
  (this->FreeList).ArrayNum = iVar7;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
  return iVar5 * 8 + 1;
}

// Destroy @ 14836a9f0

void __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::Destroy
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,TAlignedHeapAllocator<8>_>
  *pTVar3;
  TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  piVar1 = &(this->TreeNodes).ArrayMax;
  (this->TreeNodes).ArrayNum = 0;
  if ((this->TreeNodes).ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,1,&(this->TreeNodes).AllocatorInstance,0,piVar1);
  }
  pTVar3 = &this->TreeElements;
  piVar2 = &(this->TreeElements).ArrayMax;
  pTVar4 = (TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_> *)
           (pTVar3->AllocatorInstance).Data;
  iVar5 = (this->TreeElements).ArrayNum;
  if ((this->TreeElements).ArrayMax < 1) {
    DestructItems<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar5);
    (this->TreeElements).ArrayNum = 0;
    if (*piVar2 != 1) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                (0x10,8,1,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,int>(pTVar4,iVar5);
    (this->TreeElements).ArrayNum = 0;
  }
  (this->FreeList).ArrayNum = 0;
  if ((this->FreeList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeList).AllocatorInstance,0,&(this->FreeList).ArrayMax);
  }
  (this->ParentLinks).ArrayNum = 0;
  if ((this->ParentLinks).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ParentLinks).AllocatorInstance,0,&(this->ParentLinks).ArrayMax);
  }
  iVar5 = (this->TreeNodes).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->TreeNodes).AllocatorInstance,piVar1);
  }
  (this->TreeNodes).ArrayNum = iVar5 + 1;
  DefaultConstructItems<TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode,int>
            ((this->TreeNodes).AllocatorInstance.Data + (longlong)iVar5 * 8,1);
  iVar5 = (this->TreeElements).ArrayNum;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->TreeElements).ArrayNum = iVar5 + 1;
  pFVar6 = (pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  return;
}

// GetSizeBytes @ 148388250

ulong64 __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::GetSizeBytes
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulong64 uVar5;
  
  iVar1 = (this->TreeNodes).ArrayMax;
  iVar2 = (this->TreeElements).ArrayMax;
  if ((this->TreeNodes).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return (ulonglong)*(uint *)((this->TreeNodes).AllocatorInstance.Data + 4) * 0xb0 +
         ((longlong)iVar1 + (longlong)iVar2 * 2) * 8;
}

// ShrinkElements @ 1483ac5d0

void __thiscall
TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::ShrinkElements
          (TOctree2<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TreeElements).ArrayNum;
  pFVar3 = (this->TreeElements).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->TreeElements).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<TVolumeLightingSample<3>,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = *(int *)&pFVar3[8].field_0x0;
    if (*(int *)(pFVar3 + 0xc) != iVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,0x10,iVar2,(ForAnyElementType *)pFVar3,iVar2,(int *)(pFVar3 + 0xc));
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

