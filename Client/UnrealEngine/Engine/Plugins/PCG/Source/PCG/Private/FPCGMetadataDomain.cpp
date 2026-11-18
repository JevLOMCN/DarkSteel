// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 139

// FindOrCreateAttribute<int> @ 1497ba0f0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<int> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<int>
          (FPCGMetadataDomain *this,FName param_1,int *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<int> *this_00;
  FPCGMetadataAttribute<int> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<int> *)*ppFVar3, pFVar5 != (FPCGMetadataAttribute<int> *)0x0)
      ) && ((short)pFVar5->_padding_ == 2)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<int> *)*ppFVar3, pFVar5 != (FPCGMetadataAttribute<int> *)0x0)
      ) && ((short)pFVar5->_padding_ == 2)) goto LAB_1497ba2c8;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497ba1d4:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 2)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<int> *)0x0;
      this_00 = ::operator_new(0xa0);
      if (this_00 != (FPCGMetadataAttribute<int> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<int>::FPCGMetadataAttribute<int>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497ba2c8;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<int>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<int>(FName,int_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497ba1d4;
  }
  pFVar5 = (FPCGMetadataAttribute<int> *)0x0;
LAB_1497ba2c8:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<float> @ 1497ba300

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<float> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<float>
          (FPCGMetadataDomain *this,FName param_1,float *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<float> *this_00;
  FPCGMetadataAttribute<float> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<float> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<float> *)0x0)) && ((short)pFVar5->_padding_ == 0)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<float> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<float> *)0x0)) && ((short)pFVar5->_padding_ == 0))
  goto LAB_1497ba4d7;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497ba3e4:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 0)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<float> *)0x0;
      this_00 = ::operator_new(0xa0);
      if (this_00 != (FPCGMetadataAttribute<float> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<float>::FPCGMetadataAttribute<float>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497ba4d7;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<float>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<float>(FName,float_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497ba3e4;
  }
  pFVar5 = (FPCGMetadataAttribute<float> *)0x0;
LAB_1497ba4d7:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<UE::Math::TQuat<double>_> @ 1497ba510

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TQuat<double>_> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TQuat<double>_>
          (FPCGMetadataDomain *this,FName param_1,TQuat<double> *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0)) &&
     (*(short *)&pFVar5->field_0x70 == 7)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0)) &&
     (*(short *)&pFVar5->field_0x70 == 7)) goto LAB_1497ba6e8;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497ba5f4:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 7)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
      this_00 = ::operator_new(0xd0);
      if (this_00 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<UE::Math::TQuat<double>_>::
                 FPCGMetadataAttribute<UE::Math::TQuat<double>_>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)&pFVar5->field_0x7c = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497ba6e8;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TQuat<double>_>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TQuat<double>_>(FName,UE::Math::TQuat<double>_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497ba5f4;
  }
  pFVar5 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
LAB_1497ba6e8:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<UE::Math::TRotator<double>_> @ 1497ba720

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TRotator<double>_> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TRotator<double>_>
          (FPCGMetadataDomain *this,FName param_1,TRotator<double> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0)) &&
     ((short)pFVar5->_padding_ == 0xb)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0)) &&
     ((short)pFVar5->_padding_ == 0xb)) goto LAB_1497ba8f8;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497ba804:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 0xb)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
      this_00 = ::operator_new(0xb8);
      if (this_00 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<UE::Math::TRotator<double>_>::
                 FPCGMetadataAttribute<UE::Math::TRotator<double>_>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497ba8f8;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TRotator<double>_>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TRotator<double>_>(FName,UE::Math::TRotator<double>_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497ba804;
  }
  pFVar5 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
LAB_1497ba8f8:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<UE::Math::TTransform<double>_> @ 1497ba930

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TTransform<double>_> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TTransform<double>_>
          (FPCGMetadataDomain *this,FName param_1,TTransform<double> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0)) &&
     (*(short *)&pFVar5->field_0x70 == 8)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0)) &&
     (*(short *)&pFVar5->field_0x70 == 8)) goto LAB_1497bab08;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497baa14:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 8)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
      this_00 = ::operator_new(0x110);
      if (this_00 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<UE::Math::TTransform<double>_>::
                 FPCGMetadataAttribute<UE::Math::TTransform<double>_>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)&pFVar5->field_0x7c = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497bab08;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TTransform<double>_>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TTransform<double>_>(FName,UE::Math::TTransform<double>_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497baa14;
  }
  pFVar5 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
LAB_1497bab08:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<UE::Math::TVector2<double>_> @ 1497bab40

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TVector2<double>_> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector2<double>_>
          (FPCGMetadataDomain *this,FName param_1,TVector2<double> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0)) &&
     ((short)pFVar5->_padding_ == 4)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0)) &&
     ((short)pFVar5->_padding_ == 4)) goto LAB_1497bad18;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497bac24:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 4)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
      this_00 = ::operator_new(0xb0);
      if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<UE::Math::TVector2<double>_>::
                 FPCGMetadataAttribute<UE::Math::TVector2<double>_>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497bad18;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector2<double>_>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector2<double>_>(FName,UE::Math::TVector2<double>_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497bac24;
  }
  pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
LAB_1497bad18:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<UE::Math::TVector4<double>_> @ 1497bad50

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TVector4<double>_> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector4<double>_>
          (FPCGMetadataDomain *this,FName param_1,TVector4<double> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0)) &&
     (*(short *)&pFVar5->field_0x70 == 6)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0)) &&
     (*(short *)&pFVar5->field_0x70 == 6)) goto LAB_1497baf28;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497bae34:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 6)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
      this_00 = ::operator_new(0xd0);
      if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<UE::Math::TVector4<double>_>::
                 FPCGMetadataAttribute<UE::Math::TVector4<double>_>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)&pFVar5->field_0x7c = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497baf28;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector4<double>_>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector4<double>_>(FName,UE::Math::TVector4<double>_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497bae34;
  }
  pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
LAB_1497baf28:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<UE::Math::TVector<double>_> @ 1497baf60

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TVector<double>_> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>
          (FPCGMetadataDomain *this,FName param_1,TVector<double> *param_2,bool param_3,bool param_4
          ,bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0)) &&
     ((short)pFVar5->_padding_ == 5)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0)) &&
     ((short)pFVar5->_padding_ == 5)) goto LAB_1497bb138;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497bb044:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 5)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
      this_00 = ::operator_new(0xb8);
      if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<UE::Math::TVector<double>_>::
                 FPCGMetadataAttribute<UE::Math::TVector<double>_>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497bb138;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector<double>_>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<UE::Math::TVector<double>_>(FName,UE::Math::TVector<double>_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497bb044;
  }
  pFVar5 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
LAB_1497bb138:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<FSoftObjectPath> @ 1497bb170

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FSoftObjectPath> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
          (FPCGMetadataDomain *this,FName param_1,FSoftObjectPath *param_2,bool param_3,bool param_4
          ,bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<FSoftObjectPath> *this_00;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<FSoftObjectPath> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) && ((short)pFVar5->_padding_ == 0xd)
     ) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<FSoftObjectPath> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) && ((short)pFVar5->_padding_ == 0xd)
     ) goto LAB_1497bb348;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497bb254:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 0xd)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
      this_00 = ::operator_new(0xc0);
      if (this_00 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<FSoftObjectPath>::FPCGMetadataAttribute<FSoftObjectPath>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497bb348;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<FSoftObjectPath>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>(FName,FSoftObjectPath_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497bb254;
  }
  pFVar5 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
LAB_1497bb348:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<FName> @ 1497bb400

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FName> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<FName>
          (FPCGMetadataDomain *this,FName param_1,FName *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<FName> *this_00;
  FPCGMetadataAttribute<FName> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<FName> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<FName> *)0x0)) && ((short)pFVar5->_padding_ == 0xc)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<FName> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<FName> *)0x0)) && ((short)pFVar5->_padding_ == 0xc))
  goto LAB_1497bb5d8;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497bb4e4:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 0xc)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<FName> *)0x0;
      this_00 = ::operator_new(0xa8);
      if (this_00 != (FPCGMetadataAttribute<FName> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<FName>::FPCGMetadataAttribute<FName>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497bb5d8;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<FName>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<FName>(FName,FName_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497bb4e4;
  }
  pFVar5 = (FPCGMetadataAttribute<FName> *)0x0;
LAB_1497bb5d8:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<FString> @ 1497bb610

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FString> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<FString>
          (FPCGMetadataDomain *this,FName param_1,FString *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<FString> *this_00;
  FPCGMetadataAttribute<FString> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<FString> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<FString> *)0x0)) && ((short)pFVar5->_padding_ == 9)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<FString> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<FString> *)0x0)) && ((short)pFVar5->_padding_ == 9))
  goto LAB_1497bb7e8;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497bb6f4:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 9)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<FString> *)0x0;
      this_00 = ::operator_new(0xb0);
      if (this_00 != (FPCGMetadataAttribute<FString> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<FString>::FPCGMetadataAttribute<FString>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497bb7e8;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<FString>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<FString>(FName,FString_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497bb6f4;
  }
  pFVar5 = (FPCGMetadataAttribute<FString> *)0x0;
LAB_1497bb7e8:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<bool> @ 1497bb820

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<bool> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<bool>
          (FPCGMetadataDomain *this,FName param_1,bool *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<bool> *this_00;
  FPCGMetadataAttribute<bool> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<bool> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<bool> *)0x0)) && ((short)pFVar5->_padding_ == 10)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<bool> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<bool> *)0x0)) && ((short)pFVar5->_padding_ == 10))
  goto LAB_1497bb9f8;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_1497bb904:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 10)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<bool> *)0x0;
      this_00 = ::operator_new(0xa0);
      if (this_00 != (FPCGMetadataAttribute<bool> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<bool>::FPCGMetadataAttribute<bool>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_1497bb9f8;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<bool>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<bool>(FName,bool_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_1497bb904;
  }
  pFVar5 = (FPCGMetadataAttribute<bool> *)0x0;
LAB_1497bb9f8:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// GetConstTypedAttribute<int> @ 1497bbfb0

FPCGMetadataAttribute<int> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<int>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<int> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<int> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<int> *)0x0) || ((short)pFVar1->_padding_ != 2)) {
    pFVar1 = (FPCGMetadataAttribute<int> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<float> @ 1497bbfe0

FPCGMetadataAttribute<float> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<float>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<float> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<float> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<float> *)0x0) || ((short)pFVar1->_padding_ != 0)) {
    pFVar1 = (FPCGMetadataAttribute<float> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TQuat<double>_> @ 1497bc010

FPCGMetadataAttribute<UE::Math::TQuat<double>_> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<UE::Math::TQuat<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) ||
     (*(short *)&pFVar1->field_0x70 != 7)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TRotator<double>_> @ 1497bc040

FPCGMetadataAttribute<UE::Math::TRotator<double>_> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<UE::Math::TRotator<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) ||
     ((short)pFVar1->_padding_ != 0xb)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TTransform<double>_> @ 1497bc070

FPCGMetadataAttribute<UE::Math::TTransform<double>_> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<UE::Math::TTransform<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) ||
     (*(short *)&pFVar1->field_0x70 != 8)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TVector2<double>_> @ 1497bc0a0

FPCGMetadataAttribute<UE::Math::TVector2<double>_> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<UE::Math::TVector2<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) ||
     ((short)pFVar1->_padding_ != 4)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TVector4<double>_> @ 1497bc0d0

FPCGMetadataAttribute<UE::Math::TVector4<double>_> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<UE::Math::TVector4<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) ||
     (*(short *)&pFVar1->field_0x70 != 6)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<UE::Math::TVector<double>_> @ 1497bc100

FPCGMetadataAttribute<UE::Math::TVector<double>_> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<UE::Math::TVector<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) ||
     ((short)pFVar1->_padding_ != 5)) {
    pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<FSoftObjectPath> @ 1497bc130

FPCGMetadataAttribute<FSoftObjectPath> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<FSoftObjectPath>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<FSoftObjectPath> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) || ((short)pFVar1->_padding_ != 0xd)
     ) {
    pFVar1 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<FName> @ 1497bc160

FPCGMetadataAttribute<FName> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<FName>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<FName> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<FName> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<FName> *)0x0) || ((short)pFVar1->_padding_ != 0xc)) {
    pFVar1 = (FPCGMetadataAttribute<FName> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<FString> @ 1497bc190

FPCGMetadataAttribute<FString> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<FString>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<FString> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<FString> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<FString> *)0x0) || ((short)pFVar1->_padding_ != 9)) {
    pFVar1 = (FPCGMetadataAttribute<FString> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<bool> @ 1497bc1c0

FPCGMetadataAttribute<bool> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<bool>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<bool> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<bool> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<bool> *)0x0) || ((short)pFVar1->_padding_ != 10)) {
    pFVar1 = (FPCGMetadataAttribute<bool> *)0x0;
  }
  return pFVar1;
}

// GetMutableTypedAttribute_Unsafe<int> @ 1497bdb90

FPCGMetadataAttribute<int> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<int>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<int> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<int> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<int> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<int> *)*ppFVar2, pFVar1 != (FPCGMetadataAttribute<int> *)0x0)
      ) && ((short)pFVar1->_padding_ == 2)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<float> @ 1497bdbd0

FPCGMetadataAttribute<float> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<float>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<float> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<float> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<float> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<float> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<float> *)0x0)) && ((short)pFVar1->_padding_ == 0)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<UE::Math::TQuat<double>_> @ 1497bdc10

FPCGMetadataAttribute<UE::Math::TQuat<double>_> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<UE::Math::TQuat<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0)) &&
     (*(short *)&pFVar1->field_0x70 == 7)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<UE::Math::TRotator<double>_> @ 1497bdc50

FPCGMetadataAttribute<UE::Math::TRotator<double>_> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<UE::Math::TRotator<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0)) &&
     ((short)pFVar1->_padding_ == 0xb)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<UE::Math::TTransform<double>_> @ 1497bdc90

FPCGMetadataAttribute<UE::Math::TTransform<double>_> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<UE::Math::TTransform<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0)) &&
     (*(short *)&pFVar1->field_0x70 == 8)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<UE::Math::TVector2<double>_> @ 1497bdcd0

FPCGMetadataAttribute<UE::Math::TVector2<double>_> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<UE::Math::TVector2<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0)) &&
     ((short)pFVar1->_padding_ == 4)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<UE::Math::TVector4<double>_> @ 1497bdd10

FPCGMetadataAttribute<UE::Math::TVector4<double>_> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<UE::Math::TVector4<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0)) &&
     (*(short *)&pFVar1->field_0x70 == 6)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<UE::Math::TVector<double>_> @ 1497bdd50

FPCGMetadataAttribute<UE::Math::TVector<double>_> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<UE::Math::TVector<double>_>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0)) &&
     ((short)pFVar1->_padding_ == 5)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<FSoftObjectPath> @ 1497bdd90

FPCGMetadataAttribute<FSoftObjectPath> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<FSoftObjectPath>
          (FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<FSoftObjectPath> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) && ((short)pFVar1->_padding_ == 0xd)
     ) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<FName> @ 1497bddd0

FPCGMetadataAttribute<FName> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<FName>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<FName> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<FName> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<FName> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<FName> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<FName> *)0x0)) && ((short)pFVar1->_padding_ == 0xc)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<FString> @ 1497bde10

FPCGMetadataAttribute<FString> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<FString>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<FString> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<FString> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<FString> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<FString> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<FString> *)0x0)) && ((short)pFVar1->_padding_ == 9)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<bool> @ 1497bde50

FPCGMetadataAttribute<bool> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<bool>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<bool> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<bool> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<bool> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<bool> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<bool> *)0x0)) && ((short)pFVar1->_padding_ == 10)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// CreateAttribute<int> @ 14995ed30

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<int> * __thiscall
FPCGMetadataDomain::CreateAttribute<int>
          (FPCGMetadataDomain *this,FName param_1,int *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<int> *pFVar3;
  FPCGMetadataAttribute<int> *this_00;
  FPCGMetadataAttribute<int> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<int>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<int>(FName,int_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<int> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<int> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<int> *)0x0, this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<int> *)GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<int> *)0x0)) && ((short)pFVar3->_padding_ != 2)) {
    pFVar3 = (FPCGMetadataAttribute<int> *)0x0;
  }
  this_00 = ::operator_new(0xa0);
  if (this_00 != (FPCGMetadataAttribute<int> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<int>::FPCGMetadataAttribute<int>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<int> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 2) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<int>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<int>(FName,int_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<int> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<int>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<int>(FName,int_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<int> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<float> @ 14995efe0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<float> * __thiscall
FPCGMetadataDomain::CreateAttribute<float>
          (FPCGMetadataDomain *this,FName param_1,float *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<float> *pFVar3;
  FPCGMetadataAttribute<float> *this_00;
  FPCGMetadataAttribute<float> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<float>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<float>(FName,float_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<float> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<float> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<float> *)0x0, this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<float> *)GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<float> *)0x0)) && ((short)pFVar3->_padding_ != 0)) {
    pFVar3 = (FPCGMetadataAttribute<float> *)0x0;
  }
  this_00 = ::operator_new(0xa0);
  if (this_00 != (FPCGMetadataAttribute<float> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<float>::FPCGMetadataAttribute<float>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<float> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 0) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<float>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<float>(FName,float_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<float> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<float>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<float>(FName,float_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<float> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<double> @ 14995f290

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<double> * __thiscall
FPCGMetadataDomain::CreateAttribute<double>
          (FPCGMetadataDomain *this,FName param_1,double *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<double> *pFVar3;
  FPCGMetadataAttribute<double> *this_00;
  FPCGMetadataAttribute<double> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<double>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<double>(FName,double_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<double> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<double> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<double> *)0x0, this->Parent != (FPCGMetadataDomain *)0x0))
      && (pFVar3 = (FPCGMetadataAttribute<double> *)GetConstAttribute(this->Parent,local_res10),
         pFVar3 != (FPCGMetadataAttribute<double> *)0x0)) && ((short)pFVar3->_padding_ != 1)) {
    pFVar3 = (FPCGMetadataAttribute<double> *)0x0;
  }
  this_00 = ::operator_new(0xa8);
  if (this_00 != (FPCGMetadataAttribute<double> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<double>::FPCGMetadataAttribute<double>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<double> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 1) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<double>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<double>(FName,double_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<double> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<double>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<double>(FName,double_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<double> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<UE::Math::TQuat<double>_> @ 14995f540

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TQuat<double>_> * __thiscall
FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>
          (FPCGMetadataDomain *this,FName param_1,TQuat<double> *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar3;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TQuat<double>_> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TQuat<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>(FName,UE::Math::TQuat<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0,
       this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)
                GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0)) &&
     (*(short *)&pFVar3->field_0x70 != 7)) {
    pFVar3 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
  }
  this_00 = ::operator_new(0xd0);
  if (this_00 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<UE::Math::TQuat<double>_>::
             FPCGMetadataAttribute<UE::Math::TQuat<double>_>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)&pFVar4->field_0x7c = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 7) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<UE::Math::TQuat<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>(FName,UE::Math::TQuat<double>_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TQuat<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TQuat<double>_>(FName,UE::Math::TQuat<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<UE::Math::TQuat<double>_> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<UE::Math::TRotator<double>_> @ 14995f7f0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TRotator<double>_> * __thiscall
FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>
          (FPCGMetadataDomain *this,FName param_1,TRotator<double> *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar3;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TRotator<double>_> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TRotator<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>(FName,UE::Math::TRotator<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0,
       this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)
                GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0)) &&
     ((short)pFVar3->_padding_ != 0xb)) {
    pFVar3 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
  }
  this_00 = ::operator_new(0xb8);
  if (this_00 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<UE::Math::TRotator<double>_>::
             FPCGMetadataAttribute<UE::Math::TRotator<double>_>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 0xb) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<UE::Math::TRotator<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>(FName,UE::Math::TRotator<double>_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TRotator<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TRotator<double>_>(FName,UE::Math::TRotator<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<UE::Math::TRotator<double>_> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<UE::Math::TTransform<double>_> @ 14995faa0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TTransform<double>_> * __thiscall
FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>
          (FPCGMetadataDomain *this,FName param_1,TTransform<double> *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar3;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TTransform<double>_> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TTransform<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>(FName,UE::Math::TTransform<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0,
       this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)
                GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0)) &&
     (*(short *)&pFVar3->field_0x70 != 8)) {
    pFVar3 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
  }
  this_00 = ::operator_new(0x110);
  if (this_00 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<UE::Math::TTransform<double>_>::
             FPCGMetadataAttribute<UE::Math::TTransform<double>_>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)&pFVar4->field_0x7c = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 8) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<UE::Math::TTransform<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>(FName,UE::Math::TTransform<double>_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TTransform<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TTransform<double>_>(FName,UE::Math::TTransform<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<UE::Math::TTransform<double>_> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<UE::Math::TVector2<double>_> @ 14995fd50

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TVector2<double>_> * __thiscall
FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
          (FPCGMetadataDomain *this,FName param_1,TVector2<double> *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar3;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector2<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>(FName,UE::Math::TVector2<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0,
       this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)
                GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0)) &&
     ((short)pFVar3->_padding_ != 4)) {
    pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
  }
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<UE::Math::TVector2<double>_>::
             FPCGMetadataAttribute<UE::Math::TVector2<double>_>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 4) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector2<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>(FName,UE::Math::TVector2<double>_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector2<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>(FName,UE::Math::TVector2<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<UE::Math::TVector4<double>_> @ 149960000

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TVector4<double>_> * __thiscall
FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>
          (FPCGMetadataDomain *this,FName param_1,TVector4<double> *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar3;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector4<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>(FName,UE::Math::TVector4<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0,
       this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)
                GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0)) &&
     (*(short *)&pFVar3->field_0x70 != 6)) {
    pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
  }
  this_00 = ::operator_new(0xd0);
  if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<UE::Math::TVector4<double>_>::
             FPCGMetadataAttribute<UE::Math::TVector4<double>_>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)&pFVar4->field_0x7c = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 6) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector4<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>(FName,UE::Math::TVector4<double>_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector4<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>(FName,UE::Math::TVector4<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<UE::Math::TVector<double>_> @ 1499602b0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<UE::Math::TVector<double>_> * __thiscall
FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
          (FPCGMetadataDomain *this,FName param_1,TVector<double> *param_2,bool param_3,bool param_4
          )

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar3;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *this_00;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>(FName,UE::Math::TVector<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0,
       this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)
                GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0)) &&
     ((short)pFVar3->_padding_ != 5)) {
    pFVar3 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
  }
  this_00 = ::operator_new(0xb8);
  if (this_00 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<UE::Math::TVector<double>_>::
             FPCGMetadataAttribute<UE::Math::TVector<double>_>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 5) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>(FName,UE::Math::TVector<double>_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<UE::Math::TVector<double>_>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>(FName,UE::Math::TVector<double>_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<FSoftClassPath> @ 149960560

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FSoftClassPath> * __thiscall
FPCGMetadataDomain::CreateAttribute<FSoftClassPath>
          (FPCGMetadataDomain *this,FName param_1,FSoftClassPath *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar3;
  FPCGMetadataAttribute<FSoftClassPath> *this_00;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<FSoftClassPath>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FSoftClassPath>(FName,FSoftClassPath_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0,
       this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<FSoftClassPath> *)GetConstAttribute(this->Parent,local_res10)
      , pFVar3 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0)) &&
     ((short)pFVar3->_padding_ != 0xe)) {
    pFVar3 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  }
  this_00 = ::operator_new(0xc0);
  if (this_00 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<FSoftClassPath>::FPCGMetadataAttribute<FSoftClassPath>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 0xe) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<FSoftClassPath>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FSoftClassPath>(FName,FSoftClassPath_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<FSoftClassPath>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FSoftClassPath>(FName,FSoftClassPath_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<FSoftClassPath> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<FSoftObjectPath> @ 149960810

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FSoftObjectPath> * __thiscall
FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>
          (FPCGMetadataDomain *this,FName param_1,FSoftObjectPath *param_2,bool param_3,bool param_4
          )

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar3;
  FPCGMetadataAttribute<FSoftObjectPath> *this_00;
  FPCGMetadataAttribute<FSoftObjectPath> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<FSoftObjectPath>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>(FName,FSoftObjectPath_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0,
       this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<FSoftObjectPath> *)
                GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0)) && ((short)pFVar3->_padding_ != 0xd)
     ) {
    pFVar3 = (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
  }
  this_00 = ::operator_new(0xc0);
  if (this_00 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<FSoftObjectPath>::FPCGMetadataAttribute<FSoftObjectPath>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 0xd) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<FSoftObjectPath>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>(FName,FSoftObjectPath_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<FSoftObjectPath> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<FSoftObjectPath>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FSoftObjectPath>(FName,FSoftObjectPath_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<FSoftObjectPath> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<FName> @ 149960ac0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FName> * __thiscall
FPCGMetadataDomain::CreateAttribute<FName>
          (FPCGMetadataDomain *this,FName param_1,FName *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<FName> *pFVar3;
  FPCGMetadataAttribute<FName> *this_00;
  FPCGMetadataAttribute<FName> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<FName>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FName>(FName,FName_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<FName> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<FName> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<FName> *)0x0, this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<FName> *)GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<FName> *)0x0)) && ((short)pFVar3->_padding_ != 0xc)) {
    pFVar3 = (FPCGMetadataAttribute<FName> *)0x0;
  }
  this_00 = ::operator_new(0xa8);
  if (this_00 != (FPCGMetadataAttribute<FName> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<FName>::FPCGMetadataAttribute<FName>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<FName> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 0xc) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<FName>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FName>(FName,FName_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<FName> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<FName>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FName>(FName,FName_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<FName> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<FString> @ 149960d70

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FString> * __thiscall
FPCGMetadataDomain::CreateAttribute<FString>
          (FPCGMetadataDomain *this,FName param_1,FString *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<FString> *pFVar3;
  FPCGMetadataAttribute<FString> *this_00;
  FPCGMetadataAttribute<FString> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<FString>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FString>(FName,FString_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<FString> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<FString> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<FString> *)0x0, this->Parent != (FPCGMetadataDomain *)0x0))
      && (pFVar3 = (FPCGMetadataAttribute<FString> *)GetConstAttribute(this->Parent,local_res10),
         pFVar3 != (FPCGMetadataAttribute<FString> *)0x0)) && ((short)pFVar3->_padding_ != 9)) {
    pFVar3 = (FPCGMetadataAttribute<FString> *)0x0;
  }
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FPCGMetadataAttribute<FString> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<FString>::FPCGMetadataAttribute<FString>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<FString> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 9) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<FString>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FString>(FName,FString_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<FString> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<FString>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<FString>(FName,FString_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<FString> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<__int64> @ 149961020

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<__int64> * __thiscall
FPCGMetadataDomain::CreateAttribute<__int64>
          (FPCGMetadataDomain *this,FName param_1,long64 *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<__int64> *pFVar3;
  FPCGMetadataAttribute<__int64> *this_00;
  FPCGMetadataAttribute<__int64> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<__int64>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<__int64>(FName,__int64_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<__int64> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<__int64> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<__int64> *)0x0, this->Parent != (FPCGMetadataDomain *)0x0))
      && (pFVar3 = (FPCGMetadataAttribute<__int64> *)GetConstAttribute(this->Parent,local_res10),
         pFVar3 != (FPCGMetadataAttribute<__int64> *)0x0)) && ((short)pFVar3->_padding_ != 3)) {
    pFVar3 = (FPCGMetadataAttribute<__int64> *)0x0;
  }
  this_00 = ::operator_new(0xa8);
  if (this_00 != (FPCGMetadataAttribute<__int64> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<__int64>::FPCGMetadataAttribute<__int64>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<__int64> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 3) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<__int64>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<__int64>(FName,__int64_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<__int64> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<__int64>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<__int64>(FName,__int64_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<__int64> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// CreateAttribute<bool> @ 1499612d0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<bool> * __thiscall
FPCGMetadataDomain::CreateAttribute<bool>
          (FPCGMetadataDomain *this,FName param_1,bool *param_2,bool param_3,bool param_4)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttribute<bool> *pFVar3;
  FPCGMetadataAttribute<bool> *this_00;
  FPCGMetadataAttribute<bool> *pFVar4;
  FPCGMetadataAttributeBase **ppFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
  if (!bVar2) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<bool>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<bool>(FName,bool_const&___ptr64,bool,bool)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return (FPCGMetadataAttribute<bool> *)0x0;
  }
  pFVar4 = (FPCGMetadataAttribute<bool> *)0x0;
  pFVar3 = pFVar4;
  if ((((param_4) &&
       (pFVar3 = (FPCGMetadataAttribute<bool> *)0x0, this->Parent != (FPCGMetadataDomain *)0x0)) &&
      (pFVar3 = (FPCGMetadataAttribute<bool> *)GetConstAttribute(this->Parent,local_res10),
      pFVar3 != (FPCGMetadataAttribute<bool> *)0x0)) && ((short)pFVar3->_padding_ != 10)) {
    pFVar3 = (FPCGMetadataAttribute<bool> *)0x0;
  }
  this_00 = ::operator_new(0xa0);
  if (this_00 != (FPCGMetadataAttribute<bool> *)0x0) {
    pFVar4 = FPCGMetadataAttribute<bool>::FPCGMetadataAttribute<bool>
                       (this_00,this,local_res10,(FPCGMetadataAttributeBase *)pFVar3,param_2,param_3
                       );
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar5 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar5 == (FPCGMetadataAttributeBase **)0x0) {
    iVar1 = this->NextAttributeId;
    this->NextAttributeId = iVar1 + 1;
    *(int *)((longlong)&pFVar4->_padding_ + 4) = iVar1;
    AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar4);
    SetLastCachedSelectorOnOwner(this,local_res10);
  }
  else {
    if (pFVar4 != (FPCGMetadataAttribute<bool> *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    if ((*ppFVar5)->TypeId != 10) {
      if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_class_FPCGMetadataAttribute<bool>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<bool>(FName,bool_const&___ptr64,bool,bool)___ptr64'
                    ::__l28::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
      return (FPCGMetadataAttribute<bool> *)0x0;
    }
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_FPCGMetadataAttribute<bool>*___ptr64___cdecl_FPCGMetadataDomain::CreateAttribute<bool>(FName,bool_const&___ptr64,bool,bool)___ptr64'
                  ::__l39::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = (FPCGMetadataAttribute<bool> *)*ppFVar5;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar4;
}

// FindOrCreateAttribute<double> @ 14997bd00

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<double> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<double>
          (FPCGMetadataDomain *this,FName param_1,double *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  bool bVar2;
  FPCGMetadataAttributeBase **ppFVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataAttribute<double> *this_00;
  FPCGMetadataAttribute<double> *pFVar5;
  FName local_res10;
  FString local_28;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<double> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<double> *)0x0)) && ((short)pFVar5->_padding_ == 1)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (((ppFVar3 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<double> *)*ppFVar3,
      pFVar5 != (FPCGMetadataAttribute<double> *)0x0)) && ((short)pFVar5->_padding_ == 1))
  goto LAB_14997bed8;
  ppFVar3 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,local_res10);
  if (ppFVar3 == (FPCGMetadataAttributeBase **)0x0) {
LAB_14997bde4:
    bVar2 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar2) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar4 = GetConstAttribute(this->Parent,local_res10),
          pFVar4 == (FPCGMetadataAttributeBase *)0x0 || (pFVar4->TypeId != 1)))) {
        pFVar4 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar5 = (FPCGMetadataAttribute<double> *)0x0;
      this_00 = ::operator_new(0xa8);
      if (this_00 != (FPCGMetadataAttribute<double> *)0x0) {
        pFVar5 = FPCGMetadataAttribute<double>::FPCGMetadataAttribute<double>
                           (this_00,this,local_res10,pFVar4,param_2,param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar5->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar5);
      SetLastCachedSelectorOnOwner(this,local_res10);
      goto LAB_14997bed8;
    }
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<double>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<double>(FName,double_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_5) {
    pFVar4 = *ppFVar3;
    if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    RemoveAttributeInternal(this,local_res10);
    goto LAB_14997bde4;
  }
  pFVar5 = (FPCGMetadataAttribute<double> *)0x0;
LAB_14997bed8:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// GetConstTypedAttribute<double> @ 1499a6f30

FPCGMetadataAttribute<double> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<double>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<double> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<double> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<double> *)0x0) || ((short)pFVar1->_padding_ != 1)) {
    pFVar1 = (FPCGMetadataAttribute<double> *)0x0;
  }
  return pFVar1;
}

