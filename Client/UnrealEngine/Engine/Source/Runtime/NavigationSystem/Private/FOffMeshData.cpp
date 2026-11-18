// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// operator() @ 146e38a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FOffMeshData::AddLinks'::__l4::<lambda_1>::operator()
          (void *this,dtOffMeshLinkCreateParams *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  uint *puVar5;
  FName local_res8;
  FString local_18;
  
  pUVar4 = FNavigationLinkBase::GetAreaClass(*(FNavigationLinkBase **)this);
  puVar5 = (uint *)TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                   ::Find(*(TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                            **)(*(longlong *)((longlong)this + 8) + 0x10),pUVar4);
  if (puVar5 == (uint *)0x0) {
    if (2 < (byte)LogNavigation._0_1_) {
      if (pUVar4 == (UClass *)0x0) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        local_res8 = (FName)pUVar4->_padding_;
        ::FName::ToString(&local_res8,&local_18);
      }
      UE::Logging::Private::BasicLog<3>
                (&`public:___cdecl_`public:_void___cdecl_FOffMeshData::AddLinks(TArray<FNavigationLink,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Math::TTransform<double>_const&___ptr64,int,float)___ptr64'::`4'::<lambda_1>::operator()(dtOffMeshLinkCreateParams&___ptr64)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    uVar1 = *puVar5;
    if (((uVar1 != (uVar1 & 0xff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    param_1->area = (uchar)uVar1;
    param_1->polyFlag =
         *(ushort *)
          (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x18) + (longlong)(int)*puVar5 * 2);
  }
  return;
}

// AddLinks @ 146e3eb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOffMeshData::AddLinks
          (FOffMeshData *this,TArray<FGeneratedNavigationLink,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2,int param_3,float param_4)

{
  int *piVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  FScriptContainerElement *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  iVar15 = param_1->ArrayNum;
  uVar17 = 0;
  if (0 < iVar15) {
    lVar18 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar17 < iVar15) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_1c0 = (FScriptContainerElement *)(longlong)iVar15;
        local_1c8 = (double *)(longlong)(int)uVar17;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (((uint)param_3 < 0x10) &&
         ((*(uint *)(pFVar3 + lVar18 + 0x20) >> (param_3 & 0x1fU) & 1) != 0)) {
        auVar33 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        auVar30 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar10 = *(double *)(pFVar3 + lVar18 + 0x50) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        dVar12 = (param_2->Rotation).ZW.m128d_f64[1];
        local_118 = 0.0;
        dStack_110 = 0.0;
        local_108 = 0.0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0.0;
        dStack_e0 = 0.0;
        local_d8 = 0.0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0.0;
        dStack_b0 = 0.0;
        local_a8 = 0;
        uStack_a0 = 0;
        dVar8 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(pFVar3 + lVar18 + 0x40);
        dVar9 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar3 + lVar18 + 0x48);
        uVar36 = (undefined4)((ulonglong)dVar9 >> 0x20);
        local_138._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar25 = blendpd(local_138._0_16_,auVar33,2);
        auVar37._8_4_ = SUB84(dVar9,0);
        auVar37._0_8_ = dVar8;
        auVar37._12_4_ = uVar36;
        dVar7 = auVar33._0_8_;
        auVar38._0_8_ = auVar37._8_8_ * local_138._0_8_ - local_138._8_8_ * dVar8;
        auVar38._8_8_ = dVar10 * local_138._8_8_ - dVar7 * dVar9;
        auVar27._8_4_ = SUB84(dVar9,0);
        auVar27._0_8_ = dVar8;
        auVar27._12_4_ = uVar36;
        auVar19._8_4_ = SUB84(dVar11,0);
        auVar19._0_8_ = dVar10;
        auVar19._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar19 = blendpd(auVar27,auVar19,2);
        auVar20._0_8_ = auVar19._0_8_ * dVar7 - auVar25._0_8_ * dVar10;
        auVar20._8_8_ = auVar19._8_8_ * auVar33._8_8_ - auVar25._8_8_ * dVar11;
        auVar19 = blendpd(auVar38,auVar20,2);
        dVar11 = auVar38._8_8_ + auVar38._8_8_;
        dVar6 = auVar20._0_8_ + auVar20._0_8_;
        uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar39._0_8_ = auVar19._0_8_ + auVar19._0_8_;
        auVar39._8_8_ = auVar19._8_8_ + auVar19._8_8_;
        auVar31._8_4_ = SUB84(dVar6,0);
        auVar31._0_8_ = dVar11;
        auVar31._12_4_ = uVar36;
        auVar26._8_4_ = SUB84(dVar6,0);
        auVar26._0_8_ = dVar11;
        auVar26._12_4_ = uVar36;
        auVar19 = blendpd(auVar26,auVar39,2);
        auVar32._0_8_ = auVar31._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar11;
        auVar32._8_8_ = auVar39._0_8_ * auVar30._8_8_ - dVar7 * dVar6;
        auVar21._8_4_ = SUB84(auVar32._8_8_,0);
        auVar21._0_8_ = auVar32._0_8_;
        auVar21._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
        auVar25 = blendpd(auVar30,auVar33,2);
        auVar30._0_8_ = auVar19._0_8_ * dVar7 - auVar25._0_8_ * auVar39._0_8_;
        auVar30._8_8_ = auVar19._8_8_ * auVar33._8_8_ - auVar25._8_8_ * auVar39._8_8_;
        auVar33 = blendpd(auVar32,auVar30,2);
        dVar7 = dVar6 * dVar12 + dVar9 + auVar30._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_150._s_0.Z =
             auVar39._0_8_ * dVar12 + dVar10 + auVar33._0_8_ +
             (param_2->Translation).ZW.m128d_f64[0];
        local_150._8_4_ = SUB84(dVar7,0);
        local_150._0_8_ =
             dVar11 * dVar12 + dVar8 + auVar21._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_150._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        Unreal2RecastPoint((TVector<double> *)&local_198._s_0,(TVector<double> *)&local_150._s_0);
        dVar12 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar10 = *(double *)(pFVar3 + lVar18 + 0x68) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar11 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        local_118 = local_198._s_0.X;
        dStack_110 = local_198._s_0.Y;
        local_108 = local_198._s_0.Z;
        dVar8 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(pFVar3 + lVar18 + 0x58);
        dVar9 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar3 + lVar18 + 0x60);
        uVar36 = (undefined4)((ulonglong)dVar9 >> 0x20);
        local_178._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar33 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        auVar30 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar27 = blendpd(local_178._0_16_,auVar33,2);
        auVar40._8_4_ = SUB84(dVar9,0);
        auVar40._0_8_ = dVar8;
        auVar40._12_4_ = uVar36;
        dVar7 = auVar33._0_8_;
        auVar41._0_8_ = auVar40._8_8_ * local_178._0_8_ - local_178._8_8_ * dVar8;
        auVar41._8_8_ = dVar10 * local_178._8_8_ - dVar7 * dVar9;
        auVar22._8_4_ = SUB84(dVar9,0);
        auVar22._0_8_ = dVar8;
        auVar22._12_4_ = uVar36;
        auVar25._8_4_ = SUB84(dVar11,0);
        auVar25._0_8_ = dVar10;
        auVar25._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar19 = blendpd(auVar22,auVar25,2);
        auVar23._0_8_ = auVar19._0_8_ * dVar7 - auVar27._0_8_ * dVar10;
        auVar23._8_8_ = auVar19._8_8_ * auVar33._8_8_ - auVar27._8_8_ * dVar11;
        auVar19 = blendpd(auVar41,auVar23,2);
        dVar11 = auVar41._8_8_ + auVar41._8_8_;
        dVar6 = auVar23._0_8_ + auVar23._0_8_;
        uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar42._0_8_ = auVar19._0_8_ + auVar19._0_8_;
        auVar42._8_8_ = auVar19._8_8_ + auVar19._8_8_;
        auVar34._8_4_ = SUB84(dVar6,0);
        auVar34._0_8_ = dVar11;
        auVar34._12_4_ = uVar36;
        auVar28._8_4_ = SUB84(dVar6,0);
        auVar28._0_8_ = dVar11;
        auVar28._12_4_ = uVar36;
        auVar19 = blendpd(auVar28,auVar42,2);
        auVar35._0_8_ = auVar34._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar11;
        auVar35._8_8_ = auVar42._0_8_ * auVar30._8_8_ - dVar7 * dVar6;
        auVar24._8_4_ = SUB84(auVar35._8_8_,0);
        auVar24._0_8_ = auVar35._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
        auVar30 = blendpd(auVar30,auVar33,2);
        auVar29._0_8_ = auVar19._0_8_ * dVar7 - auVar30._0_8_ * auVar42._0_8_;
        auVar29._8_8_ = auVar19._8_8_ * auVar33._8_8_ - auVar30._8_8_ * auVar42._8_8_;
        auVar33 = blendpd(auVar35,auVar29,2);
        dVar7 = dVar6 * dVar12 + dVar9 + auVar29._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_138._s_0.Z =
             auVar42._0_8_ * dVar12 + dVar10 + auVar33._0_8_ +
             (param_2->Translation).ZW.m128d_f64[0];
        local_138._8_4_ = SUB84(dVar7,0);
        local_138._0_8_ =
             dVar11 * dVar12 + dVar8 + auVar24._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_138._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        Unreal2RecastPoint((TVector<double> *)&local_178._s_0,(TVector<double> *)&local_138._s_0);
        local_e8 = local_178._s_0.X;
        dStack_e0 = local_178._s_0.Y;
        local_d8 = local_178._s_0.Z;
        local_b8 = (double)*(float *)(pFVar3 + lVar18 + 0x18);
        fVar2 = param_4;
        if (((byte)pFVar3[lVar18 + 0x29] & 1) != 0) {
          fVar2 = *(float *)(pFVar3 + lVar18 + 0x1c);
        }
        local_a8 = *(undefined8 *)(pFVar3 + lVar18 + 0x10);
        pFVar4 = (this->LinkParams).AllocatorInstance.Data;
        dStack_b0 = (double)fVar2;
        uStack_a0 = CONCAT62(CONCAT51(CONCAT41(uStack_a0._4_4_,
                                               ((byte)pFVar3[lVar18 + 0x2a] & 4 |
                                               (byte)pFVar3[lVar18 + 0x29] & 2) << 2 |
                                               (pFVar3[lVar18 + 0x28] ==
                                               (FScriptContainerElement)0x0) + 2U),
                                      pFVar3[lVar18 + 0x72]),*(undefined2 *)(pFVar3 + lVar18 + 0x70)
                            );
        if ((pFVar4 <= (FScriptContainerElement *)&local_118) &&
           (lVar16 = (longlong)(this->LinkParams).ArrayMax,
           (FScriptContainerElement *)&local_118 < pFVar4 + lVar16 * 0x80)) {
          local_1b0 = (longlong)(this->LinkParams).ArrayNum;
          local_1a8 = 0x80;
          local_1c8 = &local_118;
          local_1c0 = pFVar4;
          local_1b8 = lVar16;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar15 = (this->LinkParams).ArrayNum;
        piVar1 = &(this->LinkParams).ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,(ForAnyElementType *)this,piVar1);
        }
        (this->LinkParams).ArrayNum = iVar15 + 1;
        pFVar3 = (this->LinkParams).AllocatorInstance.Data;
        lVar16 = (longlong)iVar15 * 0x80;
        *(double *)(pFVar3 + lVar16) = local_118;
        *(double *)(pFVar3 + lVar16 + 8) = dStack_110;
        *(double *)(pFVar3 + lVar16 + 0x10) = local_108;
        *(undefined8 *)(pFVar3 + lVar16 + 0x10 + 8) = uStack_100;
        *(undefined8 *)(pFVar3 + lVar16 + 0x20) = local_f8;
        *(undefined8 *)(pFVar3 + lVar16 + 0x20 + 8) = uStack_f0;
        *(double *)(pFVar3 + lVar16 + 0x30) = local_e8;
        *(double *)(pFVar3 + lVar16 + 0x30 + 8) = dStack_e0;
        *(double *)(pFVar3 + lVar16 + 0x40) = local_d8;
        *(undefined8 *)(pFVar3 + lVar16 + 0x40 + 8) = uStack_d0;
        *(undefined8 *)(pFVar3 + lVar16 + 0x50) = local_c8;
        *(undefined8 *)(pFVar3 + lVar16 + 0x50 + 8) = uStack_c0;
        *(double *)(pFVar3 + lVar16 + 0x60) = local_b8;
        *(double *)(pFVar3 + lVar16 + 0x60 + 8) = dStack_b0;
        *(undefined8 *)(pFVar3 + lVar16 + 0x70) = local_a8;
        *(undefined8 *)(pFVar3 + lVar16 + 0x70 + 8) = uStack_a0;
      }
      iVar15 = param_1->ArrayNum;
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x78;
    } while ((int)uVar17 < iVar15);
  }
  return;
}

