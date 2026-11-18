// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FGeometryDynamicCollection @ 143f892a0

FGeometryDynamicCollection * __thiscall
FGeometryDynamicCollection::FGeometryDynamicCollection
          (FGeometryDynamicCollection *this,FGeometryCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGeometryDynamicCollection *pFVar3;
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined2 local_94;
  undefined2 uStack_92;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined2 local_7c;
  undefined2 uStack_7a;
  FConstructionParameters local_78;
  FConstructionParameters local_68;
  FConstructionParameters local_58;
  FConstructionParameters local_48 [2];
  
  FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FTransformDynamicCollection__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = (longlong)&___7__TManagedArray__N__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TManagedArray_U__TTransform_M_Math_UE____6B_;
  *(undefined1 *)&this->_padding_ = 0;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RestCollection != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollectionProxyData.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGeometryDynamicCollection *)(*pcVar1)();
      return pFVar3;
    }
  }
  FTransformDynamicCollection::Construct((FTransformDynamicCollection *)this);
  this->_padding_ = (longlong)&___7FGeometryDynamicCollection__6B_;
  *(undefined8 *)&(this->Active).field_0x20 = 0;
  (this->Active).field_0x8 = 0;
  *(undefined4 *)&(this->Active).field_0x28 = 0;
  *(undefined4 *)&(this->Active).field_0x2c = 0x80;
  *(undefined ***)&this->Active = &___7__TManagedArray__N__6B_;
  *(undefined ***)&this->Simplicials =
       &
       ___7__TManagedArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos________6B_
  ;
  *(undefined ***)&this->DynamicState = &___7__TManagedArray_E__6B_;
  (this->DynamicState).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicState).field_0x10 = 0;
  *(undefined8 *)&(this->DynamicState).field_0x18 = 0;
  (this->Simplicials).field_0x8 = 0;
  *(undefined8 *)&(this->Simplicials).field_0x10 = 0;
  *(undefined8 *)&(this->Simplicials).field_0x18 = 0;
  *(undefined8 *)&(this->SimulatableParticles).field_0x20 = 0;
  (this->SimulatableParticles).field_0x8 = 0;
  *(undefined4 *)&(this->SimulatableParticles).field_0x28 = 0;
  *(undefined4 *)&(this->SimulatableParticles).field_0x2c = 0x80;
  *(undefined ***)&this->SimulatableParticles = &___7__TManagedArray__N__6B_;
  *(undefined ***)&this->CollisionStructureID = &___7__TManagedArray_H__6B_;
  *(undefined ***)&this->CollisionMask = &___7__TManagedArray_H__6B_;
  *(undefined ***)&this->CollisionGroup = &___7__TManagedArray_H__6B_;
  *(undefined ***)&this->InternalClusterParentType = &___7__TManagedArray_E__6B_;
  (this->CollisionStructureID).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionStructureID).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionStructureID).field_0x18 = 0;
  (this->CollisionMask).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionMask).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionMask).field_0x18 = 0;
  (this->CollisionGroup).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionGroup).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionGroup).field_0x18 = 0;
  (this->InternalClusterParentType).field_0x8 = 0;
  *(undefined8 *)&(this->InternalClusterParentType).field_0x10 = 0;
  *(undefined8 *)&(this->InternalClusterParentType).field_0x18 = 0;
  this->OptionalLinearVelocityAttribute = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  this->OptionalAngularVelocityAttribute = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  this->OptionalAnimateTransformAttribute = (TManagedArray<bool> *)0x0;
  local_78.Saved = true;
  local_78.bAllowCircularDependency = false;
  local_78._10_2_ = uStack_9e;
  local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_78.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<bool>
            ((FManagedArrayCollection *)this,ActiveAttribute,FTransformCollection::TransformGroup,
             &this->Active,&local_78);
  local_68.Saved = true;
  local_68.bAllowCircularDependency = false;
  local_68._10_2_ = uStack_92;
  local_68.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_68.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<unsigned_char>
            ((FManagedArrayCollection *)this,DynamicStateAttribute,
             FTransformCollection::TransformGroup,&this->DynamicState,&local_68);
  local_58.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_58.GroupIndexDependency.Number = 0;
  local_58.Saved = true;
  local_58.bAllowCircularDependency = false;
  local_58._10_2_ = uStack_86;
  FManagedArrayCollection::AddExternalAttribute<bool>
            ((FManagedArrayCollection *)this,SimulatableParticlesAttribute,
             FTransformCollection::TransformGroup,&this->SimulatableParticles,&local_58);
  local_48[0].Saved = true;
  local_48[0].bAllowCircularDependency = false;
  local_48[0]._10_2_ = uStack_7a;
  local_48[0].GroupIndexDependency.ComparisonIndex.Value = 0;
  local_48[0].GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<unsigned_char>
            ((FManagedArrayCollection *)this,InternalClusterParentTypeAttribute,
             FTransformCollection::TransformGroup,&this->InternalClusterParentType,local_48);
  return this;
}

