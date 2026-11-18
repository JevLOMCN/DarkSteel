// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 35

// FEmbeddedSpringConstraintFacade @ 14388b740

FEmbeddedSpringConstraintFacade * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::FEmbeddedSpringConstraintFacade
          (FEmbeddedSpringConstraintFacade *this,FManagedArrayCollection *param_1,FName *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FEmbeddedSpringConstraintFacade *pFVar4;
  
  FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
            ((FEmbeddedSpringBaseFacade *)this,param_1,param_2);
  this->ConstraintIndex = param_3;
  bVar2 = GeometryCollection::Facades::FPositionTargetFacade::IsValid((FPositionTargetFacade *)this)
  ;
  if (((((!bVar2) || (this->_padding_ == 0)) || (this->_padding_ == 0)) ||
      (((this->_padding_ == 0 || (this->_padding_ == 0)) ||
       ((this->_padding_ == 0 || (this->_padding_ == 0)))))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x117,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FEmbeddedSpringConstraintFacade *)(*pcVar1)();
    return pFVar4;
  }
  if (-1 < this->ConstraintIndex) {
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      iVar3 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)this->_padding_,(FName)this->_padding_);
    }
    else {
      iVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x60))();
    }
    if (this->ConstraintIndex < iVar3) {
      return this;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ConstraintIndex >= 0 && ConstraintIndex < ConstraintStartAttribute.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                     ,0x118,L"");
  if (!bVar2) {
    return this;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEmbeddedSpringConstraintFacade *)(*pcVar1)();
  return pFVar4;
}

// FEmbeddedSpringConstraintFacade @ 14388b840

FEmbeddedSpringConstraintFacade * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::FEmbeddedSpringConstraintFacade
          (FEmbeddedSpringConstraintFacade *this,FManagedArrayCollection *param_1,FName *param_2,
          int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FEmbeddedSpringConstraintFacade *pFVar4;
  
  FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
            ((FEmbeddedSpringBaseFacade *)this,param_1,param_2);
  this->ConstraintIndex = param_3;
  bVar2 = GeometryCollection::Facades::FPositionTargetFacade::IsValid((FPositionTargetFacade *)this)
  ;
  if (((((!bVar2) || (this->_padding_ == 0)) || (this->_padding_ == 0)) ||
      (((this->_padding_ == 0 || (this->_padding_ == 0)) ||
       ((this->_padding_ == 0 || (this->_padding_ == 0)))))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x11f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FEmbeddedSpringConstraintFacade *)(*pcVar1)();
    return pFVar4;
  }
  if (-1 < this->ConstraintIndex) {
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      iVar3 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)this->_padding_,(FName)this->_padding_);
    }
    else {
      iVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x60))();
    }
    if (this->ConstraintIndex < iVar3) {
      return this;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ConstraintIndex >= 0 && ConstraintIndex < ConstraintStartAttribute.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                     ,0x120,L"");
  if (!bVar2) {
    return this;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEmbeddedSpringConstraintFacade *)(*pcVar1)();
  return pFVar4;
}

