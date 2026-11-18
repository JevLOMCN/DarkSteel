// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// FGeometryCollectionProximitySpatial @ 1440678c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGeometryCollectionProximitySpatial * __thiscall
UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::
FGeometryCollectionProximitySpatial
          (FGeometryCollectionProximitySpatial *this,FGeometryCollection *param_1,float param_2)

{
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStackY_1e8 [32];
  <lambda_1> local_1a8;
  FGeometryCollection *local_1a0;
  undefined1 local_198 [12];
  uint uStack_18c;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  undefined8 local_170;
  FGeometryCollectionProximitySpatial *local_168;
  FGeometryCollection **local_160;
  FBinNormals *local_158;
  FBinNormals local_150;
  ulonglong local_58;
  int iVar5;
  int *piVar6;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  piVar6 = (int *)0x0;
  iVar5 = 0;
  iVar4 = 0;
  (this->TransformedVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformedVertices).ArrayNum = 0;
  (this->TransformedVertices).ArrayMax = 0;
  (this->SurfaceNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceNormals).ArrayNum = 0;
  (this->SurfaceNormals).ArrayMax = 0;
  (this->GeoInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeoInfo).ArrayNum = 0;
  (this->GeoInfo).ArrayMax = 0;
  (this->KnownProximity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KnownProximity).ArrayNum = 0;
  (this->KnownProximity).ArrayMax = 0;
  (this->OverallBounds).IsValid = '\0';
  local_1a0 = param_1;
  pTVar1 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,FGeometryCollection::VerticesGroup);
  piVar2 = (int *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar2 = piVar6;
  }
  iVar3 = iVar4;
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TransformedVertices,iVar3,Default);
  local_178 = (undefined1  [8])0x0;
  local_170._0_4_ = 0;
  local_170._4_4_ = 0;
  GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
            ((TManagedArray<UE::Math::TTransform<float>_> *)&local_1a0->_padding_,
             (TManagedArray<int> *)&local_1a0->_padding_,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_178);
  local_160 = &local_1a0;
  local_158 = (FBinNormals *)local_178;
  local_168 = this;
  pTVar1 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&local_1a0->_padding_,FGeometryCollection::VerticesGroup);
  piVar2 = (int *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar2 = piVar6;
  }
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
  }
  local_198._0_8_ = (void **)0x0;
  local_188._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::TransformVertices'::__l2::<lambda_1>,void,int>
       ::Call;
  local_188._8_8_ = &local_168;
  stack0xfffffffffffffe70 = (FGeometryCollectionProximitySpatial **)((ulonglong)uStack_18c << 0x20);
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar4,1,(TFunctionRef<void___cdecl(int)> *)local_188,local_1a8,None
             ,(TArrayView<std::nullptr_t,int> *)local_198);
  if (local_178 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_178);
  }
  local_1a0 = param_1;
  pTVar1 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,FGeometryCollection::FacesGroup);
  piVar2 = (int *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    piVar2 = piVar6;
  }
  if (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SurfaceNormals,iVar5,Default);
  local_188._8_8_ = &local_1a0;
  local_198._0_8_ = (void **)0x0;
  local_178 = (undefined1  [8])
              Core::Private::Function::
              TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::GenerateSurfaceNormals'::__l2::<lambda_1>,void,int>
              ::Call;
  local_170 = local_188;
  stack0xfffffffffffffe70 =
       (FGeometryCollectionProximitySpatial **)
       ((ulonglong)stack0xfffffffffffffe70 & 0xffffffff00000000);
  local_188._0_8_ = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar5,1,(TFunctionRef<void___cdecl(int)> *)local_178,local_1a8,None
             ,(TArrayView<std::nullptr_t,int> *)local_198);
  InitProximityFromVertices(this,param_1,param_2);
  local_1a0 = param_1;
  FBinNormals::FBinNormals(&local_150);
  local_160 = &local_1a0;
  local_158 = &local_150;
  local_188._0_8_ = (void **)0x0;
  local_198._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitGeoNormalBins'::__l2::<lambda_1>,void,int>
       ::Call;
  unique0x00008e00 = &local_168;
  local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
  local_168 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->GeoInfo).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)local_198,local_1a8,None,
             (TArrayView<std::nullptr_t,int> *)local_188);
  InitCandidateContacts(this,param_1,param_2);
  local_160 = &local_1a0;
  local_158 = (FBinNormals *)CONCAT44(local_158._4_4_,param_2);
  local_198._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::ComputeCoplanarContacts'::__l2::<lambda_1>,void,int>
       ::Call;
  unique0x00008e00 = &local_168;
  local_188._0_8_ = (void **)0x0;
  local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
  local_1a0 = param_1;
  local_168 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->GeoInfo).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)local_198,local_1a8,None,
             (TArrayView<std::nullptr_t,int> *)local_188);
  return this;
}

// operator() @ 14406dc40

/* WARNING: Removing unreachable block (ram,0x00014406e2b1) */
/* WARNING: Removing unreachable block (ram,0x00014406e2c8) */
/* WARNING: Removing unreachable block (ram,0x00014406e2ce) */
/* WARNING: Removing unreachable block (ram,0x00014406e2d4) */
/* WARNING: Removing unreachable block (ram,0x00014406e2da) */
/* WARNING: Removing unreachable block (ram,0x00014406e2dd) */
/* WARNING: Removing unreachable block (ram,0x00014406e2e2) */
/* WARNING: Removing unreachable block (ram,0x00014406e2e8) */
/* WARNING: Removing unreachable block (ram,0x00014406e2ed) */
/* WARNING: Removing unreachable block (ram,0x00014406e40e) */
/* WARNING: Removing unreachable block (ram,0x00014406e507) */