// FGeometryDynamicCollection @ 143f895c0

FGeometryDynamicCollection * __thiscall
FGeometryDynamicCollection::FGeometryDynamicCollection
          (FGeometryDynamicCollection *this,TSharedPtr<FGeometryCollection_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FGeometryCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  FGeometryDynamicCollection *pFVar5;
  atomic<int> *paVar6;
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined2 local_94;
  undefined2 uStack_92;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined2 local_7c;
  undefined2 uStack_7a;
  FConstructionParameters local_78;
  FConstructionParameters local_68;
  FConstructionParameters local_58;
  FConstructionParameters local_48;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar6 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)this);
  this->_padding_ = (longlong)pFVar2;
  this->_padding_ = (longlong)&___7FTransformDynamicCollection__6B_;
  this->_padding_ = (longlong)pFVar2;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  this->_padding_ = (longlong)&___7__TManagedArray__N__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TManagedArray_U__TTransform_M_Math_UE____6B_;
  *(undefined1 *)&this->_padding_ = 0;
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RestCollectionShared",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollectionProxyData.cpp"
                       ,0x25,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FGeometryDynamicCollection *)(*pcVar3)();
      return pFVar5;
    }
  }
  FTransformDynamicCollection::Construct((FTransformDynamicCollection *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7FGeometryDynamicCollection__6B_;
  *(undefined8 *)&(this->Active).field_0x20 = 0;
  (this->Active).field_0x8 = 0;
  *(undefined4 *)&(this->Active).field_0x28 = 0;
  *(undefined4 *)&(this->Active).field_0x2c = 0x80;
  *(undefined ***)&this->Active = &___7__TManagedArray__N__6B_;
  *(undefined ***)&this->Simplicials =
       &
       ___7__TManagedArray_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos________6B_
  ;
  *(undefined ***)&this->DynamicState = &___7__TManagedArray_E__6B_;
  (this->DynamicState).field_0x8 = 0;
  *(undefined8 *)&(this->DynamicState).field_0x10 = 0;
  *(undefined8 *)&(this->DynamicState).field_0x18 = 0;
  (this->Simplicials).field_0x8 = 0;
  *(undefined8 *)&(this->Simplicials).field_0x10 = 0;
  *(undefined8 *)&(this->Simplicials).field_0x18 = 0;
  *(undefined8 *)&(this->SimulatableParticles).field_0x20 = 0;
  (this->SimulatableParticles).field_0x8 = 0;
  *(undefined4 *)&(this->SimulatableParticles).field_0x28 = 0;
  *(undefined4 *)&(this->SimulatableParticles).field_0x2c = 0x80;
  *(undefined ***)&this->SimulatableParticles = &___7__TManagedArray__N__6B_;
  *(undefined ***)&this->CollisionStructureID = &___7__TManagedArray_H__6B_;
  *(undefined ***)&this->CollisionMask = &___7__TManagedArray_H__6B_;
  *(undefined ***)&this->CollisionGroup = &___7__TManagedArray_H__6B_;
  *(undefined ***)&this->InternalClusterParentType = &___7__TManagedArray_E__6B_;
  (this->CollisionStructureID).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionStructureID).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionStructureID).field_0x18 = 0;
  (this->CollisionMask).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionMask).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionMask).field_0x18 = 0;
  (this->CollisionGroup).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionGroup).field_0x10 = 0;
  *(undefined8 *)&(this->CollisionGroup).field_0x18 = 0;
  (this->InternalClusterParentType).field_0x8 = 0;
  *(undefined8 *)&(this->InternalClusterParentType).field_0x10 = 0;
  *(undefined8 *)&(this->InternalClusterParentType).field_0x18 = 0;
  this->OptionalLinearVelocityAttribute = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  this->OptionalAngularVelocityAttribute = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  this->OptionalAnimateTransformAttribute = (TManagedArray<bool> *)0x0;
  local_78.Saved = true;
  local_78.bAllowCircularDependency = false;
  local_78._10_2_ = uStack_9e;
  local_78.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_78.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<bool>
            ((FManagedArrayCollection *)this,ActiveAttribute,FTransformCollection::TransformGroup,
             &this->Active,&local_78);
  local_68.Saved = true;
  local_68.bAllowCircularDependency = false;
  local_68._10_2_ = uStack_92;
  local_68.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_68.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<unsigned_char>
            ((FManagedArrayCollection *)this,DynamicStateAttribute,
             FTransformCollection::TransformGroup,&this->DynamicState,&local_68);
  local_58.Saved = true;
  local_58.bAllowCircularDependency = false;
  local_58._10_2_ = uStack_86;
  local_58.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_58.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<bool>
            ((FManagedArrayCollection *)this,SimulatableParticlesAttribute,
             FTransformCollection::TransformGroup,&this->SimulatableParticles,&local_58);
  local_48.Saved = true;
  local_48.bAllowCircularDependency = false;
  local_48._10_2_ = uStack_7a;
  local_48.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_48.GroupIndexDependency.Number = 0;
  FManagedArrayCollection::AddExternalAttribute<unsigned_char>
            ((FManagedArrayCollection *)this,InternalClusterParentTypeAttribute,
             FTransformCollection::TransformGroup,&this->InternalClusterParentType,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// AddAnimateTransformAttribute @ 143f93490

void __thiscall
FGeometryDynamicCollection::AddAnimateTransformAttribute(FGeometryDynamicCollection *this)

{
  FName FVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TManagedArray<bool> *pTVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  FName local_res10;
  undefined2 local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  
  if (this->OptionalAnimateTransformAttribute == (TManagedArray<bool> *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&AnimateTransformAttributeName,"AnimateTransformAttribute");
      _Init_thread_footer(&::_TSS0);
    }
    FVar3 = FTransformCollection::TransformGroup;
    pFVar6 = ::FName::FName(&local_res10,"AnimateTransformAttribute");
    local_28.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_28.GroupIndexDependency.Number = 0;
    FVar1 = *pFVar6;
    local_28.Saved = true;
    local_28.bAllowCircularDependency = false;
    local_28._10_2_ = uStack_2e;
    bVar4 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)this,FVar1,FVar3);
    if (!bVar4) {
      FManagedArrayCollection::AddNewAttributeImpl<bool>
                ((FManagedArrayCollection *)this,FVar1,FVar3,&local_28);
    }
    pTVar7 = FManagedArrayCollection::ModifyAttribute<bool>
                       ((FManagedArrayCollection *)this,FVar1,FVar3);
    this->OptionalAnimateTransformAttribute = pTVar7;
    if ((pTVar7 != (TManagedArray<bool> *)0x0) && (iVar9 = 0, 0 < *(int *)&pTVar7->field_0x28)) {
      do {
        if (((iVar9 < 0) || (*(int *)&pTVar7->field_0x28 <= iVar9)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar8 = &pTVar7->field_0x10;
        if (*(undefined1 **)&pTVar7->field_0x20 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&pTVar7->field_0x20;
        }
        iVar5 = iVar9;
        if (iVar9 < 0) {
          iVar5 = iVar9 + 0x1f;
        }
        iVar10 = iVar9 + 1;
        *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & ~(1 << ((byte)iVar9 & 0x1f));
        iVar9 = iVar10;
      } while (iVar10 < *(int *)&pTVar7->field_0x28);
    }
  }
  return;
}

