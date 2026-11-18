// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1473057f0

UClass * __cdecl UParticleModuleLocationEmitterDirect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationEmitterDirect",
               &Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationEmitterDirect,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationEmitterDirect>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationEmitterDirect>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.InnerSingleton;
}

// UParticleModuleLocationEmitterDirect @ 14730a790

UParticleModuleLocationEmitterDirect * __thiscall
UParticleModuleLocationEmitterDirect::UParticleModuleLocationEmitterDirect
          (UParticleModuleLocationEmitterDirect *this,FVTableHelper *param_1)

{
  UParticleModule::UParticleModule((UParticleModule *)this,param_1);
  this->_padding_ = (longlong)&___7UParticleModuleLocationEmitterDirect__6B_;
  (this->EmitterName).ComparisonIndex = 0;
  (this->EmitterName).Number = 0;
  return this;
}

// ~UParticleModuleLocationEmitterDirect @ 14730b7a0

void __thiscall
UParticleModuleLocationEmitterDirect::~UParticleModuleLocationEmitterDirect
          (UParticleModuleLocationEmitterDirect *this)

{
  this->_padding_ = (longlong)&___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730e060

UClass * __cdecl UParticleModuleLocationEmitterDirect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationEmitterDirect",
               &Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationEmitterDirect,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationEmitterDirect>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationEmitterDirect>,local_res8,
               UParticleModuleLocationBase::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationEmitterDirect.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationEmitterDirect @ 14730fdb0

void __cdecl
UParticleModuleLocationEmitterDirect::StaticRegisterNativesUParticleModuleLocationEmitterDirect
          (void)

{
  return;
}

// UParticleModuleLocationEmitterDirect @ 14815cdb0

UParticleModuleLocationEmitterDirect * __thiscall
UParticleModuleLocationEmitterDirect::UParticleModuleLocationEmitterDirect
          (UParticleModuleLocationEmitterDirect *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  *(byte *)((longlong)&this->_padding_ + 1) = *(byte *)((longlong)&this->_padding_ + 1) & 0xf3 | 3;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0x17 | 0x80;
  this->_padding_ = (longlong)&___7UParticleModuleLocationEmitterDirect__6B_;
  (this->EmitterName).ComparisonIndex = 0;
  (this->EmitterName).Number = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::ConstructorStatics.NAME_None,L"None");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->EmitterName = ::ConstructorStatics.NAME_None;
  return this;
}

// Spawn @ 14819bcd0

