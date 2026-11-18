// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 11

// operator!= @ 14dae92c0

bool __thiscall
TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!=(TRangedForIterator *this,TRangedForIterator *param_1)

{
  undefined1 local_res8 [8];
  
  if (*(int *)(this->_padding_ + 8) - *(int *)(this->_padding_ + 0x34) != this->InitialNum) {
    `TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((*(int *)((longlong)&this->_padding_ + 4) == *(int *)((longlong)&param_1->_padding_ + 4)) &&
      (this->_padding_ == param_1->_padding_)) && (this->_padding_ == param_1->_padding_)) {
    return false;
  }
  return true;
}

// operator() @ 150589d60

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,class_TArray<class_Chaos::TPBDRigidParticleHandleImp<double,3,1>*___ptr64,class_TSizedDefaultAllocator<32>_>_>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589da0

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsSolverEvents_*,FPerSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<Chaos::FPhysicsSolverEvents*___ptr64,FPerSolverData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_Chaos::FPhysicsSolverEvents*___ptr64,struct_FPerSolverData>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589de0

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase*___ptr64,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_IPhysicsProxyBase*___ptr64,struct_Chaos::FCachedEventData>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589e20

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_FName,struct_UE::Math::TTransform<double>_>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589e60

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_FName,struct_FCacheEventTrack>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589ea0

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FName,FParticleTransformTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FName,FParticleTransformTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_FName,struct_FParticleTransformTrack>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589ee0

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_FName,struct_FRichCurve>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589f20

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FName,FRichCurves>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_FName,struct_FRichCurves>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589f60

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_FName,class_TArray<float,class_TSizedDefaultAllocator<32>_>_>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150589fa0

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<class_FName,class_TArray<struct_FCacheEventTrack::FHandle,class_TSizedDefaultAllocator<32>_>_>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