// AddVelocitiesAttributes @ 143f9c4c0

void __thiscall
FGeometryDynamicCollection::AddVelocitiesAttributes(FGeometryDynamicCollection *this)

{
  FName FVar1;
  FName FVar2;
  bool bVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  int *piVar5;
  undefined2 local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  if ((this->OptionalLinearVelocityAttribute == (TManagedArray<UE::Math::TVector<float>_> *)0x0) &&
     (this->OptionalAngularVelocityAttribute == (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*piVar5 < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LinearVelocityAttributeName,"LinearVelocity");
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (*piVar5 < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::FName::FName(&AngularVelocityAttributeName,"AngularVelocity");
        _Init_thread_footer(&::_TSS1);
      }
    }
    FVar2 = FTransformCollection::TransformGroup;
    FVar1 = LinearVelocityAttributeName;
    local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_18.GroupIndexDependency.Number = 0;
    local_18.Saved = true;
    local_18.bAllowCircularDependency = false;
    local_18._10_2_ = uStack_1e;
    bVar3 = FManagedArrayCollection::HasAttribute
                      ((FManagedArrayCollection *)this,LinearVelocityAttributeName,
                       FTransformCollection::TransformGroup);
    if (!bVar3) {
      FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>
                ((FManagedArrayCollection *)this,FVar1,FVar2,&local_18);
    }
    pTVar4 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                       ((FManagedArrayCollection *)this,FVar1,FVar2);
    this->OptionalLinearVelocityAttribute = pTVar4;
    FVar2 = FTransformCollection::TransformGroup;
    FVar1 = AngularVelocityAttributeName;
    local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
    local_18.GroupIndexDependency.Number = 0;
    local_18.Saved = true;
    local_18.bAllowCircularDependency = false;
    bVar3 = FManagedArrayCollection::HasAttribute
                      ((FManagedArrayCollection *)this,AngularVelocityAttributeName,
                       FTransformCollection::TransformGroup);
    if (!bVar3) {
      FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>
                ((FManagedArrayCollection *)this,FVar1,FVar2,&local_18);
    }
    pTVar4 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>
                       ((FManagedArrayCollection *)this,FVar1,FVar2);
    this->OptionalAngularVelocityAttribute = pTVar4;
  }
  return;
}

