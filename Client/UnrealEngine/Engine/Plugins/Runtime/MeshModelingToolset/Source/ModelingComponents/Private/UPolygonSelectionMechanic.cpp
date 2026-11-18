// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 23

// StaticClass @ 14cb59280

UClass * __cdecl UPolygonSelectionMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolygonSelectionMechanic",
               &Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton,
               StaticRegisterNativesUPolygonSelectionMechanic,0xb30,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolygonSelectionMechanic>,
               InternalVTableHelperCtorCaller<UPolygonSelectionMechanic>,local_res8,
               UMeshTopologySelectionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton;
}

// UPolygonSelectionMechanic @ 14cb639c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolygonSelectionMechanic * __thiscall
UPolygonSelectionMechanic::UPolygonSelectionMechanic
          (UPolygonSelectionMechanic *this,FVTableHelper *param_1)

{
  UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic
            ((UMeshTopologySelectionMechanic *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  return this;
}

// UPolygonSelectionMechanic @ 14cb63a00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolygonSelectionMechanic * __thiscall
UPolygonSelectionMechanic::UPolygonSelectionMechanic(UPolygonSelectionMechanic *this)

{
  UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic
            ((UMeshTopologySelectionMechanic *)this);
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  return this;
}

// ~UPolygonSelectionMechanic @ 14cb65380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPolygonSelectionMechanic::~UPolygonSelectionMechanic(UPolygonSelectionMechanic *this)

{
  this->_padding_ = (longlong)&_vftable__for__UInteractionMechanic__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  UMeshTopologySelectionMechanic::~UMeshTopologySelectionMechanic
            ((UMeshTopologySelectionMechanic *)this);
  return;
}

// operator() @ 14cb685c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UPolygonSelectionMechanic::ConvertSelectionToBorderVertices'::__l2::<lambda_1>::operator()
          (void *this,FGeometrySelection *param_1)

{
  ulonglong uVar1;
  FGroupTopology *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_248 [32];
  undefined1 local_218;
  undefined1 local_217 [7];
  longlong *local_210;
  uint uStack_208;
  uint uStack_204;
  TBitArray<FDefaultBitArrayAllocator> *local_200;
  undefined4 uStack_1f8;
  uint uStack_1f4;
  uint local_1f0;
  uint uStack_1ec;
  int iStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  undefined8 local_1dc;
  undefined1 local_1d4 [12];
  undefined8 local_1c8;
  longlong *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  uint local_144;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  uint local_bc;
  undefined4 local_b8;
  int local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  uVar13 = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  uVar15 = 0;
  if (*(char *)((longlong)this + 8) == '\0') {
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (uint *)0x0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (ForElementType<FSetElementId>)0x0;
    local_a0 = 0;
    pFVar2 = *(FGroupTopology **)(*(longlong *)this + 0xb28);
    bVar5 = UE::Geometry::GetSelectionBoundaryCorners
                      (pFVar2->Mesh,pFVar2,param_1,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,&local_98);
    if (bVar5) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
                (&param_1->Selection);
      uVar13 = local_c0;
      uStack_204 = 1;
      param_1->ElementType = Vertex;
      param_1->TopologyType = Polygroup;
      uStack_1f4 = uVar15;
      local_1f0 = uVar15;
      if (local_c0 != 0) {
        puVar14 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar14 = local_c8;
        }
        uVar11 = *puVar14;
        local_1f0 = 0;
        uVar15 = 0;
        while (uVar11 == 0) {
          lVar9 = (longlong)(int)uVar15;
          local_1f0 = local_1f0 + 0x20;
          uVar15 = uVar15 + 1;
          uStack_1f4 = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
          goto LAB_14cb68ae1;
          uVar11 = (puVar14 + 1)[lVar9];
        }
        uStack_204 = -uVar11 & uVar11;
        uVar1 = (ulonglong)uStack_204 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_1dc._4_4_ = (int)lVar9;
        uStack_1f4 = (local_1f0 - 1) + local_1dc._4_4_;
        if ((int)local_c0 < (int)uStack_1f4) {
          uStack_1f4 = local_c0;
        }
      }
LAB_14cb68ae1:
      local_210 = (longlong *)local_e8;
      local_200 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      uVar11 = local_c0 & 0xffffffe0;
      iStack_1e8 = local_e8._8_4_ - local_b4;
      uStack_1f8 = 0xffffffff;
      TStack_188.CurrentBitIndex = uStack_1f4;
      TStack_188.UnvisitedBitMask = 0xffffffff;
      TStack_188._padding_ = CONCAT44(uStack_204,uVar15);
      iVar12 = (int)local_c0 >> 5;
      TStack_188._28_4_ = uStack_1f4;
      TStack_188.BaseBitIndex = local_1f0;
      uStack_168 = CONCAT44(uStack_1e4,iStack_1e8);
      bVar8 = (byte)local_c0;
      uStack_208 = uVar15;
      uStack_1ec = uStack_1f4;
      local_190 = local_210;
      TStack_188.Array = local_200;
      if (((int)local_c0 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (uVar13 != local_c0) {
        puVar14 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar14 = local_c8;
        }
        uVar15 = -1 << (bVar8 & 0x1f) & puVar14[iVar12];
        while (uVar15 == 0) {
          lVar9 = (longlong)iVar12;
          uVar11 = uVar11 + 0x20;
          iVar12 = iVar12 + 1;
          uVar13 = local_c0;
          if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14cb68bef;
          uVar15 = (puVar14 + 1)[lVar9];
        }
        uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar13 = (uVar11 - 1) + (int)lVar9;
        if ((int)local_c0 < (int)uVar13) {
          uVar13 = local_c0;
        }
      }
LAB_14cb68bef:
      while( true ) {
        plVar4 = local_190;
        if ((int)local_190[1] - *(int *)((longlong)local_190 + 0x34) != (int)uStack_168) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_217);
        }
        if (((TStack_188.CurrentBitIndex == uVar13) &&
            (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10))) &&
           (plVar4 == (longlong *)local_e8)) break;
        iVar12 = *(int *)(*plVar4 + (longlong)TStack_188.CurrentBitIndex * 0xc);
        iVar7 = UE::Geometry::FGroupTopology::GetCornerVertexID
                          (*(FGroupTopology **)(*(longlong *)this + 0xb28),iVar12);
        local_1c8 = CONCAT44(iVar12,iVar7);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(&param_1->Selection,(ulong64 *)local_1d4,(bool *)&local_1c8);
        TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      this_00 = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_e8;
      goto LAB_14cb68cb2;
    }
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    iVar12 = SUB84(local_e8._8_8_,4);
    local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
    }
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_c0 = 0;
    if (0x80 < local_bc) {
      local_bc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
    }
    pFVar10 = (FScriptContainerElement *)local_e8._0_8_;
    if (local_c8 != (uint *)0x0) {
      FMemory::Free(local_c8);
      pFVar10 = (FScriptContainerElement *)local_e8._0_8_;
    }
  }
  else {
    local_138._0_8_ = (FScriptContainerElement *)0x0;
    local_138._8_8_ = 0;
    local_118 = (uint *)0x0;
    local_110 = 0;
    local_10c = 0x80;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = (ForElementType<FSetElementId>)0x0;
    local_f0 = 0;
    pFVar2 = *(FGroupTopology **)(*(longlong *)this + 0xb28);
    bVar5 = UE::Geometry::GetSelectionBoundaryVertices
                      (pFVar2->Mesh,pFVar2,param_1,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,&local_98)
    ;
    if (bVar5) {
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Reset
                (&param_1->Selection);
      uVar11 = local_110;
      uStack_204 = 1;
      param_1->ElementType = Vertex;
      param_1->TopologyType = Triangle;
      uStack_1f4 = uVar15;
      if (local_110 != 0) {
        puVar14 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar14 = local_118;
        }
        uVar16 = *puVar14;
        uVar15 = 0;
        uVar13 = 0;
        while (uVar16 == 0) {
          lVar9 = (longlong)(int)uVar13;
          uVar15 = uVar15 + 0x20;
          uVar13 = uVar13 + 1;
          uStack_1f4 = local_110;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar13)
          goto LAB_14cb687b1;
          uVar16 = (puVar14 + 1)[lVar9];
        }
        uStack_204 = -uVar16 & uVar16;
        uVar1 = (ulonglong)uStack_204 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_1e0 = (int)lVar9;
        uStack_1f4 = (uVar15 - 1) + local_1e0;
        if ((int)local_110 < (int)uStack_1f4) {
          uStack_1f4 = local_110;
        }
      }
LAB_14cb687b1:
      local_210 = (longlong *)local_138;
      uStack_1ec = local_144;
      local_200 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      iStack_1e8 = local_138._8_4_ - local_104;
      uVar16 = local_110 & 0xffffffe0;
      uStack_1f8 = 0xffffffff;
      TStack_1b8.CurrentBitIndex = uStack_1f4;
      TStack_1b8.UnvisitedBitMask = 0xffffffff;
      TStack_1b8._padding_ = CONCAT44(uStack_204,uVar13);
      iVar12 = (int)local_110 >> 5;
      TStack_1b8._28_4_ = local_144;
      TStack_1b8.BaseBitIndex = uVar15;
      uStack_198 = CONCAT44(uStack_1e4,iStack_1e8);
      bVar8 = (byte)local_110;
      uStack_208 = uVar13;
      local_1f0 = uVar15;
      local_1c0 = local_210;
      TStack_1b8.Array = local_200;
      if (((int)local_110 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (uVar11 != local_110) {
        puVar14 = (uint *)(local_138 + 0x10);
        if (local_118 != (uint *)0x0) {
          puVar14 = local_118;
        }
        uVar15 = -1 << (bVar8 & 0x1f) & puVar14[iVar12];
        while (uVar15 == 0) {
          lVar9 = (longlong)iVar12;
          uVar16 = uVar16 + 0x20;
          iVar12 = iVar12 + 1;
          uVar11 = local_110;
          if ((int)((local_110 - 1) + ((int)(local_110 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14cb688c0;
          uVar15 = (puVar14 + 1)[lVar9];
        }
        uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar11 = (uVar16 - 1) + (int)lVar9;
        if ((int)local_110 < (int)uVar11) {
          uVar11 = local_110;
        }
      }
LAB_14cb688c0:
      while( true ) {
        plVar4 = local_1c0;
        if ((int)local_1c0[1] - *(int *)((longlong)local_1c0 + 0x34) != (int)uStack_198) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_218);
        }
        if (((TStack_1b8.CurrentBitIndex == uVar11) &&
            (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
           (plVar4 == (longlong *)local_138)) break;
        local_1d4._4_8_ = ZEXT48(*(uint *)(*plVar4 + (longlong)TStack_1b8.CurrentBitIndex * 0xc));
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(&param_1->Selection,&local_1dc,(bool *)(local_1d4 + 4));
        TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
      }
      local_f0 = 0;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8);
      }
      this_00 = (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_138;
LAB_14cb68cb2:
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      bVar5 = true;
      goto LAB_14cb68cb9;
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    iVar12 = SUB84(local_138._8_8_,4);
    local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
    if (iVar12 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
    }
    local_108 = 0xffffffff;
    local_104 = 0;
    local_110 = 0;
    if (0x80 < local_10c) {
      local_10c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
    }
    pFVar10 = (FScriptContainerElement *)local_138._0_8_;
    if (local_118 != (uint *)0x0) {
      FMemory::Free(local_118);
      pFVar10 = (FScriptContainerElement *)local_138._0_8_;
    }
  }
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  bVar5 = false;
LAB_14cb68cb9:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return bVar5;
}

// operator() @ 14cb695a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>::operator()
          (void *this,FGeometrySelection *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8;
  undefined1 local_a7 [7];
  code *local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined1 local_78 [8];
  undefined1 local_70 [32];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_78._0_4_ = param_1->ElementType;
  local_78._4_4_ = param_1->TopologyType;
  local_98 = &local_a8;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<``UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,bool,UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID>
             ::Call;
  local_88 = local_a7;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<``UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
             ::Call;
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_70._8_8_ = 0;
  local_50 = (void *)0x0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  bVar3 = UE::Geometry::MakeSelectAllConnectedSelection
                    ((*(FGroupTopology **)(*(longlong *)this + 0xb28))->Mesh,
                     *(FGroupTopology **)(*(longlong *)this + 0xb28),param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> *)&local_90,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID,UE::Geometry::FGeoSelectionID)>
                      *)&local_a0,(FGeometrySelection *)local_78);
  if (bVar3) {
    param_1->ElementType = local_78._0_4_;
    param_1->TopologyType = local_78._4_4_;
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::operator=
              (&param_1->Selection,
               (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               local_70);
  }
  local_28 = 0;
  if (local_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30);
  }
  iVar1 = SUB84(local_70._8_8_,4);
  local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
  }
  uVar2 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  return bVar3;
}

// operator() @ 14cb69720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPolygonSelectionMechanic::GrowSelection'::__l2::<lambda_1>::operator()
          (void *this,FGeometrySelection *param_1)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  code *local_90;
  undefined1 *local_88;
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_78._0_4_ = param_1->ElementType;
  local_78._4_4_ = param_1->TopologyType;
  local_88 = local_98;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<``UPolygonSelectionMechanic::GrowSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
             ::Call;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  bVar3 = UE::Geometry::MakeBoundaryConnectedSelection
                    ((*(FGroupTopology **)(*(longlong *)this + 0xb28))->Mesh,
                     *(FGroupTopology **)(*(longlong *)this + 0xb28),param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> *)&local_90,
                     (FGeometrySelection *)local_78);
  if (bVar3) {
    bVar3 = UE::Geometry::CombineSelectionInPlace(param_1,(FGeometrySelection *)local_78,Add);
    if (bVar3) {
      bVar3 = true;
      goto LAB_14cb697cb;
    }
  }
  bVar3 = false;
LAB_14cb697cb:
  local_28 = 0;
  if (local_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30);
  }
  uVar1 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar2 = local_60.MaxBits;
  uStack_40 = 0xffffffff;
  local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return bVar3;
}

// operator() @ 14cb6adb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UPolygonSelectionMechanic::ShrinkSelection'::__l2::<lambda_1>::operator()
          (void *this,FGeometrySelection *param_1)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  code *local_90;
  undefined1 *local_88;
  undefined1 local_78 [8];
  ForAnyElementType local_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> local_60;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_78._0_4_ = param_1->ElementType;
  local_78._4_4_ = param_1->TopologyType;
  local_88 = local_98;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<``UPolygonSelectionMechanic::ShrinkSelection'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Geometry::FGeoSelectionID>
             ::Call;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  bVar3 = UE::Geometry::MakeBoundaryConnectedSelection
                    ((*(FGroupTopology **)(*(longlong *)this + 0xb28))->Mesh,
                     *(FGroupTopology **)(*(longlong *)this + 0xb28),param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::FGeoSelectionID)> *)&local_90,
                     (FGeometrySelection *)local_78);
  if (bVar3) {
    bVar3 = UE::Geometry::CombineSelectionInPlace(param_1,(FGeometrySelection *)local_78,Subtract);
    if (bVar3) {
      bVar3 = true;
      goto LAB_14cb6ae5b;
    }
  }
  bVar3 = false;
