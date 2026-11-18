// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// FGroomCacheAnimationData @ 14dfed750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGroomCacheAnimationData * __thiscall
FGroomCacheAnimationData::FGroomCacheAnimationData
          (FGroomCacheAnimationData *this,
          TArray<FGroomCacheInputData,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          EGroomCacheType param_3,EGroomCacheAttributes param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FGroomCacheAnimationData *pFVar9;
  longlong lVar10;
  FHairStrandsDatas *pFVar11;
  FHairStrandsDatas *pFVar12;
  FHairStrandsDatas *pFVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  EGroomCacheType local_f8;
  undefined1 local_f7 [15];
  undefined1 local_e8 [152];
  uchar local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  (this->GroupsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupsData).ArrayNum = 0;
  (this->GroupsData).ArrayMax = 0;
  this->Version = param_2;
  if (param_3 != Strands) {
    param_4 = param_4 & Position;
  }
  this->Attributes = param_4;
  iVar3 = param_1->ArrayNum;
  pFVar12 = (FHairStrandsDatas *)(param_1->AllocatorInstance).Data;
  pFVar13 = pFVar12 + (longlong)iVar3 * 2;
  local_f8 = param_3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_f7[0] = 0;
      `TCheckedPointerIterator<FGroomCacheInputData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_f7);
    }
    if (pFVar12 == pFVar13) break;
    pFVar11 = pFVar12;
    if (local_f8 != Strands) {
      pFVar11 = pFVar12 + 1;
    }
    local_e8._64_8_ = (FRDGPooledBuffer *)0x0;
    local_e8._72_8_ = (FRDGPooledBuffer *)0x0;
    local_e8._0_8_ = pFVar11->_padding_;
    pFVar11->_padding_ = 0;
    local_e8._8_4_ = (undefined4)pFVar11->_padding_;
    local_e8._12_4_ = *(int *)((longlong)&pFVar11->_padding_ + 4);
    pFVar11->_padding_ = 0;
    local_e8._16_8_ = pFVar11->_padding_;
    pFVar11->_padding_ = 0;
    local_e8._24_4_ = (undefined4)pFVar11->_padding_;
    local_e8._28_4_ = *(int *)((longlong)&pFVar11->_padding_ + 4);
    pFVar11->_padding_ = 0;
    local_e8._32_8_ = pFVar11->_padding_;
    pFVar11->_padding_ = 0;
    local_e8._40_4_ = (undefined4)pFVar11->_padding_;
    local_e8._44_4_ = *(int *)((longlong)&pFVar11->_padding_ + 4);
    pFVar11->_padding_ = 0;
    local_e8._48_8_ = pFVar11->_padding_;
    pFVar11->_padding_ = 0;
    local_e8._56_4_ = (undefined4)pFVar11->_padding_;
    local_e8._60_4_ = *(int *)((longlong)&pFVar11->_padding_ + 4);
    pFVar11->_padding_ = 0;
    fVar14 = GetHairStrandsMaxRadius((TArray<float,TSizedDefaultAllocator<32>_> *)(local_e8 + 0x10))
    ;
    local_e8._96_4_ = GetHairStrandsMaxLength(pFVar11);
    local_e8._80_8_ = pFVar11->_padding_;
    pFVar11->_padding_ = 0;
    local_e8._88_4_ = (undefined4)pFVar11->_padding_;
    local_e8._92_4_ = *(int *)((longlong)&pFVar11->_padding_ + 4);
    pFVar11->_padding_ = 0;
    uVar2 = *(undefined8 *)&(pFVar11->BoundingBox).Min.field0_0x0;
    dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
    pFVar4 = (this->GroupsData).AllocatorInstance.Data;
    local_50 = '\x01';
    local_e8._112_4_ = SUB84(dVar6,0);
    local_e8._104_8_ = (double)(float)uVar2;
    local_e8._116_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar2 = *(undefined8 *)((longlong)&(pFVar11->BoundingBox).Min.field0_0x0 + 8);
    dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
    local_e8._128_4_ = SUB84(dVar6,0);
    local_e8._120_8_ = (double)(float)uVar2;
    local_e8._132_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar2 = *(undefined8 *)((longlong)&(pFVar11->BoundingBox).Max.field0_0x0 + 4);
    dVar6 = (double)(float)((ulonglong)uVar2 >> 0x20);
    local_e8._144_4_ = SUB84(dVar6,0);
    local_e8._136_8_ = (double)(float)uVar2;
    local_e8._148_4_ = (int)((ulonglong)dVar6 >> 0x20);
    local_e8._100_4_ = fVar14;
    if ((pFVar4 <= (FScriptContainerElement *)local_e8) &&
       (lVar10 = (longlong)(this->GroupsData).ArrayMax,
       (FScriptContainerElement *)local_e8 < pFVar4 + lVar10 * 0xa0)) {
      local_110 = (longlong)(this->GroupsData).ArrayNum;
      local_108 = 0xa0;
      local_128 = local_e8;
      local_120 = pFVar4;
      local_118 = lVar10;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FGroomCacheAnimationData *)(*pcVar5)();
        return pFVar9;
      }
    }
    iVar8 = (this->GroupsData).ArrayNum;
    if (iVar8 == (this->GroupsData).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a0,(ForAnyElementType *)this,&(this->GroupsData).ArrayMax);
    }
    (this->GroupsData).ArrayNum = iVar8 + 1;
    FGroomCacheGroupData::FGroomCacheGroupData
              ((FGroomCacheGroupData *)
               ((this->GroupsData).AllocatorInstance.Data + (longlong)iVar8 * 0xa0),
               (FGroomCacheGroupData *)local_e8);
    if ((FScriptContainerElement *)local_e8._80_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._80_8_);
    }
    if ((FRDGPooledBuffer *)local_e8._72_8_ != (FRDGPooledBuffer *)0x0) {
      plVar1 = (longlong *)(local_e8._72_8_ + 8);
      LOCK();
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)*(longlong *)local_e8._72_8_)(local_e8._72_8_,1);
      }
    }
    if ((FRDGPooledBuffer *)local_e8._64_8_ != (FRDGPooledBuffer *)0x0) {
      plVar1 = (longlong *)(local_e8._64_8_ + 8);
      LOCK();
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)*(longlong *)local_e8._64_8_)(local_e8._64_8_,1);
      }
    }
    if ((FScriptContainerElement *)local_e8._48_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._48_8_);
    }
    if ((FScriptContainerElement *)local_e8._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._32_8_);
    }
    if ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._16_8_);
    }
    if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    pFVar12 = pFVar12 + 2;
  }
  return this;
}

// Serialize @ 14e0278b0

void __thiscall
FGroomCacheAnimationData::Serialize(FGroomCacheAnimationData *this,FArchive *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  EGroomCacheAttributes EVar3;
  int *piVar4;
  EGroomCacheAttributes *pEVar5;
  longlong *plVar6;
  uint *puVar7;
  uint *puVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar14;
  int iVar15;
  longlong lVar16;
  uint local_res8 [2];
  
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Version,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->Version);
    }
  }
  else {
    this->Version = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_1->field_0x2a;
  pEVar5 = (EGroomCacheAttributes *)**(undefined8 **)&param_1->field_0x8;
  if ((EGroomCacheAttributes *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar5 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Attributes,1);
  }
  else {
    this->Attributes = *pEVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  plVar6 = *(longlong **)&param_1->field_0x8;
  piVar4 = &(this->GroupsData).ArrayNum;
  local_res8[0] = *piVar4;
  if ((uint *)plVar6[1] < (uint *)*plVar6 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  uVar12 = local_res8[0];
  if ((param_1->field_0x28 & 1) != 0) {
    iVar15 = *piVar4;
    if (iVar15 < (int)local_res8[0]) {
      iVar15 = local_res8[0] - iVar15;
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xa0,8,iVar15,(ForAnyElementType *)this,piVar4,
                          &(this->GroupsData).ArrayMax);
      DefaultConstructItems<FGroomCacheGroupData,int>
                ((this->GroupsData).AllocatorInstance.Data + (longlong)iVar11 * 0xa0,iVar15);
    }
    else {
      if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
      }
      if ((int)local_res8[0] < iVar15) {
        uVar13 = iVar15 - local_res8[0];
        if (((int)(uVar13 | local_res8[0]) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar13 != 0) {
          TArray<FGroomCacheGroupData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (&this->GroupsData,uVar12,uVar13);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa0,8,(ForAnyElementType *)this,*piVar4,&(this->GroupsData).ArrayMax);
        }
      }
    }
  }
  uVar12 = 0;
  if (0 < (int)local_res8[0]) {
    lVar16 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar12 < *piVar4) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      EVar3 = this->Attributes;
      pTVar14 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((this->GroupsData).AllocatorInstance.Data + lVar16);
      UE::Math::operator<<(param_1,(TBox<double> *)&pTVar14[6].ArrayNum);
      if ((EVar3 & Position) != None) {
        TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
                  (param_1,pTVar14);
      }
      if ((EVar3 & Width) != None) {
        TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar14 + 1));
      }
      if ((EVar3 & Color) != None) {
        TArrayPrivateFriend::Serialize<FLinearColor,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)(pTVar14 + 3));
      }
      pTVar1 = pTVar14 + 6;
      puVar7 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar7 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pTVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)pTVar1);
        }
      }
      else {
        *(uint *)&(pTVar1->AllocatorInstance).Data = *puVar7;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      puVar7 = (uint *)((longlong)&pTVar14[6].AllocatorInstance.Data + 4);
      puVar8 = (uint *)**(undefined8 **)&param_1->field_0x8;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar7,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,puVar7);
        }
      }
      else {
        *puVar7 = *puVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar14 + 5));
      uVar12 = uVar12 + 1;
      lVar16 = lVar16 + 0xa0;
    } while ((int)uVar12 < (int)local_res8[0]);
  }
  return;
}