// CopyInitialVelocityAttributesFrom @ 143fa71f0

void __thiscall
FGeometryDynamicCollection::CopyInitialVelocityAttributesFrom
          (FGeometryDynamicCollection *this,FGeometryDynamicCollection *param_1)

{
  FName local_res18;
  FInitialVelocityFacade local_78;
  
  ::FName::FName(&local_res18,"InitialLinearVelocity");
  local_78.InitialLinearVelocityAttribute.Name = local_res18;
  local_78.InitialLinearVelocityAttribute.Group = FTransformCollection::TransformGroup;
  local_78.InitialLinearVelocityAttribute.DefaultGroupDependency.ComparisonIndex.Value = 0;
  local_78.InitialLinearVelocityAttribute.DefaultGroupDependency.Number = 0;
  local_78.InitialLinearVelocityAttribute.ConstCollection = (FManagedArrayCollection *)this;
  local_78.InitialLinearVelocityAttribute.Collection = (FManagedArrayCollection *)this;
  local_78.InitialLinearVelocityAttribute.AttributeArray =
       FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                 ((FManagedArrayCollection *)this,local_res18,FTransformCollection::TransformGroup);
  local_78.InitialLinearVelocityAttribute.ConstAttributeArray =
       local_78.InitialLinearVelocityAttribute.AttributeArray;
  ::FName::FName(&local_res18,"InitialAngularVelocity");
  local_78.InitialAngularVelocityAttribute.Name = local_res18;
  local_78.InitialAngularVelocityAttribute.Group = FTransformCollection::TransformGroup;
  local_78.InitialAngularVelocityAttribute.DefaultGroupDependency.ComparisonIndex.Value = 0;
  local_78.InitialAngularVelocityAttribute.DefaultGroupDependency.Number = 0;
  local_78.InitialAngularVelocityAttribute.ConstCollection = (FManagedArrayCollection *)this;
  local_78.InitialAngularVelocityAttribute.Collection = (FManagedArrayCollection *)this;
  local_78.InitialAngularVelocityAttribute.AttributeArray =
       FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                 ((FManagedArrayCollection *)this,local_res18,FTransformCollection::TransformGroup);
  local_78.InitialAngularVelocityAttribute.ConstAttributeArray =
       local_78.InitialAngularVelocityAttribute.AttributeArray;
  FInitialVelocityFacade::CopyFrom(&local_78,param_1);
  return;
}

