// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1476d9460

UScriptStruct * __cdecl FCameraShakePatternUpdateResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraShakePatternUpdateResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCameraShakePatternUpdateResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult,(UObject *)pUVar1
                         ,L"CameraShakePatternUpdateResult");
  }
  return Z_Registration_Info_UScriptStruct_FCameraShakePatternUpdateResult.OuterSingleton;
}

// FCameraShakePatternUpdateResult @ 1476e7490

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakePatternUpdateResult * __thiscall
FCameraShakePatternUpdateResult::FCameraShakePatternUpdateResult
          (FCameraShakePatternUpdateResult *this)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->FOV = 0.0;
  FPostProcessSettings::FPostProcessSettings(&this->PostProcessSettings);
  this->PostProcessBlendWeight = 0.0;
  this->Flags = Default;
  return this;
}

// ApplyScale @ 1476ef9c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraShakePatternUpdateResult::ApplyScale(FCameraShakePatternUpdateResult *this,float param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  double dVar6;
  undefined1 local_res8 [32];
  
  if (((this->Flags & ApplyAsAbsolute) != Default) &&
     (bVar5 = `FCameraShakePatternUpdateResult::ApplyScale'::__l3::<lambda_1>::operator()
                        (local_res8), !bVar5)) {
    return;
  }
  dVar6 = (double)param_1;
  dVar4 = (this->Location).field0_0x0._s_0.Y * dVar6;
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = (this->Location).field0_0x0._s_0.X * dVar6;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&(this->Location).field0_0x0 = auVar1;
  dVar4 = (this->Rotation).Pitch * dVar6;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (this->Location).field0_0x0._s_0.Z * dVar6;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Location).field0_0x0 + 0x10) = auVar2;
  dVar4 = (this->Rotation).Yaw * dVar6;
  dVar6 = (this->Rotation).Roll * dVar6;
  auVar3._8_4_ = SUB84(dVar6,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  (this->Rotation).Yaw = dVar4;
  (this->Rotation).Roll = (double)auVar3._8_8_;
  this->PostProcessBlendWeight = param_1 * this->PostProcessBlendWeight;
  this->FOV = param_1 * this->FOV;
  return;
}

// operator() @ 15050fa70

bool __thiscall
`FCameraShakePatternUpdateResult::ApplyScale'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2790455576654511889>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2790455576654511889>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