void __thiscall
`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::ComputeCoplanarContacts'::__l2
::<lambda_1>::operator()(void *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  uint *puVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  ForElementType<unsigned_int> FVar28;
  longlong lVar29;
  longlong *plVar30;
  uint uVar31;
  ForElementType<unsigned_int> FVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack_27c;
  float fStack_278;
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_266 [2];
  int local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  longlong local_250;
  longlong local_248;
  int local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_228;
  uint uStack_224;
  ForElementType<unsigned_int> FStack_220;
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  ForElementType<unsigned_int> local_1e0;
  undefined8 uStack_1d8;
  uint local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  uint *local_1c0;
  uint *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  uint *local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_158;
  int local_148;
  int local_144;
  uint *local_140;
  longlong *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 local_ac;
  
  lVar24 = *(longlong *)this;
  local_258 = (uint)~param_1 >> 0x1f;
  uVar15 = 0;
  if (param_1 < *(int *)(lVar24 + 0x28)) {
    uVar15 = local_258;
  }
  local_264 = param_1;
  local_200 = this;
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar24 = *(longlong *)(lVar24 + 0x20);
  iVar25 = 0;
  lVar29 = (longlong)param_1 * 0x1b8;
  local_1d0 = 0;
  FVar32 = (ForElementType<unsigned_int>)(lVar24 + 0x178 + lVar29);
  local_1f0 = (longlong *)(lVar24 + 0x168 + lVar29);
  uVar15 = *(int *)((longlong)FVar32 + 0x18);
  uStack_1d8._4_4_ = 0;
  uVar16 = 1;
  if (uVar15 != 0) {
    FVar28 = *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar28 = FVar32;
    }
    uVar16 = *(uint *)FVar28;
    while (uVar16 == 0) {
      lVar18 = (longlong)iVar25;
      local_1d0 = local_1d0 + 0x20;
      iVar25 = iVar25 + 1;
      uStack_1d8._4_4_ = uVar15;
      uVar16 = 1;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14406dd7d;
      uVar16 = ((uint *)((longlong)FVar28 + 4))[lVar18];
    }
    uVar16 = -uVar16 & uVar16;
    uVar19 = (ulonglong)uVar16 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_144 = (int)lVar18;
    uStack_1d8._4_4_ = local_1d0 + -1 + local_144;
    if ((int)uVar15 < (int)uStack_1d8._4_4_) {
      uStack_1d8._4_4_ = uVar15;
    }
  }
LAB_14406dd7d:
  uStack_1cc = local_ac;
  iStack_1c8 = *(int *)(lVar29 + 0x170 + lVar24) - *(int *)(lVar29 + 0x19c + lVar24);
  uVar31 = *(uint *)(lVar29 + 400 + lVar24);
  uVar27 = (int)uVar31 >> 5;
  bVar17 = (byte)uVar31 & 0x1f;
  uStack_224 = 1 << bVar17;
  uVar23 = uVar31 & 0xffffffe0;
  uVar22 = -1 << bVar17;
  uStack_1e8 = CONCAT44(uVar16,iVar25);
  uStack_1d8._0_4_ = 0xffffffff;
  TStack_130._padding_ = uStack_1e8;
  TStack_130._28_4_ = local_ac;
  TStack_130.BaseBitIndex = local_1d0;
  uStack_110 = CONCAT44(uStack_1c4,iStack_1c8);
  TStack_130.UnvisitedBitMask = 0xffffffff;
  TStack_130.CurrentBitIndex = uStack_1d8._4_4_;
  local_260 = uVar27;
  local_228 = uVar27;
  FStack_220 = FVar32;
  local_218 = uVar22;
  uStack_214 = uVar31;
  uStack_210 = uVar23;
  local_138 = local_1f0;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar32;
  if ((((int)uVar31 < 0) || ((int)uVar15 < (int)uVar31)) &&
     (local_1e0 = FVar32,
     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  fVar12 = __real_bf7ff972;
  uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar15 = *(uint *)((longlong)FVar32 + 0x18);
  if (uVar31 != uVar15) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar32 = *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x10);
    }
    uVar22 = uVar22 & *(uint *)((longlong)FVar32 + (longlong)(int)uVar27 * 4);
    while (uVar22 == 0) {
      uStack_210 = uVar23 + 0x20;
      local_228 = uVar27 + 1;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_228)
      goto LAB_14406dec9;
      uVar22 = ((uint *)((longlong)FVar32 + 4))[(int)uVar27];
      local_218 = 0xffffffff;
      uVar27 = local_228;
      uVar23 = uStack_210;
    }
    uStack_224 = -uVar22 & uVar22;
    uVar19 = (ulonglong)uStack_224 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_148 = (int)lVar18;
    uStack_214 = (uVar23 - 1) + local_148;
    if ((int)uVar15 < (int)uStack_214) {
LAB_14406dec9:
      uStack_214 = uVar15;
    }
  }
  uStack_1e8 = CONCAT44(uStack_224,local_228);
  uStack_1d8 = CONCAT44(uStack_214,local_218);
  local_1f0 = (longlong *)(lVar24 + 0x168 + lVar29);
  iStack_1c8 = *(int *)(lVar29 + 0x170 + lVar24) - *(int *)(lVar29 + 0x19c + lVar24);
  local_1e0 = FStack_220;
  local_1d0 = uStack_210;
  local_e8._4_4_ = uStack_20c;
  local_e8._0_4_ = uStack_210;
  local_e8._8_4_ = iStack_1c8;
  local_e8._12_4_ = uStack_1c4;
  local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)FStack_220;
  local_108 = local_1f0;
  uStack_100 = uStack_1e8;
  uStack_f0 = uStack_1d8;
  do {
    plVar9 = local_138;
    if ((int)local_138[1] - *(int *)((longlong)local_138 + 0x34) != (int)uStack_110) {
      local_268 = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_268);
    }
    plVar30 = local_200;
    if (((TStack_130.CurrentBitIndex == uStack_f0._4_4_) && (TStack_130.Array == local_f8)) &&
       (plVar9 == local_108)) {
      return;
    }
    lVar24 = *plVar9;
    lVar29 = (longlong)TStack_130.CurrentBitIndex * 0x10;
    local_250 = lVar29;
    local_248 = lVar24;
    if (*(char *)(lVar29 + 4 + lVar24) == '\0') {
      lVar18 = *local_200;
      uVar15 = 0;
      if (local_264 < *(int *)(lVar18 + 0x38)) {
        uVar15 = local_258;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar18 = *(longlong *)(lVar18 + 0x30);
      local_23c = *(uint *)(lVar29 + lVar24);
      lVar26 = (longlong)local_264 * 0x50;
      if (*(int *)(lVar26 + 8 + lVar18) != *(int *)(lVar26 + 0x34 + lVar18)) {
        lVar20 = lVar18 + 0x38 + lVar26;
        lVar8 = *(longlong *)(lVar20 + 8);
        if (lVar8 != 0) {
          lVar20 = lVar8;
        }
        iVar25 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar26 + 0x48 + lVar18) - 1U & local_23c) *
                                   4);
        if (iVar25 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar26 + lVar18) + (longlong)iVar25 * 0xc) == local_23c)
            goto LAB_14406ead8;
            iVar25 = *(int *)(*(longlong *)(lVar26 + lVar18) + 4 + (longlong)iVar25 * 0xc);
          } while (iVar25 != -1);
        }
      }
      local_240 = 0;
      local_1f8 = 0;
      local_1b0 = (longlong)(int)local_23c;
      do {
        lVar18 = local_1f8;
        iVar25 = local_240;
        if (*(char *)(lVar29 + 4 + lVar24) != '\0') break;
        lVar26 = *plVar30;
        uVar31 = (local_240 + 10) % 0x14;
        uVar15 = 0;
        if (local_264 < *(int *)(lVar26 + 0x28)) {
          uVar15 = local_258;
        }
        local_238 = uVar31;
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar26 = *(longlong *)(lVar26 + 0x20) + (longlong)local_264 * 0x1b8;
        local_180 = lVar26;
        if ((*(int *)(lVar26 + 0x140) <= iVar25) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_230 = *(uint *)(lVar18 + 8 + lVar26);
        uVar19 = (ulonglong)(int)local_230;
        puVar21 = *(uint **)(lVar18 + lVar26);
        local_140 = puVar21 + uVar19;
        local_1a8 = (longlong)(int)uVar31;
LAB_14406e17b:
        while( true ) {
          local_1b8 = puVar21;
          if (*(int *)(lVar18 + 8 + lVar26) != (int)uVar19) {
            local_267 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_267);
          }
          if (puVar21 == local_140) break;
          local_25c = *puVar21;
          lVar29 = (longlong)(int)local_25c;
          local_260 = ~local_25c >> 0x1f;
          lVar24 = *(longlong *)plVar30[1];
          uVar15 = 0;
          if ((int)local_25c < *(int *)(lVar24 + 0x2f8)) {
            uVar15 = local_260;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar24 = *(longlong *)(lVar24 + 0x2f0);
          plVar9 = (longlong *)*plVar30;
          local_178 = *(longlong *)(lVar24 + lVar29 * 0xc);
          iVar25 = *(int *)(lVar24 + 8 + lVar29 * 0xc);
          lVar18 = (longlong)iVar25;
          lVar24 = (longlong)(int)local_178;
          if (((int)local_178 < 0 || (int)plVar9[1] <= (int)local_178) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar26 = *plVar9;
          fVar36 = *(float *)(lVar26 + 8 + lVar24 * 0xc);
          uVar7 = *(undefined8 *)(lVar26 + lVar24 * 0xc);
          fStack_27c = (float)uVar7;
          fStack_278 = (float)((ulonglong)uVar7 >> 0x20);
          lVar24 = (longlong)local_178._4_4_;
          plVar9 = (longlong *)*plVar30;
          if ((local_178 < 0 || (int)plVar9[1] <= local_178._4_4_) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar26 = *plVar9;
          fVar35 = *(float *)(lVar26 + lVar24 * 0xc);
          fVar2 = *(float *)(lVar26 + 4 + lVar24 * 0xc);
          fVar3 = *(float *)(lVar26 + 8 + lVar24 * 0xc);
          fVar34 = fVar35;
          if (fStack_27c <= fVar35) {
            fVar34 = fStack_27c;
          }
          fVar33 = fVar2;
          if (fStack_278 <= fVar2) {
            fVar33 = fStack_278;
          }
          if (fVar35 <= fStack_27c) {
            fVar35 = fStack_27c;
          }
          if (fVar2 <= fStack_278) {
            fVar2 = fStack_278;
          }
          fVar11 = fVar3;
          if (fVar3 <= fVar36) {
            fVar11 = fVar36;
          }
          if (fVar36 <= fVar3) {
            fVar3 = fVar36;
          }
          plVar9 = (longlong *)*plVar30;
          if ((iVar25 < 0 || (int)plVar9[1] <= iVar25) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar26 = local_1b0;
          uVar15 = local_23c;
          lVar24 = *plVar9;
          fVar36 = *(float *)(lVar24 + lVar18 * 0xc);
          fVar4 = *(float *)(lVar24 + 4 + lVar18 * 0xc);
          fVar5 = *(float *)(lVar24 + 8 + lVar18 * 0xc);
          fVar6 = fVar36;
          if (fVar34 <= fVar36) {
            fVar6 = fVar34;
          }
          fVar34 = fVar4;
          if (fVar33 <= fVar4) {
            fVar34 = fVar33;
          }
          if (fVar36 <= fVar35) {
            fVar36 = fVar35;
          }
          if (fVar4 <= fVar2) {
            fVar4 = fVar2;
          }
          fVar35 = fVar5;
          if (fVar5 <= fVar11) {
            fVar35 = fVar11;
          }
          if (fVar3 <= fVar5) {
            fVar5 = fVar3;
          }
          lVar24 = *plVar30;
          uVar22 = ~local_23c;
          uVar31 = 0;
          if ((int)local_23c < *(int *)(lVar24 + 0x28)) {
            uVar31 = uVar22 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          fVar3 = *(float *)(plVar30 + 2);
          lVar24 = *(longlong *)(lVar24 + 0x20);
          lVar18 = lVar26 * 0x1b8;
          if (((((*(float *)(lVar18 + 0x148 + lVar24) <= fVar3 + fVar36) &&
                (pfVar1 = (float *)(lVar18 + 0x154 + lVar24),
                fVar6 - fVar3 < *pfVar1 || fVar6 - fVar3 == *pfVar1)) &&
               (*(float *)(lVar18 + 0x14c + lVar24) <= fVar3 + fVar4)) &&
              ((pfVar1 = (float *)(lVar18 + 0x158 + lVar24),
               fVar34 - fVar3 < *pfVar1 || fVar34 - fVar3 == *pfVar1 &&
               (*(float *)(lVar18 + 0x150 + lVar24) <= fVar3 + fVar35)))) &&
             (pfVar1 = (float *)(lVar18 + 0x15c + lVar24),
             fVar5 - fVar3 < *pfVar1 || fVar5 - fVar3 == *pfVar1)) {
            lVar24 = *plVar30;
            uVar31 = 0;
            if ((int)uVar15 < *(int *)(lVar24 + 0x28)) {
              uVar31 = uVar22 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar24 = *(longlong *)(lVar24 + 0x20) + lVar26 * 0x1b8;
            uVar15 = 0;
            if ((int)local_238 < *(int *)(lVar24 + 0x140)) {
              uVar15 = ~local_238 >> 0x1f;
            }
            local_190 = lVar24;
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_198 = local_1a8 * 0x10;
            local_234 = *(uint *)(local_198 + 8 + lVar24);
            uVar19 = (ulonglong)(int)local_234;
            puVar21 = *(uint **)(local_198 + lVar24);
            local_188 = puVar21 + uVar19;
            local_208 = lVar29;
            local_1a0 = lVar29;
            do {
              puVar13 = local_188;
              local_1c0 = puVar21;
              if (*(int *)(local_198 + 8 + lVar24) != (int)uVar19) {
                local_266[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_266);
              }
              if (puVar21 == puVar13) goto LAB_14406ea6e;
              uVar15 = *puVar21;
              lVar29 = (longlong)(int)uVar15;
              lVar24 = *plVar30;
              uVar22 = ~uVar15 >> 0x1f;
              uVar31 = 0;
              if ((int)uVar15 < *(int *)(lVar24 + 0x18)) {
                uVar31 = uVar22;
              }
              if ((uVar31 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar18 = *plVar30;
              lVar24 = *(longlong *)(lVar24 + 0x10);
              uVar31 = 0;
              if ((int)local_25c < *(int *)(lVar18 + 0x18)) {
                uVar31 = local_260;
              }
              if ((uVar31 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar18 = *(longlong *)(lVar18 + 0x10);
              if (*(float *)(lVar18 + 4 + local_208 * 0xc) * *(float *)(lVar24 + 4 + lVar29 * 0xc) +
                  *(float *)(lVar18 + local_208 * 0xc) * *(float *)(lVar24 + lVar29 * 0xc) +
                  *(float *)(lVar18 + 8 + local_208 * 0xc) * *(float *)(lVar24 + 8 + lVar29 * 0xc) <
                  fVar12) {
                plVar9 = (longlong *)*plVar30;
                fVar36 = *(float *)(plVar30 + 2);
                lVar24 = *(longlong *)plVar30[1];
                uVar31 = 0;
                if ((int)local_25c < *(int *)(lVar24 + 0x2f8)) {
                  uVar31 = local_260;
                }
                if ((uVar31 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar31 = *(uint *)(*(longlong *)(lVar24 + 0x2f0) + local_208 * 0xc);
                uVar27 = 0;
                if ((int)uVar31 < (int)plVar9[1]) {
                  uVar27 = ~uVar31 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_168 = *(undefined8 *)(*plVar9 + (longlong)(int)uVar31 * 0xc);
                fVar35 = *(float *)(*plVar9 + 8 + (longlong)(int)uVar31 * 0xc);
                uVar31 = 0;
                if ((int)uVar15 < *(int *)(lVar24 + 0x2f8)) {
                  uVar31 = uVar22;
                }
                if ((uVar31 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar31 = *(uint *)(*(longlong *)(lVar24 + 0x2f0) + lVar29 * 0xc);
                uVar27 = 0;
                if ((int)uVar31 < (int)plVar9[1]) {
                  uVar27 = ~uVar31 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_158 = *(undefined8 *)(*plVar9 + (longlong)(int)uVar31 * 0xc);
                fVar3 = *(float *)(*plVar9 + 8 + (longlong)(int)uVar31 * 0xc);
                uVar31 = 0;
                if ((int)uVar15 < (int)plVar9[3]) {
                  uVar31 = uVar22;
                }
                if ((uVar31 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                plVar30 = local_200;
                local_d8 = *(undefined8 *)(plVar9[2] + lVar29 * 0xc);
                if (((float)((uint)(((float)local_168 - (float)local_158) * (float)local_d8 +
                                    (local_168._4_4_ - local_158._4_4_) *
                                    (float)((ulonglong)local_d8 >> 0x20) +
                                   (fVar35 - fVar3) * *(float *)(plVar9[2] + 8 + lVar29 * 0xc)) &
                            uVar16) < fVar36) &&
                   (bVar14 = UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::
                             DoFacesOverlap((FGeometryCollectionProximitySpatial *)*local_200,
                                            *(FGeometryCollection **)local_200[1],local_25c,uVar15),
                   bVar14)) goto LAB_14406ea53;
              }
              puVar21 = local_1c0 + 1;
              uVar19 = (ulonglong)local_234;
              lVar24 = local_190;
            } while( true );
          }
          puVar21 = puVar21 + 1;
          uVar19 = (ulonglong)local_230;
          lVar26 = local_180;
          lVar24 = local_248;
          lVar29 = local_250;
          lVar18 = local_1f8;
        }
LAB_14406eaaf:
        local_1f8 = lVar18 + 0x10;
        local_240 = local_240 + 1;
      } while (local_240 < 0x14);
    }
LAB_14406ead8:
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  } while( true );
LAB_14406ea53:
  *(undefined1 *)(local_250 + 4 + local_248) = 1;
LAB_14406ea6e:
  lVar24 = local_248;
  lVar29 = local_250;
  lVar18 = local_1f8;
  if (*(char *)(local_250 + 4 + local_248) != '\0') goto LAB_14406eaaf;
  puVar21 = local_1b8 + 1;
  uVar19 = (ulonglong)local_230;
  lVar26 = local_180;
  goto LAB_14406e17b;
}

// operator() @ 14406edf0

void __thiscall
`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::GenerateSurfaceNormals'::__l2
::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  plVar1 = *(longlong **)this;
  lVar13 = (longlong)param_1;
  lVar9 = **(longlong **)((longlong)this + 8);
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar9 + 0x2f8)) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = *(uint *)(*(longlong *)(lVar9 + 0x2f0) + lVar13 * 0xc);
  lVar11 = (longlong)(int)uVar7;
  uVar8 = 0;
  if ((int)uVar7 < (int)plVar1[1]) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar2 = *plVar1;
  plVar1 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar9 + 0x2f8)) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = *(uint *)(*(longlong *)(lVar9 + 0x2f0) + 4 + lVar13 * 0xc);
  lVar12 = (longlong)(int)uVar7;
  uVar8 = 0;
  if ((int)uVar7 < (int)plVar1[1]) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *plVar1;
  fVar18 = *(float *)(lVar2 + lVar11 * 0xc) - *(float *)(lVar3 + lVar12 * 0xc);
  fVar19 = *(float *)(lVar2 + 4 + lVar11 * 0xc) - *(float *)(lVar3 + 4 + lVar12 * 0xc);
  fVar17 = *(float *)(lVar2 + 8 + lVar11 * 0xc) - *(float *)(lVar3 + 8 + lVar12 * 0xc);
  plVar1 = *(longlong **)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar9 + 0x2f8)) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = *(uint *)(*(longlong *)(lVar9 + 0x2f0) + 8 + lVar13 * 0xc);
  lVar11 = (longlong)(int)uVar7;
  uVar8 = 0;
  if ((int)uVar7 < (int)plVar1[1]) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar4 = *(longlong **)this;
  lVar2 = *plVar1;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar9 + 0x2f8)) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = *(uint *)(*(longlong *)(lVar9 + 0x2f0) + 4 + lVar13 * 0xc);
  lVar9 = (longlong)(int)uVar7;
  uVar8 = 0;
  if ((int)uVar7 < (int)plVar4[1]) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar12 = *plVar4;
  lVar3 = *(longlong *)this;
  fVar15 = *(float *)(lVar2 + 4 + lVar11 * 0xc) - *(float *)(lVar12 + 4 + lVar9 * 0xc);
  fVar14 = *(float *)(lVar2 + 8 + lVar11 * 0xc) - *(float *)(lVar12 + 8 + lVar9 * 0xc);
  fVar16 = *(float *)(lVar2 + lVar11 * 0xc) - *(float *)(lVar12 + lVar9 * 0xc);
  uVar7 = 0;
  if (param_1 < *(int *)(lVar3 + 0x18)) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar9 = *(longlong *)(lVar3 + 0x10);
  *(float *)(lVar9 + lVar13 * 0xc) = fVar19 * fVar14 - fVar17 * fVar15;
  *(float *)(lVar9 + 4 + lVar13 * 0xc) = fVar17 * fVar16 - fVar18 * fVar14;
  *(float *)(lVar9 + 8 + lVar13 * 0xc) = fVar18 * fVar15 - fVar19 * fVar16;
  lVar9 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar9 + 0x18)) {
    uVar7 = uVar10;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x10);
  fVar17 = *(float *)(lVar9 + lVar13 * 0xc);
  fVar18 = *(float *)(lVar9 + 4 + lVar13 * 0xc);
  fVar19 = *(float *)(lVar9 + 8 + lVar13 * 0xc);
  fVar14 = fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19;
  if (__real_322bcc77 < fVar14) {
    fVar14 = __real_3f800000 / SQRT(fVar14);
    *(float *)(lVar9 + lVar13 * 0xc) = fVar17 * fVar14;
    *(float *)(lVar9 + 4 + lVar13 * 0xc) = fVar18 * fVar14;
    *(float *)(lVar9 + 8 + lVar13 * 0xc) = fVar19 * fVar14;
  }
  return;
}

