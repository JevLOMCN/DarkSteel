// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1472eae80

UScriptStruct * __cdecl FNavigationSegmentLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavigationSegmentLink.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNavigationSegmentLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavigationSegmentLink,(UObject *)pUVar1,
                         L"NavigationSegmentLink");
  }
  return Z_Registration_Info_UScriptStruct_FNavigationSegmentLink.OuterSingleton;
}

// FNavigationSegmentLink @ 1472f1940

FNavigationSegmentLink * __thiscall
FNavigationSegmentLink::FNavigationSegmentLink(FNavigationSegmentLink *this)

{
  FNavigationLinkBase::FNavigationLinkBase((FNavigationLinkBase *)this);
  (this->LeftStart).field0_0x0._s_0.Y = -50.0;
  (this->LeftEnd).field0_0x0._s_0.Y = -50.0;
  (this->LeftStart).field0_0x0._s_0.X = -25.0;
  (this->RightStart).field0_0x0._s_0.Y = 50.0;
  (this->RightEnd).field0_0x0._s_0.Y = 50.0;
  (this->LeftStart).field0_0x0._s_0.Z = 0.0;
  (this->LeftEnd).field0_0x0._s_0.X = 25.0;
  (this->LeftEnd).field0_0x0._s_0.Z = 0.0;
  (this->RightStart).field0_0x0._s_0.X = -25.0;
  (this->RightStart).field0_0x0._s_0.Z = 0.0;
  (this->RightEnd).field0_0x0._s_0.X = 25.0;
  (this->RightEnd).field0_0x0._s_0.Z = 0.0;
  return this;
}

// FNavigationSegmentLink @ 14737c460

FNavigationSegmentLink * __thiscall
FNavigationSegmentLink::FNavigationSegmentLink
          (FNavigationSegmentLink *this,FNavigationSegmentLink *param_1)

{
  double dVar1;
  
  FNavigationLinkBase::FNavigationLinkBase
            ((FNavigationLinkBase *)this,(FNavigationLinkBase *)param_1);
  dVar1 = (param_1->LeftStart).field0_0x0._s_0.Y;
  (this->LeftStart).field0_0x0._s_0.X = (param_1->LeftStart).field0_0x0._s_0.X;
  (this->LeftStart).field0_0x0._s_0.Y = dVar1;
  (this->LeftStart).field0_0x0._s_0.Z = (param_1->LeftStart).field0_0x0._s_0.Z;
  dVar1 = (param_1->LeftEnd).field0_0x0._s_0.Y;
  (this->LeftEnd).field0_0x0._s_0.X = (param_1->LeftEnd).field0_0x0._s_0.X;
  (this->LeftEnd).field0_0x0._s_0.Y = dVar1;
  (this->LeftEnd).field0_0x0._s_0.Z = (param_1->LeftEnd).field0_0x0._s_0.Z;
  dVar1 = (param_1->RightStart).field0_0x0._s_0.Y;
  (this->RightStart).field0_0x0._s_0.X = (param_1->RightStart).field0_0x0._s_0.X;
  (this->RightStart).field0_0x0._s_0.Y = dVar1;
  (this->RightStart).field0_0x0._s_0.Z = (param_1->RightStart).field0_0x0._s_0.Z;
  dVar1 = (param_1->RightEnd).field0_0x0._s_0.Y;
  (this->RightEnd).field0_0x0._s_0.X = (param_1->RightEnd).field0_0x0._s_0.X;
  (this->RightEnd).field0_0x0._s_0.Y = dVar1;
  (this->RightEnd).field0_0x0._s_0.Z = (param_1->RightEnd).field0_0x0._s_0.Z;
  return this;
}