// GetInitialLevels @ 143fb0e90

TManagedArrayAccessor<int> * __thiscall
FGeometryDynamicCollection::GetInitialLevels
          (FGeometryDynamicCollection *this,TManagedArrayAccessor<int> *__return_storage_ptr__)

{
  FManagedArrayCollection *this_00;
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  TManagedArrayAccessor<int> *pTVar5;
  TManagedArray<int> *pTVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LevelAttributeName,"Level");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TManagedArrayAccessor<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  FVar3 = FTransformCollection::TransformGroup;
  FVar2 = LevelAttributeName;
  this_00 = (FManagedArrayCollection *)this->_padding_;
  __return_storage_ptr__->ConstCollection = this_00;
  __return_storage_ptr__->Name = FVar2;
  __return_storage_ptr__->Group = FVar3;
  (__return_storage_ptr__->DefaultGroupDependency).ComparisonIndex = 0;
  (__return_storage_ptr__->DefaultGroupDependency).Number = 0;
  __return_storage_ptr__->Collection = (FManagedArrayCollection *)0x0;
  __return_storage_ptr__->AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>(this_00,FVar2,FVar3);
  __return_storage_ptr__->ConstAttributeArray = pTVar6;
  return __return_storage_ptr__;
}

// ~FGeometryDynamicCollection @ 1440fe120

void __thiscall
FGeometryDynamicCollection::~FGeometryDynamicCollection(FGeometryDynamicCollection *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->InternalClusterParentType = &___7__TManagedArrayBase_E__6B_;
  pvVar1 = *(void **)&(this->InternalClusterParentType).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->InternalClusterParentType = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->CollisionGroup = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->CollisionGroup).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->CollisionGroup = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->CollisionMask = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->CollisionMask).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->CollisionMask = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->CollisionStructureID = &___7__TManagedArrayBase_H__6B_;
  pvVar1 = *(void **)&(this->CollisionStructureID).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->CollisionStructureID = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->SimulatableParticles = &___7FManagedBitArrayBase__6B_;
  pvVar1 = *(void **)&(this->SimulatableParticles).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->SimulatableParticles = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Simplicials =
       &
       ___7__TManagedArrayBase_V__TUniquePtr_VFBVHParticles_Chaos__U__TDefaultDelete_VFBVHParticles_Chaos________6B_
  ;
  DestructItems<TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_>,int>
            (*(TUniquePtr<Chaos::FBVHParticles,TDefaultDelete<Chaos::FBVHParticles>_> **)
              &(this->Simplicials).field_0x10,*(int *)&(this->Simplicials).field_0x18);
  pvVar1 = *(void **)&(this->Simplicials).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Simplicials = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->DynamicState = &___7__TManagedArrayBase_E__6B_;
  pvVar1 = *(void **)&(this->DynamicState).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->DynamicState = &___7FManagedArrayBase__6B_;
  *(undefined ***)&this->Active = &___7FManagedBitArrayBase__6B_;
  pvVar1 = *(void **)&(this->Active).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Active = &___7FManagedArrayBase__6B_;
  this->_padding_ = (longlong)&___7__TManagedArrayBase_U__TTransform_M_Math_UE____6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FManagedArrayBase__6B_;
  this->_padding_ = (longlong)&___7FManagedBitArrayBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FManagedArrayBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FManagedArrayCollection::~FManagedArrayCollection((FManagedArrayCollection *)this);
  return;
}