// operator() @ 14406f310

void __thiscall
`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitGeoNormalBins'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x28)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::GeometryCollectionInternal::FPerGeometrySpatial::InitBins
            ((FPerGeometrySpatial *)((longlong)param_1 * 0x1b8 + *(longlong *)(lVar1 + 0x20)),
             (FGeometryCollection *)**(undefined8 **)((longlong)this + 8),
             *(FBinNormals **)((longlong)this + 0x10),param_1,
             (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x10));
  return;
}

// operator() @ 14406f650

void __thiscall
`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::TransformVertices'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  plVar4 = *(longlong **)((longlong)this + 0x10);
  lVar19 = (longlong)param_1;
  lVar5 = **(longlong **)((longlong)this + 8);
  uVar17 = (uint)~param_1 >> 0x1f;
  uVar15 = 0;
  if (param_1 < *(int *)(lVar5 + 0x2d8)) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar15 = *(uint *)(*(longlong *)(lVar5 + 0x2d0) + lVar19 * 4);
  uVar16 = 0;
  if ((int)uVar15 < (int)plVar4[1]) {
    uVar16 = ~uVar15 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pauVar18 = (undefined1 (*) [16])((longlong)(int)uVar15 * 0x60 + *plVar4);
  uVar15 = 0;
  if (param_1 < *(int *)(lVar5 + 0x238)) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x230);
  dVar13 = *(double *)(pauVar18[1] + 8);
  auVar20 = *pauVar18;
  dVar11 = (double)*(float *)(lVar5 + 8 + lVar19 * 0xc) * *(double *)pauVar18[5];
  dVar12 = *(double *)(pauVar18[5] + 8) * 0.0;
  auVar2 = pauVar18[1];
  dVar9 = (double)*(float *)(lVar5 + lVar19 * 0xc) * *(double *)pauVar18[4];
  dVar10 = (double)*(float *)(lVar5 + 4 + lVar19 * 0xc) * *(double *)(pauVar18[4] + 8);
  uVar27 = (undefined4)((ulonglong)dVar10 >> 0x20);
  auVar22 = blendpd(auVar20,auVar2,2);
  auVar28._8_4_ = SUB84(dVar10,0);
  auVar28._0_8_ = dVar9;
  auVar28._12_4_ = uVar27;
  dVar1 = auVar2._0_8_;
  auVar29._0_8_ = auVar28._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar9;
  auVar29._8_8_ = dVar11 * auVar20._8_8_ - dVar1 * dVar10;
  auVar30._8_4_ = SUB84(dVar10,0);
  auVar30._0_8_ = dVar9;
  auVar30._12_4_ = uVar27;
  auVar20._8_4_ = SUB84(dVar12,0);
  auVar20._0_8_ = dVar11;
  auVar20._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar20 = blendpd(auVar30,auVar20,2);
  auVar21._0_8_ = auVar20._0_8_ * dVar1 - auVar22._0_8_ * dVar11;
  auVar21._8_8_ = auVar20._8_8_ * auVar2._8_8_ - auVar22._8_8_ * dVar12;
  auVar20 = *pauVar18;
  auVar30 = blendpd(auVar29,auVar21,2);
  dVar7 = auVar29._8_8_ + auVar29._8_8_;
  dVar8 = auVar21._0_8_ + auVar21._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar31._0_8_ = auVar30._0_8_ + auVar30._0_8_;
  auVar31._8_8_ = auVar30._8_8_ + auVar30._8_8_;
  auVar25._8_4_ = SUB84(dVar8,0);
  auVar25._0_8_ = dVar7;
  auVar25._12_4_ = uVar27;
  auVar23._8_4_ = SUB84(dVar8,0);
  auVar23._0_8_ = dVar7;
  auVar23._12_4_ = uVar27;
  auVar30 = blendpd(auVar23,auVar31,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar7;
  auVar26._8_8_ = auVar31._0_8_ * auVar20._8_8_ - dVar1 * dVar8;
  auVar22._8_4_ = SUB84(auVar26._8_8_,0);
  auVar22._0_8_ = auVar26._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  auVar20 = blendpd(auVar20,auVar2,2);
  auVar24._0_8_ = auVar30._0_8_ * dVar1 - auVar20._0_8_ * auVar31._0_8_;
  auVar24._8_8_ = auVar30._8_8_ * auVar2._8_8_ - auVar20._8_8_ * auVar31._8_8_;
  auVar20 = blendpd(auVar26,auVar24,2);
  dVar1 = *(double *)pauVar18[2];
  dVar3 = *(double *)(pauVar18[2] + 8);
  dVar12 = *(double *)pauVar18[3];
  plVar4 = *(longlong **)this;
  uVar15 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *plVar4;
  *(float *)(lVar5 + lVar19 * 0xc) = (float)(dVar7 * dVar13 + dVar9 + auVar22._8_8_ + dVar1);
  *(float *)(lVar5 + 4 + lVar19 * 0xc) = (float)(dVar8 * dVar13 + dVar10 + auVar24._0_8_ + dVar3);
  *(float *)(lVar5 + 8 + lVar19 * 0xc) =
       (float)(auVar31._0_8_ * dVar13 + dVar11 + auVar20._0_8_ + dVar12);
  return;
}