// GetMutableTypedAttribute_Unsafe<double> @ 1499a9680

FPCGMetadataAttribute<double> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<double>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<double> *pFVar1;
  FPCGMetadataAttributeBase **ppFVar2;
  FPCGMetadataAttribute<double> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<double> *)0x0;
  ppFVar2 = TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
            ::Find((TMapBase<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
                    *)&this->Attributes,param_1);
  if (((ppFVar2 != (FPCGMetadataAttributeBase **)0x0) &&
      (pFVar1 = (FPCGMetadataAttribute<double> *)*ppFVar2,
      pFVar1 != (FPCGMetadataAttribute<double> *)0x0)) && ((short)pFVar1->_padding_ == 1)) {
    pFVar3 = pFVar1;
  }
  return pFVar3;
}

// GetMutableTypedAttribute<double> @ 149d2beb0

FPCGMetadataAttribute<double> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute<double>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<double> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<double> *)GetMutableAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<double> *)0x0) || ((short)pFVar1->_padding_ != 1)) {
    pFVar1 = (FPCGMetadataAttribute<double> *)0x0;
  }
  return pFVar1;
}

// GetMutableTypedAttribute<FString> @ 149d2bee0

FPCGMetadataAttribute<FString> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute<FString>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<FString> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<FString> *)GetMutableAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<FString> *)0x0) || ((short)pFVar1->_padding_ != 9)) {
    pFVar1 = (FPCGMetadataAttribute<FString> *)0x0;
  }
  return pFVar1;
}

// GetMutableTypedAttribute<bool> @ 149d2bf10

FPCGMetadataAttribute<bool> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute<bool>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<bool> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<bool> *)GetMutableAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<bool> *)0x0) || ((short)pFVar1->_padding_ != 10)) {
    pFVar1 = (FPCGMetadataAttribute<bool> *)0x0;
  }
  return pFVar1;
}

// operator()<int> @ 149d80160

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<int>(void *this,int *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FArchive *this_00;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar7 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar7,Default);
  iStack_20 = local_38.ArrayNum;
  plVar2 = (longlong *)**(undefined8 **)this;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_18,0,uVar3,1);
  iVar7 = local_38.ArrayNum;
  uVar8 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar8 * 4;
  FVar9.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar7) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar9.Data == pFVar1) break;
    this_00 = *(FArchive **)((longlong)this + 0x10);
    puVar4 = (uint *)**(undefined8 **)&this_00->field_0x8;
    if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar4 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,FVar9.Data,4);
        uVar8 = local_38._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 4;
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,(uint *)FVar9.Data);
        uVar8 = local_38._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 4;
      }
    }
    else {
      *(uint *)FVar9.Data = *puVar4;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      uVar8 = local_38._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 4;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<float> @ 149d85750

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<float>(void *this,float *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FArchive *this_00;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar7 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar7,Default);
  iStack_20 = local_38.ArrayNum;
  plVar2 = (longlong *)**(undefined8 **)this;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_18,0,uVar3,1);
  iVar7 = local_38.ArrayNum;
  uVar8 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar8 * 4;
  FVar9.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar7) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar9.Data == pFVar1) break;
    this_00 = *(FArchive **)((longlong)this + 0x10);
    puVar4 = (uint *)**(undefined8 **)&this_00->field_0x8;
    if ((uint *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar4 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,FVar9.Data,4);
        uVar8 = local_38._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 4;
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,(uint *)FVar9.Data);
        uVar8 = local_38._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 4;
      }
    }
    else {
      *(uint *)FVar9.Data = *puVar4;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
      uVar8 = local_38._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 4;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<double> @ 149d8ad60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<double>(void *this,double *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FArchive *this_00;
  ulong64 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  TArray<double,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar7 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar7,Default);
  iStack_20 = local_38.ArrayNum;
  plVar2 = (longlong *)**(undefined8 **)this;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar2 + 0x48))(plVar2,&local_18,0,uVar3,1);
  iVar7 = local_38.ArrayNum;
  uVar8 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar8 * 8;
  FVar9.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar7) {
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar9.Data == pFVar1) break;
    this_00 = *(FArchive **)((longlong)this + 0x10);
    puVar4 = (ulong64 *)**(longlong **)&this_00->field_0x8;
    if ((ulong64 *)(*(longlong **)&this_00->field_0x8)[1] < puVar4 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,FVar9.Data,8);
        uVar8 = local_38._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 8;
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,(ulong64 *)FVar9.Data);
        uVar8 = local_38._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 8;
      }
    }
    else {
      *(ulong64 *)FVar9.Data = *puVar4;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
      uVar8 = local_38._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 8;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TQuat<double>_> @ 149d8fef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TQuat<double>_>
          (void *this,TQuat<double> *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  TQuat<double> *pTVar8;
  undefined1 local_res8 [8];
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_38,iVar5,Default);
  iStack_20 = local_38.ArrayNum;
  plVar1 = (longlong *)**(undefined8 **)this;
  uVar2 = **(undefined8 **)((longlong)this + 8);
  local_28 = (TQuat<double> *)local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar1 + 0x88))(plVar1,&local_18,0,uVar2,1);
  iVar5 = local_38.ArrayNum;
  uVar6 = (ulonglong)local_38.ArrayNum;
  pTVar8 = (TQuat<double> *)(local_38.AllocatorInstance.Data + uVar6 * 0x20);
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar5) {
      `TCheckedPointerIterator<UE::Math::TQuat<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((TQuat<double> *)FVar7.Data == pTVar8) break;
    UE::Math::operator<<(*(FArchive **)((longlong)this + 0x10),(TQuat<double> *)FVar7.Data);
    uVar6 = local_38._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 0x20;
  }
  if ((TQuat<double> *)local_38.AllocatorInstance.Data != (TQuat<double> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TRotator<double>_> @ 149d95140

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TRotator<double>_>
          (void *this,TRotator<double> *param_1)

{
  TRotator<double> *pTVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_38,iVar6,Default);
  iStack_20 = local_38.ArrayNum;
  plVar2 = (longlong *)**(undefined8 **)this;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  local_28 = (TRotator<double> *)local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar2 + 200))(plVar2,&local_18,0,uVar3,1);
  iVar6 = local_38.ArrayNum;
  uVar7 = (ulonglong)local_38.ArrayNum;
  pTVar1 = (TRotator<double> *)(local_38.AllocatorInstance.Data + uVar7 * 0x18);
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      `TCheckedPointerIterator<UE::Math::TRotator<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((TRotator<double> *)FVar8.Data == pTVar1) break;
    UE::Math::operator<<(*(FArchive **)((longlong)this + 0x10),(TRotator<double> *)FVar8.Data);
    uVar7 = local_38._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x18;
  }
  if ((TRotator<double> *)local_38.AllocatorInstance.Data != (TRotator<double> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TTransform<double>_> @ 149d9ab60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TTransform<double>_>
          (void *this,TTransform<double> *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  TTransform<double> *pTVar8;
  undefined1 local_res8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_38,iVar5,Default);
  iStack_20 = local_38.ArrayNum;
  plVar1 = (longlong *)**(undefined8 **)this;
  uVar2 = **(undefined8 **)((longlong)this + 8);
  local_28 = (TTransform<double> *)local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar1 + 0x98))(plVar1,&local_18,0,uVar2,1);
  iVar5 = local_38.ArrayNum;
  uVar6 = (ulonglong)local_38.ArrayNum;
  pTVar8 = (TTransform<double> *)(local_38.AllocatorInstance.Data + uVar6 * 0x60);
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar5) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((TTransform<double> *)FVar7.Data == pTVar8) break;
    UE::Math::operator<<(*(FArchive **)((longlong)this + 0x10),(TTransform<double> *)FVar7.Data);
    uVar6 = local_38._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 0x60;
  }
  if ((TTransform<double> *)local_38.AllocatorInstance.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TVector2<double>_> @ 149d9fbe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TVector2<double>_>
          (void *this,TVector2<double> *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_38,iVar5,Default);
  iStack_20 = local_38.ArrayNum;
  plVar1 = (longlong *)**(undefined8 **)this;
  uVar2 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_18,0,uVar2,1);
  iVar5 = local_38.ArrayNum;
  uVar6 = (ulonglong)local_38.ArrayNum;
  pFVar8 = local_38.AllocatorInstance.Data + uVar6 * 0x10;
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar5) {
      `TCheckedPointerIterator<UE::Math::TVector2<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar8) break;
    UE::Math::operator<<(*(FArchive **)((longlong)this + 0x10),(TVector2<double> *)FVar7.Data);
    uVar6 = local_38._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 0x10;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TVector4<double>_> @ 149da5110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TVector4<double>_>
          (void *this,TVector4<double> *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_38,iVar5,Default);
  iStack_20 = local_38.ArrayNum;
  plVar1 = (longlong *)**(undefined8 **)this;
  uVar2 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar1 + 0x78))(plVar1,&local_18,0,uVar2,1);
  iVar5 = local_38.ArrayNum;
  uVar6 = (ulonglong)local_38.ArrayNum;
  pFVar8 = local_38.AllocatorInstance.Data + uVar6 * 0x20;
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar5) {
      `TCheckedPointerIterator<UE::Math::TVector4<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar8) break;
    UE::Math::operator<<(*(FArchive **)((longlong)this + 0x10),(TVector4<double> *)FVar7.Data);
    uVar6 = local_38._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 0x20;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TVector<double>_> @ 149daa5b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TVector<double>_>
          (void *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_38,iVar6,Default);
  iStack_20 = local_38.ArrayNum;
  plVar2 = (longlong *)**(undefined8 **)this;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar2 + 0x68))(plVar2,&local_18,0,uVar3,1);
  iVar6 = local_38.ArrayNum;
  uVar7 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar7 * 0x18;
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    UE::Math::operator<<(*(FArchive **)((longlong)this + 0x10),(TVector<double> *)FVar8.Data);
    uVar7 = local_38._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 0x18;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<FSoftClassPath> @ 149db02c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FSoftClassPath *pFVar7;
  undefined1 local_res8 [8];
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::SetNum(&local_38,iVar5,Default);
  iStack_20 = local_38.ArrayNum;
  plVar1 = (longlong *)**(undefined8 **)this;
  uVar2 = **(undefined8 **)((longlong)this + 8);
  local_28 = (FSoftClassPath *)local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar1 + 0xf8))(plVar1,&local_18,0,uVar2,1);
  iVar5 = local_38.ArrayNum;
  pFVar7 = (FSoftClassPath *)(local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x20);
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FSoftClassPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FSoftClassPath *)FVar6.Data == pFVar7) break;
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x140))
              (*(longlong **)((longlong)this + 0x10),FVar6.Data);
    FVar6.Data = FVar6.Data + 0x20;
  }
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FSoftClassPath *)local_38.AllocatorInstance.Data != (FSoftClassPath *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<FSoftObjectPath> @ 149db60e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType this_00;
  FSoftObjectPath *pFVar6;
  undefined1 local_res8 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::SetNum(&local_38,iVar5,Default);
  iStack_20 = local_38.ArrayNum;
  plVar1 = (longlong *)**(undefined8 **)this;
  uVar2 = **(undefined8 **)((longlong)this + 8);
  local_28 = (FSoftObjectPath *)local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar1 + 0xe8))(plVar1,&local_18,0,uVar2,1);
  iVar5 = local_38.ArrayNum;
  pFVar6 = (FSoftObjectPath *)(local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x20)
  ;
  this_00.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FSoftObjectPath,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if ((FSoftObjectPath *)this_00.Data == pFVar6) break;
    FSoftObjectPath::Serialize
              ((FSoftObjectPath *)this_00.Data,*(FArchive **)((longlong)this + 0x10));
    this_00.Data = this_00.Data + 0x20;
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FSoftObjectPath *)local_38.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<FName> @ 149dbb470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<FName>(void *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<FName,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar6,Default);
  iStack_20 = local_38.ArrayNum;
  plVar2 = (longlong *)**(undefined8 **)this;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar2 + 0xd8))(plVar2,&local_18,0,uVar3,1);
  iVar6 = local_38.ArrayNum;
  uVar7 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar7 * 8;
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x178))
              (*(longlong **)((longlong)this + 0x10),FVar8.Data);
    uVar7 = local_38._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<FString> @ 149dc0f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<FString>(void *this,FString *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar5 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_38,iVar5,Default);
  iStack_20 = local_38.ArrayNum;
  plVar1 = (longlong *)**(undefined8 **)this;
  uVar2 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_18,0,uVar2,1);
  iVar5 = local_38.ArrayNum;
  pFVar7 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar6.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar6.Data == pFVar7) break;
    ::operator<<(*(FArchive **)((longlong)this + 0x10),(FString *)FVar6.Data);
    FVar6.Data = FVar6.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<__int64> @ 149dc6530

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<__int64>(void *this,long64 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined8 uVar3;
  FArchive *this_00;
  ulong64 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  TArray<__int64,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar7 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar7,Default);
  iStack_20 = local_38.ArrayNum;
  plVar2 = (longlong *)**(undefined8 **)this;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_18,0,uVar3,1);
  iVar7 = local_38.ArrayNum;
  uVar8 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar8 * 8;
  FVar9.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar7) {
      `TCheckedPointerIterator<__int64,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar9.Data == pFVar1) break;
    this_00 = *(FArchive **)((longlong)this + 0x10);
    puVar4 = (ulong64 *)**(longlong **)&this_00->field_0x8;
    if ((ulong64 *)(*(longlong **)&this_00->field_0x8)[1] < puVar4 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,FVar9.Data,8);
        uVar8 = local_38._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 8;
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,(ulong64 *)FVar9.Data);
        uVar8 = local_38._8_8_ & 0xffffffff;
        FVar9.Data = FVar9.Data + 8;
      }
    }
    else {
      *(ulong64 *)FVar9.Data = *puVar4;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 8;
      uVar8 = local_38._8_8_ & 0xffffffff;
      FVar9.Data = FVar9.Data + 8;
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<bool> @ 149dcbb10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<bool>(void *this,bool *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 8) + 0x10))();
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar6,Default);
  iStack_20 = local_38.ArrayNum;
  plVar2 = (longlong *)**(undefined8 **)this;
  uVar3 = **(undefined8 **)((longlong)this + 8);
  local_28 = local_38.AllocatorInstance.Data;
  if (local_38.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  iStack_10 = iStack_20;
  uStack_c = uStack_1c;
  (**(code **)(*plVar2 + 0xb8))(plVar2,&local_18,0,uVar3,1);
  iVar6 = local_38.ArrayNum;
  uVar7 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar7;
  FVar8.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    ::operator<<(*(FArchive **)((longlong)this + 0x10),(bool *)FVar8.Data);
    uVar7 = local_38._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 1;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// FindOrCreateAttribute<FSoftClassPath> @ 149de8620

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<FSoftClassPath> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<FSoftClassPath>
          (FPCGMetadataDomain *this,FName param_1,FSoftClassPath *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar4;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar5;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar6;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar7;
  FName local_res10;
  FString local_38;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  pTVar4 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,local_res10);
  pFVar7 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  pFVar5 = (FPCGMetadataAttribute<FSoftClassPath> *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar5 = pFVar7;
  }
  if (((pFVar5 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<FSoftClassPath> *)pFVar5->_padding_,
      pFVar5 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0)) && ((short)pFVar5->_padding_ == 0xe))
  {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  pTVar4 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,local_res10);
  pFVar5 = (FPCGMetadataAttribute<FSoftClassPath> *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar5 = pFVar7;
  }
  if (((pFVar5 == (FPCGMetadataAttribute<FSoftClassPath> *)0x0) ||
      (pFVar5 = (FPCGMetadataAttribute<FSoftClassPath> *)pFVar5->_padding_,
      pFVar5 == (FPCGMetadataAttribute<FSoftClassPath> *)0x0)) || ((short)pFVar5->_padding_ != 0xe))
  {
    pTVar4 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                     *)&this->Attributes,local_res10);
    pFVar6 = (FPCGMetadataAttribute<FSoftClassPath> *)&pTVar4->field_0x8;
    if (pTVar4 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
      pFVar6 = pFVar7;
    }
    pFVar5 = pFVar7;
    if (pFVar6 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
      if (!param_5) goto LAB_149de881a;
      puVar2 = (undefined8 *)pFVar6->_padding_;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      RemoveAttributeInternal(this,local_res10);
    }
    bVar3 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar3) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar5 = (FPCGMetadataAttribute<FSoftClassPath> *)
                    GetConstAttribute(this->Parent,local_res10),
          pFVar5 == (FPCGMetadataAttribute<FSoftClassPath> *)0x0 ||
          ((short)pFVar5->_padding_ != 0xe)))) {
        pFVar5 = pFVar7;
      }
      pFVar6 = ::operator_new(0xc0);
      if (pFVar6 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) {
        pFVar7 = FPCGMetadataAttribute<FSoftClassPath>::FPCGMetadataAttribute<FSoftClassPath>
                           (pFVar6,this,local_res10,(FPCGMetadataAttributeBase *)pFVar5,param_2,
                            param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar7->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar7);
      SetLastCachedSelectorOnOwner(this,local_res10);
      pFVar5 = pFVar7;
    }
    else if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_38);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<FSoftClassPath>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<FSoftClassPath>(FName,FSoftClassPath_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_149de881a:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// FindOrCreateAttribute<__int64> @ 149de8850

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttribute<__int64> * __thiscall
FPCGMetadataDomain::FindOrCreateAttribute<__int64>
          (FPCGMetadataDomain *this,FName param_1,long64 *param_2,bool param_3,bool param_4,
          bool param_5)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar4;
  FPCGMetadataAttribute<__int64> *pFVar5;
  FPCGMetadataAttribute<__int64> *pFVar6;
  FPCGMetadataAttribute<__int64> *pFVar7;
  FName local_res10;
  FString local_38;
  
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  pTVar4 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,local_res10);
  pFVar7 = (FPCGMetadataAttribute<__int64> *)0x0;
  pFVar5 = (FPCGMetadataAttribute<__int64> *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar5 = pFVar7;
  }
  if (((pFVar5 != (FPCGMetadataAttribute<__int64> *)0x0) &&
      (pFVar5 = (FPCGMetadataAttribute<__int64> *)pFVar5->_padding_,
      pFVar5 != (FPCGMetadataAttribute<__int64> *)0x0)) && ((short)pFVar5->_padding_ == 3)) {
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
    return pFVar5;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  pTVar4 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,local_res10);
  pFVar5 = (FPCGMetadataAttribute<__int64> *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar5 = pFVar7;
  }
  if (((pFVar5 == (FPCGMetadataAttribute<__int64> *)0x0) ||
      (pFVar5 = (FPCGMetadataAttribute<__int64> *)pFVar5->_padding_,
      pFVar5 == (FPCGMetadataAttribute<__int64> *)0x0)) || ((short)pFVar5->_padding_ != 3)) {
    pTVar4 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                     *)&this->Attributes,local_res10);
    pFVar6 = (FPCGMetadataAttribute<__int64> *)&pTVar4->field_0x8;
    if (pTVar4 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
      pFVar6 = pFVar7;
    }
    pFVar5 = pFVar7;
    if (pFVar6 != (FPCGMetadataAttribute<__int64> *)0x0) {
      if (!param_5) goto LAB_149de8a4a;
      puVar2 = (undefined8 *)pFVar6->_padding_;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      RemoveAttributeInternal(this,local_res10);
    }
    bVar3 = FPCGMetadataAttributeBase::IsValidName(&local_res10);
    if (bVar3) {
      if (((!param_4) || (this->Parent == (FPCGMetadataDomain *)0x0)) ||
         ((pFVar5 = (FPCGMetadataAttribute<__int64> *)GetConstAttribute(this->Parent,local_res10),
          pFVar5 == (FPCGMetadataAttribute<__int64> *)0x0 || ((short)pFVar5->_padding_ != 3)))) {
        pFVar5 = pFVar7;
      }
      pFVar6 = ::operator_new(0xa8);
      if (pFVar6 != (FPCGMetadataAttribute<__int64> *)0x0) {
        pFVar7 = FPCGMetadataAttribute<__int64>::FPCGMetadataAttribute<__int64>
                           (pFVar6,this,local_res10,(FPCGMetadataAttributeBase *)pFVar5,param_2,
                            param_3);
      }
      iVar1 = this->NextAttributeId;
      this->NextAttributeId = iVar1 + 1;
      *(int *)((longlong)&pFVar7->_padding_ + 4) = iVar1;
      AddAttributeInternal(this,local_res10,(FPCGMetadataAttributeBase *)pFVar7);
      SetLastCachedSelectorOnOwner(this,local_res10);
      pFVar5 = pFVar7;
    }
    else if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_38);
      UE::Logging::Private::BasicLog<2>
                (&`public:_class_FPCGMetadataAttribute<__int64>*___ptr64___cdecl_FPCGMetadataDomain::FindOrCreateAttribute<__int64>(FName,__int64_const&___ptr64,bool,bool,bool)___ptr64'
                  ::__l21::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_149de8a4a:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  return pFVar5;
}

// GetConstTypedAttribute<FSoftClassPath> @ 149ded480

FPCGMetadataAttribute<FSoftClassPath> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<FSoftClassPath>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<FSoftClassPath> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<FSoftClassPath> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<FSoftClassPath> *)0x0) || ((short)pFVar1->_padding_ != 0xe))
  {
    pFVar1 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  }
  return pFVar1;
}

// GetConstTypedAttribute<__int64> @ 149ded4b0

FPCGMetadataAttribute<__int64> * __thiscall
FPCGMetadataDomain::GetConstTypedAttribute<__int64>(FPCGMetadataDomain *this,FName param_1)

{
  FPCGMetadataAttribute<__int64> *pFVar1;
  
  pFVar1 = (FPCGMetadataAttribute<__int64> *)GetConstAttribute(this,param_1);
  if ((pFVar1 == (FPCGMetadataAttribute<__int64> *)0x0) || ((short)pFVar1->_padding_ != 3)) {
    pFVar1 = (FPCGMetadataAttribute<__int64> *)0x0;
  }
  return pFVar1;
}

// GetMutableTypedAttribute_Unsafe<FSoftClassPath> @ 149dee360

FPCGMetadataAttribute<FSoftClassPath> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<FSoftClassPath>
          (FPCGMetadataDomain *this,FName param_1)

{
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar1;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar2;
  FPCGMetadataAttribute<FSoftClassPath> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<FSoftClassPath> *)0x0;
  pTVar1 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,param_1);
  pFVar2 = (FPCGMetadataAttribute<FSoftClassPath> *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar2 = pFVar3;
  }
  if (((pFVar2 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0) &&
      (pFVar2 = (FPCGMetadataAttribute<FSoftClassPath> *)pFVar2->_padding_,
      pFVar2 != (FPCGMetadataAttribute<FSoftClassPath> *)0x0)) && ((short)pFVar2->_padding_ == 0xe))
  {
    pFVar3 = pFVar2;
  }
  return pFVar3;
}

// GetMutableTypedAttribute_Unsafe<__int64> @ 149dee3b0

FPCGMetadataAttribute<__int64> * __thiscall
FPCGMetadataDomain::GetMutableTypedAttribute_Unsafe<__int64>(FPCGMetadataDomain *this,FName param_1)

{
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar1;
  FPCGMetadataAttribute<__int64> *pFVar2;
  FPCGMetadataAttribute<__int64> *pFVar3;
  
  pFVar3 = (FPCGMetadataAttribute<__int64> *)0x0;
  pTVar1 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,param_1);
  pFVar2 = (FPCGMetadataAttribute<__int64> *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar2 = pFVar3;
  }
  if (((pFVar2 != (FPCGMetadataAttribute<__int64> *)0x0) &&
      (pFVar2 = (FPCGMetadataAttribute<__int64> *)pFVar2->_padding_,
      pFVar2 != (FPCGMetadataAttribute<__int64> *)0x0)) && ((short)pFVar2->_padding_ == 3)) {
    pFVar3 = pFVar2;
  }
  return pFVar3;
}

// FPCGMetadataDomain @ 149e356c0

FPCGMetadataDomain * __thiscall
FPCGMetadataDomain::FPCGMetadataDomain
          (FPCGMetadataDomain *this,UPCGMetadata *param_1,FPCGMetadataDomainID *param_2)

