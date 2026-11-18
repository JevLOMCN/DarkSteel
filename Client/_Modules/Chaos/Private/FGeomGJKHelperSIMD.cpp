// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// SupportCoreSimd<Chaos::TBox<double,3>_> @ 143885c90

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143885d30

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  longlong lVar4;
  uint *puVar5;
  float *in_R8;
  longlong lVar6;
  double dVar7;
  float in_XMM1_Da;
  double adStack_b8 [8];
  double local_78 [4];
  double local_58 [5];
  uint local_30 [12];
  
  puVar5 = local_30;
  lVar6 = __return_storage_ptr__[7].m128_u64[0] + 0x20;
  lVar4 = 0;
  local_78[0] = (double)__return_storage_ptr__[2].m128_f32[0];
  local_78[2] = (double)*(float *)((longlong)__return_storage_ptr__ + 0x28);
  local_78[1] = (double)*(float *)((longlong)__return_storage_ptr__ + 0x24);
  local_58[1] = (double)*(float *)((longlong)__return_storage_ptr__ + 0x28) * (double)in_R8[2];
  local_78[3] = (double)__return_storage_ptr__[2].m128_f32[0] * (double)*in_R8;
  local_58[0] = (double)*(float *)((longlong)__return_storage_ptr__ + 0x24) * (double)in_R8[1];
  do {
    dVar7 = *(double *)((longlong)local_78 + lVar4);
    pdVar1 = (double *)((lVar6 - (longlong)local_78) + (longlong)local_78 + lVar4);
    pdVar2 = (double *)((longlong)pdVar1 + (longlong)local_78 + (0x18 - lVar6));
    bVar3 = 0.0 < *pdVar2 || *pdVar2 == 0.0;
    if (bVar3) {
      dVar7 = dVar7 * *(double *)(lVar4 + 0x18 + lVar6) - (double)in_XMM1_Da;
    }
    else {
      dVar7 = dVar7 * *pdVar1 + (double)in_XMM1_Da;
    }
    *(double *)((longlong)local_58 + lVar4 + 0x10) = dVar7;
    lVar4 = lVar4 + 8;
    *puVar5 = (uint)bVar3;
    puVar5 = puVar5 + 1;
  } while (lVar4 < 0x18);
  return (__m128 *)(ulonglong)bVar3;
}

// SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143885e40

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::
SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  return (__m128 *)__return_storage_ptr__[7].m128_u64[0];
}

// SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143885e90

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  return (__m128 *)__return_storage_ptr__[7].m128_u64[0];
}

// SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143885fc0

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  __m128 *p_Var1;
  float *in_R8;
  float in_XMM1_Da;
  int local_res10 [6];
  double local_58;
  double local_50;
  double local_48;
  TVector<double,3> local_40;
  undefined1 local_28 [16];
  double local_18;
  
  local_res10[0] = -1;
  local_28._8_4_ = SUB84((double)in_R8[1],0);
  local_28._0_8_ = (double)*in_R8;
  local_28._12_4_ = (int)((ulonglong)(double)in_R8[1] >> 0x20);
  local_18 = (double)in_R8[2];
  local_50 = (double)*(float *)((longlong)__return_storage_ptr__ + 0x24);
  local_58 = (double)__return_storage_ptr__[2].m128_f32[0];
  local_48 = (double)*(float *)((longlong)__return_storage_ptr__ + 0x28);
  p_Var1 = (__m128 *)
           FConvex::SupportCoreScaled
                     ((FConvex *)__return_storage_ptr__[7].m128_u64[0],&local_40,
                      (TVector<double,3> *)local_28,(double)in_XMM1_Da,
                      (TVector<double,3> *)&local_58,(double *)0x0,local_res10);
  return p_Var1;
}

// SupportCoreSimd<Chaos::TSphere<double,3>_> @ 143886070

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// SupportCoreSimd<Chaos::FCapsule> @ 143886090

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// SupportCoreSimd<Chaos::FConvex> @ 143886160

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  ulong64 uVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  __m128 *p_Var9;
  uint uVar10;
  __m128 *p_Var11;
  longlong lVar12;
  float *in_R8;
  longlong lVar13;
  float in_XMM1_Da;
  float fVar14;
  float fVar15;
  TVector<double,3> local_88;
  undefined1 local_70 [16];
  double local_60;
  
  fVar4 = *in_R8;
  fVar5 = in_R8[1];
  fVar6 = in_R8[2];
  uVar10 = 0;
  lVar13 = (longlong)*(int *)((longlong)__return_storage_ptr__ + 0x38);
  dVar3 = (double)fVar5;
  local_60 = (double)fVar6;
  local_70._8_4_ = SUB84(dVar3,0);
  local_70._0_8_ = (double)fVar4;
  local_70._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  p_Var9 = (__m128 *)register0x00000020;
  if (0 < lVar13) {
    lVar12 = 0;
    p_Var11 = (__m128 *)&DAT_ffffffff;
    fVar15 = __real_ff7fffff;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)((longlong)__return_storage_ptr__ + 0x38)) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        p_Var9 = (__m128 *)(*pcVar2)();
        return p_Var9;
      }
      uVar1 = __return_storage_ptr__[3].m128_u64[0];
      fVar14 = fVar5 * *(float *)(lVar12 + 4 + uVar1) + fVar4 * *(float *)(lVar12 + uVar1) +
               fVar6 * *(float *)(lVar12 + 8 + uVar1);
      p_Var9 = (__m128 *)(ulonglong)uVar10;
      if (fVar14 <= fVar15) {
        p_Var9 = p_Var11;
        fVar14 = fVar15;
      }
      fVar15 = fVar14;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0xc;
      lVar13 = lVar13 + -1;
      p_Var11 = p_Var9;
    } while (lVar13 != 0);
    if ((int)p_Var9 != -1) {
      p_Var9 = (__m128 *)
               FConvex::GetMarginAdjustedVertex
                         ((FConvex *)__return_storage_ptr__,&local_88,(int)p_Var9,(double)in_XMM1_Da
                          ,(double *)0x0);
    }
  }
  return p_Var9;
}