// Append @ 14389c7d0

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::Append
          (FEmbeddedSpringConstraintFacade *this,FEmbeddedSpringConstraintFacade *param_1,
          int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TIntVector2<unsigned_int> TVar9;
  TIntVector2<unsigned_int> TVar10;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_1d0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_1c0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_1b0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_1a0;
  TArrayView<float,int> local_190;
  TArrayView<float,int> local_180;
  TArrayView<float,int> local_170;
  TArrayView<float,int> local_160 [2];
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_140;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_130;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_120;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_110;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_100;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_f0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_e0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_d0;
  TArrayView<float,int> local_c0;
  TArrayView<float_const_,int> local_b0;
  TArrayView<float,int> local_a0;
  TArrayView<float_const_,int> local_90;
  TArrayView<float,int> local_80;
  TArrayView<float_const_,int> local_70;
  TArrayView<float,int> local_60;
  TArrayView<float_const_,int> local_50;
  
  iVar7 = GetNumSprings(param_1);
  if (iVar7 != 0) {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x22a,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (this->_padding_ != param_1->_padding_) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("VerticesGroup == Other.VerticesGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x22b,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    TVar9 = GetConstraintEndPointNumIndices(this);
    TVar10 = GetConstraintEndPointNumIndices(param_1);
    if ((*(int *)TVar9.field0_0x0 != *(int *)TVar10.field0_0x0) ||
       (*(int *)((longlong)TVar9.field0_0x0 + 4) != *(int *)((longlong)TVar10.field0_0x0 + 4))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetConstraintEndPointNumIndices() == Other.GetConstraintEndPointNumIndices()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x22c,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = GetNumSprings(this);
    iVar8 = GetNumSprings(param_1);
    SetNumSprings(this,iVar8 + iVar7);
    plVar1 = &param_1->_padding_;
    plVar2 = &param_1->_padding_;
    Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
              (&local_130,
               (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)
               &param_1->_padding_,(TManagedArrayAccessor<int> *)plVar2,
               (TManagedArrayAccessor<int> *)plVar1,param_1->ConstraintIndex);
    plVar3 = &this->_padding_;
    Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
              (&local_140,
               (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar3,
               this->ConstraintIndex);
    local_1d0.DataPtr = local_140.DataPtr + iVar7;
    local_1d0.ArrayNum = iVar8;
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Softs::Private::CopyArrayViewDataAndApplyOffset<int>(&local_1d0,&local_130,param_2);
    Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
              (&local_110,
               (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)
               &param_1->_padding_,(TManagedArrayAccessor<int> *)plVar2,
               (TManagedArrayAccessor<int> *)plVar1,param_1->ConstraintIndex);
    plVar4 = &this->_padding_;
    Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
              (&local_120,
               (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar4,(TManagedArrayAccessor<int> *)plVar3,
               this->ConstraintIndex);
    local_1c0.DataPtr = local_120.DataPtr + iVar7;
    local_1c0.ArrayNum = iVar8;
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Softs::Private::CopyArrayViewDataAndApplyOffset<int>(&local_1c0,&local_110,param_2);
    Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_f0,
               (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)
               &param_1->_padding_,(TManagedArrayAccessor<int> *)plVar2,
               (TManagedArrayAccessor<int> *)plVar1,param_1->ConstraintIndex);
    Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_100,
               (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_
               ,(TManagedArrayAccessor<int> *)plVar4,(TManagedArrayAccessor<int> *)plVar3,
               this->ConstraintIndex);
    local_1b0.DataPtr = local_100.DataPtr + iVar7;
    local_1b0.ArrayNum = iVar8;
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Softs::Private::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_1b0,&local_f0);
    Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_d0,
               (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)
               &param_1->_padding_,(TManagedArrayAccessor<int> *)plVar2,
               (TManagedArrayAccessor<int> *)plVar1,param_1->ConstraintIndex);
    Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_e0,
               (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_
               ,(TManagedArrayAccessor<int> *)plVar4,(TManagedArrayAccessor<int> *)plVar3,
               this->ConstraintIndex);
    local_1a0.DataPtr = local_e0.DataPtr + iVar7;
    local_1a0.ArrayNum = iVar8;
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Softs::Private::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_1a0,&local_d0);
    Softs::Private::GetConstArrayView<float>
              (&local_b0,(TManagedArrayAccessor<float> *)&param_1->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               param_1->ConstraintIndex);
    Softs::Private::GetArrayView<float>
              (&local_c0,(TManagedArrayAccessor<float> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar4,(TManagedArrayAccessor<int> *)plVar3,
               this->ConstraintIndex);
    local_190.DataPtr = local_c0.DataPtr + iVar7;
    local_190.ArrayNum = iVar8;
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Softs::Private::CopyArrayViewData<float>(&local_190,&local_b0);
    Softs::Private::GetConstArrayView<float>
              (&local_90,(TManagedArrayAccessor<float> *)&param_1->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               param_1->ConstraintIndex);
    Softs::Private::GetArrayView<float>
              (&local_a0,(TManagedArrayAccessor<float> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar4,(TManagedArrayAccessor<int> *)plVar3,
               this->ConstraintIndex);
    local_180.DataPtr = local_a0.DataPtr + iVar7;
    local_180.ArrayNum = iVar8;
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Softs::Private::CopyArrayViewData<float>(&local_180,&local_90);
    Softs::Private::GetConstArrayView<float>
              (&local_70,(TManagedArrayAccessor<float> *)&param_1->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               param_1->ConstraintIndex);
    Softs::Private::GetArrayView<float>
              (&local_80,(TManagedArrayAccessor<float> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar4,(TManagedArrayAccessor<int> *)plVar3,
               this->ConstraintIndex);
    local_170.DataPtr = local_80.DataPtr + iVar7;
    local_170.ArrayNum = iVar8;
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Softs::Private::CopyArrayViewData<float>(&local_170,&local_70);
    Softs::Private::GetConstArrayView<float>
              (&local_50,(TManagedArrayAccessor<float> *)&param_1->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               param_1->ConstraintIndex);
    Softs::Private::GetArrayView<float>
              (&local_60,(TManagedArrayAccessor<float> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar4,(TManagedArrayAccessor<int> *)plVar3,
               this->ConstraintIndex);
    local_160[0].DataPtr = local_60.DataPtr + iVar7;
    local_160[0].ArrayNum = iVar8;
    if (iVar8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    Softs::Private::CopyArrayViewData<float>(local_160,&local_50);
  }
  return;
}

// Append @ 14389cdf0

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::Append
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<UE::Math::TIntVector2<int>_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4,TArrayView<float_const_,int> *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TIntVector2<unsigned_int> TVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  longlong lVar19;
  float fVar20;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  float local_17c;
  int local_178;
  float local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  TArray<int,TSizedDefaultAllocator<32>_> *local_160;
  TArray<float,TSizedDefaultAllocator<32>_> *local_158;
  float *local_150;
  float *local_148;
  TArray<float,TSizedDefaultAllocator<32>_> *local_140;
  float *local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_e8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_d8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_c8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78 [4];
  
  TVar11 = GetConstraintEndPointNumIndices(this);
  if ((*(int *)TVar11.field0_0x0 == 1) && (*(int *)((longlong)TVar11.field0_0x0 + 4) == 1)) {
    iVar9 = GetNumSprings(this);
    iVar5 = param_1->ArrayNum;
    if ((iVar5 != param_2->ArrayNum) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumSprings == InSpringLength.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                           ,0x1c9,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SetNumSprings(this,iVar5 + iVar9);
    plVar1 = &this->_padding_;
    plVar2 = &this->_padding_;
    Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
              (&local_e8,
               (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               this->ConstraintIndex);
    iVar9 = local_e8.ArrayNum;
    if (iVar5 < local_e8.ArrayNum) {
      iVar9 = iVar5;
    }
    iVar12 = 0;
    if (0 < iVar9) {
      iVar12 = iVar9;
    }
    local_130 = (longlong)iVar12;
    local_160 = local_e8.DataPtr + (local_e8.ArrayNum - local_130);
    if ((iVar12 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
              (&local_d8,
               (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               this->ConstraintIndex);
    iVar9 = local_d8.ArrayNum;
    if (iVar5 < local_d8.ArrayNum) {
      iVar9 = iVar5;
    }
    local_188 = 0;
    if (0 < iVar9) {
      local_188 = iVar9;
    }
    local_128 = (longlong)local_188;
    pTVar18 = local_d8.DataPtr + (local_d8.ArrayNum - local_128);
    if ((local_188 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_c8,
               (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_
               ,(TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               this->ConstraintIndex);
    iVar9 = local_c8.ArrayNum;
    if (iVar5 < local_c8.ArrayNum) {
      iVar9 = iVar5;
    }
    local_180 = 0;
    if (0 < iVar9) {
      local_180 = iVar9;
    }
    local_120 = (longlong)local_180;
    local_140 = local_c8.DataPtr + (local_c8.ArrayNum - local_120);
    if ((local_180 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
              (&local_b8,
               (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_
               ,(TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               this->ConstraintIndex);
    iVar9 = local_b8.ArrayNum;
    if (iVar5 < local_b8.ArrayNum) {
      iVar9 = iVar5;
    }
    local_178 = 0;
    if (0 < iVar9) {
      local_178 = iVar9;
    }
    local_118 = (longlong)local_178;
    local_158 = local_b8.DataPtr + (local_b8.ArrayNum - local_118);
    if ((local_178 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Softs::Private::GetArrayView<float>
              (&local_a8,(TManagedArrayAccessor<float> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               this->ConstraintIndex);
    iVar9 = local_a8.ArrayNum;
    if (iVar5 < local_a8.ArrayNum) {
      iVar9 = iVar5;
    }
    local_170 = 0;
    if (0 < iVar9) {
      local_170 = iVar9;
    }
    local_110 = (longlong)local_170;
    local_150 = local_a8.DataPtr + (local_a8.ArrayNum - local_110);
    if ((local_170 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Softs::Private::GetArrayView<float>
              (&local_98,(TManagedArrayAccessor<float> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               this->ConstraintIndex);
    iVar9 = local_98.ArrayNum;
    if (iVar5 < local_98.ArrayNum) {
      iVar9 = iVar5;
    }
    local_16c = 0;
    if (0 < iVar9) {
      local_16c = iVar9;
    }
    local_108 = (longlong)local_16c;
    local_138 = local_98.DataPtr + (local_98.ArrayNum - local_108);
    if ((local_16c < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Softs::Private::GetArrayView<float>
              (&local_88,(TManagedArrayAccessor<float> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               this->ConstraintIndex);
    iVar9 = local_88.ArrayNum;
    if (iVar5 < local_88.ArrayNum) {
      iVar9 = iVar5;
    }
    local_168 = 0;
    if (0 < iVar9) {
      local_168 = iVar9;
    }
    local_100 = (longlong)local_168;
    local_148 = local_88.DataPtr + (local_88.ArrayNum - local_100);
    if ((local_168 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    Softs::Private::GetArrayView<float>
              (local_78,(TManagedArrayAccessor<float> *)&this->_padding_,
               (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
               this->ConstraintIndex);
    iVar9 = local_78[0].ArrayNum;
    if (iVar5 < local_78[0].ArrayNum) {
      iVar9 = iVar5;
    }
    local_164 = 0;
    if (0 < iVar9) {
      local_164 = iVar9;
    }
    local_f8 = (longlong)local_164;
    lVar13 = local_78[0].ArrayNum - local_f8;
    if ((local_164 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar14 = 0;
    if (0 < iVar5) {
      lVar15 = 0;
      lVar13 = lVar13 * 4 - (longlong)local_138;
      local_150 = (float *)((longlong)local_150 - (longlong)local_138);
      local_140 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                  ((longlong)local_140 - (longlong)pTVar18);
      local_148 = (float *)((longlong)local_148 - (longlong)local_138);
      local_160 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                  ((longlong)local_160 - (longlong)pTVar18);
      local_158 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                  ((longlong)local_158 - (longlong)pTVar18);
      piVar17 = &pTVar18->ArrayMax;
      lVar19 = 0;
      local_f0 = (longlong)iVar5;
      do {
        pTVar7 = local_140;
        uVar16 = ~uVar14 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_18c = param_1->DataPtr[lVar15].field0_0x0._s_0.X;
        uVar10 = 0;
        if ((int)uVar14 < iVar12) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   ((longlong)local_160 + -0xc + (longlong)piVar17),&local_18c,1,
                   *(int *)((longlong)local_160 + (longlong)piVar17));
        uVar10 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_184 = param_1->DataPtr[lVar15].field0_0x0._s_0.Y;
        uVar10 = 0;
        if ((int)uVar14 < local_188) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar17 + -3),&local_184,1,*piVar17);
        local_17c = 1.0;
        uVar10 = 0;
        if ((int)uVar14 < local_180) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)
                   ((longlong)piVar17 + (longlong)pTVar7 + -0xc),&local_17c,1,
                   *(int *)((longlong)piVar17 + (longlong)pTVar7));
        local_174 = 1.0;
        uVar10 = 0;
        if ((int)uVar14 < local_178) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<float,TSizedDefaultAllocator<32>_>::CopyToEmpty<float,int>
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)
                   ((longlong)local_158 + -0xc + (longlong)piVar17),&local_174,1,
                   *(int *)((longlong)piVar17 + (longlong)local_158));
        uVar10 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(lVar19 + (longlong)param_2->DataPtr);
        uVar10 = 0;
        if ((int)uVar14 < local_170) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pfVar3 = local_138 + lVar15;
        *(undefined4 *)((longlong)pfVar3 + (longlong)local_150) = uVar4;
        if (((int)uVar14 < 0) || (param_3->ArrayNum <= (int)uVar14)) {
          fVar20 = 0.0;
        }
        else {
          if (((int)uVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar20 = param_3->DataPtr[lVar15];
        }
        uVar10 = 0;
        if ((int)uVar14 < local_16c) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *pfVar3 = fVar20;
        if (((int)uVar14 < 0) || (param_4->ArrayNum <= (int)uVar14)) {
          fVar20 = 0.0;
        }
        else {
          if (((int)uVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar20 = param_4->DataPtr[lVar15];
        }
        uVar10 = 0;
        if ((int)uVar14 < local_168) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(float *)((longlong)pfVar3 + (longlong)local_148) = fVar20;
        if (((int)uVar14 < 0) || (param_5->ArrayNum <= (int)uVar14)) {
          fVar20 = 0.0;
        }
        else {
          if (((int)uVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar20 = param_5->DataPtr[lVar15];
        }
        uVar10 = 0;
        if ((int)uVar14 < local_164) {
          uVar10 = uVar16;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = uVar14 + 1;
        lVar15 = lVar15 + 1;
        piVar17 = piVar17 + 4;
        lVar19 = lVar19 + 4;
        *(float *)((longlong)pfVar3 + (longlong)local_78[0].DataPtr + lVar13) = fVar20;
      } while (lVar15 < local_f0);
    }
  }
  return;
}

// Append @ 14389d800

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::Append
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_1,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_2,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_3,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_4,
          TArrayView<float_const_,int> *param_5,TArrayView<float_const_,int> *param_6,
          TArrayView<float_const_,int> *param_7,TArrayView<float_const_,int> *param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  int local_170;
  int local_16c;
  longlong local_168;
  TArrayView<float,int> local_130;
  TArrayView<float,int> local_120;
  TArrayView<float,int> local_110;
  TArrayView<float,int> local_100;
  TArrayView<float_const_,int> local_f0;
  TArrayView<int_const_,int> local_e0;
  TArrayView<float_const_,int> local_d0;
  TArrayView<int_const_,int> local_c0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_b0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_a0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_90;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_80 [4];
  
  iVar7 = GetNumSprings(this);
  iVar4 = param_1->ArrayNum;
  if ((iVar4 != param_2->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumSprings == InSourceWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x1f9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar4 != param_3->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumSprings == InTargetIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x1fa,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar4 != param_4->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumSprings == InTargetWeights.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x1fb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar4 != param_5->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumSprings == InSpringLength.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x1fc,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  SetNumSprings(this,iVar4 + iVar7);
  Softs::Private::GetArrayView<float>
            (&local_130,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  iVar16 = local_130.ArrayNum;
  if (iVar4 < local_130.ArrayNum) {
    iVar16 = iVar4;
  }
  iVar12 = 0;
  if (0 < iVar16) {
    iVar12 = iVar16;
  }
  if ((iVar12 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Softs::Private::GetArrayView<float>
            (&local_120,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  iVar16 = local_120.ArrayNum;
  if (iVar4 < local_120.ArrayNum) {
    iVar16 = iVar4;
  }
  iVar13 = 0;
  if (0 < iVar16) {
    iVar13 = iVar16;
  }
  pfVar1 = local_120.DataPtr + ((longlong)local_120.ArrayNum - (longlong)iVar13);
  if ((iVar13 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Softs::Private::GetArrayView<float>
            (&local_110,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  iVar16 = local_110.ArrayNum;
  if (iVar4 < local_110.ArrayNum) {
    iVar16 = iVar4;
  }
  iVar14 = 0;
  if (0 < iVar16) {
    iVar14 = iVar16;
  }
  if ((iVar14 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  Softs::Private::GetArrayView<float>
            (&local_100,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  iVar16 = local_100.ArrayNum;
  if (iVar4 < local_100.ArrayNum) {
    iVar16 = iVar4;
  }
  iVar11 = 0;
  if (0 < iVar16) {
    iVar11 = iVar16;
  }
  if ((iVar11 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar15 = 0;
  if (0 < iVar4) {
    lVar19 = 0;
    lVar17 = 0;
    local_168 = 0;
    do {
      uVar18 = ~uVar15 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar15 < param_4->ArrayNum) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_d0.DataPtr = *(float **)((longlong)&(param_4->DataPtr->AllocatorInstance).Data + lVar17)
      ;
      iVar16 = *(int *)((longlong)&param_4->DataPtr->ArrayNum + lVar17);
      if ((iVar16 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar8 = uVar18;
      }
      local_d0.ArrayNum = iVar16;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_c0.DataPtr = *(int **)((longlong)&(param_3->DataPtr->AllocatorInstance).Data + lVar17);
      iVar16 = *(int *)((longlong)&param_3->DataPtr->ArrayNum + lVar17);
      if ((iVar16 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar8 = uVar18;
      }
      local_c0.ArrayNum = iVar16;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_f0.DataPtr = *(float **)((longlong)&(param_2->DataPtr->AllocatorInstance).Data + lVar17)
      ;
      iVar16 = *(int *)((longlong)&param_2->DataPtr->ArrayNum + lVar17);
      if ((iVar16 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar8 = uVar18;
      }
      local_f0.ArrayNum = iVar16;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_e0.DataPtr = *(int **)((longlong)&(param_1->DataPtr->AllocatorInstance).Data + lVar17);
      iVar16 = *(int *)((longlong)&param_1->DataPtr->ArrayNum + lVar17);
      if ((iVar16 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_e0.ArrayNum = iVar16;
      GetConstraintEndPointNumIndices(this);
      Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
                (&local_b0,
                 (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)
                 &this->_padding_,(TManagedArrayAccessor<int> *)&this->_padding_,
                 (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
      iVar16 = iVar7 + uVar15;
      pTVar9 = TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::operator[]
                         (&local_b0,iVar16);
      Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
                (&local_a0,
                 (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_
                 ,(TManagedArrayAccessor<int> *)&this->_padding_,
                 (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
      pTVar10 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::operator[]
                          (&local_a0,iVar16);
      Softs::Private::SetIndicesAndWeights(local_170,pTVar10,pTVar9,&local_e0,&local_f0);
      Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
                (&local_90,
                 (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)
                 &this->_padding_,(TManagedArrayAccessor<int> *)&this->_padding_,
                 (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
      pTVar9 = TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::operator[]
                         (&local_90,iVar16);
      Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
                (local_80,(TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)
                          &this->_padding_,(TManagedArrayAccessor<int> *)&this->_padding_,
                 (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
      pTVar10 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::operator[](local_80,iVar16)
      ;
      Softs::Private::SetIndicesAndWeights(local_16c,pTVar10,pTVar9,&local_c0,&local_d0);
      uVar8 = 0;
      if ((int)uVar15 < param_5->ArrayNum) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(undefined4 *)(local_168 + (longlong)param_5->DataPtr);
      uVar8 = 0;
      if ((int)uVar15 < iVar12) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pfVar2 = pfVar1 + lVar19;
      *(undefined4 *)
       ((longlong)pfVar2 +
       (longlong)local_130.DataPtr +
       (((longlong)local_130.ArrayNum - (longlong)iVar12) * 4 - (longlong)pfVar1)) = uVar3;
      if (((int)uVar15 < 0) || (param_6->ArrayNum <= (int)uVar15)) {
        fVar20 = 0.0;
      }
      else {
        if (((int)uVar15 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar20 = param_6->DataPtr[lVar19];
      }
      uVar8 = 0;
      if ((int)uVar15 < iVar13) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *pfVar2 = fVar20;
      if (((int)uVar15 < 0) || (param_7->ArrayNum <= (int)uVar15)) {
        fVar20 = 0.0;
      }
      else {
        if (((int)uVar15 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar20 = param_7->DataPtr[lVar19];
      }
      uVar8 = 0;
      if ((int)uVar15 < iVar14) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)((longlong)pfVar2 +
                (longlong)local_110.DataPtr +
                (((longlong)local_110.ArrayNum - (longlong)iVar14) * 4 - (longlong)pfVar1)) = fVar20
      ;
      if (((int)uVar15 < 0) || (param_8->ArrayNum <= (int)uVar15)) {
        fVar20 = 0.0;
      }
      else {
        if (((int)uVar15 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar20 = param_8->DataPtr[lVar19];
      }
      uVar8 = 0;
      if ((int)uVar15 < iVar11) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_168 = local_168 + 4;
      uVar15 = uVar15 + 1;
      lVar19 = lVar19 + 1;
      lVar17 = lVar17 + 0x10;
      *(float *)((longlong)pfVar2 +
                (longlong)local_100.DataPtr +
                (((longlong)local_100.ArrayNum - (longlong)iVar11) * 4 - (longlong)pfVar1)) = fVar20
      ;
    } while (lVar19 < iVar4);
  }
  return;
}

// CalculateTypeHash @ 1438a3d40

uint __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::CalculateTypeHash
          (FEmbeddedSpringConstraintFacade *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType *pFVar4;
  uint uVar5;
  TIntVector2<unsigned_int> TVar6;
  longlong lVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_48;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_38;
  
  TVar6 = GetConstraintEndPointNumIndices(this);
  uVar5 = (*FCrc::MemCrc32Func)((void *)TVar6.field0_0x0,8,0);
  plVar1 = &this->_padding_;
  plVar2 = &this->_padding_;
  Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_48,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_38,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  uVar5 = GetArrayHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                    (local_38.DataPtr,(longlong)local_48.ArrayNum,
                     param_1 * 0x40 + uVar5 + (param_1 >> 2) + 0x9e3779b9 ^ param_1);
  Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            ((TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)&local_38,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            ((TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)&local_48,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  uVar5 = GetArrayHash<TArray<float,TSizedDefaultAllocator<32>_>_>
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)local_48.DataPtr,
                     (longlong)local_38.ArrayNum,uVar5);
  Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_38,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_48,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  uVar5 = GetArrayHash<TArray<int,TSizedDefaultAllocator<32>_>_>
                    (local_48.DataPtr,(longlong)local_38.ArrayNum,uVar5);
  Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            ((TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)&local_38,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            ((TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *)&local_48,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  uVar5 = GetArrayHash<TArray<float,TSizedDefaultAllocator<32>_>_>
                    ((TArray<float,TSizedDefaultAllocator<32>_> *)local_48.DataPtr,
                     (longlong)local_38.ArrayNum,uVar5);
  Softs::Private::GetConstArrayView<float>
            ((TArrayView<float_const_,int> *)&local_48,
             (TManagedArrayAccessor<float> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar2,
             (TManagedArrayAccessor<int> *)plVar1,this->ConstraintIndex);
  Softs::Private::GetConstArrayView<float>
            ((TArrayView<float_const_,int> *)&local_38,
             (TManagedArrayAccessor<float> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar2,
             (TManagedArrayAccessor<int> *)plVar1,this->ConstraintIndex);
  pTVar3 = local_38.DataPtr;
  for (lVar7 = (longlong)local_48.ArrayNum; lVar7 != 0; lVar7 = lVar7 + -1) {
    pFVar4 = &pTVar3->AllocatorInstance;
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)&(pTVar3->AllocatorInstance).Data + 4);
    uVar5 = uVar5 ^ *(int *)&pFVar4->Data + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2);
  }
  Softs::Private::GetConstArrayView<float>
            ((TArrayView<float_const_,int> *)&local_48,
             (TManagedArrayAccessor<float> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar2,
             (TManagedArrayAccessor<int> *)plVar1,this->ConstraintIndex);
  Softs::Private::GetConstArrayView<float>
            ((TArrayView<float_const_,int> *)&local_38,
             (TManagedArrayAccessor<float> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar2,
             (TManagedArrayAccessor<int> *)plVar1,this->ConstraintIndex);
  pTVar3 = local_38.DataPtr;
  for (lVar7 = (longlong)local_48.ArrayNum; lVar7 != 0; lVar7 = lVar7 + -1) {
    pFVar4 = &pTVar3->AllocatorInstance;
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)&(pTVar3->AllocatorInstance).Data + 4);
    uVar5 = uVar5 ^ *(int *)&pFVar4->Data + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2);
  }
  Softs::Private::GetConstArrayView<float>
            ((TArrayView<float_const_,int> *)&local_48,
             (TManagedArrayAccessor<float> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar2,
             (TManagedArrayAccessor<int> *)plVar1,this->ConstraintIndex);
  Softs::Private::GetConstArrayView<float>
            ((TArrayView<float_const_,int> *)&local_38,
             (TManagedArrayAccessor<float> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar2,
             (TManagedArrayAccessor<int> *)plVar1,this->ConstraintIndex);
  pTVar3 = local_38.DataPtr;
  for (lVar7 = (longlong)local_48.ArrayNum; lVar7 != 0; lVar7 = lVar7 + -1) {
    pFVar4 = &pTVar3->AllocatorInstance;
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)&(pTVar3->AllocatorInstance).Data + 4);
    uVar5 = uVar5 ^ *(int *)&pFVar4->Data + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2);
  }
  Softs::Private::GetConstArrayView<float>
            ((TArrayView<float_const_,int> *)&local_48,
             (TManagedArrayAccessor<float> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar2,
             (TManagedArrayAccessor<int> *)plVar1,this->ConstraintIndex);
  Softs::Private::GetConstArrayView<float>
            ((TArrayView<float_const_,int> *)&local_38,
             (TManagedArrayAccessor<float> *)&this->_padding_,(TManagedArrayAccessor<int> *)plVar2,
             (TManagedArrayAccessor<int> *)plVar1,this->ConstraintIndex);
  for (lVar7 = (longlong)local_48.ArrayNum; lVar7 != 0; lVar7 = lVar7 + -1) {
    pFVar4 = &(local_38.DataPtr)->AllocatorInstance;
    local_38.DataPtr =
         (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((longlong)&((local_38.DataPtr)->AllocatorInstance).Data + 4);
    uVar5 = uVar5 ^ *(int *)&pFVar4->Data + -0x61c88647 + uVar5 * 0x40 + (uVar5 >> 2);
  }
  return uVar5;
}

// CleanupAndCompactInvalidSprings @ 1438a79f0

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::CleanupAndCompactInvalidSprings
          (FEmbeddedSpringConstraintFacade *this)

{
  code *pcVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint local_88 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_70;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_60;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_50;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_40;
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  iVar4 = GetNumSprings(this);
  local_88[0] = 0;
  if (0 < iVar4) {
    do {
      Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
                (&local_70,
                 (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)
                 &this->_padding_,(TManagedArrayAccessor<int> *)&this->_padding_,
                 (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
      lVar8 = (longlong)(int)local_88[0];
      uVar5 = 0;
      if ((int)local_88[0] < local_70.ArrayNum) {
        uVar5 = ~local_88[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pTVar2 = local_70.DataPtr;
      Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
                (&local_60,
                 (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_
                 ,(TManagedArrayAccessor<int> *)&this->_padding_,
                 (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
      lVar7 = (longlong)(int)local_88[0];
      uVar5 = 0;
      if ((int)local_88[0] < local_60.ArrayNum) {
        uVar5 = ~local_88[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar3 = Softs::Private::CleanIndicesAndWeights(local_60.DataPtr + lVar7,pTVar2 + lVar8);
      if (bVar3) {
LAB_1438a7c89:
        if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)local_88) &&
            ((FScriptContainerElement *)local_88 <
             local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 4)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = local_80.ArrayNum;
        if (local_80.ArrayNum == local_80.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_80.AllocatorInstance,&local_80.ArrayMax);
        }
        local_80.ArrayNum = iVar6 + 1;
        *(uint *)(local_80.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_88[0];
      }
      else {
        Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
                  (&local_50,
                   (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)
                   &this->_padding_,(TManagedArrayAccessor<int> *)&this->_padding_,
                   (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
        lVar8 = (longlong)(int)local_88[0];
        uVar5 = 0;
        if ((int)local_88[0] < local_50.ArrayNum) {
          uVar5 = ~local_88[0] >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar2 = local_50.DataPtr;
        Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
                  (&local_40,
                   (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)
                   &this->_padding_,(TManagedArrayAccessor<int> *)&this->_padding_,
                   (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
        lVar7 = (longlong)(int)local_88[0];
        uVar5 = 0;
        if ((int)local_88[0] < local_40.ArrayNum) {
          uVar5 = ~local_88[0] >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar3 = Softs::Private::CleanIndicesAndWeights(local_40.DataPtr + lVar7,pTVar2 + lVar8);
        if (bVar3) goto LAB_1438a7c89;
      }
      local_88[0] = local_88[0] + 1;
    } while ((int)local_88[0] < iVar4);
  }
  if (local_80.ArrayNum != 0) {
    RemoveSprings(this,&local_80);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// GetCompressionStiffness @ 1438ba300

TArrayView<float,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetCompressionStiffness
          (FEmbeddedSpringConstraintFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  Softs::Private::GetArrayView<float>
            (__return_storage_ptr__,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetCompressionStiffnessConst @ 1438ba340

TArrayView<float_const_,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetCompressionStiffnessConst
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  Softs::Private::GetConstArrayView<float>
            (__return_storage_ptr__,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetConstraintEndPointNumIndices @ 1438ba380

TIntVector2<unsigned_int> __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetConstraintEndPointNumIndices
          (FEmbeddedSpringConstraintFacade *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TIntVector2<unsigned_int> TVar6;
  TIntVector2<unsigned_int>_u_0 in_RDX;
  
  uVar1 = this->ConstraintIndex;
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.field0_0x0 = (TIntVector2<unsigned_int>_u_0)(*pcVar3)();
      return (TIntVector2<unsigned_int>)TVar6.field0_0x0;
    }
  }
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.field0_0x0 = (TIntVector2<unsigned_int>_u_0)(*pcVar3)();
      return (TIntVector2<unsigned_int>)TVar6.field0_0x0;
    }
  }
  *(undefined8 *)in_RDX = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 8);
  return (TIntVector2<unsigned_int>)in_RDX;
}

// GetDamping @ 1438ba440

TArrayView<float,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetDamping
          (FEmbeddedSpringConstraintFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  Softs::Private::GetArrayView<float>
            (__return_storage_ptr__,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetDampingConst @ 1438ba480

TArrayView<float_const_,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetDampingConst
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  Softs::Private::GetConstArrayView<float>
            (__return_storage_ptr__,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetExtensionStiffness @ 1438ba640

TArrayView<float,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetExtensionStiffness
          (FEmbeddedSpringConstraintFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  Softs::Private::GetArrayView<float>
            (__return_storage_ptr__,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetExtensionStiffnessConst @ 1438ba680

TArrayView<float_const_,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetExtensionStiffnessConst
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  Softs::Private::GetConstArrayView<float>
            (__return_storage_ptr__,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetNumSprings @ 1438bb390

int __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetNumSprings(FEmbeddedSpringConstraintFacade *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    piVar5 = TManagedArrayAccessor<int>::operator[]
                       ((TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
    iVar4 = *piVar5;
    piVar5 = TManagedArrayAccessor<int>::operator[]
                       ((TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
    iVar1 = *piVar5;
    if (iVar4 == -1) {
      if (iVar1 == -1) {
        return 0;
      }
    }
    else if (iVar1 != -1) {
      return (iVar1 - iVar4) + 1;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0x13d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return 0;
}

// GetSourceIndex @ 1438bc7c0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetSourceIndex
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetSourceIndexConst @ 1438bc800

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetSourceIndexConst
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetSourceWeights @ 1438bc840

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetSourceWeights
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetSourceWeightsConst @ 1438bc880

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetSourceWeightsConst
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetSpringLength @ 1438bca20

TArrayView<float,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetSpringLength
          (FEmbeddedSpringConstraintFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  Softs::Private::GetArrayView<float>
            (__return_storage_ptr__,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetSpringLengthConst @ 1438bca60

TArrayView<float_const_,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetSpringLengthConst
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<float_const_,int> *__return_storage_ptr__)

{
  Softs::Private::GetConstArrayView<float>
            (__return_storage_ptr__,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetTargetIndex @ 1438bcb50

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetTargetIndex
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetTargetIndexConst @ 1438bcb90

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetTargetIndexConst
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetTargetWeights @ 1438bcbd0

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetTargetWeights
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// GetTargetWeightsConst @ 1438bcc10

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> * __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::GetTargetWeightsConst
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *__return_storage_ptr__)

{
  Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  return __return_storage_ptr__;
}

// Initialize @ 1438c28b0

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::Initialize
          (FEmbeddedSpringConstraintFacade *this,TIntVector2<unsigned_int> *param_1,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_2,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_3,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *param_4,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *param_5,
          TArrayView<float_const_,int> *param_6,TArrayView<float_const_,int> *param_7,
          TArrayView<float_const_,int> *param_8,TArrayView<float_const_,int> *param_9,
          FString *param_10)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0x1e5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetNumSprings(this,0);
  SetDefaults(this);
  SetConstraintEndPointNumIndices(this,param_1);
  SetConstraintName(this,param_10);
  Append(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

// Initialize @ 1438c29a0

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::Initialize
          (FEmbeddedSpringConstraintFacade *this,FEmbeddedSpringConstraintFacade *param_1,
          int param_2)

{
  longlong *this_00;
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TIntVector2<unsigned_int> TVar9;
  int *piVar10;
  int iVar11;
  longlong *plVar12;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_128;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_118;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_108;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_f8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_e8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_d8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_c8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38;
  
  if (this->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0x20f,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->_padding_ != param_1->_padding_) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("VerticesGroup == Other.VerticesGroup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0x210,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SetNumSprings(this,0);
  SetDefaults(this);
  TVar9 = GetConstraintEndPointNumIndices(param_1);
  SetConstraintEndPointNumIndices(this,(TIntVector2<unsigned_int> *)TVar9.field0_0x0);
  uVar3 = param_1->ConstraintIndex;
  if (param_1->_padding_ == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = param_1->_padding_;
  uVar8 = 0;
  if ((int)uVar3 < *(int *)(lVar5 + 0x18)) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SetConstraintName(this,(FString *)((longlong)(int)uVar3 * 0x10 + *(longlong *)(lVar5 + 0x10)));
  this_00 = &param_1->_padding_;
  if ((param_1->_padding_ != 0) && (param_1->_padding_ != 0)) {
    piVar10 = TManagedArrayAccessor<int>::operator[]
                        ((TManagedArrayAccessor<int> *)this_00,param_1->ConstraintIndex);
    iVar11 = *piVar10;
    piVar10 = TManagedArrayAccessor<int>::operator[]
                        ((TManagedArrayAccessor<int> *)&param_1->_padding_,param_1->ConstraintIndex)
    ;
    iVar4 = *piVar10;
    if (iVar11 == -1) {
      if (iVar4 == -1) goto LAB_1438c2b64;
    }
    else if (iVar4 != -1) {
      iVar11 = (iVar4 - iVar11) + 1;
      goto LAB_1438c2b6d;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Start == End",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0x13d,
                       L"Only one boundary of the range is set to INDEX_NONE, when both should.");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
LAB_1438c2b64:
  iVar11 = 0;
LAB_1438c2b6d:
  plVar12 = &param_1->_padding_;
  SetNumSprings(this,iVar11);
  Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_128,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&param_1->_padding_,
             (TManagedArrayAccessor<int> *)this_00,(TManagedArrayAccessor<int> *)plVar12,
             param_1->ConstraintIndex);
  plVar1 = &this->_padding_;
  plVar2 = &this->_padding_;
  Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_118,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::CopyArrayViewDataAndApplyOffset<int>(&local_118,&local_128,param_2);
  Softs::Private::GetConstArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_108,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&param_1->_padding_,
             (TManagedArrayAccessor<int> *)this_00,(TManagedArrayAccessor<int> *)plVar12,
             param_1->ConstraintIndex);
  Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_f8,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::CopyArrayViewDataAndApplyOffset<int>(&local_f8,&local_108,param_2);
  Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_e8,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)
             &param_1->_padding_,(TManagedArrayAccessor<int> *)this_00,
             (TManagedArrayAccessor<int> *)plVar12,param_1->ConstraintIndex);
  Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_d8,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>(&local_d8,&local_e8)
  ;
  Softs::Private::GetConstArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_c8,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)
             &param_1->_padding_,(TManagedArrayAccessor<int> *)this_00,
             (TManagedArrayAccessor<int> *)plVar12,param_1->ConstraintIndex);
  Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_b8,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>(&local_b8,&local_c8)
  ;
  Softs::Private::GetConstArrayView<float>
            (&local_a8,(TManagedArrayAccessor<float> *)&param_1->_padding_,
             (TManagedArrayAccessor<int> *)this_00,(TManagedArrayAccessor<int> *)plVar12,
             param_1->ConstraintIndex);
  Softs::Private::GetArrayView<float>
            (&local_98,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::CopyArrayViewData<float>(&local_98,&local_a8);
  Softs::Private::GetConstArrayView<float>
            (&local_88,(TManagedArrayAccessor<float> *)&param_1->_padding_,
             (TManagedArrayAccessor<int> *)this_00,(TManagedArrayAccessor<int> *)plVar12,
             param_1->ConstraintIndex);
  Softs::Private::GetArrayView<float>
            (&local_78,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::CopyArrayViewData<float>(&local_78,&local_88);
  Softs::Private::GetConstArrayView<float>
            (&local_68,(TManagedArrayAccessor<float> *)&param_1->_padding_,
             (TManagedArrayAccessor<int> *)this_00,(TManagedArrayAccessor<int> *)plVar12,
             param_1->ConstraintIndex);
  Softs::Private::GetArrayView<float>
            (&local_58,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::CopyArrayViewData<float>(&local_58,&local_68);
  Softs::Private::GetConstArrayView<float>
            (&local_48,(TManagedArrayAccessor<float> *)&param_1->_padding_,
             (TManagedArrayAccessor<int> *)this_00,(TManagedArrayAccessor<int> *)plVar12,
             param_1->ConstraintIndex);
  Softs::Private::GetArrayView<float>
            (&local_38,(TManagedArrayAccessor<float> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)plVar2,(TManagedArrayAccessor<int> *)plVar1,
             this->ConstraintIndex);
  Softs::Private::CopyArrayViewData<float>(&local_38,&local_48);
  return;
}

// Initialize @ 1438c2e20

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::Initialize
          (FEmbeddedSpringConstraintFacade *this,
          TArrayView<UE::Math::TIntVector2<int>_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4,TArrayView<float_const_,int> *param_5,
          FString *param_6)

{
  code *pcVar1;
  bool bVar2;
  TIntVector2<unsigned_int>_u_0 local_res8;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0x1b4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SetNumSprings(this,0);
  SetDefaults(this);
  local_res8._s_0.X = 1;
  local_res8._s_0.Y = 1;
  SetConstraintEndPointNumIndices(this,(TIntVector2<unsigned_int> *)&local_res8._s_0);
  SetConstraintName(this,param_6);
  Append(this,param_1,param_2,param_3,param_4,param_5);
  return;
}

// RemoveSprings @ 1438cdbe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::RemoveSprings
          (FEmbeddedSpringConstraintFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x144,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_1->ArrayNum != 0) {
    uVar11 = 0;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    piVar9 = TManagedArrayAccessor<int>::operator[]
                       ((TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
    iVar2 = *piVar9;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_38,param_1->ArrayNum,Default);
    iVar13 = param_1->ArrayNum;
    uVar12 = uVar11;
    if (0 < iVar13) {
      do {
        uVar10 = (uint)uVar11;
        uVar7 = 0;
        if ((int)uVar10 < iVar13) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar13 = *(int *)((param_1->AllocatorInstance).Data + uVar12);
        uVar7 = 0;
        if ((int)uVar10 < local_38.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        *(int *)(local_38.AllocatorInstance.Data + uVar12) = iVar13 + iVar2;
        iVar13 = param_1->ArrayNum;
        uVar12 = uVar12 + 4;
      } while ((int)(uVar10 + 1) < iVar13);
    }
    if (((this->_padding_ == 0) || (this->_padding_ == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ConstraintStartAttribute.IsValid() && ConstraintEndAttribute.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                           ,0x153,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->_padding_ == 0) || (this->_padding_ == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined1 *)(this->_padding_ + 8) = 1;
    lVar3 = this->_padding_;
    if (((this->_padding_ == 0) || (this->_padding_ == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined1 *)(this->_padding_ + 8) = 1;
    uVar7 = this->ConstraintIndex;
    lVar4 = this->_padding_;
    uVar8 = 0;
    uVar10 = uVar8;
    if ((int)uVar7 < *(int *)(lVar3 + 0x18)) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar9 = (int *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar7 * 4);
    uVar7 = this->ConstraintIndex;
    uVar10 = uVar8;
    if ((int)uVar7 < *(int *)(lVar4 + 0x18)) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x10) + (longlong)(int)uVar7 * 4);
    if (((*piVar9 == -1) || (*piVar1 == -1)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Start != INDEX_NONE && End != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                           ,0x159,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *piVar9;
    iVar13 = (*piVar1 - iVar2) + 1;
    if ((local_38.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)local_38.AllocatorInstance.Data < *piVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GlobalIndexSortedDeletionList[0] >= Start",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                           ,0x15e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((int)(local_38.ArrayNum - 1U) < local_38.ArrayNum) {
      uVar8 = ~(local_38.ArrayNum - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*piVar1 < *(int *)(local_38.AllocatorInstance.Data + (longlong)(local_38.ArrayNum + -1) * 4
                           )) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GlobalIndexSortedDeletionList.Last() <= End",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                           ,0x15f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((iVar13 < local_38.ArrayNum) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OrigNumElements >= GlobalIndexSortedDeletionList.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                           ,0x160,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x28))
              ((longlong *)this->_padding_,
               &GeometryCollection::Facades::FPositionTargetFacade::GroupName,&local_38,0x101);
    if (local_38.ArrayNum == iVar13) {
      *piVar1 = -1;
      *piVar9 = -1;
    }
    else {
      iVar13 = iVar13 + (iVar2 - local_38.ArrayNum) + -1;
      if (((*piVar9 != iVar2) && (*piVar9 != -1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Start == OrigStart || Start == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                             ,0x16c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((*piVar1 != iVar13) && (*piVar1 != -1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("End == NewEnd || End == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                             ,0x16d,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *piVar9 = iVar2;
      *piVar1 = iVar13;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// Reset @ 1438d0280

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::Reset(FEmbeddedSpringConstraintFacade *this)

{
  SetNumSprings(this,0);
  SetDefaults(this);
  return;
}

// SetConstraintEndPointNumIndices @ 1438d1c80

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::SetConstraintEndPointNumIndices
          (FEmbeddedSpringConstraintFacade *this,TIntVector2<unsigned_int> *param_1)

{
  uint uVar1;
  longlong lVar2;
  TIntVector2<unsigned_int>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar1 = this->ConstraintIndex;
  if ((this->_padding_ == 0) || (this->_padding_ == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray != nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x7c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(undefined1 *)(this->_padding_ + 8) = 1;
  lVar2 = this->_padding_;
  TVar3 = param_1->field0_0x0;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  ((TIntVector2<unsigned_int>_u_0 *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)uVar1 * 8))->_s_0
       = (TIntVector2<unsigned_int>_u_0_s_0)TVar3;
  return;
}

// SetConstraintName @ 1438d1d50

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::SetConstraintName
          (FEmbeddedSpringConstraintFacade *this,FString *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar1 = this->ConstraintIndex;
  if ((this->_padding_ == 0) || (this->_padding_ == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray != nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x7c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined1 *)(this->_padding_ + 8) = 1;
  lVar2 = this->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x18)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ::FString::operator=
            ((FString *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar2 + 0x10)),param_1);
  return;
}

// SetDefaults @ 1438d1ee0

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::SetDefaults(FEmbeddedSpringConstraintFacade *this)

{
  code *pcVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [6];
  FString local_18;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = -1;
  TManagedArrayAccessor<int>::ModifyAt
            ((TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex,local_res8);
  local_res10[0] = -1;
  TManagedArrayAccessor<int>::ModifyAt
            ((TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex,local_res10);
  ::FString::FString(&local_18,L"");
  SetConstraintName(this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetIndicesAndWeights @ 1438d2780

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::SetIndicesAndWeights
          (FEmbeddedSpringConstraintFacade *this,int param_1,TArrayView<int_const_,int> *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<int_const_,int> *param_4,
          TArrayView<float_const_,int> *param_5)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res8;
  int local_resc;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_38;
  
  GetConstraintEndPointNumIndices(this);
  Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_38,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  pTVar1 = TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::operator[](&local_38,param_1);
  Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            ((TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)&local_38,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  pTVar2 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::operator[]
                     ((TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)&local_38,param_1);
  Softs::Private::SetIndicesAndWeights(local_res8,pTVar2,pTVar1,param_2,param_3);
  Softs::Private::GetArrayView<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_38,
             (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  pTVar1 = TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::operator[](&local_38,param_1);
  Softs::Private::GetArrayView<TArray<int,TSizedDefaultAllocator<32>_>_>
            ((TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)&local_38,
             (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,
             (TManagedArrayAccessor<int> *)&this->_padding_,this->ConstraintIndex);
  pTVar2 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::operator[]
                     ((TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)&local_38,param_1);
  Softs::Private::SetIndicesAndWeights(local_resc,pTVar2,pTVar1,param_4,param_5);
  return;
}

// SetNumSprings @ 1438d3b00

void __thiscall
Chaos::Softs::FEmbeddedSpringConstraintFacade::SetNumSprings
          (FEmbeddedSpringConstraintFacade *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x177,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumSprings >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x178,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->_padding_ == 0) || (this->_padding_ == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintStartAttribute.IsValid() && ConstraintEndAttribute.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x179,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->_padding_ == 0) || (this->_padding_ == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined1 *)(this->_padding_ + 8) = 1;
  lVar10 = this->_padding_;
  if (((this->_padding_ == 0) || (this->_padding_ == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined1 *)(this->_padding_ + 8) = 1;
  uVar6 = this->ConstraintIndex;
  lVar3 = this->_padding_;
  uVar8 = 0;
  if ((int)uVar6 < *(int *)(lVar10 + 0x18)) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = this->ConstraintIndex;
  piVar1 = (int *)(*(longlong *)(lVar10 + 0x10) + (longlong)(int)uVar6 * 4);
  uVar6 = 0;
  if ((int)uVar8 < *(int *)(lVar3 + 0x18)) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar2 = (int *)(*(longlong *)(lVar3 + 0x10) + (longlong)(int)uVar8 * 4);
  if (((*piVar1 == -1) && (*piVar2 != -1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Start != INDEX_NONE || End == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x17f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = *piVar1;
  if (iVar7 == -1) {
    iVar12 = 0;
  }
  else {
    iVar12 = (*piVar2 - iVar7) + 1;
  }
  iVar11 = param_1 - iVar12;
  if (iVar11 != 0) {
    if (iVar11 < 1) {
      (**(code **)(*(longlong *)this->_padding_ + 0x20))
                ((longlong *)this->_padding_,
                 &GeometryCollection::Facades::FPositionTargetFacade::GroupName,-iVar11,
                 iVar7 + param_1);
      if (param_1 == 0) {
        *piVar1 = -1;
        *piVar2 = -1;
      }
      else {
        *piVar2 = iVar7 + param_1 + -1;
      }
    }
    else {
      uVar9 = (ulonglong)this->ConstraintIndex;
      if (-1 < this->ConstraintIndex) {
        lVar10 = uVar9 * 4;
        do {
          uVar8 = (uint)uVar9;
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(lVar3 + 0x18)) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(int *)(*(longlong *)(lVar3 + 0x10) + lVar10) != -1) {
            uVar6 = 0;
            if ((int)uVar8 < *(int *)(lVar3 + 0x18)) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar7 = *(int *)(*(longlong *)(lVar3 + 0x10) + (uVar9 & 0xffffffff) * 4);
            goto LAB_1438d3dd5;
          }
          lVar10 = lVar10 + -4;
          uVar9 = (ulonglong)(uVar8 - 1);
        } while (-1 < (int)(uVar8 - 1));
      }
      iVar7 = -1;
LAB_1438d3dd5:
      FManagedArrayCollection::InsertElements
                ((FManagedArrayCollection *)this->_padding_,iVar11,iVar7 + 1,
                 GeometryCollection::Facades::FPositionTargetFacade::GroupName);
      if (iVar12 == 0) {
        *piVar1 = iVar7 + 1;
      }
      *piVar2 = param_1 + -1 + *piVar1;
    }
  }
  return;
}