void __thiscall
UParticleModuleLocationEmitterDirect::Spawn
          (UParticleModuleLocationEmitterDirect *this,FSpawnContext *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  FBaseParticle *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  longlong lVar11;
  FSpawnContext *local_res8;
  FSpawnContext *local_res10;
  longlong local_28;
  int local_20;
  
  lVar1 = param_1->_padding_;
  if (this->EmitterName != (FName)0x0) {
    plVar2 = *(longlong **)(lVar1 + 0x10);
    (**(code **)(*plVar2 + 0xe8))(plVar2,&local_28);
    uVar10 = 0;
    if (0 < local_20) {
      lVar11 = 0;
      iVar8 = local_20;
      do {
        uVar7 = 0;
        if ((int)uVar10 < iVar8) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , iVar8 = local_20, bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar2 = *(longlong **)(lVar11 + local_28);
        if ((plVar2 != (longlong *)0x0) && (*(FName *)(plVar2[1] + 0x28) == this->EmitterName)) {
          pFVar3 = param_1->ParticleBase;
          pdVar9 = (double *)(**(code **)(*plVar2 + 0x108))(plVar2,*(undefined4 *)(lVar1 + 0x18c));
          if (pdVar9 == (double *)0x0) {
            return;
          }
          dVar5 = pdVar9[4];
          (pFVar3->Location).field0_0x0._s_0.X = pdVar9[3];
          (pFVar3->Location).field0_0x0._s_0.Y = dVar5;
          (pFVar3->Location).field0_0x0._s_0.Z = pdVar9[5];
          dVar5 = pdVar9[1];
          (pFVar3->OldLocation).field0_0x0._s_0.X = *pdVar9;
          (pFVar3->OldLocation).field0_0x0._s_0.Y = dVar5;
          (pFVar3->OldLocation).field0_0x0._s_0.Z = pdVar9[2];
          *(double *)&(pFVar3->Velocity).field0_0x0 = pdVar9[8];
          (pFVar3->Velocity).field0_0x0._s_0.Z = *(float *)(pdVar9 + 9);
          pFVar3->RelativeTime = *(float *)(pdVar9 + 0x12);
          iVar8 = _finite((pFVar3->Location).field0_0x0._s_0.X);
          if (((iVar8 == 0) || (iVar8 = _finite((pFVar3->Location).field0_0x0._s_0.Y), iVar8 == 0))
             || (iVar8 = _finite((pFVar3->Location).field0_0x0._s_0.Z), iVar8 == 0)) {
            local_res8 = param_1;
            `UParticleModuleLocationEmitterDirect::Spawn'::__l16::<lambda_1>::operator()
                      (&local_res8);
          }
          iVar8 = _finite((double)(pFVar3->Velocity).field0_0x0._s_0.X);
          if (((iVar8 != 0) &&
              (iVar8 = _finite((double)(pFVar3->Velocity).field0_0x0._s_0.Y), iVar8 != 0)) &&
             (iVar8 = _finite((double)(pFVar3->Velocity).field0_0x0._s_0.Z), iVar8 != 0)) {
            return;
          }
          local_res10 = param_1;
          `UParticleModuleLocationEmitterDirect::Spawn'::__l16::<lambda_2>::operator()(&local_res10)
          ;
          return;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar10 < iVar8);
    }
  }
  return;
}

// Update @ 1481ae950

void __thiscall
UParticleModuleLocationEmitterDirect::Update
          (UParticleModuleLocationEmitterDirect *this,FUpdateContext *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort *puVar13;
  int iVar14;
  longlong lVar15;
  FUpdateContext *local_res8;
  FUpdateContext *local_res10;
  longlong local_38;
  int local_30;
  
  if (this->EmitterName != (FName)0x0) {
    plVar2 = *(longlong **)(param_1->_padding_ + 0x10);
    (**(code **)(*plVar2 + 0xe8))(plVar2,&local_38);
    uVar11 = 0;
    if (0 < local_30) {
      lVar15 = 0;
      iVar10 = local_30;
      do {
        uVar7 = 0;
        if ((int)uVar11 < iVar10) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , iVar10 = local_30, bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar2 = *(longlong **)(lVar15 + local_38);
        if ((plVar2 != (longlong *)0x0) && (*(FName *)(plVar2[1] + 0x28) == this->EmitterName)) {
          lVar15 = param_1->_padding_;
          iVar14 = *(int *)(lVar15 + 0x18c) + -1;
          lVar3 = *(longlong *)(lVar15 + 0x168);
          iVar10 = *(int *)(lVar15 + 0x188);
          if (iVar14 < 0) {
            return;
          }
          puVar13 = (ushort *)(*(longlong *)(lVar15 + 0x170) + (longlong)iVar14 * 2);
          do {
            uVar11 = (uint)*puVar13 * iVar10;
            uVar12 = (ulonglong)uVar11;
            if (((*(uint *)((ulonglong)uVar11 + 0x6c + lVar3) & 0x4000000) == 0) &&
               (puVar9 = (undefined8 *)(**(code **)(*plVar2 + 0x108))(plVar2,iVar14),
               puVar9 != (undefined8 *)0x0)) {
              uVar5 = puVar9[4];
              puVar1 = (undefined8 *)(uVar12 + 0x18 + lVar3);
              *puVar1 = puVar9[3];
              puVar1[1] = uVar5;
              *(undefined8 *)(uVar12 + 0x28 + lVar3) = puVar9[5];
              uVar5 = puVar9[1];
              *(undefined8 *)(uVar12 + lVar3) = *puVar9;
              ((undefined8 *)(uVar12 + lVar3))[1] = uVar5;
              *(undefined8 *)(uVar12 + 0x10 + lVar3) = puVar9[2];
              *(undefined8 *)(uVar12 + 0x40 + lVar3) = puVar9[8];
              *(undefined4 *)(uVar12 + 0x48 + lVar3) = *(undefined4 *)(puVar9 + 9);
              *(undefined4 *)(uVar12 + 0x90 + lVar3) = *(undefined4 *)(puVar9 + 0x12);
              iVar8 = _finite(*(double *)(uVar12 + 0x18 + lVar3));
              if ((iVar8 == 0) ||
                 ((iVar8 = _finite(*(double *)(uVar12 + 0x20 + lVar3)), iVar8 == 0 ||
                  (iVar8 = _finite(*(double *)(uVar12 + 0x28 + lVar3)), iVar8 == 0)))) {
                local_res8 = param_1;
                `UParticleModuleLocationEmitterDirect::Update'::__l23::<lambda_1>::operator()
                          (&local_res8);
              }
              iVar8 = _finite((double)*(float *)(uVar12 + 0x40 + lVar3));
              if (((iVar8 == 0) ||
                  (iVar8 = _finite((double)*(float *)(uVar12 + 0x44 + lVar3)), iVar8 == 0)) ||
                 (iVar8 = _finite((double)*(float *)(uVar12 + 0x48 + lVar3)), iVar8 == 0)) {
                local_res10 = param_1;
                `UParticleModuleLocationEmitterDirect::Update'::__l23::<lambda_2>::operator()
                          (&local_res10);
              }
            }
            puVar13 = puVar13 + -1;
            iVar14 = iVar14 + -1;
          } while (-1 < iVar14);
          return;
        }
        uVar11 = uVar11 + 1;
        lVar15 = lVar15 + 8;
      } while ((int)uVar11 < iVar10);
    }
  }
  return;
}

// operator() @ 1505262c0

bool __thiscall
`UParticleModuleLocationEmitterDirect::Spawn'::__l16::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554393>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554393>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052639f;
    }
  }
  bVar4 = false;
LAB_15052639f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505263f0

bool __thiscall
`UParticleModuleLocationEmitterDirect::Update'::__l23::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554436>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554436>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505264cf;
    }
  }
  bVar4 = false;
LAB_1505264cf:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150526f00

bool __thiscall
`UParticleModuleLocationEmitterDirect::Spawn'::__l16::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554394>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554394>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150526fdf;
    }
  }
  bVar4 = false;
LAB_150526fdf:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150527160

bool __thiscall
`UParticleModuleLocationEmitterDirect::Update'::__l23::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554437>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554437>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052723f;
    }
  }
  bVar4 = false;
LAB_15052723f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