// operator() @ 144070c50

float __thiscall
`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitProximityFromVertices'::
__l9::<lambda_1>::operator()(void *this,int *param_1)

{
  uint uVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  uVar1 = *param_1;
  lVar8 = (longlong)(int)uVar1;
  pfVar3 = *(float **)this;
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar9 = (float)(*pcVar5)();
      return fVar9;
    }
  }
  lVar4 = *plVar2;
  fVar9 = pfVar3[1] - *(float *)(lVar4 + 4 + lVar8 * 0xc);
  fVar11 = *pfVar3 - *(float *)(lVar4 + lVar8 * 0xc);
  fVar10 = pfVar3[2] - *(float *)(lVar4 + 8 + lVar8 * 0xc);
  return fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10;
}

// DoFacesOverlap @ 144086fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::DoFacesOverlap
          (FGeometryCollectionProximitySpatial *this,FGeometryCollection *param_1,int param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_164;
  FScriptContainerElement *local_160;
  undefined8 local_158;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  TVector2<float>_u_0 local_120;
  undefined8 local_118;
  undefined8 local_110;
  TVector2<float>_u_0 local_108;
  TVector2<float>_u_0 local_100;
  TVector2<float>_u_0 local_f8;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  lVar11 = (longlong)param_2;
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  uVar9 = (uint)~param_2 >> 0x1f;
  uVar5 = 0;
  if (param_2 < iVar8) {
    uVar5 = uVar9;
  }
  local_16c = (float)param_3;
  if ((uVar5 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + 4 + lVar11 * 0xc);
  uVar6 = 0;
  if ((int)uVar5 < iVar8) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_188 = (longlong)(int)uVar5, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_160 = (this->TransformedVertices).AllocatorInstance.Data;
  local_158 = (longlong)(int)uVar5 * 3;
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  uVar5 = 0;
  if (param_2 < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + lVar11 * 0xc);
  lVar10 = (longlong)(int)uVar5;
  uVar6 = 0;
  if ((int)uVar5 < iVar8) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_188 = lVar10, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  fVar14 = __real_3f800000;
  fVar15 = __real_322bcc77;
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  fVar19 = *(float *)(local_160 + local_158 * 4) - *(float *)(pFVar1 + lVar10 * 0xc);
  fVar20 = *(float *)(local_160 + local_158 * 4 + 4) - *(float *)(pFVar1 + lVar10 * 0xc + 4);
  fVar17 = *(float *)(local_160 + local_158 * 4 + 8) - *(float *)(pFVar1 + lVar10 * 0xc + 8);
  fVar12 = fVar20 * fVar20 + fVar19 * fVar19 + fVar17 * fVar17;
  if (__real_322bcc77 < fVar12) {
    fVar12 = __real_3f800000 / SQRT(fVar12);
    fVar19 = fVar12 * fVar19;
    fVar20 = fVar12 * fVar20;
    fVar17 = fVar12 * fVar17;
  }
  iVar8 = (this->SurfaceNormals).ArrayNum;
  uVar5 = 0;
  if (param_2 < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->SurfaceNormals).AllocatorInstance.Data;
  fVar12 = *(float *)(pFVar1 + lVar11 * 0xc + 4) * fVar17 -
           *(float *)(pFVar1 + lVar11 * 0xc + 8) * fVar20;
  fVar21 = *(float *)(pFVar1 + lVar11 * 0xc + 8) * fVar19 -
           *(float *)(pFVar1 + lVar11 * 0xc) * fVar17;
  fVar18 = *(float *)(pFVar1 + lVar11 * 0xc) * fVar20 -
           *(float *)(pFVar1 + lVar11 * 0xc + 4) * fVar19;
  fVar13 = fVar21 * fVar21 + fVar12 * fVar12 + fVar18 * fVar18;
  if (fVar15 < fVar13) {
    fVar14 = fVar14 / SQRT(fVar13);
    fVar12 = fVar14 * fVar12;
    fVar21 = fVar14 * fVar21;
    fVar18 = fVar14 * fVar18;
  }
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  uVar5 = 0;
  if (param_2 < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + lVar11 * 0xc);
  lVar10 = (longlong)(int)uVar5;
  uVar6 = 0;
  if ((int)uVar5 < iVar8) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_188 = lVar10, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  local_148 = 0;
  local_158 = *(longlong *)(pFVar1 + lVar10 * 0xc);
  local_170 = *(float *)(pFVar1 + lVar10 * 0xc + 8);
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  local_120 = (TVector2<float>_u_0)0x0;
  uVar5 = 0;
  if (param_2 < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + 4 + lVar11 * 0xc);
  lVar10 = (longlong)(int)uVar5;
  uVar6 = 0;
  if ((int)uVar5 < iVar8) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_188 = lVar10, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  local_174 = (float)local_158;
  fVar15 = *(float *)(pFVar1 + lVar10 * 0xc) - (float)local_158;
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  fVar13 = *(float *)(pFVar1 + lVar10 * 0xc + 4) - local_158._4_4_;
  fVar14 = *(float *)(pFVar1 + lVar10 * 0xc + 8) - local_170;
  local_178 = local_158._4_4_;
  uVar5 = 0;
  if (param_2 < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + 4 + lVar11 * 0xc);
  lVar10 = (longlong)(int)uVar5;
  uVar6 = 0;
  if ((int)uVar5 < iVar8) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_188 = lVar10, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  fStack_13c = fVar15 * fVar12 + fVar13 * fVar21 + fVar14 * fVar18;
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  local_140 = (*(float *)(pFVar1 + lVar10 * 0xc + 4) - local_178) * fVar20 +
              (*(float *)(pFVar1 + lVar10 * 0xc) - local_174) * fVar19 +
              (*(float *)(pFVar1 + lVar10 * 0xc + 8) - local_170) * fVar17;
  local_118 = CONCAT44(fStack_13c,local_140);
  uVar5 = 0;
  if (param_2 < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + 8 + lVar11 * 0xc);
  lVar10 = (longlong)(int)uVar5;
  uVar6 = 0;
  if ((int)uVar5 < iVar8) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_188 = lVar10, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  fVar15 = local_170;
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  fVar14 = *(float *)(pFVar1 + lVar10 * 0xc) - local_174;
  fVar16 = *(float *)(pFVar1 + lVar10 * 0xc + 4) - local_178;
  fVar13 = *(float *)(pFVar1 + lVar10 * 0xc + 8) - local_170;
  uVar5 = 0;
  if (param_2 < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + 8 + lVar11 * 0xc);
  lVar11 = (longlong)(int)uVar5;
  uVar9 = 0;
  if ((int)uVar5 < iVar8) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  lVar10 = (longlong)(int)local_16c;
  fStack_134 = fVar14 * fVar12 + fVar16 * fVar21 + fVar13 * fVar18;
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  uVar9 = ~(uint)local_16c >> 0x1f;
  local_138 = (*(float *)(pFVar1 + lVar11 * 0xc + 4) - local_178) * fVar20 +
              (*(float *)(pFVar1 + lVar11 * 0xc) - local_174) * fVar19 +
              (*(float *)(pFVar1 + lVar11 * 0xc + 8) - fVar15) * fVar17;
  local_110 = CONCAT44(fStack_134,local_138);
  uVar5 = 0;
  if ((int)local_16c < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar10, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + 8 + lVar10 * 0xc);
  lVar11 = (longlong)(int)uVar5;
  uVar6 = 0;
  if ((int)uVar5 < iVar8) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  fVar13 = local_16c;
  fVar14 = local_174;
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  local_170 = *(float *)(pFVar1 + lVar11 * 0xc) - local_174;
  fVar16 = *(float *)(pFVar1 + lVar11 * 0xc + 4) - local_178;
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  local_174 = *(float *)(pFVar1 + lVar11 * 0xc + 8) - fVar15;
  uVar5 = 0;
  if ((int)local_16c < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar10, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + 4 + lVar10 * 0xc);
  lVar11 = (longlong)(int)uVar5;
  uVar6 = 0;
  if ((int)uVar5 < iVar8) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  local_160 = (FScriptContainerElement *)
              CONCAT44(local_160._4_4_,*(float *)(pFVar1 + lVar11 * 0xc) - fVar14);
  local_158 = CONCAT44(local_158._4_4_,*(float *)(pFVar1 + lVar11 * 0xc + 4) - local_178);
  iVar8 = *(int *)&(param_1->Indices).field_0x18;
  local_16c = *(float *)(pFVar1 + lVar11 * 0xc + 8) - fVar15;
  uVar5 = 0;
  if ((int)fVar13 < iVar8) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (local_188 = lVar10, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar8 = (this->TransformedVertices).ArrayNum;
  uVar5 = *(uint *)(*(longlong *)&(param_1->Indices).field_0x10 + lVar10 * 0xc);
  lVar11 = (longlong)(int)uVar5;
  uVar9 = 0;
  if ((int)uVar5 < iVar8) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (local_188 = lVar11, local_180 = (longlong)iVar8,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->TransformedVertices).AllocatorInstance.Data;
  fVar14 = *(float *)(pFVar1 + lVar11 * 0xc) - fVar14;
  iVar8 = 1;
  local_130 = fVar16 * fVar20 + local_170 * fVar19 + local_174 * fVar17;
  fStack_12c = fVar16 * fVar21 + local_170 * fVar12 + local_174 * fVar18;
  local_108._s_0.Y = fStack_12c;
  local_108._s_0.X = local_130;
  local_128 = fVar19 * local_160._0_4_ + fVar20 * (float)local_158 + fVar17 * local_16c;
  fStack_124 = fVar12 * local_160._0_4_ + fVar21 * (float)local_158 + fVar18 * local_16c;
  local_100._s_0.Y = fStack_124;
  local_100._s_0.X = local_128;
  local_168 = (*(float *)(pFVar1 + lVar11 * 0xc + 4) - local_178) * fVar20 + fVar14 * fVar19 +
              fVar17 * (*(float *)(pFVar1 + lVar11 * 0xc + 8) - fVar15);
  fStack_164 = (*(float *)(pFVar1 + lVar11 * 0xc + 4) - local_178) * fVar21 + fVar14 * fVar12 +
               fVar18 * (*(float *)(pFVar1 + lVar11 * 0xc + 8) - fVar15);
  local_f8._s_0.Y = fStack_164;
  local_f8._s_0.X = local_168;
  if ((float)local_118 - local_120._s_0.X <= 0.0) {
    iVar7 = (0.0 <= (float)local_118 - local_120._s_0.X) - 1;
  }
  else {
    iVar7 = 1;
  }
  fVar20 = (local_110._4_4_ - local_120._s_0.Y) * (float)iVar7 -
           ((float)local_110 - local_120._s_0.X) * (local_118._4_4_ - local_120._s_0.Y);
  if (local_128 - local_130 <= 0.0) {
    iVar8 = (0.0 <= local_128 - local_130) - 1;
  }
  fVar14 = (local_118._4_4_ - local_120._s_0.Y) * fVar20;
  fVar19 = (local_120._s_0.X - (float)local_118) * fVar20;
  fVar15 = (fStack_164 - fStack_12c) * (float)iVar8 -
           (fStack_124 - fStack_12c) * (local_168 - local_130);
  local_158 = CONCAT44(local_158._4_4_,local_128 - local_120._s_0.X);
  local_160 = (FScriptContainerElement *)CONCAT44(local_160._4_4_,local_168 - local_120._s_0.X);
  if ((((fStack_12c - local_120._s_0.Y) * fVar19 + (local_130 - local_120._s_0.X) * fVar14 < 0.0) ||
      ((fStack_124 - local_120._s_0.Y) * fVar19 + (local_128 - local_120._s_0.X) * fVar14 < 0.0)) ||
     ((fStack_164 - local_120._s_0.Y) * fVar19 + (local_168 - local_120._s_0.X) * fVar14 < 0.0)) {
    fVar14 = (local_110._4_4_ - local_118._4_4_) * fVar20;
    fVar19 = ((float)local_118 - (float)local_110) * fVar20;
    if ((((fStack_12c - local_118._4_4_) * fVar19 + (local_130 - (float)local_118) * fVar14 < 0.0)
        || ((fStack_124 - local_118._4_4_) * fVar19 + (local_128 - (float)local_118) * fVar14 < 0.0)
        ) || ((fStack_164 - local_118._4_4_) * fVar19 + (local_168 - (float)local_118) * fVar14 <
              0.0)) {
      fVar14 = (local_120._s_0.Y - local_110._4_4_) * fVar20;
      fVar20 = (float)((uint)((local_120._s_0.X - (float)local_110) * fVar20) ^
                      __xmm_80000000800000008000000080000000);
      if (((((local_130 - (float)local_110) * fVar14 + (fStack_12c - local_110._4_4_) * fVar20 < 0.0
            ) || (fVar14 * (local_128 - (float)local_110) + fVar20 * (fStack_124 - local_110._4_4_)
                  < 0.0)) ||
          (fVar14 * (local_168 - (float)local_110) + fVar20 * (fStack_164 - local_110._4_4_) < 0.0))
         && (((bVar3 = TriOutsideEdge((TStaticArray<UE::Math::TVector2<float>,3,4294967295> *)
                                      &local_120._s_0,(TVector2<float> *)&local_108._s_0,
                                      (TVector2<float> *)&local_100._s_0,fVar15), !bVar3 &&
              (bVar3 = TriOutsideEdge((TStaticArray<UE::Math::TVector2<float>,3,4294967295> *)
                                      &local_120._s_0,(TVector2<float> *)&local_100._s_0,
                                      (TVector2<float> *)&local_f8._s_0,fVar15), !bVar3)) &&
             (bVar3 = TriOutsideEdge((TStaticArray<UE::Math::TVector2<float>,3,4294967295> *)
                                     &local_120._s_0,(TVector2<float> *)&local_f8._s_0,
                                     (TVector2<float> *)&local_108._s_0,fVar15), !bVar3)))) {
        return true;
      }
    }
  }
  return false;
}

// InitCandidateContacts @ 144090750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitCandidateContacts
          (FGeometryCollectionProximitySpatial *this,FGeometryCollection *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  int iVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  undefined1 auStackY_388 [32];
  uint local_358;
  undefined1 local_354;
  undefined1 local_353 [3];
  TArray<int,TSizedDefaultAllocator<32>_> local_350;
  TVector<double>_u_0 local_340;
  double dStack_328;
  double local_320;
  double dStack_318;
  TPairInitializer<int_const_&,bool_&&> local_310;
  double local_300;
  double local_2f8;
  TVector<double>_u_0 local_2f0;
  double dStack_2d8;
  double local_2d0;
  double dStack_2c8;
  uint *local_2c0;
  undefined1 *local_2b8;
  FSparseDynamicOctree3 local_2a8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3(&local_2a8);
  fVar1 = (this->OverallBounds).Max.field0_0x0._s_0.X;
  fVar2 = (this->OverallBounds).Max.field0_0x0._s_0.Y;
  fVar3 = (this->OverallBounds).Max.field0_0x0._s_0.Z;
  local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_350.ArrayNum = 0;
  local_350.ArrayMax = 0;
  fVar24 = (float)((uint)((fVar1 - (this->OverallBounds).Min.field0_0x0._s_0.X) * __real_3f000000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  uVar23 = 0;
  local_358 = 0;
  fVar25 = (float)((uint)((fVar2 - (this->OverallBounds).Min.field0_0x0._s_0.Y) * __real_3f000000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar25 <= fVar24) {
    fVar25 = fVar24;
  }
  fVar24 = (float)((uint)((fVar3 - (this->OverallBounds).Min.field0_0x0._s_0.Z) * __real_3f000000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar25 <= fVar24) {
    fVar25 = fVar24;
  }
  local_2a8.RootDimension = (double)fVar25;
  local_310.Value =
       (bool *)(double)((fVar1 + (this->OverallBounds).Min.field0_0x0._s_0.X) * __real_3f000000);
  local_300 = (double)((fVar2 + (this->OverallBounds).Min.field0_0x0._s_0.Y) * __real_3f000000);
  local_2f8 = (double)((fVar3 + (this->OverallBounds).Min.field0_0x0._s_0.Z) * __real_3f000000);
  if (0 < (this->GeoInfo).ArrayNum) {
    do {
      uVar16 = local_358;
      uVar15 = uVar23;
      if ((int)local_358 < (this->GeoInfo).ArrayNum) {
        uVar15 = ~local_358 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar21 = (longlong)(int)local_358;
      lVar19 = (longlong)(int)uVar16 * 0x1b8;
      pFVar8 = (this->GeoInfo).AllocatorInstance.Data;
      fVar1 = *(float *)(pFVar8 + lVar19 + 0x148);
      fVar2 = *(float *)(pFVar8 + lVar19 + 0x14c);
      fVar3 = *(float *)(pFVar8 + lVar19 + 0x150);
      fVar25 = *(float *)(pFVar8 + lVar19 + 0x154);
      fVar24 = *(float *)(pFVar8 + lVar19 + 0x158);
      fVar4 = *(float *)(pFVar8 + lVar19 + 0x15c);
      uVar16 = uVar23;
      if ((int)local_358 < (this->GeoInfo).ArrayNum) {
        uVar16 = ~local_358 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar8 = (this->GeoInfo).AllocatorInstance.Data;
      lVar21 = lVar21 * 0x1b8;
      lVar19 = (longlong)(int)local_358;
      fVar5 = *(float *)(pFVar8 + lVar21 + 0x154);
      fVar6 = *(float *)(pFVar8 + lVar21 + 0x158);
      fVar7 = *(float *)(pFVar8 + lVar21 + 0x15c);
      uVar16 = uVar23;
      if ((int)local_358 < (this->GeoInfo).ArrayNum) {
        uVar16 = ~local_358 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar13 = local_350._8_8_;
      pFVar8 = (this->GeoInfo).AllocatorInstance.Data;
      dStack_2d8 = (double)fVar5 - (double)local_310.Value;
      local_2d0 = (double)fVar6 - local_300;
      dStack_2c8 = (double)fVar7 - local_2f8;
      lVar19 = lVar19 * 0x1b8;
      local_2f0._s_0.Y = (double)*(float *)(pFVar8 + lVar19 + 0x14c) - local_300;
      local_2f0._s_0.Z = (double)*(float *)(pFVar8 + lVar19 + 0x150) - local_2f8;
      local_2f0._s_0.X = (double)*(float *)(pFVar8 + lVar19 + 0x148) - (double)local_310.Value;
      if (0 < (int)local_358) {
        local_350._8_8_ = local_350._8_8_ & 0xffffffff00000000;
        if ((longlong)uVar13 < 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_350.AllocatorInstance,0,&local_350.ArrayMax);
        }
        dVar26 = (double)param_2;
        local_320 = local_2d0 + dVar26;
        dStack_328 = dVar26 + dStack_2d8;
        local_340._s_0.X = local_2f0._s_0.X - dVar26;
        local_340._s_0.Z = local_2f0._s_0.Z - dVar26;
        dStack_318 = dStack_2c8 + dVar26;
        local_340._s_0.Y = local_2f0._s_0.Y - dVar26;
        UE::Geometry::FSparseDynamicOctree3::RangeQuery
                  (&local_2a8,(TAxisAlignedBox3<double> *)&local_340._s_0,&local_350);
        iVar12 = local_350.ArrayNum;
        pFVar8 = local_350.AllocatorInstance.Data + (longlong)local_350.ArrayNum * 4;
        FVar22.Data = local_350.AllocatorInstance.Data;
        while( true ) {
          if (local_350.ArrayNum != iVar12) {
            local_354 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_354);
          }
          if (FVar22.Data == pFVar8) break;
          uVar16 = *(uint *)FVar22.Data;
          lVar19 = (longlong)(int)uVar16;
          uVar17 = 0;
          uVar15 = uVar17;
          if ((int)uVar16 < (this->KnownProximity).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = (this->KnownProximity).AllocatorInstance.Data;
          lVar21 = lVar19 * 0x50;
          if (*(int *)(pFVar9 + lVar21 + 8) != *(int *)(pFVar9 + lVar21 + 0x34)) {
            pFVar10 = *(FScriptContainerElement **)(pFVar9 + lVar21 + 0x38 + 8);
            pFVar20 = pFVar9 + lVar21 + 0x38;
            if (pFVar10 != (FScriptContainerElement *)0x0) {
              pFVar20 = pFVar10;
            }
            iVar18 = *(int *)(pFVar20 +
                             (ulonglong)(*(int *)(pFVar9 + lVar21 + 0x48) - 1U & local_358) * 4);
            if (iVar18 != -1) {
              do {
                if (*(uint *)(*(longlong *)(pFVar9 + lVar21) + (longlong)iVar18 * 0xc) == local_358)
                goto LAB_144090d6b;
                iVar18 = *(int *)(*(longlong *)(pFVar9 + lVar21) + 4 + (longlong)iVar18 * 0xc);
              } while (iVar18 != -1);
            }
          }
          uVar15 = uVar17;
          if ((int)uVar16 < (this->GeoInfo).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = (this->GeoInfo).AllocatorInstance.Data;
          lVar21 = lVar19 * 0x1b8;
          if (((((fVar1 - param_2 < *(float *)(pFVar9 + lVar21 + 0x154) ||
                  fVar1 - param_2 == *(float *)(pFVar9 + lVar21 + 0x154)) &&
                (*(float *)(pFVar9 + lVar21 + 0x148) <= param_2 + fVar25)) &&
               (fVar2 - param_2 < *(float *)(pFVar9 + lVar21 + 0x158) ||
                fVar2 - param_2 == *(float *)(pFVar9 + lVar21 + 0x158))) &&
              ((*(float *)(pFVar9 + lVar21 + 0x14c) <= param_2 + fVar24 &&
               (fVar3 - param_2 < *(float *)(pFVar9 + lVar21 + 0x15c) ||
                fVar3 - param_2 == *(float *)(pFVar9 + lVar21 + 0x15c))))) &&
             (*(float *)(pFVar9 + lVar21 + 0x150) <= param_2 + fVar4)) {
            if ((int)uVar16 < (this->GeoInfo).ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_2c0 = &local_358;
            local_353[0] = 0;
            local_2b8 = local_353;
            TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,bool_&&>_>
                      ((TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>
                        *)((this->GeoInfo).AllocatorInstance.Data + lVar19 * 0x1b8 + 0x168),
                       &local_310,(bool *)&local_2c0);
          }
LAB_144090d6b:
          FVar22.Data = FVar22.Data + 4;
        }
      }
      UE::Geometry::FSparseDynamicOctree3::InsertObject
                (&local_2a8,local_358,(TAxisAlignedBox3<double> *)&local_2f0._s_0);
      local_358 = local_358 + 1;
    } while ((int)local_358 < (this->GeoInfo).ArrayNum);
  }
  if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.AllocatorInstance.Data);
  }
  UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(&local_2a8);
  return;
}

// InitProximityFromVertices @ 144090eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitProximityFromVertices
          (FGeometryCollectionProximitySpatial *this,FGeometryCollection *param_1,float param_2)

{
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *this_00
  ;
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  TArray<UE::GeometryCollectionInternal::FPerGeometrySpatial,TSizedDefaultAllocator<32>_> *this_01;
  FGeometryCollectionProximitySpatial *pFVar17;
  int iVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_1f8 [32];
  uint local_1b8;
  undefined1 local_1b4;
  undefined1 local_1b3 [3];
  uint local_1b0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_1a8;
  uint local_198;
  uint local_194;
  uint local_190;
  int local_18c;
  FGeometryCollectionProximitySpatial *local_188;
  int local_180;
  int local_17c;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_178;
  FScriptContainerElement *local_168;
  TArray<UE::GeometryCollectionInternal::FPerGeometrySpatial,TSizedDefaultAllocator<32>_> *local_160
  ;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_140;
  FScriptContainerElement *local_138;
  FGeometryCollectionProximitySpatial *local_130;
  code *local_128;
  undefined1 *local_120;
  code *local_118;
  FScriptContainerElement **local_110;
  FVector3i *local_108;
  uint *local_100;
  FVector3i local_f8;
  undefined1 local_e8 [64];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  FMutex local_98;
  TWrapAroundGridIndexer3<float> local_94;
  int local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  puVar14 = (uint *)0x0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_e8._32_8_ = 0;
  local_e8._40_4_ = 0;
  local_94.CellSize = param_2 * __real_40400000;
  if (param_2 * __real_40400000 <= __real_358637bd) {
    local_94.CellSize = __real_358637bd;
  }
  local_e8._44_4_ = 0x80;
  local_e8._48_4_ = 0xffffffff;
  local_e8._52_4_ = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_98.State = (atomic<unsigned_char>)0x0;
  local_188 = this;
  if ((local_94.CellSize < __real_358637bd) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2954325157570674611>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                         ,0x4d,"CellSize >= TMathUtil<RealType>::ZeroTolerance"), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_90 = -1;
  local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.ArrayNum = 0;
  local_1a8.ArrayMax = 0;
  local_198 = 0;
  pTVar9 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,FGeometryCollection::GeometryGroup);
  puVar10 = (uint *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
    puVar10 = puVar14;
  }
  if (puVar10 != (uint *)0x0) {
    local_198 = *puVar10;
    puVar14 = (uint *)(ulonglong)local_198;
  }
  this_00 = &this->KnownProximity;
  uVar13 = (uint)puVar14;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,uVar13,Default);
  this_01 = &this->GeoInfo;
  iVar18 = (this->GeoInfo).ArrayNum;
  piVar19 = &(this->GeoInfo).ArrayNum;
  local_178.Value = piVar19;
  local_160 = this_01;
  if (iVar18 < (int)uVar13) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1b8,8,uVar13 - iVar18,&this_01->AllocatorInstance,piVar19,
                       &(this->GeoInfo).ArrayMax);
    DefaultConstructItems<UE::GeometryCollectionInternal::FPerGeometrySpatial,int>
              ((this_01->AllocatorInstance).Data + (longlong)iVar7 * 0x1b8,uVar13 - iVar18);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulong64)puVar14);
    }
    if ((int)uVar13 < iVar18) {
      uVar12 = iVar18 - uVar13;
      if (((int)(uVar12 | uVar13) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar12 != 0) {
        TArray<UE::GeometryCollectionInternal::FPerGeometrySpatial,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(this_01,uVar13,uVar12);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1b8,8,&this_01->AllocatorInstance,*piVar19,&(this->GeoInfo).ArrayMax);
      }
    }
  }
  local_1b8 = 0;
  pFVar17 = this;
  if (0 < (int)uVar13) {
    do {
      uVar13 = local_1b8;
      local_140 = 0;
      uVar12 = 0;
      if ((int)local_1b8 < *piVar19) {
        uVar12 = ~local_1b8 >> 0x1f;
      }
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar15 = (longlong)(int)local_1b8;
      lVar11 = (longlong)(int)uVar13 * 0x1b8;
      pFVar2 = (this_01->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar11 + 0x148) = 0;
      *(undefined8 *)(pFVar2 + lVar11 + 0x148 + 8) = 0;
      *(undefined8 *)(pFVar2 + lVar11 + 0x158) = 0;
      *(undefined4 *)(pFVar2 + lVar11 + 0x160) = 0;
      uVar13 = 0;
      if ((int)local_1b8 < *(int *)&(param_1->VertexStart).field_0x18) {
        uVar13 = ~local_1b8 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar11 = (longlong)(int)local_1b8;
      uVar13 = *(uint *)(*(longlong *)&(param_1->VertexStart).field_0x10 + lVar15 * 4);
      uVar12 = 0;
      if ((int)local_1b8 < *(int *)&(param_1->VertexCount).field_0x18) {
        uVar12 = ~local_1b8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar15 = (longlong)(int)local_1b8;
      iVar18 = *(int *)(*(longlong *)&(param_1->VertexCount).field_0x10 + lVar11 * 4) + uVar13;
      uVar12 = 0;
      if ((int)local_1b8 < *(int *)&(param_1->TransformIndex).field_0x18) {
        uVar12 = ~local_1b8 >> 0x1f;
      }
      local_18c = iVar18;
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_194 = *(uint *)(*(longlong *)&(param_1->TransformIndex).field_0x10 + lVar15 * 4);
      lVar11 = (longlong)(int)local_194;
      uVar12 = 0;
      if ((int)local_194 < *(int *)&(param_1->SimulationType).field_0x18) {
        uVar12 = ~local_194 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)(*(longlong *)&(param_1->SimulationType).field_0x10 + lVar11 * 4) == 1) {
        local_1b0[0] = uVar13;
        if ((int)uVar13 < iVar18) {
          do {
            uVar12 = 0;
            if ((int)uVar13 < (pFVar17->TransformedVertices).ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            local_1b0[0] = uVar13;
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar11 = (longlong)(int)local_1b8;
            pFVar2 = (pFVar17->TransformedVertices).AllocatorInstance.Data +
                     (longlong)(int)uVar13 * 0xc;
            uVar13 = 0;
            if ((int)local_1b8 < *local_178.Value) {
              uVar13 = ~local_1b8 >> 0x1f;
            }
            local_168 = pFVar2;
            if ((uVar13 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar5 = local_1a8._8_8_;
            pFVar3 = (pFVar17->GeoInfo).AllocatorInstance.Data;
            lVar11 = lVar11 * 0x1b8;
            if (pFVar3[lVar11 + 0x160] == (FScriptContainerElement)0x0) {
              *(undefined8 *)(pFVar3 + lVar11 + 0x154) = *(undefined8 *)&pFVar2->field_0x0;
              uVar1 = *(undefined4 *)(pFVar2 + 8);
              *(undefined4 *)(pFVar3 + lVar11 + 0x15c) = uVar1;
              *(undefined8 *)(pFVar3 + lVar11 + 0x148) = *(undefined8 *)(pFVar3 + lVar11 + 0x154);
              *(undefined4 *)(pFVar3 + lVar11 + 0x150) = uVar1;
              pFVar3[lVar11 + 0x160] = (FScriptContainerElement)0x1;
            }
            else {
              fVar20 = (((TVector<float>_u_0 *)&pFVar2->field_0x0)->_s_0).X;
              if (*(float *)(pFVar3 + lVar11 + 0x148) <= fVar20) {
                fVar20 = *(float *)(pFVar3 + lVar11 + 0x148);
              }
              *(float *)(pFVar3 + lVar11 + 0x148) = fVar20;
              fVar20 = *(float *)(pFVar2 + 4);
              if (*(float *)(pFVar3 + lVar11 + 0x14c) <= *(float *)(pFVar2 + 4)) {
                fVar20 = *(float *)(pFVar3 + lVar11 + 0x14c);
              }
              *(float *)(pFVar3 + lVar11 + 0x14c) = fVar20;
              fVar20 = *(float *)(pFVar3 + lVar11 + 0x150);
              if (*(float *)(pFVar2 + 8) <= *(float *)(pFVar3 + lVar11 + 0x150)) {
                fVar20 = *(float *)(pFVar2 + 8);
              }
              *(float *)(pFVar3 + lVar11 + 0x150) = fVar20;
              fVar20 = (((TVector<float>_u_0 *)&pFVar2->field_0x0)->_s_0).X;
              if (fVar20 <= *(float *)(pFVar3 + lVar11 + 0x154)) {
                fVar20 = *(float *)(pFVar3 + lVar11 + 0x154);
              }
              *(float *)(pFVar3 + lVar11 + 0x154) = fVar20;
              fVar20 = *(float *)(pFVar2 + 4);
              if (*(float *)(pFVar2 + 4) <= *(float *)(pFVar3 + lVar11 + 0x158)) {
                fVar20 = *(float *)(pFVar3 + lVar11 + 0x158);
              }
              *(float *)(pFVar3 + lVar11 + 0x158) = fVar20;
              fVar20 = *(float *)(pFVar3 + lVar11 + 0x15c);
              if (*(float *)(pFVar3 + lVar11 + 0x15c) <= *(float *)(pFVar2 + 8)) {
                fVar20 = *(float *)(pFVar2 + 8);
              }
              *(float *)(pFVar3 + lVar11 + 0x15c) = fVar20;
            }
            iVar18 = local_1a8.ArrayMax;
            local_1a8._8_8_ = (ulonglong)(uint)local_1a8.ArrayMax << 0x20;
            if (((longlong)uVar5 < 0) && (iVar18 != 0)) {
              Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_1a8.AllocatorInstance,0,&local_1a8.ArrayMax);
            }
            local_120 = local_1b3;
            local_128 = Core::Private::Function::
                        TFunctionRefCaller<UE::Geometry::<lambda_6_>,bool,int_const_&>::Call;
            local_110 = &local_138;
            local_118 = Core::Private::Function::
                        TFunctionRefCaller<`UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::InitProximityFromVertices'::__l9::<lambda_1>,float,int_const_&>
                        ::Call;
            local_138 = pFVar2;
            local_130 = pFVar17;
            UE::Geometry::TPointHashGrid3<int,float>::FindPointsInBall
                      ((TPointHashGrid3<int,float> *)local_e8,(TVector<float> *)pFVar2,param_2,
                       (TFunctionRef<float___cdecl(int_const_&)> *)&local_118,&local_1a8,
                       (TFunctionRef<bool___cdecl(int_const_&)> *)&local_128);
            uVar13 = local_194;
            iVar18 = local_1a8.ArrayNum;
            pFVar2 = local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayNum * 4;
            FVar16.Data = local_1a8.AllocatorInstance.Data;
            while( true ) {
              if (local_1a8.ArrayNum != iVar18) {
                local_1b4 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_1b4);
              }
              if (FVar16.Data == pFVar2) break;
              uVar12 = *(uint *)FVar16.Data;
              uVar8 = 0;
              if ((int)uVar12 < *(int *)&(param_1->BoneMap).field_0x18) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = *(uint *)(*(longlong *)&(param_1->BoneMap).field_0x10 +
                                (longlong)(int)uVar12 * 4);
              if (uVar12 != uVar13) {
                uVar8 = 0;
                if ((int)uVar12 < *(int *)&(param_1->TransformToGeometryIndex).field_0x18) {
                  uVar8 = ~uVar12 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                local_190 = *(uint *)(*(longlong *)&(param_1->TransformToGeometryIndex).field_0x10 +
                                     (longlong)(int)uVar12 * 4);
                lVar11 = (longlong)(int)local_190;
                uVar12 = 0;
                if ((int)local_190 < (this->KnownProximity).ArrayNum) {
                  uVar12 = ~local_190 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                           ((this_00->AllocatorInstance).Data + lVar11 * 0x50),&local_180,
                           (bool *)&local_1b8);
                lVar11 = (longlong)(int)local_1b8;
                uVar12 = 0;
                if ((int)local_1b8 < (this->KnownProximity).ArrayNum) {
                  uVar12 = ~local_1b8 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                           ((this_00->AllocatorInstance).Data + lVar11 * 0x50),&local_17c,
                           (bool *)&local_190);
              }
              FVar16.Data = FVar16.Data + 4;
            }
            UE::Geometry::TWrapAroundGridIndexer3<float>::ToGrid
                      (&local_94,&local_f8,(TVector<float> *)local_168);
            local_100 = local_1b0;
            local_108 = &local_f8;
            TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                      ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                        *)local_e8,&local_178,(bool *)&local_108);
            uVar13 = local_1b0[0] + 1;
            this_01 = local_160;
            pFVar17 = local_188;
            local_1b0[0] = uVar13;
          } while ((int)uVar13 < local_18c);
        }
        lVar11 = (longlong)(int)local_1b8;
        piVar19 = &this_01->ArrayNum;
        uVar13 = 0;
        if ((int)local_1b8 < *piVar19) {
          uVar13 = ~local_1b8 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this_01->AllocatorInstance).Data;
        lVar11 = lVar11 * 0x1b8;
        if ((pFVar17->OverallBounds).IsValid == '\0') {
          if (pFVar2[lVar11 + 0x160] != (FScriptContainerElement)0x0) {
            uVar5 = *(undefined8 *)(pFVar2 + lVar11 + 0x148 + 8);
            *(undefined8 *)&(pFVar17->OverallBounds).Min.field0_0x0 =
                 *(undefined8 *)(pFVar2 + lVar11 + 0x148);
            *(undefined8 *)((longlong)&(pFVar17->OverallBounds).Min.field0_0x0 + 8) = uVar5;
            *(undefined8 *)((longlong)&(pFVar17->OverallBounds).Max.field0_0x0 + 4) =
                 *(undefined8 *)(pFVar2 + lVar11 + 0x158);
            uVar1 = *(undefined4 *)(pFVar2 + lVar11 + 0x160);
            (pFVar17->OverallBounds).IsValid = (char)uVar1;
            (pFVar17->OverallBounds).Pad[0] = (char)((uint)uVar1 >> 8);
            (pFVar17->OverallBounds).Pad[1] = (char)((uint)uVar1 >> 0x10);
            (pFVar17->OverallBounds).Pad[2] = (char)((uint)uVar1 >> 0x18);
          }
        }
        else if (pFVar2[lVar11 + 0x160] != (FScriptContainerElement)0x0) {
          fVar20 = (pFVar17->OverallBounds).Min.field0_0x0._s_0.X;
          if (*(float *)(pFVar2 + lVar11 + 0x148) <= fVar20) {
            fVar20 = *(float *)(pFVar2 + lVar11 + 0x148);
          }
          (pFVar17->OverallBounds).Min.field0_0x0._s_0.X = fVar20;
          fVar20 = (pFVar17->OverallBounds).Min.field0_0x0._s_0.Y;
          fVar21 = *(float *)(pFVar2 + lVar11 + 0x14c);
          if (fVar20 <= *(float *)(pFVar2 + lVar11 + 0x14c)) {
            fVar21 = fVar20;
          }
          (pFVar17->OverallBounds).Min.field0_0x0._s_0.Y = fVar21;
          fVar20 = (pFVar17->OverallBounds).Min.field0_0x0._s_0.Z;
          fVar21 = *(float *)(pFVar2 + lVar11 + 0x150);
          if (fVar20 <= *(float *)(pFVar2 + lVar11 + 0x150)) {
            fVar21 = fVar20;
          }
          (pFVar17->OverallBounds).Min.field0_0x0._s_0.Z = fVar21;
          fVar20 = (pFVar17->OverallBounds).Max.field0_0x0._s_0.X;
          fVar21 = *(float *)(pFVar2 + lVar11 + 0x154);
          if (*(float *)(pFVar2 + lVar11 + 0x154) <= fVar20) {
            fVar21 = fVar20;
          }
          (pFVar17->OverallBounds).Max.field0_0x0._s_0.X = fVar21;
          fVar20 = (pFVar17->OverallBounds).Max.field0_0x0._s_0.Y;
          fVar21 = *(float *)(pFVar2 + lVar11 + 0x158);
          if (*(float *)(pFVar2 + lVar11 + 0x158) <= fVar20) {
            fVar21 = fVar20;
          }
          (pFVar17->OverallBounds).Max.field0_0x0._s_0.Y = fVar21;
          fVar20 = (pFVar17->OverallBounds).Max.field0_0x0._s_0.Z;
          fVar21 = *(float *)(pFVar2 + lVar11 + 0x15c);
          if (*(float *)(pFVar2 + lVar11 + 0x15c) <= fVar20) {
            fVar21 = fVar20;
          }
          (pFVar17->OverallBounds).Max.field0_0x0._s_0.Z = fVar21;
        }
      }
      else {
        piVar19 = &this_01->ArrayNum;
      }
      local_1b8 = local_1b8 + 1;
    } while ((int)local_1b8 < (int)local_198);
  }
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  return;
}