// AddLinks @ 146e3f010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOffMeshData::AddLinks
          (FOffMeshData *this,TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2,int param_3,float param_4)

{
  int *piVar1;
  float fVar2;
  dtOffMeshLinkCreateParams *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_1f8 [32];
  dtOffMeshLinkCreateParams *local_1d8;
  dtOffMeshLinkCreateParams *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  FScriptContainerElement *local_1a8;
  FOffMeshData *local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  dtOffMeshLinkCreateParams local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  iVar14 = param_1->ArrayNum;
  uVar17 = 0;
  if (0 < iVar14) {
    lVar18 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar17 < iVar14) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_1d0 = (dtOffMeshLinkCreateParams *)(longlong)iVar14;
        local_1d8 = (dtOffMeshLinkCreateParams *)(longlong)(int)uVar17;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar16 = (param_1->AllocatorInstance).Data + lVar18;
      if (((uint)param_3 < 0x10) && ((*(uint *)(pFVar16 + 0x20) >> (param_3 & 0x1fU) & 1) != 0)) {
        auVar33 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        auVar30 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar9 = *(double *)(pFVar16 + 0x50) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
        local_118.vertsA0[0] = 0.0;
        local_118.vertsA0[1] = 0.0;
        local_118.vertsA0[2] = 0.0;
        local_118.vertsA1[0] = 0.0;
        local_118.vertsA1[1] = 0.0;
        local_118.vertsA1[2] = 0.0;
        local_118.vertsB0[0] = 0.0;
        local_118.vertsB0[1] = 0.0;
        local_118.vertsB0[2] = 0.0;
        local_118.vertsB1[0] = 0.0;
        local_118.vertsB1[1] = 0.0;
        local_118.vertsB1[2] = 0.0;
        local_118.snapRadius = 0.0;
        local_118.snapHeight = 0.0;
        local_118.userID = 0;
        local_118.polyFlag = 0;
        local_118.area = '\0';
        local_118.type = '\0';
        local_118._124_4_ = 0;
        dVar7 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(pFVar16 + 0x40);
        dVar8 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar16 + 0x48);
        uVar36 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_138._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar25 = blendpd(local_138._0_16_,auVar33,2);
        auVar37._8_4_ = SUB84(dVar8,0);
        auVar37._0_8_ = dVar7;
        auVar37._12_4_ = uVar36;
        dVar6 = auVar33._0_8_;
        auVar38._0_8_ = auVar37._8_8_ * local_138._0_8_ - local_138._8_8_ * dVar7;
        auVar38._8_8_ = dVar9 * local_138._8_8_ - dVar6 * dVar8;
        auVar27._8_4_ = SUB84(dVar8,0);
        auVar27._0_8_ = dVar7;
        auVar27._12_4_ = uVar36;
        auVar19._8_4_ = SUB84(dVar10,0);
        auVar19._0_8_ = dVar9;
        auVar19._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar19 = blendpd(auVar27,auVar19,2);
        auVar20._0_8_ = auVar19._0_8_ * dVar6 - auVar25._0_8_ * dVar9;
        auVar20._8_8_ = auVar19._8_8_ * auVar33._8_8_ - auVar25._8_8_ * dVar10;
        auVar19 = blendpd(auVar38,auVar20,2);
        dVar10 = auVar38._8_8_ + auVar38._8_8_;
        dVar5 = auVar20._0_8_ + auVar20._0_8_;
        uVar36 = (undefined4)((ulonglong)dVar5 >> 0x20);
        auVar39._0_8_ = auVar19._0_8_ + auVar19._0_8_;
        auVar39._8_8_ = auVar19._8_8_ + auVar19._8_8_;
        auVar31._8_4_ = SUB84(dVar5,0);
        auVar31._0_8_ = dVar10;
        auVar31._12_4_ = uVar36;
        auVar26._8_4_ = SUB84(dVar5,0);
        auVar26._0_8_ = dVar10;
        auVar26._12_4_ = uVar36;
        auVar19 = blendpd(auVar26,auVar39,2);
        auVar32._0_8_ = auVar31._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
        auVar32._8_8_ = auVar39._0_8_ * auVar30._8_8_ - dVar6 * dVar5;
        auVar21._8_4_ = SUB84(auVar32._8_8_,0);
        auVar21._0_8_ = auVar32._0_8_;
        auVar21._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
        auVar25 = blendpd(auVar30,auVar33,2);
        auVar30._0_8_ = auVar19._0_8_ * dVar6 - auVar25._0_8_ * auVar39._0_8_;
        auVar30._8_8_ = auVar19._8_8_ * auVar33._8_8_ - auVar25._8_8_ * auVar39._8_8_;
        auVar33 = blendpd(auVar32,auVar30,2);
        dVar6 = dVar5 * dVar11 + dVar8 + auVar30._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_158._s_0.Z =
             auVar39._0_8_ * dVar11 + dVar9 + auVar33._0_8_ + (param_2->Translation).ZW.m128d_f64[0]
        ;
        local_158._8_4_ = SUB84(dVar6,0);
        local_158._0_8_ =
             dVar10 * dVar11 + dVar7 + auVar21._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_1a8 = pFVar16;
        local_1a0 = this;
        Unreal2RecastPoint((TVector<double> *)&local_198._s_0,(TVector<double> *)&local_158._s_0);
        dVar9 = *(double *)(pFVar16 + 0x68) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
        local_118.vertsA0[0] = local_198._s_0.X;
        local_118.vertsA0[1] = local_198._s_0.Y;
        local_118.vertsA0[2] = local_198._s_0.Z;
        dVar7 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(pFVar16 + 0x58);
        dVar8 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar16 + 0x60);
        uVar36 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_178._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar33 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        auVar30 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar27 = blendpd(local_178._0_16_,auVar33,2);
        auVar40._8_4_ = SUB84(dVar8,0);
        auVar40._0_8_ = dVar7;
        auVar40._12_4_ = uVar36;
        dVar6 = auVar33._0_8_;
        auVar41._0_8_ = auVar40._8_8_ * local_178._0_8_ - local_178._8_8_ * dVar7;
        auVar41._8_8_ = dVar9 * local_178._8_8_ - dVar6 * dVar8;
        auVar22._8_4_ = SUB84(dVar8,0);
        auVar22._0_8_ = dVar7;
        auVar22._12_4_ = uVar36;
        auVar25._8_4_ = SUB84(dVar10,0);
        auVar25._0_8_ = dVar9;
        auVar25._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar19 = blendpd(auVar22,auVar25,2);
        auVar23._0_8_ = auVar19._0_8_ * dVar6 - auVar27._0_8_ * dVar9;
        auVar23._8_8_ = auVar19._8_8_ * auVar33._8_8_ - auVar27._8_8_ * dVar10;
        auVar19 = blendpd(auVar41,auVar23,2);
        dVar10 = auVar41._8_8_ + auVar41._8_8_;
        dVar5 = auVar23._0_8_ + auVar23._0_8_;
        uVar36 = (undefined4)((ulonglong)dVar5 >> 0x20);
        auVar42._0_8_ = auVar19._0_8_ + auVar19._0_8_;
        auVar42._8_8_ = auVar19._8_8_ + auVar19._8_8_;
        auVar34._8_4_ = SUB84(dVar5,0);
        auVar34._0_8_ = dVar10;
        auVar34._12_4_ = uVar36;
        auVar28._8_4_ = SUB84(dVar5,0);
        auVar28._0_8_ = dVar10;
        auVar28._12_4_ = uVar36;
        auVar19 = blendpd(auVar28,auVar42,2);
        auVar35._0_8_ = auVar34._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar10;
        auVar35._8_8_ = auVar42._0_8_ * auVar30._8_8_ - dVar6 * dVar5;
        auVar24._8_4_ = SUB84(auVar35._8_8_,0);
        auVar24._0_8_ = auVar35._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
        auVar30 = blendpd(auVar30,auVar33,2);
        auVar29._0_8_ = auVar19._0_8_ * dVar6 - auVar30._0_8_ * auVar42._0_8_;
        auVar29._8_8_ = auVar19._8_8_ * auVar33._8_8_ - auVar30._8_8_ * auVar42._8_8_;
        auVar33 = blendpd(auVar35,auVar29,2);
        dVar6 = dVar5 * dVar11 + dVar8 + auVar29._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_138._s_0.Z =
             auVar42._0_8_ * dVar11 + dVar9 + auVar33._0_8_ + (param_2->Translation).ZW.m128d_f64[0]
        ;
        local_138._8_4_ = SUB84(dVar6,0);
        local_138._0_8_ =
             dVar10 * dVar11 + dVar7 + auVar24._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_138._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        Unreal2RecastPoint((TVector<double> *)&local_178._s_0,(TVector<double> *)&local_138._s_0);
        local_118.vertsB0[0] = local_178._s_0.X;
        local_118.vertsB0[1] = local_178._s_0.Y;
        local_118.vertsB0[2] = local_178._s_0.Z;
        local_118.snapRadius = (double)*(float *)(pFVar16 + 0x18);
        local_118.type =
             ((byte)pFVar16[0x2a] & 4 | (byte)pFVar16[0x29] & 2) << 2 |
             (pFVar16[0x28] == (FScriptContainerElement)0x0) + 2U;
        fVar2 = param_4;
        if (((byte)pFVar16[0x29] & 1) != 0) {
          fVar2 = *(float *)(pFVar16 + 0x1c);
        }
        local_118.userID = *(ulong64 *)(pFVar16 + 0x10);
        local_118.snapHeight = (double)fVar2;
        `FOffMeshData::AddLinks'::__l4::<lambda_1>::operator()(&local_1a8,&local_118);
        pdVar3 = (dtOffMeshLinkCreateParams *)(this->LinkParams).AllocatorInstance.Data;
        if ((pdVar3 <= &local_118) &&
           (lVar15 = (longlong)(this->LinkParams).ArrayMax, &local_118 < pdVar3 + lVar15)) {
          local_1c0 = (longlong)(this->LinkParams).ArrayNum;
          local_1b8 = 0x80;
          local_1d8 = &local_118;
          local_1d0 = pdVar3;
          local_1c8 = lVar15;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar14 = (this->LinkParams).ArrayNum;
        piVar1 = &(this->LinkParams).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,(ForAnyElementType *)this,piVar1);
        }
        (this->LinkParams).ArrayNum = iVar14 + 1;
        pFVar16 = (this->LinkParams).AllocatorInstance.Data;
        lVar15 = (longlong)iVar14 * 0x80;
        *(double *)(pFVar16 + lVar15) = local_118.vertsA0[0];
        *(double *)(pFVar16 + lVar15 + 8) = local_118.vertsA0[1];
        *(double *)(pFVar16 + lVar15 + 0x10) = local_118.vertsA0[2];
        *(double *)(pFVar16 + lVar15 + 0x10 + 8) = local_118.vertsA1[0];
        *(double *)(pFVar16 + lVar15 + 0x20) = local_118.vertsA1[1];
        *(double *)(pFVar16 + lVar15 + 0x20 + 8) = local_118.vertsA1[2];
        *(double *)(pFVar16 + lVar15 + 0x30) = local_118.vertsB0[0];
        *(double *)(pFVar16 + lVar15 + 0x30 + 8) = local_118.vertsB0[1];
        *(double *)(pFVar16 + lVar15 + 0x40) = local_118.vertsB0[2];
        *(double *)(pFVar16 + lVar15 + 0x40 + 8) = local_118.vertsB1[0];
        *(double *)(pFVar16 + lVar15 + 0x50) = local_118.vertsB1[1];
        *(double *)(pFVar16 + lVar15 + 0x50 + 8) = local_118.vertsB1[2];
        *(double *)(pFVar16 + lVar15 + 0x60) = local_118.snapRadius;
        *(double *)(pFVar16 + lVar15 + 0x60 + 8) = local_118.snapHeight;
        *(ulong64 *)(pFVar16 + lVar15 + 0x70) = local_118.userID;
        *(undefined8 *)(pFVar16 + lVar15 + 0x70 + 8) = local_118._120_8_;
      }
      iVar14 = param_1->ArrayNum;
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x70;
    } while ((int)uVar17 < iVar14);
  }
  return;
}

// AddSegmentLinks @ 146e3f5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOffMeshData::AddSegmentLinks
          (FOffMeshData *this,TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_1,
          TTransform<double> *param_2,int param_3,float param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uchar uVar13;
  uint uVar14;
  int iVar15;
  UClass *pUVar16;
  int *piVar17;
  longlong lVar18;
  FNavigationLinkBase *this_00;
  uint uVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auStack_268 [32];
  double *local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  FString local_218;
  FName local_208;
  TTransform<double> *local_200;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulong64 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_268;
  iVar15 = param_1->ArrayNum;
  uVar19 = 0;
  if (0 < iVar15) {
    lVar20 = 0;
    local_200 = param_2;
    do {
      uVar14 = 0;
      if ((int)uVar19 < iVar15) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if (uVar14 == 0) {
        local_240 = (FScriptContainerElement *)(longlong)iVar15;
        local_248 = (double *)(longlong)(int)uVar19;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      this_00 = (FNavigationLinkBase *)((param_1->AllocatorInstance).Data + lVar20);
      if (((uint)param_3 < 0x10) &&
         (((this_00->SupportedAgents).field0_0x0.PackedBits >> (param_3 & 0x1fU) & 1) != 0)) {
        auVar46 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        auVar43 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
        local_118 = 0.0;
        dStack_110 = 0.0;
        local_108 = 0.0;
        dStack_100 = 0.0;
        local_f8 = 0.0;
        dStack_f0 = 0.0;
        local_e8 = 0.0;
        dStack_e0 = 0.0;
        local_d8 = 0.0;
        dStack_d0 = 0.0;
        local_c8 = 0.0;
        dStack_c0 = 0.0;
        local_b8 = 0.0;
        dStack_b0 = 0.0;
        local_a8 = 0;
        uStack_a0 = 0;
        dVar9 = (double)this_00[1].NavLinkId.Id * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        dVar6 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(this_00 + 1);
        dVar7 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)&this_00[1].UserId;
        uVar53 = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_1f8._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar33 = blendpd(local_1f8._0_16_,auVar46,2);
        auVar54._8_4_ = SUB84(dVar7,0);
        auVar54._0_8_ = dVar6;
        auVar54._12_4_ = uVar53;
        dVar5 = auVar46._0_8_;
        auVar55._0_8_ = auVar54._8_8_ * local_1f8._0_8_ - local_1f8._8_8_ * dVar6;
        auVar55._8_8_ = dVar9 * local_1f8._8_8_ - dVar5 * dVar7;
        auVar21._8_4_ = SUB84(dVar7,0);
        auVar21._0_8_ = dVar6;
        auVar21._12_4_ = uVar53;
        auVar22._8_4_ = SUB84(dVar10,0);
        auVar22._0_8_ = dVar9;
        auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar22 = blendpd(auVar21,auVar22,2);
        auVar23._0_8_ = auVar22._0_8_ * dVar5 - auVar33._0_8_ * dVar9;
        auVar23._8_8_ = auVar22._8_8_ * auVar46._8_8_ - auVar33._8_8_ * dVar10;
        auVar22 = blendpd(auVar55,auVar23,2);
        dVar10 = auVar55._8_8_ + auVar55._8_8_;
        dVar4 = auVar23._0_8_ + auVar23._0_8_;
        uVar53 = (undefined4)((ulonglong)dVar4 >> 0x20);
        auVar56._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar56._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar44._8_4_ = SUB84(dVar4,0);
        auVar44._0_8_ = dVar10;
        auVar44._12_4_ = uVar53;
        auVar34._8_4_ = SUB84(dVar4,0);
        auVar34._0_8_ = dVar10;
        auVar34._12_4_ = uVar53;
        auVar22 = blendpd(auVar34,auVar56,2);
        auVar45._0_8_ = auVar44._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar10;
        auVar45._8_8_ = auVar56._0_8_ * auVar43._8_8_ - dVar5 * dVar4;
        auVar24._8_4_ = SUB84(auVar45._8_8_,0);
        auVar24._0_8_ = auVar45._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
        auVar43 = blendpd(auVar43,auVar46,2);
        auVar35._0_8_ = auVar22._0_8_ * dVar5 - auVar43._0_8_ * auVar56._0_8_;
        auVar35._8_8_ = auVar22._8_8_ * auVar46._8_8_ - auVar43._8_8_ * auVar56._8_8_;
        auVar46 = blendpd(auVar45,auVar35,2);
        dVar5 = dVar4 * dVar11 + dVar7 + auVar35._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_168._s_0.Z =
             auVar56._0_8_ * dVar11 + dVar9 + auVar46._0_8_ + (param_2->Translation).ZW.m128d_f64[0]
        ;
        local_168._8_4_ = SUB84(dVar5,0);
        local_168._0_8_ =
             dVar10 * dVar11 + dVar6 + auVar24._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_168._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        Unreal2RecastPoint((TVector<double> *)&local_1d8._s_0,(TVector<double> *)&local_168._s_0);
        dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
        local_118 = local_1d8._s_0.X;
        dStack_110 = local_1d8._s_0.Y;
        local_108 = local_1d8._s_0.Z;
        dVar9 = *(double *)&this_00[1].Direction * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        dVar6 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)&this_00[1].SnapRadius;
        dVar7 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)&this_00[1].SupportedAgents;
        uVar53 = (undefined4)((ulonglong)dVar7 >> 0x20);
        local_1f8._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar46 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        auVar43 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar36 = blendpd(local_1f8._0_16_,auVar46,2);
        auVar57._8_4_ = SUB84(dVar7,0);
        auVar57._0_8_ = dVar6;
        auVar57._12_4_ = uVar53;
        dVar5 = auVar46._0_8_;
        auVar58._0_8_ = auVar57._8_8_ * local_1f8._0_8_ - local_1f8._8_8_ * dVar6;
        auVar58._8_8_ = dVar9 * local_1f8._8_8_ - dVar5 * dVar7;
        auVar25._8_4_ = SUB84(dVar7,0);
        auVar25._0_8_ = dVar6;
        auVar25._12_4_ = uVar53;
        auVar33._8_4_ = SUB84(dVar10,0);
        auVar33._0_8_ = dVar9;
        auVar33._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar22 = blendpd(auVar25,auVar33,2);
        auVar26._0_8_ = auVar22._0_8_ * dVar5 - auVar36._0_8_ * dVar9;
        auVar26._8_8_ = auVar22._8_8_ * auVar46._8_8_ - auVar36._8_8_ * dVar10;
        auVar22 = blendpd(auVar58,auVar26,2);
        dVar10 = auVar58._8_8_ + auVar58._8_8_;
        dVar4 = auVar26._0_8_ + auVar26._0_8_;
        uVar53 = (undefined4)((ulonglong)dVar4 >> 0x20);
        auVar59._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar59._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar47._8_4_ = SUB84(dVar4,0);
        auVar47._0_8_ = dVar10;
        auVar47._12_4_ = uVar53;
        auVar37._8_4_ = SUB84(dVar4,0);
        auVar37._0_8_ = dVar10;
        auVar37._12_4_ = uVar53;
        auVar33 = blendpd(auVar43,auVar46,2);
        auVar22 = blendpd(auVar37,auVar59,2);
        auVar48._0_8_ = auVar47._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar10;
        auVar48._8_8_ = auVar59._0_8_ * auVar43._8_8_ - dVar5 * dVar4;
        auVar43._8_4_ = SUB84(auVar48._8_8_,0);
        auVar43._0_8_ = auVar48._0_8_;
        auVar43._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
        auVar38._0_8_ = auVar22._0_8_ * dVar5 - auVar33._0_8_ * auVar59._0_8_;
        auVar38._8_8_ = auVar22._8_8_ * auVar46._8_8_ - auVar33._8_8_ * auVar59._8_8_;
        auVar46 = blendpd(auVar48,auVar38,2);
        dVar5 = dVar11 * dVar4 + dVar7 + auVar38._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_150._s_0.Z =
             dVar11 * auVar59._0_8_ + dVar9 + auVar46._0_8_ + (param_2->Translation).ZW.m128d_f64[0]
        ;
        local_150._8_4_ = SUB84(dVar5,0);
        local_150._0_8_ =
             dVar11 * dVar10 + dVar6 + auVar43._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_150._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        Unreal2RecastPoint((TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_150._s_0);
        auVar46 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
        auVar43 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dStack_100 = local_1c0._s_0.X;
        local_f8 = local_1c0._s_0.Y;
        dStack_f0 = local_1c0._s_0.Z;
        local_1f8._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar6 = (double)this_00[1].AreaClass.Class.field0_0x0 * (param_2->Scale3D).XY.m128d_f64[0];
        dVar7 = (double)this_00[1].AreaClassOb.WeakPtr * (param_2->Scale3D).XY.m128d_f64[1];
        uVar53 = (undefined4)((ulonglong)dVar7 >> 0x20);
        dVar9 = *(double *)(this_00 + 2) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar60._8_4_ = SUB84(dVar7,0);
        auVar60._0_8_ = dVar6;
        auVar60._12_4_ = uVar53;
        dVar5 = auVar46._0_8_;
        auVar33 = blendpd(local_1f8._0_16_,auVar46,2);
        auVar61._0_8_ = auVar60._8_8_ * local_1f8._0_8_ - local_1f8._8_8_ * dVar6;
        auVar61._8_8_ = dVar9 * local_1f8._8_8_ - dVar5 * dVar7;
        auVar27._8_4_ = SUB84(dVar7,0);
        auVar27._0_8_ = dVar6;
        auVar27._12_4_ = uVar53;
        auVar36._8_4_ = SUB84(dVar10,0);
        auVar36._0_8_ = dVar9;
        auVar36._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar22 = blendpd(auVar27,auVar36,2);
        auVar28._0_8_ = auVar22._0_8_ * dVar5 - auVar33._0_8_ * dVar9;
        auVar28._8_8_ = auVar22._8_8_ * auVar46._8_8_ - auVar33._8_8_ * dVar10;
        auVar22 = blendpd(auVar61,auVar28,2);
        dVar10 = auVar61._8_8_ + auVar61._8_8_;
        dVar4 = auVar28._0_8_ + auVar28._0_8_;
        uVar53 = (undefined4)((ulonglong)dVar4 >> 0x20);
        auVar62._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar62._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar49._8_4_ = SUB84(dVar4,0);
        auVar49._0_8_ = dVar10;
        auVar49._12_4_ = uVar53;
        auVar39._8_4_ = SUB84(dVar4,0);
        auVar39._0_8_ = dVar10;
        auVar39._12_4_ = uVar53;
        auVar22 = blendpd(auVar39,auVar62,2);
        auVar50._0_8_ = auVar49._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar10;
        auVar50._8_8_ = auVar62._0_8_ * auVar43._8_8_ - dVar5 * dVar4;
        auVar29._8_4_ = SUB84(auVar50._8_8_,0);
        auVar29._0_8_ = auVar50._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
        auVar43 = blendpd(auVar43,auVar46,2);
        auVar40._0_8_ = auVar22._0_8_ * dVar5 - auVar43._0_8_ * auVar62._0_8_;
        auVar40._8_8_ = auVar22._8_8_ * auVar46._8_8_ - auVar43._8_8_ * auVar62._8_8_;
        auVar46 = blendpd(auVar50,auVar40,2);
        dVar5 = dVar4 * dVar11 + dVar7 + auVar40._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_138._s_0.Z =
             auVar62._0_8_ * dVar11 + dVar9 + auVar46._0_8_ + (param_2->Translation).ZW.m128d_f64[0]
        ;
        local_138._8_4_ = SUB84(dVar5,0);
        local_138._0_8_ =
             dVar10 * dVar11 + dVar6 + auVar29._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_138._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        Unreal2RecastPoint((TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_138._s_0);
        auVar46 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        auVar43 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
        local_e8 = local_1a8._s_0.X;
        dStack_e0 = local_1a8._s_0.Y;
        local_d8 = local_1a8._s_0.Z;
        local_188._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar6 = *(double *)&this_00[2].UserId * (param_2->Scale3D).XY.m128d_f64[0];
        dVar7 = (double)this_00[2].NavLinkId.Id * (param_2->Scale3D).XY.m128d_f64[1];
        uVar53 = (undefined4)((ulonglong)dVar7 >> 0x20);
        dVar9 = *(double *)&this_00[2].SnapRadius * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar63._8_4_ = SUB84(dVar7,0);
        auVar63._0_8_ = dVar6;
        auVar63._12_4_ = uVar53;
        auVar33 = blendpd(local_188._0_16_,auVar46,2);
        dVar5 = auVar46._0_8_;
        auVar64._0_8_ = auVar63._8_8_ * local_188._0_8_ - local_188._8_8_ * dVar6;
        auVar64._8_8_ = dVar9 * local_188._8_8_ - dVar5 * dVar7;
        auVar30._8_4_ = SUB84(dVar7,0);
        auVar30._0_8_ = dVar6;
        auVar30._12_4_ = uVar53;
        auVar8._8_4_ = SUB84(dVar10,0);
        auVar8._0_8_ = dVar9;
        auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar22 = blendpd(auVar30,auVar8,2);
        auVar31._0_8_ = auVar22._0_8_ * dVar5 - auVar33._0_8_ * dVar9;
        auVar31._8_8_ = auVar22._8_8_ * auVar46._8_8_ - auVar33._8_8_ * dVar10;
        dVar10 = auVar64._8_8_ + auVar64._8_8_;
        dVar4 = auVar31._0_8_ + auVar31._0_8_;
        uVar53 = (undefined4)((ulonglong)dVar4 >> 0x20);
        auVar22 = blendpd(auVar64,auVar31,2);
        auVar51._8_4_ = SUB84(dVar4,0);
        auVar51._0_8_ = dVar10;
        auVar51._12_4_ = uVar53;
        auVar41._8_4_ = SUB84(dVar4,0);
        auVar41._0_8_ = dVar10;
        auVar41._12_4_ = uVar53;
        auVar65._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar65._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar22 = blendpd(auVar41,auVar65,2);
        auVar52._0_8_ = auVar51._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar10;
        auVar52._8_8_ = auVar65._0_8_ * auVar43._8_8_ - dVar5 * dVar4;
        auVar43 = blendpd(auVar43,auVar46,2);
        auVar32._8_4_ = SUB84(auVar52._8_8_,0);
        auVar32._0_8_ = auVar52._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
        auVar42._0_8_ = auVar22._0_8_ * dVar5 - auVar43._0_8_ * auVar65._0_8_;
        auVar42._8_8_ = auVar22._8_8_ * auVar46._8_8_ - auVar43._8_8_ * auVar65._8_8_;
        dVar5 = dVar4 * dVar11 + dVar7 + auVar42._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_1f8._8_4_ = SUB84(dVar5,0);
        local_1f8._0_8_ =
             dVar10 * dVar11 + dVar6 + auVar32._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_1f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar46 = blendpd(auVar52,auVar42,2);
        local_1f8._s_0.Z =
             auVar65._0_8_ * dVar11 + dVar9 + auVar46._0_8_ + (param_2->Translation).ZW.m128d_f64[0]
        ;
        Unreal2RecastPoint((TVector<double> *)&local_188._s_0,(TVector<double> *)&local_1f8._s_0);
        dStack_d0 = local_188._s_0.X;
        local_c8 = local_188._s_0.Y;
        dStack_c0 = local_188._s_0.Z;
        uStack_a0._0_4_ =
             CONCAT13(((this_00->Direction).Value == '\0') + '\x04',(undefined3)uStack_a0);
        local_b8 = (double)this_00->SnapRadius;
        fVar1 = param_4;
        if (this_00->bUseSnapHeight != 0) {
          fVar1 = this_00->SnapHeight;
        }
        dStack_b0 = (double)fVar1;
        local_a8 = (this_00->NavLinkId).Id;
        pUVar16 = FNavigationLinkBase::GetAreaClass(this_00);
        piVar17 = TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                  ::Find((TMapBase<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
                          *)this->AreaClassToIdMap,pUVar16);
        if (piVar17 == (int *)0x0) {
          if (2 < (byte)LogNavigation._0_1_) {
            if (pUVar16 == (UClass *)0x0) {
              ::FString::FString(&local_218,L"None");
            }
            else {
              local_208 = (FName)pUVar16->_padding_;
              ::FName::ToString(&local_208,&local_218);
            }
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_FOffMeshData::AddSegmentLinks(TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_>_const&___ptr64,UE::Math::TTransform<double>_const&___ptr64,int,float)___ptr64'
                        ::__l13::LOG_Static,(FLogCategoryBase *)&LogNavigation);
            if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_218.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar13 = IntCastChecked<unsigned_char,int>(*piVar17);
          uStack_a0 = CONCAT62(CONCAT51(uStack_a0._3_5_,uVar13),this->FlagsPerArea[*piVar17]);
        }
        pFVar2 = (this->LinkParams).AllocatorInstance.Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_118) &&
           (lVar18 = (longlong)(this->LinkParams).ArrayMax,
           (FScriptContainerElement *)&local_118 < pFVar2 + lVar18 * 0x80)) {
          local_230 = (longlong)(this->LinkParams).ArrayNum;
          local_228 = 0x80;
          local_248 = &local_118;
          local_240 = pFVar2;
          local_238 = lVar18;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar15 = (this->LinkParams).ArrayNum;
        piVar17 = &(this->LinkParams).ArrayMax;
        if (iVar15 == *piVar17) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x880,(ForAnyElementType *)this,piVar17);
        }
        (this->LinkParams).ArrayNum = iVar15 + 1;
        pFVar2 = (this->LinkParams).AllocatorInstance.Data;
        lVar18 = (longlong)iVar15 * 0x80;
        *(double *)(pFVar2 + lVar18) = local_118;
        *(double *)(pFVar2 + lVar18 + 8) = dStack_110;
        *(double *)(pFVar2 + lVar18 + 0x10) = local_108;
        *(double *)(pFVar2 + lVar18 + 0x10 + 8) = dStack_100;
        *(double *)(pFVar2 + lVar18 + 0x20) = local_f8;
        *(double *)(pFVar2 + lVar18 + 0x20 + 8) = dStack_f0;
        *(double *)(pFVar2 + lVar18 + 0x30) = local_e8;
        *(double *)(pFVar2 + lVar18 + 0x30 + 8) = dStack_e0;
        *(double *)(pFVar2 + lVar18 + 0x40) = local_d8;
        *(double *)(pFVar2 + lVar18 + 0x40 + 8) = dStack_d0;
        *(double *)(pFVar2 + lVar18 + 0x50) = local_c8;
        *(double *)(pFVar2 + lVar18 + 0x50 + 8) = dStack_c0;
        *(double *)(pFVar2 + lVar18 + 0x60) = local_b8;
        *(double *)(pFVar2 + lVar18 + 0x60 + 8) = dStack_b0;
        *(ulong64 *)(pFVar2 + lVar18 + 0x70) = local_a8;
        *(undefined8 *)(pFVar2 + lVar18 + 0x70 + 8) = uStack_a0;
        param_2 = local_200;
      }
      iVar15 = param_1->ArrayNum;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0xa0;
    } while ((int)uVar19 < iVar15);
  }
  return;
}