LAB_14cb6ae5b:
  local_28 = 0;
  if (local_30 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30);
  }
  uVar1 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar2 = local_60.MaxBits;
  uStack_40 = 0xffffffff;
  local_60._24_8_ = (ulonglong)(uint)local_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_60.NumBits = 0;
    local_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_60,0);
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return bVar3;
}

// ConvertSelectionToBorderVertices @ 14cb7f640

void __thiscall
UPolygonSelectionMechanic::ConvertSelectionToBorderVertices
          (UPolygonSelectionMechanic *this,bool param_1)

{
  FText *pFVar1;
  UPolygonSelectionMechanic *local_38;
  undefined1 local_30;
  code *local_28;
  UPolygonSelectionMechanic **local_20;
  FText local_18;
  
  local_20 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPolygonSelectionMechanic::ConvertSelectionToBorderVertices'::__l2::<lambda_1>,bool,UE::Geometry::FGeometrySelection_&>
             ::Call;
  local_38 = this;
  local_30 = param_1;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UPolygonSelectionMechanic",L"BorderSelectionChange",
                      L"Select Border");
  ExecuteActionThroughGeometrySelection
            (this,param_1,pFVar1,
             (TFunctionRef<bool___cdecl(UE::Geometry::FGeometrySelection_&)> *)&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// ExecuteActionThroughGeometrySelection @ 14cb89aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPolygonSelectionMechanic::ExecuteActionThroughGeometrySelection
          (UPolygonSelectionMechanic *this,bool param_1,FText *param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::FGeometrySelection_&)> *param_3)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  UObject *pUVar4;
  longlong lVar5;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  undefined8 local_88;
  TBitArray<FDefaultBitArrayAllocator> local_80;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((this->Topology != (FGroupTopology *)0x0) && (this->Topology->Mesh != (FDynamicMesh3 *)0x0)) {
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    local_80.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_80._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_60 = _UNK_150631d98;
    local_50 = (ForElementType<FSetElementId>)0x0;
    local_48 = 0;
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      local_98._0_4_ = Face;
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        local_98._0_4_ = Edge;
      }
    }
    else {
      local_98._0_4_ = Vertex;
    }
    local_98._4_4_ = (param_1 ^ 1) + Triangle;
    if (param_1) {
      GetSelection_AsTriangleTopology(this,(FGeometrySelection *)local_98,(FCompactMaps *)0x0);
    }
    else {
      GetSelection_AsGroupTopology(this,(FGeometrySelection *)local_98,(FCompactMaps *)0x0);
    }
    cVar3 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
    if (cVar3 != '\0') {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
      (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28,param_2);
      UMeshTopologySelectionMechanic::BeginChange((UMeshTopologySelectionMechanic *)this);
      if (param_1) {
        SetSelection_AsTriangleTopology(this,(FGeometrySelection *)local_98);
      }
      else {
        SetSelection_AsGroupTopology(this,(FGeometrySelection *)local_98);
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->_padding_);
      UMeshTopologySelectionMechanic::EndChangeAndEmitIfModified
                ((UMeshTopologySelectionMechanic *)this);
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
      (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
      local_48 = 0;
      if (local_50 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50);
      }
      uVar1 = local_88 >> 0x20;
      local_88 = local_88 & 0xffffffff00000000;
      if ((int)uVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_90,0,(int *)((longlong)&local_88 + 4));
      }
      iVar2 = local_80.MaxBits;
      uStack_60 = 0xffffffff;
      local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
      if (0x80 < (uint)iVar2) {
        local_80.NumBits = 0;
        local_80.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
      }
      if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      return true;
    }
    local_48 = 0;
    if (local_50 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50);
    }
    uVar1 = local_88 >> 0x20;
    local_88 = local_88 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_90,0,(int *)((longlong)&local_88 + 4));
    }
    iVar2 = local_80.MaxBits;
    uStack_60 = 0xffffffff;
    local_80._24_8_ = (ulonglong)(uint)local_80.MaxBits << 0x20;
    if (0x80 < (uint)iVar2) {
      local_80.NumBits = 0;
      local_80.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80,0);
    }
    if (local_80.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
  }
  return false;
}

// FloodSelection @ 14cb91240

void __thiscall UPolygonSelectionMechanic::FloodSelection(UPolygonSelectionMechanic *this)

{
  FText *pFVar1;
  UPolygonSelectionMechanic *local_res8 [4];
  code *local_28;
  UPolygonSelectionMechanic **local_20;
  FText local_18;
  
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPolygonSelectionMechanic::FloodSelection'::__l2::<lambda_1>,bool,UE::Geometry::FGeometrySelection_&>
             ::Call;
  local_res8[0] = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UPolygonSelectionMechanic",L"FloodSelectionChange",
                      L"Flood Selection");
  ExecuteActionThroughGeometrySelection
            (this,true,pFVar1,
             (TFunctionRef<bool___cdecl(UE::Geometry::FGeometrySelection_&)> *)&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// GetPrivateStaticClass @ 14cb99340

UClass * __cdecl UPolygonSelectionMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"PolygonSelectionMechanic",
               &Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton,
               StaticRegisterNativesUPolygonSelectionMechanic,0xb30,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolygonSelectionMechanic>,
               InternalVTableHelperCtorCaller<UPolygonSelectionMechanic>,local_res8,
               UMeshTopologySelectionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolygonSelectionMechanic.InnerSingleton;
}

// GetSelection_AsGroupTopology @ 14cb9d870

