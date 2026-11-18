// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 3

// LinearToSRGB<UE::Math::TVector4<float>_> @ 1443c2de0

void __cdecl
UE::Geometry::LinearColors::LinearToSRGB<UE::Math::TVector4<float>_>(TVector4<float> *param_1)

{
  float fVar1;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  if (__real_3b4d2e1c < fVar1) {
    fVar1 = powf(fVar1,__real_3ed55555);
    fVar1 = fVar1 * __real_3f870a3d - __real_3d6147ae;
  }
  else {
    fVar1 = fVar1 * __real_414eb852;
  }
  (param_1->field0_0x0)._s_0.X = fVar1;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  if (__real_3b4d2e1c < fVar1) {
    fVar1 = powf(fVar1,__real_3ed55555);
    fVar1 = fVar1 * __real_3f870a3d - __real_3d6147ae;
  }
  else {
    fVar1 = fVar1 * __real_414eb852;
  }
  (param_1->field0_0x0)._s_0.Y = fVar1;
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  if (fVar1 <= __real_3b4d2e1c) {
    (param_1->field0_0x0)._s_0.Z = fVar1 * __real_414eb852;
    return;
  }
  fVar1 = powf(fVar1,__real_3ed55555);
  (param_1->field0_0x0)._s_0.Z = fVar1 * __real_3f870a3d - __real_3d6147ae;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<FUVID>_> @ 1443c2eb0

int __cdecl
UE::Core::Private::ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<3>::ForElementType<FUVID>_>
          (ushort param_1,ForElementType<FUVID> *param_2,int *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = *param_3;
  uVar1 = iVar4 + 1;
  if ((int)uVar1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (3 < uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewMax <= NumInlineElements",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                       ,0x536,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  *param_3 = 3;
  return iVar4;
}

// SRGBToLinear<UE::Math::TVector4<float>_> @ 1443c2f20

void __cdecl
UE::Geometry::LinearColors::SRGBToLinear<UE::Math::TVector4<float>_>(TVector4<float> *param_1)

{
  float fVar1;
  
  fVar1 = (param_1->field0_0x0)._s_0.X;
  if (__real_3d25aee6 < fVar1) {
    fVar1 = powf(fVar1 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
  }
  else {
    fVar1 = fVar1 * __real_3d9e8391;
  }
  (param_1->field0_0x0)._s_0.X = fVar1;
  fVar1 = (param_1->field0_0x0)._s_0.Y;
  if (__real_3d25aee6 < fVar1) {
    fVar1 = powf(fVar1 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
  }
  else {
    fVar1 = fVar1 * __real_3d9e8391;
  }
  (param_1->field0_0x0)._s_0.Y = fVar1;
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  if (fVar1 <= __real_3d25aee6) {
    (param_1->field0_0x0)._s_0.Z = fVar1 * __real_3d9e8391;
    return;
  }
  fVar1 = powf(fVar1 * __real_3f72a76f + __real_3d55891a,__real_4019999a);
  (param_1->field0_0x0)._s_0.Z = fVar1;
  return;
}

