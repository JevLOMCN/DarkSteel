// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 2

// FInputDeviceRay @ 149638b60

FInputDeviceRay * __thiscall
FInputDeviceRay::FInputDeviceRay(FInputDeviceRay *this,FInputDeviceState *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  FInputDeviceRay *pFVar9;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldRay).Origin.field0_0x0._s_0.Y = (double)uVar4;
  (this->WorldRay).Origin.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->WorldRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->WorldRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->WorldRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->bHas2D = false;
  if ((param_1->InputDevice & Mouse) != None) {
    dVar2 = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Y;
    (this->WorldRay).Origin.field0_0x0._s_0.X = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.X;
    (this->WorldRay).Origin.field0_0x0._s_0.Y = dVar2;
    dVar2 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.X;
    (this->WorldRay).Origin.field0_0x0._s_0.Z = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Z;
    (this->WorldRay).Direction.field0_0x0._s_0.X = dVar2;
    dVar2 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Y;
    dVar3 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Z;
    this->bHas2D = true;
    (this->WorldRay).Direction.field0_0x0._s_0.Y = dVar2;
    (this->WorldRay).Direction.field0_0x0._s_0.Z = dVar3;
    dVar2 = (param_1->Mouse).Position2D.field0_0x0._s_0.Y;
    (this->ScreenPosition).field0_0x0._s_0.X = (param_1->Mouse).Position2D.field0_0x0._s_0.X;
    (this->ScreenPosition).field0_0x0._s_0.Y = dVar2;
    return this;
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_1562874569641950818>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\InputState.h"
                     ,0x19e,"false");
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = __real_3ff0000000000000;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FInputDeviceRay *)(*pcVar1)();
    return pFVar9;
  }
  (this->WorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldRay).Origin.field0_0x0._s_0.Y = (double)uVar5;
  *(undefined4 *)((longlong)&(this->WorldRay).Origin.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->WorldRay).Origin.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)&(this->WorldRay).Direction.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 4) = 0;
  *(undefined4 *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 0xc) = 0;
  *(int *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 0x10) = (int)uVar4;
  *(int *)((longlong)&(this->WorldRay).Direction.field0_0x0 + 0x14) =
       (int)((ulonglong)uVar4 >> 0x20);
  (this->ScreenPosition).field0_0x0._s_0.X = 0.0;
  (this->ScreenPosition).field0_0x0._s_0.Y = 0.0;
  this->bHas2D = false;
  return this;
}

// StaticStruct @ 14966d890

UScriptStruct * __cdecl FInputDeviceRay::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputDeviceRay.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FInputDeviceRay.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputDeviceRay,(UObject *)pUVar1,
                         L"InputDeviceRay");
  }
  return Z_Registration_Info_UScriptStruct_FInputDeviceRay.OuterSingleton;
}