void __thiscall
UPolygonSelectionMechanic::GetSelection_AsGroupTopology
          (UPolygonSelectionMechanic *this,FGeometrySelection *param_1,FCompactMaps *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  EGeometryElementType EVar3;
  int iVar4;
  FDynamicMesh3 *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  FGroup *pFVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 local_res20 [8];
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  longlong *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  longlong *local_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined4 local_1b0;
  int local_1a8;
  undefined8 local_1a4;
  int local_19c;
  undefined8 local_198;
  int local_190;
  undefined8 local_18c;
  int local_184;
  ulong64 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined4 local_7c;
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (param_1->TopologyType == Polygroup) {
    EVar3 = param_1->ElementType;
    if (EVar3 == Vertex) {
      iStack_1e8 = 0;
      plVar16 = &this->_padding_;
      iVar4 = (int)this->_padding_;
      plVar1 = &this->_padding_;
      uStack_1e4 = 1;
      local_1d0 = 0;
      iStack_1d4 = 0;
      if (iVar4 != 0) {
        plVar17 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar17 = plVar1;
        }
        uVar13 = (uint)*plVar17;
        while (uVar13 == 0) {
          lVar12 = (longlong)iStack_1e8;
          local_1d0 = local_1d0 + 0x20;
          iStack_1e8 = iStack_1e8 + 1;
          iStack_1d4 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
          goto LAB_14cb9d93d;
          uVar13 = *(uint *)((longlong)plVar17 + lVar12 * 4 + 4);
        }
        uStack_1e4 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_1a8 = (int)lVar12;
        iStack_1d4 = local_1d0 + -1 + local_1a8;
        if (iVar4 < iStack_1d4) {
          iStack_1d4 = iVar4;
        }
      }
LAB_14cb9d93d:
      uVar13 = (uint)this->_padding_;
      uVar14 = uVar13 & 0xffffffe0;
      iStack_1c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
      uStack_1d8 = 0xffffffff;
      TStack_150._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
      TStack_150.CurrentBitIndex = iStack_1d4;
      TStack_150.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar13 >> 5;
      TStack_150._28_4_ = local_7c;
      TStack_150.BaseBitIndex = local_1d0;
      uStack_130 = CONCAT44(uStack_1c4,iStack_1c8);
      local_1f0 = plVar16;
      local_1e0 = plVar1;
      local_158 = plVar16;
      TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
      if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = (uint)this->_padding_;
      if (uVar13 != uVar9) {
        plVar17 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar17 = plVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)plVar17 + (longlong)iVar15 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar15;
          uVar14 = uVar14 + 0x20;
          iVar15 = iVar15 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14cb9da60;
          uVar13 = *(uint *)((longlong)plVar17 + lVar12 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = (uVar14 - 1) + (int)lVar12;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14cb9da60:
      while( true ) {
        plVar17 = local_158;
        if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c0);
        }
        if (((TStack_150.CurrentBitIndex == uVar13) &&
            (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
           (plVar17 == plVar16)) break;
        iVar4 = *(int *)(*plVar17 + (longlong)TStack_150.CurrentBitIndex * 0xc);
        iVar15 = UE::Geometry::FGroupTopology::GetCornerVertexID(this->Topology,iVar4);
        if (param_2 != (FCompactMaps *)0x0) {
          iVar15 = UE::Geometry::FCompactMaps::GetVertexMapping(param_2,iVar15);
        }
        local_178 = CONCAT44(iVar4,iVar15);
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(&param_1->Selection,&local_1a4,(bool *)&local_178);
        TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
      }
    }
    else if (EVar3 == Edge) {
      local_1f0 = &this->_padding_;
      iVar4 = (int)this->_padding_;
      plVar1 = &this->_padding_;
      iStack_1e8 = 0;
      iStack_1d4 = iStack_1e8;
      local_1d0 = iStack_1e8;
      local_1e0 = plVar1;
      local_1b8 = local_1f0;
      if (param_2 == (FCompactMaps *)0x0) {
        uStack_1e4 = 1;
        if (iVar4 != 0) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = plVar1;
          }
          uVar13 = (uint)*plVar16;
          local_1d0 = 0;
          iStack_1e8 = 0;
          while (uVar13 == 0) {
            lVar12 = (longlong)iStack_1e8;
            local_1d0 = local_1d0 + 0x20;
            iStack_1e8 = iStack_1e8 + 1;
            iStack_1d4 = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
            goto LAB_14cb9db8e;
            uVar13 = *(uint *)((longlong)plVar16 + lVar12 * 4 + 4);
          }
          uStack_1e4 = -uVar13 & uVar13;
          uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_1a4._4_4_ = (int)lVar12;
          iStack_1d4 = local_1d0 + -1 + local_1a4._4_4_;
          if (iVar4 < iStack_1d4) {
            iStack_1d4 = iVar4;
          }
        }
LAB_14cb9db8e:
        uVar13 = (uint)this->_padding_;
        iStack_1c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
        uVar14 = uVar13 & 0xffffffe0;
        uStack_1d8 = 0xffffffff;
        TStack_120._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
        TStack_120.CurrentBitIndex = iStack_1d4;
        TStack_120.UnvisitedBitMask = 0xffffffff;
        iVar15 = (int)uVar13 >> 5;
        TStack_120._28_4_ = local_5c;
        TStack_120.BaseBitIndex = local_1d0;
        uStack_100 = CONCAT44(uStack_1c4,iStack_1c8);
        local_128 = local_1f0;
        TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
        if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar16 = local_1b8;
        uVar9 = (uint)this->_padding_;
        if (uVar13 != uVar9) {
          plVar17 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar17 = plVar1;
          }
          uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)plVar17 + (longlong)iVar15 * 4)
          ;
          while (uVar13 == 0) {
            lVar12 = (longlong)iVar15;
            uVar14 = uVar14 + 0x20;
            iVar15 = iVar15 + 1;
            uVar13 = uVar9;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_14cb9dcb0;
            uVar13 = *(uint *)((longlong)plVar17 + lVar12 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_19c = (int)lVar12;
          uVar13 = (uVar14 - 1) + local_19c;
          if ((int)uVar9 < (int)uVar13) {
            uVar13 = uVar9;
          }
        }
LAB_14cb9dcb0:
        while( true ) {
          plVar17 = local_128;
          if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_120.CurrentBitIndex == uVar13) &&
              (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
             (plVar17 == plVar16)) break;
          iVar4 = *(int *)(*plVar17 + (longlong)TStack_120.CurrentBitIndex * 0xc);
          pTVar10 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges(this->Topology,iVar4);
          pFVar5 = this->Topology->Mesh;
          if ((pTVar10->ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = *(uint *)(pTVar10->AllocatorInstance).Data;
          uVar14 = *(uint *)(*(longlong *)
                              ((pFVar5->Edges).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar9 >> 9) * 8) + 8 + (ulonglong)(uVar9 & 0x1ff) * 0x10);
          lVar12 = *(longlong *)
                    ((pFVar5->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar14 >> 9) * 8);
          local_1b8 = *(longlong **)(lVar12 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
          local_1b0 = *(undefined4 *)(lVar12 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
          uVar14 = uVar14 * 4;
          if ((uint)local_1b8 != uVar9) {
            uVar14 = uVar14 | ((uint)((ulonglong)local_1b8 >> 0x20) != uVar9) + 1;
          }
          local_170 = CONCAT44(iVar4,uVar14 >> 2 | uVar14 << 0x1e);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>(&param_1->Selection,&local_198,(bool *)&local_170);
          TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
        }
      }
      else {
        uStack_1e4 = 1;
        if (iVar4 != 0) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = plVar1;
          }
          uVar13 = (uint)*plVar16;
          local_1d0 = 0;
          iStack_1e8 = 0;
          while (uVar13 == 0) {
            lVar12 = (longlong)iStack_1e8;
            local_1d0 = local_1d0 + 0x20;
            iStack_1e8 = iStack_1e8 + 1;
            iStack_1d4 = iVar4;
            if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
            goto LAB_14cb9de7e;
            uVar13 = *(uint *)((longlong)plVar16 + lVar12 * 4 + 4);
          }
          uStack_1e4 = -uVar13 & uVar13;
          uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_198._4_4_ = (int)lVar12;
          iStack_1d4 = local_198._4_4_ + -1 + local_1d0;
          if (iVar4 < iStack_1d4) {
            iStack_1d4 = iVar4;
          }
        }
LAB_14cb9de7e:
        uVar13 = (uint)this->_padding_;
        iStack_1c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
        uVar14 = uVar13 & 0xffffffe0;
        uStack_1d8 = 0xffffffff;
        TStack_f0._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
        TStack_f0.CurrentBitIndex = iStack_1d4;
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        iVar15 = (int)uVar13 >> 5;
        TStack_f0._28_4_ = local_3c;
        TStack_f0.BaseBitIndex = local_1d0;
        uStack_d0 = CONCAT44(uStack_1c4,iStack_1c8);
        local_f8 = local_1f0;
        TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
        if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = (uint)this->_padding_;
        if (uVar13 != uVar9) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = plVar1;
          }
          uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar15 * 4)
          ;
          while (uVar13 == 0) {
            lVar12 = (longlong)iVar15;
            uVar14 = uVar14 + 0x20;
            iVar15 = iVar15 + 1;
            uVar13 = uVar9;
            if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
            goto LAB_14cb9dfa0;
            uVar13 = *(uint *)((longlong)plVar16 + lVar12 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_190 = (int)lVar12;
          uVar13 = local_190 + -1 + uVar14;
          if ((int)uVar9 < (int)uVar13) {
            uVar13 = uVar9;
          }
        }
LAB_14cb9dfa0:
        while( true ) {
          plVar16 = local_f8;
          if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
            local_1f8 = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
          }
          if (((TStack_f0.CurrentBitIndex == uVar13) &&
              (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
             (plVar16 == &this->_padding_)) break;
          iVar4 = *(int *)(*plVar16 + (longlong)TStack_f0.CurrentBitIndex * 0xc);
          pTVar10 = UE::Geometry::FGroupTopology::GetGroupEdgeVertices(this->Topology,iVar4);
          if (1 < pTVar10->ArrayNum) {
            iVar15 = UE::Geometry::FCompactMaps::GetVertexMapping
                               (param_2,*(int *)(pTVar10->AllocatorInstance).Data);
            if ((pTVar10->ArrayNum < 2) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = UE::Geometry::FCompactMaps::GetVertexMapping
                              (param_2,*(int *)((pTVar10->AllocatorInstance).Data + 4));
            uVar14 = UE::Geometry::FDynamicMesh3::FindEdge(this->Topology->Mesh,iVar15,iVar8);
            if (uVar14 != 0xffffffff) {
              pFVar5 = this->Topology->Mesh;
              uVar9 = *(uint *)(*(longlong *)
                                 ((pFVar5->Edges).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar14 >> 9) * 8) + 8 +
                               (ulonglong)(uVar14 & 0x1ff) * 0x10);
              lVar12 = *(longlong *)
                        ((pFVar5->TriangleEdges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar9 >> 9) * 8);
              local_1b8 = *(longlong **)(lVar12 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
              local_1b0 = *(undefined4 *)(lVar12 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
              uVar9 = uVar9 * 4;
              if ((uint)local_1b8 != uVar14) {
                uVar9 = uVar9 | ((uint)((ulonglong)local_1b8 >> 0x20) != uVar14) + 1;
              }
              local_168 = CONCAT44(iVar4,uVar9 >> 2 | uVar9 << 0x1e);
              TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
              Emplace<unsigned___int64>(&param_1->Selection,&local_18c,(bool *)&local_168);
            }
          }
          TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
        }
      }
    }
    else if (EVar3 == Face) {
      plVar1 = &this->_padding_;
      iVar4 = (int)this->_padding_;
      iStack_1e8 = 0;
      uStack_1e4 = 1;
      iStack_1d4 = iStack_1e8;
      local_1d0 = iStack_1e8;
      if (iVar4 != 0) {
        plVar16 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar16 = plVar1;
        }
        uVar13 = (uint)*plVar16;
        local_1d0 = 0;
        iStack_1e8 = 0;
        while (uVar13 == 0) {
          lVar12 = (longlong)iStack_1e8;
          local_1d0 = local_1d0 + 0x20;
          iStack_1e8 = iStack_1e8 + 1;
          iStack_1d4 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
          goto LAB_14cb9e1de;
          uVar13 = *(uint *)((longlong)plVar16 + lVar12 * 4 + 4);
        }
        uStack_1e4 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_18c._4_4_ = (int)lVar12;
        iStack_1d4 = local_1d0 + -1 + local_18c._4_4_;
        if (iVar4 < iStack_1d4) {
          iStack_1d4 = iVar4;
        }
      }
LAB_14cb9e1de:
      uVar13 = (uint)this->_padding_;
      plVar16 = &this->_padding_;
      iStack_1c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
      uVar14 = uVar13 & 0xffffffe0;
      uStack_1d8 = 0xffffffff;
      TStack_c0._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
      TStack_c0.CurrentBitIndex = iStack_1d4;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar13 >> 5;
      TStack_c0._28_4_ = iStack_1d4;
      TStack_c0.BaseBitIndex = local_1d0;
      uStack_a0 = CONCAT44(uStack_1c4,iStack_1c8);
      local_1f0 = plVar16;
      local_1e0 = plVar1;
      iStack_1cc = iStack_1d4;
      local_c8 = plVar16;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
      if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = (uint)this->_padding_;
      if (uVar13 != uVar9) {
        plVar17 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar17 = plVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)plVar17 + (longlong)iVar15 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar15;
          uVar14 = uVar14 + 0x20;
          iVar15 = iVar15 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14cb9e300;
          uVar13 = *(uint *)((longlong)plVar17 + lVar12 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_184 = (int)lVar12;
        uVar13 = local_184 + -1 + uVar14;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14cb9e300:
      while( true ) {
        plVar17 = local_c8;
        if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
          local_1f7[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f7);
        }
        if (((TStack_c0.CurrentBitIndex == uVar13) &&
            (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
           (plVar17 == plVar16)) break;
        pFVar11 = UE::Geometry::FGroupTopology::FindGroupByID
                            (this->Topology,
                             *(int *)(*plVar17 + (longlong)TStack_c0.CurrentBitIndex * 0xc));
        if (pFVar11 != (FGroup *)0x0) {
          iVar4 = pFVar11->GroupID;
          if (((pFVar11->Triangles).ArrayNum < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_160 = CONCAT44(iVar4,*(undefined4 *)(pFVar11->Triangles).AllocatorInstance.Data);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>(&param_1->Selection,&local_180,(bool *)&local_160);
        }
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
    }
  }
  return;
}

// GetSelection_AsTriangleTopology @ 14cb9e420

void __thiscall
UPolygonSelectionMechanic::GetSelection_AsTriangleTopology
          (UPolygonSelectionMechanic *this,FGeometrySelection *param_1,FCompactMaps *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  EGeometryElementType EVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FGroup *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 local_res20 [8];
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  longlong *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  longlong *local_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined4 local_1b0;
  int local_1a8;
  undefined8 local_1a4;
  int local_19c;
  undefined8 local_198;
  int local_190;
  undefined8 local_18c;
  int local_184;
  ulong64 local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  longlong *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined4 local_7c;
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (param_1->TopologyType == Triangle) {
    EVar3 = param_1->ElementType;
    if (EVar3 == Vertex) {
      iStack_1e8 = 0;
      plVar15 = &this->_padding_;
      iVar7 = (int)this->_padding_;
      plVar1 = &this->_padding_;
      uStack_1e4 = 1;
      local_1d0 = 0;
      iStack_1d4 = 0;
      if (iVar7 != 0) {
        plVar16 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar16 = plVar1;
        }
        uVar12 = (uint)*plVar16;
        while (uVar12 == 0) {
          lVar11 = (longlong)iStack_1e8;
          local_1d0 = local_1d0 + 0x20;
          iStack_1e8 = iStack_1e8 + 1;
          iStack_1d4 = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
          goto LAB_14cb9e4ed;
          uVar12 = *(uint *)((longlong)plVar16 + lVar11 * 4 + 4);
        }
        uStack_1e4 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_1a8 = (int)lVar11;
        iStack_1d4 = local_1d0 + -1 + local_1a8;
        if (iVar7 < iStack_1d4) {
          iStack_1d4 = iVar7;
        }
      }
LAB_14cb9e4ed:
      uVar12 = (uint)this->_padding_;
      uVar13 = uVar12 & 0xffffffe0;
      iStack_1c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
      uStack_1d8 = 0xffffffff;
      TStack_150._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
      TStack_150.CurrentBitIndex = iStack_1d4;
      TStack_150.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar12 >> 5;
      TStack_150._28_4_ = local_7c;
      TStack_150.BaseBitIndex = local_1d0;
      uStack_130 = CONCAT44(uStack_1c4,iStack_1c8);
      local_1f0 = plVar15;
      local_1e0 = plVar1;
      local_158 = plVar15;
      TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
      if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = (uint)this->_padding_;
      if (uVar12 != uVar8) {
        plVar16 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar16 = plVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar14 * 4);
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar14;
          uVar13 = uVar13 + 0x20;
          iVar14 = iVar14 + 1;
          uVar12 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14cb9e610;
          uVar12 = *(uint *)((longlong)plVar16 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar12 = (uVar13 - 1) + (int)lVar11;
        if ((int)uVar8 < (int)uVar12) {
          uVar12 = uVar8;
        }
      }
LAB_14cb9e610:
      while( true ) {
        plVar16 = local_158;
        if ((int)local_158[1] - *(int *)((longlong)local_158 + 0x34) != (int)uStack_130) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1c0);
        }
        if (((TStack_150.CurrentBitIndex == uVar12) &&
            (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
           (plVar16 == plVar15)) break;
        uVar13 = UE::Geometry::FGroupTopology::GetCornerVertexID
                           (this->Topology,
                            *(int *)(*plVar16 + (longlong)TStack_150.CurrentBitIndex * 0xc));
        if (param_2 != (FCompactMaps *)0x0) {
          uVar13 = UE::Geometry::FCompactMaps::GetVertexMapping(param_2,uVar13);
        }
        local_178 = (ulonglong)uVar13;
        TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
        Emplace<unsigned___int64>(&param_1->Selection,&local_1a4,(bool *)&local_178);
        TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
      }
    }
    else if (EVar3 == Edge) {
      local_1f0 = &this->_padding_;
      iVar7 = (int)this->_padding_;
      plVar1 = &this->_padding_;
      iStack_1e8 = 0;
      iStack_1d4 = iStack_1e8;
      local_1d0 = iStack_1e8;
      local_1e0 = plVar1;
      local_1b8 = local_1f0;
      if (param_2 == (FCompactMaps *)0x0) {
        uStack_1e4 = 1;
        if (iVar7 != 0) {
          plVar15 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar15 = plVar1;
          }
          uVar12 = (uint)*plVar15;
          local_1d0 = 0;
          iStack_1e8 = 0;
          while (uVar12 == 0) {
            lVar11 = (longlong)iStack_1e8;
            local_1d0 = local_1d0 + 0x20;
            iStack_1e8 = iStack_1e8 + 1;
            iStack_1d4 = iVar7;
            if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
            goto LAB_14cb9e73e;
            uVar12 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
          }
          uStack_1e4 = -uVar12 & uVar12;
          uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_1a4._4_4_ = (int)lVar11;
          iStack_1d4 = local_1d0 + -1 + local_1a4._4_4_;
          if (iVar7 < iStack_1d4) {
            iStack_1d4 = iVar7;
          }
        }
LAB_14cb9e73e:
        uVar12 = (uint)this->_padding_;
        iStack_1c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
        uVar13 = uVar12 & 0xffffffe0;
        uStack_1d8 = 0xffffffff;
        TStack_120._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
        TStack_120.CurrentBitIndex = iStack_1d4;
        TStack_120.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar12 >> 5;
        TStack_120._28_4_ = local_5c;
        TStack_120.BaseBitIndex = local_1d0;
        uStack_100 = CONCAT44(uStack_1c4,iStack_1c8);
        local_128 = local_1f0;
        TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
        if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar15 = local_1b8;
        uVar8 = (uint)this->_padding_;
        if (uVar12 != uVar8) {
          plVar16 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar16 = plVar1;
          }
          uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar14 * 4)
          ;
          while (uVar12 == 0) {
            lVar11 = (longlong)iVar14;
            uVar13 = uVar13 + 0x20;
            iVar14 = iVar14 + 1;
            uVar12 = uVar8;
            if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_14cb9e860;
            uVar12 = *(uint *)((longlong)plVar16 + lVar11 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_19c = (int)lVar11;
          uVar12 = (uVar13 - 1) + local_19c;
          if ((int)uVar8 < (int)uVar12) {
            uVar12 = uVar8;
          }
        }
LAB_14cb9e860:
        while( true ) {
          plVar16 = local_128;
          if ((int)local_128[1] - *(int *)((longlong)local_128 + 0x34) != (int)uStack_100) {
            local_res20[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (((TStack_120.CurrentBitIndex == uVar12) &&
              (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
             (plVar16 == plVar15)) break;
          pTVar9 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges
                             (this->Topology,
                              *(int *)(*plVar16 + (longlong)TStack_120.CurrentBitIndex * 0xc));
          pFVar4 = this->Topology->Mesh;
          if ((pTVar9->ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = *(uint *)(pTVar9->AllocatorInstance).Data;
          uVar13 = *(uint *)(*(longlong *)
                              ((pFVar4->Edges).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar8 >> 9) * 8) + 8 + (ulonglong)(uVar8 & 0x1ff) * 0x10);
          lVar11 = *(longlong *)
                    ((pFVar4->TriangleEdges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar13 >> 9) * 8);
          local_1b8 = *(longlong **)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
          local_1b0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
          uVar13 = uVar13 * 4;
          if ((uint)local_1b8 != uVar8) {
            uVar13 = uVar13 | ((uint)((ulonglong)local_1b8 >> 0x20) != uVar8) + 1;
          }
          local_170 = (ulonglong)(uVar13 >> 2 | uVar13 << 0x1e);
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>(&param_1->Selection,&local_198,(bool *)&local_170);
          TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
        }
      }
      else {
        uStack_1e4 = 1;
        if (iVar7 != 0) {
          plVar15 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar15 = plVar1;
          }
          uVar12 = (uint)*plVar15;
          local_1d0 = 0;
          iStack_1e8 = 0;
          while (uVar12 == 0) {
            lVar11 = (longlong)iStack_1e8;
            local_1d0 = local_1d0 + 0x20;
            iStack_1e8 = iStack_1e8 + 1;
            iStack_1d4 = iVar7;
            if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
            goto LAB_14cb9ea1f;
            uVar12 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
          }
          uStack_1e4 = -uVar12 & uVar12;
          uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_198._4_4_ = (int)lVar11;
          iStack_1d4 = local_198._4_4_ + -1 + local_1d0;
          if (iVar7 < iStack_1d4) {
            iStack_1d4 = iVar7;
          }
        }
LAB_14cb9ea1f:
        uVar12 = (uint)this->_padding_;
        iStack_1c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
        uVar13 = uVar12 & 0xffffffe0;
        uStack_1d8 = 0xffffffff;
        TStack_f0._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
        TStack_f0.CurrentBitIndex = iStack_1d4;
        TStack_f0.UnvisitedBitMask = 0xffffffff;
        iVar14 = (int)uVar12 >> 5;
        TStack_f0._28_4_ = local_3c;
        TStack_f0.BaseBitIndex = local_1d0;
        uStack_d0 = CONCAT44(uStack_1c4,iStack_1c8);
        local_f8 = local_1f0;
        TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
        if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = (uint)this->_padding_;
        if (uVar12 != uVar8) {
          plVar15 = (longlong *)this->_padding_;
          if ((longlong *)this->_padding_ == (longlong *)0x0) {
            plVar15 = plVar1;
          }
          uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar15 + (longlong)iVar14 * 4)
          ;
          while (uVar12 == 0) {
            lVar11 = (longlong)iVar14;
            uVar13 = uVar13 + 0x20;
            iVar14 = iVar14 + 1;
            uVar12 = uVar8;
            if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_14cb9eb50;
            uVar12 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
          }
          uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_190 = (int)lVar11;
          uVar12 = local_190 + -1 + uVar13;
          if ((int)uVar8 < (int)uVar12) {
            uVar12 = uVar8;
          }
        }
LAB_14cb9eb50:
        while( true ) {
          plVar15 = local_f8;
          if ((int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34) != (int)uStack_d0) {
            local_1f8 = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
          }
          if (((TStack_f0.CurrentBitIndex == uVar12) &&
              (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
             (plVar15 == &this->_padding_)) break;
          pTVar9 = UE::Geometry::FGroupTopology::GetGroupEdgeVertices
                             (this->Topology,
                              *(int *)(*plVar15 + (longlong)TStack_f0.CurrentBitIndex * 0xc));
          if (1 < pTVar9->ArrayNum) {
            iVar7 = UE::Geometry::FCompactMaps::GetVertexMapping
                              (param_2,*(int *)(pTVar9->AllocatorInstance).Data);
            if ((pTVar9->ArrayNum < 2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar14 = UE::Geometry::FCompactMaps::GetVertexMapping
                               (param_2,*(int *)((pTVar9->AllocatorInstance).Data + 4));
            uVar13 = UE::Geometry::FDynamicMesh3::FindEdge(this->Topology->Mesh,iVar7,iVar14);
            if (uVar13 != 0xffffffff) {
              pFVar4 = this->Topology->Mesh;
              uVar8 = *(uint *)(*(longlong *)
                                 ((pFVar4->Edges).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar13 >> 9) * 8) + 8 +
                               (ulonglong)(uVar13 & 0x1ff) * 0x10);
              lVar11 = *(longlong *)
                        ((pFVar4->TriangleEdges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar8 >> 9) * 8);
              local_1b8 = *(longlong **)(lVar11 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
              local_1b0 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
              uVar8 = uVar8 * 4;
              if ((uint)local_1b8 != uVar13) {
                uVar8 = uVar8 | ((uint)((ulonglong)local_1b8 >> 0x20) != uVar13) + 1;
              }
              local_168 = (ulonglong)(uVar8 >> 2 | uVar8 << 0x1e);
              TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
              Emplace<unsigned___int64>(&param_1->Selection,&local_18c,(bool *)&local_168);
            }
          }
          TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
        }
      }
    }
    else if (EVar3 == Face) {
      plVar1 = &this->_padding_;
      iVar7 = (int)this->_padding_;
      iStack_1e8 = 0;
      uStack_1e4 = 1;
      iStack_1d4 = iStack_1e8;
      local_1d0 = iStack_1e8;
      if (iVar7 != 0) {
        plVar15 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        uVar12 = (uint)*plVar15;
        local_1d0 = 0;
        iStack_1e8 = 0;
        while (uVar12 == 0) {
          lVar11 = (longlong)iStack_1e8;
          local_1d0 = local_1d0 + 0x20;
          iStack_1e8 = iStack_1e8 + 1;
          iStack_1d4 = iVar7;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
          goto LAB_14cb9ed7e;
          uVar12 = *(uint *)((longlong)plVar15 + lVar11 * 4 + 4);
        }
        uStack_1e4 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_1e4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_18c._4_4_ = (int)lVar11;
        iStack_1d4 = local_1d0 + -1 + local_18c._4_4_;
        if (iVar7 < iStack_1d4) {
          iStack_1d4 = iVar7;
        }
      }
LAB_14cb9ed7e:
      plVar15 = &this->_padding_;
      iStack_1c8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
      uVar12 = (uint)this->_padding_;
      uStack_1d8 = 0xffffffff;
      uVar13 = uVar12 & 0xffffffe0;
      TStack_c0._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
      TStack_c0.CurrentBitIndex = iStack_1d4;
      TStack_c0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar12 >> 5;
      TStack_c0._28_4_ = iStack_1d4;
      TStack_c0.BaseBitIndex = local_1d0;
      uStack_a0 = CONCAT44(uStack_1c4,iStack_1c8);
      local_1f0 = plVar15;
      local_1e0 = plVar1;
      iStack_1cc = iStack_1d4;
      local_c8 = plVar15;
      TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
      if ((((int)uVar12 < 0) || (iVar7 < (int)uVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = (uint)this->_padding_;
      if (uVar12 != uVar8) {
        plVar16 = (longlong *)this->_padding_;
        if ((longlong *)this->_padding_ == (longlong *)0x0) {
          plVar16 = plVar1;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar14 * 4);
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar14;
          uVar13 = uVar13 + 0x20;
          iVar14 = iVar14 + 1;
          uVar12 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14cb9eea0;
          uVar12 = *(uint *)((longlong)plVar16 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_184 = (int)lVar11;
        uVar12 = local_184 + -1 + uVar13;
        if ((int)uVar8 < (int)uVar12) {
          uVar12 = uVar8;
        }
      }
LAB_14cb9eea0:
      while( true ) {
        plVar16 = local_c8;
        if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
          local_1f7[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1f7);
        }
        if (((TStack_c0.CurrentBitIndex == uVar12) &&
            (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
           (plVar16 == plVar15)) break;
        pFVar10 = UE::Geometry::FGroupTopology::FindGroupByID
                            (this->Topology,
                             *(int *)(*plVar16 + (longlong)TStack_c0.CurrentBitIndex * 0xc));
        if (pFVar10 != (FGroup *)0x0) {
          if (((pFVar10->Triangles).ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_160 = (ulonglong)*(uint *)(pFVar10->Triangles).AllocatorInstance.Data;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64>(&param_1->Selection,&local_180,(bool *)&local_160);
        }
        TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
      }
    }
  }
  return;
}

// GrowSelection @ 14cba0810

void __thiscall
UPolygonSelectionMechanic::GrowSelection(UPolygonSelectionMechanic *this,bool param_1)

{
  FText *pFVar1;
  UPolygonSelectionMechanic *local_res8;
  code *local_28;
  UPolygonSelectionMechanic **local_20;
  FText local_18;
  
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPolygonSelectionMechanic::GrowSelection'::__l2::<lambda_1>,bool,UE::Geometry::FGeometrySelection_&>
             ::Call;
  local_res8 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UPolygonSelectionMechanic",L"GrowSelectionChange",
                      L"Grow Selection");
  ExecuteActionThroughGeometrySelection
            (this,param_1,pFVar1,
             (TFunctionRef<bool___cdecl(UE::Geometry::FGeometrySelection_&)> *)&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// Initialize @ 14cba2230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPolygonSelectionMechanic::Initialize
          (UPolygonSelectionMechanic *this,UDynamicMeshComponent *param_1,FGroupTopology *param_2,
          TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
          *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  UWorld *pUVar13;
  FDynamicMesh3 *pFVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)> local_c8;
  TTransform<double> local_98;
  
  local_c8._0_8_ = *(undefined8 *)param_3;
  local_c8._40_8_ = 0;
  if (local_c8._0_8_ != 0) {
    puVar15 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar15)(puVar15,&local_c8.field_0x10);
  }
  pUVar13 = (UWorld *)param_1->_padding_;
  if (pUVar13 == (UWorld *)0x0) {
    pUVar13 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  dVar1 = (double)param_1->_padding_;
  dVar2 = (double)param_1->_padding_;
  dVar3 = (double)param_1->_padding_;
  dVar4 = (double)param_1->_padding_;
  dVar5 = (double)param_1->_padding_;
  dVar6 = (double)param_1->_padding_;
  dVar7 = (double)param_1->_padding_;
  dVar8 = (double)param_1->_padding_;
  dVar9 = (double)param_1->_padding_;
  dVar10 = (double)param_1->_padding_;
  dVar11 = (double)param_1->_padding_;
  dVar12 = (double)param_1->_padding_;
  pFVar14 = (FDynamicMesh3 *)(**(code **)(param_1->_padding_ + 0xb38))(param_1);
  local_98.Rotation.XY.m128d_f64[0] = dVar1;
  local_98.Rotation.XY.m128d_f64[1] = dVar2;
  local_98.Rotation.ZW.m128d_f64[0] = dVar3;
  local_98.Rotation.ZW.m128d_f64[1] = dVar4;
  local_98.Translation.XY.m128d_f64[0] = dVar5;
  local_98.Translation.XY.m128d_f64[1] = dVar6;
  local_98.Translation.ZW.m128d_f64[0] = dVar7;
  local_98.Translation.ZW.m128d_f64[1] = dVar8;
  local_98.Scale3D.XY.m128d_f64[0] = dVar9;
  local_98.Scale3D.XY.m128d_f64[1] = dVar10;
  local_98.Scale3D.ZW.m128d_f64[0] = dVar11;
  local_98.Scale3D.ZW.m128d_f64[1] = dVar12;
  Initialize(this,pFVar14,&local_98,pUVar13,param_2,&local_c8);
  if (*(longlong *)param_3 != 0) {
    plVar16 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  return;
}

// Initialize @ 14cba23b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPolygonSelectionMechanic::Initialize
          (UPolygonSelectionMechanic *this,FDynamicMesh3 *param_1,TTransform<double> *param_2,
          UWorld *param_3,FGroupTopology *param_4,
          TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
          *param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *local_e8;
  FSharedReferencer<1> FStack_e0;
  UWorld *local_d8;
  TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)> local_c8;
  TTransform<double> local_98;
  
  this->Topology = param_4;
  local_d8 = param_3;
  pTVar4 = ::operator_new(0x170);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_e8 = ___xmm_00000000000000000000000000000010;
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
    FStack_e0.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGroupTopologySelector___00_SharedPointerInternals__6B_
    ;
    FMeshTopologySelector::FMeshTopologySelector((FMeshTopologySelector *)(pTVar4 + 1));
    *(FDynamicMesh3 **)&pTVar4[5].SharedReferenceCount = param_1;
    pTVar4[1]._padding_ = (longlong)&___7FGroupTopologySelector__6B_;
    puVar5 = ::operator_new(0x10);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_4;
      *puVar5 = &___7FGroupTopologyProvider__6B_;
    }
    puVar1 = (undefined8 *)pTVar4[6]._padding_;
    pTVar4[6]._padding_ = (longlong)puVar5;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    pTVar7 = pTVar4 + 1;
    *(FGroupTopology **)&pTVar4[0x16].SharedReferenceCount = param_4;
    *(undefined2 *)&pTVar4[10]._padding_ = 0;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_e0.ReferenceController = pTVar4;
    local_e8 = pTVar7;
  }
  if ((TReferenceControllerBase<1> **)&this->_padding_ != &local_e8) {
    this->_padding_ = (longlong)pTVar7;
    local_e8 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_c8._0_8_ = *(undefined8 *)param_5;
  local_c8._40_8_ = 0;
  if (local_c8._0_8_ != 0) {
    puVar5 = (undefined8 *)&param_5->field_0x10;
    if (*(undefined8 **)&param_5->field_0x28 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)&param_5->field_0x28;
    }
    (**(code **)*puVar5)(puVar5,&local_c8.field_0x10);
  }
  local_98.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_98.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_98.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_98.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_98.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_98.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_98.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_98.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_98.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_98.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_98.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  UMeshTopologySelectionMechanic::Initialize
            ((UMeshTopologySelectionMechanic *)this,param_1,&local_98,local_d8,&local_c8);
  if (*(longlong *)param_5 != 0) {
    plVar6 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// SetSelection_AsGroupTopology @ 14cbb0ff0

void __thiscall
UPolygonSelectionMechanic::SetSelection_AsGroupTopology
          (UPolygonSelectionMechanic *this,FGeometrySelection *param_1)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  EGeometryElementType EVar4;
  int iVar5;
  code *pcVar6;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FGroup *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118 [2];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_110;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (param_1->TopologyType == Polygroup) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
    EVar4 = param_1->ElementType;
    if (EVar4 == Vertex) {
      iVar5 = *(int *)&(param_1->Selection).Elements.field_0x28;
      puVar1 = &(param_1->Selection).Elements.field_0x10;
      iVar14 = 0;
      pTVar2 = &param_1->Selection;
      iVar16 = 0;
      uVar9 = 1;
      iVar10 = 0;
      if (iVar5 != 0) {
        puVar17 = *(uint **)&(param_1->Selection).Elements.field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar10 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cbb10e0;
          uVar13 = puVar17[lVar12 + 1];
        }
        uVar9 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_12c = (int)lVar12;
        iVar10 = iVar16 + -1 + local_12c;
        if (iVar5 < iVar10) {
          iVar10 = iVar5;
        }
      }
LAB_14cbb10e0:
      uVar13 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_100._padding_ = CONCAT44(uVar9,iVar14);
      TStack_100.CurrentBitIndex = iVar10;
      TStack_100.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_100._28_4_ = local_5c;
      TStack_100.BaseBitIndex = iVar16;
      uStack_e0 = CONCAT44(uStack_13c,
                           *(int *)&(param_1->Selection).Elements.field_0x8 -
                           *(int *)&(param_1->Selection).Elements.field_0x34);
      local_108 = pTVar2;
      TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      if (uVar13 != uVar9) {
        puVar15 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14cbb11f0;
          uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14cbb11f0:
      while( true ) {
        pTVar7 = local_108;
        if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
            (int)uStack_e0) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_100.CurrentBitIndex == uVar13) &&
            (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar2)) break;
        local_138 = UE::Geometry::FGroupTopology::GetCornerIDFromVertexID
                              (this->Topology,
                               *(int *)(*(longlong *)&pTVar7->Elements +
                                       (longlong)TStack_100.CurrentBitIndex * 0x10));
        if (local_138 != -1) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                     &local_128,(bool *)&local_138);
        }
        TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      }
    }
    else if (EVar4 == Edge) {
      iVar5 = *(int *)&(param_1->Selection).Elements.field_0x28;
      puVar1 = &(param_1->Selection).Elements.field_0x10;
      iVar14 = 0;
      pTVar2 = &param_1->Selection;
      uVar9 = 1;
      iVar16 = 0;
      iVar10 = 0;
      if (iVar5 != 0) {
        puVar17 = *(uint **)&(param_1->Selection).Elements.field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar10 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cbb1300;
          uVar13 = puVar17[lVar12 + 1];
        }
        uVar9 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_124 = (int)lVar12;
        iVar10 = iVar16 + -1 + local_124;
        if (iVar5 < iVar10) {
          iVar10 = iVar5;
        }
      }
LAB_14cbb1300:
      uVar13 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_d0._padding_ = CONCAT44(uVar9,iVar14);
      TStack_d0.CurrentBitIndex = iVar10;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_d0._28_4_ = local_3c;
      TStack_d0.BaseBitIndex = iVar16;
      uStack_b0 = CONCAT44(uStack_13c,
                           *(int *)&(param_1->Selection).Elements.field_0x8 -
                           *(int *)&(param_1->Selection).Elements.field_0x34);
      local_d8 = pTVar2;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      if (uVar13 != uVar9) {
        puVar15 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14cbb1410;
          uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14cbb1410:
      while( true ) {
        pTVar7 = local_d8;
        if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
            (int)uStack_b0) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_d0.CurrentBitIndex == uVar13) &&
            (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar2)) break;
        uVar9 = *(uint *)(*(longlong *)&pTVar7->Elements +
                         (longlong)TStack_d0.CurrentBitIndex * 0x10);
        local_134 = UE::Geometry::FGroupTopology::FindGroupEdgeID
                              (this->Topology,
                               (FMeshTriEdgeID)((uVar9 & 0xfffffff) << 2 | uVar9 >> 0x1e));
        if (local_134 != -1) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                     &local_120,(bool *)&local_134);
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      }
    }
    else if (EVar4 == Face) {
      iVar5 = *(int *)&(param_1->Selection).Elements.field_0x28;
      puVar1 = &(param_1->Selection).Elements.field_0x10;
      iVar14 = 0;
      local_110 = &param_1->Selection;
      uVar9 = 1;
      iVar16 = 0;
      iVar10 = 0;
      if (iVar5 != 0) {
        puVar17 = *(uint **)&(param_1->Selection).Elements.field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar10 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cbb1540;
          uVar13 = puVar17[lVar12 + 1];
        }
        uVar9 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_11c = (int)lVar12;
        iVar10 = iVar16 + -1 + local_11c;
        if (iVar5 < iVar10) {
          iVar10 = iVar5;
        }
      }
LAB_14cbb1540:
      uVar13 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_a0._padding_ = CONCAT44(uVar9,iVar14);
      TStack_a0.CurrentBitIndex = iVar10;
      TStack_a0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_a0._28_4_ = iVar10;
      TStack_a0.BaseBitIndex = iVar16;
      uStack_80 = CONCAT44(uStack_13c,
                           *(int *)&(param_1->Selection).Elements.field_0x8 -
                           *(int *)&(param_1->Selection).Elements.field_0x34);
      local_a8 = local_110;
      TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar2 = local_110;
      uVar9 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      if (uVar13 != uVar9) {
        puVar15 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14cbb1650;
          uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14cbb1650:
      while( true ) {
        pTVar7 = local_a8;
        if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
            (int)uStack_80) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_a0.CurrentBitIndex == uVar13) &&
            (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar2)) break;
        local_130 = (**(code **)(this->Topology->_padding_ + 0x18))
                              (this->Topology,
                               *(undefined4 *)
                                (*(longlong *)&pTVar7->Elements +
                                (longlong)TStack_a0.CurrentBitIndex * 0x10));
        pFVar11 = UE::Geometry::FGroupTopology::FindGroupByID(this->Topology,local_130);
        if (pFVar11 != (FGroup *)0x0) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                     local_118,(bool *)&local_130);
        }
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
      }
    }
  }
  return;
}