// MoveProximityToArray @ 144096640

TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *
__thiscall
UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::MoveProximityToArray
          (FGeometryCollectionProximitySpatial *this,
          TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_> *pTVar10
  ;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool *pbVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined1 local_res10 [8];
  uint local_res18 [2];
  int local_res20;
  int local_d4;
  int local_d0 [2];
  FScriptContainerElement *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (this->KnownProximity).AllocatorInstance.Data;
  (this->KnownProximity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = (this->KnownProximity).ArrayNum;
  __return_storage_ptr__->ArrayMax = (this->KnownProximity).ArrayMax;
  (this->KnownProximity).ArrayNum = 0;
  (this->KnownProximity).ArrayMax = 0;
  local_res18[0] = 0;
  if (0 < __return_storage_ptr__->ArrayNum) {
    do {
      uVar14 = local_res18[0];
      uVar9 = 0;
      if ((int)local_res18[0] < (this->GeoInfo).ArrayNum) {
        uVar9 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar10;
      }
      iStack_c0 = 0;
      local_a8 = 0;
      pFVar6 = (this->GeoInfo).AllocatorInstance.Data;
      uStack_bc = 1;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               (pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 0x178);
      iVar4 = *(int *)(pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 400);
      pFVar2 = pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 0x168;
      iStack_ac = 0;
      if (iVar4 != 0) {
        pTVar16 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)
             (pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 0x188) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     (pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 0x188);
        }
        uVar9 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
        while (uVar9 == 0) {
          lVar11 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14409678d;
          uVar9 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uStack_bc = -uVar9 & uVar9;
        uVar3 = (ulonglong)uStack_bc * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res20 = (int)lVar11;
        iStack_ac = local_res20 + -1 + local_a8;
        if (iVar4 < iStack_ac) {
          iStack_ac = iVar4;
        }
      }
LAB_14409678d:
      uStack_a4 = local_4c;
      iStack_a0 = *(int *)(pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 0x170) -
                  *(int *)(pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 0x19c);
      uVar9 = *(uint *)(pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 400);
      uVar13 = uVar9 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
      uStack_b0 = 0xffffffff;
      TStack_90.CurrentBitIndex = iStack_ac;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar9 >> 5;
      TStack_90._28_4_ = local_4c;
      TStack_90.BaseBitIndex = local_a8;
      uStack_70 = CONCAT44(uStack_9c,iStack_a0);
      local_c8 = pFVar2;
      local_b8 = pTVar1;
      local_98 = pFVar2;
      TStack_90.Array = pTVar1;
      if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar10;
      }
      uVar5 = *(uint *)(pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 400);
      if (uVar9 != uVar5) {
        pTVar16 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)
             (pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 0x188) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     (pFVar6 + (longlong)(int)uVar14 * 0x1b8 + 0x188);
        }
        uVar14 = -1 << ((byte)uVar9 & 0x1f) &
                 *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar12;
          uVar13 = uVar13 + 0x20;
          iVar12 = iVar12 + 1;
          uVar9 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_1440968a0;
          uVar14 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar11 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar9 = (int)lVar11 + -1 + uVar13;
        if ((int)uVar5 < (int)uVar9) {
          uVar9 = uVar5;
        }
      }