{
  code *pcVar1;
  FName FVar2;
  EPCGMetadataDomainFlag EVar3;
  undefined3 uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  FPCGMetadataDomain *pFVar9;
  UObject *pUVar10;
  
  EVar3 = param_2->Flag;
  uVar4 = *(undefined3 *)&param_2->field_0x1;
  iVar5 = param_2->CustomFlag;
  FVar2 = param_2->DebugName;
  this->_padding_ = (longlong)&___7FPCGMetadataDomain__6B_;
  this->TopMetadata = param_1;
  this->Parent = (FPCGMetadataDomain *)0x0;
  (this->DomainID).Flag = EVar3;
  *(undefined3 *)&(this->DomainID).field_0x1 = uVar4;
  (this->DomainID).CustomFlag = iVar5;
  (this->DomainID).DebugName = FVar2;
  if (param_1 != (UPCGMetadata *)0x0) {
    pUVar10 = (UObject *)param_1->_padding_;
    if (pUVar10 == (UObject *)0x0) {
LAB_149e35732:
      pUVar8 = Z_Construct_UClass_UPCGData_NoRegister();
      if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar8);
      }
      pUVar10 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar10 == (UObject *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                           ,0x4d3,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pFVar9 = (FPCGMetadataDomain *)(*pcVar1)();
          return pFVar9;
        }
      }
    }
    else {
      pUVar8 = Z_Construct_UClass_UPCGData_NoRegister();
      iVar5 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar5) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar8->_padding_)) goto LAB_149e35732;
    }
    cVar7 = (**(code **)(*(longlong *)pUVar10 + 0x358))(pUVar10,&this->DomainID);
    if (cVar7 != '\0') {
      bVar6 = true;
      goto LAB_149e3579c;
    }
  }
  bVar6 = false;
LAB_149e3579c:
  *(undefined8 *)&this->Attributes = 0;
  *(undefined8 *)&(this->Attributes).field_0x8 = 0;
  *(undefined8 *)&(this->Attributes).field_0x20 = 0;
  this->bSupportMultiEntries = bVar6;
  *(undefined4 *)&(this->Attributes).field_0x28 = 0;
  *(undefined4 *)&(this->Attributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->Attributes).field_0x34 = 0;
  *(undefined4 *)&(this->Attributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Attributes).field_0x40 = 0;
  *(undefined4 *)&(this->Attributes).field_0x48 = 0;
  this->NextAttributeId = 0;
  (this->ParentKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParentKeys).ArrayNum = 0;
  (this->ParentKeys).ArrayMax = 0;
  this->ItemKeyOffset = 0;
  (this->AttributeLock).Mutex.Mutex.Ptr = (void *)0x0;
  (this->ItemLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->DelayedEntriesIndex = (TAtomic<__int64>)0x0;
  if (param_1 == (UPCGMetadata *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTopMetadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                       ,0x11e,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FPCGMetadataDomain *)(*pcVar1)();
      return pFVar9;
    }
  }
  return this;
}

// ~FPCGMetadataDomain @ 149e37230

void __thiscall FPCGMetadataDomain::~FPCGMetadataDomain(FPCGMetadataDomain *this)

{
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *this_00;
  FPlatformRWLock *SRWLock;
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  BOOLEAN BVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  SRWLock = &this->AttributeLock;
  this->_padding_ = (longlong)&___7FPCGMetadataDomain__6B_;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->Attributes;
  iVar14 = 0;
  iVar2 = *(int *)&(this->Attributes).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Attributes).field_0x10;
  iVar16 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar2 != 0) {
    puVar17 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_70.Array;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149e372ef;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar10 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iVar11 = local_res18 + -1 + iVar16;
    if (iVar2 < iVar11) {
      iVar11 = iVar2;
    }
  }
LAB_149e372ef:
  uVar13 = *(uint *)&(this->Attributes).field_0x28;
  uVar19 = uVar13 & 0xffffffe0;
  puVar18 = &(this->Attributes).field_0x10;
  TStack_70.CurrentBitIndex = iVar11;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uVar10,iVar14);
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar11;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->Attributes).field_0x8 -
                       *(int *)&(this->Attributes).field_0x34);
  if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&(this->Attributes).field_0x28;
  if (uVar13 != uVar10) {
    puVar15 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar18;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_149e37400;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    uVar13 = local_res20 + -1 + uVar19;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_149e37400:
  while( true ) {
    if (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34 !=
        (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar12 = (longlong)TStack_70.CurrentBitIndex;
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) break;
    lVar3 = *(longlong *)&this_00->field_0x0;
    puVar4 = *(undefined8 **)(lVar3 + 8 + lVar12 * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    *(undefined8 *)(lVar3 + lVar12 * 0x18 + 8) = 0;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           *)this_00);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ItemLock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ItemLock);
  }
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (BVar9 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pFVar5 = (this->ParentKeys).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->Attributes).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Attributes).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  return;
}

