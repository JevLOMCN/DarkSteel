// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// TVector<float> @ 145df3430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<float> * __thiscall
FPackedPosition::operator_UE::Math::TVector<float>
          (void *this,TVector<float> *__return_storage_ptr__)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (float)((iVar1 << 0x15) >> 0x15) * __real_3a802008;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)((iVar1 << 10) >> 0x15) * __real_3a802008;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(iVar1 >> 0x16) * ___real_3b004020;
  return __return_storage_ptr__;
}

// GetVectorRegister @ 145e15950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

VectorRegister4Double * __thiscall
FPackedPosition::GetVectorRegister
          (FPackedPosition *this,VectorRegister4Double *__return_storage_ptr__)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = (this->field0_0x0).Packed;
  fVar3 = (float)((int)(uVar1 << 10) >> 0x15) * __real_3a802008;
  fVar2 = (float)((int)uVar1 >> 0x16) * ___real_3b004020;
  (__return_storage_ptr__->XY).m128d_f64[0] =
       (double)((float)((int)(uVar1 << 0x15) >> 0x15) * __real_3a802008);
  (__return_storage_ptr__->XY).m128d_f64[1] = (double)fVar3;
  (__return_storage_ptr__->ZW).m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->ZW).m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// Set @ 145e24d30

void __thiscall FPackedPosition::Set(FPackedPosition *this,TVector<float> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((__real_3f800000 <
        (float)((uint)(param_1->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
      (__real_3f800000 <
       (float)((uint)(param_1->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_3f800000 <
      (float)((uint)(param_1->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::Abs<float>(InVector.X) <= 1.f && FMath::Abs<float>(InVector.Y) <= 1.f && FMath::Abs<float>(InVector.Z) <= 1.f"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderUtils.cpp"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderUtils.cpp"
                     ,0x89,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Set @ 145e24dd0

void __thiscall FPackedPosition::Set(FPackedPosition *this,TVector<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (((__real_3f800000 <
        (float)((uint)(float)(param_1->field0_0x0)._s_0.X & __xmm_7fffffff7fffffff7fffffff7fffffff))
      || (__real_3f800000 <
          (float)((uint)(float)(param_1->field0_0x0)._s_0.Y & __xmm_7fffffff7fffffff7fffffff7fffffff
                 ))) ||
     (__real_3f800000 <
      (float)((uint)(float)(param_1->field0_0x0)._s_0.Z & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FMath::Abs<float>(InVector.X) <= 1.f && FMath::Abs<float>(InVector.Y) <= 1.f && FMath::Abs<float>(InVector.Z) <= 1.f"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderUtils.cpp"
                       ,0x85,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderUtils.cpp"
                     ,0x89,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