LAB_1440968a0:
      while( true ) {
        pFVar6 = local_98;
        if (*(int *)(local_98 + 8) - *(int *)(local_98 + 0x34) != (int)uStack_70) {
          local_res10[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_90.CurrentBitIndex == uVar9) && (TStack_90.Array == pTVar1)) &&
           (pFVar6 == pFVar2)) break;
        pbVar15 = (bool *)((longlong)TStack_90.CurrentBitIndex * 0x10 + *(longlong *)pFVar6);
        if (pbVar15[4] != false) {
          lVar11 = (longlong)(int)local_res18[0];
          uVar14 = 0;
          if ((int)local_res18[0] < __return_storage_ptr__->ArrayNum) {
            uVar14 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar7)();
            return pTVar10;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + lVar11 * 0x50),&local_d4,
                     pbVar15);
          uVar14 = *(uint *)pbVar15;
          uVar13 = 0;
          if ((int)uVar14 < __return_storage_ptr__->ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            pTVar10 = (TArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar7)();
            return pTVar10;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                     ((__return_storage_ptr__->AllocatorInstance).Data +
                     (longlong)(int)uVar14 * 0x50),local_d0,(bool *)local_res18);
        }
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
      local_res18[0] = local_res18[0] + 1;
    } while ((int)local_res18[0] < __return_storage_ptr__->ArrayNum);
  }
  return __return_storage_ptr__;
}