// operator() @ 149e3eb30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
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
`FPCGMetadataDomain::SetAttributes'::__l32::<lambda_1>::operator()(void *this,int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  FPCGMetadataDomain *this_00;
  longlong lVar5;
  long64 *plVar6;
  TArray<__int64,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  FPCGContext *this_01;
  code *pcVar8;
  long64 lVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar13;
  FPCGMetadataDomain *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  FString *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  IPCGAttributeAccessor *local_res8;
  undefined4 local_res10 [2];
  FName local_res18;
  FName local_res20;
  IPCGAttributeAccessorKeys local_248;
  longlong local_238;
  int local_230;
  undefined4 local_22c;
  void *local_228;
  undefined8 local_220;
  TArray<int,TSizedDefaultAllocator<32>_> local_218;
  FMemScope local_208;
  undefined8 local_200;
  int iStack_1f8;
  int iStack_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  long64 lStack_1e8;
  TArrayView<int_const_,int> local_1e0;
  TArrayView<__int64_const_,int> local_1d0;
  <lambda_1> local_1c0;
  <lambda_1> local_1b0;
  <lambda_1> local_1a0;
  <lambda_1> local_190;
  <lambda_1> local_180;
  <lambda_1> local_170;
  <lambda_1> local_160;
  <lambda_1> local_150;
  <lambda_1> local_140;
  <lambda_1> local_130;
  <lambda_1> local_120;
  <lambda_1> local_110;
  <lambda_1> local_100;
  <lambda_1> local_f0;
  <lambda_1> local_e0;
  FText local_d0;
  FString local_c0;
  FString local_b0;
  FText local_a0;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_88;
  FText local_68;
  FTextFormat local_58;
  
  bVar11 = false;
  local_res10[0] = 0;
  FLLMScope::FLLMScope
            ((FLLMScope *)local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_208,&local_res20,true);
  uVar21 = param_1 + *(int *)((longlong)this + 0x10);
  plVar4 = *(longlong **)((longlong)this + 0x20);
  uVar12 = 0;
  if ((int)uVar21 < (int)plVar4[1]) {
    uVar12 = ~uVar21 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_res18 = *(FName *)(*plVar4 + (longlong)(int)uVar21 * 8);
  pTVar13 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                    *)(*(longlong *)this + 0x30),local_res18);
  if ((pTVar13 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = *(FPCGMetadataDomain **)&pTVar13->field_0x8;
  pFVar14 = (FPCGMetadataDomain *)
            FPCGMetadataDomain::GetConstAttribute
                      (*(FPCGMetadataDomain **)((longlong)this + 0x18),local_res18);
  if (pFVar14 == (FPCGMetadataDomain *)0x0) goto LAB_149e3f3a7;
  uVar1 = *(ushort *)&(pFVar14->Attributes).field_0x40;
  uVar20 = (ulonglong)uVar1;
  uVar2 = *(ushort *)&(this_00->Attributes).field_0x40;
  uVar19 = (ulonglong)uVar2;
  uVar23 = uVar20;
  uVar24 = uVar19;
  if ((uVar1 < 0xf) && (uVar2 < 0xf)) {
    uVar23 = (ulonglong)(uint)uVar1;
    uVar24 = (ulonglong)(uint)uVar2;
    if (PCG::Private::BroadcastableTypes.Values[uVar20][uVar19] == false) goto LAB_149e3ec9f;
  }
  else {
LAB_149e3ec9f:
    if (((0xe < uVar2) || (0xe < uVar1)) ||
       (PCG::Private::ConstructibleTypes.Values[uVar24][uVar23] == false)) {
      if (1 < (byte)LogPCG._0_1_) {
        pFVar15 = FText::FromName(&local_68,&local_res18);
        pFVar16 = FText::AsLocalizable_Advanced_LocText
                            (&local_d0,L"PCGMetadata",L"TypeMismatch",
                             L"Metadata type mismatch with attribute \'{0}\'");
        pFVar17 = FTextFormat::FTextFormat(&local_58,pFVar16,Default);
        pFVar15 = FText::Format<FText>(&local_a0,pFVar17,pFVar15);
        FText::ToString(pFVar15);
        if (*(FPCGContext **)((longlong)this + 8) != (FPCGContext *)0x0) {
          pFVar18 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 8),&local_b0);
          if ((pFVar18->Data).ArrayNum == 0) {
            bVar11 = true;
          }
          else {
            bVar11 = true;
          }
        }
        this_01 = *(FPCGContext **)((longlong)this + 8);
        if (this_01 != (FPCGContext *)0x0) {
          FPCGContext::GetExecutionSourceName(this_01,&local_c0);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((this_01 != (FPCGContext *)0x0) &&
           (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if ((bVar11) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_a0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
        }
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
        }
      }
      goto LAB_149e3f3a7;
    }
  }
  if (this_00 == pFVar14) {
    lVar5 = *(longlong *)((longlong)this + 0x28);
    local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_218.ArrayNum = 0;
    local_218.ArrayMax = 0;
    iVar3 = *(int *)(lVar5 + 0x808);
    lVar22 = *(longlong *)(lVar5 + 0x800);
    if (*(longlong *)(lVar5 + 0x800) == 0) {
      lVar22 = lVar5;
    }
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iStack_1f8 = 8;
    local_200 = lVar22;
    iStack_1f4 = iVar3;
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumElements >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                            ,0x3f,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_88.ElementView.FirstElementPtr._0_4_ = (undefined4)local_200;
    local_88.ElementView.FirstElementPtr._4_4_ = local_200._4_4_;
    local_88.ElementView.BytesBetweenElements = iStack_1f8;
    local_88.ElementView.NumElements = iStack_1f4;
    local_1f0 = iStack_1f4;
    local_88._20_4_ = uStack_1ec;
    local_88.NumElements = iStack_1f4;
    local_88.StubValue = lStack_1e8;
    FPCGMetadataAttributeBase::GetValueKeys
              ((FPCGMetadataAttributeBase *)this_00,&local_88,&local_218);
    local_1e0.ArrayNum = local_218.ArrayNum;
    local_1e0.DataPtr = (int *)local_218.AllocatorInstance.Data;
    if ((local_218.ArrayNum < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    plVar6 = *(long64 **)((longlong)this + 0x30);
    lVar9 = plVar6[0x101];
    local_1d0.DataPtr = (long64 *)plVar6[0x100];
    if ((long64 *)plVar6[0x100] == (long64 *)0x0) {
      local_1d0.DataPtr = plVar6;
    }
    if (((int)lVar9 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_1d0.ArrayNum = (int)lVar9;
    FPCGMetadataAttributeBase::SetValuesFromValueKeys
              ((FPCGMetadataAttributeBase *)this_00,&local_1d0,&local_1e0,true);
    if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.AllocatorInstance.Data);
    }
  }
  else {
    PCGAttributeAccessorHelpers::CreateConstAccessor
              ((FPCGMetadataAttributeBase *)&local_res8,pFVar14,
               SUB81(*(undefined8 *)((longlong)this + 0x18),0));
    lVar5 = *(longlong *)((longlong)this + 0x28);
    local_230 = *(int *)(lVar5 + 0x808);
    local_238 = *(longlong *)(lVar5 + 0x800);
    if (*(longlong *)(lVar5 + 0x800) == 0) {
      local_238 = lVar5;
    }
    if ((local_230 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_248._padding_ = (longlong)&___7FPCGAttributeAccessorKeysEntries__6B_;
    local_22c = local_d0._12_4_;
    local_248.bIsReadOnly = false;
    local_228 = (void *)0x0;
    local_220 = 0;
    if (local_res8 != (IPCGAttributeAccessor *)0x0) {
      pTVar7 = *(TArray<__int64,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> **)
                ((longlong)this + 0x30);
      switch(*(undefined2 *)&(this_00->Attributes).field_0x40) {
      case 0:
        local_1a0.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_1a0.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<float,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<float>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_1a0,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 1:
        local_190.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_190.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<double,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<double>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_190,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 2:
        local_1c0.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_1c0.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<int,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<int>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_1c0,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 3:
        local_1b0.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_1b0.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<__int64,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<__int64>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_1b0,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 4:
        local_180.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_180.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<UE::Math::TVector2<double>,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<UE::Math::TVector2<double>_>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_180,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 5:
        local_170.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_170.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<UE::Math::TVector<double>,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<UE::Math::TVector<double>_>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_170,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 6:
        local_160.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_160.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<UE::Math::TVector4<double>,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<UE::Math::TVector4<double>_>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_160,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 7:
        local_150.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_150.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<UE::Math::TQuat<double>,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<UE::Math::TQuat<double>_>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_150,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 8:
        local_140.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_140.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<UE::Math::TTransform<double>,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<UE::Math::TTransform<double>_>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_140,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 9:
        local_130.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_130.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<FString,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<FString>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_130,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 10:
        local_120.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_120.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<bool,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<bool>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_120,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 0xb:
        local_110.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_110.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<UE::Math::TRotator<double>,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<UE::Math::TRotator<double>_>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_110,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 0xc:
        local_100.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_100.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<FName,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<FName>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_100,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 0xd:
        local_f0.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_f0.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<FSoftObjectPath,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<FSoftObjectPath>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_f0,AllowBroadcastAndConstructible,0x100,-1);
        break;
      case 0xe:
        local_e0.Attribute = (FPCGMetadataAttributeBase *)this_00;
        local_e0.OutKeys = pTVar7;
        PCGMetadataElementCommon::
        ApplyOnAccessorRange<FSoftClassPath,___FPCGMetadataDomain::SetAttributes_::__l32::<lambda_1>::operator()_::__l22::<lambda_1>::operator()<FSoftClassPath>_::__l2::<lambda_1>_&>
                  (&local_248,local_res8,&local_e0,AllowBroadcastAndConstructible,0x100,-1);
      }
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
      if (local_res8 != (IPCGAttributeAccessor *)0x0) {
        (**(code **)local_res8->_padding_)(local_res8,1);
      }
    }
  }
LAB_149e3f3a7:
  FMemScope::~FMemScope(&local_208);
  FLLMScope::~FLLMScope((FLLMScope *)local_res10);
  return;
}

// AccumulateWeightedAttributes @ 149e46400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::AccumulateWeightedAttributes
          (FPCGMetadataDomain *this,long64 param_1,FPCGMetadataDomain *param_2,float param_3,
          bool param_4,long64 *param_5)

{
  FName *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar8;
  bool bVar9;
  long64 lVar10;
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  undefined1 local_e7 [7];
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int local_b0;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_a8;
  TBitArray<FDefaultBitArrayAllocator> *local_a0;
  FPlatformRWLock *local_98;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60 [2];
  
  if (param_2 == (FPCGMetadataDomain *)0x0) {
    return;
  }
  lVar12 = *param_5;
  if (lVar12 == -1) {
    if ((param_1 != -1) && (this->Parent == param_2)) {
      lVar10 = AddEntry(this,param_1);
      *param_5 = lVar10;
      bVar7 = true;
      goto LAB_149e4648e;
    }
    lVar12 = -1;
LAB_149e46483:
    lVar10 = AddEntry(this,lVar12);
    *param_5 = lVar10;
  }
  else if (lVar12 < this->ItemKeyOffset) goto LAB_149e46483;
  bVar7 = false;
LAB_149e4648e:
  if ((!param_4) || (bVar7)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  local_98 = &this->AttributeLock;
  AcquireSRWLockShared((PSRWLOCK)local_98);
  iVar2 = *(int *)&(this->Attributes).field_0x28;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Attributes).field_0x10;
  local_e0 = &this->Attributes;
  iStack_d8 = 0;
  uStack_d4 = 1;
  local_c0 = 0;
  iStack_c4 = 0;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar20;
    }
    uVar17 = *puVar19;
    local_c0 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_d8;
      local_c0 = local_c0 + 0x20;
      iStack_d8 = iStack_d8 + 1;
      iStack_c4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_149e4654e;
      uVar17 = puVar19[lVar12 + 1];
    }
    uStack_d4 = -uVar17 & uVar17;
    uVar1 = (ulonglong)uStack_d4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_b0 = (int)lVar12;
    iStack_c4 = local_c0 + -1 + local_b0;
    if (iVar2 < iStack_c4) {
      iStack_c4 = iVar2;
    }
  }
LAB_149e4654e:
  iStack_b8 = *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34;
  uVar17 = *(uint *)&(this->Attributes).field_0x28;
  uStack_c8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_d4,iStack_d8);
  uVar15 = uVar17 & 0xffffffe0;
  TStack_88.CurrentBitIndex = iStack_c4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_88._28_4_ = iStack_c4;
  TStack_88.BaseBitIndex = local_c0;
  uStack_68 = CONCAT44(uStack_b4,iStack_b8);
  local_d0 = (undefined1 *)pTVar20;
  iStack_bc = iStack_c4;
  local_a8 = local_e0;
  local_a0 = pTVar20;
  local_90 = local_e0;
  TStack_88.Array = pTVar20;
  if ((((int)uVar17 < 0) || (iVar2 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->Attributes).field_0x28;
  if (uVar17 != uVar3) {
    puVar18 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = (undefined1 *)pTVar20;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149e46650;
      uVar17 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar17 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar3 < (int)uVar17) {
      uVar17 = uVar3;
    }
  }
LAB_149e46650:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_e7);
    }
    if (((TStack_88.CurrentBitIndex == uVar17) && (TStack_88.Array == pTVar20)) &&
       (pTVar8 == local_a8)) break;
    puVar16 = (undefined8 *)0x0;
    lVar12 = *(longlong *)pTVar8;
    plVar4 = *(longlong **)(lVar12 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    this_00 = (FName *)(lVar12 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    FVar5 = *this_00;
    AcquireSRWLockShared((PSRWLOCK)&param_2->AttributeLock);
    pTVar11 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                      *)&param_2->Attributes,FVar5);
    puVar13 = (undefined8 *)&pTVar11->field_0x8;
    if (pTVar11 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
      puVar13 = puVar16;
    }
    if (puVar13 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)*puVar13;
    }
    ReleaseSRWLockShared((PSRWLOCK)&param_2->AttributeLock);
    if (puVar16 != (undefined8 *)0x0) {
      if (*(short *)(puVar16 + 0xe) == (short)plVar4[0xe]) {
        if (*(char *)((longlong)plVar4 + 0x72) == '\0') {
          if (bVar7) {
            (**(code **)(*plVar4 + 0x58))(plVar4,*param_5,puVar16,param_1);
          }
        }
        else {
          (**(code **)(*plVar4 + 0x68))(plVar4,*param_5,puVar16,param_1,param_3);
        }
      }
      else if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(this_00,local_60);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    pTVar20 = local_a0;
  }
  ReleaseSRWLockShared((PSRWLOCK)local_98);
  return;
}

// AddAttribute @ 149e46910

bool __thiscall
FPCGMetadataDomain::AddAttribute(FPCGMetadataDomain *this,FPCGMetadataDomain *param_1,FName param_2)

{
  FPCGMetadataDomain *pFVar1;
  bool bVar2;
  FPCGMetadataAttributeBase *pFVar3;
  
  if (param_1 != (FPCGMetadataDomain *)0x0) {
    bVar2 = HasAttribute(param_1,param_2);
    if (bVar2) {
      bVar2 = HasAttribute(this,param_2);
      if (!bVar2) {
        pFVar1 = this->Parent;
        pFVar3 = GetConstAttribute(param_1,param_2);
        pFVar3 = CopyAttribute(this,pFVar3,param_2,param_1 == pFVar1,false,false);
        return pFVar3 != (FPCGMetadataAttributeBase *)0x0;
      }
    }
  }
  return false;
}

// AddAttributeInternal @ 149e46b30

void __thiscall
FPCGMetadataDomain::AddAttributeInternal
          (FPCGMetadataDomain *this,FName param_1,FPCGMetadataAttributeBase *param_2)

{
  TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&> local_res8;
  FPCGMetadataAttributeBase *local_res18 [2];
  FPCGMetadataAttributeBase ***local_18;
  FPCGMetadataAttributeBase **local_10;
  
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  local_res8.Value = (FPCGMetadataAttributeBase **)param_1;
  local_res18[0] = param_2;
  TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&>_>
            ((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
              *)&this->Attributes,&local_res8,(bool *)&local_18);
  return;
}

// AddAttributes @ 149e46b70

bool __thiscall
FPCGMetadataDomain::AddAttributes
          (FPCGMetadataDomain *this,FPCGMetadataDomainInitializeParams *param_1)

{
  FName *pFVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  FPCGMetadataDomain *pFVar6;
  FName FVar7;
  undefined1 *puVar8;
  code *pcVar9;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  FPCGMetadataAttributeBase *pFVar13;
  longlong lVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  bool bVar24;
  bool bVar25;
  <lambda_1> local_res10 [8];
  int local_res18;
  int local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  ForElementType<unsigned_int> local_c0;
  FString local_b8;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_78;
  FName local_70;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1->Parent == (FPCGMetadataDomain *)0x0) {
    return false;
  }
  iVar16 = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  if ((param_1->MatchOperator != Equal) &&
     (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0xc) != -1)) {
    Algo::
    Transform<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_PCGMetadata::FPCGMetadataAttributeNameFilter::FPCGMetadataAttributeNameFilter_::__l5::<lambda_1>_>
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               &param_1->FilteredAttributes,&local_d0,local_res10[0]);
  }
  pFVar6 = param_1->Parent;
  bVar24 = false;
  bVar25 = false;
  iVar4 = *(int *)&(pFVar6->Attributes).field_0x28;
  local_c0 = (ForElementType<unsigned_int>)&(pFVar6->Attributes).field_0x10;
  uStack_9c = 1;
  local_78 = &pFVar6->Attributes;
  local_88 = 0;
  iStack_8c = iVar16;
  if (iVar4 != 0) {
    puVar22 = *(uint **)&(pFVar6->Attributes).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)local_c0;
    }
    uVar19 = *puVar22;
    local_88 = 0;
    iVar16 = 0;
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar16;
      local_88 = local_88 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_8c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_149e46c7c;
      uVar19 = (puVar22 + 1)[lVar14];
    }
    uStack_9c = -uVar19 & uVar19;
    uVar21 = (ulonglong)uStack_9c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iStack_8c = local_88 + -1 + local_res18;
    if (iVar4 < iStack_8c) {
      iStack_8c = iVar4;
    }
  }
LAB_149e46c7c:
  local_a8 = &pFVar6->Attributes;
  iStack_80 = *(int *)&(pFVar6->Attributes).field_0x8 - *(int *)&(pFVar6->Attributes).field_0x34;
  TStack_60._padding_ = CONCAT44(uStack_9c,iVar16);
  uVar19 = *(uint *)&(pFVar6->Attributes).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  uVar18 = uVar19 & 0xffffffe0;
  iVar17 = (int)uVar19 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  iStack_a0 = iVar16;
  local_98 = (undefined1 *)local_c0;
  iStack_84 = iStack_8c;
  local_68 = local_a8;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  uVar5 = *(int *)((longlong)local_c0 + 0x18);
  if (uVar19 != uVar5) {
    FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_c0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_c0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_c0;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar17;
      uVar18 = uVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uVar19 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_149e46d80;
      uVar19 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar14 * 4);
    }
    uVar21 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    uVar19 = local_res20 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_149e46d80:
  do {
    pTVar10 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res10[0] = (<lambda_1>)0x0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar19) &&
        ((ForElementType<unsigned_int>)TStack_60.Array == local_c0)) && (pTVar10 == local_78)) {
      DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      return bVar25;
    }
    pFVar1 = (FName *)(*(longlong *)pTVar10 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    FVar7 = *pFVar1;
    local_70 = FVar7;
    if (param_1->MatchOperator == Equal) {
      if (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0xc) != -1) {
        uVar18 = ::GetTypeHash(FVar7.ComparisonIndex.Value);
        if (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 8) !=
            *(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x34)) {
          puVar8 = *(undefined1 **)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x40);
          puVar15 = (undefined1 *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x38);
          if (puVar8 != (undefined1 *)0x0) {
            puVar15 = puVar8;
          }
          iVar16 = *(int *)(puVar15 +
                           (ulonglong)
                           ((param_1->FilteredAttributes).field0_0x0.TypedValue.HashSize - 1U &
                           FVar7.Number + uVar18) * 4);
          if (iVar16 != -1) {
            lVar14 = *(longlong *)&(param_1->FilteredAttributes).field0_0x0;
            do {
              if (*(FName *)(lVar14 + (longlong)iVar16 * 0x10) == FVar7) {
                bVar11 = true;
                goto LAB_149e46e8b;
              }
              iVar16 = *(int *)(lVar14 + 8 + (longlong)iVar16 * 0x10);
            } while (iVar16 != -1);
          }
        }
      }
      bVar11 = false;
LAB_149e46e8b:
      if (param_1->FilterMode != ExcludeAttributes) {
        bVar11 = bVar11 == false;
      }
      if (bVar11 == false) goto LAB_149e46ed8;
    }
    else {
      ::FName::ToString(&local_70,&local_b8);
      if (param_1->MatchOperator == Substring) {
        bVar11 = Algo::
                 NoneOf<TArray<FString,TSizedDefaultAllocator<32>_>,_PCGMetadata::FPCGMetadataAttributeNameFilter::operator()_::__l10::<lambda_1>_>
                           (&local_d0,&local_b8);
LAB_149e46e77:
        bVar11 = (bool)(bVar11 ^ 1);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        goto LAB_149e46e8b;
      }
      if (param_1->MatchOperator == Matches) {
        bVar11 = Algo::
                 NoneOf<TArray<FString,TSizedDefaultAllocator<32>_>,_PCGMetadata::FPCGMetadataAttributeNameFilter::operator()_::__l14::<lambda_2>_>
                           (&local_d0,&local_b8);
        goto LAB_149e46e77;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                          ,0x80,L"");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
LAB_149e46ed8:
      if (pFVar1[1] != (FName)0x0) {
        bVar11 = HasAttribute(this,*pFVar1);
        if (bVar11) {
          pFVar13 = GetConstAttribute(this,*pFVar1);
          if ((pFVar13 == (FPCGMetadataAttributeBase *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Attribute",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                                  ,0x1b8,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            uVar12 = (*pcVar9)();
            return (bool)uVar12;
          }
          uVar2 = pFVar13->TypeId;
          uVar3 = *(ushort *)((longlong)pFVar1[1] + 0x70);
          uVar21 = (ulonglong)uVar3;
          if (((uVar2 != uVar3) &&
              ((((uVar18 = (uint)uVar3, uVar23 = uVar21, 0xe < uVar18 || (0xe < uVar2)) ||
                (uVar23 = (ulonglong)uVar18,
                PCG::Private::BroadcastableTypes.Values[uVar21][uVar2] == false)) &&
               ((uVar2 < 0xf && (uVar18 < 0xf)))))) &&
             (PCG::Private::BroadcastableTypes.Values[uVar2][uVar23] != false)) {
            ChangeAttributeType(this,*pFVar1,uVar3);
          }
        }
        else {
          pFVar13 = CopyAttribute(this,(FPCGMetadataAttributeBase *)pFVar1[1],*pFVar1,
                                  param_1->Parent == this->Parent,false,false);
          bVar25 = bVar24;
          if (pFVar13 != (FPCGMetadataAttributeBase *)0x0) {
            bVar24 = true;
            bVar25 = true;
          }
        }
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// AddAttributes @ 149e47050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGMetadataDomain::AddAttributes(FPCGMetadataDomain *this,FPCGMetadataDomain *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 local_98 [8];
  undefined1 local_90 [80];
  undefined2 local_40;
  bool local_18;
  
  local_90._0_8_ = (void *)0x0;
  local_90._8_4_ = 0;
  local_90._32_8_ = (void *)0x0;
  local_90._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_90._48_8_ = _UNK_150631d98;
  local_90._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_90._72_4_ = 0;
  local_40._0_1_ = ExcludeAttributes;
  local_40._1_1_ = Equal;
  local_18 = false;
  local_90._12_4_ = -1;
  local_98 = (undefined1  [8])param_1;
  bVar2 = AddAttributes(this,(FPCGMetadataDomainInitializeParams *)local_98);
  if (local_90._12_4_ != -1) {
    local_90._72_4_ = 0;
    if ((ForElementType<FSetElementId>)local_90._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_90._64_8_);
    }
    local_90._8_4_ = 0;
    if (local_90._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
    }
    uVar1 = local_90._44_4_;
    local_90._48_8_ = 0xffffffff;
    local_90._40_8_ = (ulonglong)(uint)local_90._44_4_ << 0x20;
    if (0x80 < (uint)uVar1) {
      local_90._40_8_ = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
    }
    if ((void *)local_90._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._32_8_);
    }
    if ((void *)local_90._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
  }
  return bVar2;
}

// AddDelayedEntries @ 149e473b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::AddDelayedEntries
          (FPCGMetadataDomain *this,
          TArray<TTuple<__int64,__int64>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  uint local_res18;
  int *local_res20;
  FString local_50;
  
  if (param_1->ArrayNum != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->ItemLock);
    if (this->bSupportMultiEntries == false) {
      if ((((1 < param_1->ArrayNum) || ((this->ParentKeys).ArrayNum != 0)) ||
          (this->ItemKeyOffset != 0)) && (2 < (byte)LogPCG._0_1_)) {
        ::FName::ToString(&(this->DomainID).DebugName,&local_50);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      if (((this->ParentKeys).ArrayNum == 0) && (this->ItemKeyOffset == 0)) {
        pTVar2 = &this->ParentKeys;
        if ((param_1->ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        pFVar11 = (param_1->AllocatorInstance).Data + 8;
        if (((pFVar10 <= pFVar11) && (pFVar11 < pFVar10 + (longlong)(this->ParentKeys).ArrayMax * 8)
            ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->ParentKeys).ArrayNum;
        piVar1 = &(this->ParentKeys).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ParentKeys).ArrayNum = iVar6 + 1;
        *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             *(undefined8 *)pFVar11;
      }
    }
    else {
      local_res20 = &(this->ParentKeys).ArrayNum;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,param_1->ArrayNum,&(this->ParentKeys).AllocatorInstance,local_res20,
                 &(this->ParentKeys).ArrayMax);
      local_res18 = param_1->ArrayNum;
      uVar7 = (ulonglong)(int)local_res18;
      pFVar10 = (param_1->AllocatorInstance).Data;
      pFVar11 = pFVar10 + uVar7 * 0x10;
      while( true ) {
        if (param_1->ArrayNum != (int)uVar7) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TTuple<__int64,__int64>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar10 == pFVar11) break;
        lVar9 = *(longlong *)pFVar10 - this->ItemKeyOffset;
        if (((this->ParentKeys).ArrayNum <= lVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < ParentKeys.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                               ,0x43e,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = (uint)lVar9;
        lVar9 = *(longlong *)(pFVar10 + 8);
        uVar5 = 0;
        if ((int)uVar8 < *local_res20) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = pFVar10 + 0x10;
        *(longlong *)((this->ParentKeys).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) = lVar9;
        uVar7 = (ulonglong)local_res18;
      }
    }
    LOCK();
    this->DelayedEntriesIndex = (TAtomic<__int64>)0x0;
    UNLOCK();
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ItemLock);
  }
  return;
}

// AddEntries @ 149e47760

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
FPCGMetadataDomain::AddEntries
          (FPCGMetadataDomain *this,
          TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<__int64_const_,int> *param_1)

{
  int *piVar1;
  long64 *plVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  long64 *plVar12;
  long64 local_58;
  longlong local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  FString local_38;
  
  uVar3 = param_1->ArrayNum;
  if (uVar3 == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&local_48,0,(int *)((longlong)&local_40 + 4));
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->ItemLock);
  if (this->bSupportMultiEntries == false) {
    if ((((1 < (int)uVar3) || ((this->ParentKeys).ArrayNum != 0)) || (this->ItemKeyOffset != 0)) &&
       (2 < (byte)LogPCG._0_1_)) {
      ::FName::ToString(&(this->DomainID).DebugName,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (((this->ParentKeys).ArrayNum == 0) && (this->ItemKeyOffset == 0)) {
      pTVar8 = &this->ParentKeys;
      pFVar9 = (FScriptContainerElement *)TArrayView<__int64_const_,int>::operator[](param_1,0);
      pFVar4 = (pTVar8->AllocatorInstance).Data;
      if ((pFVar4 <= pFVar9) &&
         ((pFVar9 < pFVar4 + (longlong)(this->ParentKeys).ArrayMax * 8 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = (this->ParentKeys).ArrayNum;
      piVar1 = &(this->ParentKeys).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->ParentKeys).ArrayNum = iVar7 + 1;
      *(long64 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 8) = *(long64 *)pFVar9;
    }
    uVar3 = param_1->ArrayNum;
    if ((int)local_40 < (int)uVar3) {
      iVar10 = uVar3 - (int)local_40;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar10,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
      memset(local_48.Data + (longlong)iVar7 * 8,0,(longlong)iVar10 << 3);
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      iVar7 = (int)local_40;
      if ((int)local_40 <= (int)uVar3) goto LAB_149e47bbc;
      uVar11 = (int)local_40 - uVar3;
      if ((int)(uVar11 | uVar3) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
        iVar7 = (int)local_40;
      }
      if (uVar11 == 0) goto LAB_149e47bbc;
      iVar10 = (iVar7 - uVar3) - uVar11;
      if (iVar10 != 0) {
        memmove(local_48.Data + (longlong)(int)uVar3 * 8,
                local_48.Data + (longlong)(int)uVar3 * 8 + (longlong)(int)uVar11 * 8,
                (longlong)iVar10 << 3);
        iVar7 = (int)local_40;
      }
      local_40 = CONCAT44(local_40._4_4_,iVar7 - uVar11);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&local_48,iVar7 - uVar11,(int *)((longlong)&local_40 + 4));
    }
  }
  else {
    iVar7 = (this->ParentKeys).ArrayNum;
    pTVar8 = &this->ParentKeys;
    uVar11 = iVar7 + uVar3;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    piVar1 = &(this->ParentKeys).ArrayMax;
    if ((this->ParentKeys).ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar11,&pTVar8->AllocatorInstance,iVar7,piVar1);
    }
    plVar12 = param_1->DataPtr;
    plVar2 = plVar12 + (int)uVar3;
    for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
      local_58 = *plVar12;
      pFVar4 = (pTVar8->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = (this->ParentKeys).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->ParentKeys).ArrayNum = iVar7 + 1;
      *(long64 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58;
      local_50 = this->ItemKeyOffset + (longlong)iVar7;
      if (((local_48.Data <= (FScriptContainerElement *)&local_50) &&
          ((FScriptContainerElement *)&local_50 < local_48.Data + (longlong)local_40._4_4_ * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = (int)local_40;
      if ((int)local_40 == local_40._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_48,(int *)((longlong)&local_40 + 4));
      }
      local_40 = CONCAT44(local_40._4_4_,iVar7 + 1);
      *(longlong *)(local_48.Data + (longlong)iVar7 * 8) = local_50;
    }
  }
  iVar7 = (int)local_40;
LAB_149e47bbc:
  (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
  __return_storage_ptr__->ArrayMax = local_40._4_4_;
  local_40 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = iVar7;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ItemLock);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return __return_storage_ptr__;
}

// AddEntriesInPlace @ 149e47d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::AddEntriesInPlace(FPCGMetadataDomain *this,TArrayView<__int64_*,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  long64 **pplVar8;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  long64 **pplVar11;
  FString local_28;
  
  iVar7 = param_1->ArrayNum;
  if (iVar7 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->ItemLock);
    if (this->bSupportMultiEntries == false) {
      if ((((1 < iVar7) || ((this->ParentKeys).ArrayNum != 0)) || (this->ItemKeyOffset != 0)) &&
         (2 < (byte)LogPCG._0_1_)) {
        ::FName::ToString(&(this->DomainID).DebugName,&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      if (((this->ParentKeys).ArrayNum == 0) && (this->ItemKeyOffset == 0)) {
        pTVar9 = &this->ParentKeys;
        pplVar8 = TArrayView<__int64_*,int>::operator[](param_1,0);
        pFVar3 = (pTVar9->AllocatorInstance).Data;
        pFVar4 = (FScriptContainerElement *)*pplVar8;
        if ((pFVar3 <= pFVar4) &&
           ((pFVar4 < pFVar3 + (longlong)(this->ParentKeys).ArrayMax * 8 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->ParentKeys).ArrayNum;
        piVar1 = &(this->ParentKeys).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar9->AllocatorInstance,piVar1);
        }
        (this->ParentKeys).ArrayNum = iVar7 + 1;
        *(long64 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) = *(long64 *)pFVar4;
      }
      pplVar11 = param_1->DataPtr;
      pplVar8 = pplVar11 + param_1->ArrayNum;
      for (; pplVar11 != pplVar8; pplVar11 = pplVar11 + 1) {
        **pplVar11 = 0;
      }
    }
    else {
      iVar2 = (this->ParentKeys).ArrayNum;
      pTVar9 = &this->ParentKeys;
      uVar10 = iVar2 + iVar7;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      piVar1 = &(this->ParentKeys).ArrayMax;
      if (*piVar1 < (int)uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar10,&pTVar9->AllocatorInstance,iVar2,piVar1);
      }
      pplVar11 = param_1->DataPtr;
      pplVar8 = pplVar11 + iVar7;
      for (; pplVar11 != pplVar8; pplVar11 = pplVar11 + 1) {
        pFVar3 = (FScriptContainerElement *)*pplVar11;
        pFVar4 = (pTVar9->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar3) && (pFVar3 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (this->ParentKeys).ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar9->AllocatorInstance,piVar1);
        }
        (this->ParentKeys).ArrayNum = iVar7 + 1;
        *(undefined8 *)((pTVar9->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             *(undefined8 *)pFVar3;
        *(long64 *)pFVar3 = this->ItemKeyOffset + (longlong)iVar7;
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ItemLock);
  }
  return;
}

// AddEntry @ 149e48080

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FPCGMetadataDomain::AddEntry(FPCGMetadataDomain *this,long64 param_1)

{
  int *piVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long64 lVar7;
  longlong lVar8;
  long64 local_res10;
  FString local_18;
  
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->ItemLock);
  pTVar2 = &this->ParentKeys;
  if (this->bSupportMultiEntries == false) {
    lVar8 = 0;
    if (((this->ParentKeys).ArrayNum == 0) && (this->ItemKeyOffset == 0)) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
          ((FScriptContainerElement *)&local_res10 <
           pFVar3 + (longlong)(this->ParentKeys).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        lVar7 = (*pcVar4)();
        return lVar7;
      }
      iVar6 = (this->ParentKeys).ArrayNum;
      piVar1 = &(this->ParentKeys).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ParentKeys).ArrayNum = iVar6 + 1;
      *(long64 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10;
    }
    else if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&(this->DomainID).DebugName,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        lVar8 = 0;
      }
    }
  }
  else {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar3 + (longlong)(this->ParentKeys).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      lVar7 = (*pcVar4)();
      return lVar7;
    }
    iVar6 = (this->ParentKeys).ArrayNum;
    piVar1 = &(this->ParentKeys).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ParentKeys).ArrayNum = iVar6 + 1;
    *(long64 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10;
    lVar8 = this->ItemKeyOffset + (longlong)iVar6;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->ItemLock);
  return lVar8;
}

// AddEntryPlaceholder @ 149e48320

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FPCGMetadataDomain::AddEntryPlaceholder(FPCGMetadataDomain *this)

{
  TAtomic<__int64> *pTVar1;
  TAtomic<__int64> TVar2;
  long64 lVar3;
  FString local_18;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ItemLock);
  LOCK();
  pTVar1 = &this->DelayedEntriesIndex;
  TVar2 = *pTVar1;
  *pTVar1 = (TAtomic<__int64>)((longlong)*pTVar1 + 1);
  UNLOCK();
  if (this->bSupportMultiEntries == false) {
    if ((((TVar2 != (TAtomic<__int64>)0x0) || ((this->ParentKeys).ArrayNum != 0)) ||
        (this->ItemKeyOffset != 0)) && (2 < (byte)LogPCG._0_1_)) {
      ::FName::ToString(&(this->DomainID).DebugName,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)(this->ParentKeys).ArrayNum + this->ItemKeyOffset + (longlong)TVar2;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->ItemLock);
  return lVar3;
}

// AddToCrc @ 149e48590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::AddToCrc
          (FPCGMetadataDomain *this,FArchiveCrc32 *param_1,UPCGData *param_2,bool param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  FName FVar5;
  FPCGMetadataDomain *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar10;
  <lambda_1> <Var11;
  FArchiveCrc32 *pFVar12;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar13;
  bool bVar14;
  FPCGModule *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  int iVar21;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  undefined1 auStackY_378 [32];
  FIdentityFunctor local_328;
  undefined1 local_327;
  undefined1 local_326 [6];
  ForAnyElementType local_320;
  undefined8 local_318;
  undefined1 local_310 [8];
  undefined8 *local_308;
  undefined1 *local_300;
  FArchiveCrc32 *local_2f8;
  undefined1 local_2e8 [12];
  float local_2dc;
  undefined **local_2d8;
  ulonglong local_2d0;
  undefined4 local_2c8;
  FName local_2c4;
  undefined8 local_2bc;
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  FName local_298;
  int local_290;
  int local_28c;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_288;
  <lambda_1> local_280;
  UPCGData *local_278;
  FArchiveCrc32 *local_270;
  long64 local_268;
  double local_260;
  FString local_258;
  FSoftObjectPath local_248;
  FSoftClassPath local_228;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_1d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 uStack_1b0;
  UPCGData **local_1a8;
  undefined ***pppuStack_1a0;
  undefined1 local_198;
  uint7 uStack_197;
  TVector2<double>_u_0 local_190;
  UPCGData **local_178;
  undefined ***pppuStack_170;
  longlong local_168;
  TVector<double>_u_0 local_158;
  TRotator<double> local_140;
  TVector4<double>_u_0 local_128;
  TQuat<double> local_108;
  undefined4 local_cc;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_280.__this = this;
  local_270 = param_1;
  if ((param_2 == (UPCGData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Data",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                          ,0xce,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar21 = 0;
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318 = 0;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  uVar20 = *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (local_318._4_4_ < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar20,&local_320,(int)local_318,(int *)((longlong)&local_318 + 4));
  }
  iVar3 = *(int *)&(this->Attributes).field_0x28;
  puVar1 = &(this->Attributes).field_0x10;
  local_1e8 = 0;
  local_288 = &this->Attributes;
  uStack_1fc = 1;
  iStack_1ec = iVar21;
  if (iVar3 != 0) {
    puVar23 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar20 = *puVar23;
    iVar21 = 0;
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar21;
      local_1e8 = local_1e8 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_1ec = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_149e486de;
      uVar20 = puVar23[lVar16 + 1];
    }
    uStack_1fc = -uVar20 & uVar20;
    uVar17 = (ulonglong)uStack_1fc * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_290 = (int)lVar16;
    iStack_1ec = local_1e8 + -1 + local_290;
    if (iVar3 < iStack_1ec) {
      iStack_1ec = iVar3;
    }
  }
LAB_149e486de:
  uStack_1e4 = local_cc;
  iStack_1e0 = *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34;
  uVar20 = *(uint *)&(this->Attributes).field_0x28;
  uStack_1f0 = 0xffffffff;
  TStack_1d0._padding_ = CONCAT44(uStack_1fc,iVar21);
  uVar24 = uVar20 & 0xffffffe0;
  TStack_1d0.CurrentBitIndex = iStack_1ec;
  TStack_1d0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_1d0._28_4_ = local_cc;
  TStack_1d0.BaseBitIndex = local_1e8;
  uStack_1b0 = CONCAT44(uStack_1dc,iStack_1e0);
  local_208 = local_288;
  iStack_200 = iVar21;
  local_1f8 = puVar1;
  local_1d8 = local_288;
  TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar10 = local_288;
  uVar4 = *(uint *)&(this->Attributes).field_0x28;
  if (uVar20 != uVar4) {
    puVar22 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar18;
      uVar24 = uVar24 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_149e48810;
      uVar20 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_28c = (int)lVar16;
    uVar20 = local_28c + -1 + uVar24;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_149e48810:
  while( true ) {
    pTVar13 = local_1d8;
    if (*(int *)&local_1d8->field_0x8 - *(int *)&local_1d8->field_0x34 != (int)uStack_1b0) {
      local_327 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_327);
    }
    if (((TStack_1d0.CurrentBitIndex == uVar20) &&
        (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar13 == pTVar10)) break;
    lVar16 = *(longlong *)pTVar13 + 8;
    pFVar2 = (FScriptContainerElement *)(lVar16 + (longlong)TStack_1d0.CurrentBitIndex * 0x18);
    if (*(longlong *)(lVar16 + (longlong)TStack_1d0.CurrentBitIndex * 0x18) == 0) {
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6732401106661408984>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                          ,0xd8,"Attribute.Value");
      if (bVar14) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      if (((local_320.Data <= pFVar2) && (pFVar2 < local_320.Data + (longlong)local_318._4_4_ * 8))
         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar21 = (int)local_318;
      if ((int)local_318 == local_318._4_4_) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_320,(int *)((longlong)&local_318 + 4));
      }
      local_318 = CONCAT44(local_318._4_4_,iVar21 + 1);
      *(FPCGMetadataAttributeBase **)(local_320.Data + (longlong)iVar21 * 8) =
           *(FPCGMetadataAttributeBase **)pFVar2;
    }
    TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  <Var11.__this = local_280.__this;
  if ((int)local_318 == 0) goto LAB_149e48e7c;
  AlgoImpl::
  IntroSortInternal<FPCGMetadataAttributeBase_const_*,int,FIdentityFunctor,_FPCGMetadataDomain::AddToCrc_::__l2::<lambda_1>_>
            ((FPCGMetadataAttributeBase **)local_320.Data,(int)local_318,local_328,local_280);
  local_2d8 = &___7FPCGAttributePropertyInputSelector__6B_;
  local_2c4 = PCGMetadataAttributeConstants::LastAttributeName;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2bc = 0;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8 = (FPCGMetadataAttributeBase *)0x0;
  local_2a0 = 0;
  (**(code **)(param_2->_padding_ + 0x350))(param_2,&(<Var11.__this)->DomainID);
  if (((int)local_318 < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar5 = (*(FPCGMetadataAttributeBase **)local_320.Data)->Name;
  if ((int)local_2a8 != 0) {
    DestructItems<FString,int>((FString *)local_2b0.Data,(int)local_2a8);
    uVar17 = (ulonglong)local_2a8 >> 0x20;
    local_2a8 = (FPCGMetadataAttributeBase *)((ulonglong)local_2a8 & 0xffffffff00000000);
    if ((int)uVar17 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_2b0,0,(int *)((longlong)&local_2a8 + 4));
    }
  }
  if (((int)local_2d0 != 0) || (local_2c4 != FVar5)) {
    local_2d0 = local_2d0 & 0xffffffff00000000;
    local_2c4 = FVar5;
  }
  pFVar15 = FPCGModule::GetPCGModuleChecked();
  local_278 = param_2;
  if (param_2 == (UPCGData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    local_2e8._0_8_ = (undefined8 *)0x0;
LAB_149e48ad9:
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6732401106661409007>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                        ,0xef,"InputKeys.IsValid()");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    local_198 = 0;
    local_168 = (ulonglong)uStack_197 << 8;
    pppuStack_1a0 = &local_2d8;
    local_1a8 = &local_278;
    local_178 = &local_278;
    pppuStack_170 = pppuStack_1a0;
    FPCGAttributeAccessorFactory::
    CallOnMethod<UPCGData_const_,_FPCGAttributeAccessorFactory::CreateSimpleConstKeys_::__l2::<lambda_1>_>
              (&pFVar15->AttributeAccessorFactory,(UPCGData *)local_2e8,(<lambda_1> *)param_2);
    pFVar12 = local_270;
    dVar9 = _UNK_15061cbc8;
    dVar8 = ___xmm_3ff00000000000000000000000000000;
    if ((undefined8 *)local_2e8._0_8_ == (undefined8 *)0x0) goto LAB_149e48ad9;
    iVar21 = (int)local_318;
    uVar17 = (ulonglong)(int)local_318;
    pFVar2 = local_320.Data + uVar17 * 8;
    FVar19.Data = local_320.Data;
    while( true ) {
      if ((int)uVar17 != iVar21) {
        local_326[0] = 0;
        `TCheckedPointerIterator<FPCGMetadataAttributeBase_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_326);
      }
      if (FVar19.Data == pFVar2) break;
      pFVar6 = *(FPCGMetadataDomain **)FVar19.Data;
      (**(code **)(pFVar12->_padding_ + 0x178))(pFVar12,&(pFVar6->Attributes).field_0x44);
      PCGAttributeAccessorHelpers::CreateConstAccessor
                ((FPCGMetadataAttributeBase *)local_310,pFVar6,SUB81(<Var11.__this,0));
      if (local_310 == (undefined1  [8])0x0) {
        bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6732401106661409018>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                            ,0xfa,"InputAccessor.IsValid()");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        local_308 = (undefined8 *)local_310;
        local_2f8 = pFVar12;
        local_300 = local_2e8;
        switch(*(undefined2 *)((longlong)local_310 + 10)) {
        case 0:
          local_2dc = 0.0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<float>
                    (&local_308,&local_2dc);
          break;
        case 1:
          local_260 = 0.0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<double>
                    (&local_308,&local_260);
          break;
        case 2:
          local_2e8._8_4_ = 0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<int>
                    (&local_308,(int *)(local_2e8 + 8));
          break;
        case 3:
          local_268 = 0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<__int64>
                    (&local_308,&local_268);
          break;
        case 4:
          local_190._s_0.X = 0.0;
          local_190._s_0.Y = 0.0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TVector2<double>_>
                    (&local_308,(TVector2<double> *)&local_190._s_0);
          break;
        case 5:
          local_158._s_0.X = 0.0;
          local_158._s_0.Y = 0.0;
          local_158._s_0.Z = 0.0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TVector<double>_>
                    (&local_308,(TVector<double> *)&local_158._s_0);
          break;
        case 6:
          local_128._s_0.Z = dVar8;
          local_128._s_0.W = dVar9;
          local_128._s_0.X = 0.0;
          local_128._s_0.Y = 0.0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TVector4<double>_>
                    (&local_308,(TVector4<double> *)&local_128._s_0);
          break;
        case 7:
          local_108.X = 0.0;
          local_108.Y = 0.0;
          local_108.Z = 0.0;
          local_108.W = 0.0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TQuat<double>_>
                    (&local_308,&local_108);
          break;
        case 8:
          local_c8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_c8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_c8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_c8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_c8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_c8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_c8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_c8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_c8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_c8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::
          operator()<UE::Math::TTransform<double>_>(&local_308,&local_c8);
          break;
        case 9:
          local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_258.Data.ArrayNum = 0;
          local_258.Data.ArrayMax = 0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<FString>
                    (&local_308,&local_258);
          break;
        case 10:
          local_328 = (FIdentityFunctor)0x0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<bool>
                    (&local_308,(bool *)&local_328);
          break;
        case 0xb:
          local_140.Pitch = 0.0;
          local_140.Yaw = 0.0;
          local_140.Roll = 0.0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<UE::Math::TRotator<double>_>
                    (&local_308,&local_140);
          break;
        case 0xc:
          local_298.ComparisonIndex.Value = 0;
          local_298.Number = 0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<FName>
                    (&local_308,&local_298);
          break;
        case 0xd:
          local_248.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_248.AssetPath.PackageName.Number = 0;
          local_248.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_248.AssetPath.AssetName.Number = 0;
          local_248.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_248.SubPathString.Data.ArrayNum = 0;
          local_248.SubPathString.Data.ArrayMax = 0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<FSoftObjectPath>
                    (&local_308,&local_248);
          break;
        case 0xe:
          local_228._0_8_ = 0;
          local_228._8_8_ = 0;
          local_228._16_8_ = 0;
          local_228._24_8_ = 0;
          `FPCGMetadataDomain::AddToCrc'::__l27::<lambda_2>::operator()<FSoftClassPath>
                    (&local_308,&local_228);
        }
      }
      if (local_310 != (undefined1  [8])0x0) {
        (*(code *)**(undefined8 **)local_310)(local_310,1);
      }
      uVar17 = local_318 & 0xffffffff;
      FVar19.Data = FVar19.Data + 8;
    }
  }
  if ((undefined8 *)local_2e8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_2e8._0_8_)(local_2e8._0_8_,1);
  }
  DestructItems<FString,int>((FString *)local_2b0.Data,(int)local_2a8);
  if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
LAB_149e48e7c:
  if (local_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data);
  }
  return;
}

// ChangeAttributeType @ 149e4c860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPCGMetadataDomain::ChangeAttributeType(FPCGMetadataDomain *this,FName param_1,short param_2)

{
  FName FVar1;
  uint uVar2;
  FPCGMetadataAttributeBase *pFVar3;
  longlong lVar4;
  FName local_res10;
  FName local_res20;
  FName local_38;
  longlong local_30;
  undefined1 local_28 [16];
  
  local_res10 = param_1;
  pFVar3 = GetMutableAttribute(this,param_1);
  if (pFVar3 == (FPCGMetadataAttributeBase *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,(FString *)local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_28._0_8_);
      }
    }
    return false;
  }
  if ((pFVar3->TypeId != param_2) &&
     (lVar4 = (**(code **)(pFVar3->_padding_ + 0x40))(pFVar3,param_2), lVar4 != 0)) {
    *(int *)(lVar4 + 0x7c) = pFVar3->AttributeId;
    AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
    FVar1 = local_res10;
    local_res20 = local_res10;
    if (*(int *)&(this->Attributes).field_0x8 != *(int *)&(this->Attributes).field_0x34) {
      uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                           *)&this->Attributes,FVar1.Number + uVar2,&local_res20);
    }
    local_28._0_8_ = &local_38;
    local_38 = local_res10;
    local_28._8_8_ = &local_30;
    local_30 = lVar4;
    TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&>_>
              ((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                *)&this->Attributes,
               (TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&> *)&local_res20,
               (bool *)local_28);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  return true;
}

// ClearAttribute @ 149e4ca60

void __thiscall FPCGMetadataDomain::ClearAttribute(FPCGMetadataDomain *this,FName param_1)

{
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  pTVar1 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,param_1);
  puVar2 = (undefined8 *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    puVar2 = puVar3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  if (puVar3 != (undefined8 *)0x0) {
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                *)(puVar3 + 1));
  }
  return;
}

// ComputeWeightedAttribute @ 149e4dae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::ComputeWeightedAttribute
          (FPCGMetadataDomain *this,long64 *param_1,TArrayView<TTuple<__int64,float>,int> *param_2,
          FPCGMetadataDomain *param_3)

{
  undefined1 *puVar1;
  FName *this_00;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FPCGMetadataAttributeBase *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res20 [8];
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TTuple<__int64,float> *local_60;
  int local_58;
  FString local_50;
  
  if ((param_3 != (FPCGMetadataDomain *)0x0) && (param_2->ArrayNum != 0)) {
    AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
    iVar3 = *(int *)&(this->Attributes).field_0x28;
    puVar1 = &(this->Attributes).field_0x10;
    iVar13 = 0;
    uVar8 = 1;
    iVar15 = 0;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar16 = *(uint **)&(this->Attributes).field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar12 = *puVar16;
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar13 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149e4dbbd;
        uVar12 = puVar16[lVar11 + 1];
      }
      uVar8 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = iVar15 + -1 + (int)lVar11;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_149e4dbbd:
    uVar12 = *(uint *)&(this->Attributes).field_0x28;
    TStack_88._padding_ = CONCAT44(uVar8,iVar13);
    uVar8 = uVar12 & 0xffffffe0;
    TStack_88.CurrentBitIndex = iVar9;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_88._28_4_ = iVar9;
    TStack_88.BaseBitIndex = iVar15;
    uStack_68 = CONCAT44(uStack_ac,
                         *(int *)&(this->Attributes).field_0x8 -
                         *(int *)&(this->Attributes).field_0x34);
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)&(this->Attributes).field_0x28;
    if (uVar12 != uVar4) {
      puVar14 = *(undefined1 **)&(this->Attributes).field_0x20;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar11 = (longlong)iVar13;
        uVar8 = uVar8 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_149e4dcc0;
        uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar12 = (int)lVar11 + -1 + uVar8;
      if ((int)uVar4 < (int)uVar12) {
        uVar12 = uVar4;
      }
    }
LAB_149e4dcc0:
    while( true ) {
      if (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TStack_88.CurrentBitIndex == uVar12) &&
         (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      plVar5 = *(longlong **)
                (*(longlong *)&this->Attributes + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
      this_00 = (FName *)(*(longlong *)&this->Attributes +
                         (longlong)TStack_88.CurrentBitIndex * 0x18);
      if ((*(char *)((longlong)plVar5 + 0x72) != '\0') &&
         (pFVar10 = GetConstAttribute(param_3,*this_00), pFVar10 != (FPCGMetadataAttributeBase *)0x0
         )) {
        if (pFVar10->TypeId == (short)plVar5[0xe]) {
          local_60 = param_2->DataPtr;
          local_58 = param_2->ArrayNum;
          (**(code **)(*plVar5 + 0x70))(plVar5,*param_1,pFVar10,&local_60);
        }
        else if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(this_00,&local_50);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  }
  return;
}

// CopyAttribute @ 149e4e4c0

/* WARNING: Enum "Type": Some values do not have unique names */

FPCGMetadataAttributeBase * __thiscall
FPCGMetadataDomain::CopyAttribute
          (FPCGMetadataDomain *this,FName param_1,FName param_2,bool param_3,bool param_4,
          bool param_5)

{
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar1;
  FPCGMetadataAttributeBase *pFVar2;
  FPCGMetadataAttributeBase *pFVar3;
  FName local_res10;
  FString local_28;
  
  pFVar2 = (FPCGMetadataAttributeBase *)0x0;
  local_res10 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  pTVar1 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,local_res10);
  pFVar3 = (FPCGMetadataAttributeBase *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar3 = pFVar2;
  }
  if (pFVar3 != (FPCGMetadataAttributeBase *)0x0) {
    pFVar2 = (FPCGMetadataAttributeBase *)pFVar3->_padding_;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  if ((pFVar2 == (FPCGMetadataAttributeBase *)0x0) &&
     ((this->Parent == (FPCGMetadataDomain *)0x0 ||
      (pFVar2 = GetConstAttribute(this->Parent,local_res10),
      pFVar2 == (FPCGMetadataAttributeBase *)0x0)))) {
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    pFVar2 = (FPCGMetadataAttributeBase *)0x0;
  }
  else {
    pFVar2 = CopyAttribute(this,pFVar2,param_2,param_3,param_4,param_5);
  }
  return pFVar2;
}

// CopyAttribute @ 149e4e5e0

FPCGMetadataAttributeBase * __thiscall
FPCGMetadataDomain::CopyAttribute
          (FPCGMetadataDomain *this,FPCGMetadataAttributeBase *param_1,FName param_2,bool param_3,
          bool param_4,bool param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPCGMetadataAttributeBase *pFVar4;
  FPCGMetadataDomain *pFVar5;
  FPCGMetadataDomain *pFVar6;
  TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&> local_res8;
  FPCGMetadataAttributeBase *local_38;
  FPCGMetadataAttributeBase ***local_30;
  FPCGMetadataAttributeBase **local_28;
  
  if ((param_1 == (FPCGMetadataAttributeBase *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalAttribute",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                         ,0x333,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGMetadataAttributeBase *)(*pcVar2)();
    return pFVar4;
  }
  pFVar5 = param_1->Metadata;
  if (pFVar5->Parent != (FPCGMetadataDomain *)0x0) {
    pFVar5 = GetRoot(pFVar5->Parent);
  }
  pFVar6 = this;
  if (this->Parent != (FPCGMetadataDomain *)0x0) {
    pFVar6 = GetRoot(this->Parent);
  }
  if (((pFVar5 != pFVar6) && (param_3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OriginalAttribute->GetMetadataDomain()->GetRoot() == GetRoot() || !bKeepParent"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                         ,0x334,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGMetadataAttributeBase *)(*pcVar2)();
    return pFVar4;
  }
  pFVar4 = (FPCGMetadataAttributeBase *)
           (**(code **)(param_1->_padding_ + 0x38))(param_1,param_2,this,param_3,param_4,param_5);
  if (pFVar4 != (FPCGMetadataAttributeBase *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
    iVar1 = this->NextAttributeId;
    local_30 = &local_res8.Value;
    local_28 = &local_38;
    this->NextAttributeId = iVar1 + 1;
    pFVar4->AttributeId = iVar1;
    local_res8.Value = (FPCGMetadataAttributeBase **)param_2;
    local_38 = pFVar4;
    TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&>_>
              ((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                *)&this->Attributes,&local_res8,(bool *)&local_30);
    SetLastCachedSelectorOnOwner(this,param_2);
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  }
  return pFVar4;
}

// CopyAttribute @ 149e4e750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::CopyAttribute
          (FPCGMetadataDomain *this,FPCGMetadataDomain *param_1,FName param_2,FName param_3)

{
  bool bVar1;
  long64 lVar2;
  long64 lVar3;
  FPCGMetadataAttributeBase *pFVar4;
  
  if (((param_1 != (FPCGMetadataDomain *)0x0) && (bVar1 = HasAttribute(this,param_3), !bVar1)) &&
     (bVar1 = HasAttribute(param_1,param_2), bVar1)) {
    if (param_1 == this->Parent) {
      CopyAttribute(this,param_2,param_3,true,true,true);
    }
    else {
      lVar2 = GetItemCountForChild(param_1);
      lVar3 = GetItemCountForChild(this);
      if (lVar3 == lVar2) {
        pFVar4 = GetConstAttribute(param_1,param_2);
        CopyAttribute(this,pFVar4,param_3,false,true,true);
      }
      else if (1 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
    }
  }
  return;
}

// CopyAttributes @ 149e4ed40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::CopyAttributes(FPCGMetadataDomain *this,FPCGMetadataDomain *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res10 [8];
  int local_res18;
  undefined8 uStack_90;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((param_1 != (FPCGMetadataDomain *)0x0) && (param_1 != this->Parent)) {
    AcquireSRWLockShared((PSRWLOCK)&this->ItemLock);
    iVar4 = (this->ParentKeys).ArrayNum;
    lVar13 = this->ItemKeyOffset;
    ReleaseSRWLockShared((PSRWLOCK)&this->ItemLock);
    AcquireSRWLockShared((PSRWLOCK)&param_1->ItemLock);
    iVar15 = (param_1->ParentKeys).ArrayNum;
    lVar6 = param_1->ItemKeyOffset;
    ReleaseSRWLockShared((PSRWLOCK)&param_1->ItemLock);
    if (iVar4 + lVar13 == iVar15 + lVar6) {
      iVar4 = *(int *)&(param_1->Attributes).field_0x28;
      iVar15 = 0;
      puVar1 = &(param_1->Attributes).field_0x10;
      uVar11 = 1;
      iVar17 = 0;
      iVar12 = 0;
      if (iVar4 != 0) {
        puVar18 = *(uint **)&(param_1->Attributes).field_0x20;
        if (puVar18 == (uint *)0x0) {
          puVar18 = (uint *)puVar1;
        }
        uVar14 = *puVar18;
        while (uVar14 == 0) {
          lVar13 = (longlong)iVar15;
          iVar17 = iVar17 + 0x20;
          iVar15 = iVar15 + 1;
          iVar12 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_149e4ee8d;
          uVar14 = puVar18[lVar13 + 1];
        }
        uVar11 = -uVar14 & uVar14;
        uVar3 = (ulonglong)uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_res18 = (int)lVar13;
        iVar12 = iVar17 + -1 + local_res18;
        if (iVar4 < iVar12) {
          iVar12 = iVar4;
        }
      }
LAB_149e4ee8d:
      uVar14 = *(uint *)&(param_1->Attributes).field_0x28;
      uStack_90 = CONCAT44(uVar11,iVar15);
      uVar11 = uVar14 & 0xffffffe0;
      TStack_60.CurrentBitIndex = iVar12;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      TStack_60._padding_ = uStack_90;
      iVar15 = (int)uVar14 >> 5;
      TStack_60._28_4_ = iVar12;
      TStack_60.BaseBitIndex = iVar17;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(param_1->Attributes).field_0x8 -
                           *(int *)&(param_1->Attributes).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar5 = *(uint *)&(param_1->Attributes).field_0x28;
      if (uVar14 != uVar5) {
        puVar16 = *(undefined1 **)&(param_1->Attributes).field_0x20;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = puVar1;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
        while (uVar14 == 0) {
          lVar13 = (longlong)iVar15;
          uVar11 = uVar11 + 0x20;
          iVar15 = iVar15 + 1;
          uVar14 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_149e4ef90;
          uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar14 = (int)lVar13 + -1 + uVar11;
        if ((int)uVar5 < (int)uVar14) {
          uVar14 = uVar5;
        }
      }
LAB_149e4ef90:
      while( true ) {
        if (*(int *)&(param_1->Attributes).field_0x8 - *(int *)&(param_1->Attributes).field_0x34 !=
            (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((TStack_60.CurrentBitIndex == uVar14) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
        pFVar2 = (FName *)(*(longlong *)&param_1->Attributes +
                          (longlong)TStack_60.CurrentBitIndex * 0x18);
        FVar8 = *pFVar2;
        FVar9 = pFVar2[1];
        bVar10 = HasAttribute(this,FVar8);
        if (!bVar10) {
          CopyAttribute(this,(FPCGMetadataAttributeBase *)FVar9,FVar8,false,true,true);
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  return;
}

// CopyExistingAttribute @ 149e4f0f0

bool __thiscall
FPCGMetadataDomain::CopyExistingAttribute
          (FPCGMetadataDomain *this,FName param_1,FName param_2,bool param_3)

{
  FPCGMetadataAttributeBase *pFVar1;
  
  pFVar1 = CopyAttribute(this,param_1,param_2,param_3,true,true);
  return pFVar1 != (FPCGMetadataAttributeBase *)0x0;
}

// CreateAttributeFromDataProperty @ 149e50010

bool __thiscall
FPCGMetadataDomain::CreateAttributeFromDataProperty
          (FPCGMetadataDomain *this,FName param_1,void *param_2,FProperty *param_3)

{
  bool bVar1;
  <lambda_1> local_18;
  
  if (((param_3 != (FProperty *)0x0) && (param_2 != (void *)0x0)) &&
     (this != (FPCGMetadataDomain *)0x0)) {
    local_18.AttributeName = param_1;
    local_18.Metadata = this;
    bVar1 = PCGPropertyHelpers::
            GetPropertyValueWithCallback<void,_PCGMetadata::CreateAttributeFromPropertyHelper<void>_::__l2::<lambda_1>_>
                      (param_2,param_3,&local_18);
    return bVar1;
  }
  return false;
}

// CreateAttributeFromProperty @ 149e500e0

bool __thiscall
FPCGMetadataDomain::CreateAttributeFromProperty
          (FPCGMetadataDomain *this,FName param_1,UObject *param_2,FProperty *param_3)

{
  bool bVar1;
  <lambda_1> local_18;
  
  if (((param_3 != (FProperty *)0x0) && (param_2 != (UObject *)0x0)) &&
     (this != (FPCGMetadataDomain *)0x0)) {
    local_18.AttributeName = param_1;
    local_18.Metadata = this;
    bVar1 = PCGPropertyHelpers::
            GetPropertyValueWithCallback<UObject,_PCGMetadata::CreateAttributeFromPropertyHelper<UObject>_::__l2::<lambda_1>_>
                      (param_2,param_3,&local_18);
    return bVar1;
  }
  return false;
}

// DeleteAttribute @ 149e54330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPCGMetadataDomain::DeleteAttribute(FPCGMetadataDomain *this,FName param_1)

{
  FName FVar1;
  uint uVar2;
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  FName local_res8;
  FName local_res10;
  FString local_28;
  
  puVar5 = (undefined8 *)0x0;
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  pTVar3 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,local_res10);
  FVar1 = local_res10;
  puVar4 = (undefined8 *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    puVar4 = puVar5;
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar4;
    local_res8 = local_res10;
    if (*(int *)&(this->Attributes).field_0x8 != *(int *)&(this->Attributes).field_0x34) {
      uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                           *)&this->Attributes,FVar1.Number + uVar2,&local_res8);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
    return;
  }
  if (5 < (byte)LogPCG._0_1_) {
    ::FName::ToString(&local_res10,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FlattenAndCompress @ 149e56330

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPCGMetadataDomain::FlattenAndCompress
          (FPCGMetadataDomain *this,TArrayView<__int64_const_,int> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  long64 *local_b8;
  undefined8 uStack_b0;
  FString local_a8;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId587,"FPCGSubMetadata::FlattenAndCompress",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
               ,0x24b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId587);
  }
  if (*(int *)&(this->Attributes).field_0x8 == *(int *)&(this->Attributes).field_0x34) {
    bVar8 = false;
  }
  else {
    local_b8 = param_1->DataPtr;
    uStack_b0 = *(undefined8 *)&param_1->ArrayNum;
    uVar10 = 1;
    if ((1 < param_1->ArrayNum) && (this->bSupportMultiEntries == false)) {
      local_b8 = param_1->DataPtr;
      uVar3 = (ulonglong)uStack_b0 >> 0x20;
      uStack_b0 = CONCAT44((int)uVar3,1);
      if (2 < (byte)LogPCG._0_1_) {
        ::FName::ToString(&(this->DomainID).DebugName,&local_a8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
    iVar4 = *(int *)&(this->Attributes).field_0x28;
    puVar1 = &(this->Attributes).field_0x10;
    iStack_90 = 0;
    local_98 = &this->Attributes;
    local_78 = 0;
    iStack_7c = 0;
    if (iVar4 != 0) {
      puVar15 = *(uint **)&(this->Attributes).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar13 = *puVar15;
      while (uVar13 == 0) {
        lVar11 = (longlong)iStack_90;
        local_78 = local_78 + 0x20;
        iStack_90 = iStack_90 + 1;
        iStack_7c = iVar4;
        if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_90) goto LAB_149e564ce;
        uVar13 = puVar15[lVar11 + 1];
      }
      uVar10 = -uVar13 & uVar13;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iStack_7c = local_78 + -1 + (int)lVar11;
      if (iVar4 < iStack_7c) {
        iStack_7c = iVar4;
      }
    }
LAB_149e564ce:
    uVar13 = *(uint *)&(this->Attributes).field_0x28;
    iStack_70 = *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34;
    uVar16 = uVar13 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar10,iStack_90);
    uStack_80 = 0xffffffff;
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    uStack_8c = uVar10;
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = local_98;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar10 = *(uint *)&(this->Attributes).field_0x28;
    if (uVar13 != uVar10) {
      puVar12 = *(undefined1 **)&(this->Attributes).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar11 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar10;
        if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
        goto LAB_149e565ce;
        uVar13 = *(uint *)(puVar12 + lVar11 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar13 = (int)lVar11 + -1 + uVar16;
      if ((int)uVar10 < (int)uVar13) {
        uVar13 = uVar10;
      }
    }
LAB_149e565ce:
    while( true ) {
      pTVar7 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_60.CurrentBitIndex == uVar13) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar7 == &this->Attributes)) break;
      plVar5 = *(longlong **)(*(longlong *)pTVar7 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      if ((plVar5 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Attribute",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                             ,0x25f,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_b8);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
    piVar2 = &(this->ParentKeys).ArrayMax;
    this->Parent = (FPCGMetadataDomain *)0x0;
    (this->ParentKeys).ArrayNum = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ParentKeys).AllocatorInstance,0,piVar2);
    }
    TArray<__int64,TSizedDefaultAllocator<32>_>::Init
              (&this->ParentKeys,&PCGInvalidEntryKey,(int)uStack_b0);
    this->ItemKeyOffset = 0;
    bVar8 = true;
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// FlattenImpl @ 149e56860

void __thiscall FPCGMetadataDomain::FlattenImpl(FPCGMetadataDomain *this)

{
  ulonglong uVar1;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar2;
  longlong *plVar3;
  FPCGMetadataAttributeBase *this_00;
  code *pcVar4;
  uint uVar5;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  long64 lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  uint uVar20;
  bool bVar21;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_d8;
  undefined4 uStack_a4;
  longlong local_90;
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  FPlatformRWLock *local_80;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId549,"FPCGSubMetadata::FlattenImpl",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
               ,0x225);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId549);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->ItemLock);
  local_d8 = (int)this->ItemKeyOffset + (this->ParentKeys).ArrayNum;
  ReleaseSRWLockShared((PSRWLOCK)&this->ItemLock);
  local_80 = &this->AttributeLock;
  AcquireSRWLockExclusive((PSRWLOCK)local_80);
  iVar10 = *(int *)&(this->Attributes).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Attributes).field_0x10;
  iVar15 = 0;
  iVar17 = 0;
  pTVar2 = &this->Attributes;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar19;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_149e5699e;
      uVar14 = puVar18[lVar13 + 1];
    }
    uVar8 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = iVar17 + -1 + (int)lVar13;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_149e5699e:
  uVar14 = *(uint *)&(this->Attributes).field_0x28;
  uVar20 = uVar14 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar15);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_a4,
                       *(int *)&(this->Attributes).field_0x8 -
                       *(int *)&(this->Attributes).field_0x34);
  local_res20 = uVar14;
  local_88 = pTVar19;
  local_78 = pTVar2;
  TStack_70.Array = pTVar19;
  if ((((int)uVar14 < 0) || (iVar10 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)&(this->Attributes).field_0x28;
  uVar5 = local_res20;
  if (uVar14 != uVar8) {
    puVar16 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = (undefined1 *)pTVar19;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar13 = (longlong)iVar15;
      uVar20 = uVar20 + 0x20;
      iVar15 = iVar15 + 1;
      local_res20 = uVar8;
      uVar5 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_149e56ab0;
      uVar14 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13 + -1 + uVar20;
    uVar5 = local_res20;
    if ((int)uVar8 < (int)local_res20) {
      local_res20 = uVar8;
      uVar5 = uVar8;
    }
  }
LAB_149e56ab0:
  while( true ) {
    pTVar6 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_70.CurrentBitIndex == uVar5) && (TStack_70.Array == pTVar19)) && (pTVar6 == pTVar2)
       ) break;
    plVar3 = *(longlong **)(*(longlong *)pTVar6 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((plVar3 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                           ,0x22d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar13 = 0;
    if (0 < local_d8) {
      do {
        while (lVar13 == -1) {
          lVar13 = 0;
        }
        AcquireSRWLockShared((PSRWLOCK)(plVar3 + 0xb));
        piVar11 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                  ::Find((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                          *)(plVar3 + 1),lVar13);
        if (piVar11 == (int *)0x0) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar3 + 0xb));
          this_00 = (FPCGMetadataAttributeBase *)plVar3[0xd];
          iVar10 = -1;
          if (this_00 != (FPCGMetadataAttributeBase *)0x0) {
            lVar12 = GetParentKey((FPCGMetadataDomain *)plVar3[0xc],lVar13);
            iVar10 = FPCGMetadataAttributeBase::GetValueKey(this_00,lVar12);
          }
        }
        else {
          iVar10 = *piVar11;
          ReleaseSRWLockShared((PSRWLOCK)(plVar3 + 0xb));
        }
        if (iVar10 != -1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 0xb));
          local_90 = lVar13;
          piVar11 = TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                    ::FindOrAddImpl<__int64_const_&>
                              ((TMapBase<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
                                *)(plVar3 + 1),(int)((ulonglong)lVar13 >> 0x20) * 0x17 + (int)lVar13
                               ,&local_90);
          *piVar11 = iVar10;
          ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 0xb));
        }
        lVar13 = lVar13 + 1;
        pTVar19 = local_88;
      } while (lVar13 < local_d8);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)local_80);
  this->Parent = (FPCGMetadataDomain *)0x0;
  piVar11 = &(this->ParentKeys).ArrayMax;
  (this->ParentKeys).ArrayNum = 0;
  if (*piVar11 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ParentKeys).AllocatorInstance,0,piVar11);
  }
  TArray<__int64,TSizedDefaultAllocator<32>_>::Init(&this->ParentKeys,&PCGInvalidEntryKey,local_d8);
  this->ItemKeyOffset = 0;
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetAttributeCount @ 149e57d50

int __thiscall FPCGMetadataDomain::GetAttributeCount(FPCGMetadataDomain *this)

{
  int iVar1;
  int iVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  iVar1 = *(int *)&(this->Attributes).field_0x8;
  iVar2 = *(int *)&(this->Attributes).field_0x34;
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  return iVar1 - iVar2;
}

// GetAttributes @ 149e58050

void __thiscall
FPCGMetadataDomain::GetAttributes
          (FPCGMetadataDomain *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar8;
  bool bVar9;
  FScriptContainerElement FVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  uint local_res20;
  FScriptContainerElement local_b8;
  FScriptContainerElement local_b7 [7];
  ForElementType<unsigned_int> local_b0;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_70;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  uVar15 = (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34) +
           param_1->ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar4 = &param_1->ArrayMax;
  if (param_1->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,&param_1->AllocatorInstance,param_1->ArrayNum,piVar4);
  }
  uVar15 = (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34) +
           param_2->ArrayNum;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar15,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  iVar11 = *(int *)&(this->Attributes).field_0x28;
  local_70 = &this->Attributes;
  iStack_a0 = 0;
  local_b0 = (ForElementType<unsigned_int>)&(this->Attributes).field_0x10;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar11 != 0) {
    puVar17 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_b0;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_149e581a2;
      uVar15 = (puVar17 + 1)[lVar12];
    }
    uStack_9c = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_78 = (int)lVar12;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar11 < iStack_8c) {
      iStack_8c = iVar11;
    }
  }
LAB_149e581a2:
  local_98 = &(this->Attributes).field_0x10;
  local_res20 = *(uint *)&(this->Attributes).field_0x28;
  local_a8 = &this->Attributes;
  iStack_80 = *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34;
  uVar15 = local_res20 & 0xffffffe0;
  uStack_90 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  iVar14 = (int)local_res20 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  iStack_84 = iStack_8c;
  local_68 = local_a8;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  if ((((int)local_res20 < 0) || (iVar11 < (int)local_res20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(int *)((longlong)local_b0 + 0x18);
  if (local_res20 != uVar5) {
    FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_b0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_b0;
    }
    uVar13 = -1 << ((byte)local_res20 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      local_res20 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149e582c0;
      uVar13 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar12 * 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_74 = (int)lVar12;
    local_res20 = local_74 + -1 + uVar15;
    if ((int)uVar5 < (int)local_res20) {
      local_res20 = uVar5;
    }
  }
LAB_149e582c0:
  while( true ) {
    pTVar8 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == local_res20) &&
        ((ForElementType<unsigned_int>)TStack_60.Array == local_b0)) && (pTVar8 == local_70)) break;
    lVar12 = *(longlong *)pTVar8;
    pFVar2 = (FScriptContainerElement *)(lVar12 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    lVar12 = *(longlong *)(lVar12 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if (((lVar12 == 0) || (*(longlong *)(lVar12 + 0x74) != *(longlong *)pFVar2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Attribute.Value && Attribute.Value->Name == Attribute.Key",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                           ,0x2d8,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (param_1->AllocatorInstance).Data;
    if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar4 * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == *piVar4) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&param_1->AllocatorInstance,piVar4);
    }
    param_1->ArrayNum = iVar11 + 1;
    *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = *(longlong *)pFVar2;
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (*(short *)(*(longlong *)(pFVar2 + 8) + 0x70) < 0xff) {
      local_b8 = SUB21(*(short *)(*(longlong *)(pFVar2 + 8) + 0x70),0);
      if (((pFVar6 <= &local_b8) && (&local_b8 < pFVar6 + *piVar1)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_2->ArrayNum;
      FVar10 = local_b8;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&param_2->AllocatorInstance,piVar1);
        FVar10 = local_b8;
      }
    }
    else {
      local_b7[0] = (FScriptContainerElement)0xff;
      if (((pFVar6 <= local_b7) && (local_b7 < pFVar6 + *piVar1)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_2->ArrayNum;
      FVar10 = local_b7[0];
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&param_2->AllocatorInstance,piVar1);
        FVar10 = local_b7[0];
      }
    }
    param_2->ArrayNum = iVar11 + 1;
    (param_2->AllocatorInstance).Data[iVar11] = FVar10;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000149e58553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  return;
}

// GetConstAttribute @ 149e58680

FPCGMetadataAttributeBase * __thiscall
FPCGMetadataDomain::GetConstAttribute(FPCGMetadataDomain *this,FName param_1)

{
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar1;
  FPCGMetadataAttributeBase *pFVar2;
  FPCGMetadataAttributeBase *pFVar3;
  
  pFVar3 = (FPCGMetadataAttributeBase *)0x0;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  pTVar1 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,param_1);
  pFVar2 = (FPCGMetadataAttributeBase *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FPCGMetadataAttributeBase *)0x0) {
    pFVar3 = (FPCGMetadataAttributeBase *)pFVar2->_padding_;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  return pFVar3;
}

// GetConstAttributeById @ 149e587c0

FPCGMetadataAttributeBase * __thiscall
FPCGMetadataDomain::GetConstAttributeById(FPCGMetadataDomain *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FPCGMetadataAttributeBase *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  iVar3 = *(int *)&(this->Attributes).field_0x28;
  puVar1 = &(this->Attributes).field_0x10;
  iVar13 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    iVar14 = 0;
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_149e5887d;
      uVar12 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_149e5887d:
  uVar12 = *(uint *)&(this->Attributes).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Attributes).field_0x8 -
                       *(int *)&(this->Attributes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FPCGMetadataAttributeBase *)(*pcVar4)();
    return pFVar9;
  }
  uVar6 = *(uint *)&(this->Attributes).field_0x28;
  if (uVar12 != uVar6) {
    puVar10 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar13) goto LAB_149e58980;
      uVar12 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar12 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_149e58980:
  do {
    if (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      pFVar9 = (FPCGMetadataAttributeBase *)0x0;
LAB_149e589dd:
      ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
      return pFVar9;
    }
    pFVar9 = *(FPCGMetadataAttributeBase **)
              (*(longlong *)&this->Attributes + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((pFVar9 != (FPCGMetadataAttributeBase *)0x0) && (pFVar9->AttributeId == param_1))
    goto LAB_149e589dd;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// GetItemCountForChild @ 149e5a490

long64 __thiscall FPCGMetadataDomain::GetItemCountForChild(FPCGMetadataDomain *this)

{
  int iVar1;
  longlong lVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ItemLock);
  iVar1 = (this->ParentKeys).ArrayNum;
  lVar2 = this->ItemKeyOffset;
  ReleaseSRWLockShared((PSRWLOCK)&this->ItemLock);
  return lVar2 + iVar1;
}

// GetItemKeyCountForParent @ 149e5a5b0

long64 __thiscall FPCGMetadataDomain::GetItemKeyCountForParent(FPCGMetadataDomain *this)

{
  return this->ItemKeyOffset;
}

// GetLatestAttributeNameOrNone @ 149e5a8c0

FName __thiscall FPCGMetadataDomain::GetLatestAttributeNameOrNone(FPCGMetadataDomain *this)

{
  undefined1 *puVar1;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FName FVar11;
  longlong lVar12;
  FName in_RDX;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  int local_res10;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_res18;
  FPlatformRWLock *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res20 = &this->AttributeLock;
  *(undefined8 *)in_RDX = 0;
  iVar18 = -1;
  AcquireSRWLockShared((PSRWLOCK)local_res20);
  iVar4 = *(int *)&(this->Attributes).field_0x28;
  puVar1 = &(this->Attributes).field_0x10;
  pTVar2 = &this->Attributes;
  uVar9 = 1;
  iVar13 = 0;
  iVar15 = 0;
  iVar10 = iVar13;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar14 = *puVar17;
    iVar15 = 0;
    iVar13 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149e5a97c;
      uVar14 = puVar17[lVar12 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iVar10 = iVar15 + -1 + local_res10;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_149e5a97c:
  uVar14 = *(uint *)&(this->Attributes).field_0x28;
  TStack_70._padding_ = CONCAT44(uVar9,iVar13);
  uVar9 = uVar14 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->Attributes).field_0x8 -
                       *(int *)&(this->Attributes).field_0x34);
  local_res18 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    FVar11 = (FName)(*pcVar6)();
    return FVar11;
  }
  pTVar7 = local_res18;
  uVar5 = *(uint *)&(this->Attributes).field_0x28;
  if (uVar14 != uVar5) {
    puVar16 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar9 = uVar9 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149e5aa80;
      uVar14 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = (int)lVar12 + -1 + uVar9;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_149e5aa80:
  while( true ) {
    if (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar14) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar7))
    break;
    lVar12 = *(longlong *)(*(longlong *)pTVar2 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((lVar12 != 0) && (iVar4 = *(int *)(lVar12 + 0x7c), iVar18 < iVar4)) {
      *(undefined8 *)in_RDX =
           *(undefined8 *)(*(longlong *)pTVar2 + (longlong)TStack_70.CurrentBitIndex * 0x18);
      iVar18 = iVar4;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  ReleaseSRWLockShared((PSRWLOCK)local_res20);
  return in_RDX;
}

// GetLocalItemCount @ 149e5ac60

long64 __thiscall FPCGMetadataDomain::GetLocalItemCount(FPCGMetadataDomain *this)

{
  int iVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ItemLock);
  iVar1 = (this->ParentKeys).ArrayNum;
  ReleaseSRWLockShared((PSRWLOCK)&this->ItemLock);
  return (longlong)iVar1;
}

// GetMutableAttribute @ 149e5c050

FPCGMetadataAttributeBase * __thiscall
FPCGMetadataDomain::GetMutableAttribute(FPCGMetadataDomain *this,FName param_1)

{
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar1;
  FPCGMetadataAttributeBase *pFVar2;
  FPCGMetadataAttributeBase *pFVar3;
  
  pFVar3 = (FPCGMetadataAttributeBase *)0x0;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  pTVar1 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,param_1);
  pFVar2 = (FPCGMetadataAttributeBase *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    pFVar2 = pFVar3;
  }
  if (pFVar2 != (FPCGMetadataAttributeBase *)0x0) {
    pFVar3 = (FPCGMetadataAttributeBase *)pFVar2->_padding_;
    SetLastCachedSelectorOnOwner(this,param_1);
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  return pFVar3;
}

// GetParentKey @ 149e5c4d0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FPCGMetadataDomain::GetParentKey(FPCGMetadataDomain *this,long64 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long64 lVar5;
  uint uVar6;
  
  if (this->ItemKeyOffset <= param_1) {
    AcquireSRWLockShared((PSRWLOCK)&this->ItemLock);
    iVar1 = (this->ParentKeys).ArrayNum;
    if (param_1 - this->ItemKeyOffset < (longlong)iVar1) {
      uVar6 = (int)param_1 - (int)this->ItemKeyOffset;
      uVar4 = 0;
      if ((int)uVar6 < iVar1) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          lVar5 = (*pcVar2)();
          return lVar5;
        }
      }
      param_1 = *(long64 *)((this->ParentKeys).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    }
    else {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      param_1 = -1;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->ItemLock);
  }
  return param_1;
}

// GetParentKeys @ 149e5c670

void __thiscall
FPCGMetadataDomain::GetParentKeys
          (FPCGMetadataDomain *this,TArrayView<__int64,int> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  code *pcVar1;
  long64 *plVar2;
  bool bVar3;
  int iVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_34;
  TPCGValueRange<__int64,TStridedView<__int64,int>_> local_28;
  
  plVar2 = param_1->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_1->ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58 = SUB84(plVar2,0);
  uStack_54 = (undefined4)((ulonglong)plVar2 >> 0x20);
  local_28.ElementView.FirstElementPtr._0_4_ = local_58;
  local_28.ElementView.FirstElementPtr._4_4_ = uStack_54;
  local_28.ElementView.BytesBetweenElements = 8;
  local_28._20_4_ = uStack_34;
  local_28.NumElements = iVar4;
  local_28.ElementView.NumElements = iVar4;
  GetParentKeysWithRange(this,&local_28,param_2);
  return;
}

// GetParentKeysWithRange @ 149e5c7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::GetParentKeysWithRange
          (FPCGMetadataDomain *this,TPCGValueRange<__int64,TStridedView<__int64,int>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long64 *plVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  
  AcquireSRWLockShared((PSRWLOCK)&this->ItemLock);
  if (param_2 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    iVar2 = param_2->NumBits;
    if (param_1->NumElements == iVar2) {
      iVar11 = 0;
      iVar9 = 0;
      if (iVar2 != 0) {
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)param_2;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar3;
        }
        uVar7 = *(uint *)FVar14;
        while (uVar7 == 0) {
          lVar8 = (longlong)iVar11;
          iVar9 = iVar9 + 0x20;
          iVar11 = iVar11 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_149e5cab3;
          uVar7 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar8 * 4);
        }
        uVar7 = -uVar7 & uVar7;
        uVar1 = (ulonglong)uVar7 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar12 = (int)lVar8 + -1 + iVar9;
        if ((int)uVar12 < iVar2) {
          uVar15 = 0xffffffff;
          do {
            uVar10 = 0;
            if ((int)uVar12 < param_1->NumElements) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar10 = (int)uVar12 % (param_1->ElementView).NumElements;
            if (uVar12 == uVar10) {
              plVar13 = (long64 *)
                        ((longlong)(param_1->ElementView).BytesBetweenElements *
                         (longlong)(int)uVar10 + (longlong)(param_1->ElementView).FirstElementPtr);
            }
            else {
              plVar13 = &param_1->StubValue;
            }
            lVar8 = this->ItemKeyOffset;
            lVar4 = *plVar13;
            if (lVar8 <= lVar4) {
              iVar2 = (this->ParentKeys).ArrayNum;
              if (lVar4 - lVar8 < (longlong)iVar2) {
                uVar10 = (int)lVar4 - (int)lVar8;
                uVar12 = 0;
                if ((int)uVar10 < iVar2) {
                  uVar12 = ~uVar10 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *plVar13 = *(longlong *)
                            ((this->ParentKeys).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
              }
              else {
                if (2 < (byte)LogPCG._0_1_) {
                  UE::Logging::Private::BasicLog<3>
                            ((FStaticBasicLogRecord *)&PTR_u_Invalid_metadat_151fe5348,
                             (FLogCategoryBase *)&LogPCG);
                }
                *plVar13 = -1;
              }
            }
            uVar15 = uVar15 & ~uVar7;
            FVar3 = (param_2->AllocatorInstance).SecondaryData;
            iVar2 = param_2->NumBits;
            FVar14 = (ForElementType<unsigned_int>)param_2;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            uVar7 = uVar15 & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
            while (uVar7 == 0) {
              lVar8 = (longlong)iVar11;
              iVar9 = iVar9 + 0x20;
              iVar11 = iVar11 + 1;
              if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11)
              goto LAB_149e5cab3;
              uVar15 = 0xffffffff;
              uVar7 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar8 * 4);
            }
            uVar7 = -uVar7 & uVar7;
            uVar1 = (ulonglong)uVar7 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar12 = (int)lVar8 + -1 + iVar9;
          } while (((int)uVar12 <= iVar2) && ((int)uVar12 < iVar2));
        }
      }
      goto LAB_149e5cab3;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6732401106661409953>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                       ,0x4a1,"LocalItemKeys.Num() == Mask->Num()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = param_1->NumElements;
  iVar11 = 0;
  while (iVar11 != iVar2) {
    iVar9 = iVar11 % (param_1->ElementView).NumElements;
    if (iVar11 == iVar9) {
      plVar13 = (long64 *)
                ((longlong)(param_1->ElementView).BytesBetweenElements * (longlong)iVar9 +
                (longlong)(param_1->ElementView).FirstElementPtr);
    }
    else {
      plVar13 = &param_1->StubValue;
    }
    lVar8 = this->ItemKeyOffset;
    lVar4 = *plVar13;
    if (lVar4 < lVar8) {
LAB_149e5cb7a:
      iVar11 = iVar11 + 1;
    }
    else {
      iVar9 = (this->ParentKeys).ArrayNum;
      if ((longlong)iVar9 <= lVar4 - lVar8) {
        if (2 < (byte)LogPCG._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_metadat_151fe5348,
                     (FLogCategoryBase *)&LogPCG);
        }
        *plVar13 = -1;
        goto LAB_149e5cb7a;
      }
      uVar12 = (int)lVar4 - (int)lVar8;
      uVar7 = 0;
      if ((int)uVar12 < iVar9) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = iVar11 + 1;
      *plVar13 = *(longlong *)
                  ((this->ParentKeys).AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
    }
  }
LAB_149e5cab3:
                    /* WARNING: Could not recover jumptable at 0x000149e5cac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ItemLock);
  return;
}

// GetRoot @ 149e6ac50

FPCGMetadataDomain * __thiscall FPCGMetadataDomain::GetRoot(FPCGMetadataDomain *this)

{
  FPCGMetadataDomain *pFVar1;
  FPCGMetadataDomain *pFVar2;
  
  pFVar2 = this->Parent;
  if (pFVar2 != (FPCGMetadataDomain *)0x0) {
    do {
      pFVar1 = pFVar2;
      pFVar2 = pFVar2->Parent;
    } while (pFVar2 != (FPCGMetadataDomain *)0x0);
    return pFVar1;
  }
  return this;
}

// HasAttribute @ 149e72d50

bool __thiscall FPCGMetadataDomain::HasAttribute(FPCGMetadataDomain *this,FName param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Attributes).field_0x8 != *(int *)&(this->Attributes).field_0x34) {
    puVar2 = *(undefined1 **)&(this->Attributes).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->Attributes).field_0x38;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->Attributes).field_0x48 - 1U & param_1.Number + uVar1)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->Attributes + (longlong)iVar3 * 0x18) == param_1)
        goto LAB_149e72ddb;
        iVar3 = *(int *)(*(longlong *)&this->Attributes + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_149e72ddb:
  ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  return iVar3 != -1;
}

// HasCommonAttributes @ 149e72fc0

bool __thiscall
FPCGMetadataDomain::HasCommonAttributes(FPCGMetadataDomain *this,FPCGMetadataDomain *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  bool local_res10;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  if (param_1 == (FPCGMetadataDomain *)0x0) {
    return false;
  }
  local_res10 = false;
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  iVar3 = *(int *)&(this->Attributes).field_0x28;
  puVar1 = &(this->Attributes).field_0x10;
  iVar13 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar14 = iVar14 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar13) goto LAB_149e730ad;
      uVar12 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = local_res20 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_149e730ad:
  uVar12 = *(uint *)&(this->Attributes).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar13);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->Attributes).field_0x8 -
                       *(int *)&(this->Attributes).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->Attributes).field_0x28;
  if (uVar12 != uVar7) {
    puVar10 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar13) goto LAB_149e731c0;
      uVar12 = *(uint *)(puVar10 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_149e731c0:
  do {
    if (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34 !=
        (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar12) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) goto LAB_149e7321a;
    bVar5 = HasAttribute(param_1,*(FName *)(*(longlong *)&this->Attributes +
                                           (longlong)TStack_68.CurrentBitIndex * 0x18));
    if (bVar5) {
      local_res10 = true;
LAB_149e7321a:
      ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
      return local_res10;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// HasParent @ 149e732c0

bool __thiscall FPCGMetadataDomain::HasParent(FPCGMetadataDomain *this,FPCGMetadataDomain *param_1)

{
  FPCGMetadataDomain *pFVar1;
  
  if (param_1 == (FPCGMetadataDomain *)0x0) {
    return false;
  }
  pFVar1 = this->Parent;
  while( true ) {
    if (pFVar1 == (FPCGMetadataDomain *)0x0) {
      return param_1 == (FPCGMetadataDomain *)0x0;
    }
    if (pFVar1 == param_1) break;
    pFVar1 = pFVar1->Parent;
  }
  return true;
}

// Initialize @ 149e756c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPCGMetadataDomain::Initialize(FPCGMetadataDomain *this,FPCGMetadataDomainInitializeParams *param_1)

{
  int iVar1;
  UPCGMetadata *pUVar2;
  UPCGMetadata *pUVar3;
  FPCGMetadataDomain *this_00;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  long64 lVar9;
  UObject *pUVar10;
  undefined1 local_98 [8];
  undefined1 local_90 [80];
  EPCGMetadataFilterMode local_40;
  EPCGStringMatchingOperator local_3f;
  long64 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long64 lStack_20;
  bool local_18;
  
  if (this->Parent != (FPCGMetadataDomain *)0x0) {
    return;
  }
  if (*(int *)&(this->Attributes).field_0x8 != *(int *)&(this->Attributes).field_0x34) {
    return;
  }
  if (this->TopMetadata == (UPCGMetadata *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6732401106661409082>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                       ,0x13a,"TopMetadata");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    goto LAB_149e757c7;
  }
  pUVar10 = (UObject *)this->TopMetadata->_padding_;
  if (pUVar10 == (UObject *)0x0) {
LAB_149e75763:
    pUVar8 = Z_Construct_UClass_UPCGData_NoRegister();
    if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar8);
    }
    pUVar10 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((pUVar10 == (UObject *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadata.cpp"
                           ,0x4df,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar8 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_149e75763;
  }
  cVar7 = (**(code **)(*(longlong *)pUVar10 + 0x360))(pUVar10,&this->DomainID);
  if (cVar7 != '\0') {
    pUVar2 = this->TopMetadata;
    if (((pUVar2->Parent).field0_0x0.DebugPtr == (UPCGMetadata *)0x0) &&
       (param_1->Parent != (FPCGMetadataDomain *)0x0)) {
      pUVar3 = param_1->Parent->TopMetadata;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPCGMetadata *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (pUVar2->Parent).field0_0x0.DebugPtr = pUVar3;
    }
    this_00 = param_1->Parent;
    lVar9 = 0;
    if (this_00 == this) {
      this->Parent = (FPCGMetadataDomain *)0x0;
    }
    else {
      this->Parent = this_00;
      if (this_00 != (FPCGMetadataDomain *)0x0) {
        lVar9 = GetItemCountForChild(this_00);
      }
    }
    this->ItemKeyOffset = lVar9;
    if (param_1->FilterMode == IncludeAttributes) {
      if (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0xc) == -1) {
        return;
      }
      if (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 8) ==
          *(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0x34)) {
        return;
      }
    }
    AddAttributes(this,param_1);
    return;
  }
LAB_149e757c7:
  if ((param_1->OptionalEntriesToCopy).bIsSet == false) {
    InitializeAsCopy(this,param_1);
  }
  else {
    local_98 = (undefined1  [8])param_1->Parent;
    local_90._0_8_ = (void *)0x0;
    local_90._8_4_ = 0;
    local_90._12_4_ = -1;
    local_90._32_8_ = (void *)0x0;
    local_90._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_90._48_8_ = _UNK_150631d98;
    local_90._64_8_ = (ForElementType<FSetElementId>)0x0;
    local_90._72_4_ = 0;
    if (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0xc) != -1) {
      local_90._12_4_ = 0;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_90,
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 &param_1->FilteredAttributes);
    }
    local_40 = param_1->FilterMode;
    local_3f = param_1->MatchOperator;
    local_18 = (param_1->OptionalEntriesToCopy).bIsSet;
    if (local_18 != false) {
      local_38 = (param_1->OptionalEntriesToCopy).TypedValue.ElementView.FirstElementPtr;
      uStack_30._0_4_ = (param_1->OptionalEntriesToCopy).TypedValue.ElementView.BytesBetweenElements
      ;
      uStack_30._4_4_ = (param_1->OptionalEntriesToCopy).TypedValue.ElementView.NumElements;
      local_18 = false;
      local_28._0_4_ = (param_1->OptionalEntriesToCopy).TypedValue.NumElements;
      local_28._4_4_ = *(undefined4 *)&(param_1->OptionalEntriesToCopy).TypedValue.field_0x14;
      lStack_20 = (param_1->OptionalEntriesToCopy).TypedValue.StubValue;
    }
    InitializeAsCopy(this,(FPCGMetadataDomainInitializeParams *)local_98);
    if (local_90._12_4_ != -1) {
      local_90._72_4_ = 0;
      if ((ForElementType<FSetElementId>)local_90._64_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_90._64_8_);
      }
      local_90._8_4_ = 0;
      if (local_90._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
      }
      uVar5 = local_90._44_4_;
      local_90._48_8_ = 0xffffffff;
      local_90._40_8_ = (ulonglong)(uint)local_90._44_4_ << 0x20;
      if (0x80 < (uint)uVar5) {
        local_90._40_8_ = 0x8000000000;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
      }
      if ((void *)local_90._32_8_ != (void *)0x0) {
        FMemory::Free((void *)local_90._32_8_);
      }
      if ((void *)local_90._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_90._0_8_);
      }
    }
  }
  return;
}

// Initialize @ 149e759b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FPCGMetadataDomain::Initialize(FPCGMetadataDomain *this,FPCGMetadataDomain *param_1)

{
  undefined4 uVar1;
  undefined1 local_98 [8];
  undefined1 local_90 [80];
  undefined2 local_40;
  bool local_18;
  
  local_90._0_8_ = (void *)0x0;
  local_90._8_4_ = 0;
  local_90._32_8_ = (void *)0x0;
  local_90._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_90._48_8_ = _UNK_150631d98;
  local_90._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_90._72_4_ = 0;
  local_40._0_1_ = ExcludeAttributes;
  local_40._1_1_ = Equal;
  local_18 = false;
  local_90._12_4_ = -1;
  local_98 = (undefined1  [8])param_1;
  Initialize(this,(FPCGMetadataDomainInitializeParams *)local_98);
  if (local_90._12_4_ != -1) {
    local_90._72_4_ = 0;
    if ((ForElementType<FSetElementId>)local_90._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_90._64_8_);
    }
    local_90._8_4_ = 0;
    if (local_90._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
    }
    uVar1 = local_90._44_4_;
    local_90._48_8_ = 0xffffffff;
    local_90._40_8_ = (ulonglong)(uint)local_90._44_4_ << 0x20;
    if (0x80 < (uint)uVar1) {
      local_90._40_8_ = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
    }
    if ((void *)local_90._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._32_8_);
    }
    if ((void *)local_90._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
  }
  return;
}

// InitializeAsCopy @ 149e768c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::InitializeAsCopy
          (FPCGMetadataDomain *this,FPCGMetadataDomainInitializeParams *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  FScriptContainerElement *_Src;
  FPCGMetadataDomain *pFVar5;
  FName FVar6;
  code *pcVar7;
  char cVar8;
  FPCGMetadataDomainInitializeParams *pFVar9;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar14;
  FPCGMetadataAttributeBase *this_00;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  ulonglong uVar25;
  <lambda_1> local_res10 [8];
  char local_res18;
  int local_res20;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_168;
  FPCGMetadataDomainInitializeParams *local_158;
  TArray<FString,TSizedDefaultAllocator<32>_> local_150;
  TArray<int,TSizedDefaultAllocator<32>_> local_140;
  FString local_130;
  int local_120;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_118;
  FName local_110;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TArrayView<int_const_,int> local_a8;
  TArrayView<__int64_const_,int> local_98;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_88;
  undefined4 local_4c;
  
  if (param_1->Parent != (FPCGMetadataDomain *)0x0) {
    if ((this->Parent == (FPCGMetadataDomain *)0x0) &&
       (*(int *)&(this->Attributes).field_0x8 == *(int *)&(this->Attributes).field_0x34)) {
      uVar21 = 0;
      uVar20 = 0;
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 0;
      local_150.ArrayMax = 0;
      local_158 = param_1;
      if ((param_1->MatchOperator != Equal) &&
         (*(int *)((longlong)&(param_1->FilteredAttributes).field0_0x0 + 0xc) != -1)) {
        Algo::
        Transform<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TArray<FString,TSizedDefaultAllocator<32>_>_&,_PCGMetadata::FPCGMetadataAttributeNameFilter::FPCGMetadataAttributeNameFilter_::__l5::<lambda_1>_>
                  ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                   &param_1->FilteredAttributes,&local_150,local_res10[0]);
      }
      local_res18 = (param_1->OptionalEntriesToCopy).bIsSet;
      local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.ArrayNum = 0;
      local_168.ArrayMax = 0;
      local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ArrayNum = 0;
      local_140.ArrayMax = 0;
      uVar22 = 0;
      if ((bool)local_res18 == false) {
        pTVar3 = &this->ParentKeys;
        pTVar14 = &param_1->Parent->ParentKeys;
        if (pTVar3 != pTVar14) {
          iVar17 = (param_1->Parent->ParentKeys).ArrayNum;
          piVar1 = &(this->ParentKeys).ArrayMax;
          _Src = (pTVar14->AllocatorInstance).Data;
          (this->ParentKeys).ArrayNum = iVar17;
          if ((iVar17 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar17,*piVar1,&pTVar3->AllocatorInstance,iVar17,piVar1);
            if (iVar17 != 0) {
              memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar17 << 3);
            }
          }
        }
        this->ItemKeyOffset = param_1->Parent->ItemKeyOffset;
        this->Parent = param_1->Parent->Parent;
      }
      else {
        iVar17 = (param_1->OptionalEntriesToCopy).TypedValue.NumElements;
        TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_168,iVar17,Default);
        TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_140,iVar17,Default);
        TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  (&this->ParentKeys,iVar17,Default);
        uVar19 = uVar21;
        uVar25 = uVar21;
        if (0 < iVar17) {
          do {
            uVar13 = (uint)uVar19;
            uVar12 = uVar20;
            if ((int)uVar13 < local_168.ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(longlong *)(local_168.AllocatorInstance.Data + uVar25 * 8) = (longlong)(int)uVar13;
            uVar12 = uVar22;
            if ((int)uVar13 < (this->ParentKeys).ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined8 *)((this->ParentKeys).AllocatorInstance.Data + uVar25 * 8) =
                 0xffffffffffffffff;
            uVar25 = uVar25 + 1;
            uVar19 = (ulonglong)(uVar13 + 1);
          } while ((longlong)uVar25 < (longlong)iVar17);
        }
        this->ItemKeyOffset = 0;
      }
      pFVar5 = param_1->Parent;
      uStack_fc = 1;
      uVar12 = *(uint *)&(pFVar5->Attributes).field_0x28;
      puVar2 = &(pFVar5->Attributes).field_0x10;
      local_118 = &pFVar5->Attributes;
      uStack_ec = uVar22;
      if (uVar12 != 0) {
        puVar24 = *(uint **)&(pFVar5->Attributes).field_0x20;
        if (puVar24 == (uint *)0x0) {
          puVar24 = (uint *)puVar2;
        }
        uVar13 = *puVar24;
        uVar19 = uVar21;
        uVar22 = 0;
        uVar20 = 0;
        while (uVar13 == 0) {
          iVar17 = (int)uVar21;
          uVar22 = (int)uVar19 + 0x20;
          uVar19 = (ulonglong)uVar22;
          uVar20 = iVar17 + 1;
          uVar21 = (ulonglong)uVar20;
          uStack_ec = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
          goto LAB_149e76b9e;
          uVar13 = puVar24[(longlong)iVar17 + 1];
        }
        uStack_fc = -uVar13 & uVar13;
        uVar21 = (ulonglong)uStack_fc * 2 + 1;
        lVar15 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res20 = (int)lVar15;
        uStack_ec = (uVar22 - 1) + local_res20;
        if ((int)uVar12 < (int)uStack_ec) {
          uStack_ec = uVar12;
        }
      }
LAB_149e76b9e:
      uStack_e4 = local_4c;
      iStack_e0 = *(int *)&(pFVar5->Attributes).field_0x8 - *(int *)&(pFVar5->Attributes).field_0x34
      ;
      uVar13 = *(uint *)&(pFVar5->Attributes).field_0x28;
      TStack_d0._padding_ = CONCAT44(uStack_fc,uVar20);
      uStack_f0 = 0xffffffff;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_d0.CurrentBitIndex = uStack_ec;
      TStack_d0.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar13 >> 5;
      TStack_d0._28_4_ = local_4c;
      TStack_d0.BaseBitIndex = uVar22;
      uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
      local_108 = local_118;
      uStack_100 = uVar20;
      local_f8 = puVar2;
      local_e8 = uVar22;
      local_d8 = local_118;
      TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar13 < 0) || ((int)uVar12 < (int)uVar13)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar20 = *(uint *)&(pFVar5->Attributes).field_0x28;
      if (uVar13 != uVar20) {
        puVar23 = *(undefined1 **)&(pFVar5->Attributes).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = puVar2;
        }
        uVar22 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar17 * 4);
        while (uVar22 == 0) {
          lVar15 = (longlong)iVar17;
          uVar18 = uVar18 + 0x20;
          iVar17 = iVar17 + 1;
          uVar13 = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_149e76ca0;
          uVar22 = *(uint *)(puVar23 + lVar15 * 4 + 4);
        }
        uVar21 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_120 = (int)lVar15;
        uVar13 = local_120 + -1 + uVar18;
        if ((int)uVar20 < (int)uVar13) {
          uVar13 = uVar20;
        }
      }
LAB_149e76ca0:
      do {
        pTVar10 = local_d8;
        if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
          local_res10[0] = (<lambda_1>)0x0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        pFVar9 = local_158;
        if (((TStack_d0.CurrentBitIndex == uVar13) &&
            (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar10 == local_118)) {
          if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.AllocatorInstance.Data);
          }
          if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_150.AllocatorInstance.Data,local_150.ArrayNum)
          ;
          if (local_150.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_150.AllocatorInstance.Data);
          return;
        }
        pFVar4 = (FName *)(*(longlong *)pTVar10 + (longlong)TStack_d0.CurrentBitIndex * 0x18);
        FVar6 = *pFVar4;
        local_110 = FVar6;
        if (local_158->MatchOperator == Equal) {
          if (*(int *)((longlong)&(local_158->FilteredAttributes).field0_0x0 + 0xc) != -1) {
            uVar20 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
            if (*(int *)((longlong)&(pFVar9->FilteredAttributes).field0_0x0 + 8) !=
                *(int *)((longlong)&(pFVar9->FilteredAttributes).field0_0x0 + 0x34)) {
              puVar23 = *(undefined1 **)((longlong)&(pFVar9->FilteredAttributes).field0_0x0 + 0x40);
              puVar16 = (undefined1 *)((longlong)&(pFVar9->FilteredAttributes).field0_0x0 + 0x38);
              if (puVar23 != (undefined1 *)0x0) {
                puVar16 = puVar23;
              }
              iVar17 = *(int *)(puVar16 +
                               (ulonglong)
                               ((pFVar9->FilteredAttributes).field0_0x0.TypedValue.HashSize - 1U &
                               FVar6.Number + uVar20) * 4);
              if (iVar17 != -1) {
                lVar15 = *(longlong *)&(pFVar9->FilteredAttributes).field0_0x0;
                do {
                  if (*(FName *)(lVar15 + (longlong)iVar17 * 0x10) == FVar6) {
                    bVar11 = true;
                    goto LAB_149e76db2;
                  }
                  iVar17 = *(int *)(lVar15 + 8 + (longlong)iVar17 * 0x10);
                } while (iVar17 != -1);
              }
            }
          }
          bVar11 = false;
LAB_149e76db2:
          if (local_158->FilterMode != ExcludeAttributes) {
            bVar11 = bVar11 == false;
          }
          if (bVar11 == false) goto LAB_149e76e01;
        }
        else {
          ::FName::ToString(&local_110,&local_130);
          if (local_158->MatchOperator == Substring) {
            bVar11 = Algo::
                     NoneOf<TArray<FString,TSizedDefaultAllocator<32>_>,_PCGMetadata::FPCGMetadataAttributeNameFilter::operator()_::__l10::<lambda_1>_>
                               (&local_150,&local_130);
LAB_149e76d9d:
            bVar11 = (bool)(bVar11 ^ 1);
            if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_130.Data.AllocatorInstance.Data);
            }
            goto LAB_149e76db2;
          }
          if (local_158->MatchOperator == Matches) {
            bVar11 = Algo::
                     NoneOf<TArray<FString,TSizedDefaultAllocator<32>_>,_PCGMetadata::FPCGMetadataAttributeNameFilter::operator()_::__l14::<lambda_2>_>
                               (&local_150,&local_130);
            goto LAB_149e76d9d;
          }
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                              ,0x80,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
LAB_149e76e01:
          cVar8 = local_res18;
          this_00 = CopyAttribute(this,(FPCGMetadataAttributeBase *)pFVar4[1],*pFVar4,false,
                                  local_res18 == '\0',true);
          if (((cVar8 != '\0') && (FVar6 = pFVar4[1], FVar6 != (FName)0x0)) &&
             (this_00 != (FPCGMetadataAttributeBase *)0x0)) {
            if (((param_1->OptionalEntriesToCopy).bIsSet == false) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_88.ElementView.FirstElementPtr =
                 (param_1->OptionalEntriesToCopy).TypedValue.ElementView.FirstElementPtr;
            local_88.ElementView.BytesBetweenElements =
                 (param_1->OptionalEntriesToCopy).TypedValue.ElementView.BytesBetweenElements;
            local_88.ElementView.NumElements =
                 (param_1->OptionalEntriesToCopy).TypedValue.ElementView.NumElements;
            local_88.NumElements = (param_1->OptionalEntriesToCopy).TypedValue.NumElements;
            local_88._20_4_ = *(undefined4 *)&(param_1->OptionalEntriesToCopy).TypedValue.field_0x14
            ;
            local_88.StubValue = (param_1->OptionalEntriesToCopy).TypedValue.StubValue;
            FPCGMetadataAttributeBase::GetValueKeys
                      ((FPCGMetadataAttributeBase *)FVar6,&local_88,&local_140);
            iVar17 = local_140.ArrayNum;
            local_a8.DataPtr = (int *)local_140.AllocatorInstance.Data;
            if ((local_140.ArrayNum < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_a8.ArrayNum = iVar17;
            iVar17 = local_168.ArrayNum;
            local_98.DataPtr = (long64 *)local_168.AllocatorInstance.Data;
            if ((local_168.ArrayNum < 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_98.ArrayNum = iVar17;
            FPCGMetadataAttributeBase::SetValuesFromValueKeys(this_00,&local_98,&local_a8,true);
          }
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
      } while( true );
    }
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  return;
}

// InitializeAsCopy @ 149e76fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPCGMetadataDomain::InitializeAsCopy(FPCGMetadataDomain *this,FPCGMetadataDomain *param_1)

{
  undefined4 uVar1;
  undefined1 local_98 [8];
  undefined1 local_90 [80];
  undefined2 local_40;
  bool local_18;
  
  local_90._0_8_ = (void *)0x0;
  local_90._8_4_ = 0;
  local_90._32_8_ = (void *)0x0;
  local_90._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_90._48_8_ = _UNK_150631d98;
  local_90._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_90._72_4_ = 0;
  local_40._0_1_ = ExcludeAttributes;
  local_40._1_1_ = Equal;
  local_18 = false;
  local_90._12_4_ = -1;
  local_98 = (undefined1  [8])param_1;
  InitializeAsCopy(this,(FPCGMetadataDomainInitializeParams *)local_98);
  if (local_90._12_4_ != -1) {
    local_90._72_4_ = 0;
    if ((ForElementType<FSetElementId>)local_90._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_90._64_8_);
    }
    local_90._8_4_ = 0;
    if (local_90._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
    }
    uVar1 = local_90._44_4_;
    local_90._48_8_ = 0xffffffff;
    local_90._40_8_ = (ulonglong)(uint)local_90._44_4_ << 0x20;
    if (0x80 < (uint)uVar1) {
      local_90._40_8_ = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
    }
    if ((void *)local_90._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._32_8_);
    }
    if ((void *)local_90._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_90._0_8_);
    }
  }
  return;
}

// InitializeOnSet @ 149e77790

bool __thiscall
FPCGMetadataDomain::InitializeOnSet
          (FPCGMetadataDomain *this,long64 *param_1,long64 param_2,FPCGMetadataDomain *param_3,
          long64 param_4,FPCGMetadataDomain *param_5)

{
  longlong lVar1;
  long64 lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (lVar1 < this->ItemKeyOffset) {
      lVar2 = AddEntry(this,lVar1);
      *param_1 = lVar2;
    }
    return false;
  }
  if (((param_2 == -1) || (this->Parent != param_3)) &&
     ((param_4 == -1 || (param_2 = param_4, this->Parent != param_5)))) {
    lVar2 = AddEntry(this,-1);
    *param_1 = lVar2;
    return false;
  }
  lVar2 = AddEntry(this,param_2);
  *param_1 = lVar2;
  return true;
}

// MergeAttributes @ 149e794e0

void __thiscall
FPCGMetadataDomain::MergeAttributes
          (FPCGMetadataDomain *this,long64 param_1,FPCGMetadataDomain *param_2,long64 param_3,
          FPCGMetadataDomain *param_4,long64 *param_5,EPCGMetadataOp param_6)

{
  MergeAttributesSubset(this,param_1,param_2,param_2,param_3,param_4,param_4,param_5,param_6);
  return;
}

// MergeAttributesSubset @ 149e795e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::MergeAttributesSubset
          (FPCGMetadataDomain *this,long64 param_1,FPCGMetadataDomain *param_2,
          FPCGMetadataDomain *param_3,long64 param_4,FPCGMetadataDomain *param_5,
          FPCGMetadataDomain *param_6,long64 *param_7,EPCGMetadataOp param_8)

{
  undefined1 *puVar1;
  FName *this_00;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FPCGMetadataAttributeBase *pFVar10;
  FPCGMetadataAttributeBase *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  FPCGMetadataDomain *local_res20;
  uint local_e8;
  undefined4 uStack_b4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60;
  FString local_50;
  
  if ((param_2 != (FPCGMetadataDomain *)0x0) || (param_5 != (FPCGMetadataDomain *)0x0)) {
    local_res20 = param_3;
    InitializeOnSet(this,param_7,param_1,param_2,param_4,param_5);
    AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
    iVar3 = *(int *)&(this->Attributes).field_0x28;
    puVar1 = &(this->Attributes).field_0x10;
    iVar14 = 0;
    iVar16 = 0;
    uVar8 = 1;
    iVar9 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->Attributes).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar4 = *puVar17;
      while (uVar4 == 0) {
        lVar12 = (longlong)iVar14;
        iVar16 = iVar16 + 0x20;
        iVar14 = iVar14 + 1;
        iVar9 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149e796ef;
        uVar4 = puVar17[lVar12 + 1];
      }
      uVar8 = -uVar4 & uVar4;
      uVar2 = (ulonglong)uVar8 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar9 = iVar16 + -1 + (int)lVar12;
      if (iVar3 < iVar9) {
        iVar9 = iVar3;
      }
    }
LAB_149e796ef:
    local_e8 = *(uint *)&(this->Attributes).field_0x28;
    TStack_88._padding_ = CONCAT44(uVar8,iVar14);
    uVar8 = local_e8 & 0xffffffe0;
    TStack_88.CurrentBitIndex = iVar9;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)local_e8 >> 5;
    TStack_88._28_4_ = iVar9;
    TStack_88.BaseBitIndex = iVar16;
    uStack_68 = CONCAT44(uStack_b4,
                         *(int *)&(this->Attributes).field_0x8 -
                         *(int *)&(this->Attributes).field_0x34);
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)local_e8 < 0) || (iVar3 < (int)local_e8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar4 = *(uint *)&(this->Attributes).field_0x28;
    if (local_e8 != uVar4) {
      puVar15 = *(undefined1 **)&(this->Attributes).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)local_e8 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar8 = uVar8 + 0x20;
        iVar14 = iVar14 + 1;
        local_e8 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_149e79801;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_e8 = (int)lVar12 + -1 + uVar8;
      if ((int)uVar4 < (int)local_e8) {
        local_e8 = uVar4;
      }
    }
LAB_149e79801:
    while( true ) {
      if (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_88.CurrentBitIndex == local_e8) &&
         (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pFVar10 = (FPCGMetadataAttributeBase *)0x0;
      plVar5 = *(longlong **)
                (*(longlong *)&this->Attributes + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
      this_00 = (FName *)(*(longlong *)&this->Attributes +
                         (longlong)TStack_88.CurrentBitIndex * 0x18);
      if (((param_2 != (FPCGMetadataDomain *)0x0) &&
          (((param_2 == local_res20 ||
            ((local_res20 != (FPCGMetadataDomain *)0x0 &&
             (bVar7 = HasAttribute(local_res20,*this_00), bVar7)))) &&
           (pFVar10 = GetConstAttribute(param_2,*this_00),
           pFVar10 != (FPCGMetadataAttributeBase *)0x0)))) &&
         (pFVar10->TypeId != (short)plVar5[0xe])) {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(this_00,&local_60);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
        }
        pFVar10 = (FPCGMetadataAttributeBase *)0x0;
      }
      pFVar11 = (FPCGMetadataAttributeBase *)0x0;
      if (((param_5 != (FPCGMetadataDomain *)0x0) &&
          ((param_5 == param_6 ||
           ((param_6 != (FPCGMetadataDomain *)0x0 && (bVar7 = HasAttribute(param_6,*this_00), bVar7)
            ))))) &&
         ((pFVar11 = GetConstAttribute(param_5,*this_00),
          pFVar11 != (FPCGMetadataAttributeBase *)0x0 && (pFVar11->TypeId != (short)plVar5[0xe]))))
      {
        if (1 < (byte)LogPCG._0_1_) {
          ::FName::ToString(this_00,&local_50);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        pFVar11 = (FPCGMetadataAttributeBase *)0x0;
      }
      if ((pFVar10 != (FPCGMetadataAttributeBase *)0x0) ||
         (pFVar11 != (FPCGMetadataAttributeBase *)0x0)) {
        (**(code **)(*plVar5 + 0x50))(plVar5,*param_7,pFVar10,param_1,pFVar11,param_4,param_8);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->AttributeLock);
  }
  return;
}

// ParentHasAttribute @ 149e79e20

bool __thiscall FPCGMetadataDomain::ParentHasAttribute(FPCGMetadataDomain *this,FName param_1)

{
  bool bVar1;
  
  if (this->Parent != (FPCGMetadataDomain *)0x0) {
    bVar1 = HasAttribute(this->Parent,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// RemoveAttributeInternal @ 149e84ed0

void __thiscall FPCGMetadataDomain::RemoveAttributeInternal(FPCGMetadataDomain *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Attributes).field_0x8 != *(int *)&(this->Attributes).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                         *)&this->Attributes,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// RenameAttribute @ 149e858c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPCGMetadataDomain::RenameAttribute(FPCGMetadataDomain *this,FName param_1,FName param_2)

{
  longlong lVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar5;
  longlong *plVar6;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  local_res10 = param_1;
  local_res18 = param_2;
  bVar3 = FPCGMetadataAttributeBase::IsValidName(&local_res18);
  if (!bVar3) {
    if (1 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res18,(FString *)local_38);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_38._0_8_);
      }
    }
    return false;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  pTVar5 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                   *)&this->Attributes,local_res10);
  FVar2 = local_res10;
  plVar6 = (longlong *)&pTVar5->field_0x8;
  if (pTVar5 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (plVar6 == (longlong *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
    bVar3 = false;
    if (2 < (byte)LogPCG._0_1_) {
      ::FName::ToString(&local_res10,(FString *)local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_38._0_8_);
      }
    }
  }
  else {
    lVar1 = *plVar6;
    local_res20 = local_res10;
    if (*(int *)&(this->Attributes).field_0x8 != *(int *)&(this->Attributes).field_0x34) {
      uVar4 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
      TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                           *)&this->Attributes,FVar2.Number + uVar4,&local_res20);
    }
    *(FName *)(lVar1 + 0x74) = local_res18;
    local_48 = local_res18;
    local_38._0_8_ = &local_48;
    local_38._8_8_ = &local_40;
    local_40 = lVar1;
    TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&>_>
              ((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                *)&this->Attributes,
               (TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&> *)&local_res20,
               (bool *)local_38);
    SetLastCachedSelectorOnOwner(this,local_res18);
    bVar3 = true;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AttributeLock);
  }
  return bVar3;
}

// ResetWeightedAttributes @ 149e86180

void __thiscall
FPCGMetadataDomain::ResetWeightedAttributes(FPCGMetadataDomain *this,long64 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long64 lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FPlatformRWLock *local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar10 = *param_1;
  if ((lVar10 == -1) || (lVar10 < this->ItemKeyOffset)) {
    lVar9 = AddEntry(this,lVar10);
    *param_1 = lVar9;
  }
  local_res18 = &this->AttributeLock;
  AcquireSRWLockShared((PSRWLOCK)local_res18);
  iVar3 = *(int *)&(this->Attributes).field_0x28;
  puVar1 = &(this->Attributes).field_0x10;
  iVar13 = 0;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149e8625d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = local_res10 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_149e8625d:
  uVar12 = *(uint *)&(this->Attributes).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Attributes).field_0x8 -
                       *(int *)&(this->Attributes).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->Attributes).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149e86360;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_149e86360:
  while( true ) {
    if (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&this->Attributes + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x72) != '\0')) {
      (**(code **)(*plVar4 + 0x60))(plVar4,*param_1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x000149e863de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)local_res18);
  return;
}

// Serialize @ 149e8ce60

void __thiscall FPCGMetadataDomain::Serialize(FPCGMetadataDomain *this,FArchive *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  FPCGMetadataDomain *pFVar4;
  code *pcVar5;
  byte *pbVar6;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  long64 lVar17;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_f8 [2];
  FName local_f0;
  FPCGMetadataAttributeBase *local_e8;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [12];
  FName local_a4;
  byte *local_98;
  FMemScope local_90;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FName *local_58;
  FPCGMetadataAttributeBase **local_50;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_a4 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_90,&local_a4,true);
  iVar11 = 0;
  local_res18[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res18[0] = *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  iVar10 = -1;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  iVar12 = 0;
  puVar13 = &param_1->field_0x2a;
  local_98 = puVar13;
  if ((param_1->field_0x28 & 1) == 0) {
    iVar11 = *(int *)&(this->Attributes).field_0x28;
    local_d0 = &(this->Attributes).field_0x10;
    local_e0 = &this->Attributes;
    uStack_d4 = 1;
    iVar10 = 0;
    iStack_c4 = iVar12;
    local_c0 = iVar12;
    if (iVar11 != 0) {
      puVar14 = *(uint **)&(this->Attributes).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_d0;
      }
      uVar16 = *puVar14;
      local_c0 = 0;
      iVar12 = 0;
      while (uVar16 == 0) {
        lVar9 = (longlong)iVar12;
        local_c0 = local_c0 + 0x20;
        iVar12 = iVar12 + 1;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) {
          iVar10 = *(int *)&(this->Attributes).field_0x28;
          iStack_c4 = iVar11;
          goto LAB_149e8d0d8;
        }
        uVar16 = puVar14[lVar9 + 1];
      }
      iVar10 = *(int *)&(this->Attributes).field_0x28;
      uStack_d4 = -uVar16 & uVar16;
      uVar1 = (ulonglong)uStack_d4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_b0._4_4_ = (undefined4)lVar9;
      iStack_c4 = local_c0 + -1 + local_b0._4_4_;
      if (iVar10 < iStack_c4) {
        iStack_c4 = iVar11;
      }
    }
LAB_149e8d0d8:
    uVar16 = *(uint *)&(this->Attributes).field_0x28;
    iStack_b8 = *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_80._padding_ = CONCAT44(uStack_d4,iVar12);
    uStack_c8 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_c4;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar16 >> 5;
    TStack_80._28_4_ = iStack_c4;
    TStack_80.BaseBitIndex = local_c0;
    uStack_60 = CONCAT44(uStack_b4,iStack_b8);
    iStack_d8 = iVar12;
    iStack_bc = iStack_c4;
    local_88 = local_e0;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0;
    if ((((int)uVar16 < 0) || (iVar10 < (int)uVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pbVar6 = local_98;
    uVar2 = *(uint *)&(this->Attributes).field_0x28;
    if (uVar16 != uVar2) {
      puVar13 = *(undefined1 **)&(this->Attributes).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->Attributes).field_0x10;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
      while (uVar16 == 0) {
        lVar9 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_149e8d1e2;
        uVar16 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_b0._8_4_ = (undefined4)lVar9;
      uVar16 = local_b0._8_4_ + -1 + uVar15;
      if ((int)uVar2 < (int)uVar16) {
        uVar16 = uVar2;
      }
    }
LAB_149e8d1e2:
    while( true ) {
      pTVar7 = local_88;
      if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_80.CurrentBitIndex == uVar16) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Attributes).field_0x10
          )) && (pTVar7 == &this->Attributes)) break;
      lVar9 = *(longlong *)pTVar7 + (longlong)TStack_80.CurrentBitIndex * 0x18;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar9);
      local_f8[0] = (uint)*(short *)(*(longlong *)(lVar9 + 8) + 0x70);
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((*pbVar6 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_f8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_f8);
        }
      }
      else {
        local_f8[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      (**(code **)(**(longlong **)(lVar9 + 8) + 0x10))(*(longlong **)(lVar9 + 8),this,param_1);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
    iVar10 = -1;
  }
  else if (0 < (int)local_res18[0]) {
    do {
      local_f0.ComparisonIndex.Value = 0;
      local_f0.Number = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_f0);
      plVar3 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = 0;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((*puVar13 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
        }
      }
      else {
        local_res20[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      local_e8 = PCGMetadataAttribute::AllocateEmptyAttributeFromType((short)local_res20[0]);
      if (local_e8 == (FPCGMetadataAttributeBase *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6732401106661408937>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                           ,0xa9,"SerializedAttribute");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        local_e8->Name = local_f0;
        (**(code **)(local_e8->_padding_ + 0x10))(local_e8,this,param_1);
        local_58 = &local_f0;
        local_50 = &local_e8;
        TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&>_>
                  ((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                    *)&this->Attributes,
                   (TPairInitializer<FName_const_&,FPCGMetadataAttributeBase_*_const_&> *)local_b0,
                   (bool *)&local_58);
        if (iVar10 < local_e8->AttributeId) {
          iVar10 = local_e8->AttributeId;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)local_res18[0]);
  }
  lVar17 = 0;
  TArrayPrivateFriend::Serialize<__int64,TSizedDefaultAllocator<32>_>(param_1,&this->ParentKeys);
  if ((param_1->field_0x28 & 1) != 0) {
    this->NextAttributeId = iVar10 + 1;
    if ((iVar10 + 1 < *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34
        ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextAttributeId >= Attributes.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                                 ,199,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this->Parent;
    if (pFVar4 != (FPCGMetadataDomain *)0x0) {
      AcquireSRWLockShared((PSRWLOCK)&pFVar4->ItemLock);
      lVar17 = (longlong)(pFVar4->ParentKeys).ArrayNum + pFVar4->ItemKeyOffset;
      ReleaseSRWLockShared((PSRWLOCK)&pFVar4->ItemLock);
    }
    this->ItemKeyOffset = lVar17;
  }
  FMemScope::~FMemScope(&local_90);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetAttributeFromDataProperty @ 149e8dbd0

bool __thiscall
FPCGMetadataDomain::SetAttributeFromDataProperty
          (FPCGMetadataDomain *this,FName param_1,long64 *param_2,void *param_3,FProperty *param_4,
          bool param_5)

{
  bool bVar1;
  undefined7 uStack_37;
  <lambda_1> local_28;
  
  if (((param_4 == (FProperty *)0x0) || (param_3 == (void *)0x0)) ||
     (this == (FPCGMetadataDomain *)0x0)) {
    bVar1 = false;
  }
  else {
    if ((!param_5) && (bVar1 = HasAttribute(this,param_1), !bVar1)) {
      return false;
    }
    local_28._17_7_ = uStack_37;
    local_28.bCreate = param_5;
    local_28.AttributeName = param_1;
    local_28.Metadata = this;
    local_28.EntryKey = param_2;
    bVar1 = PCGPropertyHelpers::
            GetPropertyValueWithCallback<void,_PCGMetadata::SetAttributeFromPropertyHelper<void>_::__l2::<lambda_1>_>
                      (param_3,param_4,&local_28);
  }
  return bVar1;
}

// SetAttributeFromProperty @ 149e8dd60

bool __thiscall
FPCGMetadataDomain::SetAttributeFromProperty
          (FPCGMetadataDomain *this,FName param_1,long64 *param_2,UObject *param_3,
          FProperty *param_4,bool param_5)

{
  bool bVar1;
  undefined7 uStack_37;
  <lambda_1> local_28;
  
  if (((param_4 == (FProperty *)0x0) || (param_3 == (UObject *)0x0)) ||
     (this == (FPCGMetadataDomain *)0x0)) {
    bVar1 = false;
  }
  else {
    if ((!param_5) && (bVar1 = HasAttribute(this,param_1), !bVar1)) {
      return false;
    }
    local_28._17_7_ = uStack_37;
    local_28.bCreate = param_5;
    local_28.AttributeName = param_1;
    local_28.Metadata = this;
    local_28.EntryKey = param_2;
    bVar1 = PCGPropertyHelpers::
            GetPropertyValueWithCallback<UObject,_PCGMetadata::SetAttributeFromPropertyHelper<UObject>_::__l2::<lambda_1>_>
                      (param_3,param_4,&local_28);
  }
  return bVar1;
}

// SetAttributes @ 149e8e070

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGMetadataDomain::SetAttributes
          (FPCGMetadataDomain *this,TArrayView<__int64_const_,int> *param_1,
          FPCGMetadataDomain *param_2,TArrayView<__int64,int> *param_3,FPCGContext *param_4)

{
  FPlatformRWLock *SRWLock;
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  FPCGMetadataDomain *pFVar4;
  FPCGContext *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long64 *plVar9;
  ForElementType<__int64> FVar10;
  ForElementType<__int64> FVar11;
  longlong *plVar12;
  long64 lVar13;
  longlong *plVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  bool bVar24;
  <lambda_1> <Var25;
  undefined1 auStackY_11e8 [32];
  longlong lStack_1190;
  int aiStack_1188 [2];
  FPCGMetadataDomain *pFStack_1180;
  FPCGContext *pFStack_1178;
  TArrayView<__int64,int> *pTStack_1170;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_1168;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> TStack_1158;
  TPairInitializer<TTuple<__int64,__int64>_&&,int_&> TStack_1148;
  longlong lStack_1138;
  long64 lStack_1130;
  longlong *plStack_1128;
  int *piStack_1120;
  TArrayView<std::nullptr_t,int> TStack_1118;
  code *pcStack_1108;
  FPCGMetadataDomain **ppFStack_1100;
  FPCGMetadataDomain *pFStack_10f8;
  FPCGContext *pFStack_10f0;
  int iStack_10e8;
  FPCGMetadataDomain *pFStack_10e0;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTStack_10d8;
  ForElementType<__int64> *pFStack_10d0;
  ForElementType<__int64> *pFStack_10c8;
  TSet<TTuple<TTuple<__int64,__int64>,int>,TDefaultMapHashableKeyFuncs<TTuple<__int64,__int64>,int,0>,FDefaultSetAllocator>
  TStack_10b8;
  ForElementType<__int64> FStack_1068;
  uint uStack_860;
  uint uStack_85c;
  ForElementType<__int64> FStack_858;
  int iStack_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_11e8;
  pFStack_1178 = param_4;
  if (param_2 == (FPCGMetadataDomain *)0x0) {
    return;
  }
  pFStack_1180 = param_2;
  pTStack_1170 = param_3;
  AcquireSRWLockShared((PSRWLOCK)&param_2->AttributeLock);
  iVar22 = *(int *)&(param_2->Attributes).field_0x8;
  iVar8 = *(int *)&(param_2->Attributes).field_0x34;
  ReleaseSRWLockShared((PSRWLOCK)&param_2->AttributeLock);
  if (iVar22 == iVar8) {
    return;
  }
  SRWLock = &this->AttributeLock;
  TStack_1148.Value = (int *)SRWLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar22 = *(int *)&(this->Attributes).field_0x8;
  iVar8 = *(int *)&(this->Attributes).field_0x34;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if (iVar22 == iVar8) {
    return;
  }
  if (param_1->ArrayNum == 0) {
    return;
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1391,"FPCGSubMetadata::SetAttributes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
               ,0x56f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1391);
  }
  if (((param_3 != (TArrayView<__int64,int> *)0x0) && (param_1->ArrayNum != param_3->ArrayNum)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InOutOptionalKeys || (InOriginalKeys.Num() == InOutOptionalKeys->Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                         ,0x571,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar22 = 0;
  iStack_4c = 0x100;
  FStack_858.SecondaryData = (ForElementType<__int64>)0x0;
  FStack_1068.SecondaryData = (ForElementType<__int64>)0x0;
  iStack_50 = 0;
  uStack_860 = 0;
  uStack_85c = 0x100;
  if (param_3 != (TArrayView<__int64,int> *)0x0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1402,
                 "FPCGSubMetadata::SetAttributes::CreateDeduplicatedKeys",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                 ,0x57a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1402);
    }
    TStack_10b8.Elements._0_8_ = 0;
    TStack_10b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    TStack_10b8.Elements._8_8_ = 0;
    TStack_10b8.Elements._32_8_ = 0;
    TStack_10b8.Elements._40_4_ = 0;
    TStack_10b8.Elements._44_4_ = 0x80;
    TStack_10b8.Elements._48_4_ = 0xffffffff;
    TStack_10b8.Elements._52_4_ = 0;
    TStack_10b8.HashSize = 0;
    if (0 < param_1->ArrayNum) {
      do {
        plVar9 = TArrayView<__int64_const_,int>::operator[](param_1,iVar22);
        lStack_1190 = *plVar9;
        FVar10 = (ForElementType<__int64>)TArrayView<__int64,int>::operator[](param_3,iVar22);
        lVar15 = *(longlong *)FVar10;
        uVar21 = (int)((ulonglong)lStack_1190 >> 0x20) * 0x17 + (int)lStack_1190;
        if (TStack_10b8.Elements._8_4_ != TStack_10b8.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&TStack_10b8.Hash;
          if (TStack_10b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = TStack_10b8.Hash.SecondaryData;
          }
          iVar8 = *(int *)((longlong)FVar16 +
                          (ulonglong)
                          (TStack_10b8.HashSize - 1U &
                          (uVar21 * 0x40 + (int)lVar15 + (int)((ulonglong)lVar15 >> 0x20) * 0x17 +
                           (uVar21 >> 2) + 0x9e3779b9 ^ uVar21)) * 4);
          while (iVar8 != -1) {
            plVar14 = (longlong *)((longlong)iVar8 * 0x20 + TStack_10b8.Elements._0_8_);
            if ((*plVar14 == lStack_1190) && (plVar14[1] == lVar15)) {
              if (iVar8 != -1) {
                plVar12 = plVar14 + 2;
                if (plVar14 == (longlong *)0x0) {
                  plVar12 = (longlong *)0x0;
                }
                if (plVar12 != (longlong *)0x0) {
                  iVar8 = (int)*plVar12;
                  goto LAB_149e8e575;
                }
              }
              break;
            }
            iVar8 = (int)plVar14[3];
          }
        }
        FVar11 = (ForElementType<__int64>)&FStack_858;
        if (FStack_858.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = FStack_858.SecondaryData;
        }
        if ((ulonglong)FVar11 <= &lStack_1190) {
          FVar11 = (ForElementType<__int64>)&FStack_858;
          if (FStack_858.SecondaryData != (ForElementType<__int64>)0x0) {
            FVar11 = FStack_858.SecondaryData;
          }
          if ((&lStack_1190 < (longlong *)((longlong)FVar11 + (longlong)iStack_4c * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar8 = iStack_50;
        if (iStack_50 == iStack_4c) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                            (0x808,&FStack_858,&iStack_4c);
        }
        iStack_50 = iVar8 + 1;
        FVar11 = (ForElementType<__int64>)&FStack_858;
        if (FStack_858.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = FStack_858.SecondaryData;
        }
        *(longlong *)((longlong)FVar11 + (longlong)iVar8 * 8) = lStack_1190;
        lStack_1138 = lStack_1190;
        lStack_1130 = *(long64 *)FVar10;
        plStack_1128 = &lStack_1138;
        piStack_1120 = aiStack_1188;
        aiStack_1188[0] = iVar8;
        TSet<TTuple<TTuple<__int64,__int64>,int>,TDefaultMapHashableKeyFuncs<TTuple<__int64,__int64>,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TTuple<__int64,__int64>_&&,int_&>_>
                  (&TStack_10b8,&TStack_1148,(bool *)&plStack_1128);
        FVar11 = (ForElementType<__int64>)&FStack_1068;
        if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = FStack_1068.SecondaryData;
        }
        if ((ulonglong)FVar11 <= (ulonglong)FVar10) {
          FVar11 = (ForElementType<__int64>)&FStack_1068;
          if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
            FVar11 = FStack_1068.SecondaryData;
          }
          if (((ulonglong)FVar10 < (ulonglong)((longlong)FVar11 + (longlong)(int)uStack_85c * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (uStack_860 == uStack_85c) {
          uStack_860 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                 (0x808,&FStack_1068,(int *)&uStack_85c);
        }
        lVar15 = (longlong)(int)uStack_860;
        FVar11 = (ForElementType<__int64>)&FStack_1068;
        if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = FStack_1068.SecondaryData;
        }
        uStack_860 = uStack_860 + 1;
        *(long64 *)((longlong)FVar11 + lVar15 * 8) = *(long64 *)FVar10;
        iVar8 = aiStack_1188[0];
LAB_149e8e575:
        iVar22 = iVar22 + 1;
        *(longlong *)FVar10 = (longlong)iVar8;
        param_2 = pFStack_1180;
      } while (iVar22 < param_1->ArrayNum);
    }
    TStack_10b8.HashSize = 0;
    if (TStack_10b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)TStack_10b8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<__int64,__int64>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<__int64,__int64>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&TStack_10b8.Elements);
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_149e8e5b6;
  }
  iVar22 = param_1->ArrayNum;
  if (iVar22 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_149e8e65e:
    iVar8 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                      (8,8,iVar22,&FStack_858,&iStack_50,&iStack_4c);
    FVar10 = (ForElementType<__int64>)&FStack_858;
    if (FStack_858.SecondaryData != (ForElementType<__int64>)0x0) {
      FVar10 = FStack_858.SecondaryData;
    }
    memcpy((void *)((longlong)FVar10 + (longlong)iVar8 * 8),param_1->DataPtr,(longlong)iVar22 << 3);
  }
  else if (iVar22 != 0) goto LAB_149e8e65e;
  uVar21 = param_1->ArrayNum;
  uVar17 = (ulonglong)uVar21;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar17);
  }
  if (uStack_85c != uVar21) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
              (8,8,uVar21,&FStack_1068,0,(int *)&uStack_85c);
  }
  if (0 < (int)uVar21) {
    do {
      FVar10 = (ForElementType<__int64>)&FStack_1068;
      if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = FStack_1068.SecondaryData;
      }
      if ((ulonglong)FVar10 < 0x151fdc5f9) {
        FVar10 = (ForElementType<__int64>)&FStack_1068;
        if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar10 = FStack_1068.SecondaryData;
        }
        if ((&PCGInvalidEntryKey < (long64 *)((longlong)FVar10 + (longlong)(int)uStack_85c * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uStack_860 == uStack_85c) {
        uStack_860 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                               (0x808,&FStack_1068,(int *)&uStack_85c);
      }
      lVar15 = (longlong)(int)uStack_860;
      uStack_860 = uStack_860 + 1;
      FVar10 = (ForElementType<__int64>)&FStack_1068;
      if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = FStack_1068.SecondaryData;
      }
      *(long64 *)((longlong)FVar10 + lVar15 * 8) = -1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
LAB_149e8e5b6:
  uVar17 = 0;
  <Var25 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1431,"FPCGSubMetadata::SetAttributes::InitializeOnSet",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
               ,0x597);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1431);
  }
  pFVar4 = pFStack_1180;
  uVar23 = uVar17;
  if (0 < iStack_50) {
    do {
      uVar19 = (uint)uVar17;
      uVar21 = 0;
      if ((int)uVar19 < iStack_50) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar10 = (ForElementType<__int64>)&FStack_858;
      if (FStack_858.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = FStack_858.SecondaryData;
      }
      lVar15 = *(longlong *)(uVar23 + (longlong)FVar10);
      uVar21 = 0;
      if ((int)uVar19 < (int)uStack_860) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar10 = (ForElementType<__int64>)&FStack_1068;
      if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = FStack_1068.SecondaryData;
      }
      lVar2 = *(longlong *)((longlong)FVar10 + uVar23);
      if (lVar2 == -1) {
        if ((lVar15 == -1) || (this->Parent != pFVar4)) {
          lVar15 = -1;
        }
LAB_149e8e948:
        lVar13 = AddEntry(this,lVar15);
        *(longlong *)((longlong)FVar10 + uVar23) = lVar13;
      }
      else {
        lVar15 = lVar2;
        if (lVar2 < this->ItemKeyOffset) goto LAB_149e8e948;
      }
      uVar17 = (ulonglong)(uVar19 + 1);
      param_2 = pFStack_1180;
      uVar23 = uVar23 + 8;
    } while ((int)(uVar19 + 1) < iStack_50);
  }
  if ((bool)<Var25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  pFVar5 = pFStack_1178;
  iVar8 = 0;
  iVar22 = 1;
  if (((pFStack_1178 != (FPCGContext *)0x0) &&
      (iVar20 = (pFStack_1178->AsyncState).NumAvailableTasks, iVar22 = 0x40, 0 < iVar20)) &&
     (iVar20 < 0x40)) {
    iVar22 = iVar20;
  }
  if (0 < *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34) {
    do {
      TStack_1168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_1158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_1168.ArrayNum = 0;
      TStack_1168.ArrayMax = 0;
      TStack_1158.ArrayNum = 0;
      TStack_1158.ArrayMax = 0;
      GetAttributes(this,&TStack_1168,&TStack_1158);
      pTStack_10d8 = &TStack_1168;
      iVar20 = (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34) -
               iVar8;
      pFStack_10d0 = &FStack_858;
      pFStack_10c8 = &FStack_1068;
      pFStack_10f0 = pFVar5;
      if (iVar22 < iVar20) {
        iVar20 = iVar22;
      }
      TStack_1118.DataPtr = (void **)0x0;
      pcStack_1108 = UE::Core::Private::Function::
                     TFunctionRefCaller<`FPCGMetadataDomain::SetAttributes'::__l32::<lambda_1>,void,int>
                     ::Call;
      ppFStack_1100 = &pFStack_10f8;
      TStack_1118.ArrayNum = 0;
      pFStack_10f8 = this;
      iStack_10e8 = iVar8;
      pFStack_10e0 = param_2;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar20,1,(TFunctionRef<void___cdecl(int)> *)&pcStack_1108,
                 <Var25,None,&TStack_1118);
      iVar8 = iVar8 + iVar20;
      if (TStack_1158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_1158.AllocatorInstance.Data);
      }
      if (TStack_1168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_1168.AllocatorInstance.Data);
      }
    } while (iVar8 < *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34)
    ;
  }
  ReleaseSRWLockShared((PSRWLOCK)TStack_1148.Value);
  if (pTStack_1170 != (TArrayView<__int64,int> *)0x0) {
    puVar18 = (uint *)pTStack_1170->DataPtr;
    puVar1 = puVar18 + (longlong)pTStack_1170->ArrayNum * 2;
    for (; puVar18 != puVar1; puVar18 = puVar18 + 2) {
      uVar21 = *puVar18;
      uVar19 = 0;
      if ((int)uVar21 < (int)uStack_860) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar10 = (ForElementType<__int64>)&FStack_1068;
      if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = FStack_1068.SecondaryData;
      }
      *(long64 *)puVar18 = *(long64 *)((longlong)FVar10 + (longlong)(int)uVar21 * 8);
    }
  }
  if (FStack_1068.SecondaryData != (ForElementType<__int64>)0x0) {
    FMemory::Free((void *)FStack_1068.SecondaryData);
  }
  if (FStack_858.SecondaryData != (ForElementType<__int64>)0x0) {
    FMemory::Free((void *)FStack_858.SecondaryData);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetAttributes @ 149e8e080

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGMetadataDomain::SetAttributes
          (FPCGMetadataDomain *this,TArrayView<__int64_const_,int> *param_1,
          FPCGMetadataDomain *param_2,TArrayView<__int64,int> *param_3,FPCGContext *param_4)

{
  FPlatformRWLock *SRWLock;
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  FPCGMetadataDomain *pFVar4;
  FPCGContext *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long64 *plVar9;
  ForElementType<__int64> FVar10;
  ForElementType<__int64> FVar11;
  longlong *plVar12;
  long64 lVar13;
  longlong *plVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  bool bVar24;
  <lambda_1> <Var25;
  undefined1 auStackY_11e8 [32];
  longlong local_1190;
  int local_1188 [2];
  FPCGMetadataDomain *local_1180;
  FPCGContext *local_1178;
  TArrayView<__int64,int> *local_1170;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1168;
  TArray<EPCGMetadataTypes,TSizedDefaultAllocator<32>_> local_1158;
  TPairInitializer<TTuple<__int64,__int64>_&&,int_&> local_1148;
  longlong local_1138;
  long64 local_1130;
  longlong *local_1128;
  int *local_1120;
  TArrayView<std::nullptr_t,int> local_1118;
  code *local_1108;
  FPCGMetadataDomain **local_1100;
  FPCGMetadataDomain *local_10f8;
  FPCGContext *local_10f0;
  int local_10e8;
  FPCGMetadataDomain *local_10e0;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_10d8;
  ForElementType<__int64> *local_10d0;
  ForElementType<__int64> *local_10c8;
  TSet<TTuple<TTuple<__int64,__int64>,int>,TDefaultMapHashableKeyFuncs<TTuple<__int64,__int64>,int,0>,FDefaultSetAllocator>
  local_10b8;
  ForElementType<__int64> local_1068;
  uint local_860;
  uint local_85c;
  ForElementType<__int64> local_858;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_11e8;
  local_1178 = param_4;
  if (param_2 == (FPCGMetadataDomain *)0x0) {
    return;
  }
  local_1180 = param_2;
  local_1170 = param_3;
  AcquireSRWLockShared((PSRWLOCK)&param_2->AttributeLock);
  iVar22 = *(int *)&(param_2->Attributes).field_0x8;
  iVar8 = *(int *)&(param_2->Attributes).field_0x34;
  ReleaseSRWLockShared((PSRWLOCK)&param_2->AttributeLock);
  if (iVar22 == iVar8) {
    return;
  }
  SRWLock = &this->AttributeLock;
  local_1148.Value = (int *)SRWLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar22 = *(int *)&(this->Attributes).field_0x8;
  iVar8 = *(int *)&(this->Attributes).field_0x34;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if (iVar22 == iVar8) {
    return;
  }
  if (param_1->ArrayNum == 0) {
    return;
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1391,"FPCGSubMetadata::SetAttributes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
               ,0x56f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1391);
  }
  if (((param_3 != (TArrayView<__int64,int> *)0x0) && (param_1->ArrayNum != param_3->ArrayNum)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InOutOptionalKeys || (InOriginalKeys.Num() == InOutOptionalKeys->Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                         ,0x571,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar22 = 0;
  local_4c = 0x100;
  local_858.SecondaryData = (ForElementType<__int64>)0x0;
  local_1068.SecondaryData = (ForElementType<__int64>)0x0;
  local_50 = 0;
  local_860 = 0;
  local_85c = 0x100;
  if (param_3 != (TArrayView<__int64,int> *)0x0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1402,
                 "FPCGSubMetadata::SetAttributes::CreateDeduplicatedKeys",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
                 ,0x57a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1402);
    }
    local_10b8.Elements._0_8_ = 0;
    local_10b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_10b8.Elements._8_8_ = 0;
    local_10b8.Elements._32_8_ = 0;
    local_10b8.Elements._40_4_ = 0;
    local_10b8.Elements._44_4_ = 0x80;
    local_10b8.Elements._48_4_ = 0xffffffff;
    local_10b8.Elements._52_4_ = 0;
    local_10b8.HashSize = 0;
    if (0 < param_1->ArrayNum) {
      do {
        plVar9 = TArrayView<__int64_const_,int>::operator[](param_1,iVar22);
        local_1190 = *plVar9;
        FVar10 = (ForElementType<__int64>)TArrayView<__int64,int>::operator[](param_3,iVar22);
        lVar15 = *(longlong *)FVar10;
        uVar21 = (int)((ulonglong)local_1190 >> 0x20) * 0x17 + (int)local_1190;
        if (local_10b8.Elements._8_4_ != local_10b8.Elements._52_4_) {
          FVar16 = (ForElementType<FSetElementId>)&local_10b8.Hash;
          if (local_10b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_10b8.Hash.SecondaryData;
          }
          iVar8 = *(int *)((longlong)FVar16 +
                          (ulonglong)
                          (local_10b8.HashSize - 1U &
                          (uVar21 * 0x40 + (int)lVar15 + (int)((ulonglong)lVar15 >> 0x20) * 0x17 +
                           (uVar21 >> 2) + 0x9e3779b9 ^ uVar21)) * 4);
          while (iVar8 != -1) {
            plVar14 = (longlong *)((longlong)iVar8 * 0x20 + local_10b8.Elements._0_8_);
            if ((*plVar14 == local_1190) && (plVar14[1] == lVar15)) {
              if (iVar8 != -1) {
                plVar12 = plVar14 + 2;
                if (plVar14 == (longlong *)0x0) {
                  plVar12 = (longlong *)0x0;
                }
                if (plVar12 != (longlong *)0x0) {
                  iVar8 = (int)*plVar12;
                  goto LAB_149e8e575;
                }
              }
              break;
            }
            iVar8 = (int)plVar14[3];
          }
        }
        FVar11 = (ForElementType<__int64>)&local_858;
        if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = local_858.SecondaryData;
        }
        if ((ulonglong)FVar11 <= &local_1190) {
          FVar11 = (ForElementType<__int64>)&local_858;
          if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
            FVar11 = local_858.SecondaryData;
          }
          if ((&local_1190 < (longlong *)((longlong)FVar11 + (longlong)local_4c * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar8 = local_50;
        if (local_50 == local_4c) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                            (0x808,&local_858,&local_4c);
        }
        local_50 = iVar8 + 1;
        FVar11 = (ForElementType<__int64>)&local_858;
        if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = local_858.SecondaryData;
        }
        *(longlong *)((longlong)FVar11 + (longlong)iVar8 * 8) = local_1190;
        local_1138 = local_1190;
        local_1130 = *(long64 *)FVar10;
        local_1128 = &local_1138;
        local_1120 = local_1188;
        local_1188[0] = iVar8;
        TSet<TTuple<TTuple<__int64,__int64>,int>,TDefaultMapHashableKeyFuncs<TTuple<__int64,__int64>,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TTuple<__int64,__int64>_&&,int_&>_>
                  (&local_10b8,&local_1148,(bool *)&local_1128);
        FVar11 = (ForElementType<__int64>)&local_1068;
        if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = local_1068.SecondaryData;
        }
        if ((ulonglong)FVar11 <= (ulonglong)FVar10) {
          FVar11 = (ForElementType<__int64>)&local_1068;
          if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
            FVar11 = local_1068.SecondaryData;
          }
          if (((ulonglong)FVar10 < (ulonglong)((longlong)FVar11 + (longlong)(int)local_85c * 8)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (local_860 == local_85c) {
          local_860 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                                (0x808,&local_1068,(int *)&local_85c);
        }
        lVar15 = (longlong)(int)local_860;
        FVar11 = (ForElementType<__int64>)&local_1068;
        if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar11 = local_1068.SecondaryData;
        }
        local_860 = local_860 + 1;
        *(long64 *)((longlong)FVar11 + lVar15 * 8) = *(long64 *)FVar10;
        iVar8 = local_1188[0];
LAB_149e8e575:
        iVar22 = iVar22 + 1;
        *(longlong *)FVar10 = (longlong)iVar8;
        param_2 = local_1180;
      } while (iVar22 < param_1->ArrayNum);
    }
    local_10b8.HashSize = 0;
    if (local_10b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_10b8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<TTuple<__int64,__int64>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TTuple<__int64,__int64>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_10b8.Elements);
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    goto LAB_149e8e5b6;
  }
  iVar22 = param_1->ArrayNum;
  if (iVar22 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
LAB_149e8e65e:
    iVar8 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                      (8,8,iVar22,&local_858,&local_50,&local_4c);
    FVar10 = (ForElementType<__int64>)&local_858;
    if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
      FVar10 = local_858.SecondaryData;
    }
    memcpy((void *)((longlong)FVar10 + (longlong)iVar8 * 8),param_1->DataPtr,(longlong)iVar22 << 3);
  }
  else if (iVar22 != 0) goto LAB_149e8e65e;
  uVar21 = param_1->ArrayNum;
  uVar17 = (ulonglong)uVar21;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar17);
  }
  if (local_85c != uVar21) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
              (8,8,uVar21,&local_1068,0,(int *)&local_85c);
  }
  if (0 < (int)uVar21) {
    do {
      FVar10 = (ForElementType<__int64>)&local_1068;
      if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = local_1068.SecondaryData;
      }
      if ((ulonglong)FVar10 < 0x151fdc5f9) {
        FVar10 = (ForElementType<__int64>)&local_1068;
        if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
          FVar10 = local_1068.SecondaryData;
        }
        if ((&PCGInvalidEntryKey < (long64 *)((longlong)FVar10 + (longlong)(int)local_85c * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_860 == local_85c) {
        local_860 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
                              (0x808,&local_1068,(int *)&local_85c);
      }
      lVar15 = (longlong)(int)local_860;
      local_860 = local_860 + 1;
      FVar10 = (ForElementType<__int64>)&local_1068;
      if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = local_1068.SecondaryData;
      }
      *(long64 *)((longlong)FVar10 + lVar15 * 8) = -1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
LAB_149e8e5b6:
  uVar17 = 0;
  <Var25 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1431,"FPCGSubMetadata::SetAttributes::InitializeOnSet",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Metadata\\PCGMetadataDomain.cpp"
               ,0x597);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1431);
  }
  pFVar4 = local_1180;
  uVar23 = uVar17;
  if (0 < local_50) {
    do {
      uVar19 = (uint)uVar17;
      uVar21 = 0;
      if ((int)uVar19 < local_50) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar10 = (ForElementType<__int64>)&local_858;
      if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = local_858.SecondaryData;
      }
      lVar15 = *(longlong *)(uVar23 + (longlong)FVar10);
      uVar21 = 0;
      if ((int)uVar19 < (int)local_860) {
        uVar21 = ~uVar19 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar10 = (ForElementType<__int64>)&local_1068;
      if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = local_1068.SecondaryData;
      }
      lVar2 = *(longlong *)((longlong)FVar10 + uVar23);
      if (lVar2 == -1) {
        if ((lVar15 == -1) || (this->Parent != pFVar4)) {
          lVar15 = -1;
        }
LAB_149e8e948:
        lVar13 = AddEntry(this,lVar15);
        *(longlong *)((longlong)FVar10 + uVar23) = lVar13;
      }
      else {
        lVar15 = lVar2;
        if (lVar2 < this->ItemKeyOffset) goto LAB_149e8e948;
      }
      uVar17 = (ulonglong)(uVar19 + 1);
      param_2 = local_1180;
      uVar23 = uVar23 + 8;
    } while ((int)(uVar19 + 1) < local_50);
  }
  if ((bool)<Var25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  AcquireSRWLockShared((PSRWLOCK)&this->AttributeLock);
  pFVar5 = local_1178;
  iVar8 = 0;
  iVar22 = 1;
  if (((local_1178 != (FPCGContext *)0x0) &&
      (iVar20 = (local_1178->AsyncState).NumAvailableTasks, iVar22 = 0x40, 0 < iVar20)) &&
     (iVar20 < 0x40)) {
    iVar22 = iVar20;
  }
  if (0 < *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34) {
    do {
      local_1168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1168.ArrayNum = 0;
      local_1168.ArrayMax = 0;
      local_1158.ArrayNum = 0;
      local_1158.ArrayMax = 0;
      GetAttributes(this,&local_1168,&local_1158);
      local_10d8 = &local_1168;
      iVar20 = (*(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34) -
               iVar8;
      local_10d0 = &local_858;
      local_10c8 = &local_1068;
      local_10f0 = pFVar5;
      if (iVar22 < iVar20) {
        iVar20 = iVar22;
      }
      local_1118.DataPtr = (void **)0x0;
      local_1108 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FPCGMetadataDomain::SetAttributes'::__l32::<lambda_1>,void,int>
                   ::Call;
      local_1100 = &local_10f8;
      local_1118.ArrayNum = 0;
      local_10f8 = this;
      local_10e8 = iVar8;
      local_10e0 = param_2;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar20,1,(TFunctionRef<void___cdecl(int)> *)&local_1108,<Var25,
                 None,&local_1118);
      iVar8 = iVar8 + iVar20;
      if (local_1158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1158.AllocatorInstance.Data);
      }
      if (local_1168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1168.AllocatorInstance.Data);
      }
    } while (iVar8 < *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34)
    ;
  }
  ReleaseSRWLockShared((PSRWLOCK)local_1148.Value);
  if (local_1170 != (TArrayView<__int64,int> *)0x0) {
    puVar18 = (uint *)local_1170->DataPtr;
    puVar1 = puVar18 + (longlong)local_1170->ArrayNum * 2;
    for (; puVar18 != puVar1; puVar18 = puVar18 + 2) {
      uVar21 = *puVar18;
      uVar19 = 0;
      if ((int)uVar21 < (int)local_860) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar10 = (ForElementType<__int64>)&local_1068;
      if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
        FVar10 = local_1068.SecondaryData;
      }
      *(long64 *)puVar18 = *(long64 *)((longlong)FVar10 + (longlong)(int)uVar21 * 8);
    }
  }
  if (local_1068.SecondaryData != (ForElementType<__int64>)0x0) {
    FMemory::Free((void *)local_1068.SecondaryData);
  }
  if (local_858.SecondaryData != (ForElementType<__int64>)0x0) {
    FMemory::Free((void *)local_858.SecondaryData);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetAttributes @ 149e8ebe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPCGMetadataDomain::SetAttributes
          (FPCGMetadataDomain *this,long64 param_1,FPCGMetadataDomain *param_2,long64 *param_3)

{
  FName *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  FName FVar5;
  code *pcVar6;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *pTVar7;
  bool bVar8;
  long64 lVar9;
  TTuple<FName,FPCGMetadataAttributeBase_*> *pTVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  uint *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 local_d8 [8];
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_98;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  FPlatformRWLock *local_88;
  TMap<FName,FPCGMetadataAttributeBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString local_50;
  
  if (param_2 == (FPCGMetadataDomain *)0x0) {
    return;
  }
  lVar11 = *param_3;
  if (lVar11 == -1) {
    if ((param_1 != -1) && (this->Parent == param_2)) {
      lVar9 = AddEntry(this,param_1);
      *param_3 = lVar9;
      return;
    }
    lVar11 = -1;
  }
  else if (this->ItemKeyOffset <= lVar11) goto LAB_149e8ec5a;
  lVar9 = AddEntry(this,lVar11);
  *param_3 = lVar9;
LAB_149e8ec5a:
  local_88 = &this->AttributeLock;
  AcquireSRWLockShared((PSRWLOCK)local_88);
  iVar2 = *(int *)&(this->Attributes).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Attributes).field_0x10;
  local_d0 = &this->Attributes;
  iStack_c8 = 0;
  uStack_c4 = 1;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar2 != 0) {
    puVar18 = *(uint **)&(this->Attributes).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)pTVar19;
    }
    uVar15 = *puVar18;
    local_b0 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_149e8ed1e;
      uVar15 = puVar18[lVar11 + 1];
    }
    uStack_c4 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_c4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_a0 = (int)lVar11;
    iStack_b4 = local_b0 + -1 + local_a0;
    if (iVar2 < iStack_b4) {
      iStack_b4 = iVar2;
    }
  }
