// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// AddSpringConstraint @ 14389ba40

int __thiscall Chaos::Softs::FEmbeddedSpringFacade::AddSpringConstraint(FEmbeddedSpringFacade *this)

{
  FName FVar1;
  int iVar2;
  
  if (*(longlong **)&this->field_0x278 == (longlong *)0x0) {
    FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x260;
    FVar1.Number = *(uint *)&this->field_0x264;
    iVar2 = FManagedArrayCollection::NumElements
                      (*(FManagedArrayCollection **)&this->field_0x248,FVar1);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)&this->field_0x278 + 0x60))();
  }
  SetNumSpringConstraints(this,iVar2 + 1);
  return iVar2;
}

// Append @ 14389e1b0

void __thiscall
Chaos::Softs::FEmbeddedSpringFacade::Append
          (FEmbeddedSpringFacade *this,FEmbeddedSpringFacade *param_1,int param_2)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FEmbeddedSpringConstraintFacade *this_00;
  int iVar7;
  FEmbeddedSpringConstraintFacade local_688;
  FEmbeddedSpringConstraintFacade local_358;
  
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0xc1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = GeometryCollection::Facades::FPositionTargetFacade::IsValid((FPositionTargetFacade *)this)
  ;
  if ((((((!bVar4) || (*(longlong *)&this->field_0x208 == 0)) ||
        (*(longlong *)&this->field_0x240 == 0)) ||
       ((((*(longlong *)&this->field_0x278 == 0 || (*(longlong *)&this->field_0x2b0 == 0)) ||
         ((*(longlong *)&this->field_0x2e8 == 0 ||
          ((*(longlong *)&this->field_0x320 == 0 ||
           (bVar4 = GeometryCollection::Facades::FPositionTargetFacade::IsValid
                              ((FPositionTargetFacade *)param_1), !bVar4)))))) ||
        (*(longlong *)&param_1->field_0x208 == 0)))) ||
      ((((*(longlong *)&param_1->field_0x240 == 0 || (*(longlong *)&param_1->field_0x278 == 0)) ||
        (*(longlong *)&param_1->field_0x2b0 == 0)) ||
       ((*(longlong *)&param_1->field_0x2e8 == 0 || (*(longlong *)&param_1->field_0x320 == 0))))))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid() && Other.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                            ,0xc2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(longlong **)&this->field_0x278 == (longlong *)0x0) {
    FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x260;
    FVar1.Number = *(uint *)&this->field_0x264;
    iVar5 = FManagedArrayCollection::NumElements
                      (*(FManagedArrayCollection **)&this->field_0x248,FVar1);
  }
  else {
    iVar5 = (**(code **)(**(longlong **)&this->field_0x278 + 0x60))();
  }
  if (*(longlong **)&param_1->field_0x278 == (longlong *)0x0) {
    FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x260;
    FVar2.Number = *(uint *)&param_1->field_0x264;
    iVar6 = FManagedArrayCollection::NumElements
                      (*(FManagedArrayCollection **)&param_1->field_0x248,FVar2);
  }
  else {
    iVar6 = (**(code **)(**(longlong **)&param_1->field_0x278 + 0x60))();
  }
  SetNumSpringConstraints(this,iVar6 + iVar5);
  iVar7 = 0;
  if (0 < iVar6) {
    do {
      this_00 = GetSpringConstraint(this,&local_358,iVar5 + iVar7);
      FEmbeddedSpringConstraintFacade::FEmbeddedSpringConstraintFacade
                (&local_688,*(FManagedArrayCollection **)param_1,(FName *)&param_1->field_0x10,iVar7
                );
      FEmbeddedSpringConstraintFacade::Initialize(this_00,&local_688,param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  return;
}

// CalculateTypeHash @ 1438a40f0

uint __thiscall
Chaos::Softs::FEmbeddedSpringFacade::CalculateTypeHash(FEmbeddedSpringFacade *this,uint param_1)

{
  FName FVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FEmbeddedSpringConstraintFacade local_338;
  
  if (*(longlong **)&this->field_0x278 == (longlong *)0x0) {
    FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x260;
    FVar1.Number = *(uint *)&this->field_0x264;
    iVar3 = FManagedArrayCollection::NumElements
                      (*(FManagedArrayCollection **)&this->field_0x248,FVar1);
  }
  else {
    iVar3 = (**(code **)(**(longlong **)&this->field_0x278 + 0x60))();
  }
  uVar5 = param_1 * 0x40 + iVar3 + (param_1 >> 2) + 0x9e3779b9 ^ param_1;
  iVar3 = 0;
  while( true ) {
    if (*(longlong **)&this->field_0x278 == (longlong *)0x0) {
      FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x260;
      FVar2.Number = *(uint *)&this->field_0x264;
      iVar4 = FManagedArrayCollection::NumElements
                        (*(FManagedArrayCollection **)&this->field_0x248,FVar2);
    }
    else {
      iVar4 = (**(code **)(**(longlong **)&this->field_0x278 + 0x60))();
    }
    if (iVar4 <= iVar3) break;
    FEmbeddedSpringConstraintFacade::FEmbeddedSpringConstraintFacade
              (&local_338,*(FManagedArrayCollection **)this,(FName *)&this->field_0x10,iVar3);
    uVar5 = FEmbeddedSpringConstraintFacade::CalculateTypeHash(&local_338,uVar5);
    iVar3 = iVar3 + 1;
  }
  return uVar5;
}

// CleanupAndCompactInvalidSprings @ 1438a7db0

void __thiscall
Chaos::Softs::FEmbeddedSpringFacade::CleanupAndCompactInvalidSprings(FEmbeddedSpringFacade *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  FEmbeddedSpringConstraintFacade *this_00;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  int local_698 [2];
  ForAnyElementType local_690;
  undefined8 local_688;
  undefined1 local_678 [632];
  longlong local_400;
  TManagedArrayAccessor<int> local_3f8 [3];
  int local_350;
  FEmbeddedSpringConstraintFacade local_348;
  
  local_690.Data = (FScriptContainerElement *)0x0;
  local_688 = 0;
  local_698[0] = 0;
  do {
    if (*(longlong **)&this->field_0x278 == (longlong *)0x0) {
      FVar3.ComparisonIndex.Value = *(uint *)&this->field_0x260;
      FVar3.Number = *(uint *)&this->field_0x264;
      iVar6 = FManagedArrayCollection::NumElements
                        (*(FManagedArrayCollection **)&this->field_0x248,FVar3);
    }
    else {
      iVar6 = (**(code **)(**(longlong **)&this->field_0x278 + 0x60))();
    }
    if (iVar6 <= local_698[0]) {
      if ((int)local_688 != 0) {
        if ((*(longlong *)&this->field_0x8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsConst()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                               ,0xed,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar6 = (int)local_688;
        pFVar1 = local_690.Data + (longlong)(int)local_688 * 4;
        FVar8.Data = local_690.Data;
        while( true ) {
          if ((int)local_688 != iVar6) {
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (FVar8.Data == pFVar1) break;
          this_00 = GetSpringConstraint(this,&local_348,*(int *)FVar8.Data);
          FEmbeddedSpringConstraintFacade::SetNumSprings(this_00,0);
          FEmbeddedSpringConstraintFacade::SetDefaults(this_00);
          FVar8.Data = FVar8.Data + 4;
        }
        (**(code **)(**(longlong **)&this->field_0x8 + 0x28))
                  (*(longlong **)&this->field_0x8,
                   &FEmbeddedSpringBaseFacade::SpringConstraintGroupName,&local_690,0x101);
      }
      if (local_690.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_690.Data);
      }
      return;
    }
    GetSpringConstraint(this,(FEmbeddedSpringConstraintFacade *)local_678,local_698[0]);
    FEmbeddedSpringConstraintFacade::CleanupAndCompactInvalidSprings
              ((FEmbeddedSpringConstraintFacade *)local_678);
    if ((local_400 == 0) || (local_3f8[0].ConstAttributeArray == (TManagedArray<int> *)0x0)) {
LAB_1438a7eab:
      if (((local_690.Data <= (FScriptContainerElement *)local_698) &&
          ((FScriptContainerElement *)local_698 < local_690.Data + (longlong)local_688._4_4_ * 4))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (int)local_688;
      if ((int)local_688 == local_688._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_690,(int *)((longlong)&local_688 + 4));
      }
      local_688 = CONCAT44(local_688._4_4_,iVar6 + 1);
      *(int *)(local_690.Data + (longlong)iVar6 * 4) = local_698[0];
    }
    else {
      piVar7 = TManagedArrayAccessor<int>::operator[]
                         ((TManagedArrayAccessor<int> *)(local_678 + 0x248),local_350);
      iVar6 = *piVar7;
      piVar7 = TManagedArrayAccessor<int>::operator[](local_3f8,local_350);
      iVar2 = *piVar7;
      if (iVar6 == -1) {
        if (iVar2 != -1) goto LAB_1438a7e85;
        goto LAB_1438a7eab;
      }
      if (iVar2 == -1) {
LAB_1438a7e85:
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Start == End",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                           ,0x13d,
                           L"Only one boundary of the range is set to INDEX_NONE, when both should."
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        goto LAB_1438a7eab;
      }
      if (iVar2 - iVar6 == -1) goto LAB_1438a7eab;
    }
    local_698[0] = local_698[0] + 1;
  } while( true );
}

// GetSpringConstraint @ 1438bc8c0

FEmbeddedSpringConstraintFacade * __thiscall
Chaos::Softs::FEmbeddedSpringFacade::GetSpringConstraint
          (FEmbeddedSpringFacade *this,FEmbeddedSpringConstraintFacade *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FEmbeddedSpringConstraintFacade *pFVar4;
  
  if (*(FManagedArrayCollection **)&this->field_0x8 == (FManagedArrayCollection *)0x0) {
    FEmbeddedSpringConstraintFacade::FEmbeddedSpringConstraintFacade
              (__return_storage_ptr__,*(FManagedArrayCollection **)this,(FName *)&this->field_0x10,
               param_1);
    return __return_storage_ptr__;
  }
  FEmbeddedSpringBaseFacade::FEmbeddedSpringBaseFacade
            ((FEmbeddedSpringBaseFacade *)__return_storage_ptr__,
             *(FManagedArrayCollection **)&this->field_0x8,(FName *)&this->field_0x10);
  __return_storage_ptr__->ConstraintIndex = param_1;
  bVar2 = GeometryCollection::Facades::FPositionTargetFacade::IsValid
                    ((FPositionTargetFacade *)__return_storage_ptr__);
  if (((((!bVar2) || (__return_storage_ptr__->_padding_ == 0)) ||
       (__return_storage_ptr__->_padding_ == 0)) ||
      (((__return_storage_ptr__->_padding_ == 0 || (__return_storage_ptr__->_padding_ == 0)) ||
       ((__return_storage_ptr__->_padding_ == 0 || (__return_storage_ptr__->_padding_ == 0)))))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                         ,0x117,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FEmbeddedSpringConstraintFacade *)(*pcVar1)();
    return pFVar4;
  }
  if (-1 < __return_storage_ptr__->ConstraintIndex) {
    if ((longlong *)__return_storage_ptr__->_padding_ == (longlong *)0x0) {
      iVar3 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)__return_storage_ptr__->_padding_,
                         (FName)__return_storage_ptr__->_padding_);
    }
    else {
      iVar3 = (**(code **)(*(longlong *)__return_storage_ptr__->_padding_ + 0x60))();
    }
    if (__return_storage_ptr__->ConstraintIndex < iVar3) {
      return __return_storage_ptr__;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ConstraintIndex >= 0 && ConstraintIndex < ConstraintStartAttribute.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                     ,0x118,L"");
  if (!bVar2) {
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FEmbeddedSpringConstraintFacade *)(*pcVar1)();
  return pFVar4;
}

// GetSpringConstraintConst @ 1438bc9f0

FEmbeddedSpringConstraintFacade * __thiscall
Chaos::Softs::FEmbeddedSpringFacade::GetSpringConstraintConst
          (FEmbeddedSpringFacade *this,FEmbeddedSpringConstraintFacade *__return_storage_ptr__,
          int param_1)

{
  FEmbeddedSpringConstraintFacade::FEmbeddedSpringConstraintFacade
            (__return_storage_ptr__,*(FManagedArrayCollection **)this,(FName *)&this->field_0x10,
             param_1);
  return __return_storage_ptr__;
}

// RemoveSpringConstraints @ 1438cdaf0

void __thiscall
Chaos::Softs::FEmbeddedSpringFacade::RemoveSpringConstraints
          (FEmbeddedSpringFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FEmbeddedSpringConstraintFacade *this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  FEmbeddedSpringConstraintFacade local_348;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\CollectionEmbeddedSpringConstraintFacade.cpp"
                       ,0xed,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    this_00 = GetSpringConstraint(this,&local_348,*(int *)pFVar5);
    FEmbeddedSpringConstraintFacade::SetNumSprings(this_00,0);
    FEmbeddedSpringConstraintFacade::SetDefaults(this_00);
    pFVar5 = pFVar5 + 4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001438cdbc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x8 + 0x28))
            (*(longlong **)&this->field_0x8,&FEmbeddedSpringBaseFacade::SpringConstraintGroupName,
             param_1,0x101);
  return;
}

// SetNumSpringConstraints @ 1438d3960

void __thiscall
Chaos::Softs::FEmbeddedSpringFacade::SetNumSpringConstraints
          (FEmbeddedSpringFacade *this,int param_1)

{
  FName FVar1;
  FName FVar2;
  FManagedArrayCollection *this_00;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FEmbeddedSpringConstraintFacade *pFVar8;
  FEmbeddedSpringConstraintFacade local_668;
  FEmbeddedSpringConstraintFacade local_338;
  
  iVar7 = param_1;
  if (*(longlong **)&this->field_0x278 == (longlong *)0x0) {
    FVar1.ComparisonIndex.Value = *(uint *)&this->field_0x260;
    FVar1.Number = *(uint *)&this->field_0x264;
    iVar6 = FManagedArrayCollection::NumElements
                      (*(FManagedArrayCollection **)&this->field_0x248,FVar1);
  }
  else {
    iVar6 = (**(code **)(**(longlong **)&this->field_0x278 + 0x60))();
  }
  for (; iVar7 < iVar6; iVar7 = iVar7 + 1) {
    pFVar8 = GetSpringConstraint(this,&local_668,iVar7);
    FEmbeddedSpringConstraintFacade::SetNumSprings(pFVar8,0);
    FEmbeddedSpringConstraintFacade::SetDefaults(pFVar8);
  }
  if ((*(longlong *)&this->field_0x250 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x4d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x4e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(longlong **)&this->field_0x278 == (longlong *)0x0) {
    FVar2.ComparisonIndex.Value = *(uint *)&this->field_0x260;
    FVar2.Number = *(uint *)&this->field_0x264;
    iVar7 = FManagedArrayCollection::NumElements
                      (*(FManagedArrayCollection **)&this->field_0x248,FVar2);
  }
  else {
    iVar7 = (**(code **)(**(longlong **)&this->field_0x278 + 0x60))();
  }
  iVar7 = param_1 - iVar7;
  if (iVar7 != 0) {
    this_00 = *(FManagedArrayCollection **)&this->field_0x250;
    if (iVar7 < 1) {
      (**(code **)(this_00->_padding_ + 0x20))(this_00,&this->field_0x260,-iVar7,param_1);
    }
    else {
      FVar3.ComparisonIndex.Value = *(uint *)&this->field_0x260;
      FVar3.Number = *(uint *)&this->field_0x264;
      FManagedArrayCollection::AddElements(this_00,iVar7,FVar3);
    }
  }
  for (; iVar6 < param_1; iVar6 = iVar6 + 1) {
    pFVar8 = GetSpringConstraint(this,&local_338,iVar6);
    FEmbeddedSpringConstraintFacade::SetDefaults(pFVar8);
  }
  return;
}