// MoveProximityToCollection @ 144096a20

void __thiscall
UE::GeometryCollectionInternal::FGeometryCollectionProximitySpatial::MoveProximityToCollection
          (FGeometryCollectionProximitySpatial *this,FGeometryCollection *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar12;
  int iVar13;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool *pbVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar21;
  undefined1 local_res8 [8];
  uint local_res18 [2];
  int local_res20;
  FName local_108;
  undefined2 local_100;
  undefined2 uStack_fe;
  int local_f8;
  int local_f4;
  int local_f0 [2];
  FScriptContainerElement *local_e8;
  FConstructionParameters local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FName local_68;
  FName local_60 [4];
  undefined4 local_3c;
  
  FVar7 = FGeometryCollection::GeometryGroup;
  pFVar11 = ::FName::FName(&local_68,"Proximity");
  bVar9 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar11,FVar7);
  FVar7 = FGeometryCollection::GeometryGroup;
  if (!bVar9) {
    local_108 = FGeometryCollection::GeometryGroup;
    local_100._0_1_ = true;
    local_100._1_1_ = false;
    pFVar11 = ::FName::FName(local_60,"Proximity");
    local_d8.GroupIndexDependency = local_108;
    FVar4 = *pFVar11;
    local_d8.Saved = local_100._0_1_;
    local_d8.bAllowCircularDependency = local_100._1_1_;
    local_d8._10_2_ = uStack_fe;
    bVar9 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,FVar4,FVar7);
    if (!bVar9) {
      FManagedArrayCollection::
      AddNewAttributeImpl<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                ((FManagedArrayCollection *)param_1,FVar4,FVar7,&local_d8);
    }
    FManagedArrayCollection::ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              ((FManagedArrayCollection *)param_1,FVar4,FVar7);
  }
  FVar7 = FGeometryCollection::GeometryGroup;
  pFVar11 = ::FName::FName(&local_108,"Proximity");
  pTVar12 = FManagedArrayCollection::
            ModifyAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                      ((FManagedArrayCollection *)param_1,*pFVar11,FVar7);
  iVar13 = (this->KnownProximity).ArrayNum;
  uVar16 = 0;
  if (0 < iVar13) {
    do {
      uVar10 = 0;
      if ((int)uVar16 < (this->KnownProximity).ArrayNum) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar21 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                ((this->KnownProximity).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x50);
      uVar10 = 0;
      if ((int)uVar16 < *(int *)&pTVar12->field_0x18) {
        uVar10 = ~uVar16 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar14 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                (*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar16 * 0x50);
      if (pTVar14 != pTVar21) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(pTVar14,pTVar21);
      }
      iVar13 = (this->KnownProximity).ArrayNum;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < iVar13);
  }
  local_res18[0] = 0;
  if (0 < iVar13) {
    do {
      uVar16 = local_res18[0];
      uVar10 = 0;
      if ((int)local_res18[0] < (this->GeoInfo).ArrayNum) {
        uVar10 = ~local_res18[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iStack_c0 = 0;
      local_a8 = 0;
      pFVar5 = (this->GeoInfo).AllocatorInstance.Data;
      uStack_bc = 1;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)
               (pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 0x178);
      iVar13 = *(int *)(pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 400);
      local_e8 = pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 0x168;
      iStack_ac = 0;
      if (iVar13 != 0) {
        pTVar20 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)
             (pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 0x188) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     (pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 0x188);
        }
        uVar10 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
        while (uVar10 == 0) {
          lVar15 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar13;
          if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
          goto LAB_144096cdd;
          uVar10 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar15 * 4 + 4);
        }
        uStack_bc = -uVar10 & uVar10;
        uVar2 = (ulonglong)uStack_bc * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res20 = (int)lVar15;
        iStack_ac = local_res20 + -1 + local_a8;
        if (iVar13 < iStack_ac) {
          iStack_ac = iVar13;
        }
      }
