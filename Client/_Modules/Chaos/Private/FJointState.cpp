// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ToString @ 1440f4370

FString * __thiscall Chaos::FJointState::ToString(FJointState *this,FString *__return_storage_ptr__)

{
  FPBDJointSettings *pFVar1;
  int iVar2;
  FString local_648;
  FString local_638;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FPBDJointConstraintHandle::GetConstrainedParticles(this->Head,&local_628);
  TGeometryParticlesImp<double,3,0>::ParticleID
            ((TGeometryParticlesImp<double,3,0> *)local_628.V[1]->_padding_,
             (int)local_628.V[1]->_padding_);
  TGeometryParticlesImp<double,3,0>::ParticleID
            ((TGeometryParticlesImp<double,3,0> *)local_628.V[1]->_padding_,
             (int)local_628.V[1]->_padding_);
  TGeometryParticlesImp<double,3,0>::ParticleID
            ((TGeometryParticlesImp<double,3,0> *)local_628.V[0]->_padding_,
             (int)local_628.V[0]->_padding_);
  TGeometryParticlesImp<double,3,0>::ParticleID
            ((TGeometryParticlesImp<double,3,0> *)local_628.V[0]->_padding_,
             (int)local_628.V[0]->_padding_);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"Joint: Particle0 ID:[Global: %d Local: %d] Particle1 ID:[Global: %d Local: %d]\n");
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    pFVar1 = FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  UE::Math::TTransform<double>::ToString
            ((TTransform<double> *)((pFVar1->ConnectorTransforms).V + 1),&local_38);
  UE::Math::TTransform<double>::ToString((TTransform<double> *)pFVar1,&local_48);
  ::FString::PrintfImpl(&local_58,L"(%s, %s)");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_68,L"JointTransforms:%s\n");
  iVar2 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_608,L"%d");
  ::FString::PrintfImpl(&local_618,L"CollisionEnabled:%s\n");
  iVar2 = local_618.Data.ArrayNum + -1;
  if (local_618.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_618.Data.AllocatorInstance.Data,iVar2);
  if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data.AllocatorInstance.Data);
  }
  if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_5e8,L"%d");
  ::FString::PrintfImpl(&local_5f8,L"ProjectionEnabled:%s\n");
  iVar2 = local_5f8.Data.ArrayNum + -1;
  if (local_5f8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_5f8.Data.AllocatorInstance.Data,iVar2);
  if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
  }
  if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_5c8,L"%d");
  ::FString::PrintfImpl(&local_5d8,L"ShockPropagationEnabled:%s\n");
  iVar2 = local_5d8.Data.ArrayNum + -1;
  if (local_5d8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_5d8.Data.AllocatorInstance.Data,iVar2);
  if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_5a8,L"%d");
  ::FString::PrintfImpl(&local_5b8,L"MassConditioningEnabled:%s\n");
  iVar2 = local_5b8.Data.ArrayNum + -1;
  if (local_5b8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_5b8.Data.AllocatorInstance.Data,iVar2);
  if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
  }
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_588,L"%d");
  ::FString::PrintfImpl(&local_598,L"UseLinearSolver:%s\n");
  iVar2 = local_598.Data.ArrayNum + -1;
  if (local_598.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_598.Data.AllocatorInstance.Data,iVar2);
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_568,L"%f");
  ::FString::PrintfImpl(&local_578,L"ProjectionLinearAlpha:%s\n");
  iVar2 = local_578.Data.ArrayNum + -1;
  if (local_578.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_578.Data.AllocatorInstance.Data,iVar2);
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_548,L"%f");
  ::FString::PrintfImpl(&local_558,L"ProjectionAngularAlpha:%s\n");
  iVar2 = local_558.Data.ArrayNum + -1;
  if (local_558.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_558.Data.AllocatorInstance.Data,iVar2);
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_528,L"%f");
  ::FString::PrintfImpl(&local_538,L"ProjectionLinearTolerance:%s\n");
  iVar2 = local_538.Data.ArrayNum + -1;
  if (local_538.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_538.Data.AllocatorInstance.Data,iVar2);
  if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.Data.AllocatorInstance.Data);
  }
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_508,L"%f");
  ::FString::PrintfImpl(&local_518,L"ProjectionAngularTolerance:%s\n");
  iVar2 = local_518.Data.ArrayNum + -1;
  if (local_518.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_518.Data.AllocatorInstance.Data,iVar2);
  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.Data.AllocatorInstance.Data);
  }
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_4e8,L"%f");
  ::FString::PrintfImpl(&local_4f8,L"ShockPropagationAlpha:%s\n");
  iVar2 = local_4f8.Data.ArrayNum + -1;
  if (local_4f8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_4f8.Data.AllocatorInstance.Data,iVar2);
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_4c8,L"%f");
  ::FString::PrintfImpl(&local_4d8,L"ParentInvMassScale:%s\n");
  iVar2 = local_4d8.Data.ArrayNum + -1;
  if (local_4d8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_4d8.Data.AllocatorInstance.Data,iVar2);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_4a8,L"%f");
  ::FString::PrintfImpl(&local_4b8,L"LinearBreakForce:%s\n");
  iVar2 = local_4b8.Data.ArrayNum + -1;
  if (local_4b8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_4b8.Data.AllocatorInstance.Data,iVar2);
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_488,L"%f");
  ::FString::PrintfImpl(&local_498,L"LinearViolationCallbackThreshold:%s\n");
  iVar2 = local_498.Data.ArrayNum + -1;
  if (local_498.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_498.Data.AllocatorInstance.Data,iVar2);
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_468,L"%f");
  ::FString::PrintfImpl(&local_478,L"LinearPlasticityLimit:%s\n");
  iVar2 = local_478.Data.ArrayNum + -1;
  if (local_478.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_478.Data.AllocatorInstance.Data,iVar2);
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_448,L"%d");
  ::FString::PrintfImpl(&local_458,L"LinearPlasticityType:%s\n");
  iVar2 = local_458.Data.ArrayNum + -1;
  if (local_458.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_458.Data.AllocatorInstance.Data,iVar2);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_428,L"%f");
  ::FString::PrintfImpl(&local_438,L"AngularBreakTorque:%s\n");
  iVar2 = local_438.Data.ArrayNum + -1;
  if (local_438.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_438.Data.AllocatorInstance.Data,iVar2);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_408,L"%f");
  ::FString::PrintfImpl(&local_418,L"AngularViolationCallbackThreshold:%s\n");
  iVar2 = local_418.Data.ArrayNum + -1;
  if (local_418.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_418.Data.AllocatorInstance.Data,iVar2);
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_3e8,L"%f");
  ::FString::PrintfImpl(&local_3f8,L"AngularPlasticityLimit:%s\n");
  iVar2 = local_3f8.Data.ArrayNum + -1;
  if (local_3f8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_3f8.Data.AllocatorInstance.Data,iVar2);
  if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
  }
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_3d8,L"UserData:%s\n");
  iVar2 = local_3d8.Data.ArrayNum + -1;
  if (local_3d8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_3d8.Data.AllocatorInstance.Data,iVar2);
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_3b8,L"%d");
  ::FString::PrintfImpl(&local_3c8,L"LinearPositionDriveXEnabled:%s\n");
  iVar2 = local_3c8.Data.ArrayNum + -1;
  if (local_3c8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_3c8.Data.AllocatorInstance.Data,iVar2);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_398,L"%d");
  ::FString::PrintfImpl(&local_3a8,L"LinearPositionDriveYEnabled:%s\n");
  iVar2 = local_3a8.Data.ArrayNum + -1;
  if (local_3a8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_3a8.Data.AllocatorInstance.Data,iVar2);
  if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
  }
  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_378,L"%d");
  ::FString::PrintfImpl(&local_388,L"LinearPositionDriveZEnabled:%s\n");
  iVar2 = local_388.Data.ArrayNum + -1;
  if (local_388.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_388.Data.AllocatorInstance.Data,iVar2);
  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.Data.AllocatorInstance.Data);
  }
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_358,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_368,L"LinearDrivePositionTarget:%s\n");
  iVar2 = local_368.Data.ArrayNum + -1;
  if (local_368.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_368.Data.AllocatorInstance.Data,iVar2);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_338,L"%d");
  ::FString::PrintfImpl(&local_348,L"LinearVelocityDriveXEnabled:%s\n");
  iVar2 = local_348.Data.ArrayNum + -1;
  if (local_348.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_348.Data.AllocatorInstance.Data,iVar2);
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_318,L"%d");
  ::FString::PrintfImpl(&local_328,L"LinearVelocityDriveYEnabled:%s\n");
  iVar2 = local_328.Data.ArrayNum + -1;
  if (local_328.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_328.Data.AllocatorInstance.Data,iVar2);
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_2f8,L"%d");
  ::FString::PrintfImpl(&local_308,L"LinearVelocityDriveZEnabled:%s\n");
  iVar2 = local_308.Data.ArrayNum + -1;
  if (local_308.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_308.Data.AllocatorInstance.Data,iVar2);
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_2d8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_2e8,L"LinearDriveVelocityTarget:%s\n");
  iVar2 = local_2e8.Data.ArrayNum + -1;
  if (local_2e8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_2e8.Data.AllocatorInstance.Data,iVar2);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_2b8,L"%d");
  ::FString::PrintfImpl(&local_2c8,L"LinearDriveForceMode:%s\n");
  iVar2 = local_2c8.Data.ArrayNum + -1;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_2c8.Data.AllocatorInstance.Data,iVar2);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_298,L"%d");
  ::FString::PrintfImpl(&local_2a8,L"LinearMotionTypesX:%s\n");
  iVar2 = local_2a8.Data.ArrayNum + -1;
  if (local_2a8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_2a8.Data.AllocatorInstance.Data,iVar2);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_278,L"%d");
  ::FString::PrintfImpl(&local_288,L"LinearMotionTypesY:%s\n");
  iVar2 = local_288.Data.ArrayNum + -1;
  if (local_288.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_288.Data.AllocatorInstance.Data,iVar2);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_258,L"%d");
  ::FString::PrintfImpl(&local_268,L"LinearMotionTypesZ:%s\n");
  iVar2 = local_268.Data.ArrayNum + -1;
  if (local_268.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_268.Data.AllocatorInstance.Data,iVar2);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_238,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_248,L"LinearDriveStiffness:%s\n");
  iVar2 = local_248.Data.ArrayNum + -1;
  if (local_248.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_248.Data.AllocatorInstance.Data,iVar2);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_218,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_228,L"LinearDriveDamping:%s\n");
  iVar2 = local_228.Data.ArrayNum + -1;
  if (local_228.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_228.Data.AllocatorInstance.Data,iVar2);
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_1f8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_208,L"LinearDriveMaxForce:%s\n");
  iVar2 = local_208.Data.ArrayNum + -1;
  if (local_208.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_208.Data.AllocatorInstance.Data,iVar2);
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_1d8,L"%f");
  ::FString::PrintfImpl(&local_1e8,L"ContactTransferScale:%s\n");
  iVar2 = local_1e8.Data.ArrayNum + -1;
  if (local_1e8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_1e8.Data.AllocatorInstance.Data,iVar2);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_1b8,L"%d");
  ::FString::PrintfImpl(&local_1c8,L"AngularSLerpPositionDriveEnabled:%s\n");
  iVar2 = local_1c8.Data.ArrayNum + -1;
  if (local_1c8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,iVar2);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_198,L"%d");
  ::FString::PrintfImpl(&local_1a8,L"AngularTwistPositionDriveEnabled:%s\n");
  iVar2 = local_1a8.Data.ArrayNum + -1;
  if (local_1a8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar2);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_178,L"%d");
  ::FString::PrintfImpl(&local_188,L"AngularSwingPositionDriveEnabled:%s\n");
  iVar2 = local_188.Data.ArrayNum + -1;
  if (local_188.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_188.Data.AllocatorInstance.Data,iVar2);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_158,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
  ::FString::PrintfImpl(&local_168,L"AngularDrivePositionTarget:%s\n");
  iVar2 = local_168.Data.ArrayNum + -1;
  if (local_168.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_168.Data.AllocatorInstance.Data,iVar2);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_138,L"%d");
  ::FString::PrintfImpl(&local_148,L"AngularSLerpVelocityDriveEnabled:%s\n");
  iVar2 = local_148.Data.ArrayNum + -1;
  if (local_148.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_148.Data.AllocatorInstance.Data,iVar2);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_118,L"%d");
  ::FString::PrintfImpl(&local_128,L"AngularTwistVelocityDriveEnabled:%s\n");
  iVar2 = local_128.Data.ArrayNum + -1;
  if (local_128.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar2);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_f8,L"%d");
  ::FString::PrintfImpl(&local_108,L"AngularSwingVelocityDriveEnabled:%s\n");
  iVar2 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_108.Data.AllocatorInstance.Data,iVar2);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_d8,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_e8,L"AngularDriveVelocityTarget:%s\n");
  iVar2 = local_e8.Data.ArrayNum + -1;
  if (local_e8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar2);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_b8,L"%d");
  ::FString::PrintfImpl(&local_c8,L"AngularDriveForceMode:%s\n");
  iVar2 = local_c8.Data.ArrayNum + -1;
  if (local_c8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar2);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_98,L"%d");
  ::FString::PrintfImpl(&local_a8,L"AngularMotionTypesX:%s\n");
  iVar2 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar2);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_78,L"%d");
  ::FString::PrintfImpl(&local_88,L"AngularMotionTypesY:%s\n");
  iVar2 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar2);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_638,L"%d");
  ::FString::PrintfImpl(&local_648,L"AngularMotionTypesZ:%s\n");
  iVar2 = local_648.Data.ArrayNum + -1;
  if (local_648.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_648.Data.AllocatorInstance.Data,iVar2);
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_638,L"AngularDriveStiffness:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_638,L"AngularDriveDamping:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_638,L"AngularDriveMaxTorque:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"Stiffness:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%d");
  ::FString::PrintfImpl(&local_638,L"SoftLinearLimitsEnabled:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%d");
  ::FString::PrintfImpl(&local_638,L"SoftTwistLimitsEnabled:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%d");
  ::FString::PrintfImpl(&local_638,L"SoftSwingLimitsEnabled:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%d");
  ::FString::PrintfImpl(&local_638,L"LinearSoftForceMode:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%d");
  ::FString::PrintfImpl(&local_638,L"AngularSoftForceMode:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"SoftLinearStiffness:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"SoftLinearDamping:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"SoftTwistStiffness:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"SoftTwistDamping:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"SoftSwingStiffness:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"SoftSwingDamping:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"LinearLimit:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_638,L"AngularLimits:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"LinearContactDistance:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"TwistContactDistance:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"SwingContactDistance:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"LinearRestitution:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"TwistRestitution:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  if ((this->State == (FJointStateBase *)0x0) ||
     (pFVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::Read
                         (&this->State->JointSettings,this->FrameAndPhase,this->Pool),
     pFVar1 == (FPBDJointSettings *)0x0)) {
    FPBDJointConstraintHandle::GetSettings(this->Head);
  }
  ::FString::PrintfImpl(&local_648,L"%f");
  ::FString::PrintfImpl(&local_638,L"SwingRestitution:%s\n");
  iVar2 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar2);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

