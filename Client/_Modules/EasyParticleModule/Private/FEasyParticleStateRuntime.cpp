// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 3

// StaticStruct @ 14acb1cb0

UScriptStruct * __cdecl FEasyParticleStateRuntime::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEasyParticleStateRuntime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FEasyParticleStateRuntime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEasyParticleStateRuntime,(UObject *)pUVar1,
                         L"EasyParticleStateRuntime");
  }
  return Z_Registration_Info_UScriptStruct_FEasyParticleStateRuntime.OuterSingleton;
}

// FEasyParticleStateRuntime @ 14acc04f0

FEasyParticleStateRuntime * __thiscall
FEasyParticleStateRuntime::FEasyParticleStateRuntime(FEasyParticleStateRuntime *this)

{
  longlong lVar1;
  FLinearColor *pFVar2;
  TVector2<double> *pTVar3;
  FLinearColor *pFVar4;
  TVector2<double> *pTVar5;
  
  this->Lifetime = 0.0;
  pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar5 = &this->Velocity;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar5->field0_0x0 = *(undefined1 *)&pTVar3->field0_0x0;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
    pTVar5 = (TVector2<double> *)((longlong)&pTVar5->field0_0x0 + 1);
  }
  pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar5 = &this->Position;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar5->field0_0x0 = *(undefined1 *)&pTVar3->field0_0x0;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
    pTVar5 = (TVector2<double> *)((longlong)&pTVar5->field0_0x0 + 1);
  }
  pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar5 = &this->Size;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar5->field0_0x0 = *(undefined1 *)&pTVar3->field0_0x0;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
    pTVar5 = (TVector2<double> *)((longlong)&pTVar5->field0_0x0 + 1);
  }
  this->Rotation = 0.0;
  this->RotationRate = 0.0;
  pFVar2 = &FLinearColor::White;
  pFVar4 = &this->Color;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar4->field0_0x0 = *(undefined1 *)&pFVar2->field0_0x0;
    pFVar2 = (FLinearColor *)((longlong)&pFVar2->field0_0x0 + 1);
    pFVar4 = (FLinearColor *)((longlong)&pFVar4->field0_0x0 + 1);
  }
  this->AutoSizeScale = __real_3f800000;
  pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar5 = &this->WidgetPositionAbsolute;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar5->field0_0x0 = *(undefined1 *)&pTVar3->field0_0x0;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
    pTVar5 = (TVector2<double> *)((longlong)&pTVar5->field0_0x0 + 1);
  }
  (this->Pivot).field0_0x0._s_0.X = __real_3fe0000000000000;
  (this->Pivot).field0_0x0._s_0.Y = __real_3fe0000000000000;
  this->ZOrderOffset = 0.0;
  this->DrawEffect = None;
  this->RootEmitterLifetime = 0.0;
  return this;
}

// Reset @ 14acc82e0

void __thiscall FEasyParticleStateRuntime::Reset(FEasyParticleStateRuntime *this)

{
  longlong lVar1;
  FLinearColor *pFVar2;
  TVector2<double> *pTVar3;
  undefined1 *puVar4;
  FLinearColor *pFVar5;
  TVector2<double> *pTVar6;
  undefined1 local_30 [32];
  
  this->Lifetime = 0.0;
  pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar6 = &this->Velocity;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar6->field0_0x0 = *(undefined1 *)&pTVar3->field0_0x0;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
    pTVar6 = (TVector2<double> *)((longlong)&pTVar6->field0_0x0 + 1);
  }
  pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar6 = &this->Position;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar6->field0_0x0 = *(undefined1 *)&pTVar3->field0_0x0;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
    pTVar6 = (TVector2<double> *)((longlong)&pTVar6->field0_0x0 + 1);
  }
  pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar6 = &this->Size;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar6->field0_0x0 = *(undefined1 *)&pTVar3->field0_0x0;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
    pTVar6 = (TVector2<double> *)((longlong)&pTVar6->field0_0x0 + 1);
  }
  this->Rotation = 0.0;
  this->RotationRate = 0.0;
  pFVar2 = &FLinearColor::White;
  pFVar5 = &this->Color;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar5->field0_0x0 = *(undefined1 *)&pFVar2->field0_0x0;
    pFVar2 = (FLinearColor *)((longlong)&pFVar2->field0_0x0 + 1);
    pFVar5 = (FLinearColor *)((longlong)&pFVar5->field0_0x0 + 1);
  }
  pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  pTVar6 = &this->WidgetPositionAbsolute;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar6->field0_0x0 = *(undefined1 *)&pTVar3->field0_0x0;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
    pTVar6 = (TVector2<double> *)((longlong)&pTVar6->field0_0x0 + 1);
  }
  puVar4 = local_30;
  pTVar3 = &this->Pivot;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pTVar3->field0_0x0 = *puVar4;
    puVar4 = puVar4 + 1;
    pTVar3 = (TVector2<double> *)((longlong)&pTVar3->field0_0x0 + 1);
  }
  this->ZOrderOffset = 0.0;
  this->RootEmitterLifetime = 0.0;
  this->DrawEffect = None;
  return;
}