LAB_144096cdd:
      uStack_a4 = local_3c;
      iStack_a0 = *(int *)(pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 0x170) -
                  *(int *)(pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 0x19c);
      uVar10 = *(uint *)(pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 400);
      uVar18 = uVar10 & 0xffffffe0;
      TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
      uStack_b0 = 0xffffffff;
      TStack_90.CurrentBitIndex = iStack_ac;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar10 >> 5;
      TStack_90._28_4_ = local_3c;
      TStack_90.BaseBitIndex = local_a8;
      uStack_70 = CONCAT44(uStack_9c,iStack_a0);
      local_c8 = local_e8;
      local_b8 = pTVar1;
      local_98 = local_e8;
      TStack_90.Array = pTVar1;
      if ((((int)uVar10 < 0) || (iVar13 < (int)uVar10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar8 = local_e8;
      uVar3 = *(uint *)(pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 400);
      if (uVar10 != uVar3) {
        pTVar20 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)
             (pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 0x188) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     (pFVar5 + (longlong)(int)uVar16 * 0x1b8 + 0x188);
        }
        uVar16 = -1 << ((byte)uVar10 & 0x1f) &
                 *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
        while (uVar16 == 0) {
          lVar15 = (longlong)iVar17;
          uVar18 = uVar18 + 0x20;
          iVar17 = iVar17 + 1;
          uVar10 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_144096e00;
          uVar16 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar15 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_f8 = (int)lVar15;
        uVar10 = local_f8 + -1 + uVar18;
        if ((int)uVar3 < (int)uVar10) {
          uVar10 = uVar3;
        }
      }
LAB_144096e00:
      while( true ) {
        pFVar5 = local_98;
        if (*(int *)(local_98 + 8) - *(int *)(local_98 + 0x34) != (int)uStack_70) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_90.CurrentBitIndex == uVar10) && (TStack_90.Array == pTVar1)) &&
           (pFVar5 == pFVar8)) break;
        pbVar19 = (bool *)((longlong)TStack_90.CurrentBitIndex * 0x10 + *(longlong *)pFVar5);
        if (pbVar19[4] != false) {
          lVar15 = (longlong)(int)local_res18[0];
          uVar16 = 0;
          if ((int)local_res18[0] < *(int *)&pTVar12->field_0x18) {
            uVar16 = ~local_res18[0] >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                     (lVar15 * 0x50 + *(longlong *)&pTVar12->field_0x10),&local_f4,pbVar19);
          uVar16 = *(uint *)pbVar19;
          uVar18 = 0;
          if ((int)uVar16 < *(int *)&pTVar12->field_0x18) {
            uVar18 = ~uVar16 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                     ((longlong)(int)uVar16 * 0x50 + *(longlong *)&pTVar12->field_0x10),local_f0,
                     (bool *)local_res18);
        }
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
      local_res18[0] = local_res18[0] + 1;
    } while ((int)local_res18[0] < (this->KnownProximity).ArrayNum);
  }
  return;
}