// SetSelection_AsTriangleTopology @ 14cbb1720

void __thiscall
UPolygonSelectionMechanic::SetSelection_AsTriangleTopology
          (UPolygonSelectionMechanic *this,FGeometrySelection *param_1)

{
  undefined1 *puVar1;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  EGeometryElementType EVar4;
  int iVar5;
  code *pcVar6;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FGroup *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118 [2];
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_110;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined4 local_5c;
  undefined4 local_3c;
  
  if (param_1->TopologyType == Triangle) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
    EVar4 = param_1->ElementType;
    if (EVar4 == Vertex) {
      iVar5 = *(int *)&(param_1->Selection).Elements.field_0x28;
      puVar1 = &(param_1->Selection).Elements.field_0x10;
      iVar14 = 0;
      pTVar2 = &param_1->Selection;
      iVar16 = 0;
      uVar9 = 1;
      iVar10 = 0;
      if (iVar5 != 0) {
        puVar17 = *(uint **)&(param_1->Selection).Elements.field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar10 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cbb1810;
          uVar13 = puVar17[lVar12 + 1];
        }
        uVar9 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_12c = (int)lVar12;
        iVar10 = iVar16 + -1 + local_12c;
        if (iVar5 < iVar10) {
          iVar10 = iVar5;
        }
      }
LAB_14cbb1810:
      uVar13 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_100._padding_ = CONCAT44(uVar9,iVar14);
      TStack_100.CurrentBitIndex = iVar10;
      TStack_100.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_100._28_4_ = local_5c;
      TStack_100.BaseBitIndex = iVar16;
      uStack_e0 = CONCAT44(uStack_13c,
                           *(int *)&(param_1->Selection).Elements.field_0x8 -
                           *(int *)&(param_1->Selection).Elements.field_0x34);
      local_108 = pTVar2;
      TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      if (uVar13 != uVar9) {
        puVar15 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14cbb1920;
          uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14cbb1920:
      while( true ) {
        pTVar7 = local_108;
        if (*(int *)&(local_108->Elements).field_0x8 - *(int *)&(local_108->Elements).field_0x34 !=
            (int)uStack_e0) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_100.CurrentBitIndex == uVar13) &&
            (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar2)) break;
        local_138 = UE::Geometry::FGroupTopology::GetCornerIDFromVertexID
                              (this->Topology,
                               *(int *)(*(longlong *)&pTVar7->Elements +
                                       (longlong)TStack_100.CurrentBitIndex * 0x10));
        if (local_138 != -1) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                     &local_128,(bool *)&local_138);
        }
        TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
      }
    }
    else if (EVar4 == Edge) {
      iVar5 = *(int *)&(param_1->Selection).Elements.field_0x28;
      puVar1 = &(param_1->Selection).Elements.field_0x10;
      iVar14 = 0;
      pTVar2 = &param_1->Selection;
      uVar9 = 1;
      iVar16 = 0;
      iVar10 = 0;
      if (iVar5 != 0) {
        puVar17 = *(uint **)&(param_1->Selection).Elements.field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar10 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cbb1a30;
          uVar13 = puVar17[lVar12 + 1];
        }
        uVar9 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_124 = (int)lVar12;
        iVar10 = iVar16 + -1 + local_124;
        if (iVar5 < iVar10) {
          iVar10 = iVar5;
        }
      }