// SupportCoreSimd<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_> @ 1439b5b40

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectInstanced<Chaos::TBox<double,3>_>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  return *(__m128 **)((longlong)__return_storage_ptr__ + 0x28);
}

// SupportCoreSimd<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_> @ 1439b5bf0

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::
SupportCoreSimd<Chaos::TImplicitObjectInstanced<Chaos::TSphere<double,3>_>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  return *(__m128 **)((longlong)__return_storage_ptr__ + 0x28);
}

// SupportCoreSimd<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_> @ 1439b5c30

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectInstanced<Chaos::FCapsule>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  return *(__m128 **)((longlong)__return_storage_ptr__ + 0x28);
}

// SupportCoreSimd<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_> @ 1439b5d00

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  __m128 *p_Var1;
  float *in_R8;
  float in_XMM1_Da;
  int local_res10 [6];
  TVector<double,3> local_38;
  undefined1 local_20 [16];
  double local_10;
  
  local_20._8_4_ = SUB84((double)in_R8[1],0);
  local_20._0_8_ = (double)*in_R8;
  local_20._12_4_ = (int)((ulonglong)(double)in_R8[1] >> 0x20);
  local_10 = (double)in_R8[2];
  p_Var1 = (__m128 *)
           FConvex::SupportCore
                     (*(FConvex **)((longlong)__return_storage_ptr__ + 0x28),&local_38,
                      (TVector<double,3> *)local_20,(double)in_XMM1_Da,(double *)0x0,local_res10);
  return p_Var1;
}

// SupportFunction @ 1439e1c00

__m128 * __thiscall
Chaos::FGeomGJKHelperSIMD::SupportFunction
          (FGeomGJKHelperSIMD *this,__m128 *__return_storage_ptr__,__m128 *param_1,__m128 *param_2,
          __m128 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  (*this->Func)(this->Geometry,__return_storage_ptr__,param_1->m128_f32[1],param_2);
  fVar1 = param_2->m128_f32[0];
  fVar2 = param_2->m128_f32[1];
  fVar3 = param_2->m128_f32[2];
  fVar4 = param_2->m128_f32[3];
  fVar5 = extraout_XMM0_Db * fVar1 - fVar2 * extraout_XMM0_Da;
  fVar6 = extraout_XMM0_Dc * fVar2 - fVar3 * extraout_XMM0_Db;
  fVar7 = extraout_XMM0_Da * fVar3 - fVar1 * extraout_XMM0_Dc;
  fVar8 = extraout_XMM0_Dd * fVar4 - fVar4 * extraout_XMM0_Dd;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar5 = fVar5 + fVar5;
  fVar8 = fVar8 + fVar8;
  __return_storage_ptr__->m128_f32[0] =
       fVar4 * fVar6 + extraout_XMM0_Da + (fVar5 * fVar2 - fVar7 * fVar3);
  __return_storage_ptr__->m128_f32[1] =
       fVar4 * fVar7 + extraout_XMM0_Db + (fVar6 * fVar3 - fVar5 * fVar1);
  __return_storage_ptr__->m128_f32[2] =
       fVar4 * fVar5 + extraout_XMM0_Dc + (fVar7 * fVar1 - fVar6 * fVar2);
  __return_storage_ptr__->m128_f32[3] =
       fVar4 * fVar8 + extraout_XMM0_Dd + (fVar8 * fVar4 - fVar8 * fVar4);
  return __return_storage_ptr__;
}

// SupportCoreSimd<Chaos::FGJKCapsuleSingleSIMD> @ 143ae9fe0

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FGJKCapsuleSingleSIMD>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// SupportCoreSimd<Chaos::FGJKSphereSingleSIMD> @ 143aea020

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FGJKSphereSingleSIMD>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// SupportCoreSimd<Chaos::FTriangleRegister> @ 143aea030

__m128 * __cdecl
Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>
          (__m128 *__return_storage_ptr__,void *param_1,float param_2,__m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