LAB_149e8ed1e:
  iStack_a8 = *(int *)&(this->Attributes).field_0x8 - *(int *)&(this->Attributes).field_0x34;
  uVar15 = *(uint *)&(this->Attributes).field_0x28;
  uStack_b8 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_c4,iStack_c8);
  uVar14 = uVar15 & 0xffffffe0;
  TStack_78.CurrentBitIndex = iStack_b4;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_78._28_4_ = iStack_b4;
  TStack_78.BaseBitIndex = local_b0;
  uStack_58 = CONCAT44(uStack_a4,iStack_a8);
  local_c0 = (undefined1 *)pTVar19;
  iStack_ac = iStack_b4;
  local_98 = local_d0;
  local_90 = pTVar19;
  local_80 = local_d0;
  TStack_78.Array = pTVar19;
  if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->Attributes).field_0x28;
  if (uVar15 != uVar3) {
    puVar17 = *(undefined1 **)&(this->Attributes).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = (undefined1 *)pTVar19;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_149e8ee20;
      uVar15 = *(uint *)(puVar17 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_149e8ee20:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPCGMetadataAttributeBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (((TStack_78.CurrentBitIndex == uVar15) && (TStack_78.Array == pTVar19)) &&
       (pTVar7 == local_98)) break;
    puVar16 = (undefined8 *)0x0;
    lVar11 = *(longlong *)pTVar7;
    plVar4 = *(longlong **)(lVar11 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    this_00 = (FName *)(lVar11 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    FVar5 = *this_00;
    AcquireSRWLockShared((PSRWLOCK)&param_2->AttributeLock);
    pTVar10 = TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FPCGMetadataAttributeBase_*>,TDefaultMapHashableKeyFuncs<FName,FPCGMetadataAttributeBase_*,0>,FDefaultSetAllocator>
                      *)&param_2->Attributes,FVar5);
    puVar12 = (undefined8 *)&pTVar10->field_0x8;
    if (pTVar10 == (TTuple<FName,FPCGMetadataAttributeBase_*> *)0x0) {
      puVar12 = puVar16;
    }
    if (puVar12 != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)*puVar12;
    }
    ReleaseSRWLockShared((PSRWLOCK)&param_2->AttributeLock);
    if (puVar16 != (undefined8 *)0x0) {
      if (*(short *)(puVar16 + 0xe) == (short)plVar4[0xe]) {
        (**(code **)(*plVar4 + 0x58))(plVar4,*param_3,puVar16,param_1);
      }
      else if (1 < (byte)LogPCG._0_1_) {
        ::FName::ToString(this_00,&local_50);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    pTVar19 = local_90;
  }
  ReleaseSRWLockShared((PSRWLOCK)local_88);
  return;
}

// SetLastCachedSelectorOnOwner @ 149e8f640

void __thiscall
FPCGMetadataDomain::SetLastCachedSelectorOnOwner(FPCGMetadataDomain *this,FName param_1)

{
  int iVar1;
  UPCGMetadata *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined8 local_58;
  FName FStack_50;
  undefined **local_48;
  undefined8 local_40;
  undefined4 local_38;
  FName local_34;
  undefined8 local_2c;
  FString *local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  pUVar2 = this->TopMetadata;
  local_58._0_1_ = (this->DomainID).Flag;
  local_58._1_3_ = *(undefined3 *)&(this->DomainID).field_0x1;
  local_58._4_4_ = (this->DomainID).CustomFlag;
  FStack_50 = (this->DomainID).DebugName;
  plVar4 = (longlong *)pUVar2->_padding_;
  if (plVar4 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGData_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar4[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_149e8f695;
  }
  plVar4 = (longlong *)0x0;
LAB_149e8f695:
  if (plVar4 != (longlong *)0x0) {
    local_40 = 0;
    local_48 = &___7FPCGAttributePropertyInputSelector__6B_;
    local_38 = 0;
    local_2c = 0;
    local_34 = PCGMetadataAttributeConstants::LastAttributeName;
    if (PCGMetadataAttributeConstants::LastAttributeName != param_1) {
      local_34 = param_1;
    }
    local_20 = (FString *)0x0;
    local_18 = 0;
    local_10 = 0;
    if (((EPCGMetadataDomainFlag)local_58 != Default) &&
       (((EPCGMetadataDomainFlag)local_58 != (pUVar2->DefaultDomain).Flag ||
        (local_58._4_4_ != (pUVar2->DefaultDomain).CustomFlag)))) {
      (**(code **)(*plVar4 + 0x350))(plVar4,&local_58,&local_48);
    }
    (**(code **)(*plVar4 + 0x308))(plVar4,&local_48);
    DestructItems<FString,int>(local_20,(int)local_18);
    if (local_20 != (FString *)0x0) {
      FMemory::Free(local_20);
    }
  }
  return;
}