LAB_14cbb1a30:
      uVar13 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_d0._padding_ = CONCAT44(uVar9,iVar14);
      TStack_d0.CurrentBitIndex = iVar10;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_d0._28_4_ = local_3c;
      TStack_d0.BaseBitIndex = iVar16;
      uStack_b0 = CONCAT44(uStack_13c,
                           *(int *)&(param_1->Selection).Elements.field_0x8 -
                           *(int *)&(param_1->Selection).Elements.field_0x34);
      local_d8 = pTVar2;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      if (uVar13 != uVar9) {
        puVar15 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14cbb1b40;
          uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14cbb1b40:
      while( true ) {
        pTVar7 = local_d8;
        if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
            (int)uStack_b0) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_d0.CurrentBitIndex == uVar13) &&
            (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar2)) break;
        uVar9 = *(uint *)(*(longlong *)&pTVar7->Elements +
                         (longlong)TStack_d0.CurrentBitIndex * 0x10);
        local_134 = UE::Geometry::FGroupTopology::FindGroupEdgeID
                              (this->Topology,
                               (FMeshTriEdgeID)((uVar9 & 0xfffffff) << 2 | uVar9 >> 0x1e));
        if (local_134 != -1) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                     &local_120,(bool *)&local_134);
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      }
    }
    else if (EVar4 == Face) {
      iVar5 = *(int *)&(param_1->Selection).Elements.field_0x28;
      puVar1 = &(param_1->Selection).Elements.field_0x10;
      iVar14 = 0;
      local_110 = &param_1->Selection;
      uVar9 = 1;
      iVar16 = 0;
      iVar10 = 0;
      if (iVar5 != 0) {
        puVar17 = *(uint **)&(param_1->Selection).Elements.field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)puVar1;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar14 + 1;
          iVar10 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cbb1c70;
          uVar13 = puVar17[lVar12 + 1];
        }
        uVar9 = -uVar13 & uVar13;
        uVar3 = (ulonglong)uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_11c = (int)lVar12;
        iVar10 = iVar16 + -1 + local_11c;
        if (iVar5 < iVar10) {
          iVar10 = iVar5;
        }
      }
LAB_14cbb1c70:
      uVar13 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_a0._padding_ = CONCAT44(uVar9,iVar14);
      TStack_a0.CurrentBitIndex = iVar10;
      TStack_a0.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar13 >> 5;
      TStack_a0._28_4_ = iVar10;
      TStack_a0.BaseBitIndex = iVar16;
      uStack_80 = CONCAT44(uStack_13c,
                           *(int *)&(param_1->Selection).Elements.field_0x8 -
                           *(int *)&(param_1->Selection).Elements.field_0x34);
      local_a8 = local_110;
      TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar2 = local_110;
      uVar9 = *(uint *)&(param_1->Selection).Elements.field_0x28;
      if (uVar13 != uVar9) {
        puVar15 = *(undefined1 **)&(param_1->Selection).Elements.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
        while (uVar13 == 0) {
          lVar12 = (longlong)iVar14;
          uVar18 = uVar18 + 0x20;
          iVar14 = iVar14 + 1;
          uVar13 = uVar9;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14cbb1d80;
          uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        uVar13 = (int)lVar12 + -1 + uVar18;
        if ((int)uVar9 < (int)uVar13) {
          uVar13 = uVar9;
        }
      }
LAB_14cbb1d80:
      while( true ) {
        pTVar7 = local_a8;
        if (*(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34 !=
            (int)uStack_80) {
          `TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_a0.CurrentBitIndex == uVar13) &&
            (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar2)) break;
        local_130 = (**(code **)(this->Topology->_padding_ + 0x18))
                              (this->Topology,
                               *(undefined4 *)
                                (*(longlong *)&pTVar7->Elements +
                                (longlong)TStack_a0.CurrentBitIndex * 0x10));
        pFVar11 = UE::Geometry::FGroupTopology::FindGroupByID(this->Topology,local_130);
        if (pFVar11 != (FGroup *)0x0) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                     local_118,(bool *)&local_130);
        }
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
      }
    }
  }
  return;
}

// ShrinkSelection @ 14cbb2e90

void __thiscall
UPolygonSelectionMechanic::ShrinkSelection(UPolygonSelectionMechanic *this,bool param_1)

{
  FText *pFVar1;
  UPolygonSelectionMechanic *local_res8;
  code *local_28;
  UPolygonSelectionMechanic **local_20;
  FText local_18;
  
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPolygonSelectionMechanic::ShrinkSelection'::__l2::<lambda_1>,bool,UE::Geometry::FGeometrySelection_&>
             ::Call;
  local_res8 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UPolygonSelectionMechanic",L"ShrinkSelectionChange",
                      L"Shrink Selection");
  ExecuteActionThroughGeometrySelection
            (this,param_1,pFVar1,
             (TFunctionRef<bool___cdecl(UE::Geometry::FGeometrySelection_&)> *)&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// StaticRegisterNativesUPolygonSelectionMechanic @ 14cbb4620

void __cdecl UPolygonSelectionMechanic::StaticRegisterNativesUPolygonSelectionMechanic(void)

{
  return;
}

// UpdateHighlight @ 14cbb7c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPolygonSelectionMechanic::UpdateHighlight(UPolygonSelectionMechanic *this,TRay<double> *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  FGroupTopologySelector *this_00;
  UTriangleSetComponent *this_01;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  FScriptContainerElement *pFVar24;
  bool bVar25;
  undefined1 uVar26;
  bool bVar27;
  int iVar28;
  FMeshTopologySelector *this_02;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar29;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar30;
  FLinearColor *pFVar31;
  longlong *plVar32;
  TReferenceControllerBase<1> *pTVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar61;
  undefined4 uVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  double dVar69;
  undefined1 auVar70 [16];
  double dVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar85;
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auStackY_558 [32];
  undefined1 local_517;
  undefined1 local_516 [6];
  undefined1 local_510 [16];
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  uint local_4f4;
  FScriptContainerElement *local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  TVector<float>_u_0 local_4d0;
  TVector<float>_u_0 local_4c4;
  TVector<float>_u_0 local_4b8;
  TVector<double>_u_0 local_4a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_490;
  undefined8 uStack_470;
  int local_460 [2];
  TReferenceControllerBase<1> *local_458;
  double dStack_450;
  longlong *local_448;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_440;
  undefined8 uStack_420;
  undefined1 local_418 [40];
  int local_3f0;
  undefined4 uStack_3ec;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3d0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_370;
  double dStack_368;
  double dStack_360;
  double dStack_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  double local_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  double local_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined1 local_2a0 [16];
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  TObjectPtr<UMaterialInterface>_u_0 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  FLinearColor local_190;
  FLinearColor local_180;
  FLinearColor local_170;
  TVector<double> local_160;
  TVector<double> local_148;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_128;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_558;
  if ((this->_padding_ == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("DrawnTriangleSetComponent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\PolygonSelectionMechanic.cpp"
                          ,0x1b4,L"Initialize() not called on UMeshTopologySelectionMechanic."),
     bVar25)) {
    pcVar10 = (code *)swi(3);
    uVar26 = (*pcVar10)();
    return (bool)uVar26;
  }
  local_2b8 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  local_2a8 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar56 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar61 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar86 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar12 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar63 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar49._8_4_ = SUB84(dVar61,0);
  auVar49._0_8_ = dVar56;
  uVar62 = (undefined4)((ulonglong)dVar61 >> 0x20);
  auVar49._12_4_ = uVar62;
  auVar51._8_4_ = SUB84(dVar61,0);
  auVar51._0_8_ = dVar56;
  auVar51._12_4_ = uVar62;
  auVar83._8_4_ = SUB84(dVar12,0);
  auVar83._0_8_ = dVar86;
  auVar83._12_4_ = uVar63;
  auVar52 = blendpd(auVar51,auVar83,2);
  auVar77._8_4_ = SUB84(dVar12,0);
  auVar77._0_8_ = dVar86;
  auVar77._12_4_ = uVar63;
  dVar64 = local_2b8._8_8_;
  auVar82._0_8_ = dVar64 * dVar56 - local_2b8._0_8_ * auVar49._8_8_;
  auVar82._8_8_ = local_2a8 * dVar61 - dVar64 * dVar86;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_2a8;
  auVar45 = blendpd(local_2b8,auVar14,2);
  auVar70._8_4_ = SUB84(auVar82._8_8_,0);
  auVar70._0_8_ = auVar82._0_8_;
  auVar70._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
  auVar46._0_8_ = auVar45._0_8_ * dVar86 - local_2a8 * auVar52._0_8_;
  auVar46._8_8_ = auVar45._8_8_ * dVar12 - auVar52._8_8_ * 0.0;
  dVar69 = auVar70._8_8_ + auVar70._8_8_;
  dVar73 = auVar46._0_8_ + auVar46._0_8_;
  auVar83 = blendpd(auVar82,auVar46,2);
  uVar62 = SUB84(dVar73,0);
  auVar74._8_4_ = uVar62;
  auVar74._0_8_ = dVar69;
  uVar63 = (undefined4)((ulonglong)dVar73 >> 0x20);
  auVar74._12_4_ = uVar63;
  local_458 = (TReferenceControllerBase<1> *)(double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  dStack_450 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar38._8_4_ = uVar62;
  auVar38._0_8_ = dVar69;
  auVar38._12_4_ = uVar63;
  auVar45._0_8_ = this->_padding_;
  auVar45._8_8_ = this->_padding_;
  auVar65._8_4_ = uVar62;
  auVar65._0_8_ = dVar69;
  auVar65._12_4_ = uVar63;
  auVar84._0_8_ = auVar83._0_8_ + auVar83._0_8_;
  auVar84._8_8_ = auVar83._8_8_ + auVar83._8_8_;
  auVar15._4_8_ = dVar61;
  auVar15._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar57._0_8_ = auVar15._0_8_ << 0x20;
  auVar57._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar57._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar75._0_8_ = auVar74._8_8_ * dVar56 - dVar69 * auVar49._8_8_;
  auVar75._8_8_ = auVar84._0_8_ * dVar61 - auVar38._8_8_ * dVar86;
  auVar83 = blendpd(auVar65,auVar84,2);
  auVar39._8_4_ = SUB84(auVar84._8_8_,0);
  auVar39._0_8_ = auVar84._0_8_;
  auVar39._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
  auVar66._0_8_ = auVar83._0_8_ * dVar86 - auVar84._0_8_ * auVar52._0_8_;
  auVar66._8_8_ = auVar83._8_8_ * dVar12 - auVar39._8_8_ * auVar52._8_8_;
  uVar6 = this->_padding_;
  auVar58._8_8_ = auVar57._8_8_;
  auVar58._0_8_ = uVar6;
  local_3b8 = 0;
  uStack_3b0 = 0;
  auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
  lVar35 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)auVar45._0_8_ >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)auVar45._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)local_458);
  lVar37 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)auVar45._8_8_ >> 0x20) & _UNK_15061cc8c,
                              (uint)auVar45._8_8_ & _UNK_15061cc88) <= dStack_450);
  auVar40._8_4_ = SUB84(auVar75._8_8_,0);
  auVar40._0_8_ = auVar75._0_8_;
  auVar40._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
  lVar36 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              (uint)((ulonglong)uVar6 >> 0x20),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar6) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_3d0._s_0.X =
       (double)CONCAT44(~(uint)((ulonglong)lVar35 >> 0x20) & auVar52._4_4_,
                        ~(uint)lVar35 & auVar52._0_4_) *
       (dVar69 * auVar77._8_8_ + local_2b8._0_8_ + auVar40._8_8_);
  dVar86 = (double)CONCAT44(~(uint)((ulonglong)lVar37 >> 0x20) & auVar52._12_4_,
                            ~(uint)lVar37 & auVar52._8_4_) *
           (dVar73 * dVar12 + dVar64 + auVar66._0_8_);
  uVar62 = SUB84(dVar86,0);
  uVar63 = (undefined4)((ulonglong)dVar86 >> 0x20);
  auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar58);
  local_510._8_4_ = uVar62;
  local_510._0_8_ = local_3d0._s_0.X;
  local_510._12_4_ = uVar63;
  local_2a0._8_4_ = uVar62;
  local_2a0._0_8_ = local_3d0._s_0.X;
  local_2a0._12_4_ = uVar63;
  dVar69 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar73 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar86 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar12 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar63 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar53._8_4_ = SUB84(dVar73,0);
  auVar53._0_8_ = dVar69;
  uVar62 = (undefined4)((ulonglong)dVar73 >> 0x20);
  auVar53._12_4_ = uVar62;
  local_278 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar56 = local_278 - (double)this->_padding_;
  auVar52 = blendpd(auVar75,auVar66,2);
  auVar87._8_4_ = SUB84(dVar12,0);
  auVar87._0_8_ = dVar86;
  auVar87._12_4_ = uVar63;
  auVar83 = blendpd(auVar53,auVar87,2);
  local_288 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_280 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar81 = local_288 - (double)this->_padding_;
  dVar85 = dStack_280 - (double)this->_padding_;
  local_3d0._s_0.Z =
       (local_2a8 + auVar84._0_8_ * auVar77._8_8_ + auVar52._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar36 >> 0x20) & auVar45._4_4_,
                        ~(uint)lVar36 & auVar45._0_4_);
  auVar50._8_4_ = SUB84(dVar73,0);
  auVar50._0_8_ = dVar69;
  auVar50._12_4_ = uVar62;
  dVar61 = auVar50._8_8_;
  auVar41._8_4_ = SUB84(dVar86,0);
  auVar41._0_8_ = dVar61;
  auVar41._12_4_ = (int)((ulonglong)dVar86 >> 0x20);
  auVar78._8_4_ = SUB84(dVar85,0);
  auVar78._0_8_ = dVar81;
  uVar62 = (undefined4)((ulonglong)dVar85 >> 0x20);
  auVar78._12_4_ = uVar62;
  auVar76._8_4_ = SUB84(dVar12,0);
  auVar76._0_8_ = dVar86;
  auVar76._12_4_ = uVar63;
  auVar47._8_4_ = SUB84(dVar85,0);
  auVar47._0_8_ = dVar81;
  auVar47._12_4_ = uVar62;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = dVar56;
  auVar45 = blendpd(auVar47,auVar13,2);
  auVar79._0_8_ = auVar78._8_8_ * dVar69 - dVar61 * dVar81;
  auVar79._8_8_ = dVar56 * dVar73 - auVar41._8_8_ * dVar85;
  auVar67._8_4_ = SUB84(auVar79._8_8_,0);
  auVar67._0_8_ = auVar79._0_8_;
  auVar67._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
  auVar48._0_8_ = auVar45._0_8_ * dVar86 - dVar56 * auVar83._0_8_;
  auVar48._8_8_ = auVar45._8_8_ * dVar12 - auVar83._8_8_ * 0.0;
  dVar64 = auVar67._8_8_ + auVar67._8_8_;
  dVar68 = auVar48._0_8_ + auVar48._0_8_;
  auVar45 = blendpd(auVar79,auVar48,2);
  auVar52._0_8_ = this->_padding_;
  auVar52._8_8_ = this->_padding_;
  uVar62 = SUB84(dVar68,0);
  auVar71._8_4_ = uVar62;
  auVar71._0_8_ = dVar64;
  uVar63 = (undefined4)((ulonglong)dVar68 >> 0x20);
  auVar71._12_4_ = uVar63;
  auVar42._8_4_ = uVar62;
  auVar42._0_8_ = dVar64;
  auVar42._12_4_ = uVar63;
  auVar80._0_8_ = auVar45._0_8_ + auVar45._0_8_;
  auVar80._8_8_ = auVar45._8_8_ + auVar45._8_8_;
  auVar87 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar52);
  auVar59._8_4_ = uVar62;
  auVar59._0_8_ = dVar64;
  auVar59._12_4_ = uVar63;
  auVar72._0_8_ = auVar71._8_8_ * dVar69 - dVar64 * dVar61;
  auVar72._8_8_ = auVar80._0_8_ * dVar73 - auVar42._8_8_ * dVar86;
  auVar45 = blendpd(auVar59,auVar80,2);
  auVar43._8_4_ = SUB84(auVar80._8_8_,0);
  auVar43._0_8_ = auVar80._0_8_;
  auVar43._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
  auVar60._0_8_ = auVar45._0_8_ * dVar86 - auVar80._0_8_ * auVar83._0_8_;
  auVar60._8_8_ = auVar45._8_8_ * dVar12 - auVar43._8_8_ * auVar83._8_8_;
  uVar7 = this->_padding_;
  auVar54._0_8_ =
       (double)CONCAT44((uint)((ulonglong)auVar52._0_8_ >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)auVar52._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar54._8_4_ = (uint)auVar52._8_8_ & _UNK_15061cc88;
  auVar54._12_4_ = (uint)((ulonglong)auVar52._8_8_ >> 0x20) & _UNK_15061cc8c;
  lVar35 = -(ulonglong)(auVar54._8_8_ <= dStack_450);
  auVar11._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar11._0_8_ = uVar7;
  auVar11._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar11);
  auVar44._8_4_ = SUB84(auVar72._8_8_,0);
  auVar44._0_8_ = auVar72._0_8_;
  auVar44._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
  auVar55._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar54._0_8_ <= (double)local_458) >> 0x20) &
                        auVar87._4_4_,
                        ~(uint)-(ulonglong)(auVar54._0_8_ <= (double)local_458) & auVar87._0_4_);
  auVar55._8_4_ = ~(uint)lVar35 & auVar87._8_4_;
  auVar55._12_4_ = ~(uint)((ulonglong)lVar35 >> 0x20) & auVar87._12_4_;
  lVar35 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)uVar7 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_3e8._s_0.X = auVar55._0_8_ * (dVar64 * auVar76._8_8_ + dVar81 + auVar44._8_8_);
  local_3e8._s_0.Y = auVar55._8_8_ * (dVar68 * dVar12 + dVar85 + auVar60._0_8_);
  auVar45 = blendpd(auVar72,auVar60,2);
  local_3e8._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar35 >> 0x20) & auVar52._4_4_,
                        ~(uint)lVar35 & auVar52._0_4_) *
       (auVar80._0_8_ * auVar76._8_8_ + dVar56 + auVar45._0_8_);
  local_3d0._s_0.Y = (double)local_510._8_8_;
  local_3a8 = local_3e8._s_0.X;
  dStack_3a0 = local_3e8._s_0.Y;
  local_398 = local_3e8._s_0.Z;
  local_290 = local_3d0._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_3d0._s_0,__real_3e45798ee0000000);
  UE::Geometry::Normalize<double>((TVector<double> *)&local_3d0._s_0,0.0);
  plVar32 = &this->_padding_;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)plVar32);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  UMeshTopologySelectionMechanic::GetTopoSelectorSettings
            ((UMeshTopologySelectionMechanic *)this,SUB81(&local_4f0,0));
  this_02 = TSharedPtr<FMeshTopologySelector,1>::operator->
                      ((TSharedPtr<FMeshTopologySelector,1> *)&this->_padding_);
  bVar25 = FMeshTopologySelector::FindSelectedElement
                     (this_02,(FSelectionSettings *)&local_4f0,(TRay<double> *)&local_3e8._s_0,
                      (FGroupTopologySelection *)plVar32,&local_160,&local_148,(int *)0x0);
  pTVar33 = (TReferenceControllerBase<1> *)this->_padding_;
  this_00 = (FGroupTopologySelector *)this->_padding_;
  if (pTVar33 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar33->SharedReferenceCount = (atomic<int>)((int)pTVar33->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_458 = pTVar33;
  if (((0 < (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4)) &&
      (*(char *)(this->_padding_ + 0xb4) != '\0')) &&
     (bVar27 = UE::Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
               ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                             *)&this->_padding_), bVar27)) {
    if ((this_00 == (FGroupTopologySelector *)0x0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      uVar26 = (*pcVar10)();
      return (bool)uVar26;
    }
    FGroupTopologySelector::ExpandSelectionByEdgeRings(this_00,(FGroupTopologySelection *)plVar32);
  }
  if (((0 < (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4)) &&
      (*(char *)(this->_padding_ + 0xb3) != '\0')) &&
     (bVar27 = UE::Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
               ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                             *)&this->_padding_), bVar27)) {
    if ((this_00 == (FGroupTopologySelector *)0x0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      uVar26 = (*pcVar10)();
      return (bool)uVar26;
    }
    FGroupTopologySelector::ExpandSelectionByEdgeLoops(this_00,(FGroupTopologySelection *)plVar32);
    if ((this_00 == (FGroupTopologySelector *)0x0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      uVar26 = (*pcVar10)();
      return (bool)uVar26;
    }
    FGroupTopologySelector::ExpandSelectionByBoundaryLoops
              (this_00,(FGroupTopologySelection *)plVar32);
  }
  bVar27 = UE::Geometry::FGroupTopologySelection::Contains
                     ((FGroupTopologySelection *)&this->_padding_,(FGroupTopologySelection *)plVar32
                     );
  if (bVar27) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)plVar32);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_);
  }
  local_128.Elements._44_4_ = 0x80;
  local_128.Elements._0_8_ = 0;
  local_128.Elements._8_8_ = 0;
  local_128.Elements._32_8_ = 0;
  local_128.Elements._40_4_ = 0;
  local_128.Elements._52_4_ = 0;
  local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.HashSize = 0;
  local_128.Elements._48_4_ = 0xffffffff;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            (&local_128,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)plVar32);
  plVar1 = &this->_padding_;
  bVar27 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                     (&local_128,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)plVar1);
  if (!bVar27) {
    UTriangleSetComponent::Clear((UTriangleSetComponent *)this->_padding_);
    if ((int)this->_padding_ < 2) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)plVar1);
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)plVar1,0);
    }
    else {
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)plVar1,0);
      *(undefined4 *)&this->_padding_ = 1;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)plVar1);
    }
  }
  bVar27 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                     ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)plVar1,&local_128);
  if (!bVar27) {
    plVar1 = &this->_padding_;
    local_490._padding_._0_4_ = 0;
    local_490._padding_._4_4_ = 1;
    local_490.UnvisitedBitMask = 0xffffffff;
    local_490.CurrentBitIndex = 0;
    local_490.BaseBitIndex = 0;
    local_490.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
    if ((int)this->_padding_ != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_490);
    }
    TStack_440._padding_ = CONCAT44(local_490._padding_._4_4_,(undefined4)local_490._padding_);
    TStack_440.CurrentBitIndex = local_490.CurrentBitIndex;
    TStack_440.UnvisitedBitMask = local_490.UnvisitedBitMask;
    TStack_440._28_4_ = local_490._28_4_;
    TStack_440.BaseBitIndex = local_490.BaseBitIndex;
    local_3f0 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
    local_418._16_8_ = local_490.Array;
    uStack_420 = CONCAT44(uStack_3ec,local_3f0);
    TStack_440.Array = local_490.Array;
    local_448 = plVar32;
    local_418._0_8_ = plVar32;
    local_418._8_8_ = TStack_440._padding_;
    local_418._24_8_ = TStack_440._16_8_;
    local_418._32_8_ = TStack_440._24_8_;
    pTVar29 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_418,
                         (TBitArray<FDefaultBitArrayAllocator> *)plVar1,(int)this->_padding_);
    local_490.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar29->_padding_;
    uVar20 = pTVar29->UnvisitedBitMask;
    uVar21 = pTVar29->CurrentBitIndex;
    uStack_470 = *(undefined8 *)&pTVar29->BaseBitIndex;
    local_490.UnvisitedBitMask = (uint)pTVar29->Array;
    local_490.CurrentBitIndex = (int)((ulonglong)pTVar29->Array >> 0x20);
    local_490.BaseBitIndex = uVar20;
    local_490._28_4_ = uVar21;
    while( true ) {
      plVar32 = local_448;
      if ((int)local_448[1] - *(int *)((longlong)local_448 + 0x34) != (int)uStack_420) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_517);
      }
      if (((TStack_440.CurrentBitIndex == local_490._28_4_) &&
          (TStack_440.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(local_490.CurrentBitIndex,local_490.UnvisitedBitMask))) &&
         (pTVar33 = local_458, plVar32 == &this->_padding_)) break;
      local_4f4 = *(uint *)(*plVar32 + (longlong)TStack_440.CurrentBitIndex * 0xc);
      if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
        plVar32 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar32 = (longlong *)this->_padding_;
        }
        iVar28 = *(int *)((longlong)plVar32 + (ulonglong)((int)this->_padding_ - 1U & local_4f4) * 4
                         );
        if (iVar28 != -1) {
          do {
            if (*(uint *)(this->_padding_ + (longlong)iVar28 * 0xc) == local_4f4)
            goto LAB_14cbb8973;
            iVar28 = *(int *)(this->_padding_ + 4 + (longlong)iVar28 * 0xc);
          } while (iVar28 != -1);
        }
      }
      pTVar30 = UE::Geometry::FGroupTopology::GetGroupTriangles(this->Topology,local_4f4);
      pFVar34 = (pTVar30->AllocatorInstance).Data;
      iVar28 = pTVar30->ArrayNum;
      local_4f0 = pFVar34 + (longlong)iVar28 * 4;
      while( true ) {
        pFVar24 = local_4f0;
        if (pTVar30->ArrayNum != iVar28) {
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_516);
        }
        if (pFVar34 == pFVar24) break;
        uVar8 = *(uint *)pFVar34;
        UE::Geometry::FDynamicMesh3::GetTriNormal
                  ((FDynamicMesh3 *)this->_padding_,(TVector<double> *)&local_4a8._s_0,uVar8);
        lVar35 = this->_padding_;
        this_01 = (UTriangleSetComponent *)this->_padding_;
        lVar36 = *(longlong *)(*(longlong *)(lVar35 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
        uVar9 = *(uint *)(lVar36 + 8 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
        local_510._8_4_ = uVar9;
        local_510._0_8_ = *(undefined8 *)(lVar36 + (ulonglong)(uVar8 & 0x1ff) * 0xc);
        if (*(char *)(lVar35 + 0x90) == '\0') {
          local_4d0._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
          local_4d0._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
        }
        else {
          lVar35 = *(longlong *)(*(longlong *)(lVar35 + 0x80) + (ulonglong)(uVar9 >> 9) * 8);
          local_4d0._0_8_ = *(undefined8 *)(lVar35 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
          local_4d0._s_0.Z = *(float *)(lVar35 + 8 + (ulonglong)(uVar9 & 0x1ff) * 0xc);
        }
        pFVar31 = FLinearColor::FLinearColor(&local_170,(TVector<float> *)&local_4d0._s_0);
        FLinearColor::ToFColorSRGB(pFVar31);
        lVar35 = this->_padding_;
        if (*(char *)(lVar35 + 0xb0) == '\0') {
          local_4e8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          local_4e8 = (TVector2<float>_u_0)
                      *(TVector2<float>_u_0 *)
                       &((TVector2<float>_u_0 *)
                        (*(longlong *)(*(longlong *)(lVar35 + 0xa0) + (ulonglong)(uVar9 >> 9) * 8) +
                        (ulonglong)(uVar9 & 0x1ff) * 8))->_s_0;
        }
        uVar62 = local_510._4_4_;
        lVar36 = *(longlong *)(*(longlong *)(lVar35 + 0x10) + (ulonglong)(uVar9 >> 9) * 8);
        local_2e0 = (double)local_4e8._4_4_;
        puVar2 = (undefined8 *)(lVar36 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
        uVar22 = *puVar2;
        uVar23 = puVar2[1];
        uVar3 = *(undefined8 *)(lVar36 + 0x10 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
        local_2c0 = local_500;
        dVar86 = (double)(float)local_4e8;
        dStack_2d8 = local_4a8._s_0.X;
        dStack_2d0 = local_4a8._s_0.Y;
        local_2c8 = local_4a8._s_0.Z;
        if (*(char *)(lVar35 + 0x90) == '\0') {
          local_4c4._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
          local_4c4._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
        }
        else {
          lVar35 = *(longlong *)
                    (*(longlong *)(lVar35 + 0x80) + (ulonglong)((uint)local_510._4_4_ >> 9) * 8);
          local_4c4._0_8_ = *(undefined8 *)(lVar35 + (ulonglong)(local_510._4_4_ & 0x1ff) * 0xc);
          local_4c4._s_0.Z = *(float *)(lVar35 + 8 + (ulonglong)(local_510._4_4_ & 0x1ff) * 0xc);
        }
        pFVar31 = FLinearColor::FLinearColor(&local_180,(TVector<float> *)&local_4c4._s_0);
        FLinearColor::ToFColorSRGB(pFVar31);
        lVar35 = this->_padding_;
        if (*(char *)(lVar35 + 0xb0) == '\0') {
          local_4e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          local_4e0 = (TVector2<float>_u_0)
                      *(TVector2<float>_u_0 *)
                       &((TVector2<float>_u_0 *)
                        (*(longlong *)
                          (*(longlong *)(lVar35 + 0xa0) + (ulonglong)((uint)uVar62 >> 9) * 8) +
                        (ulonglong)(uVar62 & 0x1ff) * 8))->_s_0;
        }
        uVar63 = local_510._0_4_;
        local_328 = (double)local_4e0._4_4_;
        lVar36 = *(longlong *)(*(longlong *)(lVar35 + 0x10) + (ulonglong)((uint)uVar62 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar36 + (ulonglong)(uVar62 & 0x1ff) * 0x18);
        uVar18 = *puVar2;
        uVar19 = puVar2[1];
        uVar4 = *(undefined8 *)(lVar36 + 0x10 + (ulonglong)(uVar62 & 0x1ff) * 0x18);
        local_308 = local_4fc;
        dVar12 = (double)(float)local_4e0;
        dStack_320 = local_4a8._s_0.X;
        dStack_318 = local_4a8._s_0.Y;
        dStack_310 = local_4a8._s_0.Z;
        if (*(char *)(lVar35 + 0x90) == '\0') {
          local_4b8._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
          local_4b8._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
        }
        else {
          lVar35 = *(longlong *)
                    (*(longlong *)(lVar35 + 0x80) + (ulonglong)((uint)local_510._0_4_ >> 9) * 8);
          local_4b8._0_8_ = *(undefined8 *)(lVar35 + (ulonglong)(local_510._0_4_ & 0x1ff) * 0xc);
          local_4b8._s_0.Z = *(float *)(lVar35 + 8 + (ulonglong)(local_510._0_4_ & 0x1ff) * 0xc);
        }
        pFVar31 = FLinearColor::FLinearColor(&local_190,(TVector<float> *)&local_4b8._s_0);
        FLinearColor::ToFColorSRGB(pFVar31);
        lVar35 = this->_padding_;
        if (*(char *)(lVar35 + 0xb0) == '\0') {
          local_4d8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          local_4d8 = (TVector2<float>_u_0)
                      *(TVector2<float>_u_0 *)
                       &((TVector2<float>_u_0 *)
                        (*(longlong *)
                          (*(longlong *)(lVar35 + 0xa0) + (ulonglong)((uint)uVar63 >> 9) * 8) +
                        (ulonglong)(uVar63 & 0x1ff) * 8))->_s_0;
        }
        local_370 = (double)local_4d8._4_4_;
        lVar35 = *(longlong *)(*(longlong *)(lVar35 + 0x10) + (ulonglong)((uint)uVar63 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar35 + (ulonglong)(uVar63 & 0x1ff) * 0x18);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        uVar5 = *(undefined8 *)(lVar35 + 0x10 + (ulonglong)(uVar63 & 0x1ff) * 0x18);
        local_270 = (TObjectPtr<UMaterialInterface>_u_0)this->_padding_;
        dVar56 = (double)(float)local_4d8;
        local_350 = local_4f8;
        dStack_368 = local_4a8._s_0.X;
        dStack_360 = local_4a8._s_0.Y;
        dStack_358 = local_4a8._s_0.Z;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_270.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_270.DebugPtr);
        }
        local_238 = dStack_360;
        dStack_230 = dStack_358;
        local_248 = local_370;
        dStack_240 = dStack_368;
        local_228 = CONCAT44(uStack_34c,local_350);
        local_1f0 = dStack_318;
        dStack_1e8 = dStack_310;
        local_200 = local_328;
        dStack_1f8 = dStack_320;
        local_1e0 = CONCAT44(uStack_304,local_308);
        local_1b8 = local_2e0;
        dStack_1b0 = dStack_2d8;
        local_198 = CONCAT44(uStack_2bc,local_2c0);
        local_1a8 = dStack_2d0;
        dStack_1a0 = local_2c8;
        local_268 = uVar16;
        uStack_260 = uVar17;
        local_258 = uVar5;
        dStack_250 = dVar56;
        local_220 = uVar18;
        uStack_218 = uVar19;
        local_210 = uVar4;
        dStack_208 = dVar12;
        local_1d8 = uVar22;
        uStack_1d0 = uVar23;
        local_1c8 = uVar3;
        dStack_1c0 = dVar86;
        UTriangleSetComponent::AddTriangle(this_01,(FRenderableTriangle *)&local_270.ObjectPtr);
        pFVar34 = pFVar34 + 4;
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,local_460
                 ,(bool *)&local_4f4);
LAB_14cbb8973:
      TStack_440.UnvisitedBitMask = TStack_440.UnvisitedBitMask & ~TStack_440._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_440);
    }
  }
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar33);
  return bVar25;
}

// UpdateSelection @ 14cbb9530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UPolygonSelectionMechanic::UpdateSelection
          (UPolygonSelectionMechanic *this,TRay<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  longlong *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGroupTopologySelector *this_01;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar47;
  undefined4 uVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 auVar54 [16];
  double dVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auStackY_3d8 [32];
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_380;
  TVector<double>_u_0 local_368;
  FSelectionSettings local_350;
  double local_348;
  double dStack_340;
  double local_338;
  TVector<double>_u_0 local_328;
  undefined1 local_308 [16];
  double local_2f8;
  undefined1 local_2f0 [16];
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  FGroupTopologySelection local_2b8;
  FGroupTopologySelection local_1c8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_308 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  local_2f8 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar42 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar47 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar18 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar49 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar33._8_4_ = SUB84(dVar47,0);
  auVar33._0_8_ = dVar42;
  uVar48 = (undefined4)((ulonglong)dVar47 >> 0x20);
  auVar33._12_4_ = uVar48;
  auVar37._8_4_ = SUB84(dVar47,0);
  auVar37._0_8_ = dVar42;
  auVar37._12_4_ = uVar48;
  auVar67._8_4_ = SUB84(dVar6,0);
  auVar67._0_8_ = dVar18;
  auVar67._12_4_ = uVar49;
  auVar38 = blendpd(auVar37,auVar67,2);
  dVar36 = auVar33._8_8_;
  auVar61._8_4_ = SUB84(dVar6,0);
  auVar61._0_8_ = dVar18;
  auVar61._12_4_ = uVar49;
  auVar19._8_4_ = SUB84(dVar18,0);
  auVar19._0_8_ = dVar36;
  auVar19._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  dVar27 = local_308._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_2f8;
  auVar28 = blendpd(local_308,auVar8,2);
  auVar66._0_8_ = dVar27 * dVar42 - dVar36 * local_308._0_8_;
  auVar66._8_8_ = local_2f8 * dVar47 - auVar19._8_8_ * dVar27;
  auVar54._8_4_ = SUB84(auVar66._8_8_,0);
  auVar54._0_8_ = auVar66._0_8_;
  auVar54._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
  auVar29._0_8_ = auVar28._0_8_ * dVar18 - local_2f8 * auVar38._0_8_;
  auVar29._8_8_ = auVar28._8_8_ * dVar6 - auVar38._8_8_ * 0.0;
  dVar53 = auVar54._8_8_ + auVar54._8_8_;
  dVar57 = auVar29._0_8_ + auVar29._0_8_;
  auVar67 = blendpd(auVar66,auVar29,2);
  uVar48 = SUB84(dVar57,0);
  auVar58._8_4_ = uVar48;
  auVar58._0_8_ = dVar53;
  uVar49 = (undefined4)((ulonglong)dVar57 >> 0x20);
  auVar58._12_4_ = uVar49;
  auVar20._8_4_ = uVar48;
  auVar20._0_8_ = dVar53;
  auVar20._12_4_ = uVar49;
  auVar50._8_4_ = uVar48;
  auVar50._0_8_ = dVar53;
  auVar50._12_4_ = uVar49;
  auVar28._0_8_ = this->_padding_;
  auVar28._8_8_ = this->_padding_;
  auVar68._0_8_ = auVar67._0_8_ + auVar67._0_8_;
  auVar68._8_8_ = auVar67._8_8_ + auVar67._8_8_;
  auVar9._4_8_ = dVar47;
  auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar43._0_8_ = auVar9._0_8_ << 0x20;
  auVar43._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar43._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar59._0_8_ = auVar58._8_8_ * dVar42 - dVar53 * dVar36;
  auVar59._8_8_ = auVar68._0_8_ * dVar47 - auVar20._8_8_ * dVar18;
  auVar67 = blendpd(auVar50,auVar68,2);
  auVar21._8_4_ = SUB84(auVar68._8_8_,0);
  auVar21._0_8_ = auVar68._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
  auVar51._0_8_ = auVar67._0_8_ * dVar18 - auVar68._0_8_ * auVar38._0_8_;
  auVar51._8_8_ = auVar67._8_8_ * dVar6 - auVar21._8_8_ * auVar38._8_8_;
  uVar1 = this->_padding_;
  auVar44._8_8_ = auVar43._8_8_;
  auVar44._0_8_ = uVar1;
  local_328._s_0.X = 0.0;
  local_328._s_0.Y = 0.0;
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
  lVar15 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)auVar28._0_8_ >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)auVar28._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar17 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)auVar28._8_8_ >> 0x20) & _UNK_15061cc8c,
                              (uint)auVar28._8_8_ & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar22._8_4_ = SUB84(auVar59._8_8_,0);
  auVar22._0_8_ = auVar59._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
  lVar16 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              (uint)((ulonglong)uVar1 >> 0x20),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar1) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_380._s_0.X =
       (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar38._4_4_,
                        ~(uint)lVar15 & auVar38._0_4_) *
       (dVar53 * auVar61._8_8_ + local_308._0_8_ + auVar22._8_8_);
  dVar18 = (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar38._12_4_,
                            ~(uint)lVar17 & auVar38._8_4_) *
           (dVar57 * dVar6 + dVar27 + auVar51._0_8_);
  uVar48 = SUB84(dVar18,0);
  uVar49 = (undefined4)((ulonglong)dVar18 >> 0x20);
  local_368._8_4_ = uVar48;
  local_368._s_0.X = local_380._s_0.X;
  local_368._12_4_ = uVar49;
  local_2f0._8_4_ = uVar48;
  local_2f0._0_8_ = local_380._s_0.X;
  local_2f0._12_4_ = uVar49;
  dVar18 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar49 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar38 = blendpd(auVar59,auVar51,2);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
  dVar42 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar47 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_2c8 = (param_1->Origin).field0_0x0._s_0.Z;
  auVar39._8_4_ = SUB84(dVar47,0);
  auVar39._0_8_ = dVar42;
  uVar48 = (undefined4)((ulonglong)dVar47 >> 0x20);
  auVar39._12_4_ = uVar48;
  dVar27 = local_2c8 - (double)this->_padding_;
  auVar70._8_4_ = SUB84(dVar6,0);
  auVar70._0_8_ = dVar18;
  auVar70._12_4_ = uVar49;
  auVar67 = blendpd(auVar39,auVar70,2);
  local_2d8 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_2d0 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar65 = local_2d8 - (double)this->_padding_;
  dVar69 = dStack_2d0 - (double)this->_padding_;
  local_380._s_0.Z =
       (local_2f8 + auVar68._0_8_ * auVar61._8_8_ + auVar38._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar28._4_4_,
                        ~(uint)lVar16 & auVar28._0_4_);
  auVar34._8_4_ = SUB84(dVar47,0);
  auVar34._0_8_ = dVar42;
  auVar34._12_4_ = uVar48;
  auVar62._8_4_ = SUB84(dVar69,0);
  auVar62._0_8_ = dVar65;
  uVar48 = (undefined4)((ulonglong)dVar69 >> 0x20);
  auVar62._12_4_ = uVar48;
  dVar36 = auVar34._8_8_;
  auVar30._8_4_ = SUB84(dVar69,0);
  auVar30._0_8_ = dVar65;
  auVar30._12_4_ = uVar48;
  auVar23._8_4_ = SUB84(dVar18,0);
  auVar23._0_8_ = dVar36;
  auVar23._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar27;
  auVar28 = blendpd(auVar30,auVar7,2);
  auVar63._0_8_ = auVar62._8_8_ * dVar42 - dVar36 * dVar65;
  auVar63._8_8_ = dVar27 * dVar47 - auVar23._8_8_ * dVar69;
  auVar52._8_4_ = SUB84(auVar63._8_8_,0);
  auVar52._0_8_ = auVar63._0_8_;
  auVar52._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar60._8_4_ = SUB84(dVar6,0);
  auVar60._0_8_ = dVar18;
  auVar60._12_4_ = uVar49;
  auVar31._0_8_ = auVar28._0_8_ * dVar18 - auVar67._0_8_ * dVar27;
  auVar31._8_8_ = auVar28._8_8_ * dVar6 - auVar67._8_8_ * 0.0;
  dVar53 = auVar52._8_8_ + auVar52._8_8_;
  dVar57 = auVar31._0_8_ + auVar31._0_8_;
  auVar28 = blendpd(auVar63,auVar31,2);
  auVar38._0_8_ = this->_padding_;
  auVar38._8_8_ = this->_padding_;
  uVar48 = SUB84(dVar57,0);
  auVar55._8_4_ = uVar48;
  auVar55._0_8_ = dVar53;
  uVar49 = (undefined4)((ulonglong)dVar57 >> 0x20);
  auVar55._12_4_ = uVar49;
  auVar24._8_4_ = uVar48;
  auVar24._0_8_ = dVar53;
  auVar24._12_4_ = uVar49;
  auVar70 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
  auVar64._0_8_ = auVar28._0_8_ + auVar28._0_8_;
  auVar64._8_8_ = auVar28._8_8_ + auVar28._8_8_;
  auVar45._8_4_ = uVar48;
  auVar45._0_8_ = dVar53;
  auVar45._12_4_ = uVar49;
  auVar56._0_8_ = auVar55._8_8_ * dVar42 - dVar53 * dVar36;
  auVar56._8_8_ = auVar64._0_8_ * dVar47 - auVar24._8_8_ * dVar18;
  auVar28 = blendpd(auVar45,auVar64,2);
  auVar25._8_4_ = SUB84(auVar64._8_8_,0);
  auVar25._0_8_ = auVar64._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
  auVar46._0_8_ = auVar28._0_8_ * dVar18 - auVar64._0_8_ * auVar67._0_8_;
  auVar46._8_8_ = auVar28._8_8_ * dVar6 - auVar25._8_8_ * auVar67._8_8_;
  uVar2 = this->_padding_;
  auVar40._0_8_ =
       (double)CONCAT44((uint)((ulonglong)auVar38._0_8_ >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)auVar38._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar40._8_4_ = (uint)auVar38._8_8_ & _UNK_15061cc88;
  auVar40._12_4_ = (uint)((ulonglong)auVar38._8_8_ >> 0x20) & _UNK_15061cc8c;
  lVar15 = -(ulonglong)(auVar40._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar16 = -(ulonglong)(auVar40._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar26._8_4_ = SUB84(auVar56._8_8_,0);
  auVar26._0_8_ = auVar56._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
  auVar41._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar70._4_4_,
                        ~(uint)lVar15 & auVar70._0_4_);
  auVar41._8_4_ = ~(uint)lVar16 & auVar70._8_4_;
  auVar41._12_4_ = ~(uint)((ulonglong)lVar16 >> 0x20) & auVar70._12_4_;
  lVar15 = -(ulonglong)
            ((double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_398._s_0.X = auVar41._0_8_ * (dVar53 * auVar60._8_8_ + dVar65 + auVar26._8_8_);
  local_398._s_0.Y = auVar41._8_8_ * (dVar57 * dVar6 + dVar69 + auVar46._0_8_);
  auVar5._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar5._0_8_ = uVar2;
  auVar5._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar5);
  auVar28 = blendpd(auVar56,auVar46,2);
  local_398._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar38._4_4_,
                        ~(uint)lVar15 & auVar38._0_4_) *
       (auVar64._0_8_ * auVar60._8_8_ + dVar27 + auVar28._0_8_);
  local_380._s_0.Y = local_368._s_0.Y;
  local_348 = local_398._s_0.X;
  dStack_340 = local_398._s_0.Y;
  local_338 = local_398._s_0.Z;
  local_2e0 = local_380._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_380._s_0,__real_3e45798ee0000000);
  auVar32._0_8_ = local_380._s_0.Z * local_380._s_0.Z;
  auVar32._8_8_ = 0;
  auVar35._0_8_ =
       local_380._s_0.X * local_380._s_0.X + local_380._s_0.Y * local_380._s_0.Y + auVar32._0_8_;
  auVar35._8_8_ = 0;
  auVar28 = sqrtpd(auVar32,auVar35);
  if (auVar28._0_8_ <= 0.0) {
    local_380._s_0.X = 0.0;
    local_380._s_0.Y = 0.0;
    local_380._s_0.Z = 0.0;
  }
  else {
    dVar18 = __real_3ff0000000000000 / auVar28._0_8_;
    local_380._s_0.X = local_380._s_0.X * dVar18;
    local_380._s_0.Y = local_380._s_0.Y * dVar18;
    local_380._s_0.Z = local_380._s_0.Z * dVar18;
  }
  this_00 = &this->_padding_;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            (&local_1c8,(FGroupTopologySelection *)this_00);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_2b8);
  UMeshTopologySelectionMechanic::GetTopoSelectorSettings
            ((UMeshTopologySelectionMechanic *)this,SUB81(&local_350,0));
  if (this->_padding_ == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      uVar11 = (*pcVar4)();
      return (bool)uVar11;
    }
  }
  bVar10 = FMeshTopologySelector::FindSelectedElement
                     ((FMeshTopologySelector *)this->_padding_,&local_350,
                      (TRay<double> *)&local_398._s_0,&local_2b8,(TVector<double> *)&local_328._s_0,
                      (TVector<double> *)&local_368._s_0,(int *)0x0);
  if (bVar10) {
    (param_2->field0_0x0)._s_0.X = local_328._s_0.X;
    (param_2->field0_0x0)._s_0.Y = local_328._s_0.Y;
    (param_2->field0_0x0)._s_0.Z = local_328._s_0.Z;
    (param_3->field0_0x0)._s_0.X = local_368._s_0.X;
    (param_3->field0_0x0)._s_0.Y = local_368._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = local_368._s_0.Z;
    pTVar3 = (TReferenceControllerBase<1> *)this->_padding_;
    this_01 = (FGroupTopologySelector *)this->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((0 < (int)(local_2b8.SelectedEdgeIDs.Elements._8_4_ -
                  local_2b8.SelectedEdgeIDs.Elements._52_4_)) &&
       (*(char *)(this->_padding_ + 0xb4) != '\0')) {
      bVar10 = UE::Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
               ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                             *)&this->_padding_);
      if (bVar10) {
        if (this_01 == (FGroupTopologySelector *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
        }
        FGroupTopologySelector::ExpandSelectionByEdgeRings(this_01,&local_2b8);
      }
    }
    if ((0 < (int)(local_2b8.SelectedEdgeIDs.Elements._8_4_ -
                  local_2b8.SelectedEdgeIDs.Elements._52_4_)) &&
       (*(char *)(this->_padding_ + 0xb3) != '\0')) {
      bVar10 = UE::Core::Private::Function::
               TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
               ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                             *)&this->_padding_);
      if (bVar10) {
        if (this_01 == (FGroupTopologySelector *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
        }
        FGroupTopologySelector::ExpandSelectionByEdgeLoops(this_01,&local_2b8);
        if (this_01 == (FGroupTopologySelector *)0x0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            uVar11 = (*pcVar4)();
            return (bool)uVar11;
          }
        }
        FGroupTopologySelector::ExpandSelectionByBoundaryLoops(this_01,&local_2b8);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar4 = (code *)this->_padding_;
  plVar14 = &this->_padding_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    plVar14 = (longlong *)this->_padding_;
  }
  uVar13 = (**(code **)(*plVar14 + 8))();
  cVar12 = (*pcVar4)(uVar13);
  if (cVar12 == '\0') {
    UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
    pcVar4 = (code *)this->_padding_;
    plVar14 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar14 = (longlong *)this->_padding_;
    }
    uVar13 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar12 = (*pcVar4)(uVar13);
    if (cVar12 == '\0') {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,
                 &local_2b8.SelectedGroupIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                 &local_2b8.SelectedCornerIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                 &local_2b8.SelectedEdgeIDs);
    }
    else {
      UE::Geometry::FGroupTopologySelection::Remove((FGroupTopologySelection *)this_00,&local_2b8);
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
    pcVar4 = (code *)this->_padding_;
    plVar14 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar14 = (longlong *)this->_padding_;
    }
    uVar13 = (**(code **)(*plVar14 + 8))(plVar14);
    cVar12 = (*pcVar4)(uVar13);
    if (cVar12 == '\0') {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                 &local_2b8.SelectedCornerIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                 &local_2b8.SelectedEdgeIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,
                 &local_2b8.SelectedGroupIDs);
    }
    else {
      UE::Geometry::FGroupTopologySelection::Toggle((FGroupTopologySelection *)this_00,&local_2b8);
    }
  }
  if ((((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) ==
        local_1c8.SelectedCornerIDs.Elements._8_4_ - local_1c8.SelectedCornerIDs.Elements._52_4_) &&
      ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) ==
       local_1c8.SelectedEdgeIDs.Elements._8_4_ - local_1c8.SelectedEdgeIDs.Elements._52_4_)) &&
     ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) ==
      local_1c8.SelectedGroupIDs.Elements._8_4_ - local_1c8.SelectedGroupIDs.Elements._52_4_)) {
    bVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                       ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                        &local_1c8.SelectedCornerIDs);
    if (bVar10) {
      bVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                         ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&this->_padding_,
                          &local_1c8.SelectedEdgeIDs);
      if (bVar10) {
        bVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                           ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,
                            &local_1c8.SelectedGroupIDs);
        if (bVar10) {
          bVar10 = false;
          goto LAB_14cbb9d26;
        }
      }
    }
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->_padding_);
  bVar10 = true;
LAB_14cbb9d26:
  local_2b8.SelectedEdgeIDs.HashSize = 0;
  if (local_2b8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2b8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2b8.SelectedEdgeIDs.Elements);
  local_2b8.SelectedCornerIDs.HashSize = 0;
  if (local_2b8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2b8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2b8.SelectedCornerIDs.Elements);
  local_2b8.SelectedGroupIDs.HashSize = 0;
  if (local_2b8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2b8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_2b8);
  local_1c8.SelectedEdgeIDs.HashSize = 0;
  if (local_1c8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.SelectedEdgeIDs.Elements);
  local_1c8.SelectedCornerIDs.HashSize = 0;
  if (local_1c8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1c8.SelectedCornerIDs.Elements);
  local_1c8.SelectedGroupIDs.HashSize = 0;
  if (local_1c8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_1c8);
  return bVar10;
}

