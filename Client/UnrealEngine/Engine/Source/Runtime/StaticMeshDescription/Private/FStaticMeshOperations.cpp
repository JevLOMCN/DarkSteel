// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 37

// operator() @ 14436b910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`FStaticMeshOperations::ComputeTangentsAndNormals'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  FVertexInstanceID *pFVar1;
  FVertexInstanceID FVar2;
  FTriangleID FVar3;
  FTriangleID FVar4;
  FTriangleID FVar5;
  TMeshAttributeArraySet<bool> *this_00;
  ForElementType<FEdgeID> FVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FMeshElementContainer *pFVar18;
  TTuple<FName,FAttributesSetEntry> *pTVar19;
  TArrayView<UE::Math::TVector<float>,int> *pTVar20;
  TMeshAttributeArrayBase<bool> *this_01;
  FMeshAttributeArraySetBase *pFVar21;
  TArrayView<UE::Math::TVector2<float>,int> *pTVar22;
  FVertexInfo *pFVar23;
  TArrayView<FVertexInstanceID,int> *pTVar24;
  TMeshAttributeArrayBase<FVertexID> *this_02;
  FVertexID *pFVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  FVertexInfo *pFVar27;
  FTriangleID *pFVar28;
  TVector<float> *pTVar29;
  byte bVar30;
  ulonglong uVar31;
  FTriangleID *pFVar32;
  longlong lVar33;
  ForElementType<FSetElementId> FVar34;
  ulonglong uVar35;
  int *piVar36;
  longlong lVar37;
  FTriangleID *pFVar38;
  ForElementType<FEdgeID> FVar39;
  FVertexID FVar40;
  FVertexInstanceID *pFVar41;
  void *_Src;
  ForAnyElementType FVar42;
  float *pfVar43;
  TBitArray<FDefaultBitArrayAllocator> *pTVar44;
  TVector2<float> *pTVar45;
  int iVar46;
  uint *puVar47;
  ForElementType<FTriangleID> FVar48;
  FMeshAttributeArraySetBase *pFVar49;
  ForElementType<FTriangleID> FVar50;
  FTriangleID *pFVar51;
  TVector2<float>_u_0 TVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined4 uVar66;
  undefined1 auStackY_728 [32];
  ForAnyElementType local_6d8;
  undefined8 local_6d0;
  undefined1 local_6c8;
  undefined1 local_6c7;
  undefined1 local_6c6;
  undefined1 local_6c5;
  undefined1 local_6c4;
  undefined1 local_6c3 [3];
  int *local_6c0;
  float local_6b8;
  ForAnyElementType local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  ForAnyElementType local_698;
  int local_690;
  int iStack_68c;
  float local_688;
  FVertexID local_684;
  undefined8 local_680;
  float local_678;
  TArrayView<UE::Math::TVector<float>,int> local_670;
  int local_65c;
  undefined8 local_658;
  float local_650;
  undefined8 local_64c;
  float local_644;
  FTriangleID local_640;
  int local_63c;
  ForElementType<FTriangleID> local_638;
  longlong *local_630;
  undefined8 uStack_628;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  int local_608;
  undefined4 uStack_604;
  TArrayView<UE::Math::TVector<float>,int> local_600;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  float local_5e4;
  float local_5e0;
  float local_5dc;
  undefined8 local_5d8;
  float local_5d0;
  int local_5c8;
  int local_5c4;
  ForElementType<FTriangleID> local_5c0;
  TVector2<float> *local_5b8;
  int local_5b0;
  int local_5ac;
  int local_5a8;
  int local_5a4;
  int local_5a0;
  uint local_59c;
  TArrayView<float,int> local_598;
  bool *local_588;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_580;
  undefined8 local_560;
  float local_558;
  undefined8 local_550;
  undefined8 local_540;
  undefined8 local_530;
  float local_528;
  undefined8 local_524;
  float local_51c;
  undefined8 local_518;
  undefined8 local_508;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_4d8;
  FEdgeID local_4b8;
  int local_4b4;
  int local_4b0;
  TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_> local_4a8;
  TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_> local_4a0;
  TVector2<float>_u_0 local_498;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_490;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> local_488;
  TMeshAttributesRef<FVertexInstanceID,float> local_480;
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_> local_478;
  ForElementType<FTriangleID> local_470;
  TVector<float> *local_468;
  TVector<float> *local_460;
  TVector<float> *local_458;
  TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_> local_450;
  TVector2<float>_u_0_s_0 *local_448;
  TVector2<float>_u_0_s_0 *local_440;
  undefined4 local_438;
  ForElementType<FTriangleID> local_430;
  FTriangleID local_428 [2];
  undefined1 local_420 [12];
  uint uStack_414;
  TBitArray<FDefaultBitArrayAllocator> *local_410;
  undefined8 uStack_408;
  longlong local_400;
  undefined8 uStack_3f8;
  longlong *local_3f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3e8;
  undefined8 uStack_3c8;
  longlong *local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b8;
  undefined8 uStack_398;
  TArrayView<FEdgeID_const_,int> local_390;
  TVector2<float>_u_0 local_380;
  int local_378;
  TArrayView<FTriangleID_const_,int> local_370;
  TRangedForIterator local_360;
  TArrayView<UE::Math::TVector<float>,int> local_330;
  TArrayView<UE::Math::TVector<float>,int> local_320;
  TArrayView<UE::Math::TVector2<float>,int> local_310;
  TArrayView<FVertexInstanceID,int> local_300;
  TArrayView<UE::Math::TVector<float>,int> local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  undefined4 local_2a4;
  undefined1 local_298 [32];
  ForElementType<unsigned_int> local_278;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  undefined1 local_260 [8];
  ForElementType<FSetElementId> local_258;
  int local_250;
  TSet<FTriangleID,DefaultKeyFuncs<FTriangleID,0>,FDefaultSetAllocator> local_248;
  undefined1 local_1f8 [32];
  uint *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  ForElementType<FSetElementId> local_1b8;
  int local_1b0;
  FTriangleID local_1a8 [2];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  ForElementType<FEdgeID> local_190;
  int local_180;
  int local_17c;
  undefined1 local_178 [32];
  undefined8 local_158;
  uint local_150;
  undefined4 local_14c;
  undefined4 local_148;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator> local_128;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_728;
  lVar37 = *(longlong *)((longlong)this + 0x10);
  pFVar49 = (FMeshAttributeArraySetBase *)0x0;
  local_5b8 = (TVector2<float> *)0x0;
  local_65c = 0;
  local_6c0 = this;
  pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x70),0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::Triangle::Normal);
  pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar21 = pFVar49;
  }
  if (((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
      (local_450.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar21->_padding_,
      (local_450.ArrayPtr)->Type != 1)) || ((local_450.ArrayPtr)->Extent != 1)) {
    local_450.ArrayPtr = pFVar49;
  }
  pTVar20 = TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_>::GetRawArray
                      (&local_450,&local_2f0,0);
  local_468 = pTVar20->DataPtr;
  iVar12 = pTVar20->ArrayNum;
  local_5c4 = iVar12;
  pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x70),0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::Triangle::Tangent);
  pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar21 = pFVar49;
  }
  if (((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
      (local_4a8.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar21->_padding_,
      (local_4a8.ArrayPtr)->Type != 1)) || ((local_4a8.ArrayPtr)->Extent != 1)) {
    local_4a8.ArrayPtr = pFVar49;
  }
  pTVar20 = TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_>::GetRawArray
                      (&local_4a8,&local_330,0);
  local_460 = pTVar20->DataPtr;
  iVar16 = pTVar20->ArrayNum;
  local_5a0 = iVar16;
  pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x70),0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::Triangle::Binormal);
  pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar21 = pFVar49;
  }
  if (((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
      (local_4a0.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar21->_padding_,
      (local_4a0.ArrayPtr)->Type != 1)) || ((local_4a0.ArrayPtr)->Extent != 1)) {
    local_4a0.ArrayPtr = pFVar49;
  }
  pTVar20 = TMeshAttributesRef<FTriangleID,UE::Math::TVector<float>_>::GetRawArray
                      (&local_4a0,&local_320,0);
  local_458 = pTVar20->DataPtr;
  iVar46 = pTVar20->ArrayNum;
  local_5a4 = iVar46;
  pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x68),0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::Edge::IsHard);
  pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar21 = pFVar49;
  }
  if ((((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
       (this_00 = (TMeshAttributeArraySet<bool> *)pFVar21->_padding_, (int)this_00->_padding_ != 5))
      || (*(int *)((longlong)&this_00->_padding_ + 4) != 1)) ||
     ((this_00 == (TMeshAttributeArraySet<bool> *)0x0 || ((int)this_00->_padding_ == 0)))) {
    local_63c = 0;
    local_588 = (bool *)0x0;
  }
  else {
    this_01 = TMeshAttributeArraySet<bool>::GetArrayForChannel(this_00,0);
    local_588 = TMeshAttributeArrayBase<bool>::GetElementBase(this_01,0);
    local_63c = (int)this_00->_padding_;
    if ((local_63c < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x58),0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::Normal);
  pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar21 = pFVar49;
  }
  if (((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
      (local_490.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar21->_padding_,
      (local_490.ArrayPtr)->Type != 1)) || ((local_490.ArrayPtr)->Extent != 1)) {
    local_490.ArrayPtr = pFVar49;
  }
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_>::GetRawArray
            (&local_490,&local_600,0);
  pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x58),0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::Tangent);
  pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar21 = pFVar49;
  }
  if (((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
      (local_488.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar21->_padding_,
      (local_488.ArrayPtr)->Type != 1)) || ((local_488.ArrayPtr)->Extent != 1)) {
    local_488.ArrayPtr = pFVar49;
  }
  TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_>::GetRawArray
            (&local_488,&local_670,0);
  pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x58),0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar21 = pFVar49;
  }
  if (((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
      (local_480.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar21->_padding_,
      (local_480.ArrayPtr)->Type != 3)) || ((local_480.ArrayPtr)->Extent != 1)) {
    local_480.ArrayPtr = pFVar49;
  }
  TMeshAttributesRef<FVertexInstanceID,float>::GetRawArray(&local_480,&local_598,0);
  pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x58),0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar21 = pFVar49;
  }
  if (((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar21 = (FMeshAttributeArraySetBase *)pFVar21->_padding_, pFVar21->Type != 2)) ||
     (pFVar21->Extent != 1)) {
    pFVar21 = pFVar49;
  }
  if (0 < (int)pFVar21[2].Type) {
    pFVar18 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar37 + 0x58),0);
    pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar18->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    pFVar21 = (FMeshAttributeArraySetBase *)&pTVar19->field_0x8;
    if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pFVar21 = pFVar49;
    }
    if (((pFVar21 == (FMeshAttributeArraySetBase *)0x0) ||
        (local_478.ArrayPtr = (FMeshAttributeArraySetBase *)pFVar21->_padding_,
        (local_478.ArrayPtr)->Type != 2)) || ((local_478.ArrayPtr)->Extent != 1)) {
      local_478.ArrayPtr = pFVar49;
    }
    pTVar22 = TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_>::GetRawArray
                        (&local_478,&local_310,0);
    local_5b8 = pTVar22->DataPtr;
    local_65c = pTVar22->ArrayNum;
  }
  if ((iVar12 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TriangleNormals.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                          ,0x57c,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar16 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TriangleTangents.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                          ,0x57d,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((iVar46 < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TriangleBinormals.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                          ,0x57e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_14c = 0x80;
  local_178._0_8_ = 0;
  local_178._8_8_ = 0;
  local_158 = 0;
  local_150 = 0;
  local_144 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  local_1f8._0_8_ = 0;
  local_1f8._8_8_ = 0;
  local_1d8 = (uint *)0x0;
  local_1d0 = 0;
  local_1c4 = 0;
  local_1b8 = (ForElementType<FSetElementId>)0x0;
  local_1b0 = 0;
  local_298._0_8_ = (FScriptContainerElement *)0x0;
  local_298._8_8_ = 0;
  local_278 = (ForElementType<unsigned_int>)0x0;
  local_270 = 0;
  local_264 = 0;
  local_258 = (ForElementType<FSetElementId>)0x0;
  local_250 = 0;
  local_6b0.Data = (FScriptContainerElement *)0x0;
  local_6a8 = 0;
  local_248.Elements._0_8_ = 0;
  local_248.Elements._8_8_ = 0;
  local_248.Elements._32_8_ = 0;
  local_248.Elements._40_4_ = 0;
  local_248.Elements._52_4_ = 0;
  local_248.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_248.HashSize = 0;
  local_6d8.Data = (FScriptContainerElement *)0x0;
  local_6d0 = 0;
  local_698.Data = (FScriptContainerElement *)0x0;
  local_690 = 0;
  iStack_68c = 0;
  local_148 = 0xffffffff;
  local_1cc = 0x80;
  local_1c8 = 0xffffffff;
  local_26c = 0x80;
  local_268 = -1;
  local_248.Elements._44_4_ = 0x80;
  local_248.Elements._48_4_ = 0xffffffff;
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_298,0x14);
  for (lVar37 = 0x3f; 0x23UL >> lVar37 == 0; lVar37 = lVar37 + -1) {
  }
  iVar12 = 1 << ((byte)lVar37 & 0x1f);
  local_438 = (undefined4)lVar37;
  if ((local_250 == 0) || (local_250 < iVar12)) {
    local_250 = iVar12;
    TSet<TTuple<FTriangleID,FVertexInfo>,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FTriangleID,FVertexInfo>,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>,FDefaultSetAllocator>
              *)local_298);
  }
  FVar40 = (FVertexID)(local_6c0[1] * param_1);
  iVar12 = local_6c0[1] + (int)FVar40;
  local_5b0 = *local_6c0;
  if (iVar12 < *local_6c0) {
    local_5b0 = iVar12;
  }
  fVar57 = __real_322bcc77;
  fVar56 = __real_3f800000;
  fVar58 = __real_38d1b717;
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  local_684 = FVar40;
  if ((int)FVar40 < local_5b0) {
    do {
      piVar36 = local_6c0;
      local_684 = FVar40;
      TSet<TTuple<FTriangleID,FVertexInfo>,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FTriangleID,FVertexInfo>,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>,FDefaultSetAllocator>
               *)local_298);
      bVar10 = true;
      FMeshElementIndexer::Find<FEdgeID>
                ((FMeshElementIndexer *)(*(longlong *)(piVar36 + 4) + 0x138),&local_390,(int)FVar40,
                 0);
      local_638 = (ForElementType<FTriangleID>)
                  ((longlong)local_390.DataPtr + (longlong)local_390.ArrayNum * 4);
      FVar50 = (ForElementType<FTriangleID>)local_390.DataPtr;
      if ((ForElementType<FTriangleID>)local_390.DataPtr != local_638) {
        do {
          FMeshElementIndexer::Find<FTriangleID>
                    ((FMeshElementIndexer *)(*(longlong *)(piVar36 + 4) + 0x1a8),
                     (TArrayView<FTriangleID_const_,int> *)&local_380._s_0,(int)*(FEdgeID *)FVar50,0
                    );
          local_6a0 = local_380._s_0 + (longlong)local_378 * 4;
          TVar52 = local_380;
          if (local_380 != local_6a0) {
            do {
              pFVar23 = TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
                        ::FindOrAddImpl<FTriangleID_const_&>
                                  ((TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
                                    *)local_298,*(uint *)TVar52,(FTriangleID *)TVar52);
              TArray<FEdgeID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
              AddUniqueImpl<FEdgeID_const_&>(&pFVar23->EdgeIDs,(FEdgeID *)FVar50);
              if (pFVar23->TriangleID == (FTriangleID)0xffffffff) {
                pFVar23->TriangleID = *(FTriangleID *)TVar52;
                pTVar24 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                                    ((TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)
                                     (*(longlong *)(piVar36 + 4) + 0xa0),&local_300,*(int *)TVar52);
                pFVar41 = pTVar24->DataPtr;
                pFVar1 = pFVar41 + pTVar24->ArrayNum;
                for (; pFVar41 != pFVar1; pFVar41 = pFVar41 + 1) {
                  FVar2 = *pFVar41;
                  this_02 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                                      (*(TMeshAttributeArraySet<FVertexID> **)
                                        (*(longlong *)(local_6c0 + 4) + 0x88),0);
                  pFVar25 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_02,(int)FVar2);
                  if (*pFVar25 == local_684) {
                    pFVar23->VertexInstanceID = *pFVar41;
                    if (local_65c != 0) {
                      FVar2 = *pFVar41;
                      uVar15 = 0;
                      if ((int)FVar2 < local_65c) {
                        uVar15 = ~(uint)FVar2 >> 0x1f;
                      }
                      if ((uVar15 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      (pFVar23->UVs).field0_0x0 = local_5b8[(int)FVar2].field0_0x0;
                    }
                    FVar2 = *pFVar41;
                    uVar15 = 0;
                    if ((int)FVar2 < local_600.ArrayNum) {
                      uVar15 = ~(uint)FVar2 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if (((fVar58 < (float)((uint)local_600.DataPtr[(int)FVar2].field0_0x0._s_0.X &
                                          uVar17)) ||
                        (fVar58 < (float)((uint)local_600.DataPtr[(int)FVar2].field0_0x0._s_0.Y &
                                         uVar17))) ||
                       (fVar58 < (float)((uint)local_600.DataPtr[(int)FVar2].field0_0x0._s_0.Z &
                                        uVar17))) {
                      FVar2 = *pFVar41;
                      uVar15 = 0;
                      if ((int)FVar2 < local_670.ArrayNum) {
                        uVar15 = ~(uint)FVar2 >> 0x1f;
                      }
                      if ((uVar15 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      if ((((float)((uint)local_670.DataPtr[(int)FVar2].field0_0x0._s_0.X & uVar17)
                            <= fVar58) &&
                          ((float)((uint)local_670.DataPtr[(int)FVar2].field0_0x0._s_0.Y & uVar17)
                           <= fVar58)) &&
                         ((float)((uint)local_670.DataPtr[(int)FVar2].field0_0x0._s_0.Z & uVar17) <=
                          fVar58)) goto LAB_14436c27e;
                      bVar30 = 1;
                    }
                    else {
LAB_14436c27e:
                      bVar30 = 0;
                    }
                    bVar10 = (bool)(bVar10 & bVar30);
                    piVar36 = local_6c0;
                    if (bVar10) {
                      FVar2 = *pFVar41;
                      uVar15 = 0;
                      uVar17 = uVar15;
                      if ((int)FVar2 < local_670.ArrayNum) {
                        uVar17 = ~(uint)FVar2 >> 0x1f;
                      }
                      if ((uVar17 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0x14f,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      fVar61 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                      fVar62 = (float)((ulonglong)
                                       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20
                                      );
                      fVar58 = local_670.DataPtr[(int)FVar2].field0_0x0._s_0.X;
                      fVar59 = local_670.DataPtr[(int)FVar2].field0_0x0._s_0.Y;
                      uVar66 = local_670.DataPtr[(int)FVar2].field0_0x0._s_0.Z;
                      fVar63 = fVar59 * fVar59 + fVar58 * fVar58 + (float)uVar66 * (float)uVar66;
                      if (fVar63 == fVar56) {
                        local_550 = *(undefined8 *)&local_670.DataPtr[(int)FVar2].field0_0x0;
                        fVar59 = (float)((ulonglong)local_550 >> 0x20);
                        fVar58 = (float)local_550;
                      }
                      else if (fVar57 <= fVar63) {
                        fVar57 = fVar56 / SQRT(fVar63);
                        fVar59 = fVar57 * fVar59;
                        fVar58 = fVar57 * fVar58;
                        uVar66 = fVar57 * (float)uVar66;
                      }
                      else {
                        local_550 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        fVar59 = fVar62;
                        fVar58 = fVar61;
                        uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                      }
                      FVar2 = *pFVar41;
                      uVar17 = uVar15;
                      if ((int)FVar2 < local_600.ArrayNum) {
                        uVar17 = ~(uint)FVar2 >> 0x1f;
                      }
                      if (uVar17 == 0) {
                        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           );
                        if (bVar11) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        fVar61 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        fVar62 = (float)((ulonglong)
                                         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                        0x20);
                      }
                      fVar65 = __real_322bcc77;
                      fVar63 = local_600.DataPtr[(int)FVar2].field0_0x0._s_0.X;
                      fVar64 = local_600.DataPtr[(int)FVar2].field0_0x0._s_0.Y;
                      uVar60 = local_600.DataPtr[(int)FVar2].field0_0x0._s_0.Z;
                      fVar57 = fVar63 * fVar63 + fVar64 * fVar64 + (float)uVar60 * (float)uVar60;
                      if (fVar57 == fVar56) {
                        local_540 = *(undefined8 *)&local_600.DataPtr[(int)FVar2].field0_0x0;
                        fVar64 = (float)((ulonglong)local_540 >> 0x20);
                        fVar63 = (float)local_540;
                      }
                      else if (__real_322bcc77 <= fVar57) {
                        fVar56 = fVar56 / SQRT(fVar57);
                        fVar64 = fVar56 * fVar64;
                        fVar63 = fVar56 * fVar63;
                        uVar60 = fVar56 * (float)uVar60;
                      }
                      else {
                        local_540 = CONCAT44(fVar62,fVar61);
                        fVar64 = fVar62;
                        fVar63 = fVar61;
                        uVar60 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                      }
                      fVar57 = fVar64 * (float)uVar66 - (float)uVar60 * fVar59;
                      fVar54 = (float)uVar60 * fVar58 - fVar63 * (float)uVar66;
                      local_558 = fVar63 * fVar59 - fVar64 * fVar58;
                      fVar56 = fVar54 * fVar54 + fVar57 * fVar57 + local_558 * local_558;
                      if (fVar56 == __real_3f800000) {
                        local_64c = CONCAT44(fVar54,fVar57);
                        local_644 = local_558;
                      }
                      else if (__real_322bcc77 <= fVar56) {
                        fVar56 = __real_3f800000 / SQRT(fVar56);
                        local_644 = local_558 * fVar56;
                        local_64c = CONCAT44(fVar54 * fVar56,fVar57 * fVar56);
                      }
                      else {
                        local_64c = CONCAT44(fVar62,fVar61);
                        local_644 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                      }
                      fVar56 = local_644;
                      local_560 = CONCAT44(fVar54,fVar57);
                      FVar2 = *pFVar41;
                      if ((int)FVar2 < local_598.ArrayNum) {
                        uVar15 = ~(uint)FVar2 >> 0x1f;
                      }
                      if (uVar15 == 0) {
                        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           );
                        if (bVar11) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        fVar61 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                        fVar62 = (float)((ulonglong)
                                         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                                        0x20);
                      }
                      local_528 = local_598.DataPtr[(int)FVar2];
                      fVar54 = local_528 * (float)local_64c;
                      fVar57 = local_528 * local_64c._4_4_;
                      local_528 = local_528 * fVar56;
                      fVar56 = fVar57 * fVar57 + fVar54 * fVar54 + local_528 * local_528;
                      if (fVar56 == __real_3f800000) {
                        local_508 = CONCAT44(fVar57,fVar54);
                        fVar61 = fVar54;
                        uVar55 = local_528;
                        fVar62 = fVar57;
                      }
                      else if (fVar65 <= fVar56) {
                        fVar56 = __real_3f800000 / SQRT(fVar56);
                        fVar62 = fVar57 * fVar56;
                        fVar61 = fVar54 * fVar56;
                        uVar55 = local_528 * fVar56;
                      }
                      else {
                        local_508 = CONCAT44(fVar62,fVar61);
                        uVar55 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                      }
                      local_530 = CONCAT44(fVar57,fVar54);
                      iVar12 = _finite((double)fVar58);
                      if ((((((iVar12 == 0) || (iVar12 = _finite((double)fVar59), iVar12 == 0)) ||
                            (iVar12 = _finite((double)(float)uVar66),
                            uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff,
                            fVar57 = __real_322bcc77, iVar12 == 0)) ||
                           ((((float)((uint)fVar58 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                              fVar65 &&
                             ((float)((uint)fVar59 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                              fVar65)) &&
                            ((float)(uVar66 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                             __real_322bcc77)))) ||
                          ((((iVar12 = _finite((double)fVar61), iVar12 == 0 ||
                             (iVar12 = _finite((double)fVar62), iVar12 == 0)) ||
                            ((iVar12 = _finite((double)(float)uVar55), iVar12 == 0 ||
                             (((((float)((uint)fVar61 & uVar17) <= fVar57 &&
                                ((float)((uint)fVar62 & uVar17) <= fVar57)) &&
                               ((float)(uVar55 & uVar17) <= fVar57)) ||
                              ((iVar12 = _finite((double)fVar63), iVar12 == 0 ||
                               (iVar12 = _finite((double)fVar64), iVar12 == 0)))))))) ||
                           (iVar12 = _finite((double)(float)uVar60), iVar12 == 0)))) ||
                         (((piVar36 = local_6c0, fVar56 = __real_3f800000, fVar58 = __real_38d1b717,
                           (float)((uint)fVar63 & uVar17) <= fVar57 &&
                           ((float)((uint)fVar64 & uVar17) <= fVar57)) &&
                          ((float)(uVar60 & uVar17) <= fVar57)))) {
                        bVar10 = false;
                        piVar36 = local_6c0;
                        fVar57 = __real_322bcc77;
                        fVar56 = __real_3f800000;
                        fVar58 = __real_38d1b717;
                        uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                      }
                    }
                    break;
                  }
                  piVar36 = local_6c0;
                }
              }
              TVar52._s_0 = TVar52._s_0 + 4;
            } while (TVar52 != local_6a0);
          }
          FVar50 = (ForElementType<FTriangleID>)((longlong)FVar50 + 4);
        } while (FVar50 != local_638);
        FVar40 = local_684;
        if (!bVar10) {
          if ((longlong)local_6a8 < 0) {
            DestructItems<TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)local_6b0.Data,(uint)local_6a8);
            bVar10 = local_6a8._4_4_ != 0;
            local_6a8 = (ulonglong)local_6a8._4_4_ << 0x20;
            if (bVar10) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,0,&local_6b0,0,(int *)((longlong)&local_6a8 + 4));
            }
          }
          else {
            DestructItems<TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
                      ((TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        *)local_6b0.Data,(uint)local_6a8);
            local_6a8 = local_6a8 & 0xffffffff00000000;
          }
          if (local_248.Elements._8_4_ != local_248.Elements._52_4_) {
            TSet<FTriangleID,DefaultKeyFuncs<FTriangleID,0>,FDefaultSetAllocator>::UnhashElements
                      (&local_248);
            bVar10 = (longlong)local_248.Elements._8_8_ < 0;
            local_248.Elements._8_8_ = local_248.Elements._8_8_ & 0xffffffff00000000;
            if (bVar10) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)&local_248,0,
                         (int *)&local_248.Elements.field_0xc);
            }
            local_248.Elements._48_4_ = 0xffffffff;
            local_248.Elements._52_4_ = 0;
            local_248.Elements._40_4_ = 0;
          }
          local_4f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10);
          local_128.Elements._0_8_ = 0;
          local_128.Elements._8_8_ = 0;
          local_128.Elements._32_8_ = 0;
          local_128.Elements._40_4_ = 0;
          local_128.Elements._44_4_ = 0x80;
          local_128.Elements._48_4_ = 0xffffffff;
          local_128.Elements._52_4_ = 0;
          local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_128.HashSize = 0;
          local_4f8._padding_._0_4_ = 0;
          local_4f8._padding_._4_4_ = 1;
          local_4f8.UnvisitedBitMask = 0xffffffff;
          local_4f8.CurrentBitIndex = 0;
          local_4f8.BaseBitIndex = 0;
          if (local_270 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4f8);
          }
          uStack_628 = CONCAT44(local_4f8._padding_._4_4_,(undefined4)local_4f8._padding_);
          local_630 = (longlong *)local_298;
          uStack_618 = CONCAT44(local_4f8.CurrentBitIndex,local_4f8.UnvisitedBitMask);
          uStack_610 = CONCAT44(local_4f8._28_4_,local_4f8.BaseBitIndex);
          local_608 = local_298._8_4_ - local_264;
          pTStack_620 = local_4f8.Array;
          uStack_3f8._4_4_ = uStack_604;
          uStack_3f8._0_4_ = local_608;
          local_410 = local_4f8.Array;
          local_420._0_8_ = local_630;
          unique0x100053e4 = uStack_628;
          uStack_408 = uStack_618;
          local_400 = uStack_610;
          pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_2e0,(TBitArray<FDefaultBitArrayAllocator> *)(local_298 + 0x10)
                               ,local_270);
          local_630 = (longlong *)local_298;
          uStack_628 = pTVar26->_padding_;
          pTStack_620 = pTVar26->Array;
          uStack_618._0_4_ = pTVar26->UnvisitedBitMask;
          uStack_618._4_4_ = pTVar26->CurrentBitIndex;
          uStack_610 = *(longlong *)&pTVar26->BaseBitIndex;
          local_608 = local_298._8_4_ - local_264;
          local_360._44_4_ = uStack_604;
          local_360.InitialNum = local_608;
          local_360._padding_ = (longlong)local_630;
          local_360._padding_ = uStack_628;
          local_360._padding_ = (longlong)pTStack_620;
          local_360._padding_ = uStack_618;
          local_360._padding_ = uStack_610;
          bVar10 = TSparseArray<TSparseSetElement<TTuple<FTriangleID,FVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_420,&local_360);
          if (bVar10) {
            do {
              uVar15 = 0;
              lVar33 = (longlong)uStack_408._4_4_ * 0x38;
              lVar37 = *(longlong *)local_420._0_8_;
              local_1a8[0] = *(FTriangleID *)(lVar33 + lVar37);
              local_1a0 = *(undefined4 *)(lVar33 + 8 + lVar37);
              local_19c = *(undefined4 *)(lVar33 + 0xc + lVar37);
              local_198 = *(undefined8 *)(lVar33 + 0x10 + lVar37);
              local_190.SecondaryData = (ForElementType<FEdgeID>)0x0;
              _Src = *(void **)(lVar33 + 0x20 + lVar37);
              iVar12 = *(int *)(lVar33 + 0x28 + lVar37);
              local_180 = iVar12;
              if (_Src == (void *)0x0) {
                _Src = (void *)(lVar37 + 0x18 + lVar33);
              }
              if (iVar12 == 0) {
                local_17c = 2;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FEdgeID>_>
                          (4,4,iVar12,0,&local_190,iVar12,&local_17c);
                FVar39 = (ForElementType<FEdgeID>)&local_190;
                if (local_190.SecondaryData != (ForElementType<FEdgeID>)0x0) {
                  FVar39 = local_190.SecondaryData;
                }
                memcpy((void *)FVar39,_Src,(longlong)iVar12 << 2);
              }
              if (local_248.Elements._8_4_ != local_248.Elements._52_4_) {
                FVar34 = (ForElementType<FSetElementId>)&local_248.Hash;
                if (local_248.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar34 = local_248.Hash.SecondaryData;
                }
                for (iVar12 = *(int *)((longlong)FVar34 +
                                      (ulonglong)(local_248.HashSize - 1U & (uint)local_1a8[0]) * 4)
                    ; iVar12 != -1;
                    iVar12 = *(int *)(local_248.Elements._0_8_ + (longlong)iVar12 * 0xc + 4)) {
                  if (*(FTriangleID *)(local_248.Elements._0_8_ + (longlong)iVar12 * 0xc) ==
                      local_1a8[0]) {
                    if (local_190.SecondaryData == (ForElementType<FEdgeID>)0x0) goto LAB_14436d03f;
                    goto LAB_14436d03a;
                  }
                }
              }
              uVar13 = (uint)local_6a8;
              if ((uint)local_6a8 == local_6a8._4_4_) {
                uVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x830,&local_6b0,(int *)((longlong)&local_6a8 + 4));
              }
              local_6a8 = CONCAT44(local_6a8._4_4_,uVar13 + 1);
              lVar37 = (longlong)(int)uVar13 * 0x30;
              *(undefined8 *)&local_6b0.Data[lVar37].field_0x0 = 0;
              *(undefined8 *)(local_6b0.Data + lVar37 + 8) = 0;
              *(undefined8 *)(local_6b0.Data + lVar37 + 0x10) = 0;
              *(undefined8 *)(local_6b0.Data + lVar37 + 0x10 + 8) = 0;
              *(undefined8 *)(local_6b0.Data + lVar37 + 0x20) = 0;
              *(undefined8 *)(local_6b0.Data + lVar37 + 0x20 + 8) = 0;
              uVar14 = 0;
              if ((int)uVar13 < (int)(uVar13 + 1)) {
                uVar14 = ~uVar13 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar35 = local_6d0;
              TVar52 = (TVector2<float>_u_0)(lVar37 + (longlong)local_6b0.Data);
              uVar13 = local_6d0._4_4_;
              local_6d0 = (ulonglong)local_6d0._4_4_ << 0x20;
              local_6a0 = TVar52;
              if (((longlong)uVar35 < 0) && (uVar13 != 0)) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0,&local_6d8,0,(int *)((longlong)&local_6d0 + 4));
                uVar15 = (uint)local_6d0;
                uVar13 = local_6d0._4_4_;
              }
              if ((local_6d8.Data <= local_1a8) &&
                 (local_1a8 < (FTriangleID *)(local_6d8.Data + (longlong)(int)uVar13 * 4))) {
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar10) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar13 = local_6d0._4_4_;
                uVar15 = (uint)local_6d0;
              }
              if (uVar15 == uVar13) {
                uVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_6d8,(int *)((longlong)&local_6d0 + 4));
              }
              uVar13 = uVar15 + 1;
              local_6d0 = CONCAT44(local_6d0._4_4_,uVar13);
              *(FTriangleID *)(local_6d8.Data + (longlong)(int)uVar15 * 4) = local_1a8[0];
              uVar35 = (ulonglong)uVar13;
              while (0 < (int)uVar13) {
                iVar12 = (int)uVar35;
                iVar46 = iVar12 + -1;
                local_640 = *(FTriangleID *)((longlong)local_6d8.Data + (longlong)iVar46 * 4);
                iVar16 = (iVar12 - iVar46) + -1;
                if (iVar16 != 0) {
                  memmove((FTriangleID *)((longlong)local_6d8.Data + (longlong)iVar46 * 4),
                          (FTriangleID *)((longlong)local_6d8.Data + (longlong)iVar46 * 4) + 1,
                          (longlong)iVar16 << 2);
                  iVar12 = (uint)local_6d0;
                }
                local_6d0 = CONCAT44(local_6d0._4_4_,iVar12 + -1);
                pFVar23 = TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
                          ::FindOrAddImpl<FTriangleID_const_&>
                                    ((TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
                                      *)local_298,(uint)local_640,&local_640);
                TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::
                AddUniqueImpl<FTriangleID_const_&>
                          ((TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                            *)TVar52,&pFVar23->TriangleID);
                TSet<FTriangleID,DefaultKeyFuncs<FTriangleID,0>,FDefaultSetAllocator>::
                Emplace<FTriangleID_const_&>(&local_248,local_428,(bool *)pFVar23);
                FVar6 = (pFVar23->EdgeIDs).AllocatorInstance.SecondaryData;
                FVar39 = (ForElementType<FEdgeID>)&pFVar23->EdgeIDs;
                iVar12 = (pFVar23->EdgeIDs).ArrayNum;
                if (FVar6 != (ForElementType<FEdgeID>)0x0) {
                  FVar39 = FVar6;
                }
                FVar6 = (ForElementType<FEdgeID>)((longlong)FVar39 + (longlong)iVar12 * 4);
                while( true ) {
                  if ((pFVar23->EdgeIDs).ArrayNum != iVar12) {
                    local_6c8 = 0;
                    `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_6c8);
                  }
                  if (FVar39 == FVar6) break;
                  uVar15 = *(uint *)FVar39;
                  uVar13 = 0;
                  if ((int)uVar15 < local_63c) {
                    uVar13 = ~uVar15 >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (local_588[(int)uVar15] == false) {
                    if (local_128.Elements._8_4_ != local_128.Elements._52_4_) {
                      FVar34 = (ForElementType<FSetElementId>)&local_128.Hash;
                      if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar34 = local_128.Hash.SecondaryData;
                      }
                      for (iVar16 = *(int *)((longlong)FVar34 +
                                            (ulonglong)(local_128.HashSize - 1U & *(uint *)FVar39) *
                                            4); iVar16 != -1;
                          iVar16 = *(int *)(local_128.Elements._0_8_ + 4 + (longlong)iVar16 * 0xc))
                      {
                        if (*(uint *)(local_128.Elements._0_8_ + (longlong)iVar16 * 0xc) ==
                            *(uint *)FVar39) goto LAB_14436d00d;
                      }
                    }
                    TSet<FEdgeID,DefaultKeyFuncs<FEdgeID,0>,FDefaultSetAllocator>::
                    Emplace<FEdgeID_const_&>(&local_128,&local_4b8,(bool *)FVar39);
                    FMeshElementIndexer::Find<FTriangleID>
                              ((FMeshElementIndexer *)(*(longlong *)(local_6c0 + 4) + 0x1a8),
                               &local_370,*(int *)FVar39,0);
                    pFVar51 = local_370.DataPtr + local_370.ArrayNum;
                    for (pFVar38 = local_370.DataPtr; pFVar38 != pFVar51; pFVar38 = pFVar38 + 1) {
                      if (*pFVar38 != pFVar23->TriangleID) {
                        pFVar27 = TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
                                  ::FindOrAddImpl<FTriangleID_const_&>
                                            ((TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
                                              *)local_298,(uint)*pFVar38,pFVar38);
                        if (local_248.Elements._8_4_ != local_248.Elements._52_4_) {
                          FVar34 = (ForElementType<FSetElementId>)&local_248.Hash;
                          if (local_248.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                            FVar34 = local_248.Hash.SecondaryData;
                          }
                          for (iVar16 = *(int *)((longlong)FVar34 +
                                                (ulonglong)
                                                (local_248.HashSize - 1U & (uint)pFVar27->TriangleID
                                                ) * 4); iVar16 != -1;
                              iVar16 = *(int *)(local_248.Elements._0_8_ +
                                               (longlong)iVar16 * 0xc + 4)) {
                            if (*(FTriangleID *)(local_248.Elements._0_8_ + (longlong)iVar16 * 0xc)
                                == pFVar27->TriangleID) goto LAB_14436d000;
                          }
                        }
                        if (((local_6d8.Data <= pFVar38) &&
                            (pFVar38 < (FTriangleID *)
                                       (local_6d8.Data + (longlong)(int)local_6d0._4_4_ * 4))) &&
                           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar10)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        iVar16 = (uint)local_6d0;
                        if ((uint)local_6d0 == local_6d0._4_4_) {
                          iVar16 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&local_6d8,(int *)((longlong)&local_6d0 + 4));
                        }
                        local_6d0 = CONCAT44(local_6d0._4_4_,iVar16 + 1);
                        *(FTriangleID *)(local_6d8.Data + (longlong)iVar16 * 4) = *pFVar38;
                      }
LAB_14436d000:
                    }
                  }
LAB_14436d00d:
                  FVar39 = (ForElementType<FEdgeID>)((longlong)FVar39 + 4);
                }
                TVar52 = local_6a0;
                uVar35 = local_6d0;
                uVar13 = (uint)local_6d0;
              }
              if (local_190.SecondaryData != (ForElementType<FEdgeID>)0x0) {
LAB_14436d03a:
                FMemory::Free((void *)local_190.SecondaryData);
              }
LAB_14436d03f:
              uStack_408 = CONCAT44(uStack_408._4_4_,(uint)uStack_408 & ~uStack_414);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_420 + 8));
              bVar10 = TSparseArray<TSparseSetElement<TTuple<FTriangleID,FVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForIterator::operator!=((TRangedForIterator *)local_420,&local_360);
            } while (bVar10);
          }
          uVar31 = (ulonglong)(int)(uint)local_6a8;
          local_59c = (uint)local_6a8;
          local_430 = (ForElementType<FTriangleID>)(local_6b0.Data + uVar31 * 0x30);
          uVar35 = uVar31;
          FVar42.Data = local_6b0.Data;
          while( true ) {
            FVar50 = local_430;
            local_638 = (ForElementType<FTriangleID>)FVar42.Data;
            if ((int)uVar31 != (int)uVar35) {
              local_6c7 = 0;
              `TCheckedPointerIterator<TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_6c7);
            }
            if ((ForElementType<FTriangleID>)FVar42.Data == FVar50) break;
            TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
            ::Reset((TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                     *)local_178);
            TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
            ::Reset((TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                     *)local_1f8);
            local_690 = 0;
            if (iStack_68c < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_698,0,&iStack_68c);
            }
            FVar50 = *(ForElementType<FTriangleID> *)
                      &((FTriangleID *)((longlong)FVar42.Data + 0x20))->field_0x0;
            local_678 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            FVar3 = *(FTriangleID *)((longlong)FVar42.Data + 0x28);
            local_680 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            uVar9 = local_680;
            FVar48 = (ForElementType<FTriangleID>)FVar42.Data;
            if (FVar50 != (ForElementType<FTriangleID>)0x0) {
              FVar48 = FVar50;
            }
            local_680._4_4_ =
                 (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
            local_680._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_6b8 = local_680._4_4_;
            local_688 = (float)local_680;
            local_5c0 = (ForElementType<FTriangleID>)((longlong)FVar48 + (longlong)(int)FVar3 * 4);
            uVar66 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            fVar58 = local_680._4_4_;
            local_680 = uVar9;
            while( true ) {
              FVar50 = local_5c0;
              pFVar51 = (FTriangleID *)0x0;
              if (*(FTriangleID *)((longlong)FVar42.Data + 0x28) != FVar3) {
                local_6c6 = 0;
                `TCheckedPointerIterator<FTriangleID_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_6c6);
              }
              if (FVar48 == FVar50) break;
              FVar4 = *(FTriangleID *)FVar48;
              if (local_298._8_4_ != local_264) {
                FVar34 = (ForElementType<FSetElementId>)local_260;
                if (local_258 != (ForElementType<FSetElementId>)0x0) {
                  FVar34 = local_258;
                }
                FVar5 = *(FTriangleID *)
                         ((longlong)FVar34 + (ulonglong)(local_250 - 1U & (uint)FVar4) * 4);
                while (FVar5 != (FTriangleID)0xffffffff) {
                  pFVar38 = (FTriangleID *)(local_298._0_8_ + (longlong)(int)FVar5 * 0x38);
                  if (*pFVar38 == FVar4) {
                    if (pFVar38 != (FTriangleID *)0x0) goto LAB_14436d203;
                    break;
                  }
                  FVar5 = pFVar38[0xc];
                }
              }
              local_470 = FVar48;
              TSet<TTuple<FTriangleID,FVertexInfo>,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<FTriangleID_const_&>_>
                        ((TSet<TTuple<FTriangleID,FVertexInfo>,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>,FDefaultSetAllocator>
                          *)local_298,(uint)&local_5c8,
                         (TKeyInitializer<FTriangleID_const_&> *)(ulonglong)(uint)FVar4,
                         (bool *)&local_470);
              pFVar38 = (FTriangleID *)(local_298._0_8_ + (longlong)local_5c8 * 0x38);
LAB_14436d203:
              uVar17 = 0;
              if (*(char *)((longlong)local_6c0 + 9) != '\0') {
                plVar7 = *(longlong **)(local_6c0 + 6);
                FVar4 = *(FTriangleID *)FVar48;
                uVar15 = uVar17;
                if ((int)FVar4 < (int)plVar7[1]) {
                  uVar15 = ~(uint)FVar4 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pfVar43 = (float *)((longlong)(int)FVar4 * 0x1c + *plVar7);
                pFVar32 = (FTriangleID *)(pfVar43 + 1);
                pFVar28 = pFVar51;
                do {
                  if (*pFVar32 == pFVar38[3]) {
                    fVar56 = pfVar43[(longlong)pFVar28 * 2 + 2];
                    goto LAB_14436d2b8;
                  }
                  pFVar28 = (FTriangleID *)&pFVar28->field_0x1;
                  pFVar32 = pFVar32 + 2;
                } while ((longlong)pFVar28 < 3);
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                                    ,0x51d,L"");
                if (bVar10) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                fVar56 = 0.0;
LAB_14436d2b8:
                fVar56 = fVar56 * *pfVar43;
              }
              piVar36 = local_6c0;
              FVar4 = *(FTriangleID *)FVar48;
              uVar15 = uVar17;
              if ((int)FVar4 < local_5c4) {
                uVar15 = ~(uint)FVar4 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar5 = *(FTriangleID *)FVar48;
              fVar59 = fVar56 * local_468[(int)FVar4].field0_0x0._s_0.X;
              fVar57 = fVar56 * local_468[(int)FVar4].field0_0x0._s_0.Y;
              fVar58 = fVar56 * local_468[(int)FVar4].field0_0x0._s_0.Z;
              uVar15 = uVar17;
              if ((int)FVar5 < local_5a0) {
                uVar15 = ~(uint)FVar5 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar4 = *(FTriangleID *)FVar48;
              fVar61 = fVar56 * local_460[(int)FVar5].field0_0x0._s_0.X;
              fVar62 = fVar56 * local_460[(int)FVar5].field0_0x0._s_0.Y;
              fVar63 = fVar56 * local_460[(int)FVar5].field0_0x0._s_0.Z;
              if ((int)FVar4 < local_5a4) {
                uVar17 = ~(uint)FVar4 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              fVar64 = fVar56 * local_458[(int)FVar4].field0_0x0._s_0.X;
              fVar65 = fVar56 * local_458[(int)FVar4].field0_0x0._s_0.Y;
              fVar56 = fVar56 * local_458[(int)FVar4].field0_0x0._s_0.Z;
              pFVar38 = pFVar51;
              if (local_298._8_4_ != local_264) {
                FVar34 = (ForElementType<FSetElementId>)local_260;
                if (local_258 != (ForElementType<FSetElementId>)0x0) {
                  FVar34 = local_258;
                }
                FVar4 = *(FTriangleID *)
                         ((longlong)FVar34 +
                         (ulonglong)(local_250 - 1U & (uint)*(FTriangleID *)FVar48) * 4);
                while (pFVar38 = pFVar51, FVar4 != (FTriangleID)0xffffffff) {
                  pFVar38 = (FTriangleID *)(local_298._0_8_ + (longlong)(int)FVar4 * 0x38);
                  if (*pFVar38 == *(FTriangleID *)FVar48) {
                    if (pFVar38 != (FTriangleID *)0x0) goto LAB_14436d4a7;
                    break;
                  }
                  FVar4 = pFVar38[0xc];
                }
              }
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L"");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
LAB_14436d4a7:
              pFVar38 = pFVar38 + 3;
              if (((local_698.Data <= pFVar38) &&
                  (pFVar38 < (FTriangleID *)(local_698.Data + (longlong)iStack_68c * 4))) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (local_690 == iStack_68c) {
                local_690 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_698,&iStack_68c);
              }
              uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
              fVar54 = __real_322bcc77;
              lVar37 = (longlong)local_690;
              fVar53 = (float)((uint)fVar59 & __xmm_7fffffff7fffffff7fffffff7fffffff);
              local_690 = local_690 + 1;
              *(FTriangleID *)(local_698.Data + lVar37 * 4) = *pFVar38;
              if (((((fVar54 < fVar53) || (fVar54 < (float)((uint)fVar57 & uVar17))) ||
                   (fVar54 < (float)((uint)fVar58 & uVar17))) &&
                  ((iVar12 = _finite((double)fVar59), iVar12 != 0 &&
                   (iVar12 = _finite((double)fVar57), iVar12 != 0)))) &&
                 (iVar12 = _finite((double)fVar58), iVar12 != 0)) {
                uVar66 = (float)uVar66 + fVar58;
                local_688 = local_688 + fVar59;
                local_6b8 = local_6b8 + fVar57;
                local_680 = CONCAT44(local_6b8,local_688);
                local_678 = (float)uVar66;
              }
              fVar58 = local_6b8;
              fVar57 = __real_322bcc77;
              if ((char)piVar36[2] == '\0') {
                pFVar23 = TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
                          ::FindChecked((TMapBase<FTriangleID,FVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTriangleID,FVertexInfo,0>_>
                                         *)local_298,(FTriangleID *)FVar48);
                uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                fVar57 = __real_322bcc77;
                pTVar45 = &pFVar23->UVs;
                local_6a0 = (TVector2<float>_u_0)
                            *(TVector2<float>_u_0 *)&(pFVar23->UVs).field0_0x0._s_0;
                if (__real_322bcc77 <
                    (float)((uint)(float)local_6a0 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
                  local_5f0 = (float)local_6a0;
                }
                else {
                  local_5f0 = 0.0;
                }
                if (__real_322bcc77 <
                    (float)((uint)local_6a0._4_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
                  local_5ec = local_6a0._4_4_;
                }
                else {
                  local_5ec = 0.0;
                }
                local_498 = local_6a0;
                uVar15 = (*FCrc::MemCrc32Func)(&local_5f0,8,0);
                iVar12 = TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                         ::FindIndexByHash<UE::Math::TVector2<float>_>
                                   ((TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                                     *)local_178,uVar15,(TVector2<float> *)&local_498._s_0);
                local_6a0 = (pTVar45->field0_0x0)._s_0;
                if (fVar57 < (float)((uint)(float)local_6a0 & uVar17)) {
                  local_5e8 = (float)local_6a0;
                }
                else {
                  local_5e8 = 0.0;
                }
                if (fVar57 < (float)((uint)local_6a0._4_4_ & uVar17)) {
                  local_5e4 = local_6a0._4_4_;
                }
                else {
                  local_5e4 = 0.0;
                }
                uVar15 = (*FCrc::MemCrc32Func)(&local_5e8,8,0);
                iVar16 = TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                         ::FindIndexByHash<UE::Math::TVector2<float>_>
                                   ((TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                                     *)local_178,uVar15,pTVar45);
                if ((iVar16 == -1) ||
                   (lVar37 = (longlong)iVar16 * 0x1c + local_178._0_8_, lVar37 == 0)) {
                  local_448 = (TVector2<float>_u_0_s_0 *)pTVar45;
                  TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                  ::EmplaceByHash<TKeyInitializer<UE::Math::TVector2<float>_const_&>_>
                            ((TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                              *)local_178,(uint)&local_5a8,
                             (TKeyInitializer<UE::Math::TVector2<float>_const_&> *)(ulonglong)uVar15
                             ,(bool *)&local_448);
                  lVar37 = (longlong)local_5a8 * 0x1c + local_178._0_8_;
                }
                local_6a0 = (pTVar45->field0_0x0)._s_0;
                if (fVar57 < (float)((uint)(float)local_6a0 & uVar17)) {
                  local_5e0 = (float)local_6a0;
                }
                else {
                  local_5e0 = 0.0;
                }
                if (fVar57 < (float)((uint)local_6a0._4_4_ & uVar17)) {
                  local_5dc = local_6a0._4_4_;
                }
                else {
                  local_5dc = 0.0;
                }
                uVar15 = (*FCrc::MemCrc32Func)(&local_5e0,8,0);
                iVar16 = TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                         ::FindIndexByHash<UE::Math::TVector2<float>_>
                                   ((TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                                     *)local_1f8,uVar15,pTVar45);
                if ((iVar16 == -1) ||
                   (lVar33 = (longlong)iVar16 * 0x1c + local_1f8._0_8_, lVar33 == 0)) {
                  local_440 = (TVector2<float>_u_0_s_0 *)pTVar45;
                  TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                  ::EmplaceByHash<TKeyInitializer<UE::Math::TVector2<float>_const_&>_>
                            ((TSet<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>,FNTBGroupKeyFuncs,FDefaultSetAllocator>
                              *)local_1f8,(uint)&local_5ac,
                             (TKeyInitializer<UE::Math::TVector2<float>_const_&> *)(ulonglong)uVar15
                             ,(bool *)&local_440);
                  lVar33 = (longlong)local_5ac * 0x1c + local_1f8._0_8_;
                }
                if (iVar12 == -1) {
                  *(undefined8 *)(lVar37 + 8) = 0;
                  *(undefined4 *)(lVar37 + 0x10) = 0;
                  *(undefined8 *)(lVar33 + 8) = 0;
                  *(undefined4 *)(lVar33 + 0x10) = 0;
                }
                if (((((fVar57 < (float)((uint)fVar61 & uVar17)) ||
                      (fVar57 < (float)((uint)fVar62 & uVar17))) ||
                     (fVar57 < (float)((uint)fVar63 & uVar17))) &&
                    ((iVar12 = _finite((double)fVar61), iVar12 != 0 &&
                     (iVar12 = _finite((double)fVar62), iVar12 != 0)))) &&
                   (iVar12 = _finite((double)fVar63), iVar12 != 0)) {
                  *(float *)(lVar37 + 8) = fVar61 + *(float *)(lVar37 + 8);
                  *(float *)(lVar37 + 0xc) = fVar62 + *(float *)(lVar37 + 0xc);
                  *(float *)(lVar37 + 0x10) = fVar63 + *(float *)(lVar37 + 0x10);
                }
                fVar57 = __real_322bcc77;
                if ((((__real_322bcc77 < (float)((uint)fVar64 & uVar17)) ||
                     (__real_322bcc77 < (float)((uint)fVar65 & uVar17))) ||
                    (__real_322bcc77 < (float)((uint)fVar56 & uVar17))) &&
                   (((iVar12 = _finite((double)fVar64), iVar12 != 0 &&
                     (iVar12 = _finite((double)fVar65), iVar12 != 0)) &&
                    (iVar12 = _finite((double)fVar56), iVar12 != 0)))) {
                  *(float *)(lVar33 + 8) = fVar64 + *(float *)(lVar33 + 8);
                  *(float *)(lVar33 + 0xc) = fVar65 + *(float *)(lVar33 + 0xc);
                  *(float *)(lVar33 + 0x10) = fVar56 + *(float *)(lVar33 + 0x10);
                }
              }
              FVar48 = (ForElementType<FTriangleID>)((longlong)FVar48 + 4);
              FVar42.Data = (FScriptContainerElement *)local_638;
              fVar56 = __real_3f800000;
            }
            fVar59 = fVar58 * fVar58 + local_688 * local_688 + (float)uVar66 * (float)uVar66;
            if (fVar57 < fVar59) {
              fVar59 = fVar56 / SQRT(fVar59);
              local_678 = (float)uVar66 * fVar59;
              local_680 = CONCAT44(fVar58 * fVar59,local_688 * fVar59);
            }
            if ((char)local_6c0[2] == '\0') {
              local_4d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
              iVar12 = 0;
              local_4d8._padding_._4_4_ = 1;
              local_4d8._padding_._0_4_ = 0;
              local_4d8.UnvisitedBitMask = 0xffffffff;
              local_4d8.CurrentBitIndex = 0;
              local_4d8.BaseBitIndex = 0;
              if (local_150 != 0) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_4d8);
              }
              uVar17 = local_150;
              uStack_628 = CONCAT44(local_4d8._padding_._4_4_,(undefined4)local_4d8._padding_);
              local_630 = (longlong *)local_178;
              uStack_618._4_4_ = local_4d8.CurrentBitIndex;
              uStack_618._0_4_ = local_4d8.UnvisitedBitMask;
              uStack_610._4_4_ = local_4d8._28_4_;
              uStack_610._0_4_ = local_4d8.BaseBitIndex;
              pTVar44 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
              bVar30 = (byte)local_150 & 0x1f;
              local_608 = local_178._8_4_ - local_144;
              local_580._padding_._0_4_ = (int)local_150 >> 5;
              local_580._padding_._4_4_ = 1 << bVar30;
              local_580.UnvisitedBitMask = -1 << bVar30;
              pTStack_620 = local_4d8.Array;
              local_580.BaseBitIndex = local_150 & 0xffffffe0;
              local_580.CurrentBitIndex = local_150;
              uStack_3c8 = CONCAT44(uStack_604,local_608);
              TStack_3e8.Array = local_4d8.Array;
              local_580.Array = pTVar44;
              local_3f0 = local_630;
              TStack_3e8._padding_ = uStack_628;
              TStack_3e8._16_8_ = uStack_618;
              TStack_3e8._24_8_ = uStack_610;
              if (((int)local_150 < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (uVar17 != local_150) {
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_580);
                pTVar44 = local_580.Array;
                uVar17 = local_580.CurrentBitIndex;
              }
              while( true ) {
                plVar7 = local_3f0;
                if ((int)local_3f0[1] - *(int *)((longlong)local_3f0 + 0x34) != (int)uStack_3c8) {
                  local_6c5 = 0;
                  `TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6c5);
                }
                uVar15 = local_1d0;
                if (((TStack_3e8.CurrentBitIndex == uVar17) && (TStack_3e8.Array == pTVar44)) &&
                   (plVar7 == (longlong *)local_178)) break;
                lVar33 = (longlong)TStack_3e8.CurrentBitIndex * 0x1c;
                lVar37 = *plVar7;
                fVar58 = *(float *)(lVar33 + 8 + lVar37);
                fVar59 = *(float *)(lVar33 + 0xc + lVar37);
                fVar61 = *(float *)(lVar33 + 0x10 + lVar37);
                fVar62 = fVar59 * fVar59 + fVar58 * fVar58 + fVar61 * fVar61;
                if (fVar57 < fVar62) {
                  fVar62 = fVar56 / SQRT(fVar62);
                  *(float *)(lVar33 + 8 + lVar37) = fVar58 * fVar62;
                  *(float *)(lVar33 + 0xc + lVar37) = fVar59 * fVar62;
                  *(float *)(lVar33 + 0x10 + lVar37) = fVar61 * fVar62;
                }
                TStack_3e8.UnvisitedBitMask =
                     TStack_3e8.UnvisitedBitMask & ~TStack_3e8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3e8);
              }
              uVar17 = 1;
              iVar16 = 0;
              TStack_3b8.CurrentBitIndex = 0;
              if (local_1d0 != 0) {
                puVar47 = (uint *)(local_1f8 + 0x10);
                if (local_1d8 != (uint *)0x0) {
                  puVar47 = local_1d8;
                }
                uVar13 = *puVar47;
                iVar16 = 0;
                while (uVar13 == 0) {
                  lVar37 = (longlong)iVar12;
                  iVar16 = iVar16 + 0x20;
                  iVar12 = iVar12 + 1;
                  TStack_3b8.CurrentBitIndex = local_1d0;
                  if ((int)((local_1d0 - 1) + ((int)(local_1d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
                  goto LAB_14436dc83;
                  uVar13 = (puVar47 + 1)[lVar37];
                }
                uVar17 = -uVar13 & uVar13;
                uVar35 = (ulonglong)uVar17 * 2 + 1;
                lVar37 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                  }
                }
                local_4b4 = (int)lVar37;
                TStack_3b8.CurrentBitIndex = iVar16 + -1 + local_4b4;
                if ((int)local_1d0 < TStack_3b8.CurrentBitIndex) {
                  TStack_3b8.CurrentBitIndex = local_1d0;
                }
              }
LAB_14436dc83:
              local_630 = (longlong *)local_1f8;
              pTStack_620 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
              local_608 = local_1f8._8_4_ - local_1c4;
              uVar13 = local_1d0 & 0xffffffe0;
              uStack_628 = CONCAT44(uVar17,iVar12);
              uStack_618 = CONCAT44(TStack_3b8.CurrentBitIndex,0xffffffff);
              uStack_610 = CONCAT44(local_2a4,iVar16);
              TStack_3b8._padding_ = uStack_628;
              iVar12 = (int)local_1d0 >> 5;
              uStack_398 = CONCAT44(uStack_604,local_608);
              bVar30 = (byte)local_1d0;
              TStack_3b8.UnvisitedBitMask = 0xffffffff;
              TStack_3b8._24_8_ = uStack_610;
              local_3c0 = local_630;
              TStack_3b8.Array = pTStack_620;
              if (((int)local_1d0 < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x7af,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (uVar15 != local_1d0) {
                puVar47 = (uint *)(local_1f8 + 0x10);
                if (local_1d8 != (uint *)0x0) {
                  puVar47 = local_1d8;
                }
                uVar17 = -1 << (bVar30 & 0x1f) & puVar47[iVar12];
                while (uVar17 == 0) {
                  lVar37 = (longlong)iVar12;
                  uVar13 = uVar13 + 0x20;
                  iVar12 = iVar12 + 1;
                  uVar15 = local_1d0;
                  if ((int)((local_1d0 - 1) + ((int)(local_1d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
                  goto LAB_14436ddb3;
                  uVar17 = (puVar47 + 1)[lVar37];
                }
                uVar35 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
                lVar37 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                  }
                }
                local_4b0 = (int)lVar37;
                uVar15 = (uVar13 - 1) + local_4b0;
                if ((int)local_1d0 < (int)uVar15) {
                  uVar15 = local_1d0;
                }
              }
LAB_14436ddb3:
              while( true ) {
                plVar7 = local_3c0;
                if ((int)local_3c0[1] - *(int *)((longlong)local_3c0 + 0x34) != (int)uStack_398) {
                  local_6c4 = 0;
                  `TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_6c4);
                }
                if (((TStack_3b8.CurrentBitIndex == uVar15) &&
                    (TStack_3b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10))
                    ) && (plVar7 == (longlong *)local_1f8)) break;
                lVar33 = (longlong)TStack_3b8.CurrentBitIndex * 0x1c;
                lVar37 = *plVar7;
                fVar58 = *(float *)(lVar33 + 8 + lVar37);
                fVar59 = *(float *)(lVar33 + 0xc + lVar37);
                fVar61 = *(float *)(lVar33 + 0x10 + lVar37);
                fVar62 = fVar59 * fVar59 + fVar58 * fVar58 + fVar61 * fVar61;
                if (fVar57 < fVar62) {
                  fVar62 = fVar56 / SQRT(fVar62);
                  *(float *)(lVar33 + 8 + lVar37) = fVar58 * fVar62;
                  *(float *)(lVar33 + 0xc + lVar37) = fVar59 * fVar62;
                  *(float *)(lVar33 + 0x10 + lVar37) = fVar61 * fVar62;
                }
                TStack_3b8.UnvisitedBitMask =
                     TStack_3b8.UnvisitedBitMask & ~TStack_3b8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3b8);
              }
            }
            uVar9 = local_680;
            iVar12 = local_690;
            local_5c0 = (ForElementType<FTriangleID>)(local_698.Data + (longlong)local_690 * 4);
            local_688 = local_678;
            piVar36 = local_6c0;
            FVar42.Data = local_698.Data;
            fVar58 = local_678;
            uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            while( true ) {
              FVar50 = local_5c0;
              if (local_690 != iVar12) {
                local_6c3[0] = 0;
                `TCheckedPointerIterator<FVertexInstanceID,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_6c3);
              }
              if ((ForElementType<FTriangleID>)FVar42.Data == FVar50) break;
              if (local_65c == 0) {
                pTVar45 = &UE::Math::TVector2<float>::ZeroVector;
              }
              else {
                FVar3 = *(FTriangleID *)FVar42.Data;
                uVar15 = 0;
                if ((int)FVar3 < local_65c) {
                  uVar15 = ~(uint)FVar3 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar45 = local_5b8 + (int)FVar3;
              }
              FVar3 = *(FTriangleID *)FVar42.Data;
              uVar15 = 0;
              if ((int)FVar3 < local_600.ArrayNum) {
                uVar15 = ~(uint)FVar3 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((((float)((uint)local_600.DataPtr[(int)FVar3].field0_0x0._s_0.X & uVar17) <=
                    fVar57) &&
                  ((float)((uint)local_600.DataPtr[(int)FVar3].field0_0x0._s_0.Y & uVar17) <= fVar57
                  )) && ((float)((uint)local_600.DataPtr[(int)FVar3].field0_0x0._s_0.Z & uVar17) <=
                         fVar57)) {
                FVar3 = *(FTriangleID *)FVar42.Data;
                uVar15 = 0;
                if ((int)FVar3 < local_600.ArrayNum) {
                  uVar15 = ~(uint)FVar3 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                *(undefined8 *)&local_600.DataPtr[(int)FVar3].field0_0x0 = uVar9;
                local_600.DataPtr[(int)FVar3].field0_0x0._s_0.Z = fVar58;
              }
              if ((char)piVar36[2] == '\0') {
                pTVar29 = TMapBase<UE::Math::TVector2<float>,UE::Math::TVector<float>,FDefaultSetAllocator,FNTBGroupKeyFuncs>
                          ::FindChecked((TMapBase<UE::Math::TVector2<float>,UE::Math::TVector<float>,FDefaultSetAllocator,FNTBGroupKeyFuncs>
                                         *)local_178,
                                        (TVector2<float>)*(TVector2<float>_u_0_s_0 *)pTVar45);
                local_518 = *(undefined8 *)&pTVar29->field0_0x0;
                fVar58 = (pTVar29->field0_0x0)._s_0.Z;
                pTVar29 = TMapBase<UE::Math::TVector2<float>,UE::Math::TVector<float>,FDefaultSetAllocator,FNTBGroupKeyFuncs>
                          ::FindChecked((TMapBase<UE::Math::TVector2<float>,UE::Math::TVector<float>,FDefaultSetAllocator,FNTBGroupKeyFuncs>
                                         *)local_1f8,
                                        (TVector2<float>)*(TVector2<float>_u_0_s_0 *)pTVar45);
                iVar16 = local_670.ArrayNum;
                FVar3 = *(FTriangleID *)FVar42.Data;
                local_5d8 = *(undefined8 *)&pTVar29->field0_0x0;
                local_5d0 = (pTVar29->field0_0x0)._s_0.Z;
                uVar15 = 0;
                if ((int)FVar3 < local_670.ArrayNum) {
                  uVar15 = ~(uint)FVar3 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                if (((fVar57 < (float)((uint)local_670.DataPtr[(int)FVar3].field0_0x0._s_0.X &
                                      uVar17)) ||
                    (fVar57 < (float)((uint)local_670.DataPtr[(int)FVar3].field0_0x0._s_0.Y & uVar17
                                     ))) ||
                   (fVar57 < (float)((uint)local_670.DataPtr[(int)FVar3].field0_0x0._s_0.Z & uVar17)
                   )) {
                  FVar3 = *(FTriangleID *)FVar42.Data;
                  uVar15 = 0;
                  if ((int)FVar3 < iVar16) {
                    uVar15 = ~(uint)FVar3 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  local_518 = *(undefined8 *)&local_670.DataPtr[(int)FVar3].field0_0x0;
                  fVar58 = local_670.DataPtr[(int)FVar3].field0_0x0._s_0.Z;
                }
                FVar3 = *(FTriangleID *)FVar42.Data;
                fVar61 = 0.0;
                fVar62 = 0.0;
                fVar59 = 0.0;
                uVar15 = 0;
                if ((int)FVar3 < local_600.ArrayNum) {
                  uVar15 = ~(uint)FVar3 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pTVar29 = local_600.DataPtr;
                if (((fVar57 < (float)((uint)local_600.DataPtr[(int)FVar3].field0_0x0._s_0.X &
                                      uVar17)) ||
                    (fVar57 < (float)((uint)local_600.DataPtr[(int)FVar3].field0_0x0._s_0.Y & uVar17
                                     ))) ||
                   (fVar57 < (float)((uint)local_600.DataPtr[(int)FVar3].field0_0x0._s_0.Z & uVar17)
                   )) {
                  FVar4 = *(FTriangleID *)FVar42.Data;
                  uVar15 = 0;
                  if ((int)FVar4 < iVar16) {
                    uVar15 = ~(uint)FVar4 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  if (((fVar57 < (float)((uint)local_670.DataPtr[(int)FVar4].field0_0x0._s_0.X &
                                        uVar17)) ||
                      (fVar57 < (float)((uint)local_670.DataPtr[(int)FVar4].field0_0x0._s_0.Y &
                                       uVar17))) ||
                     (fVar57 < (float)((uint)local_670.DataPtr[(int)FVar4].field0_0x0._s_0.Z &
                                      uVar17))) {
                    FVar4 = *(FTriangleID *)FVar42.Data;
                    uVar15 = 0;
                    if ((int)FVar4 < iVar16) {
                      uVar15 = ~(uint)FVar4 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar10)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    fVar59 = local_670.DataPtr[(int)FVar4].field0_0x0._s_0.Y;
                    fVar61 = local_670.DataPtr[(int)FVar4].field0_0x0._s_0.X;
                    fVar62 = local_670.DataPtr[(int)FVar4].field0_0x0._s_0.Z;
                    fVar63 = fVar62 * pTVar29[(int)FVar3].field0_0x0._s_0.Y -
                             fVar59 * pTVar29[(int)FVar3].field0_0x0._s_0.Z;
                    local_51c = fVar59 * pTVar29[(int)FVar3].field0_0x0._s_0.X -
                                fVar61 * pTVar29[(int)FVar3].field0_0x0._s_0.Y;
                    fVar61 = fVar61 * pTVar29[(int)FVar3].field0_0x0._s_0.Z -
                             fVar62 * pTVar29[(int)FVar3].field0_0x0._s_0.X;
                    fVar59 = fVar61 * fVar61 + fVar63 * fVar63 + local_51c * local_51c;
                    if (fVar59 == fVar56) {
                      local_658 = CONCAT44(fVar61,fVar63);
                      local_650 = local_51c;
                    }
                    else if (fVar57 <= fVar59) {
                      fVar59 = fVar56 / SQRT(fVar59);
                      local_650 = fVar59 * local_51c;
                      local_658 = CONCAT44(fVar59 * fVar61,fVar59 * fVar63);
                    }
                    else {
                      local_658 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                      local_650 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                    }
                    fVar59 = local_650;
                    local_524 = CONCAT44(fVar61,fVar63);
                    FVar4 = *(FTriangleID *)FVar42.Data;
                    uVar15 = 0;
                    if ((int)FVar4 < local_598.ArrayNum) {
                      uVar15 = ~(uint)FVar4 >> 0x1f;
                    }
                    if ((uVar15 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar10)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    fVar63 = local_598.DataPtr[(int)FVar4];
                    fVar61 = (float)local_658 * fVar63;
                    fVar62 = local_658._4_4_ * fVar63;
                    fVar59 = fVar59 * fVar63;
                  }
                }
                if (((fVar57 < (float)((uint)fVar61 & uVar17)) ||
                    (fVar57 < (float)((uint)fVar62 & uVar17))) ||
                   (fVar57 < (float)((uint)fVar59 & uVar17))) {
                  local_5d8 = CONCAT44(fVar62,fVar61);
                  local_5d0 = fVar59;
                }
                fVar57 = local_5d8._4_4_ * local_518._4_4_ + (float)local_5d8 * (float)local_518 +
                         local_5d0 * fVar58;
                fVar61 = (float)local_5d8 - (float)local_518 * fVar57;
                fVar59 = local_5d8._4_4_ - local_518._4_4_ * fVar57;
                fVar57 = local_5d0 - fVar58 * fVar57;
                fVar62 = fVar59 * fVar59 + fVar61 * fVar61 + fVar57 * fVar57;
                if (__real_322bcc77 < fVar62) {
                  fVar56 = fVar56 / SQRT(fVar62);
                  fVar61 = fVar56 * fVar61;
                  fVar59 = fVar56 * fVar59;
                  fVar57 = fVar56 * fVar57;
                }
                fVar56 = pTVar29[(int)FVar3].field0_0x0._s_0.X;
                fVar62 = pTVar29[(int)FVar3].field0_0x0._s_0.Y;
                fVar63 = pTVar29[(int)FVar3].field0_0x0._s_0.Z;
                fVar64 = fVar62 * local_518._4_4_ + fVar56 * (float)local_518 + fVar63 * fVar58;
                fVar65 = (float)local_518 - fVar64 * fVar56;
                fVar58 = fVar58 - fVar64 * fVar63;
                fVar64 = local_518._4_4_ - fVar64 * fVar62;
                fVar54 = fVar64 * fVar64 + fVar65 * fVar65 + fVar58 * fVar58;
                if (__real_322bcc77 < fVar54) {
                  fVar54 = __real_3f800000 / SQRT(fVar54);
                  fVar65 = fVar54 * fVar65;
                  fVar64 = fVar54 * fVar64;
                  fVar58 = fVar54 * fVar58;
                }
                fVar54 = fVar62 * fVar59 + fVar56 * fVar61 + fVar63 * fVar57;
                fVar61 = fVar61 - fVar56 * fVar54;
                fVar59 = fVar59 - fVar62 * fVar54;
                fVar57 = fVar57 - fVar63 * fVar54;
                fVar56 = fVar59 * fVar59 + fVar61 * fVar61 + fVar57 * fVar57;
                if (__real_322bcc77 < fVar56) {
                  fVar56 = __real_3f800000 / SQRT(fVar56);
                  fVar61 = fVar61 * fVar56;
                  fVar59 = fVar56 * fVar59;
                  fVar57 = fVar56 * fVar57;
                }
                FVar4 = *(FTriangleID *)FVar42.Data;
                uVar17 = 0;
                if ((int)FVar4 < iVar16) {
                  uVar17 = ~(uint)FVar4 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_670.DataPtr[(int)FVar4].field0_0x0._s_0.X = fVar65;
                local_670.DataPtr[(int)FVar4].field0_0x0._s_0.Y = fVar64;
                local_670.DataPtr[(int)FVar4].field0_0x0._s_0.Z = fVar58;
                fVar56 = __real_3f800000;
                if (((fVar59 * pTVar29[(int)FVar3].field0_0x0._s_0.Z -
                     fVar57 * pTVar29[(int)FVar3].field0_0x0._s_0.Y) * fVar65 -
                    (fVar64 * pTVar29[(int)FVar3].field0_0x0._s_0.Z -
                    fVar58 * pTVar29[(int)FVar3].field0_0x0._s_0.Y) * fVar61) +
                    (fVar57 * fVar64 - fVar58 * fVar59) * pTVar29[(int)FVar3].field0_0x0._s_0.X <
                    __real_00000000) {
                  fVar56 = __real_bf800000;
                }
                FVar3 = *(FTriangleID *)FVar42.Data;
                uVar17 = 0;
                if ((int)FVar3 < local_598.ArrayNum) {
                  uVar17 = ~(uint)FVar3 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                fVar57 = __real_322bcc77;
                local_598.DataPtr[(int)FVar3] = fVar56;
                piVar36 = local_6c0;
                fVar58 = local_688;
              }
              FVar42.Data = FVar42.Data + 4;
              fVar56 = __real_3f800000;
            }
            uVar31 = local_6a8 & 0xffffffff;
            FVar42.Data = (FScriptContainerElement *)((longlong)local_638 + 0x30);
            uVar35 = (ulonglong)local_59c;
          }
          local_128.HashSize = 0;
          if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_128.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FEdgeID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_128.Elements);
          FVar40 = local_684;
          fVar58 = __real_38d1b717;
        }
      }
      FVar40 = (FVertexID)((int)FVar40 + 1);
      local_684 = FVar40;
    } while ((int)FVar40 < local_5b0);
  }
  if ((FTriangleID *)local_698.Data != (FTriangleID *)0x0) {
    FMemory::Free(local_698.Data);
  }
  if ((FTriangleID *)local_6d8.Data != (FTriangleID *)0x0) {
    FMemory::Free(local_6d8.Data);
  }
  local_248.HashSize = 0;
  if (local_248.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_248.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FTriangleID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTriangleID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_248.Elements);
  DestructItems<TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
             local_6b0.Data,(uint)local_6a8);
  if ((TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)local_6b0.Data
      != (TArray<FTriangleID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    FMemory::Free(local_6b0.Data);
  }
  local_250 = 0;
  if (local_258 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_258);
  }
  TSparseArray<TSparseSetElement<TTuple<FTriangleID,FVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTriangleID,FVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTriangleID,FVertexInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_298);
  local_1b0 = 0;
  if (local_1b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1f8);
  local_130 = 0;
  if (local_138 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TVector2<float>,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_178);
  return;
}

// operator() @ 14436e9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FStaticMeshOperations::ComputeTriangleTangentsAndNormals'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  FVertexID FVar3;
  FVertexInstanceID FVar4;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar5;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  FMeshElementContainer *pFVar20;
  TTuple<FName,FAttributesSetEntry> *pTVar21;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar22;
  TArrayView<FVertexID,int> *pTVar23;
  TArrayView<FVertexInstanceID,int> *pTVar24;
  TVector<float> *pTVar25;
  longlong *plVar26;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_> *pTVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  longlong *plVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auStack_298 [32];
  longlong local_278;
  longlong local_270;
  uint local_268;
  int local_264;
  int local_260;
  int local_25c;
  longlong local_258;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  uint local_240;
  uint local_23c;
  TVector2<float> *local_238;
  int *local_230;
  longlong local_228;
  TVector<float> *local_220;
  TVector<float> *local_218;
  TVector<float> *local_210;
  TVector<float> *local_208;
  longlong local_200;
  FVertexID *local_1f8;
  FVertexInstanceID *local_1f0;
  undefined8 local_1e8;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  float local_1c8;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID,int>_> local_1c0;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexInstanceID,int>_> local_1b0;
  longlong local_1a0;
  TVector2<double> *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  TVector<float> *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  TVector<float> *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_168;
  TArrayView<UE::Math::TVector<float>_const_,int> local_158;
  TArrayView<UE::Math::TVector<float>_const_,int> local_148;
  TArrayView<FVertexID,int> local_138;
  TArrayView<FVertexInstanceID,int> local_128;
  TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_> local_118;
  TTuple<UE::Math::TVector<float>,UE::Math::TVector<float>,UE::Math::TVector<float>_> local_f4;
  undefined1 local_d0 [8];
  float local_c8;
  undefined8 local_c4;
  float local_bc;
  undefined8 local_b8;
  float local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_230 = this;
  pFVar20 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)
                        (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) + 0x50),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar20->Attributes,MeshAttribute::Vertex::Position);
  plVar31 = (longlong *)0x0;
  plVar26 = (longlong *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar26 = plVar31;
  }
  if ((((plVar26 == (longlong *)0x0) ||
       (pTVar5 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar26,
       (int)pTVar5->_padding_ != 1)) || (*(int *)((longlong)&pTVar5->_padding_ + 4) != 1)) ||
     ((pTVar5 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar5->_padding_ == 0)))) {
    local_250 = 0;
    local_220 = (TVector<float> *)0x0;
  }
  else {
    pTVar22 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar5,0);
    local_220 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar22,0);
    local_250 = (int)pTVar5->_padding_;
    if ((local_250 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_238 = (TVector2<float> *)0x0;
  local_264 = 0;
  pFVar20 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)
                        (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) + 0x70),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar20->Attributes,MeshAttribute::Triangle::VertexIndex);
  plVar26 = (longlong *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar26 = plVar31;
  }
  if ((plVar26 == (longlong *)0x0) ||
     (local_1c0.ArrayPtr = (FMeshAttributeArraySetBase *)*plVar26, (local_1c0.ArrayPtr)->Type != 4))
  {
    local_1c0.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    local_1c0.Extent = 1;
  }
  else {
    local_1c0.Extent = (local_1c0.ArrayPtr)->Extent;
  }
  pTVar23 = TMeshAttributesRef<FTriangleID,TArrayView<FVertexID,int>_>::GetRawArray
                      (&local_1c0,&local_138,0);
  local_1f8 = pTVar23->DataPtr;
  iVar18 = pTVar23->ArrayNum;
  local_260 = iVar18;
  pFVar20 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)
                        (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) + 0x70),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar20->Attributes,MeshAttribute::Triangle::VertexInstanceIndex);
  plVar26 = (longlong *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar26 = plVar31;
  }
  if ((plVar26 == (longlong *)0x0) ||
     (local_1b0.ArrayPtr = (FMeshAttributeArraySetBase *)*plVar26, (local_1b0.ArrayPtr)->Type != 4))
  {
    local_1b0.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    local_1b0.Extent = 1;
  }
  else {
    local_1b0.Extent = (local_1b0.ArrayPtr)->Extent;
  }
  pTVar24 = TMeshAttributesRef<FTriangleID,TArrayView<FVertexInstanceID,int>_>::GetRawArray
                      (&local_1b0,&local_128,0);
  local_1f0 = pTVar24->DataPtr;
  local_244 = pTVar24->ArrayNum;
  pFVar20 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)
                        (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) + 0x70),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar20->Attributes,MeshAttribute::Triangle::Normal);
  plVar26 = (longlong *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar26 = plVar31;
  }
  if ((((plVar26 == (longlong *)0x0) ||
       (pTVar5 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar26,
       (int)pTVar5->_padding_ != 1)) || (*(int *)((longlong)&pTVar5->_padding_ + 4) != 1)) ||
     ((pTVar5 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar5->_padding_ == 0)))) {
    pTVar25 = (TVector<float> *)0x0;
    local_218 = (TVector<float> *)0x0;
    local_25c = 0;
  }
  else {
    pTVar22 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar5,0);
    pTVar25 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar22,0);
    local_25c = (int)pTVar5->_padding_;
    local_218 = pTVar25;
    if ((local_25c < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar20 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)
                        (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) + 0x70),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar20->Attributes,MeshAttribute::Triangle::Tangent);
  plVar26 = (longlong *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar26 = plVar31;
  }
  if ((((plVar26 == (longlong *)0x0) ||
       (pTVar5 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar26,
       (int)pTVar5->_padding_ != 1)) || (*(int *)((longlong)&pTVar5->_padding_ + 4) != 1)) ||
     ((pTVar5 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar5->_padding_ == 0)))) {
    local_210 = (TVector<float> *)0x0;
    local_24c = 0;
  }
  else {
    pTVar22 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar5,0);
    local_210 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar22,0);
    local_24c = (int)pTVar5->_padding_;
    if ((local_24c < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar20 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)
                        (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) + 0x70),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar20->Attributes,MeshAttribute::Triangle::Binormal);
  plVar26 = (longlong *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar26 = plVar31;
  }
  if ((((plVar26 == (longlong *)0x0) ||
       (pTVar5 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar26,
       (int)pTVar5->_padding_ != 1)) || (*(int *)((longlong)&pTVar5->_padding_ + 4) != 1)) ||
     ((pTVar5 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar5->_padding_ == 0)))) {
    local_208 = (TVector<float> *)0x0;
    local_248 = 0;
  }
  else {
    pTVar22 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar5,0);
    local_208 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar22,0);
    local_248 = (int)pTVar5->_padding_;
    iVar18 = local_260;
    if ((local_248 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), iVar18 = local_260, bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar20 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)
                        (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) + 0x58),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar20->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  plVar26 = (longlong *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar26 = plVar31;
  }
  if (((plVar26 == (longlong *)0x0) || (plVar26 = (longlong *)*plVar26, (int)plVar26[1] != 2)) ||
     (*(int *)((longlong)plVar26 + 0xc) != 1)) {
    plVar26 = plVar31;
  }
  if (0 < (int)plVar26[7]) {
    pFVar20 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)
                          (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 8) + 0x58),0);
    pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar20->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    plVar26 = (longlong *)&pTVar21->field_0x8;
    if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar26 = plVar31;
    }
    if (((plVar26 == (longlong *)0x0) ||
        (this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar26,
        (int)this_00->_padding_ != 2)) ||
       ((*(int *)((longlong)&this_00->_padding_ + 4) != 1 ||
        ((this_00 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0 ||
         ((int)this_00->_padding_ == 0)))))) {
      local_264 = 0;
      local_238 = (TVector2<float> *)0x0;
    }
    else {
      this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(this_00,0);
      local_238 = TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_01,0);
      local_264 = (int)this_00->_padding_;
      this = local_230;
      if ((local_264 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), this = local_230, bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_38d1b717;
  uVar30 = *(int *)this * param_1;
  lVar33 = (longlong)(int)uVar30;
  iVar2 = *(int *)this + uVar30;
  local_268 = uVar30 * 3;
  iVar28 = *(int *)((longlong)this + 8);
  if (iVar2 < *(int *)((longlong)this + 8)) {
    iVar28 = iVar2;
  }
  local_1a0 = (longlong)iVar28;
  if (lVar33 < local_1a0) {
    lVar29 = lVar33 * 0xc;
    local_258 = (longlong)(int)local_268;
    do {
      local_23c = ~uVar30 >> 0x1f;
      local_240 = (int)uVar30 < local_25c & local_23c;
      local_228 = lVar33;
      local_200 = lVar29;
      if (local_240 == 0) {
        local_278 = (longlong)(int)uVar30;
        local_270 = (longlong)local_25c;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar15) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((((float)(*(uint *)((longlong)&pTVar25->field0_0x0 + lVar29) & uVar12) <= fVar11) &&
          ((float)(*(uint *)((longlong)&pTVar25->field0_0x0 + lVar29 + 4) & uVar12) <= fVar11)) &&
         ((float)(*(uint *)((longlong)&pTVar25->field0_0x0 + lVar29 + 8) & uVar12) <= fVar11)) {
        uVar32 = ~local_268;
        uVar16 = 0;
        if ((int)local_268 < iVar18) {
          uVar16 = uVar32 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_278 = (longlong)(int)local_268;
          local_270 = (longlong)iVar18;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar33 = local_258;
        FVar3 = local_1f8[local_258];
        lVar29 = (longlong)(int)FVar3;
        uVar16 = 0;
        if ((int)FVar3 < local_250) {
          uVar16 = ~(uint)FVar3 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_278 = lVar29, local_270 = (longlong)local_250,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar1 = local_268;
        local_d0 = *(undefined1 (*) [8])&local_220[lVar29].field0_0x0;
        uVar16 = local_268 + 1;
        local_c8 = local_220[lVar29].field0_0x0._s_0.Z;
        uVar17 = 0;
        if ((int)uVar16 < local_260) {
          uVar17 = ~uVar16 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_278 = (longlong)(int)uVar16;
          local_270 = (longlong)local_260;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar3 = local_1f8[lVar33 + 1];
        lVar33 = (longlong)(int)FVar3;
        uVar17 = 0;
        if ((int)FVar3 < local_250) {
          uVar17 = ~(uint)FVar3 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_278 = lVar33, local_270 = (longlong)local_250,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar1 = uVar1 + 2;
        local_c4 = *(undefined8 *)&local_220[lVar33].field0_0x0;
        local_bc = local_220[lVar33].field0_0x0._s_0.Z;
        uVar17 = 0;
        if ((int)uVar1 < local_260) {
          uVar17 = ~uVar1 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_278 = (longlong)(int)uVar1;
          local_270 = (longlong)local_260;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar3 = local_1f8[local_258 + 2];
        lVar33 = (longlong)(int)FVar3;
        uVar17 = 0;
        if ((int)FVar3 < local_250) {
          uVar17 = ~(uint)FVar3 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_278 = lVar33, local_270 = (longlong)local_250,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_b8 = *(undefined8 *)&local_220[lVar33].field0_0x0;
        local_b0 = local_220[lVar33].field0_0x0._s_0.Z;
        iVar18 = _finite((double)(float)local_d0._0_4_);
        if (iVar18 == 0) {
LAB_14436f83a:
          if ((2 < (byte)LogStaticMeshOperations._0_1_) && (*(longlong *)(local_230 + 6) != 0)) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
          }
          if (local_240 == 0) {
            local_270 = (longlong)local_25c;
            local_278 = (longlong)(int)uVar30;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          *(undefined8 *)&local_218[local_228].field0_0x0 = 0x3f800000;
          local_218[local_228].field0_0x0._s_0.Z = 0.0;
          lVar33 = local_228;
        }
        else {
          iVar18 = _finite((double)(float)local_d0._4_4_);
          if ((iVar18 == 0) || (iVar18 = _finite((double)local_c8), iVar18 == 0))
          goto LAB_14436f83a;
          iVar18 = _finite((double)(float)local_c4);
          if (iVar18 == 0) goto LAB_14436f83a;
          iVar18 = _finite((double)local_c4._4_4_);
          if ((iVar18 == 0) || (iVar18 = _finite((double)local_bc), iVar18 == 0))
          goto LAB_14436f83a;
          iVar18 = _finite((double)(float)local_b8);
          if (iVar18 == 0) goto LAB_14436f83a;
          iVar18 = _finite((double)local_b8._4_4_);
          if ((iVar18 == 0) || (iVar18 = _finite((double)local_b0), uVar17 = local_268, iVar18 == 0)
             ) goto LAB_14436f83a;
          local_1e8 = 0;
          fStack_1e0 = 0.0;
          uStack_1dc = 0;
          uStack_1d8 = 0;
          fStack_1d4 = 0.0;
          uStack_1d0 = 0;
          local_1c8 = 0.0;
          if (local_264 == 0) {
            local_178 = (TVector<float> *)local_d0;
            uStack_170 = 3;
            local_148._12_4_ = uStack_16c;
            local_148.ArrayNum = 3;
            local_148.DataPtr = local_178;
            pTVar27 = GetTriangleTangentsAndNormalsWithNoUVs
                                (&local_f4,(float)local_230[1],&local_148);
LAB_14436f6fe:
            fVar7 = *(float *)pTVar27;
            fVar8 = *(float *)&pTVar27->field_0x4;
            local_1e8 = *(undefined8 *)pTVar27;
            fVar9 = *(float *)&pTVar27->field_0x8;
            uStack_1dc = *(undefined4 *)&pTVar27->field_0xc;
            uStack_1d0 = *(undefined8 *)&pTVar27->field_0x18;
            local_1c8 = *(float *)&pTVar27->field_0x20;
            uStack_1d8 = (undefined4)*(undefined8 *)&pTVar27->field_0x10;
            fStack_1d4 = (float)((ulonglong)*(undefined8 *)&pTVar27->field_0x10 >> 0x20);
            fStack_1e0 = fVar9;
            if (local_240 == 0) {
              local_270 = (longlong)local_25c;
              local_278 = (longlong)(int)uVar30;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            fVar13 = fStack_1d4;
            pTVar25 = local_218;
            lVar33 = local_228;
            uVar16 = local_23c;
            uVar32 = 0;
            if ((int)uVar30 < local_24c) {
              uVar32 = local_23c;
            }
            local_218[local_228].field0_0x0.XYZ[0] = fVar7;
            local_218[local_228].field0_0x0._s_0.Y = fVar8;
            uVar10 = CONCAT44(uStack_1d8,uStack_1dc);
            local_218[local_228].field0_0x0._s_0.Z = fVar9;
            if (uVar32 == 0) {
              local_278 = (longlong)(int)uVar30;
              local_270 = (longlong)local_24c;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            fVar7 = local_1c8;
            uVar14 = uStack_1d0;
            *(undefined8 *)&local_210[lVar33].field0_0x0 = uVar10;
            local_210[lVar33].field0_0x0._s_0.Z = fVar13;
            uVar32 = 0;
            if ((int)uVar30 < local_248) {
              uVar32 = uVar16;
            }
            if (uVar32 == 0) {
              local_278 = (longlong)(int)uVar30;
              local_270 = (longlong)local_248;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar15) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            *(undefined8 *)&local_208[lVar33].field0_0x0 = uVar14;
            local_208[lVar33].field0_0x0._s_0.Z = fVar7;
            lVar29 = local_200;
            goto LAB_14436f981;
          }
          uVar19 = 0;
          if ((int)local_268 < local_244) {
            uVar19 = uVar32 >> 0x1f;
          }
          if (uVar19 == 0) {
            local_278 = (longlong)(int)local_268;
            local_270 = (longlong)local_244;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          FVar4 = local_1f0[local_258];
          lVar33 = (longlong)(int)FVar4;
          uVar32 = 0;
          if ((int)FVar4 < local_264) {
            uVar32 = ~(uint)FVar4 >> 0x1f;
          }
          if (uVar32 == 0) {
            local_270 = (longlong)local_264;
            local_278 = lVar33;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          local_a0 = (double)local_238[lVar33].field0_0x0._s_0.Y;
          uVar32 = 0;
          if ((int)uVar16 < local_244) {
            uVar32 = ~uVar16 >> 0x1f;
          }
          local_a8 = (double)local_238[lVar33].field0_0x0._s_0.X;
          if (uVar32 == 0) {
            local_278 = (longlong)(int)uVar17 + 1;
            local_270 = (longlong)local_244;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          lVar33 = local_258;
          iVar18 = local_264;
          lVar34 = (longlong)local_264;
          FVar4 = local_1f0[local_258 + 1];
          lVar29 = (longlong)(int)FVar4;
          uVar16 = 0;
          if ((int)FVar4 < local_264) {
            uVar16 = ~(uint)FVar4 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (local_278 = lVar29, local_270 = lVar34,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_90 = (double)local_238[lVar29].field0_0x0._s_0.Y;
          uVar16 = 0;
          if ((int)uVar1 < local_244) {
            uVar16 = ~uVar1 >> 0x1f;
          }
          local_98 = (double)local_238[lVar29].field0_0x0._s_0.X;
          if (uVar16 == 0) {
            local_278 = (longlong)(int)uVar17 + 2;
            local_270 = (longlong)local_244;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          FVar4 = local_1f0[lVar33 + 2];
          lVar33 = (longlong)(int)FVar4;
          uVar16 = 0;
          if ((int)FVar4 < iVar18) {
            uVar16 = ~(uint)FVar4 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (local_278 = lVar33, local_270 = lVar34,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_88 = (double)local_238[lVar33].field0_0x0._s_0.X;
          local_80 = (double)local_238[lVar33].field0_0x0._s_0.Y;
          iVar18 = _finite(local_a8);
          if (((((iVar18 != 0) && (iVar18 = _finite(local_a0), iVar18 != 0)) &&
               (iVar18 = _finite(local_98), iVar18 != 0)) &&
              ((iVar18 = _finite(local_90), iVar18 != 0 && (iVar18 = _finite(local_88), iVar18 != 0)
               ))) && (iVar18 = _finite(local_80), iVar18 != 0)) {
            local_198 = (TVector2<double> *)&local_a8;
            uStack_180 = 3;
            local_188 = (TVector<float> *)local_d0;
            uStack_190 = 3;
            local_168._12_4_ = uStack_18c;
            local_168.ArrayNum = 3;
            local_158._12_4_ = uStack_17c;
            local_158.ArrayNum = 3;
            local_168.DataPtr = local_198;
            local_158.DataPtr = local_188;
            pTVar27 = GetTriangleTangentsAndNormalsWithUV
                                (&local_118,(float)local_230[1],&local_158,&local_168);
            goto LAB_14436f6fe;
          }
          if ((2 < (byte)LogStaticMeshOperations._0_1_) && (*(longlong *)(local_230 + 6) != 0)) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
          }
          lVar33 = local_228;
          if (local_240 == 0) {
            local_270 = (longlong)local_25c;
            local_278 = local_228;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar15) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          *(undefined8 *)&local_218[lVar33].field0_0x0 = 0x3f800000;
          local_218[lVar33].field0_0x0._s_0.Z = 0.0;
        }
        pTVar25 = local_218;
        uVar16 = local_23c;
        uVar32 = 0;
        if ((int)uVar30 < local_24c) {
          uVar32 = local_23c;
        }
        if (uVar32 == 0) {
          local_278 = (longlong)(int)uVar30;
          local_270 = (longlong)local_24c;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        local_210[lVar33].field0_0x0._s_0.X = 0.0;
        *(undefined8 *)((longlong)&local_210[lVar33].field0_0x0 + 4) = 0x3f800000;
        uVar32 = 0;
        if ((int)uVar30 < local_248) {
          uVar32 = uVar16;
        }
        if (uVar32 == 0) {
          local_278 = (longlong)(int)uVar30;
          local_270 = (longlong)local_248;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        *(undefined8 *)&local_208[lVar33].field0_0x0 = 0;
        local_208[lVar33].field0_0x0._s_0.Z = 1.0;
        lVar29 = local_200;
      }
LAB_14436f981:
      lVar33 = lVar33 + 1;
      local_268 = local_268 + 3;
      local_258 = local_258 + 3;
      lVar29 = lVar29 + 0xc;
      uVar30 = uVar30 + 1;
      iVar18 = local_260;
    } while (lVar33 < local_1a0);
  }
  return;
}

// AddUVChannel @ 144370130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FStaticMeshOperations::AddUVChannel(FMeshDescription *param_1)

{
  int iVar1;
  FMeshElementContainer *pFVar2;
  TTuple<FName,FAttributesSetEntry> *pTVar3;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar4;
  
  pFVar2 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar3 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar2->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  pTVar4 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar4 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  if (((pTVar4 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) ||
      (pTVar4 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pTVar4->_padding_,
      (int)pTVar4->_padding_ != 2)) || (*(int *)((longlong)&pTVar4->_padding_ + 4) != 1)) {
    pTVar4 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  iVar1 = (pTVar4->ArrayForChannels).ArrayNum;
  if (7 < iVar1) {
    if (1 < (byte)LogStaticMeshOperations._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
    }
    return false;
  }
  TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(pTVar4,iVar1 + 1);
  return true;
}

// AppendMeshDescription @ 144370240

void __cdecl
FStaticMeshOperations::AppendMeshDescription
          (FMeshDescription *param_1,FMeshDescription *param_2,FAppendSettings *param_3)

{
  TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(FMeshDescription **)local_18.AllocatorInstance.Data = param_1;
  AppendMeshDescriptions(&local_18,param_2,param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// AppendMeshDescriptions @ 1443702e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FStaticMeshOperations::AppendMeshDescriptions
          (TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FMeshDescription *param_2,FAppendSettings *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  TVector4<float>_u_0_s_0 TVar4;
  FVertexID FVar5;
  FVertexID FVar6;
  FPolygonGroupID FVar7;
  FMeshElementChannels *pFVar8;
  TVector2<float>_u_0_s_0 TVar9;
  FName FVar10;
  code *pcVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  int iVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  FVertexInstanceID FVar19;
  FMeshDescription *pFVar20;
  TVector2<float>_u_0 TVar21;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar22;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  longlong lVar24;
  bool bVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  FEdgeID FVar29;
  FPolygonID FVar30;
  FMeshElementContainer *pFVar31;
  TMeshAttributesRef<FPolygonID,FName> TVar32;
  TTuple<FName,FAttributesSetEntry> *pTVar33;
  longlong lVar34;
  FMeshElementContainer *pFVar35;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar36;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar37;
  TVector2<float>_u_0_s_0 *pTVar38;
  TVector2<float>_u_0 *pTVar39;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar40;
  TVector<float> *pTVar41;
  TTransform<double> *pTVar42;
  TArrayView<FVertexID,int> *pTVar43;
  FVertexID *pFVar44;
  TMeshAttributeArrayBase<bool> *this_00;
  bool *pbVar45;
  TMeshAttributeArrayBase<FVertexID> *this_01;
  TMeshAttributeArrayBase<float> *pTVar46;
  float *pfVar47;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar48;
  TVector4<float>_u_0_s_0 *pTVar49;
  TVector4<float>_u_0 *pTVar50;
  ForElementType<unsigned_int> FVar51;
  FPolygonGroupID *pFVar52;
  ForElementType<FVertexInstanceID> FVar53;
  TMeshAttributeArrayBase<FName> *pTVar54;
  FName *pFVar55;
  byte bVar56;
  int iVar57;
  uint uVar58;
  ulonglong uVar59;
  longlong *plVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  ForElementType<FSetElementId> FVar64;
  FScriptContainerElement *pFVar65;
  FScriptContainerElement *pFVar66;
  longlong *plVar67;
  FMeshDescription *pFVar68;
  FPolygonGroupID *pFVar69;
  uint *puVar70;
  ForElementType<FVertexInstanceID> FVar71;
  FMeshDescription *pFVar72;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_02;
  TMeshAttributeArraySet<FName> *pTVar73;
  uint uVar74;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar75;
  FAppendSettings *this_03;
  uint uVar76;
  ForElementType<unsigned_int> FVar77;
  undefined4 uVar78;
  FPolygonID FVar79;
  longlong *plVar80;
  TElementIDs this_04;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_05;
  int iVar81;
  ForAnyElementType FVar82;
  uint uVar83;
  ulonglong uVar84;
  ulonglong uVar85;
  ulonglong *puVar86;
  TElementIDs this_06;
  bool bVar87;
  double dVar88;
  double dVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar95;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  double dVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar102;
  double dVar103;
  double dVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar107;
  double dVar108;
  double dVar109;
  double dVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dVar117;
  uint uVar119;
  undefined1 auVar115 [16];
  double dVar118;
  undefined1 auVar116 [16];
  uint uVar120;
  undefined4 uVar121;
  uint uVar122;
  undefined4 uVar123;
  undefined4 uVar124;
  undefined4 uVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  double dVar133;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined4 uVar134;
  float fVar135;
  undefined4 uVar136;
  undefined4 uVar137;
  undefined4 uVar138;
  uint uVar139;
  undefined1 auVar140 [16];
  undefined1 auStackY_b68 [32];
  int local_b14;
  FVertexInstanceID local_b10;
  int local_b0c;
  uint local_b08;
  undefined1 local_b04;
  undefined1 local_b03;
  undefined1 local_b02;
  undefined1 local_b01;
  undefined1 local_b00 [4];
  FPolygonGroupID local_afc;
  FMeshDescription *local_af8;
  int local_af0;
  FMeshDescription *local_ae8;
  uint local_ae0 [2];
  TVector2<float>_u_0 local_ad8;
  int local_ad0;
  TMeshAttributeArraySet<FName> *local_ac8;
  FAppendSettings *local_ac0;
  TElementIDs local_ab8;
  TElementIDs local_ab0;
  TMeshAttributeArraySet<FName> *local_aa8;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_aa0;
  int local_a90 [2];
  TArray<FMeshDescription_const_*,TSizedDefaultAllocator<32>_> *local_a88;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_a80;
  int local_a78;
  uint uStack_a74;
  ForElementType<unsigned_int> FStack_a70;
  uint local_a68;
  uint uStack_a64;
  uint uStack_a60;
  undefined4 uStack_a5c;
  FVertexID local_a58;
  FVertexID local_a54;
  FVertexID local_a50;
  uint local_a4c;
  longlong local_a48;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_a40;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_a38;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_a30;
  int local_a28;
  uint uStack_a24;
  ForElementType<unsigned_int> FStack_a20;
  undefined4 local_a18;
  uint uStack_a14;
  int iStack_a10;
  undefined4 uStack_a0c;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_a08;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *local_a00;
  undefined8 local_9f8;
  longlong local_9f0;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_9e8;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_9e0;
  TMeshAttributeArraySet<float> *local_9d8;
  FScriptContainerElement *local_9d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9c8;
  undefined8 uStack_9a8;
  int local_9a0;
  undefined4 uStack_99c;
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_978;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_958;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_938;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_918;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_8b8;
  TMatrix<double> local_898;
  TMeshAttributeArraySet<FName> *local_818;
  TMeshAttributeArraySet<bool> *local_810;
  TElementIDs local_808;
  longlong local_800;
  FScriptContainerElement *local_7f8;
  undefined **local_7f0;
  FMeshDescription *local_7e8;
  undefined1 local_7e0 [8];
  int local_7d8;
  int local_7d4;
  undefined1 local_7d0 [12];
  uint uStack_7c4;
  FMeshElementContainer *pFStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  TElementIDs local_7a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_7a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_780;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_760;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_740;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_720;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_700;
  undefined1 local_6d8 [16];
  undefined8 uStack_6c8;
  longlong lStack_6c0;
  longlong lStack_6b8;
  int local_6b0;
  undefined4 uStack_6ac;
  undefined1 local_6a8 [12];
  uint uStack_69c;
  TBitArray<FDefaultBitArrayAllocator> *local_698;
  undefined8 uStack_690;
  longlong local_688;
  undefined8 uStack_680;
  longlong *local_678;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_670;
  undefined8 uStack_650;
  TArrayView<FVertexID_const_,int> local_648;
  TArrayView<FVertexID_const_,int> local_638;
  int *local_628;
  uint *local_620;
  uint *local_618;
  int *local_610;
  ForElementType<FVertexInstanceID> local_608;
  int iStack_600;
  undefined4 uStack_5fc;
  int *local_5f8;
  FVertexInstanceID *local_5f0;
  undefined1 local_5e8 [24];
  longlong lStack_5d0;
  longlong lStack_5c8;
  int local_5c0;
  undefined4 uStack_5bc;
  FReadAccessScope local_5b8;
  undefined1 local_598 [8];
  double local_590;
  double local_588;
  TArrayView<FVertexInstanceID_const_,int> local_578;
  double local_568;
  double dStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  double local_508;
  double dStack_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  TRangedForIterator local_4e8;
  longlong local_4b8;
  FMeshElementContainer *pFStack_4b0;
  uint local_4a8;
  int iStack_4a4;
  int iStack_4a0;
  undefined4 uStack_49c;
  TConstIterator local_498;
  longlong local_478;
  FMeshElementContainer *pFStack_470;
  ulonglong local_468;
  undefined8 uStack_460;
  TConstIterator local_458;
  TConstIterator local_438;
  undefined8 local_418;
  ForElementType<unsigned_int> FStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  FReadAccessScope local_3f8;
  undefined1 local_3e0 [16];
  double local_3d0;
  longlong local_3c0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3b8;
  uint local_3b0;
  int iStack_3ac;
  ulonglong uStack_3a8;
  undefined1 local_398 [16];
  double local_388;
  TArrayView<FVertexID,int> local_380 [3];
  TArrayView<FVertexID,int> local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_318;
  ForElementType<FVertexInstanceID> local_2f8;
  int local_2e0;
  int local_2dc;
  undefined1 local_2d8 [32];
  undefined8 local_2b8;
  int local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  int local_2a4;
  undefined1 local_2a0 [8];
  ForElementType<FSetElementId> local_298;
  int local_290;
  undefined1 local_288 [32];
  undefined8 local_268;
  int local_260;
  undefined4 local_25c;
  undefined4 local_258;
  int local_254;
  ForElementType<FSetElementId> local_248;
  int local_240;
  TSet<TTuple<FPolygonGroupID,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>,FDefaultSetAllocator>
  local_238;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_b68;
  bVar87 = -1 < CpuChannel->Enabled;
  local_af8 = param_2;
  local_ac0 = param_3;
  local_a88 = param_1;
  if (bVar87) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId882,"FStaticMeshOperations::AppendMeshDescriptions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x372);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId882);
  }
  local_7f0 = &___7FStaticMeshAttributes__6B_;
  local_7e8 = param_2;
  pFVar31 = FMeshElementChannels::Get(param_2->VertexElements,0);
  TAttributesSet<FVertexID>::GetAttributesRef<UE::Math::TVector<float>_>
            ((TAttributesSet<FVertexID> *)&pFVar31->Attributes,(FName)&local_a08);
  pFVar31 = FMeshElementChannels::Get(param_2->EdgeElements,0);
  TAttributesSet<FEdgeID>::GetAttributesRef<bool>
            ((TAttributesSet<FEdgeID> *)&pFVar31->Attributes,(FName)&local_810);
  FStaticMeshAttributes::GetPolygonGroupMaterialSlotNames((FStaticMeshAttributes *)&local_7f0);
  pFVar31 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  TAttributesSet<FVertexInstanceID>::GetAttributesRef<UE::Math::TVector<float>_>
            ((TAttributesSet<FVertexInstanceID> *)&pFVar31->Attributes,(FName)&local_9e8);
  pFVar31 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  TAttributesSet<FVertexInstanceID>::GetAttributesRef<UE::Math::TVector<float>_>
            ((TAttributesSet<FVertexInstanceID> *)&pFVar31->Attributes,(FName)&local_9e0);
  pFVar31 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  TAttributesSet<FVertexInstanceID>::GetAttributesRef<float>
            ((TAttributesSet<FVertexInstanceID> *)&pFVar31->Attributes,(FName)&local_9d8);
  pFVar31 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  TAttributesSet<FVertexInstanceID>::GetAttributesRef<UE::Math::TVector4<float>_>
            ((TAttributesSet<FVertexInstanceID> *)&pFVar31->Attributes,(FName)&local_800);
  pFVar31 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  TAttributesSet<FVertexInstanceID>::GetAttributesRef<UE::Math::TVector2<float>_>
            ((TAttributesSet<FVertexInstanceID> *)&pFVar31->Attributes,(FName)&local_a38);
  plVar67 = (longlong *)0x0;
  local_ac8 = (TMeshAttributeArraySet<FName> *)0x0;
  if (param_3->bMergeObjectName != false) {
    TVar32 = FStaticMeshAttributes::GetPolygonObjectNames((FStaticMeshAttributes *)&local_7f0);
    if ((TVar32.ArrayPtr)->_padding_ == 0) {
      pFVar65 = (param_1->AllocatorInstance).Data;
      iVar57 = param_1->ArrayNum;
      pFVar66 = pFVar65 + (longlong)iVar57 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar57) {
          local_b04 = 0;
          `TCheckedPointerIterator<FMeshDescription_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_b04);
        }
        if (pFVar65 == pFVar66) goto LAB_1443705c3;
        pFVar31 = FMeshElementChannels::Get
                            (*(FMeshElementChannels **)(*(longlong *)pFVar65 + 0x78),0);
        pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                          *)&pFVar31->Attributes,MeshAttribute::Polygon::ObjectName);
        plVar60 = (longlong *)&pTVar33->field_0x8;
        if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
          plVar60 = plVar67;
        }
        if ((((plVar60 != (longlong *)0x0) && (lVar62 = *plVar60, *(int *)(lVar62 + 8) == 6)) &&
            (*(int *)(lVar62 + 0xc) == 1)) && (lVar62 != 0)) break;
        pFVar65 = pFVar65 + 8;
      }
      pFVar31 = FMeshElementChannels::Get(param_2->PolygonElements,0);
      bVar25 = FAttributesSetBase::HasAttribute
                         (&pFVar31->Attributes,MeshAttribute::Polygon::ObjectName);
      if (!bVar25) {
        pFVar31 = FMeshElementChannels::Get(param_2->PolygonElements,0);
        local_9f8 = 0;
        FAttributesSetBase::RegisterAttribute<FName,0>
                  (&pFVar31->Attributes,(FName)local_598,
                   MeshAttribute::Polygon::ObjectName.ComparisonIndex.Value.Value,
                   (FName *)&DAT_00000001,(EMeshAttributeFlags)&local_9f8);
      }
    }
LAB_1443705c3:
    pFVar31 = FMeshElementChannels::Get(param_2->PolygonElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::Polygon::ObjectName);
    plVar60 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar60 = plVar67;
    }
    if (((plVar60 == (longlong *)0x0) ||
        (local_ac8 = (TMeshAttributeArraySet<FName> *)*plVar60, (int)local_ac8->_padding_ != 6)) ||
       (*(int *)((longlong)&local_ac8->_padding_ + 4) != 1)) {
      local_ac8 = (TMeshAttributeArraySet<FName> *)0x0;
    }
  }
  pFVar8 = param_2->UVElements;
  (param_2->VertexInstanceToTriangles).bSuspended = true;
  (param_2->EdgeToTriangles).bSuspended = true;
  (param_2->PolygonToTriangles).bSuspended = true;
  (param_2->PolygonGroupToPolygons).bSuspended = true;
  (param_2->PolygonGroupToTriangles).bSuspended = true;
  (param_2->UVToTriangles).bSuspended = true;
  local_af0 = (local_a38->ArrayForChannels).ArrayNum;
  lVar62 = (longlong)local_af0;
  local_ae0[0] = local_a88->ArrayNum;
  uVar59 = (ulonglong)(int)local_ae0[0];
  uVar84 = (ulonglong)(pFVar8->Channels).ArrayNum;
  pTVar73 = (TMeshAttributeArraySet<FName> *)(param_1->AllocatorInstance).Data;
  local_b0c = 0;
  local_b10 = (FVertexInstanceID)0x0;
  local_b14 = 0;
  local_aa8 = (TMeshAttributeArraySet<FName> *)
              ((pTVar73->ArrayForChannels).AllocatorInstance.InlineData + uVar59 * 8 + -0x18);
  local_ad0 = 0;
  local_b08 = 0;
  plVar60 = plVar67;
  plVar80 = plVar67;
  uVar85 = uVar84;
  while( true ) {
    uVar58 = (uint)plVar60;
    if (local_a88->ArrayNum != (int)uVar59) {
      local_b03 = 0;
      `TCheckedPointerIterator<FMeshDescription_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_b03);
    }
    pFVar72 = local_af8;
    uVar76 = (uint)uVar85;
    if (pTVar73 == local_aa8) break;
    lVar61 = pTVar73->_padding_;
    pFVar31 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x50),0);
    plVar67 = (longlong *)
              (ulonglong)(uint)((int)plVar67 + ((pFVar31->BitArray).NumBits - pFVar31->NumHoles));
    pFVar31 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x58),0);
    local_b0c = local_b0c + ((pFVar31->BitArray).NumBits - pFVar31->NumHoles);
    pFVar31 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x68),0);
    local_b10 = (FVertexInstanceID)
                ((int)local_b10 + ((pFVar31->BitArray).NumBits - pFVar31->NumHoles));
    pFVar31 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x70),0);
    local_b14 = local_b14 + ((pFVar31->BitArray).NumBits - pFVar31->NumHoles);
    pFVar31 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x58),0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    plVar60 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar60 = (longlong *)0x0;
    }
    if (((plVar60 == (longlong *)0x0) || (lVar34 = *plVar60, *(int *)(lVar34 + 8) != 2)) ||
       (*(int *)(lVar34 + 0xc) != 1)) {
      lVar34 = 0;
    }
    lVar63 = lVar62;
    lVar24 = lVar62;
    iVar81 = local_af0;
    iVar57 = local_af0;
    while (local_af0 = iVar81, lVar62 = lVar24, lVar63 < *(int *)(lVar34 + 0x38)) {
      iVar57 = iVar57 + 1;
      pbVar45 = local_ac0->bMergeUVChannels + lVar63;
      lVar63 = lVar63 + 1;
      lVar24 = lVar63;
      iVar81 = iVar57;
      if (*pbVar45 == false) {
        lVar24 = lVar62;
        iVar81 = local_af0;
      }
    }
    uVar59 = uVar84;
    while ((longlong)uVar59 < (longlong)*(int *)(*(longlong *)(lVar61 + 0x60) + 0x88)) {
      uVar76 = uVar76 + 1;
      pbVar45 = local_ac0->bMergeUVChannels + uVar59;
      uVar59 = uVar59 + 1;
      uVar139 = uVar76;
      uVar16 = uVar59;
      if (*pbVar45 == false) {
        uVar139 = (uint)uVar85;
        uVar16 = uVar84;
      }
      uVar85 = (ulonglong)uVar139;
      uVar84 = uVar16;
    }
    pFVar31 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x80),0);
    iVar57 = (pFVar31->BitArray).NumBits - pFVar31->NumHoles;
    if (iVar57 < local_ad0) {
      iVar57 = local_ad0;
    }
    local_ad0 = iVar57;
    pFVar31 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x50),0);
    uVar76 = (pFVar31->BitArray).NumBits - pFVar31->NumHoles;
    if ((int)uVar76 < (int)uVar58) {
      uVar76 = uVar58;
    }
    plVar60 = (longlong *)(ulonglong)uVar76;
    FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x68),0);
    pFVar31 = FMeshElementChannels::Get(*(FMeshElementChannels **)(lVar61 + 0x58),0);
    uVar58 = (pFVar31->BitArray).NumBits - pFVar31->NumHoles;
    if ((int)uVar58 < (int)local_b08) {
      uVar58 = local_b08;
    }
    pTVar73 = (TMeshAttributeArraySet<FName> *)&pTVar73->_padding_;
    plVar80 = (longlong *)(ulonglong)uVar58;
    uVar59 = (ulonglong)local_ae0[0];
    local_b08 = uVar58;
  }
  local_b08 = uVar58;
  FMeshDescription::ReserveNewVertices(local_af8,(int)plVar67);
  FMeshDescription::ReserveNewVertexInstances(pFVar72,local_b0c);
  FMeshDescription::ReserveNewEdges(pFVar72,(int)local_b10);
  FMeshDescription::ReserveNewTriangles(pFVar72,local_b14);
  pTVar73 = local_ac8;
  if ((local_a38->ArrayForChannels).ArrayNum < local_af0) {
    TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(local_a38,local_af0);
  }
  if ((pFVar72->UVElements->Channels).ArrayNum < (int)uVar76) {
    FMeshDescription::SetNumUVChannels(pFVar72,uVar76);
  }
  local_238.Elements._44_4_ = 0x80;
  local_238.Elements._0_8_ = 0;
  local_238.Elements._8_8_ = 0;
  local_238.Elements._32_8_ = 0;
  local_238.Elements._40_4_ = 0;
  local_238.Elements._52_4_ = 0;
  local_238.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_238.HashSize = 0;
  local_288._0_8_ = 0;
  local_288._8_8_ = 0;
  local_268 = 0;
  local_260 = 0;
  local_254 = 0;
  local_248 = (ForElementType<FSetElementId>)0x0;
  local_240 = 0;
  local_238.Elements._48_4_ = 0xffffffff;
  local_25c = 0x80;
  local_258 = 0xffffffff;
  TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
             *)local_288,local_b08);
  local_2d8._0_8_ = 0;
  local_2d8._8_8_ = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 0x80;
  local_2a8 = 0xffffffff;
  local_2a4 = 0;
  local_298 = (ForElementType<FSetElementId>)0x0;
  local_290 = 0;
  TSet<TTuple<FVertexInstanceID,FVertexInstanceID>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,FVertexInstanceID,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FVertexInstanceID,FVertexInstanceID>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,FVertexInstanceID,0>,FDefaultSetAllocator>
             *)local_2d8,(int)plVar80);
  uVar76 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar58 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar18 = __real_3e45798ee0000000;
  dVar17 = __real_3ff0000000000000;
  local_a4c = local_a88->ArrayNum;
  uVar84 = (ulonglong)(int)local_a4c;
  pFVar66 = (local_a88->AllocatorInstance).Data;
  local_7f8 = pFVar66 + uVar84 * 8;
  do {
    pFVar65 = local_7f8;
    local_9d0 = pFVar66;
    if (local_a88->ArrayNum != (int)uVar84) {
      local_b02 = 0;
      `TCheckedPointerIterator<FMeshDescription_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_b02);
    }
    if (pFVar66 == pFVar65) {
      (pFVar72->VertexInstanceToTriangles).bSuspended = false;
      (pFVar72->VertexInstanceToTriangles).bEverythingStale = true;
      (pFVar72->EdgeToTriangles).bSuspended = false;
      (pFVar72->EdgeToTriangles).bEverythingStale = true;
      (pFVar72->PolygonToTriangles).bSuspended = false;
      (pFVar72->PolygonToTriangles).bEverythingStale = true;
      (pFVar72->PolygonGroupToPolygons).bSuspended = false;
      (pFVar72->PolygonGroupToPolygons).bEverythingStale = true;
      (pFVar72->PolygonGroupToTriangles).bSuspended = false;
      (pFVar72->PolygonGroupToTriangles).bEverythingStale = true;
      (pFVar72->UVToTriangles).bSuspended = false;
      (pFVar72->UVToTriangles).bEverythingStale = true;
      local_290 = 0;
      if (local_298 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_298);
      }
      TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2d8);
      local_240 = 0;
      if (local_248 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_248);
      }
      TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_288);
      local_238.HashSize = 0;
      if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_238.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_238.Elements);
      if (bVar87) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    pFVar68 = *(FMeshDescription **)pFVar66;
    local_ae8 = pFVar68;
    TSet<TTuple<FPolygonGroupID,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>,FDefaultSetAllocator>
    ::Empty(&local_238,local_ad0);
    pFVar31 = FMeshElementChannels::Get(pFVar68->VertexElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::Vertex::Position);
    plVar67 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar67 = (longlong *)0x0;
    }
    if (((plVar67 == (longlong *)0x0) ||
        (local_ab0.Array = (TBitArray<FDefaultBitArrayAllocator> *)*plVar67,
        (int)((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_ab0.Array)->_padding_ != 1)
        ) || (*(int *)((longlong)
                       &((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_ab0.Array)->
                        _padding_ + 4) != 1)) {
      local_ab0.Array = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    }
    this_04.Array = local_ab0.Array;
    pFVar31 = FMeshElementChannels::Get(pFVar68->EdgeElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::Edge::IsHard);
    plVar67 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar67 = (longlong *)0x0;
    }
    if (((plVar67 == (longlong *)0x0) || (local_a48 = *plVar67, *(int *)(local_a48 + 8) != 5)) ||
       (*(int *)(local_a48 + 0xc) != 1)) {
      local_a48 = 0;
    }
    lVar62 = local_a48;
    pFVar31 = FMeshElementChannels::Get(pFVar68->PolygonGroupElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
    puVar86 = (ulonglong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar86 = (ulonglong *)0x0;
    }
    if (((puVar86 == (ulonglong *)0x0) ||
        (local_ab8.Array = (TBitArray<FDefaultBitArrayAllocator> *)*puVar86,
        (int)((TMeshAttributeArraySet<FName> *)local_ab8.Array)->_padding_ != 6)) ||
       (*(int *)((longlong)&((TMeshAttributeArraySet<FName> *)local_ab8.Array)->_padding_ + 4) != 1)
       ) {
      local_ab8.Array = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    }
    this_06.Array = local_ab8.Array;
    pFVar31 = FMeshElementChannels::Get(pFVar68->VertexInstanceElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::VertexInstance::Normal);
    plVar67 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar67 = (longlong *)0x0;
    }
    if (((plVar67 == (longlong *)0x0) ||
        (local_a30 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar67,
        (int)local_a30->_padding_ != 1)) || (*(int *)((longlong)&local_a30->_padding_ + 4) != 1)) {
      local_a30 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pFVar31 = FMeshElementChannels::Get(pFVar68->VertexInstanceElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::VertexInstance::Tangent);
    plVar67 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar67 = (longlong *)0x0;
    }
    if (((plVar67 == (longlong *)0x0) ||
        (local_a80 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar67,
        (int)local_a80->_padding_ != 1)) || (*(int *)((longlong)&local_a80->_padding_ + 4) != 1)) {
      local_a80 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    pFVar31 = FMeshElementChannels::Get(pFVar68->VertexInstanceElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::VertexInstance::BinormalSign);
    plVar67 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar67 = (longlong *)0x0;
    }
    if (((plVar67 == (longlong *)0x0) || (local_9f0 = *plVar67, *(int *)(local_9f0 + 8) != 3)) ||
       (*(int *)(local_9f0 + 0xc) != 1)) {
      local_9f0 = 0;
    }
    pFVar31 = FMeshElementChannels::Get(pFVar68->VertexInstanceElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::VertexInstance::Color);
    plVar67 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar67 = (longlong *)0x0;
    }
    if (((plVar67 == (longlong *)0x0) ||
        (local_a00 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)*plVar67,
        (int)local_a00->_padding_ != 0)) || (*(int *)((longlong)&local_a00->_padding_ + 4) != 1)) {
      local_a00 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
    }
    pFVar31 = FMeshElementChannels::Get(pFVar68->VertexInstanceElements,0);
    pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar31->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    plVar67 = (longlong *)&pTVar33->field_0x8;
    if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar67 = (longlong *)0x0;
    }
    if (((plVar67 == (longlong *)0x0) ||
        (local_a40 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar67,
        (int)local_a40->_padding_ != 2)) || (*(int *)((longlong)&local_a40->_padding_ + 4) != 1)) {
      local_a40 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
    }
    pTVar75 = local_a40;
    local_aa8 = (TMeshAttributeArraySet<FName> *)0x0;
    if (pTVar73 != (TMeshAttributeArraySet<FName> *)0x0) {
      pFVar31 = FMeshElementChannels::Get(pFVar68->PolygonElements,0);
      pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                        *)&pFVar31->Attributes,MeshAttribute::Polygon::ObjectName);
      plVar67 = (longlong *)&pTVar33->field_0x8;
      if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
        plVar67 = (longlong *)0x0;
      }
      if (((plVar67 == (longlong *)0x0) ||
          (local_aa8 = (TMeshAttributeArraySet<FName> *)*plVar67, (int)local_aa8->_padding_ != 6))
         || (*(int *)((longlong)&local_aa8->_padding_ + 4) != 1)) {
        local_aa8 = (TMeshAttributeArraySet<FName> *)0x0;
      }
    }
    pFVar20 = local_af8;
    iVar57 = (pFVar68->UVElements->Channels).ArrayNum;
    iVar81 = (pFVar72->UVElements->Channels).ArrayNum;
    if (iVar81 < iVar57) {
      iVar57 = iVar81;
    }
    if (0 < iVar57) {
      iVar81 = 0;
      do {
        pFVar31 = FMeshElementChannels::Get(pFVar68->UVElements,iVar81);
        pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                          *)&pFVar31->Attributes,MeshAttribute::UV::UVCoordinate);
        plVar67 = (longlong *)&pTVar33->field_0x8;
        if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
          plVar67 = (longlong *)0x0;
        }
        if (((plVar67 == (longlong *)0x0) ||
            (pTVar75 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar67,
            (int)pTVar75->_padding_ != 2)) || (*(int *)((longlong)&pTVar75->_padding_ + 4) != 1)) {
          pTVar75 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
        }
        pFVar31 = FMeshElementChannels::Get(pFVar20->UVElements,iVar81);
        pTVar33 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                          *)&pFVar31->Attributes,MeshAttribute::UV::UVCoordinate);
        plVar67 = (longlong *)&pTVar33->field_0x8;
        if (pTVar33 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
          plVar67 = (longlong *)0x0;
        }
        if (((plVar67 == (longlong *)0x0) ||
            (this_02 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar67,
            (int)this_02->_padding_ != 2)) || (*(int *)((longlong)&this_02->_padding_ + 4) != 1)) {
          this_02 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
        }
        local_ad8._s_0.X = (float)(int)pTVar75->_padding_;
        pFVar31 = FMeshElementChannels::Get(pFVar20->UVElements,iVar81);
        pFVar35 = FMeshElementChannels::Get(pFVar20->UVElements,iVar81);
        TBitArray<FDefaultBitArrayAllocator>::Reserve
                  (&pFVar31->BitArray,
                   ((pFVar35->BitArray).NumBits - pFVar35->NumHoles) + local_ad8._0_4_);
        pFVar31 = FMeshElementChannels::Get(local_ae8->UVElements,iVar81);
        local_978._padding_._0_4_ = 0;
        local_978._padding_._4_4_ = 1;
        local_978.UnvisitedBitMask = 0xffffffff;
        local_978.CurrentBitIndex = 0;
        local_978.BaseBitIndex = 0;
        local_978.Array = &pFVar31->BitArray;
        if ((pFVar31->BitArray).NumBits != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_978);
        }
        unique0x1000385d =
             (FPolygonGroupID *)CONCAT44(local_978._padding_._4_4_,(undefined4)local_978._padding_);
        local_7b8 = CONCAT44(local_978.CurrentBitIndex,local_978.UnvisitedBitMask);
        uStack_7b0 = CONCAT44(local_978._28_4_,local_978.BaseBitIndex);
        pFStack_7c0 = (FMeshElementContainer *)local_978.Array;
        pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_338,&pFVar31->BitArray,(pFVar31->BitArray).NumBits);
        local_4a8 = pTVar36->UnvisitedBitMask;
        iVar15 = pTVar36->CurrentBitIndex;
        iStack_4a0 = pTVar36->BaseBitIndex;
        uStack_49c = *(undefined4 *)&pTVar36->field_0x1c;
        local_4b8 = pTVar36->_padding_;
        pFStack_4b0 = (FMeshElementContainer *)pTVar36->Array;
        iStack_4a4 = iVar15;
        while ((local_7b8._4_4_ != iVar15 || (pFStack_7c0 != pFStack_4b0))) {
          iVar28 = -1;
          if (local_7b8._4_4_ < (pFStack_7c0->BitArray).NumBits) {
            iVar28 = local_7b8._4_4_;
          }
          local_ad8._s_0.X = (float)iVar28;
          pFVar31 = FMeshElementChannels::Get(pFVar20->UVElements,iVar81);
          iVar28 = FMeshElementContainer::Add(pFVar31);
          pTVar37 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (pTVar75,0);
          pTVar38 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar37,local_ad8._0_4_);
          local_ad8._s_0 = *pTVar38;
          pTVar37 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_02,0);
          pTVar39 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                               (pTVar37,iVar28)->field0_0x0;
          pTVar39->_s_0 = (TVector2<float>_u_0_s_0)local_ad8;
          local_7b8 = CONCAT44(local_7b8._4_4_,(uint)local_7b8 & ~uStack_7c4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_7d0 + 8));
        }
        iVar81 = iVar81 + 1;
        pFVar68 = local_ae8;
        pFVar72 = local_af8;
        lVar62 = local_a48;
        this_04.Array = local_ab0.Array;
        pTVar75 = local_a40;
        this_06.Array = local_ab8.Array;
      } while (iVar81 < iVar57);
    }
    this_03 = local_ac0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ac0,&local_5b8);
    if (((*(int *)&(this_03->PolygonGroupsDelegate).field_0x10 == 0) ||
        (plVar67 = *(longlong **)&(this_03->PolygonGroupsDelegate).field_0x8,
        plVar67 == (longlong *)0x0)) || (cVar26 = (**(code **)(*plVar67 + 0x38))(), cVar26 == '\0'))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5b8);
      local_938.Array = &FMeshElementChannels::Get(pFVar68->PolygonGroupElements,0)->BitArray;
      local_938._padding_._0_4_ = 0;
      local_938._padding_._4_4_ = 1;
      local_938.UnvisitedBitMask = 0xffffffff;
      local_938.CurrentBitIndex = 0;
      local_938.BaseBitIndex = 0;
      local_7a8.Array = local_938.Array;
      if ((((FMeshElementContainer *)local_938.Array)->BitArray).NumBits != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_938);
      }
      local_7a0._padding_ = CONCAT44(local_938._padding_._4_4_,(undefined4)local_938._padding_);
      local_7a0.CurrentBitIndex = local_938.CurrentBitIndex;
      local_7a0.UnvisitedBitMask = local_938.UnvisitedBitMask;
      local_7a0._28_4_ = local_938._28_4_;
      local_7a0.BaseBitIndex = local_938.BaseBitIndex;
      local_7a0.Array = local_938.Array;
      TMeshElementContainer<FPolygonGroupID>::TElementIDs::end(&local_7a8,&local_498);
      pTVar73 = local_818;
      pFVar20 = local_af8;
      while ((local_7a0.CurrentBitIndex != local_498.Iterator.CurrentBitIndex ||
             (pFVar68 = local_ae8, pFVar72 = local_af8, this_03 = local_ac0, lVar62 = local_a48,
             pTVar75 = local_a40, local_7a0.Array != local_498.Iterator.Array))) {
        local_b0c = -1;
        local_b08 = 0xffffffff;
        if (local_7a0.CurrentBitIndex <
            ((TBitArray<FDefaultBitArrayAllocator> *)&(local_7a0.Array)->AllocatorInstance)->NumBits
           ) {
          local_b08 = local_7a0.CurrentBitIndex;
        }
        pFVar31 = FMeshElementChannels::Get(pFVar20->PolygonGroupElements,0);
        local_958._padding_._0_4_ = 0;
        local_958._padding_._4_4_ = 1;
        local_958.UnvisitedBitMask = 0xffffffff;
        local_958.CurrentBitIndex = 0;
        local_958.BaseBitIndex = 0;
        local_958.Array = &pFVar31->BitArray;
        if ((pFVar31->BitArray).NumBits != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_958);
        }
        local_700._padding_ = CONCAT44(local_958._padding_._4_4_,(undefined4)local_958._padding_);
        local_700.CurrentBitIndex = local_958.CurrentBitIndex;
        local_700.UnvisitedBitMask = local_958.UnvisitedBitMask;
        local_700._28_4_ = local_958._28_4_;
        local_700.BaseBitIndex = local_958.BaseBitIndex;
        local_700.Array = local_958.Array;
        pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_318,&pFVar31->BitArray,(pFVar31->BitArray).NumBits);
        local_468._0_4_ = pTVar36->UnvisitedBitMask;
        local_468._4_4_ = pTVar36->CurrentBitIndex;
        uStack_460 = *(undefined8 *)&pTVar36->BaseBitIndex;
        local_478 = pTVar36->_padding_;
        pFStack_470 = (FMeshElementContainer *)pTVar36->Array;
        local_ab8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_468 >> 0x20);
        while ((local_700.CurrentBitIndex != (int)local_ab8.Array ||
               (iVar57 = local_b0c, (FMeshElementContainer *)local_700.Array != pFStack_470))) {
          iVar57 = -1;
          if (local_700.CurrentBitIndex <
              ((TBitArray<FDefaultBitArrayAllocator> *)&(local_700.Array)->AllocatorInstance)->
              NumBits) {
            iVar57 = local_700.CurrentBitIndex;
          }
          pTVar54 = TMeshAttributeArraySet<FName>::GetArrayForChannel(pTVar73,0);
          local_ab0.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)
               TMeshAttributeArrayBase<FName>::GetElementBase(pTVar54,iVar57);
          uVar139 = local_b08;
          pTVar54 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                              ((TMeshAttributeArraySet<FName> *)this_06.Array,0);
          pFVar55 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar54,uVar139);
          if (*pFVar55 == *(FName *)((local_ab0.Array)->AllocatorInstance).InlineData) break;
          local_700.UnvisitedBitMask = local_700.UnvisitedBitMask & ~local_700._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_700);
        }
        local_b0c = iVar57;
        if (local_b0c == -1) {
          pFVar31 = FMeshElementChannels::Get(pFVar20->PolygonGroupElements,0);
          local_b0c = FMeshElementContainer::Add(pFVar31);
          uVar139 = local_b08;
          pTVar54 = TMeshAttributeArraySet<FName>::GetArrayForChannel
                              ((TMeshAttributeArraySet<FName> *)this_06.Array,0);
          pFVar55 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar54,uVar139);
          iVar57 = local_b0c;
          FVar10 = *pFVar55;
          pTVar54 = TMeshAttributeArraySet<FName>::GetArrayForChannel(pTVar73,0);
          pFVar55 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar54,iVar57);
          *pFVar55 = FVar10;
        }
        local_618 = &local_b08;
        local_610 = &local_b0c;
        TSet<TTuple<FPolygonGroupID,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FPolygonGroupID_const_&,FPolygonGroupID_const_&>_>
                  (&local_238,
                   (TPairInitializer<FPolygonGroupID_const_&,FPolygonGroupID_const_&> *)local_7d0,
                   (bool *)&local_618);
        local_7a0.UnvisitedBitMask = local_7a0.UnvisitedBitMask & ~local_7a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_7a0);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_03,&local_3f8);
      if (*(int *)&(this_03->PolygonGroupsDelegate).field_0x10 == 0) {
        plVar67 = (longlong *)0x0;
      }
      else {
        plVar67 = *(longlong **)&(this_03->PolygonGroupsDelegate).field_0x8;
      }
      (**(code **)(*plVar67 + 0x60))(plVar67,pFVar68,pFVar72,&local_238);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_3f8);
    }
    pFVar31 = FMeshElementChannels::Get(pFVar72->PolygonGroupElements,0);
    if ((pFVar31->BitArray).NumBits - pFVar31->NumHoles == 1) {
      pFVar31 = FMeshElementChannels::Get(pFVar72->PolygonGroupElements,0);
      local_afc = (FPolygonGroupID)
                  TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                            (&pFVar31->BitArray,true,0,(pFVar31->BitArray).NumBits);
    }
    else {
      local_afc = (FPolygonGroupID)0xffffffff;
    }
    local_ab0.Array = &FMeshElementChannels::Get(pFVar68->VertexElements,0)->BitArray;
    local_918._padding_._0_4_ = 0;
    local_918._padding_._4_4_ = 1;
    local_918.UnvisitedBitMask = 0xffffffff;
    local_918.CurrentBitIndex = 0;
    local_918.BaseBitIndex = 0;
    local_918.Array = local_ab0.Array;
    if (((TBitArray<FDefaultBitArrayAllocator> *)&(local_ab0.Array)->AllocatorInstance)->NumBits !=
        0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_918);
    }
    local_780._padding_ = CONCAT44(local_918._padding_._4_4_,(undefined4)local_918._padding_);
    local_780.CurrentBitIndex = local_918.CurrentBitIndex;
    local_780.UnvisitedBitMask = local_918.UnvisitedBitMask;
    local_780._28_4_ = local_918._28_4_;
    local_780.BaseBitIndex = local_918.BaseBitIndex;
    local_780.Array = local_918.Array;
    TMeshElementContainer<FVertexID>::TElementIDs::end(&local_ab0,&local_458);
    while ((local_780.CurrentBitIndex != local_458.Iterator.CurrentBitIndex ||
           (local_780.Array != local_458.Iterator.Array))) {
      local_a90[0] = -1;
      if (local_780.CurrentBitIndex <
          ((TBitArray<FDefaultBitArrayAllocator> *)&(local_780.Array)->AllocatorInstance)->NumBits)
      {
        local_a90[0] = local_780.CurrentBitIndex;
      }
      pFVar31 = FMeshElementChannels::Get(pFVar72->VertexElements,0);
      local_ae0[0] = FMeshElementContainer::Add(pFVar31);
      iVar57 = local_a90[0];
      pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)this_04.Array,0);
      pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar40,iVar57);
      uVar139 = local_ae0[0];
      dVar118 = (this_03->MergedAssetPivot).field0_0x0._s_0.X;
      dVar99 = (this_03->MergedAssetPivot).field0_0x0._s_0.Y;
      fVar135 = (pTVar41->field0_0x0)._s_0.X;
      fVar1 = (pTVar41->field0_0x0)._s_0.Y;
      fVar2 = (pTVar41->field0_0x0)._s_0.Z;
      dVar104 = (this_03->MergedAssetPivot).field0_0x0._s_0.Z;
      pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(local_a08,0);
      pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar40,uVar139);
      (pTVar41->field0_0x0)._s_0.X = fVar135 - (float)dVar118;
      (pTVar41->field0_0x0)._s_0.Y = fVar1 - (float)dVar99;
      (pTVar41->field0_0x0)._s_0.Z = fVar2 - (float)dVar104;
      local_628 = local_a90;
      local_620 = local_ae0;
      TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FVertexID_const_&,FVertexID_const_&>_>
                ((TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
                  *)local_288,(TPairInitializer<FVertexID_const_&,FVertexID_const_&> *)local_7e0,
                 (bool *)&local_628);
      local_780.UnvisitedBitMask = local_780.UnvisitedBitMask & ~local_780._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_780);
    }
    if ((this_03->MeshTransform).bIsSet != false) {
      pTVar42 = TOptional<UE::Math::TTransform<double>_>::GetValue(&this_03->MeshTransform);
      local_8f8._padding_._0_4_ = 0;
      local_8f8._padding_._4_4_ = 1;
      local_8f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10);
      local_8f8.UnvisitedBitMask = 0xffffffff;
      local_8f8.CurrentBitIndex = 0;
      local_8f8.BaseBitIndex = 0;
      if (local_260 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8f8);
      }
      unique0x100038dd =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(local_8f8._padding_._4_4_,(undefined4)local_8f8._padding_);
      local_6a8._0_8_ = local_288;
      uStack_690 = CONCAT44(local_8f8.CurrentBitIndex,local_8f8.UnvisitedBitMask);
      local_688 = CONCAT44(local_8f8._28_4_,local_8f8.BaseBitIndex);
      local_5c0 = local_288._8_4_ - local_254;
      local_5e8._16_8_ = local_8f8.Array;
      uStack_680._4_4_ = uStack_5bc;
      uStack_680._0_4_ = local_5c0;
      local_698 = local_8f8.Array;
      local_5e8._0_8_ = local_6a8._0_8_;
      local_5e8._8_8_ = unique0x100038dd;
      lStack_5d0 = uStack_690;
      lStack_5c8 = local_688;
      pTVar36 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_5e8,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_288 + 0x10),local_260);
      local_4e8._padding_ = (longlong)local_288;
      local_4e8._padding_ = pTVar36->_padding_;
      uStack_6c8 = pTVar36->Array;
      lStack_6c0._0_4_ = pTVar36->UnvisitedBitMask;
      lStack_6c0._4_4_ = pTVar36->CurrentBitIndex;
      lStack_6b8 = *(longlong *)&pTVar36->BaseBitIndex;
      local_6b0 = local_288._8_4_ - local_254;
      local_6d8._8_8_ = local_4e8._padding_;
      local_6d8._0_8_ = local_4e8._padding_;
      local_4e8._44_4_ = uStack_6ac;
      local_4e8.InitialNum = local_6b0;
      local_4e8._padding_ = (longlong)uStack_6c8;
      local_4e8._padding_ = lStack_6c0;
      local_4e8._padding_ = lStack_6b8;
      bVar25 = TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_6a8,&local_4e8);
      pTVar22 = local_a08;
      pFVar72 = local_af8;
      if (bVar25) {
        do {
          iVar57 = *(int *)(*(longlong *)local_6a8._0_8_ + 4 + (longlong)uStack_690._4_4_ * 0x10);
          pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar22,0)
          ;
          pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar40,iVar57);
          auVar113 = *(undefined1 (*) [16])(pTVar42->Rotation).XY.m128d_f64;
          dVar133 = (pTVar42->Rotation).ZW.m128d_f64[1];
          dVar88 = (double)(pTVar41->field0_0x0)._s_0.Y;
          local_3d0 = (double)(pTVar41->field0_0x0)._s_0.Z;
          dVar102 = (double)(pTVar41->field0_0x0)._s_0.X;
          auVar140 = *(undefined1 (*) [16])(pTVar42->Rotation).ZW.m128d_f64;
          dVar108 = local_3d0 * (pTVar42->Scale3D).ZW.m128d_f64[0];
          dVar99 = (pTVar42->Scale3D).ZW.m128d_f64[1] * 0.0;
          local_6d8 = *(undefined1 (*) [16])(pTVar42->Rotation).XY.m128d_f64;
          auVar100 = blendpd(local_6d8,auVar140,2);
          local_3e0._8_4_ = SUB84(dVar88,0);
          local_3e0._0_8_ = dVar102;
          local_3e0._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
          dVar102 = dVar102 * (pTVar42->Scale3D).XY.m128d_f64[0];
          dVar88 = dVar88 * (pTVar42->Scale3D).XY.m128d_f64[1];
          uVar78 = (undefined4)((ulonglong)dVar88 >> 0x20);
          auVar126._8_4_ = SUB84(dVar88,0);
          auVar126._0_8_ = dVar102;
          auVar126._12_4_ = uVar78;
          dVar118 = auVar140._0_8_;
          auVar127._0_8_ = auVar126._8_8_ * local_6d8._0_8_ - local_6d8._8_8_ * dVar102;
          auVar127._8_8_ = dVar108 * local_6d8._8_8_ - dVar118 * dVar88;
          auVar105._8_4_ = SUB84(dVar88,0);
          auVar105._0_8_ = dVar102;
          auVar105._12_4_ = uVar78;
          auVar90._8_4_ = SUB84(dVar99,0);
          auVar90._0_8_ = dVar108;
          auVar90._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
          auVar90 = blendpd(auVar105,auVar90,2);
          auVar91._0_8_ = auVar90._0_8_ * dVar118 - auVar100._0_8_ * dVar108;
          auVar91._8_8_ = auVar90._8_8_ * auVar140._8_8_ - auVar100._8_8_ * dVar99;
          auVar90 = blendpd(auVar127,auVar91,2);
          dVar99 = auVar127._8_8_ + auVar127._8_8_;
          dVar104 = auVar91._0_8_ + auVar91._0_8_;
          uVar78 = (undefined4)((ulonglong)dVar104 >> 0x20);
          auVar128._0_8_ = auVar90._0_8_ + auVar90._0_8_;
          auVar128._8_8_ = auVar90._8_8_ + auVar90._8_8_;
          auVar111._8_4_ = SUB84(dVar104,0);
          auVar111._0_8_ = dVar99;
          auVar111._12_4_ = uVar78;
          auVar101._8_4_ = SUB84(dVar104,0);
          auVar101._0_8_ = dVar99;
          auVar101._12_4_ = uVar78;
          auVar90 = blendpd(auVar101,auVar128,2);
          auVar112._0_8_ = auVar111._8_8_ * auVar113._0_8_ - auVar113._8_8_ * dVar99;
          auVar112._8_8_ = auVar128._0_8_ * auVar113._8_8_ - dVar118 * dVar104;
          auVar100._8_4_ = SUB84(auVar112._8_8_,0);
          auVar100._0_8_ = auVar112._0_8_;
          auVar100._12_4_ = (int)((ulonglong)auVar112._8_8_ >> 0x20);
          auVar105 = blendpd(auVar113,auVar140,2);
          auVar113._0_8_ = auVar90._0_8_ * dVar118 - auVar105._0_8_ * auVar128._0_8_;
          auVar113._8_8_ = auVar90._8_8_ * auVar140._8_8_ - auVar105._8_8_ * auVar128._8_8_;
          dVar118 = dVar99 * dVar133 + dVar102 + auVar100._8_8_ +
                    (pTVar42->Translation).XY.m128d_f64[0];
          dVar99 = dVar104 * dVar133 + dVar88 + auVar113._0_8_ +
                   (pTVar42->Translation).XY.m128d_f64[1];
          auVar113 = blendpd(auVar112,auVar113,2);
          local_398._8_4_ = SUB84(dVar99,0);
          local_398._0_8_ = dVar118;
          local_398._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
          local_388 = auVar128._0_8_ * dVar133 + dVar108 + auVar113._0_8_ +
                      (pTVar42->Translation).ZW.m128d_f64[0];
          (pTVar41->field0_0x0)._s_0.X = (float)dVar118;
          (pTVar41->field0_0x0)._s_0.Y = (float)dVar99;
          (pTVar41->field0_0x0)._s_0.Z = (float)local_388;
          uStack_690 = CONCAT44(uStack_690._4_4_,(uint)uStack_690 & ~uStack_69c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_6a8 + 8));
          bVar25 = TSparseArray<TSparseSetElement<TTuple<FVertexID,FVertexID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_6a8,&local_4e8);
          pFVar72 = local_af8;
        } while (bVar25);
      }
    }
    pFVar68 = local_ae8;
    local_ab8.Array = &FMeshElementChannels::Get(local_ae8->EdgeElements,0)->BitArray;
    local_8d8._padding_._0_4_ = 0;
    local_8d8._padding_._4_4_ = 1;
    local_8d8.UnvisitedBitMask = 0xffffffff;
    local_8d8.CurrentBitIndex = 0;
    local_8d8.BaseBitIndex = 0;
    local_8d8.Array = local_ab8.Array;
    if (((TBitArray<FDefaultBitArrayAllocator> *)&(local_ab8.Array)->AllocatorInstance)->NumBits !=
        0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8d8);
    }
    local_760._padding_ = CONCAT44(local_8d8._padding_._4_4_,(undefined4)local_8d8._padding_);
    local_760.CurrentBitIndex = local_8d8.CurrentBitIndex;
    local_760.UnvisitedBitMask = local_8d8.UnvisitedBitMask;
    local_760._28_4_ = local_8d8._28_4_;
    local_760.BaseBitIndex = local_8d8.BaseBitIndex;
    local_760.Array = local_8d8.Array;
    TMeshElementContainer<FEdgeID>::TElementIDs::end(&local_ab8,(TConstIterator *)local_6d8);
    while( true ) {
      if ((local_760.CurrentBitIndex == uStack_6c8._4_4_) &&
         (local_760.Array == (TBitArray<FDefaultBitArrayAllocator> *)local_6d8._8_8_)) break;
      iVar57 = -1;
      if (local_760.CurrentBitIndex <
          ((TBitArray<FDefaultBitArrayAllocator> *)&(local_760.Array)->AllocatorInstance)->NumBits)
      {
        iVar57 = local_760.CurrentBitIndex;
      }
      pTVar43 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&pFVar68->EdgeVertices,&local_348,iVar57);
      local_638.DataPtr = pTVar43->DataPtr;
      local_638.ArrayNum = pTVar43->ArrayNum;
      pFVar44 = TArrayView<FVertexID_const_,int>::operator[](&local_638,0);
      local_a54 = *pFVar44;
      pTVar43 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&pFVar68->EdgeVertices,local_380,iVar57);
      local_648.DataPtr = pTVar43->DataPtr;
      local_648.ArrayNum = pTVar43->ArrayNum;
      pFVar44 = TArrayView<FVertexID_const_,int>::operator[](&local_648,1);
      local_a58 = *pFVar44;
      pFVar44 = TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
                ::FindChecked((TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
                               *)local_288,&local_a58);
      FVar5 = *pFVar44;
      pFVar44 = TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
                ::FindChecked((TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
                               *)local_288,&local_a54);
      FVar6 = *pFVar44;
      pFVar31 = FMeshElementChannels::Get(pFVar72->EdgeElements,0);
      FVar29 = (FEdgeID)FMeshElementContainer::Add(pFVar31);
      FMeshDescription::CreateEdge_Internal(local_af8,FVar29,FVar6,FVar5);
      if ((*(int *)(lVar62 + 0x38) < 1) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      plVar67 = (longlong *)(lVar62 + 0x18);
      if (*(longlong **)(lVar62 + 0x30) != (longlong *)0x0) {
        plVar67 = *(longlong **)(lVar62 + 0x30);
      }
      uVar83 = iVar57 * (int)plVar67[2];
      uVar139 = 0;
      if ((int)uVar83 < (int)plVar67[1]) {
        uVar139 = ~uVar83 >> 0x1f;
      }
      if ((uVar139 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      bVar25 = *(bool *)((longlong)(int)uVar83 + *plVar67);
      this_00 = TMeshAttributeArraySet<bool>::GetArrayForChannel(local_810,0);
      pbVar45 = TMeshAttributeArrayBase<bool>::GetElementBase(this_00,(int)FVar29);
      *pbVar45 = bVar25;
      local_760.UnvisitedBitMask = local_760.UnvisitedBitMask & ~local_760._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_760);
      pFVar68 = local_ae8;
      pFVar72 = local_af8;
    }
    local_8b8.Array = &FMeshElementChannels::Get(pFVar68->VertexInstanceElements,0)->BitArray;
    local_8b8._padding_._0_4_ = 0;
    local_8b8._padding_._4_4_ = 1;
    local_8b8.UnvisitedBitMask = 0xffffffff;
    local_8b8.CurrentBitIndex = 0;
    local_8b8.BaseBitIndex = 0;
    local_808.Array = local_8b8.Array;
    if ((((FMeshElementContainer *)local_8b8.Array)->BitArray).NumBits != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8b8);
    }
    local_740._padding_ = CONCAT44(local_8b8._padding_._4_4_,(undefined4)local_8b8._padding_);
    local_740.CurrentBitIndex = local_8b8.CurrentBitIndex;
    local_740.UnvisitedBitMask = local_8b8.UnvisitedBitMask;
    local_740._28_4_ = local_8b8._28_4_;
    local_740.BaseBitIndex = local_8b8.BaseBitIndex;
    local_740.Array = local_8b8.Array;
    TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_808,&local_438);
    lVar62 = local_9f0;
    this = local_a00;
    pTVar22 = local_a80;
    this_05 = local_a30;
    while ((local_740.CurrentBitIndex != local_438.Iterator.CurrentBitIndex ||
           (local_740.Array != local_438.Iterator.Array))) {
      iVar57 = -1;
      if (local_740.CurrentBitIndex <
          ((TBitArray<FDefaultBitArrayAllocator> *)&(local_740.Array)->AllocatorInstance)->NumBits)
      {
        iVar57 = local_740.CurrentBitIndex;
      }
      local_b14 = iVar57;
      this_01 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (local_ae8->VertexInstanceVertices).ArrayPtr,0);
      pFVar44 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_01,iVar57);
      local_a50 = *pFVar44;
      pFVar44 = TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
                ::FindChecked((TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
                               *)local_288,&local_a50);
      pFVar72 = local_af8;
      FVar5 = *pFVar44;
      pFVar31 = FMeshElementChannels::Get(local_af8->VertexInstanceElements,0);
      local_b10 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar31);
      FMeshDescription::CreateVertexInstance_Internal(pFVar72,local_b10,FVar5);
      iVar57 = local_b14;
      pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_05,0);
      pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar40,iVar57);
      FVar19 = local_b10;
      uVar3 = *(undefined8 *)&pTVar41->field0_0x0;
      fVar135 = (pTVar41->field0_0x0)._s_0.Z;
      pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(local_9e8,0);
      pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar40,(int)FVar19);
      iVar57 = local_b14;
      *(undefined8 *)&pTVar41->field0_0x0 = uVar3;
      (pTVar41->field0_0x0)._s_0.Z = fVar135;
      pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar22,0);
      pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar40,iVar57);
      FVar19 = local_b10;
      uVar3 = *(undefined8 *)&pTVar41->field0_0x0;
      fVar135 = (pTVar41->field0_0x0)._s_0.Z;
      pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(local_9e0,0);
      pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar40,(int)FVar19);
      iVar57 = local_b14;
      *(undefined8 *)&pTVar41->field0_0x0 = uVar3;
      (pTVar41->field0_0x0)._s_0.Z = fVar135;
      if ((*(int *)(lVar62 + 0x38) < 1) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      plVar67 = (longlong *)(lVar62 + 0x18);
      if (*(longlong **)(lVar62 + 0x30) != (longlong *)0x0) {
        plVar67 = *(longlong **)(lVar62 + 0x30);
      }
      uVar83 = iVar57 * (int)plVar67[2];
      uVar139 = 0;
      if ((int)uVar83 < (int)plVar67[1]) {
        uVar139 = ~uVar83 >> 0x1f;
      }
      if ((uVar139 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar19 = local_b10;
      fVar135 = *(float *)(*plVar67 + (longlong)(int)uVar83 * 4);
      pTVar46 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_9d8,0);
      pfVar47 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar46,(int)FVar19);
      iVar57 = local_b14;
      *pfVar47 = fVar135;
      if (local_ac0->bMergeVertexColor != false) {
        pTVar48 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel(this,0);
        pTVar49 = (TVector4<float>_u_0_s_0 *)
                  TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                            (pTVar48,iVar57);
        lVar61 = local_800;
        FVar19 = local_b10;
        pTVar48 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)(local_800 + 0x18);
        TVar4 = *pTVar49;
        if ((*(int *)(local_800 + 0x38) < 1) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> **)(lVar61 + 0x30) !=
            (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)0x0) {
          pTVar48 = *(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> **)(lVar61 + 0x30);
        }
        pTVar50 = &TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                             (pTVar48,(int)FVar19)->field0_0x0;
        pTVar50->_s_0 = TVar4;
      }
      local_ad8._s_0 = local_ad8._s_0 & 0xffffffff00000000;
      TVar21 = local_ad8;
      if (0 < local_af0) {
        local_ad8._0_4_ = 0;
        uVar78 = local_ad8._0_4_;
        local_ad8 = TVar21;
        do {
          iVar57 = local_b14;
          this_05 = local_a30;
          if ((pTVar75->ArrayForChannels).ArrayNum <= (int)uVar78) break;
          pTVar37 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (pTVar75,uVar78);
          pTVar38 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar37,iVar57);
          FVar19 = local_b10;
          TVar9 = *pTVar38;
          pTVar37 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (local_a38,uVar78);
          pTVar39 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                               (pTVar37,(int)FVar19)->field0_0x0;
          uVar78 = uVar78 + 1;
          pTVar39->_s_0 = TVar9;
          this_05 = local_a30;
        } while ((int)uVar78 < local_af0);
      }
      local_5f8 = &local_b14;
      local_5f0 = &local_b10;
      TSet<TTuple<FVertexInstanceID,FVertexInstanceID>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,FVertexInstanceID,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FVertexInstanceID_const_&,FVertexInstanceID_const_&>_>
                ((TSet<TTuple<FVertexInstanceID,FVertexInstanceID>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,FVertexInstanceID,0>,FDefaultSetAllocator>
                  *)local_2d8,
                 (TPairInitializer<FVertexInstanceID_const_&,FVertexInstanceID_const_&> *)
                 (local_7e0 + 4),(bool *)&local_5f8);
      local_740.UnvisitedBitMask = local_740.UnvisitedBitMask & ~local_740._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_740);
    }
    bVar25 = false;
    if ((local_ac0->MeshTransform).bIsSet != false) {
      pTVar42 = TOptional<UE::Math::TTransform<double>_>::GetValue(&local_ac0->MeshTransform);
      local_988 = *(undefined1 (*) [16])(pTVar42->Rotation).ZW.m128d_f64;
      dVar108 = (pTVar42->Rotation).XY.m128d_f64[0];
      dVar133 = (pTVar42->Rotation).XY.m128d_f64[1];
      dVar99 = (pTVar42->Rotation).XY.m128d_f64[0];
      auVar113 = *(undefined1 (*) [16])(pTVar42->Scale3D).XY.m128d_f64;
      dVar102 = dVar108 + dVar108;
      dVar88 = dVar133 + dVar133;
      uVar78 = (undefined4)((ulonglong)dVar88 >> 0x20);
      dVar118 = local_988._0_8_;
      dVar109 = dVar118 + dVar118;
      auVar129._8_4_ = SUB84(dVar88,0);
      auVar129._0_8_ = dVar102;
      auVar129._12_4_ = uVar78;
      auVar106._8_4_ = SUB84(dVar88,0);
      auVar106._0_8_ = dVar102;
      auVar106._12_4_ = uVar78;
      dVar133 = auVar129._8_8_ * dVar133;
      dVar103 = auVar106._8_8_ * dVar99;
      dVar107 = dVar109 * (pTVar42->Rotation).XY.m128d_f64[1];
      local_998._0_8_ = (pTVar42->Rotation).XY.m128d_f64[0];
      local_998._8_8_ = (pTVar42->Rotation).XY.m128d_f64[1];
      dVar104 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - (dVar109 * dVar118 + dVar133)) *
                (pTVar42->Scale3D).XY.m128d_f64[0];
      dStack_1c0 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                   (dVar109 * dVar118 + dVar102 * dVar108)) * (pTVar42->Scale3D).XY.m128d_f64[1];
      dVar118 = local_988._8_8_;
      auVar140._8_4_ = local_988._8_4_;
      auVar140._0_8_ = dVar118;
      auVar140._12_4_ = local_988._12_4_;
      dVar89 = dVar118 * dVar109;
      dVar95 = auVar140._8_8_ * dVar102;
      auVar114._8_4_ = SUB84(dVar95,0);
      auVar114._0_8_ = dVar89;
      auVar114._12_4_ = (int)((ulonglong)dVar95 >> 0x20);
      dVar110 = (dVar89 + dVar103) * (pTVar42->Scale3D).XY.m128d_f64[0];
      dVar117 = (auVar114._8_8_ + dVar107) * (pTVar42->Scale3D).XY.m128d_f64[1];
      uVar74 = SUB84(dVar117,0);
      auVar130._8_4_ = uVar74;
      auVar130._0_8_ = dVar110;
      uVar119 = (uint)((ulonglong)dVar117 >> 0x20);
      auVar130._12_4_ = uVar119;
      local_198 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar102 * dVar108 + dVar133))
                  * (pTVar42->Scale3D).ZW.m128d_f64[0];
      dVar99 = dVar99 * dVar109;
      local_1b8 = auVar130._8_8_;
      auVar140 = blendpd(auVar113,*(undefined1 (*) [16])(pTVar42->Scale3D).ZW.m128d_f64,2);
      local_1c8 = auVar113._8_8_ * (dVar103 - dVar89);
      dVar102 = (pTVar42->Scale3D).ZW.m128d_f64[0] * (dVar107 - dVar95);
      uVar122 = (uint)((ulonglong)dVar110 >> 0x20);
      uVar139 = SUB84(dVar102,0);
      uVar83 = (uint)((ulonglong)dVar102 >> 0x20);
      local_1d8 = auVar140._0_8_ * (dVar99 - dVar88 * dVar118);
      dVar118 = (dVar88 * dVar118 + dVar99) * (pTVar42->Scale3D).ZW.m128d_f64[0];
      local_1a8._8_4_ = uVar139;
      local_1a8._0_8_ = dVar118;
      local_1a8._12_4_ = uVar83;
      local_1e8._8_4_ = SUB84(dVar110,0);
      local_1e8._0_8_ = dVar104;
      local_1e8._12_4_ = uVar122;
      dStack_1d0 = 0.0;
      dStack_1b0 = 0.0;
      local_178 = *(undefined4 *)(pTVar42->Translation).ZW.m128d_f64;
      uStack_174 = *(undefined4 *)((longlong)(pTVar42->Translation).ZW.m128d_f64 + 4);
      uStack_170 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      uStack_16c = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      local_188 = (pTVar42->Translation).XY.m128d_f64[0];
      dStack_180 = (pTVar42->Translation).XY.m128d_f64[1];
      dStack_190 = 0.0;
      if (((dVar18 < (double)CONCAT44((uint)((ulonglong)dVar104 >> 0x20) & uVar76,
                                      SUB84(dVar104,0) & uVar58)) ||
          (uVar120 = SUB84(dVar110,0) & uVar58, uVar122 = uVar122 & uVar76,
          dVar18 <= (double)CONCAT44(uVar122,uVar120) && (double)CONCAT44(uVar122,uVar120) != dVar18
          )) || (dVar18 < (double)CONCAT44((uint)((ulonglong)local_1d8 >> 0x20) & uVar76,
                                           SUB84(local_1d8,0) & uVar58))) {
LAB_144371fbc:
        FMath::MatrixInverse(&local_168,(TMatrix<double> *)local_1e8);
        uVar78 = local_168.M[0][2]._0_4_;
        uVar96 = local_168.M[0][2]._4_4_;
        uVar97 = local_168.M[0][3]._0_4_;
        uVar98 = local_168.M[0][3]._4_4_;
        uVar121 = local_168.M[2][2]._0_4_;
        uVar123 = local_168.M[2][2]._4_4_;
        uVar124 = local_168.M[2][3]._0_4_;
        uVar125 = local_168.M[2][3]._4_4_;
        uVar134 = local_168.M[3][2]._0_4_;
        uVar136 = local_168.M[3][2]._4_4_;
        uVar137 = local_168.M[3][3]._0_4_;
        uVar138 = local_168.M[3][3]._4_4_;
        dVar118 = local_168.M[0][0];
        dVar99 = local_168.M[0][1];
        dVar104 = local_168.M[1][0];
        dVar102 = local_168.M[1][1];
        dVar88 = local_168.M[1][2];
        dVar108 = local_168.M[1][3];
        dVar133 = local_168.M[2][0];
        dVar89 = local_168.M[2][1];
        dVar95 = local_168.M[3][0];
        dVar103 = local_168.M[3][1];
      }
      else if ((((dVar18 < (double)CONCAT44((uint)((ulonglong)local_1c8 >> 0x20) & uVar76,
                                            SUB84(local_1c8,0) & uVar58)) ||
                (dVar18 < (double)CONCAT44((uint)((ulonglong)dStack_1c0 >> 0x20) & uVar76,
                                           SUB84(dStack_1c0,0) & uVar58))) ||
               ((dVar18 < (double)CONCAT44(uVar119 & uVar76,uVar74 & uVar58) ||
                ((dVar18 < (double)CONCAT44((uint)((ulonglong)dVar118 >> 0x20) & uVar76,
                                            SUB84(dVar118,0) & uVar58) ||
                 (uVar139 = uVar139 & uVar58, uVar83 = uVar83 & uVar76,
                 dVar18 <= (double)CONCAT44(uVar83,uVar139) &&
                 (double)CONCAT44(uVar83,uVar139) != dVar18)))))) ||
              (uVar139 = SUB84(local_198,0) & uVar58,
              uVar83 = (uint)((ulonglong)local_198 >> 0x20) & uVar76,
              uVar78 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_,
              uVar96 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_,
              uVar97 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_,
              uVar98 = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_,
              uVar121 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_,
              uVar123 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
              uVar124 = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_,
              uVar125 = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
              uVar134 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_,
              uVar136 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
              uVar137 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_,
              uVar138 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
              dVar118 = UE::Math::TMatrix<double>::Identity.M[0][0],
              dVar99 = UE::Math::TMatrix<double>::Identity.M[0][1],
              dVar104 = UE::Math::TMatrix<double>::Identity.M[1][0],
              dVar102 = UE::Math::TMatrix<double>::Identity.M[1][1],
              dVar88 = UE::Math::TMatrix<double>::Identity.M[1][2],
              dVar108 = UE::Math::TMatrix<double>::Identity.M[1][3],
              dVar133 = UE::Math::TMatrix<double>::Identity.M[2][0],
              dVar89 = UE::Math::TMatrix<double>::Identity.M[2][1],
              dVar95 = UE::Math::TMatrix<double>::Identity.M[3][0],
              dVar103 = UE::Math::TMatrix<double>::Identity.M[3][1],
              dVar18 <= (double)CONCAT44(uVar83,uVar139) &&
              (double)CONCAT44(uVar83,uVar139) != dVar18)) goto LAB_144371fbc;
      local_898.M[2][0] = (double)CONCAT44(uVar96,uVar78);
      local_898.M[2][2] = (double)CONCAT44(uVar123,uVar121);
      local_898.M[2][3] = (double)CONCAT44(uVar136,uVar134);
      local_898.M[3][0] = (double)CONCAT44(uVar98,uVar97);
      local_898.M[3][2] = (double)CONCAT44(uVar125,uVar124);
      local_898.M[3][3] = (double)CONCAT44(uVar138,uVar137);
      local_898.M[0][0] = dVar118;
      local_898.M[0][1] = dVar104;
      local_898.M[0][2] = dVar133;
      local_898.M[0][3] = dVar95;
      local_898.M[1][0] = dVar99;
      local_898.M[1][1] = dVar102;
      local_898.M[1][2] = dVar89;
      local_898.M[1][3] = dVar103;
      local_898.M[2][1] = dVar88;
      local_898.M[3][1] = dVar108;
      local_568 = dVar118;
      dStack_560 = dVar99;
      local_558 = uVar78;
      uStack_554 = uVar96;
      uStack_550 = uVar97;
      uStack_54c = uVar98;
      local_548 = dVar104;
      dStack_540 = dVar102;
      local_538 = dVar88;
      dStack_530 = dVar108;
      local_528 = dVar133;
      dStack_520 = dVar89;
      local_518 = uVar121;
      uStack_514 = uVar123;
      uStack_510 = uVar124;
      uStack_50c = uVar125;
      local_508 = dVar95;
      dStack_500 = dVar103;
      local_4f8 = uVar134;
      uStack_4f4 = uVar136;
      uStack_4f0 = uVar137;
      uStack_4ec = uVar138;
      UE::Math::TMatrix<double>::RemoveScaling(&local_898,dVar18);
      auVar113 = *(undefined1 (*) [16])(pTVar42->Scale3D).XY.m128d_f64;
      auVar12._4_8_ = extraout_XMM0_Qb;
      auVar12._0_4_ = auVar113._4_4_;
      auVar92._0_8_ = auVar12._0_8_ << 0x20;
      auVar92._8_4_ = auVar113._8_4_;
      auVar92._12_4_ = auVar113._12_4_;
      bVar25 = auVar92._8_8_ * auVar113._0_8_ * (pTVar42->Scale3D).ZW.m128d_f64[0] < 0.0;
      fVar135 = __real_3f800000;
      if (bVar25) {
        fVar135 = __real_bf800000;
      }
      local_998._8_8_ = local_2d8 + 0x10;
      local_998._0_8_ = 0x100000000;
      local_988._0_12_ = ZEXT412(0xffffffff);
      if (local_2b0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_998);
      }
      iVar57 = local_2b0;
      auVar113 = local_988;
      local_678 = (longlong *)local_2d8;
      local_9c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10);
      bVar56 = (byte)local_2b0 & 0x1f;
      local_9a0 = local_2d8._8_4_ - local_2a4;
      local_9c8._padding_ = CONCAT44(1 << bVar56,local_2b0 >> 5);
      uStack_9a8 = local_988._8_8_;
      local_9c8.CurrentBitIndex = local_2b0;
      local_9c8.UnvisitedBitMask = -1 << bVar56;
      local_9c8._28_4_ = local_988._4_4_;
      local_9c8._24_8_ = CONCAT44(local_9c8._28_4_,local_2b0) & 0xffffffffffffffe0;
      TStack_670._padding_ = local_998._0_8_;
      uStack_650 = CONCAT44(uStack_99c,local_9a0);
      TStack_670.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_998._8_8_;
      TStack_670.UnvisitedBitMask = local_988._0_4_;
      TStack_670.CurrentBitIndex = local_988._4_4_;
      TStack_670._24_8_ = local_988._8_8_;
      local_988 = auVar113;
      if ((local_2b0 < 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar27)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (iVar57 != local_2b0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9c8);
      }
      pTVar23 = local_9c8.Array;
      local_3c0 = local_9c8._padding_;
      pTStack_3b8 = local_9c8.Array;
      local_3b0 = local_9c8.UnvisitedBitMask;
      iStack_3ac = local_9c8.CurrentBitIndex;
      uVar3 = _local_3b0;
      uStack_3a8 = local_9c8._24_8_;
      iStack_3ac = local_9c8.CurrentBitIndex;
      iVar57 = iStack_3ac;
      _local_3b0 = uVar3;
      while( true ) {
        plVar67 = local_678;
        if ((int)local_678[1] - *(int *)((longlong)local_678 + 0x34) != (int)uStack_650) {
          local_b01 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,FVertexInstanceID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b01);
        }
        if (((TStack_670.CurrentBitIndex == iVar57) && (TStack_670.Array == pTVar23)) &&
           (plVar67 == (longlong *)local_2d8)) break;
        iVar81 = *(int *)(*plVar67 + 4 + (longlong)TStack_670.CurrentBitIndex * 0x10);
        pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(local_9e8,0)
        ;
        pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar40,iVar81)
        ;
        dVar104 = (double)(pTVar41->field0_0x0)._s_0.Z;
        dVar99 = (double)(pTVar41->field0_0x0)._s_0.X;
        dVar118 = (double)(pTVar41->field0_0x0)._s_0.Y;
        auVar93._8_4_ = SUB84(dVar99,0);
        auVar93._0_8_ = dVar99;
        auVar93._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
        auVar131._8_4_ = SUB84(dVar118,0);
        auVar131._0_8_ = dVar118;
        auVar131._12_4_ = (int)((ulonglong)dVar118 >> 0x20);
        dVar102 = dVar118 * local_898.M[1][0] + dVar99 * local_898.M[0][0] +
                  dVar104 * local_898.M[2][0] + local_898.M[3][0] * 0.0;
        dVar88 = auVar131._8_8_ * local_898.M[1][1] + auVar93._8_8_ * local_898.M[0][1] +
                 dVar104 * local_898.M[2][1] + local_898.M[3][1] * 0.0;
        dVar104 = dVar118 * local_898.M[1][2] + dVar99 * local_898.M[0][2] +
                  dVar104 * local_898.M[2][2] + local_898.M[3][2] * 0.0;
        auVar13._4_8_ = dVar99 * local_898.M[0][3];
        auVar13._0_4_ = (int)((ulonglong)dVar102 >> 0x20);
        auVar115._0_8_ = auVar13._0_8_ << 0x20;
        auVar115._8_4_ = SUB84(dVar88,0);
        auVar115._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
        dVar118 = auVar115._8_8_;
        dVar99 = dVar118 * dVar118 + dVar102 * dVar102 + dVar104 * dVar104;
        if (dVar99 <= dVar18) {
          dVar118 = 0.0;
          dVar104 = 0.0;
          dVar102 = 0.0;
        }
        else {
          local_590 = dVar17 / SQRT(dVar99);
          dVar118 = local_590 * dVar118;
          dVar104 = local_590 * dVar104;
          dVar102 = local_590 * dVar102;
        }
        (pTVar41->field0_0x0)._s_0.X = (float)dVar102;
        (pTVar41->field0_0x0)._s_0.Y = (float)dVar118;
        (pTVar41->field0_0x0)._s_0.Z = (float)dVar104;
        pTVar40 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(local_9e0,0)
        ;
        pTVar41 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar40,iVar81)
        ;
        dVar104 = (double)(pTVar41->field0_0x0)._s_0.Z;
        dVar99 = (double)(pTVar41->field0_0x0)._s_0.Y;
        dVar118 = (double)(pTVar41->field0_0x0)._s_0.X;
        auVar94._8_4_ = SUB84(dVar118,0);
        auVar94._0_8_ = dVar118;
        auVar94._12_4_ = (int)((ulonglong)dVar118 >> 0x20);
        auVar132._8_4_ = SUB84(dVar99,0);
        auVar132._0_8_ = dVar99;
        auVar132._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
        dVar102 = dVar99 * local_898.M[1][0] + dVar118 * local_898.M[0][0] +
                  dVar104 * local_898.M[2][0] + local_898.M[3][0] * 0.0;
        dVar88 = auVar132._8_8_ * local_898.M[1][1] + auVar94._8_8_ * local_898.M[0][1] +
                 dVar104 * local_898.M[2][1] + local_898.M[3][1] * 0.0;
        dVar99 = dVar99 * local_898.M[1][2] + dVar118 * local_898.M[0][2] +
                 dVar104 * local_898.M[2][2] + local_898.M[3][2] * 0.0;
        auVar14._4_8_ = dVar118 * local_898.M[0][3];
        auVar14._0_4_ = (int)((ulonglong)dVar102 >> 0x20);
        auVar116._0_8_ = auVar14._0_8_ << 0x20;
        auVar116._8_4_ = SUB84(dVar88,0);
        auVar116._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
        dVar118 = auVar116._8_8_;
        dVar104 = dVar118 * dVar118 + dVar102 * dVar102 + dVar99 * dVar99;
        if (dVar104 <= dVar18) {
          dVar118 = 0.0;
          dVar99 = 0.0;
          dVar102 = 0.0;
        }
        else {
          local_588 = dVar17 / SQRT(dVar104);
          dVar118 = local_588 * dVar118;
          dVar99 = local_588 * dVar99;
          dVar102 = local_588 * dVar102;
        }
        (pTVar41->field0_0x0)._s_0.X = (float)dVar102;
        (pTVar41->field0_0x0)._s_0.Y = (float)dVar118;
        (pTVar41->field0_0x0)._s_0.Z = (float)dVar99;
        pTVar46 = TMeshAttributeArraySet<float>::GetArrayForChannel(local_9d8,0);
        pfVar47 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar46,iVar81);
        *pfVar47 = fVar135 * *pfVar47;
        TStack_670.UnvisitedBitMask = TStack_670.UnvisitedBitMask & ~TStack_670._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_670);
      }
    }
    local_aa0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_aa0.ArrayNum = 0;
    local_aa0.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,8,&local_aa0.AllocatorInstance,0,&local_aa0.ArrayMax);
    pFVar72 = local_ae8;
    FVar51 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(local_ae8->PolygonElements,0);
    uStack_a24 = 1;
    local_a28 = 0;
    uVar139 = *(int *)((longlong)FVar51 + 0x18);
    uStack_a14 = 0;
    iStack_a10 = 0;
    if (uVar139 != 0) {
      FVar77 = FVar51;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar51 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar77 = *(ForElementType<unsigned_int> *)((longlong)FVar51 + 0x10);
      }
      uVar83 = *(uint *)FVar77;
      while (uVar83 == 0) {
        iStack_a10 = iStack_a10 + 0x20;
        lVar62 = (longlong)local_a28;
        local_a28 = local_a28 + 1;
        if ((int)((uVar139 - 1) + ((int)(uVar139 - 1) >> 0x1f & 0x1fU)) >> 5 < local_a28)
        goto LAB_14437268e;
        uVar83 = ((uint *)((longlong)FVar77 + 4))[lVar62];
      }
      uStack_a24 = -uVar83 & uVar83;
      uVar84 = (ulonglong)uStack_a24 * 2 + 1;
      lVar62 = 0x3f;
      if (uVar84 != 0) {
        for (; uVar84 >> lVar62 == 0; lVar62 = lVar62 + -1) {
        }
      }
      local_7d8 = (int)lVar62;
      uStack_a14 = local_7d8 + -1 + iStack_a10;
      if ((int)uVar139 < (int)uStack_a14) {
LAB_14437268e:
        uStack_a14 = uVar139;
      }
    }
    local_a18 = 0xffffffff;
    local_720._padding_ = CONCAT44(uStack_a24,local_a28);
    local_720.CurrentBitIndex = uStack_a14;
    local_720.UnvisitedBitMask = 0xffffffff;
    local_720._28_4_ = uStack_a0c;
    local_720.BaseBitIndex = iStack_a10;
    bVar56 = (byte)uVar139 & 0x1f;
    iVar57 = (int)uVar139 >> 5;
    uStack_a74 = 1 << bVar56;
    uVar83 = -1 << bVar56;
    uVar74 = uVar139 & 0xffffffe0;
    local_a78 = iVar57;
    FStack_a70 = FVar51;
    local_a68 = uVar83;
    uStack_a64 = uVar139;
    uStack_a60 = uVar74;
    FStack_a20 = FVar51;
    local_720.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar51;
    if (((int)uVar139 < 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar27)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar119 = *(uint *)((longlong)FVar51 + 0x18);
    if (uVar139 != uVar119) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar51 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar51 = *(ForElementType<unsigned_int> *)((longlong)FVar51 + 0x10);
      }
      uVar83 = uVar83 & *(uint *)((longlong)FVar51 + (longlong)iVar57 * 4);
      while (uVar83 == 0) {
        uStack_a60 = uVar74 + 0x20;
        local_a78 = iVar57 + 1;
        if ((int)((uVar119 - 1) + ((int)(uVar119 - 1) >> 0x1f & 0x1fU)) >> 5 < local_a78)
        goto LAB_14437278b;
        uVar83 = *(uint *)((longlong)FVar51 + 4 + (longlong)iVar57 * 4);
        local_a68 = 0xffffffff;
        iVar57 = local_a78;
        uVar74 = uStack_a60;
      }
      uStack_a74 = -uVar83 & uVar83;
      uVar84 = (ulonglong)uStack_a74 * 2 + 1;
      lVar62 = 0x3f;
      if (uVar84 != 0) {
        for (; uVar84 >> lVar62 == 0; lVar62 = lVar62 + -1) {
        }
      }
      local_7d4 = (int)lVar62;
      uStack_a64 = local_7d4 + -1 + uVar74;
      if ((int)uVar119 < (int)uStack_a64) {
LAB_14437278b:
        uStack_a64 = uVar119;
      }
    }
    local_408 = CONCAT44(uStack_a64,local_a68);
    uStack_400 = CONCAT44(uStack_a5c,uStack_a60);
    local_418 = CONCAT44(uStack_a74,local_a78);
    local_a80 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(ulonglong)uStack_a64;
    FStack_410 = FStack_a70;
    pTVar73 = local_ac8;
    while( true ) {
      if (((FPolygonID)local_720.CurrentBitIndex == SUB84(local_a80,0)) &&
         ((ForElementType<unsigned_int>)local_720.Array == FStack_410)) break;
      FVar79 = (FPolygonID)0xffffffff;
      if (local_720.CurrentBitIndex < *(int *)((longlong)local_720.Array + 0x18)) {
        FVar79 = (FPolygonID)local_720.CurrentBitIndex;
      }
      FMeshDescription::GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>
                (pFVar72,FVar79,&local_aa0);
      if (local_afc == (FPolygonGroupID)0xffffffff) {
        pFVar52 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                            (&pFVar72->PolygonPolygonGroups,(int)FVar79);
        pFVar69 = (FPolygonGroupID *)0x0;
        if (local_238.Elements._8_4_ != local_238.Elements._52_4_) {
          FVar64 = (ForElementType<FSetElementId>)&local_238.Hash;
          if (local_238.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar64 = local_238.Hash.SecondaryData;
          }
          FVar7 = *(FPolygonGroupID *)
                   ((longlong)FVar64 + (ulonglong)(local_238.HashSize - 1U & (uint)*pFVar52) * 4);
          while (pFVar69 = (FPolygonGroupID *)0x0, FVar7 != (FPolygonGroupID)0xffffffff) {
            pFVar69 = (FPolygonGroupID *)((longlong)(int)FVar7 * 0x10 + local_238.Elements._0_8_);
            if (*pFVar69 == *pFVar52) {
              if (pFVar69 != (FPolygonGroupID *)0x0) goto LAB_1443728a3;
              break;
            }
            FVar7 = pFVar69[2];
          }
        }
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar27) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_1443728a3:
        pFVar69 = pFVar69 + 1;
      }
      else {
        pFVar69 = &local_afc;
      }
      FVar7 = *pFVar69;
      local_2f8.SecondaryData = (ForElementType<FVertexInstanceID>)0x0;
      local_2e0 = 0;
      local_2dc = 4;
      iVar57 = local_aa0.ArrayNum;
      if (bVar25) {
        uVar139 = local_aa0.ArrayNum - 1;
        if (-1 < (int)uVar139) {
          lVar62 = (longlong)(int)uVar139 * 4;
          do {
            uVar83 = 0;
            if ((int)uVar139 < local_aa0.ArrayNum) {
              uVar83 = ~uVar139 >> 0x1f;
            }
            if ((uVar83 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            puVar70 = (uint *)0x0;
            if (local_2d8._8_4_ != local_2a4) {
              FVar64 = (ForElementType<FSetElementId>)local_2a0;
              if (local_298 != (ForElementType<FSetElementId>)0x0) {
                FVar64 = local_298;
              }
              uVar83 = *(uint *)((longlong)FVar64 +
                                (ulonglong)
                                (local_290 - 1U &
                                *(uint *)(local_aa0.AllocatorInstance.Data + lVar62)) * 4);
              while (puVar70 = (uint *)0x0, uVar83 != 0xffffffff) {
                puVar70 = (uint *)((longlong)(int)uVar83 * 0x10 + local_2d8._0_8_);
                if (*puVar70 == *(uint *)(local_aa0.AllocatorInstance.Data + lVar62)) {
                  if (puVar70 != (uint *)0x0) goto LAB_1443729ce;
                  break;
                }
                uVar83 = puVar70[2];
              }
            }
            bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L"");
            if (bVar27) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
LAB_1443729ce:
            FVar71 = (ForElementType<FVertexInstanceID>)(puVar70 + 1);
            FVar53 = (ForElementType<FVertexInstanceID>)&local_2f8;
            if (local_2f8.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
              FVar53 = local_2f8.SecondaryData;
            }
            if ((ulonglong)FVar53 <= (ulonglong)FVar71) {
              FVar53 = (ForElementType<FVertexInstanceID>)&local_2f8;
              if (local_2f8.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
                FVar53 = local_2f8.SecondaryData;
              }
              if (((ulonglong)FVar71 < (ulonglong)((longlong)FVar53 + (longlong)local_2dc * 4)) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar27)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (local_2e0 == local_2dc) {
              local_2e0 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
                                    (0x404,&local_2f8,&local_2dc);
            }
            lVar61 = (longlong)local_2e0;
            FVar53 = (ForElementType<FVertexInstanceID>)&local_2f8;
            if (local_2f8.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
              FVar53 = local_2f8.SecondaryData;
            }
            lVar62 = lVar62 + -4;
            uVar139 = uVar139 - 1;
            local_2e0 = local_2e0 + 1;
            *(uint *)((longlong)FVar53 + lVar61 * 4) = *(uint *)FVar71;
            pTVar73 = local_ac8;
            pFVar72 = local_ae8;
            if ((int)uVar139 < 0) break;
          } while( true );
        }
      }
      else {
        uVar84 = (ulonglong)local_aa0.ArrayNum;
        pFVar66 = local_aa0.AllocatorInstance.Data + uVar84 * 4;
        FVar82.Data = local_aa0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar84 != iVar57) {
            local_b00[0] = 0;
            `TCheckedPointerIterator<FVertexInstanceID,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_b00);
          }
          pTVar73 = local_ac8;
          pFVar72 = local_ae8;
          if (FVar82.Data == pFVar66) break;
          puVar70 = (uint *)0x0;
          if (local_2d8._8_4_ != local_2a4) {
            FVar64 = (ForElementType<FSetElementId>)local_2a0;
            if (local_298 != (ForElementType<FSetElementId>)0x0) {
              FVar64 = local_298;
            }
            uVar139 = *(uint *)((longlong)FVar64 +
                               (ulonglong)(local_290 - 1U & *(uint *)FVar82.Data) * 4);
            while (puVar70 = (uint *)0x0, uVar139 != 0xffffffff) {
              puVar70 = (uint *)((longlong)(int)uVar139 * 0x10 + local_2d8._0_8_);
              if (*puVar70 == *(uint *)FVar82.Data) {
                if (puVar70 != (uint *)0x0) goto LAB_144372bcb;
                break;
              }
              uVar139 = puVar70[2];
            }
          }
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar27) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
LAB_144372bcb:
          FVar71 = (ForElementType<FVertexInstanceID>)(puVar70 + 1);
          FVar53 = (ForElementType<FVertexInstanceID>)&local_2f8;
          if (local_2f8.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
            FVar53 = local_2f8.SecondaryData;
          }
          if ((ulonglong)FVar53 <= (ulonglong)FVar71) {
            FVar53 = (ForElementType<FVertexInstanceID>)&local_2f8;
            if (local_2f8.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
              FVar53 = local_2f8.SecondaryData;
            }
            if (((ulonglong)FVar71 < (ulonglong)((longlong)FVar53 + (longlong)local_2dc * 4)) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar27)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          if (local_2e0 == local_2dc) {
            local_2e0 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
                                  (0x404,&local_2f8,&local_2dc);
          }
          lVar62 = (longlong)local_2e0;
          FVar53 = (ForElementType<FVertexInstanceID>)&local_2f8;
          if (local_2f8.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
            FVar53 = local_2f8.SecondaryData;
          }
          FVar82.Data = FVar82.Data + 4;
          local_2e0 = local_2e0 + 1;
          *(uint *)((longlong)FVar53 + lVar62 * 4) = *(uint *)FVar71;
          uVar84 = local_aa0._8_8_ & 0xffffffff;
        }
      }
      iVar57 = local_2e0;
      local_608 = (ForElementType<FVertexInstanceID>)&local_2f8;
      if (local_2f8.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
        local_608 = local_2f8.SecondaryData;
      }
      if ((local_2e0 < 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar27)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar68 = local_af8;
      iStack_600 = iVar57;
      pFVar31 = FMeshElementChannels::Get(local_af8->PolygonElements,0);
      FVar30 = (FPolygonID)FMeshElementContainer::Add(pFVar31);
      local_578._12_4_ = uStack_5fc;
      local_578.ArrayNum = iStack_600;
      local_578.DataPtr = (FVertexInstanceID *)local_608;
      FMeshDescription::CreatePolygon_Internal
                (pFVar68,FVar30,FVar7,&local_578,(TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0)
      ;
      if (local_aa8 != (TMeshAttributeArraySet<FName> *)0x0) {
        pTVar54 = TMeshAttributeArraySet<FName>::GetArrayForChannel(local_aa8,0);
        pFVar55 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar54,(int)FVar79);
        FVar10 = *pFVar55;
        pTVar54 = TMeshAttributeArraySet<FName>::GetArrayForChannel(pTVar73,0);
        pFVar55 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar54,(int)FVar30);
        *pFVar55 = FVar10;
      }
      if (local_2f8.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
        FMemory::Free((void *)local_2f8.SecondaryData);
      }
      local_720.UnvisitedBitMask = local_720.UnvisitedBitMask & ~local_720._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_720);
    }
    if (local_aa0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa0.AllocatorInstance.Data);
    }
    pFVar66 = local_9d0 + 8;
    uVar84 = (ulonglong)local_a4c;
    pFVar72 = local_af8;
    pTVar73 = local_ac8;
  } while( true );
}

// ApplyTransform @ 144372f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStaticMeshOperations::ApplyTransform
          (FMeshDescription *param_1,TMatrix<double> *param_2,bool param_3)

{
  double dVar1;
  ForElementType<unsigned_int> FVar2;
  ForElementType<unsigned_int> FVar3;
  ForElementType<unsigned_int> FVar4;
  ForElementType<unsigned_int> FVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  TElementIDs TVar13;
  TMeshAttributeArraySet<float> *this;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  FMeshElementContainer *pFVar15;
  TTuple<FName,FAttributesSetEntry> *pTVar16;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar17;
  TVector<float> *pTVar18;
  TMeshAttributeArrayBase<float> *pTVar19;
  float *pfVar20;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar21;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar22;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar23;
  int iVar24;
  int iVar25;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar26;
  longlong lVar27;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auStack_358 [32];
  char local_338;
  char local_337;
  char local_336;
  TElementIDs local_330;
  TElementIDs local_328;
  TMeshAttributeArraySet<float> *local_320;
  FMeshDescription *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e8;
  TMatrix<double> local_2c8;
  undefined8 local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  ForElementType<unsigned_int> local_208;
  double dStack_200;
  ForElementType<unsigned_int> local_1f8;
  double dStack_1f0;
  ForElementType<unsigned_int> local_1e8;
  double dStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  int iStack_1cc;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  ForElementType<unsigned_int> local_1a8;
  double dStack_1a0;
  ForElementType<unsigned_int> local_198;
  double dStack_190;
  TConstIterator local_188;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  double local_128;
  double dStack_120;
  ForElementType<unsigned_int> local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ForElementType<unsigned_int> local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_337 = param_3;
  local_330.Array = (TBitArray<FDefaultBitArrayAllocator> *)param_2;
  local_310 = param_1;
  if (CpuChannel->Enabled < 0) {
    local_338 = '\0';
  }
  else {
    local_338 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2681,"FStaticMeshOperations::ApplyTransform",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0xa79);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2681);
  }
  pFVar15 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::Vertex::Position);
  pTVar26 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  pTVar23 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar23 = pTVar26;
  }
  if (((pTVar23 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar23 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar23->_padding_,
      (int)pTVar23->_padding_ != 1)) || (*(int *)((longlong)&pTVar23->_padding_ + 4) != 1)) {
    pTVar23 = pTVar26;
  }
  pFVar15 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::Normal);
  pTVar22 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar22 = pTVar26;
  }
  if (((pTVar22 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar22 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar22->_padding_,
      (int)pTVar22->_padding_ != 1)) || (*(int *)((longlong)&pTVar22->_padding_ + 4) != 1)) {
    pTVar22 = pTVar26;
  }
  pFVar15 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::Tangent);
  pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar28 = pTVar26;
  }
  if (((pTVar28 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar28->_padding_,
      (int)pTVar28->_padding_ != 1)) || (*(int *)((longlong)&pTVar28->_padding_ + 4) != 1)) {
    pTVar28 = pTVar26;
  }
  pFVar15 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  pTVar21 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar21 = pTVar26;
  }
  if (((pTVar21 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (local_320 = (TMeshAttributeArraySet<float> *)pTVar21->_padding_,
      (int)local_320->_padding_ != 3)) || (*(int *)((longlong)&local_320->_padding_ + 4) != 1)) {
    local_320 = (TMeshAttributeArraySet<float> *)0x0;
  }
  local_328.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_328,(TConstIterator *)&local_308);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_328,(TConstIterator *)&local_2e8);
  iVar25 = local_2e8.CurrentBitIndex;
  pTVar14 = local_2e8.Array;
  TVar13.Array = local_330.Array;
  dVar11 = __real_3ff0000000000000;
  while( true ) {
    if ((local_308.CurrentBitIndex == iVar25) &&
       ((TBitArray<FDefaultBitArrayAllocator> *)
        CONCAT44(local_308.Array._4_4_,local_308.Array._0_4_) == pTVar14)) break;
    iVar24 = -1;
    if (local_308.CurrentBitIndex <
        ((TBitArray<FDefaultBitArrayAllocator> *)
        CONCAT44(local_308.Array._4_4_,local_308.Array._0_4_))->NumBits) {
      iVar24 = local_308.CurrentBitIndex;
    }
    pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar23,0);
    pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,iVar24);
    FVar2 = ((TVar13.Array)->AllocatorInstance).SecondaryData;
    dVar42 = (double)(pTVar18->field0_0x0)._s_0.X;
    dVar33 = *(double *)((TVar13.Array)->AllocatorInstance).InlineData;
    dVar38 = *(double *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 8);
    dVar32 = (double)(pTVar18->field0_0x0)._s_0.Y;
    dVar40 = (double)(pTVar18->field0_0x0)._s_0.Z;
    dVar1 = *(double *)TVar13.Array[1].AllocatorInstance.InlineData;
    dVar39 = *(double *)((longlong)TVar13.Array[1].AllocatorInstance.InlineData + 8);
    auVar29._8_4_ = SUB84(dVar32,0);
    auVar29._0_8_ = dVar32;
    auVar29._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    auVar34._8_4_ = SUB84(dVar40,0);
    auVar34._0_8_ = dVar40;
    auVar34._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    dVar41 = *(double *)TVar13.Array[2].AllocatorInstance.InlineData;
    dVar6 = *(double *)((longlong)TVar13.Array[2].AllocatorInstance.InlineData + 8);
    dVar7 = *(double *)TVar13.Array[3].AllocatorInstance.InlineData;
    dVar10 = *(double *)((longlong)TVar13.Array[3].AllocatorInstance.InlineData + 8);
    auVar35._8_4_ = SUB84(dVar11,0);
    auVar35._0_8_ = dVar11;
    auVar35._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    FVar3 = TVar13.Array[1].AllocatorInstance.SecondaryData;
    FVar4 = TVar13.Array[2].AllocatorInstance.SecondaryData;
    FVar5 = TVar13.Array[3].AllocatorInstance.SecondaryData;
    pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar23,0);
    pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,iVar24);
    (pTVar18->field0_0x0)._s_0.X =
         (float)(dVar42 * dVar33 + dVar32 * dVar1 + dVar40 * dVar41 + dVar11 * dVar7);
    (pTVar18->field0_0x0)._s_0.Y =
         (float)(dVar42 * dVar38 + auVar29._8_8_ * dVar39 + auVar34._8_8_ * dVar6 +
                auVar35._8_8_ * dVar10);
    (pTVar18->field0_0x0)._s_0.Z =
         (float)((double)FVar2 * dVar42 + (double)FVar3 * dVar32 + (double)FVar4 * dVar40 +
                (double)FVar5 * dVar11);
    local_308.UnvisitedBitMask = local_308.UnvisitedBitMask & ~local_308._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_308);
  }
  dVar33 = *(double *)&TVar13.Array[3].NumBits;
  dVar38 = *(double *)&(TVar13.Array)->NumBits;
  dVar1 = *(double *)&TVar13.Array[1].NumBits;
  dVar39 = *(double *)&TVar13.Array[2].NumBits;
  FVar2 = TVar13.Array[2].AllocatorInstance.SecondaryData;
  FVar3 = TVar13.Array[3].AllocatorInstance.SecondaryData;
  FVar4 = ((TVar13.Array)->AllocatorInstance).SecondaryData;
  FVar5 = TVar13.Array[1].AllocatorInstance.SecondaryData;
  dVar41 = *(double *)TVar13.Array[1].AllocatorInstance.InlineData;
  dVar42 = (double)FVar4 * dVar1 - dVar38 * (double)FVar5;
  dVar32 = dVar39 * (double)FVar4 - (double)FVar2 * dVar38;
  dVar6 = *(double *)((TVar13.Array)->AllocatorInstance).InlineData;
  dVar40 = dVar39 * (double)FVar5 - (double)FVar2 * dVar1;
  dVar7 = *(double *)((longlong)TVar13.Array[3].AllocatorInstance.InlineData + 8);
  dVar10 = dVar33 * (double)FVar4 - (double)FVar3 * dVar38;
  dVar38 = *(double *)TVar13.Array[2].AllocatorInstance.InlineData;
  dVar43 = dVar33 * (double)FVar2 - (double)FVar3 * dVar39;
  dVar39 = dVar33 * (double)FVar5 - (double)FVar3 * dVar1;
  dVar33 = *(double *)((longlong)TVar13.Array[1].AllocatorInstance.InlineData + 8);
  dVar1 = *(double *)((longlong)TVar13.Array[2].AllocatorInstance.InlineData + 8);
  local_336 = ((((dVar43 * *(double *)((longlong)TVar13.Array[1].AllocatorInstance.InlineData + 8) -
                 dVar39 * *(double *)((longlong)TVar13.Array[2].AllocatorInstance.InlineData + 8)) +
                dVar40 * dVar7) * dVar6 -
               ((dVar43 * *(double *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 8)
                - dVar10 * *(double *)((longlong)TVar13.Array[2].AllocatorInstance.InlineData + 8))
               + dVar32 * dVar7) * dVar41) +
              ((dVar39 * *(double *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 8) -
               dVar10 * dVar33) + dVar42 * dVar7) * dVar38) -
              ((dVar40 * *(double *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 8) -
               dVar32 * dVar33) + dVar42 * dVar1) *
              *(double *)TVar13.Array[3].AllocatorInstance.InlineData < 0.0;
  fVar48 = __real_3f800000;
  if ((bool)local_336) {
    fVar48 = __real_bf800000;
  }
  lVar27 = 0;
  if (local_337 == '\0') {
    local_2c8.M[0][2] = *(double *)&((TVar13.Array)->AllocatorInstance).SecondaryData;
    local_2c8.M[0][3] = *(double *)&(TVar13.Array)->NumBits;
    local_2c8.M[0][0] = *(double *)((TVar13.Array)->AllocatorInstance).InlineData;
    local_2c8.M[0][1] = *(double *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 8);
    local_2c8.M[1][2] = *(double *)&TVar13.Array[1].AllocatorInstance.SecondaryData;
    local_2c8.M[1][3] = *(double *)&TVar13.Array[1].NumBits;
    local_2c8.M[1][0] = *(double *)TVar13.Array[1].AllocatorInstance.InlineData;
    local_2c8.M[1][1] = *(double *)((longlong)TVar13.Array[1].AllocatorInstance.InlineData + 8);
    local_2c8.M[2][2] = *(double *)&TVar13.Array[2].AllocatorInstance.SecondaryData;
    local_2c8.M[2][3] = *(double *)&TVar13.Array[2].NumBits;
    local_2c8.M[2][0] = *(double *)TVar13.Array[2].AllocatorInstance.InlineData;
    local_2c8.M[2][1] = *(double *)((longlong)TVar13.Array[2].AllocatorInstance.InlineData + 8);
    local_2c8.M[3][2] = *(double *)&TVar13.Array[3].AllocatorInstance.SecondaryData;
    local_2c8.M[3][3] = *(double *)&TVar13.Array[3].NumBits;
    local_2c8.M[3][0] = *(double *)TVar13.Array[3].AllocatorInstance.InlineData;
    local_2c8.M[3][1] = *(double *)((longlong)TVar13.Array[3].AllocatorInstance.InlineData + 8);
    UE::Math::TMatrix<double>::RemoveScaling(&local_2c8,__real_3e45798ee0000000);
    local_1c8 = local_2c8.M[2][0];
    dStack_1c0 = local_2c8.M[2][1];
    local_228 = local_2c8.M[2][0];
    dStack_220 = local_2c8.M[2][1];
    local_1a8 = (ForElementType<unsigned_int>)local_2c8.M[2][2];
    dStack_1a0 = local_2c8.M[2][3];
    local_1e8 = (ForElementType<unsigned_int>)local_2c8.M[2][2];
    dStack_1e0 = local_2c8.M[2][3];
    local_1b8 = local_2c8.M[3][0];
    dStack_1b0 = local_2c8.M[3][1];
    local_218 = local_2c8.M[3][0];
    dStack_210 = local_2c8.M[3][1];
    local_198 = (ForElementType<unsigned_int>)local_2c8.M[3][2];
    dStack_190 = local_2c8.M[3][3];
    local_1f8 = (ForElementType<unsigned_int>)local_2c8.M[0][2];
    dStack_1f0 = local_2c8.M[0][3];
    local_238 = local_2c8.M[1][0];
    dStack_230 = local_2c8.M[1][1];
    local_208 = (ForElementType<unsigned_int>)local_2c8.M[1][2];
    dStack_200 = local_2c8.M[1][3];
    local_1d8 = local_2c8.M[3][2]._0_4_;
    uStack_1d4 = local_2c8.M[3][2]._4_4_;
    uStack_1d0 = local_2c8.M[3][3]._0_4_;
    iStack_1cc = local_2c8.M[3][3]._4_4_;
    uVar44 = local_2c8.M[0][0]._0_4_;
    uVar45 = local_2c8.M[0][0]._4_4_;
    uVar46 = local_2c8.M[0][1]._0_4_;
    uVar47 = local_2c8.M[0][1]._4_4_;
    uVar49 = local_2c8.M[0][0]._0_4_;
    uVar50 = local_2c8.M[0][0]._4_4_;
    uVar51 = local_2c8.M[0][1]._0_4_;
    uVar52 = local_2c8.M[0][1]._4_4_;
    uVar53 = local_2c8.M[0][2]._0_4_;
    uVar54 = local_2c8.M[0][2]._4_4_;
    uVar55 = local_2c8.M[1][0]._0_4_;
    uVar56 = local_2c8.M[1][0]._4_4_;
    uVar57 = local_2c8.M[1][1]._0_4_;
    uVar58 = local_2c8.M[1][1]._4_4_;
    uVar59 = local_2c8.M[1][2]._0_4_;
    uVar60 = local_2c8.M[1][2]._4_4_;
  }
  else {
    FVar2 = TVar13.Array[2].AllocatorInstance.SecondaryData;
    dVar39 = *(double *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 8);
    local_2c8.M[0][3] = 0.0;
    local_2c8.M[1][3] = 0.0;
    local_2c8.M[2][3] = 0.0;
    local_2c8.M[0][0] = dVar33 * (double)FVar2 - dVar1 * (double)FVar5;
    local_2c8.M[0][1] = dVar38 * (double)FVar5 - dVar41 * (double)FVar2;
    local_2c8.M[0][2] = dVar41 * dVar1 - dVar38 * dVar33;
    local_2c8.M[1][0] = dVar1 * (double)FVar4 - dVar39 * (double)FVar2;
    local_2c8.M[1][1] = dVar6 * (double)FVar2 - dVar38 * (double)FVar4;
    local_2c8.M[1][2] = dVar38 * dVar39 - dVar6 * dVar1;
    local_2c8.M[2][0] = dVar39 * (double)FVar5 - dVar33 * (double)FVar4;
    local_2c8.M[3][2] = (double)___xmm_3ff00000000000000000000000000000;
    local_2c8.M[3][3] = _UNK_15061cbc8;
    local_2c8.M[3][0] = 0.0;
    local_2c8.M[3][1] = 0.0;
    local_2c8.M[2][1] = dVar41 * (double)FVar4 - dVar6 * (double)FVar5;
    dVar38 = (double)fVar48;
    local_2c8.M[2][2] = dVar6 * dVar33 - dVar41 * dVar39;
    do {
      dVar33 = *(double *)((longlong)local_2c8.M[0] + lVar27 + 8);
      dVar1 = *(double *)((longlong)local_2c8.M[0] + lVar27 + 0x10);
      dVar39 = *(double *)((longlong)local_2c8.M[0] + lVar27 + 0x18);
      *(double *)((longlong)&local_168 + lVar27) =
           *(double *)((longlong)local_2c8.M[0] + lVar27) * dVar38;
      *(double *)((longlong)&uStack_160 + lVar27) = dVar33 * dVar38;
      *(double *)((longlong)&local_158 + lVar27) = dVar1 * dVar38;
      *(double *)((longlong)&dStack_150 + lVar27) = dVar39 * dVar38;
      lVar27 = lVar27 + 0x20;
    } while (lVar27 < 0x80);
    local_1f8 = ((TVar13.Array)->AllocatorInstance).SecondaryData;
    dStack_1f0 = *(double *)&(TVar13.Array)->NumBits;
    local_238 = *(double *)TVar13.Array[1].AllocatorInstance.InlineData;
    dStack_230 = *(double *)((longlong)TVar13.Array[1].AllocatorInstance.InlineData + 8);
    local_208 = TVar13.Array[1].AllocatorInstance.SecondaryData;
    dStack_200 = *(double *)&TVar13.Array[1].NumBits;
    local_228 = *(double *)TVar13.Array[2].AllocatorInstance.InlineData;
    dStack_220 = *(double *)((longlong)TVar13.Array[2].AllocatorInstance.InlineData + 8);
    local_1c8 = local_128;
    dStack_1c0 = dStack_120;
    local_1e8 = TVar13.Array[2].AllocatorInstance.SecondaryData;
    dStack_1e0 = *(double *)&TVar13.Array[2].NumBits;
    local_1a8 = local_118;
    dStack_1a0 = dStack_110;
    local_218 = *(double *)TVar13.Array[3].AllocatorInstance.InlineData;
    dStack_210 = *(double *)((longlong)TVar13.Array[3].AllocatorInstance.InlineData + 8);
    local_1b8 = local_108;
    dStack_1b0 = dStack_100;
    local_198 = local_f8;
    dStack_190 = dStack_f0;
    local_1d8 = *(undefined4 *)&TVar13.Array[3].AllocatorInstance.SecondaryData;
    uStack_1d4 = *(undefined4 *)&TVar13.Array[3].AllocatorInstance.SecondaryData.field_0x4;
    uStack_1d0 = TVar13.Array[3].NumBits;
    iStack_1cc = TVar13.Array[3].MaxBits;
    uVar44 = *(undefined4 *)((TVar13.Array)->AllocatorInstance).InlineData;
    uVar45 = *(undefined4 *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 4);
    uVar46 = *(undefined4 *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 8);
    uVar47 = *(undefined4 *)((longlong)((TVar13.Array)->AllocatorInstance).InlineData + 0xc);
    uVar49 = (undefined4)local_168;
    uVar50 = local_168._4_4_;
    uVar51 = (undefined4)uStack_160;
    uVar52 = uStack_160._4_4_;
    uVar53 = (undefined4)local_158;
    uVar54 = local_158._4_4_;
    uVar55 = local_148;
    uVar56 = uStack_144;
    uVar57 = uStack_140;
    uVar58 = uStack_13c;
    uVar59 = local_138;
    uVar60 = uStack_134;
  }
  local_308._padding_._0_4_ = uVar44;
  local_308._padding_._4_4_ = uVar45;
  local_308.Array._0_4_ = uVar46;
  local_308.Array._4_4_ = uVar47;
  local_330.Array = &FMeshElementChannels::Get(local_310->VertexInstanceElements,0)->BitArray;
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
            (&local_330,(TConstIterator *)&local_2e8);
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_330,&local_188);
  this = local_320;
  cVar12 = local_338;
  local_330.Array = local_188.Iterator.Array;
  while ((local_2e8.CurrentBitIndex != local_188.Iterator.CurrentBitIndex ||
         (local_2e8.Array != local_330.Array))) {
    iVar25 = -1;
    if (local_2e8.CurrentBitIndex < (local_2e8.Array)->NumBits) {
      iVar25 = local_2e8.CurrentBitIndex;
    }
    pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar28,0);
    pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,iVar25);
    uVar8 = *(undefined8 *)&pTVar18->field0_0x0;
    fVar9 = (pTVar18->field0_0x0)._s_0.Z;
    pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar22,0);
    pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,iVar25);
    dVar39 = (double)(float)uVar8;
    local_248 = *(undefined8 *)&pTVar18->field0_0x0;
    dVar33 = (double)(float)((ulonglong)uVar8 >> 0x20);
    local_328.Array._0_4_ = (pTVar18->field0_0x0)._s_0.Z;
    dVar41 = (double)fVar9;
    auVar30._8_4_ = SUB84(dVar39,0);
    auVar30._0_8_ = dVar39;
    auVar30._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    auVar36._8_4_ = SUB84(dVar41,0);
    auVar36._0_8_ = dVar41;
    auVar36._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    dVar38 = dVar33 * local_238 + dVar39 * (double)CONCAT44(uVar45,uVar44) + dVar41 * local_228 +
             local_218 * 0.0;
    dVar1 = dVar33 * dStack_230 + auVar30._8_8_ * (double)CONCAT44(uVar47,uVar46) +
            auVar36._8_8_ * dStack_220 + dStack_210 * 0.0;
    dVar33 = dVar33 * (double)local_208 + dVar39 * (double)local_1f8 + dVar41 * (double)local_1e8 +
             (double)CONCAT44(uStack_1d4,local_1d8) * 0.0;
    dVar39 = dVar1 * dVar1 + dVar38 * dVar38 + dVar33 * dVar33;
    if (dVar39 <= __real_3e45798ee0000000) {
      dVar1 = 0.0;
      dVar33 = 0.0;
      dVar38 = 0.0;
    }
    else {
      dVar39 = dVar11 / SQRT(dVar39);
      dVar1 = dVar1 * dVar39;
      dVar33 = dVar33 * dVar39;
      dVar38 = dVar38 * dVar39;
    }
    pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar28,0);
    pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,iVar25);
    (pTVar18->field0_0x0)._s_0.X = (float)dVar38;
    (pTVar18->field0_0x0)._s_0.Y = (float)dVar1;
    (pTVar18->field0_0x0)._s_0.Z = (float)dVar33;
    dVar39 = (double)local_248._4_4_;
    dVar41 = (double)local_328.Array._0_4_;
    dVar33 = (double)(float)local_248;
    auVar37._8_4_ = SUB84(dVar41,0);
    auVar37._0_8_ = dVar41;
    auVar37._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    auVar31._8_4_ = SUB84(dVar33,0);
    auVar31._0_8_ = dVar33;
    auVar31._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    dVar38 = dVar39 * (double)CONCAT44(uVar56,uVar55) + dVar33 * (double)CONCAT44(uVar50,uVar49) +
             dVar41 * local_1c8 + local_1b8 * 0.0;
    dVar1 = dVar39 * (double)CONCAT44(uVar58,uVar57) +
            auVar31._8_8_ * (double)CONCAT44(uVar52,uVar51) + auVar37._8_8_ * dStack_1c0 +
            dStack_1b0 * 0.0;
    dVar33 = dVar39 * (double)CONCAT44(uVar60,uVar59) + dVar33 * (double)CONCAT44(uVar54,uVar53) +
             dVar41 * (double)local_1a8 + (double)local_198 * 0.0;
    dVar39 = dVar1 * dVar1 + dVar38 * dVar38 + dVar33 * dVar33;
    if (dVar39 <= __real_3e45798ee0000000) {
      dVar1 = 0.0;
      dVar33 = 0.0;
      dVar38 = 0.0;
    }
    else {
      dVar39 = dVar11 / SQRT(dVar39);
      dVar1 = dVar1 * dVar39;
      dVar33 = dVar33 * dVar39;
      dVar38 = dVar38 * dVar39;
    }
    pTVar17 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar22,0);
    pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar17,iVar25);
    (pTVar18->field0_0x0)._s_0.X = (float)dVar38;
    (pTVar18->field0_0x0)._s_0.Y = (float)dVar1;
    (pTVar18->field0_0x0)._s_0.Z = (float)dVar33;
    pTVar19 = TMeshAttributeArraySet<float>::GetArrayForChannel(this,0);
    pfVar20 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar19,iVar25);
    fVar9 = *pfVar20;
    pTVar19 = TMeshAttributeArraySet<float>::GetArrayForChannel(this,0);
    pfVar20 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar19,iVar25);
    *pfVar20 = fVar9 * fVar48;
    local_2e8.UnvisitedBitMask = local_2e8.UnvisitedBitMask & ~local_2e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e8);
    uVar44 = (undefined4)local_308._padding_;
    uVar45 = local_308._padding_._4_4_;
    uVar46 = local_308.Array._0_4_;
    uVar47 = local_308.Array._4_4_;
  }
  if (local_336 != '\0') {
    FMeshDescription::ReverseAllPolygonFacing(local_310);
  }
  if (cVar12 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyTransform @ 144373b40

void __cdecl
FStaticMeshOperations::ApplyTransform
          (FMeshDescription *param_1,TTransform<double> *param_2,bool param_3)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> local_88;
  
  pTVar1 = UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_88);
  ApplyTransform(param_1,pTVar1,param_3);
  return;
}

// BuildWeldedVertexIDRemap @ 144373b90

void __cdecl
FStaticMeshOperations::BuildWeldedVertexIDRemap
          (FMeshDescription *param_1,float param_2,
          TMap<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
          *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FVertexID FVar4;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  int iVar14;
  FVertexID FVar15;
  uint uVar16;
  FMeshElementContainer *pFVar17;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar18;
  longlong lVar19;
  FVertexID *pFVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 local_res8 [8];
  FIdentityFunctor local_res18;
  FVertexID local_res20 [2];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  int local_e8;
  FVertexID local_e4;
  longlong local_e0;
  TElementIDs local_d8;
  FVertexID *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  TConstIterator local_a0 [3];
  
  this = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(param_1->VertexPositions).ArrayPtr;
  pFVar17 = FMeshElementChannels::Get(param_1->VertexElements,0);
  uVar23 = (pFVar17->BitArray).NumBits - pFVar17->NumHoles;
  TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
             *)param_3,uVar23);
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (0 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar23,&local_f8,0,(int *)((longlong)&local_f0 + 4));
  }
  local_d8.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_d8,(TConstIterator *)&local_c8);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_d8,local_a0);
  fVar11 = __real_3ebd70a4;
  fVar10 = __real_3ea8f5c3;
  fVar9 = __real_3e99999a;
  while ((local_c8.CurrentBitIndex != local_a0[0].Iterator.CurrentBitIndex ||
         (local_c8.Array != local_a0[0].Iterator.Array))) {
    iVar24 = -1;
    if (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits) {
      iVar24 = local_c8.CurrentBitIndex;
    }
    this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
    pTVar18 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,iVar24);
    iVar14 = (int)local_f0;
    if ((int)local_f0 == local_f0._4_4_) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8,(int *)((longlong)&local_f0 + 4));
    }
    local_f0 = CONCAT44(local_f0._4_4_,iVar14 + 1);
    fVar1 = (pTVar18->field0_0x0)._s_0.Y;
    fVar2 = (pTVar18->field0_0x0)._s_0.X;
    fVar3 = (pTVar18->field0_0x0)._s_0.Z;
    lVar19 = (longlong)iVar14;
    *(int *)(local_f8.Data + lVar19 * 0x10 + 4) = iVar24;
    *(TVector<float> **)(local_f8.Data + lVar19 * 0x10 + 8) = pTVar18;
    *(float *)&local_f8.Data[lVar19 * 0x10].field_0x0 =
         fVar1 * fVar10 + fVar2 * fVar9 + fVar3 * fVar11;
    local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
  }
  local_res18 = SUB81(param_3,0);
  AlgoImpl::
  IntroSortInternal<MeshDescriptionOperationNamespace::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>_>
            ((FIndexAndZ *)local_f8.Data,(int)local_f0,local_res18,(FCompareIndexAndZ *)local_res8);
  uVar23 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar27 = 0;
  if (0 < (int)local_f0) {
    lVar19 = 0;
    local_e0 = 0;
    iVar24 = (int)local_f0;
    do {
      uVar26 = ~uVar27 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar27 < iVar24) {
        uVar25 = uVar26;
      }
      if (uVar25 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar24 = (int)local_f0;
      }
      FVar4 = *(FVertexID *)(local_f8.Data + lVar19 + 4);
      local_res20[0] = FVar4;
      if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
        puVar21 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar21 = *(undefined1 **)&param_3->field_0x40;
        }
        iVar14 = *(int *)(puVar21 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & (uint)FVar4) * 4
                         );
        if (iVar14 != -1) {
          do {
            if (*(FVertexID *)(*(longlong *)param_3 + (longlong)iVar14 * 0x10) == FVar4) {
              if (iVar14 != -1) goto LAB_144374100;
              break;
            }
            iVar14 = *(int *)(*(longlong *)param_3 + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
        puVar21 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar21 = *(undefined1 **)&param_3->field_0x40;
        }
        FVar15 = *(FVertexID *)
                  (puVar21 + (ulonglong)(*(int *)&param_3->field_0x48 - 1U & (uint)FVar4) * 4);
        if (FVar15 != (FVertexID)0xffffffff) {
          do {
            pFVar20 = (FVertexID *)((longlong)(int)FVar15 * 0x10 + *(longlong *)param_3);
            if (*pFVar20 == FVar4) {
              if (pFVar20 != (FVertexID *)0x0) goto LAB_144373ecc;
              break;
            }
            FVar15 = pFVar20[2];
          } while (FVar15 != (FVertexID)0xffffffff);
        }
      }
      local_d0 = local_res20;
      TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FVertexID_const_&>_>
                ((TSet<TTuple<FVertexID,FVertexID>,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>,FDefaultSetAllocator>
                  *)param_3,(uint)&local_e8,
                 (TKeyInitializer<FVertexID_const_&> *)(ulonglong)(uint)FVar4,(bool *)&local_d0);
      pFVar20 = (FVertexID *)((longlong)local_e8 * 0x10 + *(longlong *)param_3);
LAB_144373ecc:
      pFVar20[1] = FVar4;
      uVar25 = uVar27 + 1;
      iVar24 = (int)local_f0;
      lVar8 = lVar19;
      if ((int)uVar25 < (int)local_f0) {
        do {
          uVar16 = 0;
          if ((int)uVar27 < iVar24) {
            uVar16 = uVar26;
          }
          if (uVar16 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar24 = (int)local_f0;
          }
          FVar12.Data = local_f8.Data;
          uVar22 = ~uVar25 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar25 < iVar24) {
            uVar16 = uVar22;
          }
          if (uVar16 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar24 = (int)local_f0;
          }
          if (param_2 < (float)((uint)(*(float *)(local_f8.Data + lVar8 + 0x10) -
                                      *(float *)(FVar12.Data + lVar19)) & uVar23)) break;
          uVar16 = 0;
          if ((int)uVar27 < iVar24) {
            uVar16 = uVar26;
          }
          if (uVar16 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar24 = (int)local_f0;
          }
          pfVar5 = *(float **)(local_f8.Data + lVar19 + 8);
          uVar16 = 0;
          if ((int)uVar25 < iVar24) {
            uVar16 = uVar22;
          }
          if (uVar16 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar24 = (int)local_f0;
          }
          FVar4 = local_res20[0];
          pfVar6 = *(float **)(local_f8.Data + lVar8 + 0x18);
          if ((((float)((uint)(*pfVar5 - *pfVar6) & uVar23) <= param_2) &&
              ((float)((uint)(pfVar5[1] - pfVar6[1]) & uVar23) <= param_2)) &&
             ((float)((uint)(pfVar5[2] - pfVar6[2]) & uVar23) <= param_2)) {
            uVar16 = 0;
            if ((int)uVar25 < iVar24) {
              uVar16 = uVar22;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_e4 = *(FVertexID *)(local_f8.Data + lVar8 + 0x14);
            pFVar20 = TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
                      ::FindOrAddImpl<FVertexID>
                                ((TMapBase<FVertexID,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID,FVertexID,0>_>
                                  *)param_3,(uint)local_e4,&local_e4);
            *pFVar20 = FVar4;
            iVar24 = (int)local_f0;
          }
          uVar25 = uVar25 + 1;
          lVar8 = lVar8 + 0x10;
        } while ((int)uVar25 < iVar24);
      }
LAB_144374100:
      local_e0 = local_e0 + 1;
      uVar27 = uVar27 + 1;
      lVar19 = lVar19 + 0x10;
    } while ((int)uVar27 < iVar24);
  }
  if ((FIndexAndZ *)local_f8.Data != (FIndexAndZ *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// ComputeMeshArea @ 1443745b0

float __cdecl FStaticMeshOperations::ComputeMeshArea(FMeshDescription *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FVertexID FVar3;
  FVertexID *pFVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<FVertexID,int> *pTVar7;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar8;
  TVector<float> *pTVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TElementIDs local_res8;
  float local_e8;
  float fStack_e4;
  float local_d8;
  float fStack_d4;
  TArrayView<FVertexID,int> local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TConstIterator local_88 [3];
  
  fVar17 = 0.0;
  local_res8.Array = &FMeshElementChannels::Get(param_1->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_res8,(TConstIterator *)&local_a8);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_res8,local_88);
  fVar11 = __real_3f000000;
  while( true ) {
    if ((local_a8.CurrentBitIndex == local_88[0].Iterator.CurrentBitIndex) &&
       (local_a8.Array == local_88[0].Iterator.Array)) break;
    iVar10 = -1;
    if (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits) {
      iVar10 = local_a8.CurrentBitIndex;
    }
    pTVar7 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                       (&param_1->TriangleVertices,&local_b8,iVar10);
    iVar10 = pTVar7->ArrayNum;
    pFVar4 = pTVar7->DataPtr;
    if (iVar10 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        fVar11 = (float)(*pcVar5)();
        return fVar11;
      }
    }
    FVar3 = *pFVar4;
    pTVar8 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                       ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                        (param_1->VertexPositions).ArrayPtr,0);
    pTVar9 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar8,(int)FVar3);
    uVar1 = *(undefined8 *)&pTVar9->field0_0x0;
    fVar13 = (pTVar9->field0_0x0)._s_0.Z;
    if (iVar10 < 2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        fVar11 = (float)(*pcVar5)();
        return fVar11;
      }
    }
    FVar3 = pFVar4[1];
    pTVar8 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                       ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                        (param_1->VertexPositions).ArrayPtr,0);
    pTVar9 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar8,(int)FVar3);
    uVar2 = *(undefined8 *)&pTVar9->field0_0x0;
    fVar12 = (pTVar9->field0_0x0)._s_0.Z;
    if (iVar10 < 3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        fVar11 = (float)(*pcVar5)();
        return fVar11;
      }
    }
    FVar3 = pFVar4[2];
    pTVar8 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                       ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                        (param_1->VertexPositions).ArrayPtr,0);
    pTVar9 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar8,(int)FVar3);
    fStack_d4 = (float)((ulonglong)uVar2 >> 0x20);
    fStack_e4 = (float)((ulonglong)uVar1 >> 0x20);
    fVar12 = fVar12 - fVar13;
    local_d8 = (float)uVar2;
    local_e8 = (float)uVar1;
    fVar16 = (float)*(undefined8 *)&pTVar9->field0_0x0 - local_e8;
    fVar13 = (pTVar9->field0_0x0)._s_0.Z - fVar13;
    local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
    fVar15 = (float)((ulonglong)*(undefined8 *)&pTVar9->field0_0x0 >> 0x20) - fStack_e4;
    fVar14 = fVar12 * fVar16 - (local_d8 - local_e8) * fVar13;
    fVar13 = (fStack_d4 - fStack_e4) * fVar13 - fVar12 * fVar15;
    fVar12 = (local_d8 - local_e8) * fVar15 - (fStack_d4 - fStack_e4) * fVar16;
    fVar17 = fVar17 + SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12) * fVar11;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
  }
  return fVar17;
}

// ComputeMikktTangents @ 1443748b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FStaticMeshOperations::ComputeMikktTangents(FMeshDescription *param_1,bool param_2)

{
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar1;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this;
  TMeshAttributeArraySet<float> *this_00;
  code *pcVar2;
  bool bVar3;
  FMeshElementContainer *pFVar4;
  TTuple<FName,FAttributesSetEntry> *pTVar5;
  TArrayView<FVertexID,int> *pTVar6;
  TArrayView<FVertexInstanceID,int> *pTVar7;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar8;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TMeshAttributeArrayBase<float> *this_02;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  TVector<float> *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID,int>_> local_2e8;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexInstanceID,int>_> local_2d8;
  TVector<float> *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  code **local_2b8;
  int *local_2b0;
  uint local_2a8;
  code *local_2a0;
  code *local_298;
  code *local_290;
  code *local_288;
  code *local_280;
  code *local_278;
  undefined8 local_270;
  int local_268 [2];
  FVertexID *local_260;
  undefined8 uStack_258;
  FVertexInstanceID *local_250;
  undefined8 uStack_248;
  TVector<float> *local_240;
  undefined8 uStack_238;
  TVector<float> *local_230;
  undefined8 uStack_228;
  TVector2<float> *local_220;
  undefined8 uStack_218;
  TVector<float> *local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  TArrayView<FVertexID,int> local_1e8;
  TArrayView<FVertexInstanceID,int> local_1d8;
  FElementIDRemappings local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_328;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1709,"FStaticMeshOperations::ComputeMikktTangents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x6ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1709);
  }
  bVar3 = FMeshDescription::NeedsCompact(param_1);
  if (bVar3) {
    FElementIDRemappings::FElementIDRemappings(&local_1c8);
    FMeshDescription::Compact(param_1,&local_1c8);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewPolygonGroupIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewPolygonIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewUVIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewTriangleIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewEdgeIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewVertexInstanceIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewVertexIndexLookup);
  }
  pFVar4 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  if ((pFVar4->BitArray).NumBits != pFVar4->NumHoles) {
    local_288 = MeshDescriptionMikktSpaceInterface::MikkGetNormal;
    local_2a0 = MeshDescriptionMikktSpaceInterface::MikkGetNumFaces;
    local_298 = MeshDescriptionMikktSpaceInterface::MikkGetNumVertsOfFace;
    local_290 = MeshDescriptionMikktSpaceInterface::MikkGetPosition;
    local_280 = MeshDescriptionMikktSpaceInterface::MikkGetTexCoord;
    plVar12 = (longlong *)0x0;
    local_278 = MeshDescriptionMikktSpaceInterface::MikkSetTSpaceBasic;
    local_270 = 0;
    pFVar4 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    local_268[0] = (pFVar4->BitArray).NumBits - pFVar4->NumHoles;
    pFVar4 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar4->Attributes,MeshAttribute::Triangle::VertexIndex);
    plVar9 = (longlong *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar9 = plVar12;
    }
    if ((plVar9 == (longlong *)0x0) ||
       (local_2e8.ArrayPtr = (FMeshAttributeArraySetBase *)*plVar9, (local_2e8.ArrayPtr)->Type != 4)
       ) {
      local_2e8.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
      local_2e8.Extent = 1;
    }
    else {
      local_2e8.Extent = (local_2e8.ArrayPtr)->Extent;
    }
    pTVar6 = TMeshAttributesRef<FTriangleID,TArrayView<FVertexID,int>_>::GetRawArray
                       (&local_2e8,&local_1e8,0);
    local_308 = (FVertexInstanceID *)pTVar6->DataPtr;
    iStack_300 = pTVar6->ArrayNum;
    uStack_258 = CONCAT44(uStack_2fc,iStack_300);
    local_260 = (FVertexID *)local_308;
    pFVar4 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar4->Attributes,MeshAttribute::Triangle::VertexInstanceIndex);
    plVar9 = (longlong *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar9 = plVar12;
    }
    if ((plVar9 == (longlong *)0x0) ||
       (local_2d8.ArrayPtr = (FMeshAttributeArraySetBase *)*plVar9, (local_2d8.ArrayPtr)->Type != 4)
       ) {
      local_2d8.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
      local_2d8.Extent = 1;
    }
    else {
      local_2d8.Extent = (local_2d8.ArrayPtr)->Extent;
    }
    pTVar7 = TMeshAttributesRef<FTriangleID,TArrayView<FVertexInstanceID,int>_>::GetRawArray
                       (&local_2d8,&local_1d8,0);
    local_308 = pTVar7->DataPtr;
    iStack_300 = pTVar7->ArrayNum;
    uStack_248 = CONCAT44(uStack_2fc,iStack_300);
    local_250 = local_308;
    pFVar4 = FMeshElementChannels::Get(param_1->VertexElements,0);
    pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar4->Attributes,MeshAttribute::Vertex::Position);
    plVar9 = (longlong *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar9 = plVar12;
    }
    iVar11 = 0;
    if ((((plVar9 == (longlong *)0x0) ||
         (pTVar1 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar9,
         (int)pTVar1->_padding_ != 1)) || (*(int *)((longlong)&pTVar1->_padding_ + 4) != 1)) ||
       ((pTVar1 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
        ((int)pTVar1->_padding_ == 0)))) {
      local_2f8 = (TVector<float> *)0x0;
      iStack_2f0 = iVar11;
    }
    else {
      pTVar8 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar1,0);
      local_2f8 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar8,0);
      iStack_2f0 = (int)pTVar1->_padding_;
      if ((iStack_2f0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStack_238 = CONCAT44(uStack_2ec,iStack_2f0);
    local_240 = local_2f8;
    pFVar4 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar4->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    plVar9 = (longlong *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar9 = plVar12;
    }
    if ((((plVar9 == (longlong *)0x0) ||
         (this = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar9,
         (int)this->_padding_ != 2)) || (*(int *)((longlong)&this->_padding_ + 4) != 1)) ||
       ((this == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0 ||
        ((int)this->_padding_ == 0)))) {
      local_220 = (TVector2<float> *)0x0;
      iVar10 = iVar11;
    }
    else {
      this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(this,0);
      local_220 = TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_01,0);
      iVar10 = (int)this->_padding_;
      if ((iVar10 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStack_218 = CONCAT44(uStack_2ec,iVar10);
    local_2f8 = (TVector<float> *)local_220;
    iStack_2f0 = iVar10;
    pFVar4 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar4->Attributes,MeshAttribute::VertexInstance::Normal);
    plVar9 = (longlong *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar9 = plVar12;
    }
    if ((((plVar9 == (longlong *)0x0) ||
         (pTVar1 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar9,
         (int)pTVar1->_padding_ != 1)) || (*(int *)((longlong)&pTVar1->_padding_ + 4) != 1)) ||
       ((pTVar1 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
        ((int)pTVar1->_padding_ == 0)))) {
      local_230 = (TVector<float> *)0x0;
    }
    else {
      pTVar8 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar1,0);
      local_230 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar8,0);
      iVar11 = (int)pTVar1->_padding_;
      if ((iVar11 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStack_228 = CONCAT44(uStack_2ec,iVar11);
    local_2f8 = local_230;
    iStack_2f0 = iVar11;
    pFVar4 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar4->Attributes,MeshAttribute::VertexInstance::Tangent);
    plVar9 = (longlong *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar9 = plVar12;
    }
    if ((((plVar9 == (longlong *)0x0) ||
         (pTVar1 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar9,
         (int)pTVar1->_padding_ != 1)) || (*(int *)((longlong)&pTVar1->_padding_ + 4) != 1)) ||
       ((pTVar1 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
        ((int)pTVar1->_padding_ == 0)))) {
      local_2c8 = (TVector<float> *)0x0;
      iStack_2c0 = 0;
    }
    else {
      pTVar8 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar1,0);
      local_2c8 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar8,0);
      iStack_2c0 = (int)pTVar1->_padding_;
      if ((iStack_2c0 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStack_208 = CONCAT44(uStack_2bc,iStack_2c0);
    local_210 = local_2c8;
    pFVar4 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    pTVar5 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)&pFVar4->Attributes,MeshAttribute::VertexInstance::BinormalSign);
    plVar9 = (longlong *)&pTVar5->field_0x8;
    if (pTVar5 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      plVar9 = plVar12;
    }
    if ((((plVar9 == (longlong *)0x0) ||
         (this_00 = (TMeshAttributeArraySet<float> *)*plVar9, (int)this_00->_padding_ != 3)) ||
        (*(int *)((longlong)&this_00->_padding_ + 4) != 1)) ||
       ((this_00 == (TMeshAttributeArraySet<float> *)0x0 || ((int)this_00->_padding_ == 0)))) {
      local_308 = (FVertexInstanceID *)0x0;
      iStack_300 = 0;
    }
    else {
      this_02 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_00,0);
      local_308 = (FVertexInstanceID *)TMeshAttributeArrayBase<float>::GetElementBase(this_02,0);
      iStack_300 = (int)this_00->_padding_;
      if ((iStack_300 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_2b8 = &local_2a0;
    local_2a8 = (uint)param_2;
    local_2b0 = local_268;
    local_200 = (undefined4)local_308;
    uStack_1fc = local_308._4_4_;
    iStack_1f8 = iStack_300;
    uStack_1f4 = uStack_2fc;
    genTangSpaceDefault(&local_2b8);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ComputeSHAHash @ 144374ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSHAHash * __cdecl
FStaticMeshOperations::ComputeSHAHash
          (FSHAHash *__return_storage_ptr__,FMeshDescription *param_1,bool param_2)

{
  FAttributesSetBase *pFVar1;
  FName *pFVar2;
  FSHAHash *pFVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  FMeshElementContainer *pFVar7;
  TTuple<FName,FAttributesSetEntry> *pTVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ForAnyElementType FVar11;
  undefined1 auStackY_138 [32];
  FIdentityFunctor local_108 [8];
  ForAnyElementType local_100;
  uint local_f8;
  int local_f4;
  char local_f0;
  undefined4 local_ec;
  FSHAHash *local_e8;
  FSHA1 local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f0 = param_2;
  local_e8 = __return_storage_ptr__;
  FSHA1::FSHA1(&local_d8);
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f4 = 0;
  pFVar7 = FMeshElementChannels::Get(param_1->VertexElements,0);
  local_f8 = 0;
  pFVar1 = &pFVar7->Attributes;
  if (local_f4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_100,0,&local_f4);
  }
  if (param_2) {
    TAttributesSet<FVertexID>::
    ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexID>_>_::__l7::<lambda_1>_>
              ((TAttributesSet<FVertexID> *)pFVar1,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  else {
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)pFVar1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)local_100.Data,local_f8,local_108[0],(FNameLexicalLess *)local_108);
  uVar4 = local_f8;
  uVar9 = (ulonglong)(int)local_f8;
  pFVar2 = (FName *)(local_100.Data + uVar9 * 8);
  FVar11.Data = local_100.Data;
  while( true ) {
    if ((uint)uVar9 != uVar4) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    uVar6 = 0;
    if ((FName *)FVar11.Data == pFVar2) break;
    pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)pFVar1,*(FName *)FVar11.Data);
    puVar10 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    if (puVar10 != (undefined8 *)0x0) {
      uVar6 = (**(code **)(*(longlong *)*puVar10 + 0x30))();
    }
    local_ec = uVar6;
    FSHA1::Update(&local_d8,(uchar *)&local_ec,4);
    uVar9 = (ulonglong)local_f8;
    FVar11.Data = FVar11.Data + 8;
  }
  pFVar7 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  local_f8 = 0;
  pFVar1 = &pFVar7->Attributes;
  if (local_f4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_100,0,&local_f4);
  }
  cVar5 = local_f0;
  if (local_f0 == '\0') {
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)pFVar1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  else {
    TAttributesSet<FVertexInstanceID>::
    ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FVertexInstanceID>_>_::__l7::<lambda_1>_>
              ((TAttributesSet<FVertexInstanceID> *)pFVar1,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)local_100.Data,local_f8,local_108[0],(FNameLexicalLess *)local_108);
  uVar4 = local_f8;
  uVar9 = (ulonglong)(int)local_f8;
  pFVar2 = (FName *)(local_100.Data + uVar9 * 8);
  FVar11.Data = local_100.Data;
  while( true ) {
    if ((uint)uVar9 != uVar4) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if ((FName *)FVar11.Data == pFVar2) break;
    pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)pFVar1,*(FName *)FVar11.Data);
    puVar10 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    uVar6 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar6 = (**(code **)(*(longlong *)*puVar10 + 0x30))();
    }
    local_ec = uVar6;
    FSHA1::Update(&local_d8,(uchar *)&local_ec,4);
    uVar9 = (ulonglong)local_f8;
    FVar11.Data = FVar11.Data + 8;
  }
  pFVar7 = FMeshElementChannels::Get(param_1->EdgeElements,0);
  local_f8 = 0;
  pFVar1 = &pFVar7->Attributes;
  if (local_f4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_100,0,&local_f4);
  }
  if (cVar5 == '\0') {
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)pFVar1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  else {
    TAttributesSet<FEdgeID>::
    ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FEdgeID>_>_::__l7::<lambda_1>_>
              ((TAttributesSet<FEdgeID> *)pFVar1,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)local_100.Data,local_f8,local_108[0],(FNameLexicalLess *)local_108);
  uVar4 = local_f8;
  uVar9 = (ulonglong)(int)local_f8;
  pFVar2 = (FName *)(local_100.Data + uVar9 * 8);
  FVar11.Data = local_100.Data;
  while( true ) {
    if ((uint)uVar9 != uVar4) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    uVar6 = 0;
    if ((FName *)FVar11.Data == pFVar2) break;
    pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)pFVar1,*(FName *)FVar11.Data);
    puVar10 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    if (puVar10 != (undefined8 *)0x0) {
      uVar6 = (**(code **)(*(longlong *)*puVar10 + 0x30))();
    }
    local_ec = uVar6;
    FSHA1::Update(&local_d8,(uchar *)&local_ec,4);
    uVar9 = (ulonglong)local_f8;
    FVar11.Data = FVar11.Data + 8;
  }
  pFVar7 = FMeshElementChannels::Get(param_1->PolygonElements,0);
  local_f8 = 0;
  pFVar1 = &pFVar7->Attributes;
  if (local_f4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_100,0,&local_f4);
  }
  cVar5 = local_f0;
  if (local_f0 == '\0') {
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)pFVar1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  else {
    TAttributesSet<FPolygonID>::
    ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonID>_>_::__l7::<lambda_1>_>
              ((TAttributesSet<FPolygonID> *)pFVar1,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)local_100.Data,local_f8,local_108[0],(FNameLexicalLess *)local_108);
  uVar4 = local_f8;
  uVar9 = (ulonglong)(int)local_f8;
  pFVar2 = (FName *)(local_100.Data + uVar9 * 8);
  FVar11.Data = local_100.Data;
  while( true ) {
    if ((uint)uVar9 != uVar4) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if ((FName *)FVar11.Data == pFVar2) break;
    pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)pFVar1,*(FName *)FVar11.Data);
    puVar10 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    uVar6 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar6 = (**(code **)(*(longlong *)*puVar10 + 0x30))();
    }
    local_ec = uVar6;
    FSHA1::Update(&local_d8,(uchar *)&local_ec,4);
    uVar9 = (ulonglong)local_f8;
    FVar11.Data = FVar11.Data + 8;
  }
  pFVar7 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
  local_f8 = 0;
  pFVar1 = &pFVar7->Attributes;
  if (local_f4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&local_100,0,&local_f4);
  }
  if (cVar5 == '\0') {
    TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                *)pFVar1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  else {
    TAttributesSet<FPolygonGroupID>::
    ForEach<__FStaticMeshOperations::ComputeSHAHash_::__l2::<lambda_1>::operator()<TAttributesSet<FPolygonGroupID>_>_::__l7::<lambda_1>_>
              ((TAttributesSet<FPolygonGroupID> *)pFVar1,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)&local_100);
  }
  AlgoImpl::
  IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
            ((FName *)local_100.Data,local_f8,local_108[0],(FNameLexicalLess *)local_108);
  pFVar3 = local_e8;
  uVar4 = local_f8;
  uVar9 = (ulonglong)(int)local_f8;
  pFVar2 = (FName *)(local_100.Data + uVar9 * 8);
  FVar11.Data = local_100.Data;
  while( true ) {
    if ((uint)uVar9 != uVar4) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if ((FName *)FVar11.Data == pFVar2) break;
    pTVar8 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                     *)pFVar1,*(FName *)FVar11.Data);
    puVar10 = (undefined8 *)&pTVar8->field_0x8;
    if (pTVar8 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    uVar6 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar6 = (**(code **)(*(longlong *)*puVar10 + 0x30))();
    }
    local_ec = uVar6;
    FSHA1::Update(&local_d8,(uchar *)&local_ec,4);
    uVar9 = (ulonglong)local_f8;
    FVar11.Data = FVar11.Data + 8;
  }
  pFVar3->Hash[0] = '\0';
  pFVar3->Hash[1] = '\0';
  pFVar3->Hash[2] = '\0';
  pFVar3->Hash[3] = '\0';
  pFVar3->Hash[4] = '\0';
  pFVar3->Hash[5] = '\0';
  pFVar3->Hash[6] = '\0';
  pFVar3->Hash[7] = '\0';
  pFVar3->Hash[8] = '\0';
  pFVar3->Hash[9] = '\0';
  pFVar3->Hash[10] = '\0';
  pFVar3->Hash[0xb] = '\0';
  pFVar3->Hash[0xc] = '\0';
  pFVar3->Hash[0xd] = '\0';
  pFVar3->Hash[0xe] = '\0';
  pFVar3->Hash[0xf] = '\0';
  pFVar3->Hash[0x10] = '\0';
  pFVar3->Hash[0x11] = '\0';
  pFVar3->Hash[0x12] = '\0';
  pFVar3->Hash[0x13] = '\0';
  FSHA1::Final(&local_d8);
  FSHA1::GetHash(&local_d8,pFVar3->Hash);
  if ((FName *)local_100.Data != (FName *)0x0) {
    FMemory::Free(local_100.Data);
  }
  FSHA1::~FSHA1(&local_d8);
  return pFVar3;
}

// ComputeTangentsAndNormals @ 144375420

void __cdecl
FStaticMeshOperations::ComputeTangentsAndNormals
          (FMeshDescription *param_1,EComputeNTBsFlags param_2)

{
  int iVar1;
  FVertexID FVar2;
  undefined4 uVar3;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this;
  code *pcVar4;
  float fVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FMeshElementContainer *pFVar10;
  TTuple<FName,FAttributesSetEntry> *pTVar11;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TArrayView<FVertexID,int> *pTVar12;
  TArrayView<FVertexInstanceID,int> *pTVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  FVertexID *pFVar17;
  uint uVar18;
  EComputeNTBsFlags EVar19;
  uint uVar20;
  longlong *plVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  <lambda_1> local_res8;
  char local_res20;
  int local_174;
  uint local_16c;
  ForAnyElementType local_168;
  int local_160 [4];
  EComputeNTBsFlags local_150;
  FVertexInstanceID *local_148;
  TVector<float>_u_0 local_140;
  TVector<float>_u_0 local_130;
  TVector<float>_u_0 local_120;
  TVector<float> *local_110;
  longlong local_108;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexID,int>_> local_100;
  TMeshAttributesRef<FTriangleID,TArrayView<FVertexInstanceID,int>_> local_f0;
  int local_e0 [2];
  char local_d8;
  undefined1 local_d7;
  FMeshDescription *local_d0;
  ForAnyElementType *local_c8;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  int *local_a8;
  TArrayView<FVertexID,int> local_a0;
  TArrayView<FVertexInstanceID,int> local_90 [5];
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1262,"FStaticMeshOperations::ComputeTangentsAndNormals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x4ee);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1262);
  }
  pFVar10 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  if ((pFVar10->BitArray).NumBits != pFVar10->NumHoles) {
    EVar19 = param_2 & (Tangents|Normals);
    if ((EVar19 == None) || (local_res20 = '\x01', (param_2 & UseMikkTSpace) == None)) {
      local_res20 = '\0';
    }
    local_150 = EVar19;
    ClearNormalsAndTangentsData(param_1,(bool)((byte)param_2 & 1),EVar19 != None);
    pFVar10 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    uVar18 = (pFVar10->BitArray).NumBits - pFVar10->NumHoles;
    pFVar10 = FMeshElementChannels::Get(param_1->TriangleElements,0);
    if (((pFVar10->BitArray).NumBits != uVar18) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshDescription.Triangles().GetArraySize() == NumTriangles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                           ,0x53d,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_168.Data = (FScriptContainerElement *)0x0;
    local_160[0] = 0;
    local_160[1] = 0;
    if ((int)uVar18 < 1) {
      if ((int)uVar18 < 0) goto LAB_144375dcf;
    }
    else {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1c,4,uVar18,&local_168,local_160,local_160 + 1);
      DefaultConstructItems<_FStaticMeshOperations::ComputeTangentsAndNormals_::__l2::FTriangleData,int>
                (local_168.Data + (longlong)iVar8 * 0x1c,uVar18);
    }
    if ((param_2 & WeightedNTBs) != None) {
      pFVar10 = FMeshElementChannels::Get(param_1->VertexElements,0);
      pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                        *)&pFVar10->Attributes,MeshAttribute::Vertex::Position);
      puVar16 = (undefined8 *)&pTVar11->field_0x8;
      if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
        puVar16 = (undefined8 *)0x0;
      }
      if ((((puVar16 == (undefined8 *)0x0) ||
           (this = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*puVar16,
           (int)this->_padding_ != 1)) || (*(int *)((longlong)&this->_padding_ + 4) != 1)) ||
         ((this == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
          ((int)this->_padding_ == 0)))) {
        local_174 = 0;
        local_110 = (TVector<float> *)0x0;
      }
      else {
        this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
        local_110 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,0);
        local_174 = (int)this->_padding_;
        if ((local_174 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar21 = (longlong *)0x0;
      pFVar10 = FMeshElementChannels::Get(param_1->TriangleElements,0);
      pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                        *)&pFVar10->Attributes,MeshAttribute::Triangle::VertexIndex);
      plVar15 = (longlong *)&pTVar11->field_0x8;
      if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
        plVar15 = plVar21;
      }
      if ((plVar15 == (longlong *)0x0) ||
         (local_100.ArrayPtr = (FMeshAttributeArraySetBase *)*plVar15,
         (local_100.ArrayPtr)->Type != 4)) {
        local_100.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
        local_100.Extent = 1;
      }
      else {
        local_100.Extent = (local_100.ArrayPtr)->Extent;
      }
      pTVar12 = TMeshAttributesRef<FTriangleID,TArrayView<FVertexID,int>_>::GetRawArray
                          (&local_100,&local_a0,0);
      iVar8 = pTVar12->ArrayNum;
      pFVar17 = pTVar12->DataPtr;
      local_160[3] = iVar8;
      pFVar10 = FMeshElementChannels::Get(param_1->TriangleElements,0);
      pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                        *)&pFVar10->Attributes,MeshAttribute::Triangle::VertexInstanceIndex);
      plVar15 = (longlong *)&pTVar11->field_0x8;
      if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
        plVar15 = plVar21;
      }
      if ((plVar15 == (longlong *)0x0) ||
         (local_f0.ArrayPtr = (FMeshAttributeArraySetBase *)*plVar15, (local_f0.ArrayPtr)->Type != 4
         )) {
        local_f0.ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
        local_f0.Extent = 1;
      }
      else {
        local_f0.Extent = (local_f0.ArrayPtr)->Extent;
      }
      pTVar13 = TMeshAttributesRef<FTriangleID,TArrayView<FVertexInstanceID,int>_>::GetRawArray
                          (&local_f0,local_90,0);
      local_148 = pTVar13->DataPtr;
      iVar1 = pTVar13->ArrayNum;
      if ((int)uVar18 < 0) {
LAB_144375dcf:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if (local_160[1] < (int)uVar18) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,uVar18,&local_168,local_160[0],local_160 + 1);
      }
      fVar5 = __real_3f000000;
      local_108 = (longlong)(int)uVar18;
      local_16c = 0;
      EVar19 = local_150;
      if (0 < (int)uVar18) {
        local_148 = (FVertexInstanceID *)((longlong)local_148 - (longlong)pFVar17);
        pFVar17 = pFVar17 + 2;
        uVar18 = 2;
        local_160[2] = 0;
        do {
          uVar20 = ~(uVar18 - 2) >> 0x1f;
          uVar9 = 0;
          if (local_160[2] < iVar8) {
            uVar9 = uVar20;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = pFVar17[-2];
          uVar9 = 0;
          if ((int)FVar2 < local_174) {
            uVar9 = ~(uint)FVar2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_130._0_8_ = *(undefined8 *)&local_110[(int)FVar2].field0_0x0;
          local_130._s_0.Z = local_110[(int)FVar2].field0_0x0._s_0.Z;
          uVar14 = ~(uVar18 - 1) >> 0x1f;
          uVar9 = 0;
          if ((int)(uVar18 - 1) < iVar8) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = pFVar17[-1];
          uVar9 = 0;
          if ((int)FVar2 < local_174) {
            uVar9 = ~(uint)FVar2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_140._0_8_ = *(undefined8 *)&local_110[(int)FVar2].field0_0x0;
          local_140._s_0.Z = local_110[(int)FVar2].field0_0x0._s_0.Z;
          uVar9 = 0;
          if ((int)uVar18 < local_160[3]) {
            uVar9 = ~uVar18 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = *pFVar17;
          uVar9 = 0;
          if ((int)FVar2 < local_174) {
            uVar9 = ~(uint)FVar2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_120._0_8_ = *(undefined8 *)&local_110[(int)FVar2].field0_0x0;
          local_120._s_0.Z = local_110[(int)FVar2].field0_0x0._s_0.Z;
          uVar9 = 0;
          if ((int)local_16c < local_160[0]) {
            uVar9 = ~local_16c >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar6.Data = local_168.Data;
          fVar23 = (local_140._s_0.Y - local_130._s_0.Y) * (local_120._s_0.Z - local_130._s_0.Z) -
                   (local_140._s_0.Z - local_130._s_0.Z) * (local_120._s_0.Y - local_130._s_0.Y);
          fVar25 = (local_140._s_0.X - local_130._s_0.X) * (local_120._s_0.Y - local_130._s_0.Y) -
                   (local_140._s_0.Y - local_130._s_0.Y) * (local_120._s_0.X - local_130._s_0.X);
          fVar24 = (local_140._s_0.Z - local_130._s_0.Z) * (local_120._s_0.X - local_130._s_0.X) -
                   (local_140._s_0.X - local_130._s_0.X) * (local_120._s_0.Z - local_130._s_0.Z);
          *(float *)((longlong)plVar21 + local_168.Data) =
               SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25) * fVar5;
          fVar23 = TriangleUtilities::ComputeTriangleCornerAngle
                             ((TVector<float> *)&local_130._s_0,(TVector<float> *)&local_140._s_0,
                              (TVector<float> *)&local_120._s_0);
          uVar9 = 0;
          if ((int)(uVar18 - 2) < iVar1) {
            uVar9 = uVar20;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(undefined4 *)
                   ((longlong)&pFVar17->field_0x0 + (longlong)&local_148[-2].field_0x0);
          *(float *)((longlong)(plVar21 + 1) + FVar6.Data) = fVar23;
          *(undefined4 *)(FVar6.Data + (longlong)plVar21 + 4) = uVar3;
          fVar23 = TriangleUtilities::ComputeTriangleCornerAngle
                             ((TVector<float> *)&local_140._s_0,(TVector<float> *)&local_120._s_0,
                              (TVector<float> *)&local_130._s_0);
          uVar9 = 0;
          if ((int)(uVar18 - 1) < iVar1) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(undefined4 *)
                   ((longlong)&pFVar17->field_0x0 + (longlong)&local_148[-1].field_0x0);
          *(float *)((longlong)(plVar21 + 2) + FVar6.Data) = fVar23;
          *(undefined4 *)(FVar6.Data + (longlong)plVar21 + 0xc) = uVar3;
          fVar23 = TriangleUtilities::ComputeTriangleCornerAngle
                             ((TVector<float> *)&local_120._s_0,(TVector<float> *)&local_130._s_0,
                              (TVector<float> *)&local_140._s_0);
          uVar9 = 0;
          if ((int)uVar18 < iVar1) {
            uVar9 = ~uVar18 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar18 = uVar18 + 3;
          local_16c = local_16c + 1;
          local_160[2] = local_160[2] + 3;
          uVar3 = *(undefined4 *)((longlong)&pFVar17->field_0x0 + (longlong)&local_148->field_0x0);
          pFVar17 = pFVar17 + 3;
          *(float *)((longlong)(plVar21 + 3) + FVar6.Data) = fVar23;
          *(undefined4 *)(FVar6.Data + (longlong)plVar21 + 0x14) = uVar3;
          plVar21 = (longlong *)((longlong)plVar21 + 0x1c);
          local_108 = local_108 + -1;
          iVar8 = local_160[3];
        } while (local_108 != 0);
        local_108 = 0;
        EVar19 = local_150;
      }
    }
    FMeshElementIndexer::Build(&param_1->VertexToVertexInstances);
    FMeshElementIndexer::Build(&param_1->VertexToEdges);
    FMeshElementIndexer::Build(&param_1->EdgeToTriangles);
    pFVar10 = FMeshElementChannels::Get(param_1->VertexElements,0);
    iVar8 = (pFVar10->BitArray).NumBits - pFVar10->NumHoles;
    pFVar10 = FMeshElementChannels::Get(param_1->VertexElements,0);
    if (((pFVar10->BitArray).NumBits != iVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshDescription.Vertices().GetArraySize() == NumVertices",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                           ,0x55e,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_c8 = &local_168;
    local_c0.DataPtr = (void **)0x0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FStaticMeshOperations::ComputeTangentsAndNormals'::__l2::<lambda_1>,void,int>
               ::Call;
    local_a8 = local_e0;
    local_c0.ArrayNum = 0;
    local_e0[1] = 0x20000;
    local_d8 = local_res20;
    local_res8 = SUB81(param_1,0);
    local_e0[0] = iVar8;
    local_d7 = (param_2 & WeightedNTBs) != None;
    local_d0 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ComputeTangentsAndNormals.PF",
               (int)((iVar8 + 0x1ffff >> 0x1f & 0x1ffffU) + iVar8 + 0x1ffff) >> 0x11,1,
               (TFunctionRef<void___cdecl(int)> *)&local_b0,local_res8,None,&local_c0);
    if ((EVar19 != None) && (local_res20 != '\0')) {
      ComputeMikktTangents(param_1,(bool)((byte)(param_2 >> 5) & 1));
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ComputeTriangleTangentsAndNormals @ 144375f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FStaticMeshOperations::ComputeTriangleTangentsAndNormals
          (FMeshDescription *param_1,float param_2,wchar_t *param_3)

{
  int iVar1;
  bool bVar2;
  FMeshElementContainer *pFVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackY_268 [32];
  <lambda_1> local_228;
  TArrayView<std::nullptr_t,int> local_220;
  undefined **local_210;
  FMeshDescription *local_208;
  code *local_200;
  undefined4 *local_1f8;
  undefined4 local_1f0;
  float local_1ec;
  int local_1e8;
  undefined ***local_1e0;
  wchar_t *local_1d8;
  FElementIDRemappings local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId139,
               "FStaticMeshOperations::ComputeTriangleTangentsAndNormals_Selection",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x8b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId139);
  }
  local_210 = &___7FStaticMeshAttributes__6B_;
  local_208 = param_1;
  pFVar3 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
            (&pFVar3->Attributes,(FName)&local_220,
             MeshAttribute::Triangle::Normal.ComparisonIndex.Value.Value,
             (TVector<float> *)&DAT_00000001,0x54b783f8);
  pFVar3 = FMeshElementChannels::Get(local_208->TriangleElements,0);
  FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
            (&pFVar3->Attributes,(FName)&local_220,
             MeshAttribute::Triangle::Tangent.ComparisonIndex.Value.Value,
             (TVector<float> *)&DAT_00000001,0x54b783f8);
  pFVar3 = FMeshElementChannels::Get(local_208->TriangleElements,0);
  FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
            (&pFVar3->Attributes,(FName)&local_220,
             MeshAttribute::Triangle::Binormal.ComparisonIndex.Value.Value,
             (TVector<float> *)&DAT_00000001,0x54b783f8);
  pFVar3 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  iVar4 = (pFVar3->BitArray).NumBits - pFVar3->NumHoles;
  bVar2 = FMeshDescription::NeedsCompact(param_1);
  if (bVar2) {
    FElementIDRemappings::FElementIDRemappings(&local_1c8);
    FMeshDescription::Compact(param_1,&local_1c8);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewPolygonGroupIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewPolygonIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewUVIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewTriangleIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewEdgeIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewVertexInstanceIndexLookup);
    TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
              (&local_1c8.NewVertexIndexLookup);
  }
  local_1e0 = &local_210;
  local_220.DataPtr = (void **)0x0;
  local_220.ArrayNum = 0;
  local_200 = UE::Core::Private::Function::
              TFunctionRefCaller<`FStaticMeshOperations::ComputeTriangleTangentsAndNormals'::__l2::<lambda_1>,void,int>
              ::Call;
  local_1f8 = &local_1f0;
  local_1f0 = 0x2000;
  iVar1 = iVar4 + 0x1fff;
  local_1ec = param_2;
  local_1e8 = iVar4;
  local_1d8 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ComputeTriangleTangentsAndNormals.PF",(int)((iVar1 >> 0x1f & 0x1fffU) + iVar1) >> 0xd
             ,1,(TFunctionRef<void___cdecl(int)> *)&local_200,local_228,None,&local_220);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConvertFromRawMesh @ 1443761d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStaticMeshOperations::ConvertFromRawMesh
          (FRawMesh *param_1,FMeshDescription *param_2,
          TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *param_3,
          bool param_4,wchar_t *param_5)

{
  FPolygonGroupID *pFVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  FVertexID FVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar8;
  TVector2<float>_u_0 TVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  FRawMesh *pFVar14;
  ulonglong uVar15;
  FMeshDescription *pFVar16;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  FVertexInstanceID FVar23;
  FTriangleID FVar24;
  FMeshElementContainer *pFVar25;
  FMeshElementContainer *pFVar26;
  TTuple<FName,FAttributesSetEntry> *pTVar27;
  FName *pFVar28;
  TMeshAttributeArrayBase<FName> *pTVar29;
  ForElementType<unsigned_int> FVar30;
  TVector4<float> *pTVar31;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar32;
  TVector<float> *pTVar33;
  TMeshAttributeArrayBase<float> *pTVar34;
  float *pfVar35;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  TVector2<float>_u_0 *pTVar36;
  FPolygonGroupID FVar37;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_00;
  uint uVar38;
  ForElementType<FSetElementId> FVar39;
  undefined1 *puVar40;
  ForAnyElementType FVar41;
  ForElementType<FSetElementId> FVar42;
  longlong lVar43;
  uint uVar44;
  uint *puVar45;
  FPolygonGroupID **ppFVar46;
  FRawMesh *pFVar47;
  longlong lVar48;
  ForElementType<FSetElementId> FVar49;
  ForElementType<unsigned_int> FVar50;
  longlong *plVar51;
  FPolygonGroupID *pFVar52;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar53;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_02;
  uint uVar54;
  TMeshAttributeArraySet<FName> *this_03;
  TMeshAttributeArraySet<float> *this_04;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  undefined1 auStackY_3d8 [32];
  FPolygonGroupID local_380;
  uint local_37c;
  uint local_378;
  FRawMesh *local_370;
  ForAnyElementType local_368;
  int local_360 [2];
  FPolygonGroupID local_358;
  undefined1 local_354;
  char local_353;
  FPolygonGroupID local_350 [2];
  FName local_348;
  ForAnyElementType local_340;
  undefined8 local_338;
  int local_330;
  uint local_32c;
  undefined8 local_328;
  FName local_320;
  FMeshDescription *local_318;
  uint local_310;
  undefined8 local_30c;
  float local_304;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *local_300;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_2f8;
  undefined8 local_2f0;
  float local_2e8;
  FPolygonGroupID local_2e4;
  uint local_2e0;
  int local_2dc;
  FName local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  float local_2c0;
  undefined1 local_2b8 [8];
  undefined8 uStack_2b0;
  longlong local_2a8;
  longlong local_2a0;
  int local_298;
  TMeshAttributeArraySet<float> *local_290;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_288;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_280;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_278;
  int local_268;
  uint uStack_264;
  ForElementType<unsigned_int> FStack_260;
  undefined4 local_258;
  FPolygonGroupID FStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  TMap<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_> *local_248;
  longlong local_240;
  TMeshAttributeArraySet<FName> *local_238;
  FPolygonGroupID *local_230;
  undefined4 local_228;
  longlong local_220;
  wchar_t *local_218;
  int local_210;
  undefined1 local_20c [8];
  FPolygonGroupID *local_204;
  undefined4 local_1fc;
  int local_1f8;
  FString local_1f0;
  FString local_1e0;
  undefined1 local_1d0 [20];
  FPolygonGroupID FStack_1bc;
  FPolygonGroupID *local_1b0;
  FPolygonGroupID *local_1a8;
  uint *local_1a0;
  FPolygonGroupID *local_198;
  FVertexInstanceID *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  uint local_168;
  FPolygonGroupID FStack_164;
  FName local_158;
  FName local_150;
  TArrayView<FVertexInstanceID_const_,int> local_148;
  ForElementType<FSetElementId> local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  undefined1 local_100 [8];
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_218 = param_5;
  local_32c = 0;
  local_370 = param_1;
  local_353 = param_4;
  local_318 = param_2;
  local_248 = param_3;
  FMeshDescription::Empty(param_2);
  iVar20 = (param_1->WedgeIndices).ArrayNum;
  pFVar25 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pFVar26 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar25->BitArray,((pFVar26->BitArray).NumBits - pFVar26->NumHoles) + iVar20);
  iVar20 = (param_1->WedgeIndices).ArrayNum;
  pFVar25 = FMeshElementChannels::Get(param_2->PolygonElements,0);
  pFVar26 = FMeshElementChannels::Get(param_2->PolygonElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar25->BitArray,
             iVar20 / 3 + (iVar20 >> 0x1f) + ((pFVar26->BitArray).NumBits - pFVar26->NumHoles) +
             (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >> 0x1f));
  fVar55 = (float)(param_1->WedgeIndices).ArrayNum * ___real_3f555556;
  pFVar25 = FMeshElementChannels::Get(param_2->EdgeElements,0);
  pFVar26 = FMeshElementChannels::Get(param_2->EdgeElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar25->BitArray,((pFVar26->BitArray).NumBits - pFVar26->NumHoles) + (int)fVar55);
  pFVar25 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pTVar27 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::Normal);
  uVar44 = 0;
  plVar51 = (longlong *)&pTVar27->field_0x8;
  if (pTVar27 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar51 = (longlong *)0x0;
  }
  if (((plVar51 == (longlong *)0x0) ||
      (local_280 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar51,
      (int)local_280->_padding_ != 1)) || (*(int *)((longlong)&local_280->_padding_ + 4) != 1)) {
    local_280 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar25 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pTVar27 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::Tangent);
  plVar51 = (longlong *)&pTVar27->field_0x8;
  if (pTVar27 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar51 = (longlong *)0x0;
  }
  if (((plVar51 == (longlong *)0x0) ||
      (local_288 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar51,
      (int)local_288->_padding_ != 1)) || (*(int *)((longlong)&local_288->_padding_ + 4) != 1)) {
    local_288 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar25 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pTVar27 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  plVar51 = (longlong *)&pTVar27->field_0x8;
  if (pTVar27 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar51 = (longlong *)0x0;
  }
  if (((plVar51 == (longlong *)0x0) ||
      (local_290 = (TMeshAttributeArraySet<float> *)*plVar51, (int)local_290->_padding_ != 3)) ||
     (*(int *)((longlong)&local_290->_padding_ + 4) != 1)) {
    local_290 = (TMeshAttributeArraySet<float> *)0x0;
  }
  pFVar25 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pTVar27 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::Color);
  plVar51 = (longlong *)&pTVar27->field_0x8;
  if (pTVar27 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar51 = (longlong *)0x0;
  }
  if (((plVar51 == (longlong *)0x0) || (local_2a0 = *plVar51, *(int *)(local_2a0 + 8) != 0)) ||
     (*(int *)(local_2a0 + 0xc) != 1)) {
    local_2a0 = 0;
  }
  pFVar25 = FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  pTVar27 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  plVar51 = (longlong *)&pTVar27->field_0x8;
  if (pTVar27 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar51 = (longlong *)0x0;
  }
  if (((plVar51 == (longlong *)0x0) ||
      (local_2f8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar51,
      (int)local_2f8->_padding_ != 2)) || (*(int *)((longlong)&local_2f8->_padding_ + 4) != 1)) {
    local_2f8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  pTVar17 = local_2f8;
  pFVar25 = FMeshElementChannels::Get(param_2->PolygonGroupElements,0);
  pTVar27 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  plVar51 = (longlong *)&pTVar27->field_0x8;
  if (pTVar27 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar51 = (longlong *)0x0;
  }
  if (((plVar51 == (longlong *)0x0) ||
      (local_238 = (TMeshAttributeArraySet<FName> *)*plVar51, (int)local_238->_padding_ != 6)) ||
     (*(int *)((longlong)&local_238->_padding_ + 4) != 1)) {
    local_238 = (TMeshAttributeArraySet<FName> *)0x0;
  }
  this_03 = local_238;
  local_37c = 0;
  local_368.Data = (FScriptContainerElement *)0x0;
  local_360[0] = 0;
  local_360[1] = 0;
  iVar20 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,8,&local_368,local_360,local_360 + 1);
  *(undefined8 *)(local_368.Data + (longlong)iVar20 * 4) = 0;
  *(undefined8 *)(local_368.Data + (longlong)iVar20 * 4 + 8) = 0;
  *(undefined8 *)(local_368.Data + (longlong)iVar20 * 4 + 0x10) = 0;
  *(undefined8 *)(local_368.Data + (longlong)iVar20 * 4 + 0x10 + 8) = 0;
  if ((local_360[0] < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)local_368.Data = 0xffffffff;
  if (local_370->WedgeTexCoords[0].ArrayNum == (local_370->WedgeIndices).ArrayNum) {
    if ((local_360[0] < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(undefined4 *)local_368.Data = 0;
    uVar44 = 1;
    local_37c = 1;
  }
  if ((local_360[0] < 2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(local_368.Data + 4) = 0xffffffff;
  if (local_370->WedgeTexCoords[1].ArrayNum == (local_370->WedgeIndices).ArrayNum) {
    if ((local_360[0] < 2) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(uint *)(local_368.Data + 4) = uVar44;
    uVar44 = uVar44 + 1;
    local_37c = uVar44;
  }
  if ((local_360[0] < 3) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(local_368.Data + 8) = 0xffffffff;
  if (local_370->WedgeTexCoords[2].ArrayNum == (local_370->WedgeIndices).ArrayNum) {
    if ((local_360[0] < 3) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(uint *)(local_368.Data + 8) = uVar44;
    uVar44 = uVar44 + 1;
    local_37c = uVar44;
  }
  if ((local_360[0] < 4) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(local_368.Data + 0xc) = 0xffffffff;
  if (local_370->WedgeTexCoords[3].ArrayNum == (local_370->WedgeIndices).ArrayNum) {
    if ((local_360[0] < 4) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(uint *)(local_368.Data + 0xc) = uVar44;
    uVar44 = uVar44 + 1;
    local_37c = uVar44;
  }
  if ((local_360[0] < 5) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(local_368.Data + 0x10) = 0xffffffff;
  if (local_370->WedgeTexCoords[4].ArrayNum == (local_370->WedgeIndices).ArrayNum) {
    if ((local_360[0] < 5) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(uint *)(local_368.Data + 0x10) = uVar44;
    uVar44 = uVar44 + 1;
    local_37c = uVar44;
  }
  if ((local_360[0] < 6) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(local_368.Data + 0x14) = 0xffffffff;
  if (local_370->WedgeTexCoords[5].ArrayNum == (local_370->WedgeIndices).ArrayNum) {
    if ((local_360[0] < 6) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(uint *)(local_368.Data + 0x14) = uVar44;
    uVar44 = uVar44 + 1;
    local_37c = uVar44;
  }
  if ((local_360[0] < 7) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(local_368.Data + 0x18) = 0xffffffff;
  if (local_370->WedgeTexCoords[6].ArrayNum == (local_370->WedgeIndices).ArrayNum) {
    if ((local_360[0] < 7) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(uint *)(local_368.Data + 0x18) = uVar44;
    uVar44 = uVar44 + 1;
    local_37c = uVar44;
  }
  if ((local_360[0] < 8) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(undefined4 *)(local_368.Data + 0x1c) = 0xffffffff;
  if (local_370->WedgeTexCoords[7].ArrayNum == (local_370->WedgeIndices).ArrayNum) {
    if ((local_360[0] < 8) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    *(uint *)(local_368.Data + 0x1c) = uVar44;
    uVar44 = uVar44 + 1;
    local_37c = uVar44;
  }
  TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(pTVar17,uVar44);
  pFVar16 = local_318;
  pFVar47 = local_370;
  FVar42 = (ForElementType<FSetElementId>)0x0;
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  FillMeshDescriptionVertexPositionNoDuplicate(&local_370->VertexPositions,local_318,&local_278);
  local_298 = (pFVar47->WedgeColors).ArrayNum;
  if (((pFVar47->WedgeTangentX).ArrayNum < 1) ||
     (bVar18 = true, (pFVar47->WedgeTangentY).ArrayNum < 1)) {
    bVar18 = false;
  }
  pFVar52 = (FPolygonGroupID *)(pFVar47->FaceMaterialIndices).AllocatorInstance.Data;
  iVar20 = (pFVar47->FaceMaterialIndices).ArrayNum;
  local_2dc = (pFVar47->WedgeTangentZ).ArrayNum;
  local_340.Data = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar52 + iVar20;
  local_338 = 0;
  local_138 = (ForElementType<FSetElementId>)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0x80;
  local_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  FVar49 = FVar42;
  while( true ) {
    if ((pFVar47->FaceMaterialIndices).ArrayNum != iVar20) {
      local_354 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_354);
      FVar42 = local_138;
      FVar49 = local_f8;
    }
    if (pFVar52 == pFVar1) break;
    FVar37 = *pFVar52;
    local_2e4 = FVar37;
    if ((int)local_130 != local_104) {
      FVar39 = (ForElementType<FSetElementId>)local_100;
      if (FVar49 != (ForElementType<FSetElementId>)0x0) {
        FVar39 = FVar49;
      }
      for (iVar21 = *(int *)((longlong)FVar39 + (ulonglong)(local_f0 - 1U & (uint)FVar37) * 4);
          iVar21 != -1;
          iVar21 = *(int *)((undefined1 *)((longlong)FVar42 + 8) + (longlong)iVar21 * 0x10)) {
        if (*(FPolygonGroupID *)((longlong)FVar42 + (longlong)iVar21 * 0x10) == FVar37)
        goto LAB_144376cef;
      }
    }
    local_350[0] = FVar37;
    pFVar25 = FMeshElementChannels::Get(pFVar16->PolygonGroupElements,0);
    FMeshElementContainer::Insert(pFVar25,(int)FVar37);
    if (*(int *)&local_248->field_0x8 != *(int *)&local_248->field_0x34) {
      puVar40 = &local_248->field_0x38;
      if (*(undefined1 **)&local_248->field_0x40 != (undefined1 *)0x0) {
        puVar40 = *(undefined1 **)&local_248->field_0x40;
      }
      iVar21 = *(int *)(puVar40 +
                       (ulonglong)(*(int *)&local_248->field_0x48 - 1U & (uint)local_2e4) * 4);
      if (iVar21 != -1) {
        do {
          if (*(FPolygonGroupID *)(*(longlong *)local_248 + (longlong)iVar21 * 0x14) == local_2e4) {
            pFVar28 = TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>
                      ::FindChecked((TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>
                                     *)local_248,(int)local_2e4);
            FVar37 = local_350[0];
            local_320 = *pFVar28;
            pTVar29 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_03,0);
            pFVar28 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar29,(int)FVar37);
            *pFVar28 = local_320;
            goto LAB_144376c14;
          }
          iVar21 = *(int *)(*(longlong *)local_248 + 0xc + (longlong)iVar21 * 0x14);
        } while (iVar21 != -1);
      }
    }
    ::FString::PrintfImpl(&local_1f0,L"MaterialSlot_%d");
    FVar41.Data = (FScriptContainerElement *)L"";
    if (local_1f0.Data.ArrayNum != 0) {
      FVar41.Data = local_1f0.Data.AllocatorInstance.Data;
    }
    pFVar28 = ::FName::FName(&local_158,(wchar_t *)FVar41.Data);
    FVar37 = local_350[0];
    local_320 = *pFVar28;
    pTVar29 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_03,0);
    pFVar28 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar29,(int)FVar37);
    *pFVar28 = local_320;
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
LAB_144376c14:
    if (((local_340.Data <= local_350) &&
        (local_350 < (FPolygonGroupID *)(local_340.Data + (longlong)local_338._4_4_ * 4))) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar21 = (int)local_338;
    if ((int)local_338 == local_338._4_4_) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_340,(int *)((longlong)&local_338 + 4));
    }
    local_338 = CONCAT44(local_338._4_4_,iVar21 + 1);
    *(FPolygonGroupID *)(local_340.Data + (longlong)iVar21 * 4) = local_350[0];
    local_1b0 = &local_2e4;
    local_1a8 = local_350;
    TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FPolygonGroupID_const_&>_>
              ((TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
                *)&local_138,(TPairInitializer<int_const_&,FPolygonGroupID_const_&> *)local_20c,
               (bool *)&local_1b0);
    FVar42 = local_138;
    FVar49 = local_f8;
LAB_144376cef:
    pFVar52 = pFVar52 + 1;
  }
  local_358 = (FPolygonGroupID)(pFVar47->WedgeIndices).ArrayNum;
  local_330 = (int)(((longlong)(int)local_358 / 3 + ((longlong)(int)local_358 >> 0x3f) & 0xffffffffU
                    ) >> 0x1f) + (int)local_358 / 3 + ((int)local_358 >> 0x1f);
  pFVar25 = FMeshElementChannels::Get(pFVar16->VertexInstanceElements,0);
  pFVar26 = FMeshElementChannels::Get(pFVar16->VertexInstanceElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar25->BitArray,((pFVar26->BitArray).NumBits - pFVar26->NumHoles) + (int)local_358);
  pFVar25 = FMeshElementChannels::Get(pFVar16->TriangleElements,0);
  pFVar26 = FMeshElementChannels::Get(pFVar16->TriangleElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar25->BitArray,((pFVar26->BitArray).NumBits - pFVar26->NumHoles) + local_330);
  pFVar25 = FMeshElementChannels::Get(pFVar16->PolygonElements,0);
  pFVar26 = FMeshElementChannels::Get(pFVar16->PolygonElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar25->BitArray,((pFVar26->BitArray).NumBits - pFVar26->NumHoles) + local_330);
  pFVar25 = FMeshElementChannels::Get(pFVar16->EdgeElements,0);
  pFVar26 = FMeshElementChannels::Get(pFVar16->EdgeElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar25->BitArray,((pFVar26->BitArray).NumBits - pFVar26->NumHoles) + local_330 * 2);
  pTVar17 = local_2f8;
  fVar13 = __real_3b808081;
  fVar12 = __real_bf800000;
  fVar11 = __real_3f800000;
  fVar55 = __real_322bcc77;
  local_310 = 0;
  if (local_330 < 1) {
LAB_144377e1f:
    pFVar16 = local_318;
    ConvertSmoothGroupToHardEdges(&local_370->FaceSmoothingMasks,local_318);
    if ((local_353 == '\0') && ((local_2dc < 1 || (!bVar18)))) {
      ComputeTriangleTangentsAndNormals(pFVar16,0.0,local_218);
      ComputeTangentsAndNormals(pFVar16,BlendOverlappingNormals|UseMikkTSpace|Tangents);
    }
    FMeshDescription::BuildIndexers(pFVar16);
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_138);
    if ((FPolygonGroupID *)local_340.Data != (FPolygonGroupID *)0x0) {
      FMemory::Free(local_340.Data);
    }
    if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.AllocatorInstance.Data);
    }
    if (local_368.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data);
    }
    return;
  }
  local_2d0 = 0;
  pFVar47 = local_370;
  this_01 = local_280;
  this_02 = local_288;
  this_04 = local_290;
LAB_144376e90:
  lVar48 = local_2a0;
  local_378 = local_310 * 3;
  local_2f8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(local_2d0 * 3);
  bVar19 = IsTriangleDegenerated(pFVar47,&local_278,local_378);
  if (!bVar19) {
    local_2d8.ComparisonIndex.Value = 0;
    local_2d8.Number = 0;
    local_380 = (FPolygonGroupID)0xffffffff;
    uVar44 = 0;
    if ((int)local_310 < (pFVar47->FaceMaterialIndices).ArrayNum) {
      uVar44 = ~local_310 >> 0x1f;
    }
    if ((uVar44 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_2e0 = *(uint *)((pFVar47->FaceMaterialIndices).AllocatorInstance.Data + local_2d0 * 4);
    if ((int)local_130 != local_104) {
      FVar42 = (ForElementType<FSetElementId>)local_100;
      if (local_f8 != (ForElementType<FSetElementId>)0x0) {
        FVar42 = local_f8;
      }
      for (iVar20 = *(int *)((longlong)FVar42 + (ulonglong)(local_2e0 & local_f0 - 1U) * 4);
          iVar20 != -1;
          iVar20 = *(int *)((undefined1 *)((longlong)local_138 + 8) + (longlong)iVar20 * 0x10)) {
        if (*(uint *)((longlong)local_138 + (longlong)iVar20 * 0x10) == local_2e0) {
          FVar42 = (ForElementType<FSetElementId>)local_100;
          if (local_f8 != (ForElementType<FSetElementId>)0x0) {
            FVar42 = local_f8;
          }
          uVar44 = *(uint *)((longlong)FVar42 + (ulonglong)(local_f0 - 1U & local_2e0) * 4);
          goto joined_r0x00014437738b;
        }
      }
    }
    if (0 < *(int *)&local_248->field_0x8 - *(int *)&local_248->field_0x34) {
      puVar40 = &local_248->field_0x38;
      if (*(undefined1 **)&local_248->field_0x40 != (undefined1 *)0x0) {
        puVar40 = *(undefined1 **)&local_248->field_0x40;
      }
      iVar20 = *(int *)(puVar40 + (ulonglong)(*(int *)&local_248->field_0x48 - 1U & local_2e0) * 4);
      if (iVar20 != -1) {
        do {
          if (*(uint *)(*(longlong *)local_248 + (longlong)iVar20 * 0x14) == local_2e0) {
            pFVar28 = TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>
                      ::FindChecked((TMapBase<int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FName,0>_>
                                     *)local_248,local_2e0);
            local_348 = *pFVar28;
            local_2d8 = local_348;
            FVar30 = (ForElementType<unsigned_int>)
                     FMeshElementChannels::Get(local_318->PolygonGroupElements,0);
            uStack_264 = 1;
            iVar20 = 0;
            local_268 = 0;
            local_358 = *(FPolygonGroupID *)((longlong)FVar30 + 0x18);
            FStack_254 = (FPolygonGroupID)0x0;
            iStack_250 = 0;
            if (local_358 == (FPolygonGroupID)0x0) goto LAB_1443774c0;
            FVar50 = FVar30;
            if (*(ForElementType<unsigned_int> *)((longlong)FVar30 + 0x10) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar50 = *(ForElementType<unsigned_int> *)((longlong)FVar30 + 0x10);
            }
            uVar44 = *(uint *)FVar50;
            iVar21 = iVar20;
            if (uVar44 != 0) goto LAB_14437748d;
            goto LAB_144377462;
          }
          iVar20 = *(int *)(*(longlong *)local_248 + 0xc + (longlong)iVar20 * 0x14);
        } while (iVar20 != -1);
      }
    }
    goto LAB_144376fd9;
  }
  goto LAB_144377db5;
joined_r0x00014437738b:
  if (uVar44 == 0xffffffff) goto LAB_1443773a7;
  puVar45 = (uint *)((longlong)(int)uVar44 * 0x10 + (longlong)local_138);
  if (*puVar45 == local_2e0) {
    if (puVar45 != (uint *)0x0) goto LAB_1443773cf;
    goto LAB_1443773a9;
  }
  uVar44 = puVar45[2];
  goto joined_r0x00014437738b;
LAB_1443773a7:
  puVar45 = (uint *)0x0;
LAB_1443773a9:
  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                     ("Pair != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                      ,0x288,L"");
  if (bVar19) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
LAB_1443773cf:
  local_380 = *(FPolygonGroupID *)(puVar45 + 1);
LAB_144376fd9:
  local_348 = local_2d8;
LAB_144376fe1:
  if (local_380 == (FPolygonGroupID)0xffffffff) {
    pFVar25 = FMeshElementChannels::Get(local_318->PolygonGroupElements,0);
    local_380 = (FPolygonGroupID)FMeshElementContainer::Add(pFVar25);
    if (local_348 == (FName)0x0) {
      local_32c = local_32c | 1;
      ::FString::PrintfImpl(&local_1e0,L"MaterialSlot_%d");
      FVar41.Data = (FScriptContainerElement *)L"";
      if (local_1e0.Data.ArrayNum != 0) {
        FVar41.Data = local_1e0.Data.AllocatorInstance.Data;
      }
      pFVar28 = ::FName::FName(&local_150,(wchar_t *)FVar41.Data);
      local_348 = *pFVar28;
    }
    FVar37 = local_380;
    pTVar29 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_03,0);
    pFVar28 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar29,(int)FVar37);
    *pFVar28 = local_348;
    if (((local_32c & 1) != 0) &&
       (local_32c = local_32c & 0xfffffffe,
       local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (((local_340.Data <= &local_380) &&
        (&local_380 < (FPolygonGroupID *)(local_340.Data + (longlong)local_338._4_4_ * 4))) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar20 = (int)local_338;
    if ((int)local_338 == local_338._4_4_) {
      iVar20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_340,(int *)((longlong)&local_338 + 4));
    }
    local_338 = CONCAT44(local_338._4_4_,iVar20 + 1);
    *(FPolygonGroupID *)(local_340.Data + (longlong)iVar20 * 4) = local_380;
    local_1a0 = &local_2e0;
    local_198 = &local_380;
    TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FPolygonGroupID_const_&>_>
              ((TSet<TTuple<int,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<int,FPolygonGroupID,0>,FDefaultSetAllocator>
                *)&local_138,
               (TPairInitializer<int_const_&,FPolygonGroupID_const_&> *)(local_20c + 4),
               (bool *)&local_1a0);
  }
  local_300 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)(lVar48 + 0x18);
  local_e8 = 0xffffffffffffffff;
  local_e0 = 0xffffffff;
  lVar48 = local_2d0 * 0xc;
  local_220 = (longlong)&local_e8 + local_2d0 * -0xc;
  local_320.ComparisonIndex.Value = 0;
  local_320.Number = 0;
  local_328 = local_2d0 * 0x24;
  local_2a8 = local_2d0 * 0x18;
  do {
    pFVar47 = local_370;
    uVar44 = local_378;
    uVar38 = ~local_378 >> 0x1f;
    uVar54 = 0;
    if ((int)local_378 < (local_370->WedgeIndices).ArrayNum) {
      uVar54 = uVar38;
    }
    local_348 = (FName)lVar48;
    if ((uVar54 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar54 = *(uint *)((pFVar47->WedgeIndices).AllocatorInstance.Data + lVar48);
    uVar22 = 0;
    if ((int)uVar54 < local_278.ArrayNum) {
      uVar22 = ~uVar54 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar5 = *(FVertexID *)(local_278.AllocatorInstance.Data + (longlong)(int)uVar54 * 4);
    pFVar25 = FMeshElementChannels::Get(local_318->VertexInstanceElements,0);
    FVar23 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar25);
    FMeshDescription::CreateVertexInstance_Internal(local_318,FVar23,FVar5);
    *(FVertexInstanceID *)(local_220 + (longlong)local_348) = FVar23;
    if (local_298 < 1) {
      _local_2b8 = FLinearColor::White.field0_0x0;
    }
    else {
      uVar54 = 0;
      if ((int)uVar44 < (local_370->WedgeColors).ArrayNum) {
        uVar54 = uVar38;
      }
      if ((uVar54 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = (local_370->WedgeColors).AllocatorInstance.Data;
      local_2b8._4_4_ = FLinearColor::sRGBToLinearTable[(byte)pFVar7[(longlong)local_348 + 1]];
      local_2b8._0_4_ = FLinearColor::sRGBToLinearTable[(byte)pFVar7[(longlong)local_348 + 2]];
      uStack_2b0._0_4_ = FLinearColor::sRGBToLinearTable[(byte)pFVar7[(longlong)local_348]];
      uStack_2b0._4_4_ = (float)(byte)pFVar7[(longlong)local_348 + 3] * fVar13;
    }
    if ((local_300[1].Container.ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pTVar8 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
             local_300[1].Container.AllocatorInstance.Data;
    this_00 = local_300;
    if (pTVar8 != (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)0x0) {
      this_00 = pTVar8;
    }
    pTVar31 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                        (this_00,(int)FVar23);
    *(undefined1 (*) [8])&pTVar31->field0_0x0 = local_2b8;
    *(undefined8 *)((longlong)&pTVar31->field0_0x0 + 8) = uStack_2b0;
    if (local_2dc < 1) {
      ppFVar46 = &local_230;
      local_230 = (FPolygonGroupID *)0x0;
      local_228 = 0;
    }
    else {
      uVar54 = 0;
      if ((int)uVar44 < (local_370->WedgeTangentZ).ArrayNum) {
        uVar54 = uVar38;
      }
      if ((uVar54 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      ppFVar46 = &local_204;
      pFVar7 = (local_370->WedgeTangentZ).AllocatorInstance.Data;
      local_204 = *(FPolygonGroupID **)(pFVar7 + local_328);
      local_1fc = *(undefined4 *)(pFVar7 + local_328 + 8);
    }
    pFVar47 = local_370;
    pTVar32 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
    pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                        (pTVar32,(int)FVar23);
    pFVar14 = local_370;
    fVar6 = *(float *)(ppFVar46 + 1);
    *(FPolygonGroupID **)&pTVar33->field0_0x0 = *ppFVar46;
    (pTVar33->field0_0x0)._s_0.Z = fVar6;
    if (bVar18) {
      uVar44 = 0;
      if ((int)local_378 < (local_370->WedgeTangentX).ArrayNum) {
        uVar44 = uVar38;
      }
      if ((uVar44 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = (pFVar14->WedgeTangentX).AllocatorInstance.Data;
      uVar4 = *(undefined8 *)(pFVar7 + local_328);
      fVar6 = *(float *)(pFVar7 + local_328 + 8);
      pTVar32 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
      pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar32,(int)FVar23);
      *(undefined8 *)&pTVar33->field0_0x0 = uVar4;
      (pTVar33->field0_0x0)._s_0.Z = fVar6;
      uVar44 = 0;
      if ((int)local_378 < (pFVar47->WedgeTangentZ).ArrayNum) {
        uVar44 = uVar38;
      }
      if ((uVar44 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar15 = local_328;
      pFVar14 = local_370;
      pFVar7 = (pFVar47->WedgeTangentZ).AllocatorInstance.Data;
      uVar60 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                        UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
      fVar6 = *(float *)(pFVar7 + local_328);
      fVar2 = *(float *)(pFVar7 + local_328 + 4);
      local_304 = *(float *)(pFVar7 + local_328 + 8);
      fVar56 = fVar2 * fVar2 + fVar6 * fVar6 + local_304 * local_304;
      if (fVar56 == fVar11) {
        local_304 = *(float *)(pFVar7 + local_328 + 8);
        local_30c = *(ulonglong *)(pFVar7 + local_328);
      }
      else if (fVar55 <= fVar56) {
        fVar56 = fVar11 / SQRT(fVar56);
        local_304 = local_304 * fVar56;
        local_30c = CONCAT44(fVar2 * fVar56,fVar6 * fVar56);
      }
      else {
        local_304 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_30c = uVar60;
      }
      fVar6 = local_304;
      uVar44 = 0;
      if ((int)local_378 < (local_370->WedgeTangentY).ArrayNum) {
        uVar44 = uVar38;
      }
      if (uVar44 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar60 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                          UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
      }
      pFVar7 = (pFVar14->WedgeTangentY).AllocatorInstance.Data;
      fVar2 = *(float *)(pFVar7 + uVar15);
      fVar56 = *(float *)(pFVar7 + uVar15 + 4);
      local_2e8 = *(float *)(pFVar7 + uVar15 + 8);
      fVar57 = fVar56 * fVar56 + fVar2 * fVar2 + local_2e8 * local_2e8;
      if (fVar57 == fVar11) {
        local_2e8 = *(float *)(pFVar7 + uVar15 + 8);
        local_2f0 = *(ulonglong *)(pFVar7 + uVar15);
      }
      else if (fVar55 <= fVar57) {
        fVar57 = fVar11 / SQRT(fVar57);
        local_2e8 = local_2e8 * fVar57;
        local_2f0 = CONCAT44(fVar56 * fVar57,fVar2 * fVar57);
      }
      else {
        local_2e8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        local_2f0 = uVar60;
      }
      fVar2 = local_2e8;
      uVar44 = 0;
      if ((int)local_378 < (pFVar14->WedgeTangentX).ArrayNum) {
        uVar44 = uVar38;
      }
      if (uVar44 == 0) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar60 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                          UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
      }
      pFVar7 = (pFVar14->WedgeTangentX).AllocatorInstance.Data;
      fVar56 = *(float *)(pFVar7 + uVar15);
      fVar57 = *(float *)(pFVar7 + uVar15 + 4);
      fVar3 = *(float *)(pFVar7 + uVar15 + 8);
      fVar58 = fVar57 * fVar57 + fVar56 * fVar56 + fVar3 * fVar3;
      if (fVar58 == fVar11) {
        uVar59 = *(ulonglong *)(pFVar7 + uVar15);
        local_2c0 = *(float *)(pFVar7 + uVar15 + 8);
        fVar57 = (float)(uVar59 >> 0x20);
        local_2c8 = uVar59;
      }
      else if (fVar55 <= fVar58) {
        fVar58 = fVar11 / SQRT(fVar58);
        uVar59 = (ulonglong)(uint)(fVar58 * fVar56);
        fVar57 = fVar58 * fVar57;
        local_2c0 = fVar58 * fVar3;
        local_2c8 = CONCAT44(fVar57,fVar58 * fVar56);
      }
      else {
        uVar59 = (ulonglong)(uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        fVar57 = (float)(uVar60 >> 0x20);
        local_2c8 = uVar60;
        local_2c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      fVar56 = fVar11;
      if (((local_2f0._4_4_ * fVar6 - fVar2 * local_30c._4_4_) * (float)uVar59 -
          (fVar57 * fVar6 - local_2c0 * local_30c._4_4_) * (float)local_2f0) +
          (fVar57 * fVar2 - local_2c0 * local_2f0._4_4_) * (float)local_30c < 0.0) {
        fVar56 = fVar12;
      }
      pTVar34 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_04,0);
      pfVar35 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar34,(int)FVar23);
      *pfVar35 = fVar56;
    }
    else {
      pTVar32 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_02,0);
      pTVar33 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar32,(int)FVar23);
      *(undefined8 *)&pTVar33->field0_0x0 = 0;
      (pTVar33->field0_0x0)._s_0.Z = 0.0;
      pTVar34 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_04,0);
      pfVar35 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar34,(int)FVar23);
      *pfVar35 = 0.0;
    }
    uVar44 = local_378;
    uVar54 = 0;
    local_240 = 0;
    if (local_37c != 0) {
      pTVar53 = local_370->WedgeTexCoords;
      do {
        lVar48 = local_240;
        uVar22 = 0;
        if ((int)uVar54 < local_360[0]) {
          uVar22 = ~uVar54 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_358 = *(FPolygonGroupID *)(local_368.Data + lVar48 * 4);
        if (local_358 != (FPolygonGroupID)0xffffffff) {
          uVar22 = 0;
          if ((int)uVar44 < pTVar53->ArrayNum) {
            uVar22 = uVar38;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          TVar9 = *(TVector2<float>_u_0 *)((pTVar53->AllocatorInstance).Data + local_2a8);
          this = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                           (pTVar17,(int)local_358);
          pTVar36 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                               (this,(int)FVar23)->field0_0x0;
          *pTVar36 = TVar9;
          lVar48 = local_240;
        }
        local_240 = lVar48 + 1;
        uVar54 = uVar54 + 1;
        pTVar53 = pTVar53 + 1;
        this_01 = local_280;
        this_02 = local_288;
        this_04 = local_290;
      } while (local_240 < (longlong)(ulonglong)local_37c);
    }
    pFVar16 = local_318;
    FVar37 = local_380;
    local_378 = local_378 + 1;
    local_320 = (FName)((longlong)local_320 + 1);
    local_2a8 = local_2a8 + 8;
    lVar48 = (longlong)local_348 + 4;
    local_328 = local_328 + 0xc;
    local_2f8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                ((longlong)&local_2f8->_padding_ + 1);
  } while ((longlong)local_320 < 3);
  local_188 = (FVertexInstanceID *)&local_e8;
  iStack_180 = 3;
  local_348 = (FName)lVar48;
  pFVar25 = FMeshElementChannels::Get(local_318->TriangleElements,0);
  FVar24 = (FTriangleID)FMeshElementContainer::Add(pFVar25);
  local_148._12_4_ = uStack_17c;
  local_148.ArrayNum = iStack_180;
  local_148.DataPtr = local_188;
  FMeshDescription::CreateTriangle_Internal
            (pFVar16,FVar24,FVar37,&local_148,(TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0);
  pFVar47 = local_370;
  this_03 = local_238;
LAB_144377db5:
  local_310 = local_310 + 1;
  local_2d0 = local_2d0 + 1;
  if (local_330 <= local_2d0) goto LAB_144377e1f;
  goto LAB_144376e90;
  while (uVar44 = ((int *)((longlong)FVar50 + 4))[lVar43], uVar44 == 0) {
LAB_144377462:
    iVar20 = iVar20 + 0x20;
    lVar43 = (longlong)iVar21;
    iVar21 = iVar21 + 1;
    local_268 = iVar21;
    iStack_250 = iVar20;
    if ((int)(((int)local_358 - 1U) + ((int)((int)local_358 - 1U) >> 0x1f & 0x1fU)) >> 5 < iVar21)
    goto LAB_1443774b9;
  }
LAB_14437748d:
  uStack_264 = -uVar44 & uVar44;
  uVar60 = (ulonglong)uStack_264 * 2 + 1;
  lVar43 = 0x3f;
  if (uVar60 != 0) {
    for (; uVar60 >> lVar43 == 0; lVar43 = lVar43 + -1) {
    }
  }
  local_210 = (int)lVar43;
  FStack_254 = (FPolygonGroupID)(iStack_250 + -1 + local_210);
  if ((int)local_358 < (int)FStack_254) {
LAB_1443774b9:
    FStack_254 = local_358;
  }
LAB_1443774c0:
  local_258 = 0xffffffff;
  local_1d0._0_8_ = CONCAT44(uStack_264,local_268);
  FStack_1bc = FStack_254;
  local_1d0._16_4_ = 0xffffffff;
  unique0x10001556 = iStack_250;
  unique0x1000155a = uStack_24c;
  uVar44 = -1 << (local_358._0_1_ & 0x1f);
  local_300 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
              CONCAT44(local_300._4_4_,(int)local_358 >> 5);
  local_328 = CONCAT44(local_328._4_4_,local_358) & 0xffffffffffffffe0;
  iVar20 = (int)local_358 >> 5;
  uVar54 = (uint)local_358 & 0xffffffe0;
  FStack_260 = FVar30;
  local_1d0._8_8_ = FVar30;
  local_168 = uVar44;
  FStack_164 = local_358;
  if ((int)local_358 < 0) {
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar19) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar20 = (int)local_300;
    uVar54 = (uint)local_328;
  }
  if (local_358 != *(FPolygonGroupID *)((longlong)FVar30 + 0x18)) {
    FVar50 = FVar30;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar30 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar50 = *(ForElementType<unsigned_int> *)((longlong)FVar30 + 0x10);
    }
    iVar21 = (int)*(FPolygonGroupID *)((longlong)FVar30 + 0x18) - 1;
    uVar44 = uVar44 & *(uint *)((longlong)FVar50 + (longlong)iVar20 * 4);
    while (uVar44 == 0) {
      lVar43 = (longlong)iVar20;
      uVar54 = uVar54 + 0x20;
      iVar20 = iVar20 + 1;
      if ((int)(iVar21 + (iVar21 >> 0x1f & 0x1fU)) >> 5 < iVar20) {
        FVar37 = *(FPolygonGroupID *)((longlong)FVar30 + 0x18);
        goto LAB_1443775d9;
      }
      uVar44 = *(uint *)((longlong)FVar50 + 4 + lVar43 * 4);
      local_168 = 0xffffffff;
    }
    uVar60 = (ulonglong)(-uVar44 & uVar44) * 2 + 1;
    lVar43 = 0x3f;
    if (uVar60 != 0) {
      for (; uVar60 >> lVar43 == 0; lVar43 = lVar43 + -1) {
      }
    }
    local_1f8 = (int)lVar43;
    FVar37 = *(FPolygonGroupID *)((longlong)FVar30 + 0x18);
    FStack_164 = (FPolygonGroupID)(local_1f8 + -1 + uVar54);
    if ((int)FVar37 < (int)FStack_164) {
LAB_1443775d9:
      FStack_164 = FVar37;
    }
  }
  local_320.Number = 0;
  local_320.ComparisonIndex.Value = (uint)FStack_164;
  while( true ) {
    if ((FStack_1bc == (FPolygonGroupID)local_320.ComparisonIndex.Value.Value) &&
       ((ForElementType<unsigned_int>)local_1d0._8_8_ == FVar30)) goto LAB_144376fe1;
    local_358 = (FPolygonGroupID)0xffffffff;
    if ((int)FStack_1bc < *(int *)(local_1d0._8_8_ + 0x18)) {
      local_358 = FStack_1bc;
    }
    pTVar29 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_03,0);
    pFVar28 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar29,(int)local_358);
    if (*pFVar28 == local_348) break;
    local_1d0._16_4_ = local_1d0._16_4_ & ~local_1d0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1d0);
  }
  local_380 = local_358;
  goto LAB_144376fe1;
}

// ConvertHardEdgesToSmoothGroup @ 144377f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FStaticMeshOperations::ConvertHardEdgesToSmoothGroup
          (FMeshDescription *param_1,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  FTriangleID *pFVar1;
  char cVar2;
  FTriangleID FVar3;
  FMeshAttributeArraySetBase *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FMeshDescription *pFVar7;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FMeshElementContainer *pFVar12;
  TTuple<FName,FAttributesSetEntry> *pTVar13;
  TArrayView<int_const_,int> *pTVar14;
  FPolygonID *pFVar15;
  ForElementType<FSetElementId> FVar16;
  ForElementType<FSetElementId> FVar17;
  FPolygonID FVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FMeshAttributeArraySetBase *this;
  FPolygonID *pFVar25;
  longlong *plVar26;
  uint uVar27;
  FPolygonID FVar28;
  longlong *plVar29;
  longlong lVar30;
  FTriangleID *pFVar31;
  ulonglong uVar32;
  FPolygonID FVar33;
  ForAnyElementType FVar34;
  undefined1 auStackY_2e8 [32];
  FPolygonID local_298;
  char local_294;
  ForAnyElementType local_290;
  undefined8 local_288;
  ForAnyElementType local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined1 local_26f;
  undefined1 local_26e;
  undefined1 local_26d [5];
  ForAnyElementType local_268;
  undefined8 local_260;
  FPolygonID local_258;
  FPolygonID local_254;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_250;
  FPolygonID local_240;
  uint local_23c;
  ForAnyElementType local_238;
  undefined8 local_230;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_228;
  uint local_218;
  FMeshDescription *local_210;
  FPolygonID *local_208;
  int local_200;
  uint local_1fc;
  int local_1f8;
  uint local_1f4;
  TElementIDs local_1f0;
  longlong local_1e8;
  FScriptContainerElement *local_1e0;
  TElementIDs local_1d8;
  FPolygonID *local_1d0;
  FScriptContainerElement *local_1c8;
  FPolygonID *local_1c0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_1b8;
  undefined4 local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  TArrayView<FTriangleID_const_,int> local_168;
  TArrayView<FTriangleID_const_,int> local_158;
  TArrayView<FTriangleID_const_,int> local_148;
  TConstIterator local_138;
  TConstIterator local_118;
  TArrayView<int_const_,int> local_f8;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<TTuple<FPolygonID,unsigned_int>,TDefaultMapHashableKeyFuncs<FPolygonID,unsigned_int,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_210 = param_1;
  local_1b8 = param_2;
  if (CpuChannel->Enabled < 0) {
    local_294 = '\0';
  }
  else {
    local_294 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId350,"FStaticMeshOperations::ConvertHardEdgesToSmoothGroup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x15e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId350);
  }
  plVar26 = (longlong *)0x0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  pFVar12 = FMeshElementChannels::Get(param_1->PolygonElements,0);
  uVar27 = (pFVar12->BitArray).NumBits;
  if ((uint)(local_e8._8_4_ - local_b4) < uVar27) {
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar27);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_e8,uVar27);
    if (uVar27 < 4) {
      iVar10 = 1;
    }
    else {
      uVar20 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
      lVar30 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      local_1b0 = (undefined4)lVar30;
      iVar10 = 1 << ((byte)lVar30 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar10)) {
      local_a0 = iVar10;
      TSet<TTuple<FPolygonID,unsigned_int>,TDefaultMapHashableKeyFuncs<FPolygonID,unsigned_int,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FPolygonID,unsigned_int>,TDefaultMapHashableKeyFuncs<FPolygonID,unsigned_int,0>,FDefaultSetAllocator>
                *)local_e8);
    }
  }
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  pFVar12 = FMeshElementChannels::Get(param_1->PolygonElements,0);
  iVar10 = (pFVar12->BitArray).NumBits;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar10,&local_238,(int *)&local_230,(int *)((longlong)&local_230 + 4));
  memset(local_238.Data + iVar11,0,(longlong)iVar10);
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  pFVar12 = FMeshElementChannels::Get(param_1->EdgeElements,0);
  pTVar13 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar12->Attributes,MeshAttribute::Edge::IsHard);
  plVar29 = (longlong *)&pTVar13->field_0x8;
  if (pTVar13 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar29 = plVar26;
  }
  if (((plVar29 == (longlong *)0x0) || (local_1e8 = *plVar29, *(int *)(local_1e8 + 8) != 5)) ||
     (*(int *)(local_1e8 + 0xc) != 1)) {
    local_1e8 = 0;
  }
  lVar30 = local_1e8;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.ArrayNum = 0;
  local_228.ArrayMax = 0;
  local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ArrayNum = 0;
  local_250.ArrayMax = 0;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = 0;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = 0;
  local_1d8.Array = &FMeshElementChannels::Get(param_1->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_1d8,(TConstIterator *)&local_1a8);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_1d8,&local_138);
  do {
    pTVar8 = local_1b8;
    uVar20 = 0;
    if ((local_1a8.CurrentBitIndex == local_138.Iterator.CurrentBitIndex) &&
       (local_1a8.Array == local_138.Iterator.Array)) {
      if ((local_1b8->ArrayNum != (int)plVar26) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FaceSmoothingMasks.Num() == TriangleCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                             ,0x1d6,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_1f0.Array = &FMeshElementChannels::Get(param_1->PolygonElements,0)->BitArray;
      TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_1f0,(TConstIterator *)&local_188)
      ;
      TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_1f0,&local_118);
      pFVar7 = local_210;
      uVar19 = uVar20;
      do {
        cVar2 = local_294;
        if ((local_188.CurrentBitIndex == local_118.Iterator.CurrentBitIndex) &&
           (local_188.Array == local_118.Iterator.Array)) {
          if ((FPolygonID *)local_280.Data != (FPolygonID *)0x0) {
            FMemory::Free(local_280.Data);
          }
          if ((FPolygonID *)local_290.Data != (FPolygonID *)0x0) {
            FMemory::Free(local_290.Data);
          }
          if ((FPolygonID *)local_250.AllocatorInstance.Data != (FPolygonID *)0x0) {
            FMemory::Free(local_250.AllocatorInstance.Data);
          }
          if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.AllocatorInstance.Data);
          }
          if ((FPolygonID *)local_268.Data != (FPolygonID *)0x0) {
            FMemory::Free(local_268.Data);
          }
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FPolygonID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FPolygonID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
          if (local_238.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.Data);
          }
          local_a0 = 0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_a8);
          }
          TSparseArray<TSparseSetElement<TTuple<FPolygonID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FPolygonID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FPolygonID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_e8);
          if (cVar2 != '\0') {
            FCpuProfilerTrace::OutputEndEvent();
          }
          return;
        }
        uVar27 = 0xffffffff;
        if (local_188.CurrentBitIndex < (local_188.Array)->NumBits) {
          uVar27 = local_188.CurrentBitIndex;
        }
        if (local_e8._8_4_ != local_b4) {
          FVar16 = (ForElementType<FSetElementId>)local_b0;
          if (local_a8 != (ForElementType<FSetElementId>)0x0) {
            FVar16 = local_a8;
          }
          uVar21 = *(uint *)((longlong)FVar16 + (ulonglong)(local_a0 - 1U & uVar27) * 4);
          while (uVar21 != 0xffffffff) {
            pFVar24 = (FScriptContainerElement *)(local_e8._0_8_ + (longlong)(int)uVar21 * 0x10);
            if (*(uint *)pFVar24 == uVar27) {
              if (pFVar24 != (FScriptContainerElement *)0x0) goto LAB_1443791a3;
              goto LAB_14437917d;
            }
            uVar21 = *(uint *)(pFVar24 + 8);
          }
        }
        pFVar24 = (FScriptContainerElement *)0x0;
LAB_14437917d:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_1443791a3:
        uVar21 = *(uint *)(pFVar24 + 4);
        FMeshElementIndexer::Find<FTriangleID>(&pFVar7->PolygonToTriangles,&local_148,uVar27,0);
        if (0 < local_148.ArrayNum) {
          uVar32 = local_148._8_8_ & 0xffffffff;
          lVar30 = uVar19 * 4;
          do {
            uVar22 = (uint)uVar20;
            uVar27 = 0;
            if ((int)uVar22 < pTVar8->ArrayNum) {
              uVar27 = ~uVar22 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar20 = (ulonglong)(uVar22 + 1);
            uVar19 = uVar19 + 1;
            *(uint *)((pTVar8->AllocatorInstance).Data + lVar30) = uVar21;
            uVar32 = uVar32 - 1;
            lVar30 = lVar30 + 4;
          } while (uVar32 != 0);
        }
        local_188.UnvisitedBitMask = local_188.UnvisitedBitMask & ~local_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
      } while( true );
    }
    local_258 = (FPolygonID)0xffffffff;
    if (local_1a8.CurrentBitIndex < (local_1a8.Array)->NumBits) {
      local_258 = (FPolygonID)local_1a8.CurrentBitIndex;
    }
    FMeshElementIndexer::Find<FTriangleID>(&param_1->PolygonToTriangles,&local_158,(int)local_258,0)
    ;
    local_1f4 = (int)plVar26 + local_158.ArrayNum;
    lVar23 = (longlong)(int)local_258;
    uVar27 = 0;
    if ((int)local_258 < (int)local_230) {
      uVar27 = ~(uint)local_258 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_238.Data[lVar23] == (FScriptContainerElement)0x0) {
      bVar9 = (longlong)local_288 < 0;
      local_288 = local_288 & 0xffffffff00000000;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_290,0,(int *)((longlong)&local_288 + 4));
        uVar20 = local_288 & 0xffffffff;
      }
      lVar23 = local_278;
      uVar27 = local_278._4_4_;
      local_278 = (ulonglong)local_278._4_4_ << 0x20;
      iVar10 = (int)uVar20;
      if ((lVar23 < 0) && (uVar27 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_280,0,(int *)((longlong)&local_278 + 4));
        iVar10 = (int)local_288;
      }
      if ((local_290.Data <= &local_258) &&
         (&local_258 < (FPolygonID *)(local_290.Data + (longlong)local_288._4_4_ * 4))) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = (int)local_288;
      }
      if (iVar10 == local_288._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_290,(int *)((longlong)&local_288 + 4));
      }
      local_288 = CONCAT44(local_288._4_4_,iVar10 + 1);
      local_254 = (FPolygonID)0xffffffff;
      *(FPolygonID *)(local_290.Data + (longlong)iVar10 * 4) = local_258;
      if (((local_280.Data <= &local_254) &&
          (&local_254 < (FPolygonID *)(local_280.Data + (longlong)(int)local_278._4_4_ * 4))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (int)local_278;
      if ((int)local_278 == local_278._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_280,(int *)((longlong)&local_278 + 4));
      }
      local_278 = CONCAT44(local_278._4_4_,iVar10 + 1);
      *(FPolygonID *)(local_280.Data + (longlong)iVar10 * 4) = local_254;
joined_r0x000144378426:
      if (0 < (int)local_288) {
        if (((int)local_278 != (int)local_288) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("LastConnectedPolygons.Num() == ConnectedPolygons.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                               ,0x17d,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((int)local_278 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = (int)local_278 + -1;
        uVar27 = *(uint *)(local_280.Data + (longlong)iVar10 * 4);
        iVar11 = ((int)local_278 - iVar10) + -1;
        if (iVar11 != 0) {
          memmove(local_280.Data + (longlong)iVar10 * 4,local_280.Data + (longlong)iVar10 * 4 + 4,
                  (longlong)iVar11 << 2);
        }
        local_278 = CONCAT44(local_278._4_4_,(int)local_278 + -1);
        if (((int)local_288 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar15 = (FPolygonID *)(local_290.Data + (longlong)((int)local_288 + -1) * 4);
        local_298 = *pFVar15;
        iVar10 = ((int)local_288 - ((int)local_288 + -1)) + -1;
        if (iVar10 != 0) {
          memmove(pFVar15,pFVar15 + 1,(longlong)iVar10 << 2);
        }
        lVar23 = (longlong)(int)local_298;
        local_288 = CONCAT44(local_288._4_4_,(int)local_288 + -1);
        uVar21 = 0;
        if ((int)local_298 < (int)local_230) {
          uVar21 = ~(uint)local_298 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar20 = local_260;
        if (local_238.Data[lVar23] == (FScriptContainerElement)0x0) {
          uVar21 = local_260._4_4_;
          local_260 = (ulonglong)local_260._4_4_ << 0x20;
          if (((longlong)uVar20 < 0) && (uVar21 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_268,0,(int *)((longlong)&local_260 + 4));
          }
          if (local_e8._8_4_ != local_b4) {
            FVar16 = (ForElementType<FSetElementId>)local_b0;
            if (local_a8 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = local_a8;
            }
            FVar28 = *(FPolygonID *)
                      ((longlong)FVar16 + (ulonglong)(local_a0 - 1U & (uint)local_298) * 4);
            while (FVar28 != (FPolygonID)0xffffffff) {
              local_208 = (FPolygonID *)(local_e8._0_8_ + (longlong)(int)FVar28 * 0x10);
              if (*local_208 == local_298) {
                if (local_208 != (FPolygonID *)0x0) goto LAB_144378692;
                break;
              }
              FVar28 = local_208[2];
            }
          }
          local_1d0 = &local_298;
          TSet<TTuple<FPolygonID,unsigned_int>,TDefaultMapHashableKeyFuncs<FPolygonID,unsigned_int,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FPolygonID_const_&>_>
                    ((TSet<TTuple<FPolygonID,unsigned_int>,TDefaultMapHashableKeyFuncs<FPolygonID,unsigned_int,0>,FDefaultSetAllocator>
                      *)local_e8,(uint)&local_200,
                     (TKeyInitializer<FPolygonID_const_&> *)(ulonglong)(uint)local_298,
                     (bool *)&local_1d0);
          local_208 = (FPolygonID *)(local_e8._0_8_ + (longlong)local_200 * 0x10);
LAB_144378692:
          local_240 = (FPolygonID)0x0;
          local_23c = 0;
          if (uVar27 == 0xffffffff) {
            local_218 = 0;
          }
          else {
            pFVar24 = (FScriptContainerElement *)0x0;
            if (local_e8._8_4_ != local_b4) {
              FVar16 = (ForElementType<FSetElementId>)local_b0;
              if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                FVar16 = local_a8;
              }
              uVar21 = *(uint *)((longlong)FVar16 + (ulonglong)(local_a0 - 1U & uVar27) * 4);
              while (pFVar24 = (FScriptContainerElement *)0x0, uVar21 != 0xffffffff) {
                pFVar24 = (FScriptContainerElement *)(local_e8._0_8_ + (longlong)(int)uVar21 * 0x10)
                ;
                if (*(uint *)pFVar24 == uVar27) {
                  if (pFVar24 != (FScriptContainerElement *)0x0) goto LAB_144378714;
                  break;
                }
                uVar21 = *(uint *)(pFVar24 + 8);
              }
            }
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
LAB_144378714:
            local_218 = *(uint *)(pFVar24 + 4);
          }
          uVar6 = local_228._8_8_;
          iVar10 = local_228.ArrayMax;
          local_228._8_8_ = (ulonglong)(uint)local_228.ArrayMax << 0x20;
          if (((longlong)uVar6 < 0) && (iVar10 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_228.AllocatorInstance,0,&local_228.ArrayMax);
          }
          param_1 = local_210;
          FMeshDescription::GetPolygonPerimeterEdges<TSizedDefaultAllocator<32>_>
                    (local_210,local_298,&local_228);
          uVar19 = (ulonglong)local_228.ArrayNum;
          local_1fc = local_228.ArrayNum;
          local_1c8 = local_228.AllocatorInstance.Data + uVar19 * 4;
          uVar20 = uVar19;
          FVar34.Data = local_228.AllocatorInstance.Data;
          while( true ) {
            pFVar24 = local_1c8;
            local_1e0 = FVar34.Data;
            if ((int)uVar19 != (int)uVar20) {
              local_270 = 0;
              `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_270);
            }
            FVar28 = local_240;
            if (FVar34.Data == pFVar24) break;
            iVar10 = *(int *)FVar34.Data;
            if ((*(int *)(lVar30 + 0x38) < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            plVar26 = (longlong *)(lVar30 + 0x18);
            if (*(longlong **)(lVar30 + 0x30) != (longlong *)0x0) {
              plVar26 = *(longlong **)(lVar30 + 0x30);
            }
            uVar21 = iVar10 * (int)plVar26[2];
            uVar27 = 0;
            if ((int)uVar21 < (int)plVar26[1]) {
              uVar27 = ~uVar21 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar6 = local_250._8_8_;
            cVar2 = *(char *)((longlong)(int)uVar21 + *plVar26);
            iVar10 = local_250.ArrayMax;
            local_250._8_8_ = (ulonglong)(uint)local_250.ArrayMax << 0x20;
            if (((longlong)uVar6 < 0) && (iVar10 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0,&local_250.AllocatorInstance,0,&local_250.ArrayMax);
            }
            iVar10 = *(int *)FVar34.Data;
            pTVar14 = FMeshElementIndexer::Find(&param_1->EdgeToTriangles,&local_f8,iVar10,0);
            uVar27 = pTVar14->ArrayNum;
            if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
            }
            iVar11 = local_250.ArrayMax;
            if (local_250.ArrayMax < (int)uVar27) {
              local_250._8_8_ = (ulonglong)(uint)local_250.ArrayMax << 0x20;
              if (iVar11 != uVar27) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar27,&local_250.AllocatorInstance,0,&local_250.ArrayMax);
              }
            }
            else {
              local_250._8_8_ = (ulonglong)(uint)local_250.ArrayMax << 0x20;
            }
            FMeshElementIndexer::Find<FTriangleID>(&param_1->EdgeToTriangles,&local_168,iVar10,0);
            pFVar7 = local_210;
            pFVar1 = local_168.DataPtr + local_168.ArrayNum;
            FVar34.Data = local_250.AllocatorInstance.Data;
            FVar28 = local_240;
            uVar27 = local_23c;
            for (pFVar31 = local_168.DataPtr; local_250.AllocatorInstance.Data = FVar34.Data,
                local_240 = FVar28, local_23c = uVar27, pFVar31 != pFVar1; pFVar31 = pFVar31 + 1) {
              pFVar4 = (pFVar7->TrianglePolygons).ArrayPtr;
              FVar3 = *pFVar31;
              if (((int)pFVar4[2].Type < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              this = pFVar4 + 1;
              if ((FMeshAttributeArraySetBase *)pFVar4[2]._padding_ !=
                  (FMeshAttributeArraySetBase *)0x0) {
                this = (FMeshAttributeArraySetBase *)pFVar4[2]._padding_;
              }
              pFVar15 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                                  ((TMeshAttributeArrayBase<FPolygonID> *)this,(int)FVar3);
              TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
                        (&local_250,pFVar15);
              FVar34.Data = local_250.AllocatorInstance.Data;
              FVar28 = local_240;
              uVar27 = local_23c;
            }
            iVar10 = local_250.ArrayNum;
            pFVar15 = (FPolygonID *)((longlong)FVar34.Data + (longlong)local_250.ArrayNum * 4);
LAB_144378998:
            if (local_250.ArrayNum != iVar10) {
              local_26f = 0;
              `TCheckedPointerIterator<FPolygonID,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_26f);
            }
            if ((FPolygonID *)FVar34.Data != pFVar15) {
              FVar33 = *(FPolygonID *)FVar34.Data;
              if (FVar33 != local_298) {
                pFVar25 = (FPolygonID *)0x0;
                if (local_e8._8_4_ != local_b4) {
                  FVar16 = (ForElementType<FSetElementId>)local_b0;
                  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                    FVar16 = local_a8;
                  }
                  lVar30 = (ulonglong)(local_a0 - 1U & (uint)FVar33) * 4;
                  for (iVar11 = *(int *)(lVar30 + (longlong)FVar16); pFVar25 = (FPolygonID *)0x0,
                      iVar11 != -1; iVar11 = *(int *)(local_e8._0_8_ + (longlong)iVar11 * 0x10 + 8))
                  {
                    if (*(FPolygonID *)(local_e8._0_8_ + (longlong)iVar11 * 0x10) == FVar33) {
                      FVar16 = (ForElementType<FSetElementId>)local_b0;
                      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                        FVar16 = local_a8;
                      }
                      FVar18 = *(FPolygonID *)((longlong)FVar16 + lVar30);
                      goto joined_r0x000144378a4b;
                    }
                  }
                }
                goto LAB_144378a9b;
              }
              goto LAB_144378ce5;
            }
            uVar19 = local_228._8_8_ & 0xffffffff;
            FVar34.Data = local_1e0 + 4;
            uVar20 = (ulonglong)local_1fc;
            lVar30 = local_1e8;
            param_1 = local_210;
            local_240 = FVar28;
            local_23c = uVar27;
          }
          if (local_240 != (FPolygonID)0x0) {
            if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
              FVar16 = (ForElementType<FSetElementId>)&local_98.Hash;
              if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar16 = local_98.Hash.SecondaryData;
              }
              FVar33 = *(FPolygonID *)
                        ((longlong)FVar16 +
                        (ulonglong)(local_98.HashSize - 1U & (uint)local_298) * 4);
              while (FVar33 != (FPolygonID)0xffffffff) {
                pFVar15 = (FPolygonID *)((longlong)(int)FVar33 * 0x10 + local_98.Elements._0_8_);
                if (*pFVar15 == local_298) {
                  if (pFVar15 != (FPolygonID *)0x0) goto LAB_144378dcb;
                  break;
                }
                FVar33 = pFVar15[2];
              }
            }
            local_1c0 = &local_298;
            TSet<TTuple<FPolygonID,unsigned_int>,TDefaultMapHashableKeyFuncs<FPolygonID,unsigned_int,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FPolygonID_const_&>_>
                      (&local_98,(uint)&local_1f8,
                       (TKeyInitializer<FPolygonID_const_&> *)(ulonglong)(uint)local_298,
                       (bool *)&local_1c0);
            pFVar15 = (FPolygonID *)((longlong)local_1f8 * 0x10 + local_98.Elements._0_8_);
LAB_144378dcb:
            pFVar15[1] = FVar28;
            iVar10 = (int)local_260;
            pFVar15 = (FPolygonID *)(local_268.Data + (longlong)(int)local_260 * 4);
            lVar23 = local_98.Elements._0_8_;
            FVar16 = local_98.Hash.SecondaryData;
            FVar34.Data = local_268.Data;
LAB_144378df0:
            if ((int)local_260 != iVar10) {
              local_26e = 0;
              `TCheckedPointerIterator<FPolygonID,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_26e);
              lVar23 = local_98.Elements._0_8_;
              FVar16 = local_98.Hash.SecondaryData;
            }
            if ((FPolygonID *)FVar34.Data == pFVar15) break;
            FVar33 = *(FPolygonID *)FVar34.Data;
            if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
              FVar17 = (ForElementType<FSetElementId>)&local_98.Hash;
              if (FVar16 != (ForElementType<FSetElementId>)0x0) {
                FVar17 = FVar16;
              }
              uVar20 = (ulonglong)(local_98.HashSize - 1U & (uint)FVar33);
              iVar11 = *(int *)((longlong)FVar17 + uVar20 * 4);
              if (iVar11 == -1) goto LAB_144378ef1;
              do {
                if (*(FPolygonID *)(lVar23 + (longlong)iVar11 * 0x10) == FVar33) {
                  FVar17 = (ForElementType<FSetElementId>)&local_98.Hash;
                  if (FVar16 != (ForElementType<FSetElementId>)0x0) {
                    FVar17 = FVar16;
                  }
                  FVar18 = *(FPolygonID *)((longlong)FVar17 + uVar20 * 4);
                  if (FVar18 == (FPolygonID)0xffffffff) goto LAB_144378eb7;
                  goto LAB_144378ea0;
                }
                iVar11 = *(int *)(lVar23 + 8 + (longlong)iVar11 * 0x10);
              } while (iVar11 != -1);
              FVar34.Data = FVar34.Data + 4;
              goto LAB_144378df0;
            }
            goto LAB_144378ef1;
          }
          if (local_23c == 0) {
            local_208[1] = (FPolygonID)0x1;
          }
          else {
            local_208[1] = (FPolygonID)((uint)local_208[1] | local_218 | local_23c);
          }
          goto LAB_14437900f;
        }
        goto LAB_144379066;
      }
    }
    local_1a8.UnvisitedBitMask = local_1a8.UnvisitedBitMask & ~local_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a8);
    plVar26 = (longlong *)(ulonglong)local_1f4;
  } while( true );
  FVar33 = (FPolygonID)0x1;
  uVar27 = (uint)FVar28 & 1;
  while (uVar27 != 0) {
    FVar33 = (FPolygonID)((int)FVar33 * 2);
    uVar27 = (uint)FVar28 & (uint)FVar33;
  }
  local_208[1] = FVar33;
  iVar10 = (int)local_260;
  uVar20 = (ulonglong)(int)local_260;
  pFVar15 = (FPolygonID *)(local_268.Data + uVar20 * 4);
  FVar34.Data = local_268.Data;
  while( true ) {
    if ((int)uVar20 != iVar10) {
      local_26d[0] = 0;
      `TCheckedPointerIterator<FPolygonID,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_26d);
    }
    param_1 = local_210;
    if ((FPolygonID *)FVar34.Data == pFVar15) break;
    if (local_e8._8_4_ != local_b4) {
      FVar16 = (ForElementType<FSetElementId>)local_b0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_a8;
      }
      FVar28 = *(FPolygonID *)
                ((longlong)FVar16 +
                (ulonglong)(local_a0 - 1U & (uint)*(FPolygonID *)FVar34.Data) * 4);
      while (FVar28 != (FPolygonID)0xffffffff) {
        pFVar25 = (FPolygonID *)(local_e8._0_8_ + (longlong)(int)FVar28 * 0x10);
        if (*pFVar25 == *(FPolygonID *)FVar34.Data) {
          if (pFVar25 != (FPolygonID *)0x0) goto LAB_144378fcf;
          goto LAB_144378fa9;
        }
        FVar28 = pFVar25[2];
      }
    }
    pFVar25 = (FPolygonID *)0x0;
LAB_144378fa9:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_144378fcf:
    pFVar25[1] = (FPolygonID)((uint)pFVar25[1] | (uint)FVar33);
    uVar20 = local_260 & 0xffffffff;
    FVar34.Data = FVar34.Data + 4;
  }
LAB_14437900f:
  lVar23 = (longlong)(int)local_298;
  uVar27 = 0;
  if ((int)local_298 < (int)local_230) {
    uVar27 = ~(uint)local_298 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_238.Data[lVar23] = (FScriptContainerElement)0x1;
LAB_144379066:
  goto joined_r0x000144378426;
  while (FVar18 = pFVar25[2], FVar18 != (FPolygonID)0xffffffff) {
LAB_144378ea0:
    pFVar25 = (FPolygonID *)((longlong)(int)FVar18 * 0x10 + lVar23);
    if (*pFVar25 == FVar33) {
      if (pFVar25 != (FPolygonID *)0x0) goto LAB_144378eed;
      goto LAB_144378eb9;
    }
  }
LAB_144378eb7:
  pFVar25 = (FPolygonID *)0x0;
LAB_144378eb9:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  lVar23 = local_98.Elements._0_8_;
  FVar16 = local_98.Hash.SecondaryData;
  if (bVar9) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_144378eed:
  FVar28 = (FPolygonID)((uint)FVar28 | (uint)pFVar25[1]);
LAB_144378ef1:
  FVar34.Data = FVar34.Data + 4;
  goto LAB_144378df0;
joined_r0x000144378a4b:
  pFVar25 = (FPolygonID *)0x0;
  if (FVar18 == (FPolygonID)0xffffffff) goto LAB_144378a6e;
  pFVar25 = (FPolygonID *)(local_e8._0_8_ + (longlong)(int)FVar18 * 0x10);
  if (*pFVar25 == FVar33) {
    if (pFVar25 != (FPolygonID *)0x0) goto LAB_144378a97;
    goto LAB_144378a6e;
  }
  FVar18 = pFVar25[2];
  goto joined_r0x000144378a4b;
LAB_144378a6e:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar9) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_144378a97:
  pFVar25 = (FPolygonID *)(ulonglong)(uint)pFVar25[1];
LAB_144378a9b:
  if (cVar2 == '\0') {
    FVar33 = *(FPolygonID *)FVar34.Data;
    uVar27 = uVar27 | (uint)pFVar25;
    uVar21 = 0;
    if ((int)FVar33 < (int)local_230) {
      uVar21 = ~(uint)FVar33 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_238.Data[(int)FVar33] == (FScriptContainerElement)0x0) {
      if (((local_290.Data <= FVar34.Data) &&
          (FVar34.Data < (FPolygonID *)(local_290.Data + (longlong)local_288._4_4_ * 4))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (int)local_288;
      if ((int)local_288 == local_288._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_290,(int *)((longlong)&local_288 + 4));
      }
      local_288 = CONCAT44(local_288._4_4_,iVar11 + 1);
      *(FPolygonID *)(local_290.Data + (longlong)iVar11 * 4) = *(FPolygonID *)FVar34.Data;
      if (((local_280.Data <= &local_298) &&
          (&local_298 < (FPolygonID *)(local_280.Data + (longlong)(int)local_278._4_4_ * 4))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (int)local_278;
      if ((int)local_278 == local_278._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_280,(int *)((longlong)&local_278 + 4));
      }
      FVar34.Data = FVar34.Data + 4;
      local_278 = CONCAT44(local_278._4_4_,iVar11 + 1);
      *(FPolygonID *)(local_280.Data + (longlong)iVar11 * 4) = local_298;
    }
    else {
      if (((local_268.Data <= FVar34.Data) &&
          (FVar34.Data < (FPolygonID *)(local_268.Data + (longlong)(int)local_260._4_4_ * 4))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (int)local_260;
      if ((int)local_260 == local_260._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_268,(int *)((longlong)&local_260 + 4));
      }
      local_260 = CONCAT44(local_260._4_4_,iVar11 + 1);
      *(FPolygonID *)(local_268.Data + (longlong)iVar11 * 4) = *(FPolygonID *)FVar34.Data;
LAB_144378ce5:
      FVar34.Data = FVar34.Data + 4;
    }
  }
  else {
    FVar28 = (FPolygonID)((uint)FVar28 | (uint)pFVar25);
    FVar34.Data = FVar34.Data + 4;
  }
  goto LAB_144378998;
}

// ConvertSmoothGroupToHardEdges @ 144379360

void __cdecl
FStaticMeshOperations::ConvertSmoothGroupToHardEdges
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,FMeshDescription *param_2)

{
  FPolygonID *pFVar1;
  FPolygonID FVar2;
  FEdgeID FVar3;
  FPolygonID FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FMeshElementContainer *pFVar10;
  TTuple<FName,FAttributesSetEntry> *pTVar11;
  TMeshAttributeArrayBase<bool> *pTVar12;
  bool *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  TMeshAttributeArraySet<bool> *pTVar19;
  FEdgeID *pFVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  uint local_c8;
  FEdgeID *local_c0;
  uint local_b8;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_b0;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_a0;
  TElementIDs local_90;
  FEdgeID *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  TConstIterator local_60;
  
  pFVar10 = FMeshElementChannels::Get(param_2->EdgeElements,0);
  pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar10->Attributes,MeshAttribute::Edge::IsHard);
  pTVar19 = (TMeshAttributeArraySet<bool> *)&pTVar11->field_0x8;
  if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar19 = (TMeshAttributeArraySet<bool> *)0x0;
  }
  if (((pTVar19 == (TMeshAttributeArraySet<bool> *)0x0) ||
      (pTVar19 = (TMeshAttributeArraySet<bool> *)pTVar19->_padding_, (int)pTVar19->_padding_ != 5))
     || (*(int *)((longlong)&pTVar19->_padding_ + 4) != 1)) {
    pTVar19 = (TMeshAttributeArraySet<bool> *)0x0;
  }
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  pFVar10 = FMeshElementChannels::Get(param_2->PolygonElements,0);
  iVar16 = (pFVar10->BitArray).NumBits - pFVar10->NumHoles;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar16,&local_d8,(int *)&local_d0,(int *)((longlong)&local_d0 + 4));
  memset(local_d8.Data + iVar7,0,(longlong)iVar16);
  local_90.Array = &FMeshElementChannels::Get(param_2->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_90,(TConstIterator *)&local_80);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_90,&local_60);
  do {
    if ((local_80.CurrentBitIndex == local_60.Iterator.CurrentBitIndex) &&
       (local_80.Array == local_60.Iterator.Array)) {
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      return;
    }
    if (local_80.CurrentBitIndex < (local_80.Array)->NumBits) {
      uVar8 = 0;
      if (local_80.CurrentBitIndex < (int)local_d0) {
        uVar8 = (uint)~local_80.CurrentBitIndex >> 0x1f;
      }
      uVar17 = local_80.CurrentBitIndex;
      if (uVar8 == 0) goto LAB_144379480;
    }
    else {
      uVar17 = 0xffffffff;
LAB_144379480:
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
    if (local_d8.Data[(int)uVar17] == (FScriptContainerElement)0x0) {
      local_e8.Data = (FScriptContainerElement *)0x0;
      local_e0 = 0;
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
      local_e0 = CONCAT44(local_e0._4_4_,iVar7 + 1);
      *(uint *)(local_e8.Data + (longlong)iVar7 * 4) = uVar17;
      iVar7 = iVar7 + 1;
      while (0 < iVar7) {
        iVar16 = iVar7 + -1;
        FVar2 = *(FPolygonID *)((longlong)local_e8.Data + (longlong)iVar16 * 4);
        iVar9 = (iVar7 - iVar16) + -1;
        if (iVar9 != 0) {
          memmove((FPolygonID *)((longlong)local_e8.Data + (longlong)iVar16 * 4),
                  (FPolygonID *)((longlong)local_e8.Data + (longlong)iVar16 * 4) + 1,
                  (longlong)iVar9 << 2);
          iVar7 = (int)local_e0;
        }
        local_e0 = CONCAT44(local_e0._4_4_,iVar7 + -1);
        if ((((int)FVar2 < 0) || (param_1->ArrayNum <= (int)FVar2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("FaceSmoothingMasks.IsValidIndex(CurrentPolygonIDValue)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                               ,500,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar17 = 0;
        if ((int)FVar2 < param_1->ArrayNum) {
          uVar17 = ~(uint)FVar2 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_b8 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)FVar2 * 4);
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        FMeshDescription::GetPolygonPerimeterEdges<TSizedDefaultAllocator<32>_>
                  (param_2,FVar2,&local_a0);
        uVar14 = (ulonglong)local_a0.ArrayNum;
        local_c8 = local_a0.ArrayNum;
        pFVar20 = (FEdgeID *)(local_a0.AllocatorInstance.Data + uVar14 * 4);
        uVar15 = uVar14;
        FVar18.Data = local_a0.AllocatorInstance.Data;
        local_88 = pFVar20;
        while( true ) {
          local_c0 = (FEdgeID *)FVar18.Data;
          if ((int)uVar14 != (int)uVar15) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if ((FEdgeID *)FVar18.Data == pFVar20) break;
          FVar3 = *(FEdgeID *)FVar18.Data;
          pTVar12 = TMeshAttributeArraySet<bool>::GetArrayForChannel(pTVar19,0);
          pbVar13 = TMeshAttributeArrayBase<bool>::GetElementBase(pTVar12,(int)FVar3);
          if (*pbVar13 == false) {
            local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b0.ArrayNum = 0;
            local_b0.ArrayMax = 0;
            FMeshDescription::GetEdgeConnectedPolygons<TSizedDefaultAllocator<32>_>
                      (param_2,*local_c0,&local_b0);
            iVar7 = local_b0.ArrayNum;
            pFVar1 = (FPolygonID *)
                     (local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayNum * 4);
            FVar18.Data = local_b0.AllocatorInstance.Data;
LAB_144379657:
            if (local_b0.ArrayNum != iVar7) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<FPolygonID_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            if ((FPolygonID *)FVar18.Data == pFVar1) goto LAB_144379812;
            FVar4 = *(FPolygonID *)FVar18.Data;
            if (FVar4 == FVar2) {
LAB_1443797ec:
              FVar18.Data = FVar18.Data + 4;
              goto LAB_144379657;
            }
            uVar17 = 0;
            if ((int)FVar4 < (int)local_d0) {
              uVar17 = ~(uint)FVar4 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_d8.Data[(int)FVar4] != (FScriptContainerElement)0x0) goto LAB_1443797ec;
            if ((((int)FVar4 < 0) || (param_1->ArrayNum <= (int)FVar4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FaceSmoothingMasks.IsValidIndex(EdgePolygonIDValue)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                                   ,0x207,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar17 = 0;
            if ((int)FVar4 < param_1->ArrayNum) {
              uVar17 = ~(uint)FVar4 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((*(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)FVar4 * 4) & local_b8)
                != 0) {
              if (((local_e8.Data <= FVar18.Data) &&
                  (FVar18.Data < (FPolygonID *)(local_e8.Data + (longlong)local_e0._4_4_ * 4))) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar16 = (int)local_e0;
              if ((int)local_e0 == local_e0._4_4_) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_e8,(int *)((longlong)&local_e0 + 4));
              }
              local_e0 = CONCAT44(local_e0._4_4_,iVar16 + 1);
              *(FPolygonID *)(local_e8.Data + (longlong)iVar16 * 4) = *(FPolygonID *)FVar18.Data;
              goto LAB_1443797ec;
            }
            FVar3 = *local_c0;
            pTVar12 = TMeshAttributeArraySet<bool>::GetArrayForChannel(pTVar19,0);
            pbVar13 = TMeshAttributeArrayBase<bool>::GetElementBase(pTVar12,(int)FVar3);
            *pbVar13 = true;
LAB_144379812:
            pFVar20 = local_88;
            if ((FPolygonID *)local_b0.AllocatorInstance.Data != (FPolygonID *)0x0) {
              FMemory::Free(local_b0.AllocatorInstance.Data);
              pFVar20 = local_88;
            }
          }
          uVar14 = local_a0._8_8_ & 0xffffffff;
          FVar18.Data = (FScriptContainerElement *)(local_c0 + 1);
          uVar15 = (ulonglong)local_c8;
        }
        uVar17 = 0;
        if ((int)FVar2 < (int)local_d0) {
          uVar17 = ~(uint)FVar2 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_d8.Data[(int)FVar2] = (FScriptContainerElement)0x1;
        if ((FEdgeID *)local_a0.AllocatorInstance.Data != (FEdgeID *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
        iVar7 = (int)local_e0;
      }
      if ((FPolygonID *)local_e8.Data != (FPolygonID *)0x0) {
        FMemory::Free(local_e8.Data);
      }
    }
    local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
  } while( true );
}

// ConvertToRawMesh @ 144379900

void __cdecl
FStaticMeshOperations::ConvertToRawMesh
          (FMeshDescription *param_1,FRawMesh *param_2,
          TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  FVertexID FVar6;
  undefined4 uVar7;
  FScriptContainerElement *pFVar8;
  FName FVar9;
  FVertexInstanceID *pFVar10;
  longlong *plVar11;
  TVector2<float>_u_0_s_0 TVar12;
  code *pcVar13;
  ForAnyElementType *pFVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  FMeshElementContainer *pFVar25;
  TTuple<FName,FAttributesSetEntry> *pTVar26;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar27;
  TVector<float> *pTVar28;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar29;
  TVector4<float> *pTVar30;
  FPolygonGroupID *pFVar31;
  TMeshAttributeArrayBase<FName> *pTVar32;
  FName *pFVar33;
  TArrayView<FVertexInstanceID,int> *pTVar34;
  FLinearColor *this;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar35;
  TVector<float> *pTVar36;
  TTuple<FName,int> *pTVar37;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TVector2<float>_u_0_s_0 *pTVar38;
  longlong lVar39;
  undefined1 *puVar40;
  uint uVar41;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar42;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this_02;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar43;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_03;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar44;
  TMeshAttributeArraySet<FName> *this_04;
  int iVar45;
  FPolygonGroupID FVar46;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar47;
  longlong *plVar48;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this_05;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar49;
  bool bVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  uint local_res20;
  uint local_2d4;
  uint local_2d0;
  int local_2c8;
  longlong local_2b8;
  undefined8 local_2b0;
  float local_2a8;
  longlong local_2a0;
  longlong local_298;
  ForAnyElementType local_290;
  int local_288 [2];
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_280;
  TMeshAttributeArraySet<FName> *local_278;
  TElementIDs local_270;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_268;
  undefined4 local_260;
  longlong *local_258;
  FPolygonGroupID local_250;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_248;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_240;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *local_238;
  longlong local_230;
  longlong local_228;
  FTriangleID *local_220;
  longlong local_218;
  int *local_210;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_208;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_200;
  TElementIDs local_1f8;
  TElementIDs local_1f0;
  longlong local_1e8;
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  longlong *local_1d0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_1c8;
  longlong local_1c0;
  FTriangleID *local_1b8;
  int *local_1b0;
  TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  TArrayView<FTriangleID_const_,int> local_140;
  TConstIterator local_130;
  TConstIterator local_110;
  TConstIterator local_f0;
  TArrayView<FVertexInstanceID,int> local_d0;
  FLinearColor local_c0 [8];
  
  bVar50 = -1 < CpuChannel->Enabled;
  if (bVar50) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId539,"FStaticMeshOperations::ConvertToRawMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x21b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId539);
  }
  FRawMesh::Empty(param_2);
  pFVar25 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pTVar26 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::Vertex::Position);
  pTVar47 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  pTVar42 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar26->field_0x8;
  if (pTVar26 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar42 = pTVar47;
  }
  if (((pTVar42 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar42 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar42->_padding_,
      (int)pTVar42->_padding_ != 1)) || (*(int *)((longlong)&pTVar42->_padding_ + 4) != 1)) {
    pTVar42 = pTVar47;
  }
  pFVar25 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar26 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::Normal);
  pTVar49 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar26->field_0x8;
  if (pTVar26 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar49 = pTVar47;
  }
  if (((pTVar49 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (local_280 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar49->_padding_,
      (int)local_280->_padding_ != 1)) || (*(int *)((longlong)&local_280->_padding_ + 4) != 1)) {
    local_280 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar25 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar26 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::Tangent);
  pTVar49 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar26->field_0x8;
  if (pTVar26 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar49 = pTVar47;
  }
  if (((pTVar49 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (local_240 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar49->_padding_,
      (int)local_240->_padding_ != 1)) || (*(int *)((longlong)&local_240->_padding_ + 4) != 1)) {
    local_240 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pTVar49 = local_240;
  pFVar25 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar26 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  pTVar44 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar26->field_0x8;
  if (pTVar26 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar44 = pTVar47;
  }
  if (((pTVar44 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (local_1e8 = pTVar44->_padding_, *(int *)(local_1e8 + 8) != 3)) ||
     (*(int *)(local_1e8 + 0xc) != 1)) {
    local_1e8 = 0;
  }
  pFVar25 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar26 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::Color);
  plVar48 = (longlong *)&pTVar26->field_0x8;
  if (pTVar26 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar48 = (longlong *)0x0;
  }
  if (((plVar48 == (longlong *)0x0) ||
      (local_238 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)*plVar48,
      (int)local_238->_padding_ != 0)) || (*(int *)((longlong)&local_238->_padding_ + 4) != 1)) {
    local_238 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  }
  this_05 = local_238;
  pFVar25 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar26 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  plVar48 = (longlong *)&pTVar26->field_0x8;
  if (pTVar26 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar48 = (longlong *)0x0;
  }
  if (((plVar48 == (longlong *)0x0) ||
      (this_03 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar48,
      (int)this_03->_padding_ != 2)) || (*(int *)((longlong)&this_03->_padding_ + 4) != 1)) {
    this_03 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  pFVar25 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
  pTVar26 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  plVar48 = (longlong *)&pTVar26->field_0x8;
  if (pTVar26 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar48 = (longlong *)0x0;
  }
  if (((plVar48 == (longlong *)0x0) ||
      (local_278 = (TMeshAttributeArraySet<FName> *)*plVar48, (int)local_278->_padding_ != 6)) ||
     (*(int *)((longlong)&local_278->_padding_ + 4) != 1)) {
    local_278 = (TMeshAttributeArraySet<FName> *)0x0;
  }
  this_04 = local_278;
  pFVar25 = FMeshElementChannels::Get(param_1->VertexElements,0);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed
            (&param_2->VertexPositions,(pFVar25->BitArray).NumBits - pFVar25->NumHoles);
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288[0] = 0;
  local_288[1] = 0;
  pFVar25 = FMeshElementChannels::Get(param_1->VertexElements,0);
  iVar45 = (pFVar25->BitArray).NumBits;
  iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar45,&local_290,local_288,local_288 + 1);
  memset(local_290.Data + (longlong)iVar22 * 4,0,(longlong)iVar45 << 2);
  local_res20 = 0;
  local_1f8.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_1f8,(TConstIterator *)&local_1a0);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_1f8,&local_130);
  local_2b8 = 0;
  while ((local_1a0.CurrentBitIndex != local_130.Iterator.CurrentBitIndex ||
         (local_1a0.Array != local_130.Iterator.Array))) {
    uVar24 = 0xffffffff;
    if (local_1a0.CurrentBitIndex < (local_1a0.Array)->NumBits) {
      uVar24 = local_1a0.CurrentBitIndex;
    }
    pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar42,0);
    pTVar28 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar27,uVar24);
    uVar4 = *(undefined8 *)&pTVar28->field0_0x0;
    fVar5 = (pTVar28->field0_0x0)._s_0.Z;
    uVar41 = 0;
    if ((int)local_res20 < (param_2->VertexPositions).ArrayNum) {
      uVar41 = ~local_res20 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar8 = (param_2->VertexPositions).AllocatorInstance.Data;
    *(undefined8 *)(pFVar8 + local_2b8) = uVar4;
    *(float *)(pFVar8 + local_2b8 + 8) = fVar5;
    uVar41 = 0;
    if ((int)uVar24 < local_288[0]) {
      uVar41 = ~uVar24 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_2b8 = local_2b8 + 0xc;
    *(uint *)(local_290.Data + (longlong)(int)uVar24 * 4) = local_res20;
    local_res20 = local_res20 + 1;
    local_1a0.UnvisitedBitMask = local_1a0.UnvisitedBitMask & ~local_1a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
  }
  pFVar25 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  iVar45 = (pFVar25->BitArray).NumBits - pFVar25->NumHoles;
  local_210 = &(param_2->FaceMaterialIndices).ArrayNum;
  iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar45,(ForAnyElementType *)param_2,local_210,
                      &(param_2->FaceMaterialIndices).ArrayMax);
  memset((param_2->FaceMaterialIndices).AllocatorInstance.Data + (longlong)iVar22 * 4,0,
         (longlong)iVar45 << 2);
  local_208 = &param_2->FaceSmoothingMasks;
  local_1b0 = &(param_2->FaceSmoothingMasks).ArrayNum;
  iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar45,&local_208->AllocatorInstance,local_1b0,
                      &(param_2->FaceSmoothingMasks).ArrayMax);
  memset((local_208->AllocatorInstance).Data + (longlong)iVar22 * 4,0,(longlong)iVar45 << 2);
  pFVar25 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar26 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar25->Attributes,MeshAttribute::VertexInstance::Color);
  pTVar42 = local_280;
  uVar18 = FLinearColor::White.field0_0x0._s_0.A;
  uVar17 = FLinearColor::White.field0_0x0._s_0.B;
  uVar16 = FLinearColor::White.field0_0x0._s_0.G;
  uVar7 = FLinearColor::White.field0_0x0._s_0.R;
  plVar48 = (longlong *)&pTVar26->field_0x8;
  if (pTVar26 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar48 = (longlong *)0x0;
  }
  if (((plVar48 == (longlong *)0x0) ||
      (this_02 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)*plVar48,
      (int)this_02->_padding_ != 0)) || (*(int *)((longlong)&this_02->_padding_ + 4) != 1)) {
    this_02 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  }
  bVar20 = false;
  local_1f0.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
            (&local_1f0,(TConstIterator *)&local_180);
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_1f0,&local_110);
  while( true ) {
    if ((local_180.CurrentBitIndex == local_110.Iterator.CurrentBitIndex) &&
       (local_180.Array == local_110.Iterator.Array)) goto LAB_144379fce;
    iVar22 = -1;
    if (local_180.CurrentBitIndex < (local_180.Array)->NumBits) {
      iVar22 = local_180.CurrentBitIndex;
    }
    pTVar29 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel(this_02,0);
    pTVar30 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase(pTVar29,iVar22);
    if (((((float)uVar7 != (pTVar30->field0_0x0)._s_0.X) ||
         ((float)uVar16 != (pTVar30->field0_0x0)._s_0.Y)) ||
        ((float)uVar17 != (pTVar30->field0_0x0)._s_0.Z)) ||
       ((float)uVar18 != (pTVar30->field0_0x0)._s_0.W)) break;
    local_180.UnvisitedBitMask = local_180.UnvisitedBitMask & ~local_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
  }
  bVar20 = true;
  local_268 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)(iVar45 * 3) * 4);
  iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar45 * 3,&(param_2->WedgeColors).AllocatorInstance,
                      &(param_2->WedgeColors).ArrayNum,&(param_2->WedgeColors).ArrayMax);
  memset((param_2->WedgeColors).AllocatorInstance.Data + (longlong)iVar22 * 4,0,(size_t)local_268);
LAB_144379fce:
  iVar45 = iVar45 * 3;
  local_248 = &param_2->WedgeIndices;
  iVar22 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar45,&local_248->AllocatorInstance,&(param_2->WedgeIndices).ArrayNum,
                      &(param_2->WedgeIndices).ArrayMax);
  memset((local_248->AllocatorInstance).Data + (longlong)iVar22 * 4,0,(longlong)iVar45 * 4);
  local_200 = &param_2->WedgeTangentX;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed(local_200,iVar45);
  local_1c8 = &param_2->WedgeTangentY;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed(local_1c8,iVar45);
  local_268 = &param_2->WedgeTangentZ;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed(local_268,iVar45);
  lVar39 = (longlong)(this_03->ArrayForChannels).ArrayNum;
  local_1c0 = lVar39;
  if (0 < lVar39) {
    iVar22 = 0;
    pTVar43 = param_2->WedgeTexCoords;
    do {
      iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,4,iVar45,&param_2->WedgeTexCoords[iVar22].AllocatorInstance,
                          &param_2->WedgeTexCoords[iVar22].ArrayNum,
                          &param_2->WedgeTexCoords[iVar22].ArrayMax);
      memset((pTVar43->AllocatorInstance).Data + (longlong)iVar23 * 8,0,(longlong)iVar45 * 8);
      iVar22 = iVar22 + 1;
      pTVar43 = pTVar43 + 1;
      lVar39 = lVar39 + -1;
      this_04 = local_278;
      this_05 = local_238;
      pTVar49 = local_240;
      pTVar42 = local_280;
    } while (lVar39 != 0);
  }
  local_2d4 = 0;
  local_2d0 = 0;
  local_270.Array = &FMeshElementChannels::Get(param_1->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_270,(TConstIterator *)&local_160);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_270,&local_f0);
  fVar15 = __real_3f800000;
  fVar5 = __real_322bcc77;
  local_2b8 = 0;
  local_2a0 = 0;
  do {
    if ((local_160.CurrentBitIndex == local_f0.Iterator.CurrentBitIndex) &&
       (local_160.Array == local_f0.Iterator.Array)) {
      ConvertHardEdgesToSmoothGroup(param_1,&param_2->FaceSmoothingMasks);
      if (local_290.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data);
      }
      if (bVar50) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    iVar45 = -1;
    if (local_160.CurrentBitIndex < (local_160.Array)->NumBits) {
      iVar45 = local_160.CurrentBitIndex;
    }
    pFVar31 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                        (&param_1->PolygonPolygonGroups,iVar45);
    FVar46 = *pFVar31;
    local_250 = FVar46;
    FMeshElementIndexer::Find<FTriangleID>(&param_1->PolygonToTriangles,&local_140,iVar45,0);
    local_220 = local_140.DataPtr;
    local_1b8 = local_140.DataPtr + local_140.ArrayNum;
    if (local_140.DataPtr != local_1b8) {
      local_1a8 = &param_1->TriangleVertexInstances;
      local_1d0 = (longlong *)(local_1e8 + 0x18);
      local_218 = local_2b8 * 4;
      do {
        if (0 < *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34) {
          pTVar32 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_04,0);
          pFVar33 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar32,(int)FVar46);
          FVar9 = *pFVar33;
          uVar24 = ::GetTypeHash(FVar9.ComparisonIndex.Value);
          if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
            puVar40 = &param_3->field_0x38;
            if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
              puVar40 = *(undefined1 **)&param_3->field_0x40;
            }
            iVar45 = *(int *)(puVar40 +
                             (ulonglong)(*(int *)&param_3->field_0x48 - 1U & FVar9.Number + uVar24)
                             * 4);
            if (iVar45 != -1) {
              do {
                if (*(FName *)(*(longlong *)param_3 + (longlong)iVar45 * 0x14) == FVar9) {
                  pTVar32 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_04,0);
                  pFVar33 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar32,(int)FVar46);
                  pTVar37 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                                    *)param_3,*pFVar33);
                  if ((pTVar37 == (TTuple<FName,int> *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,0x27b,L""), bVar21)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  uVar7 = *(undefined4 *)&pTVar37->field_0x8;
                  uVar41 = ~local_2d4 >> 0x1f;
                  uVar24 = 0;
                  if ((int)local_2d4 < *local_210) {
                    uVar24 = uVar41;
                  }
                  if ((uVar24 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  *(undefined4 *)((param_2->FaceMaterialIndices).AllocatorInstance.Data + local_218)
                       = uVar7;
                  goto LAB_14437a32f;
                }
                iVar45 = *(int *)(*(longlong *)param_3 + 0xc + (longlong)iVar45 * 0x14);
              } while (iVar45 != -1);
            }
          }
        }
        uVar41 = ~local_2d4 >> 0x1f;
        uVar24 = 0;
        if ((int)local_2d4 < *local_210) {
          uVar24 = uVar41;
        }
        if ((uVar24 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        *(FPolygonGroupID *)((param_2->FaceMaterialIndices).AllocatorInstance.Data + local_2b8 * 4)
             = FVar46;
LAB_14437a32f:
        if (((uVar41 & (int)local_2d4 < *local_1b0) == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_2c8 = 0;
        local_228 = 0;
        local_230 = 0;
        *(undefined4 *)((local_208->AllocatorInstance).Data + local_2b8 * 4) = 0;
        local_298 = local_2a0 * 0xc;
        do {
          pTVar34 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                              (local_1a8,&local_d0,(int)*local_220);
          pFVar10 = pTVar34->DataPtr;
          if ((pTVar34->ArrayNum <= local_2c8) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar45 = *(int *)(&pFVar10->field_0x0 + local_228);
          if (bVar20) {
            pTVar29 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel
                                (this_05,0);
            pTVar30 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                                (pTVar29,iVar45);
            this = FLinearColor::FLinearColor(local_c0,pTVar30);
            FLinearColor::ToFColorSRGB(this);
            uVar7 = local_260;
            uVar24 = 0;
            if ((int)local_2d0 < (param_2->WedgeColors).ArrayNum) {
              uVar24 = ~local_2d0 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            *(undefined4 *)((param_2->WedgeColors).AllocatorInstance.Data + local_2a0 * 4) = uVar7;
          }
          this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                              ((TMeshAttributeArraySet<FVertexID> *)
                               (param_1->VertexInstanceVertices).ArrayPtr,0);
          pFVar35 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar45);
          FVar6 = *pFVar35;
          uVar24 = 0;
          if ((int)FVar6 < local_288[0]) {
            uVar24 = ~(uint)FVar6 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar7 = *(undefined4 *)(local_290.Data + (longlong)(int)FVar6 * 4);
          uVar24 = 0;
          if ((int)local_2d0 < local_248->ArrayNum) {
            uVar24 = ~local_2d0 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          *(undefined4 *)((local_248->AllocatorInstance).Data + local_2a0 * 4) = uVar7;
          pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar49,0)
          ;
          pTVar28 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar27,iVar45);
          uVar4 = *(undefined8 *)&pTVar28->field0_0x0;
          fVar51 = (pTVar28->field0_0x0)._s_0.Z;
          uVar24 = 0;
          if ((int)local_2d0 < local_200->ArrayNum) {
            uVar24 = ~local_2d0 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar8 = (local_200->AllocatorInstance).Data;
          *(undefined8 *)(pFVar8 + local_298) = uVar4;
          *(float *)(pFVar8 + local_298 + 8) = fVar51;
          pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar49,0)
          ;
          pTVar28 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar27,iVar45);
          pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar42,0)
          ;
          pTVar36 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar27,iVar45);
          plVar48 = local_1d0;
          fVar51 = (pTVar28->field0_0x0)._s_0.Z;
          fVar1 = (pTVar28->field0_0x0)._s_0.X;
          fVar2 = (pTVar28->field0_0x0)._s_0.Y;
          fVar3 = (pTVar36->field0_0x0)._s_0.X;
          fVar52 = fVar51 * (pTVar36->field0_0x0)._s_0.Y - fVar2 * (pTVar36->field0_0x0)._s_0.Z;
          fVar53 = fVar1 * (pTVar36->field0_0x0)._s_0.Z - fVar3 * fVar51;
          local_1d8 = fVar3 * fVar2 - fVar1 * (pTVar36->field0_0x0)._s_0.Y;
          fVar51 = fVar53 * fVar53 + fVar52 * fVar52 + local_1d8 * local_1d8;
          if (fVar51 == fVar15) {
            local_2b0 = CONCAT44(fVar53,fVar52);
            local_2a8 = local_1d8;
          }
          else if (fVar5 <= fVar51) {
            fVar51 = __real_3f800000 / SQRT(fVar51);
            local_2a8 = local_1d8 * fVar51;
            local_2b0 = CONCAT44(fVar53 * fVar51,fVar52 * fVar51);
          }
          else {
            local_2b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            local_2a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          }
          _local_1e0 = CONCAT44(fVar53,fVar52);
          if (((int)local_1d0[4] < 1) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          plVar11 = (longlong *)plVar48[3];
          local_258 = plVar48;
          if (plVar11 != (longlong *)0x0) {
            local_258 = plVar11;
          }
          uVar41 = iVar45 * (int)local_258[2];
          uVar24 = 0;
          if ((int)uVar41 < (int)local_258[1]) {
            uVar24 = ~uVar41 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pTVar19 = local_1c8;
          fVar51 = *(float *)(*local_258 + (longlong)(int)uVar41 * 4);
          uVar24 = 0;
          if ((int)local_2d0 < local_1c8->ArrayNum) {
            uVar24 = ~local_2d0 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar8 = (pTVar19->AllocatorInstance).Data;
          *(float *)(pFVar8 + local_298) = fVar51 * (float)local_2b0;
          *(float *)(pFVar8 + local_298 + 4) = fVar51 * local_2b0._4_4_;
          *(float *)(pFVar8 + local_298 + 8) = fVar51 * local_2a8;
          pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar42,0)
          ;
          pTVar28 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar27,iVar45);
          uVar4 = *(undefined8 *)&pTVar28->field0_0x0;
          fVar51 = (pTVar28->field0_0x0)._s_0.Z;
          uVar24 = 0;
          if ((int)local_2d0 < local_268->ArrayNum) {
            uVar24 = ~local_2d0 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar8 = (local_268->AllocatorInstance).Data;
          *(undefined8 *)(pFVar8 + local_298) = uVar4;
          *(float *)(pFVar8 + local_298 + 8) = fVar51;
          if (0 < local_1c0) {
            iVar22 = 0;
            local_258 = (longlong *)CONCAT44(local_258._4_4_,~local_2d0 >> 0x1f);
            pTVar43 = param_2->WedgeTexCoords;
            lVar39 = local_1c0;
            do {
              this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  (this_03,iVar22);
              pTVar38 = (TVector2<float>_u_0_s_0 *)
                        TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                  (this_01,iVar45);
              TVar12 = *pTVar38;
              iVar23 = 0;
              if ((int)local_2d0 < pTVar43->ArrayNum) {
                iVar23 = (int)local_258;
              }
              if ((iVar23 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar14 = &pTVar43->AllocatorInstance;
              iVar22 = iVar22 + 1;
              pTVar43 = pTVar43 + 1;
              ((TVector2<float>_u_0 *)(pFVar14->Data + local_2a0 * 8))->_s_0 = TVar12;
              lVar39 = lVar39 + -1;
              this_05 = local_238;
              pTVar49 = local_240;
              pTVar42 = local_280;
            } while (lVar39 != 0);
          }
          local_2d0 = local_2d0 + 1;
          local_2a0 = local_2a0 + 1;
          local_2c8 = local_2c8 + 1;
          local_230 = local_230 + 1;
          local_298 = local_298 + 0xc;
          local_228 = local_228 + 4;
        } while (local_2c8 < 3);
        local_2d4 = local_2d4 + 1;
        local_2b8 = local_2b8 + 1;
        local_220 = local_220 + 1;
        local_218 = local_218 + 4;
        this_04 = local_278;
        FVar46 = local_250;
      } while (local_220 != local_1b8);
    }
    local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
    this_04 = local_278;
  } while( true );
}

// CreateLightMapUVLayout @ 14437b080

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

bool __cdecl
FStaticMeshOperations::CreateLightMapUVLayout
          (FMeshDescription *param_1,int param_2,int param_3,int param_4,ELightmapUVVersion param_5,
          FOverlappingCorners *param_6)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  FLayoutUV local_b8;
  FLayoutUVMeshDescriptionView local_68;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1922,"FStaticMeshOperations::CreateLightMapUVLayout",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x782);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1922);
  }
  FLayoutUVMeshDescriptionView::FLayoutUVMeshDescriptionView(&local_68,param_1,param_2,param_3);
  FLayoutUV::FLayoutUV(&local_b8,(IMeshView *)&local_68);
  local_b8.LayoutVersion = param_5;
  FLayoutUV::FindCharts(&local_b8,param_6);
  uVar2 = param_4 - 2;
  if ((int)param_5 < 7) {
    uVar2 = param_4;
  }
  bVar1 = FLayoutUV::FindBestPacking(&local_b8,uVar2);
  if (bVar1) {
    FLayoutUV::CommitPackedUVs(&local_b8);
  }
  if (local_b8.MeshCharts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.MeshCharts.AllocatorInstance.Data);
  }
  if (local_b8.MeshSortedTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.MeshSortedTris.AllocatorInstance.Data);
  }
  if (local_b8.MeshTexCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.MeshTexCoords.AllocatorInstance.Data);
  }
  if (local_68.FlattenedTexCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FlattenedTexCoords.AllocatorInstance.Data);
  }
  if (local_68.RemapVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.RemapVerts.AllocatorInstance.Data);
  }
  local_68._padding_ = (longlong)&___7IMeshView_FLayoutUV__6B_;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar1;
}

// DetermineEdgeHardnessesFromVertexInstanceNormals @ 14437b2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FStaticMeshOperations::DetermineEdgeHardnessesFromVertexInstanceNormals
          (FMeshDescription *param_1,float param_2)

{
  FTriangleID *pFVar1;
  ForElementType<FPolygonID> FVar2;
  undefined8 uVar3;
  FTriangleID FVar4;
  FVertexID FVar5;
  FVertexInstanceID FVar6;
  float fVar7;
  FMeshAttributeArraySetBase *pFVar8;
  FVertexID *pFVar9;
  code *pcVar10;
  uint uVar11;
  FMeshDescription *pFVar12;
  float fVar13;
  float fVar14;
  FMeshElementIndexer *this;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  FMeshElementContainer *pFVar18;
  TTuple<FName,FAttributesSetEntry> *pTVar19;
  TArrayView<int_const_,int> *pTVar20;
  ForElementType<FPolygonID> FVar21;
  TArrayView<FVertexID,int> *pTVar22;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar23;
  TVector<float> *pTVar24;
  TMeshAttributeArrayBase<bool> *this_00;
  bool *pbVar25;
  ForElementType<FPolygonID> FVar26;
  longlong lVar27;
  FMeshAttributeArraySetBase *pFVar28;
  ForElementType<FPolygonID> FVar29;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar30;
  TMeshAttributeArraySet<bool> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar31;
  ForElementType<FPolygonID> FVar32;
  int iVar33;
  ulonglong uVar34;
  FVertexInstanceID *pFVar35;
  uint uVar36;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar37;
  FTriangleID *pFVar38;
  longlong lVar39;
  undefined1 auStackY_218 [32];
  bool local_1c8;
  undefined1 local_1c7 [3];
  int local_1c4;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_1c0;
  uint local_1b0;
  FMeshDescription *local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  float local_190;
  TElementIDs local_188;
  TMeshAttributeArraySet<bool> *local_180;
  FVertexInstanceID *local_178;
  FMeshElementIndexer *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_168;
  TArrayView<FTriangleID_const_,int> local_148;
  TArrayView<FVertexInstanceID_const_,int> local_138;
  TArrayView<FTriangleID_const_,int> local_128;
  TConstIterator local_118;
  TArrayView<int_const_,int> local_f8;
  TArrayView<FVertexID,int> local_e8;
  TArrayView<int_const_,int> local_d8;
  ForElementType<FPolygonID> local_c8;
  int local_b8;
  int local_b4;
  ForElementType<FPolygonID> local_b0;
  uint local_88;
  uint local_84;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1a8 = param_1;
  pFVar18 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::VertexInstance::Normal);
  pTVar37 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  pTVar31 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar31 = pTVar37;
  }
  if (((pTVar31 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar31 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar31->_padding_,
      (int)pTVar31->_padding_ != 1)) || (*(int *)((longlong)&pTVar31->_padding_ + 4) != 1)) {
    pTVar31 = pTVar37;
  }
  pFVar18 = FMeshElementChannels::Get(param_1->EdgeElements,0);
  pTVar19 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar18->Attributes,MeshAttribute::Edge::IsHard);
  pTVar30 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar19->field_0x8;
  if (pTVar19 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar30 = pTVar37;
  }
  if (((pTVar30 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (local_180 = (TMeshAttributeArraySet<bool> *)pTVar30->_padding_,
      (int)local_180->_padding_ != 5)) || (*(int *)((longlong)&local_180->_padding_ + 4) != 1)) {
    local_180 = (TMeshAttributeArraySet<bool> *)0x0;
  }
  this_01 = local_180;
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  local_188.Array = &FMeshElementChannels::Get(param_1->EdgeElements,0)->BitArray;
  TMeshElementContainer<FEdgeID>::TElementIDs::begin(&local_188,(TConstIterator *)&local_168);
  TMeshElementContainer<FEdgeID>::TElementIDs::end(&local_188,&local_118);
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  do {
    if ((local_168.CurrentBitIndex == local_118.Iterator.CurrentBitIndex) &&
       (local_168.Array == local_118.Iterator.Array)) {
      if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c0.AllocatorInstance.Data);
      }
      return;
    }
    local_c8.SecondaryData = (ForElementType<FPolygonID>)0x0;
    iVar33 = -1;
    if (local_168.CurrentBitIndex < (local_168.Array)->NumBits) {
      iVar33 = local_168.CurrentBitIndex;
    }
    local_b8 = 0;
    local_b4 = 2;
    local_1c4 = iVar33;
    pTVar20 = FMeshElementIndexer::Find(&param_1->EdgeToTriangles,&local_f8,iVar33,0);
    uVar16 = pTVar20->ArrayNum;
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
    local_b8 = 0;
    if (local_b4 < (int)uVar16) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                (4,4,uVar16,&local_c8,0,&local_b4);
    }
    FMeshElementIndexer::Find<FTriangleID>(&param_1->EdgeToTriangles,&local_148,iVar33,0);
    pFVar12 = local_1a8;
    pFVar1 = local_148.DataPtr + local_148.ArrayNum;
    for (pFVar38 = local_148.DataPtr; pFVar38 != pFVar1; pFVar38 = pFVar38 + 1) {
      pFVar8 = (pFVar12->TrianglePolygons).ArrayPtr;
      FVar4 = *pFVar38;
      if (((int)pFVar8[2].Type < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar28 = pFVar8 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar28 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
      }
      FVar21 = (ForElementType<FPolygonID>)
               TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                         ((TMeshAttributeArrayBase<FPolygonID> *)pFVar28,(int)FVar4);
      FVar29 = (ForElementType<FPolygonID>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar29 = local_c8.SecondaryData;
      }
      FVar32 = (ForElementType<FPolygonID>)((longlong)FVar29 + (longlong)local_b8 * 4);
      if (FVar29 != FVar32) {
        FVar26 = FVar29;
        do {
          if (*(FPolygonID *)FVar26 == *(FPolygonID *)FVar21) {
            if ((int)((longlong)FVar26 - (longlong)FVar29 >> 2) != -1) goto LAB_14437b604;
            break;
          }
          FVar26 = (ForElementType<FPolygonID>)((longlong)FVar26 + 4);
        } while (FVar26 != FVar32);
      }
      FVar29 = (ForElementType<FPolygonID>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar29 = local_c8.SecondaryData;
      }
      if ((ulonglong)FVar29 <= (ulonglong)FVar21) {
        FVar29 = (ForElementType<FPolygonID>)&local_c8;
        if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
          FVar29 = local_c8.SecondaryData;
        }
        if (((ulonglong)FVar21 < (ulonglong)((longlong)FVar29 + (longlong)local_b4 * 4)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (local_b8 == local_b4) {
        local_b8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                             (0x404,&local_c8,&local_b4);
      }
      FVar29 = (ForElementType<FPolygonID>)&local_c8;
      if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FVar29 = local_c8.SecondaryData;
      }
      lVar27 = (longlong)local_b8;
      local_b8 = local_b8 + 1;
      *(FPolygonID *)((longlong)FVar29 + lVar27 * 4) = *(FPolygonID *)FVar21;
LAB_14437b604:
      param_1 = pFVar12;
      iVar33 = local_1c4;
    }
    if (local_b8 != 0) {
      local_1c8 = local_b8 == 1;
      local_1b0 = 0;
      local_1a0 = 0;
      if (local_b8 != 1) {
        while (lVar27 = local_1a0, uVar16 = local_1b0, (int)local_1b0 < 2) {
          if ((1 < local_1b0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("VertexNumber == 0 || VertexNumber == 1",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                                  ,0x2e7,L""), bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar22 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                              (&param_1->EdgeVertices,&local_e8,iVar33);
          pFVar9 = pTVar22->DataPtr;
          uVar36 = 0;
          if ((int)uVar16 < pTVar22->ArrayNum) {
            uVar36 = ~uVar16 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar33 = local_1c0.ArrayMax;
          FVar5 = pFVar9[lVar27];
          local_1c0._8_8_ = (ulonglong)(uint)local_1c0.ArrayMax << 0x20;
          if (iVar33 < 4) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,4,&local_1c0.AllocatorInstance,0,&local_1c0.ArrayMax);
          }
          FMeshElementIndexer::Find<FVertexInstanceID>
                    (&param_1->VertexToVertexInstances,&local_138,(int)FVar5,0);
          local_178 = local_138.DataPtr + local_138.ArrayNum;
          if (local_138.DataPtr != local_178) {
            local_170 = &param_1->VertexInstanceToTriangles;
            pFVar35 = local_138.DataPtr;
            do {
              this = local_170;
              FVar6 = *pFVar35;
              local_84 = 8;
              local_b0.SecondaryData = (ForElementType<FPolygonID>)0x0;
              local_88 = 0;
              pTVar20 = FMeshElementIndexer::Find(local_170,&local_d8,(int)FVar6,0);
              uVar16 = pTVar20->ArrayNum;
              if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
              }
              local_88 = 0;
              if ((int)local_84 < (int)uVar16) {
                UE::Core::Private::
                ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                          (4,4,uVar16,&local_b0,0,(int *)&local_84);
              }
              FMeshElementIndexer::Find<FTriangleID>(this,&local_128,(int)FVar6,0);
              pFVar12 = local_1a8;
              pFVar1 = local_128.DataPtr + local_128.ArrayNum;
              pFVar38 = local_128.DataPtr;
              if (local_128.DataPtr == pFVar1) {
                uVar34 = (ulonglong)local_88;
              }
              else {
                do {
                  pFVar8 = (pFVar12->TrianglePolygons).ArrayPtr;
                  FVar4 = *pFVar38;
                  if (((int)pFVar8[2].Type < 1) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pFVar28 = pFVar8 + 1;
                  if ((FMeshAttributeArraySetBase *)pFVar8[2]._padding_ !=
                      (FMeshAttributeArraySetBase *)0x0) {
                    pFVar28 = (FMeshAttributeArraySetBase *)pFVar8[2]._padding_;
                  }
                  FVar21 = (ForElementType<FPolygonID>)
                           TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                                     ((TMeshAttributeArrayBase<FPolygonID> *)pFVar28,(int)FVar4);
                  uVar34 = (ulonglong)(int)local_88;
                  FVar29 = (ForElementType<FPolygonID>)&local_b0;
                  if (local_b0.SecondaryData != (ForElementType<FPolygonID>)0x0) {
                    FVar29 = local_b0.SecondaryData;
                  }
                  FVar32 = (ForElementType<FPolygonID>)((longlong)FVar29 + uVar34 * 4);
                  if (FVar29 != FVar32) {
                    FVar26 = FVar29;
                    do {
                      if (*(FPolygonID *)FVar26 == *(FPolygonID *)FVar21) {
                        if ((int)((longlong)FVar26 - (longlong)FVar29 >> 2) != -1)
                        goto LAB_14437b999;
                        break;
                      }
                      FVar26 = (ForElementType<FPolygonID>)((longlong)FVar26 + 4);
                    } while (FVar26 != FVar32);
                  }
                  FVar29 = (ForElementType<FPolygonID>)&local_b0;
                  if (local_b0.SecondaryData != (ForElementType<FPolygonID>)0x0) {
                    FVar29 = local_b0.SecondaryData;
                  }
                  if ((ulonglong)FVar29 <= (ulonglong)FVar21) {
                    FVar29 = (ForElementType<FPolygonID>)&local_b0;
                    if (local_b0.SecondaryData != (ForElementType<FPolygonID>)0x0) {
                      FVar29 = local_b0.SecondaryData;
                    }
                    if (((ulonglong)FVar21 <
                         (ulonglong)((longlong)FVar29 + (longlong)(int)local_84 * 4)) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar15)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  uVar16 = local_88;
                  if (local_88 == local_84) {
                    uVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                                       (0x404,&local_b0,(int *)&local_84);
                  }
                  local_88 = uVar16 + 1;
                  FVar29 = (ForElementType<FPolygonID>)&local_b0;
                  if (local_b0.SecondaryData != (ForElementType<FPolygonID>)0x0) {
                    FVar29 = local_b0.SecondaryData;
                  }
                  *(FPolygonID *)((longlong)FVar29 + (longlong)(int)uVar16 * 4) =
                       *(FPolygonID *)FVar21;
                  uVar34 = (ulonglong)local_88;
LAB_14437b999:
                  pFVar38 = pFVar38 + 1;
                  this_01 = local_180;
                } while (pFVar38 != pFVar1);
              }
              iVar33 = (int)uVar34;
              FVar29 = (ForElementType<FPolygonID>)&local_b0;
              if (local_b0.SecondaryData != (ForElementType<FPolygonID>)0x0) {
                FVar29 = local_b0.SecondaryData;
              }
              FVar21 = (ForElementType<FPolygonID>)((longlong)FVar29 + (longlong)iVar33 * 4);
              FVar32 = local_c8.SecondaryData;
              while( true ) {
                if ((int)uVar34 != iVar33) {
                  local_1c7[0] = 0;
                  `TCheckedPointerIterator<FPolygonID,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_1c7);
                  uVar34 = (ulonglong)local_88;
                  FVar32 = local_c8.SecondaryData;
                }
                if (FVar29 == FVar21) break;
                FVar26 = (ForElementType<FPolygonID>)&local_c8;
                if (FVar32 != (ForElementType<FPolygonID>)0x0) {
                  FVar26 = FVar32;
                }
                FVar2 = (ForElementType<FPolygonID>)((longlong)FVar26 + (longlong)local_b8 * 4);
                if (FVar26 != FVar2) {
                  do {
                    if (*(FPolygonID *)FVar26 == *(FPolygonID *)FVar29) {
                      TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<FVertexInstanceID_const_&>(&local_1c0,pFVar35);
                      goto LAB_14437ba36;
                    }
                    FVar26 = (ForElementType<FPolygonID>)((longlong)FVar26 + 4);
                  } while (FVar26 != FVar2);
                }
                FVar29 = (ForElementType<FPolygonID>)((longlong)FVar29 + 4);
              }
LAB_14437ba36:
              if (local_b0.SecondaryData != (ForElementType<FPolygonID>)0x0) {
                FMemory::Free((void *)local_b0.SecondaryData);
              }
              pFVar35 = pFVar35 + 1;
              lVar27 = local_1a0;
              uVar16 = local_1b0;
            } while (pFVar35 != local_178);
          }
          if (local_1c0.ArrayNum < 1) {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("UniqueVertexInstanceIDs.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                                ,0x11b,L"");
            if (bVar15) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if ((local_1c0.ArrayNum < 1) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          iVar33 = *(int *)local_1c0.AllocatorInstance.Data;
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar31,0)
          ;
          pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar23,iVar33);
          uVar36 = 1;
          uVar3 = *(undefined8 *)&pTVar24->field0_0x0;
          fVar7 = (pTVar24->field0_0x0)._s_0.Z;
          local_198 = uVar3;
          local_190 = fVar7;
          if (1 < local_1c0.ArrayNum) {
            lVar39 = 4;
            local_198._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            fVar14 = local_198._4_4_;
            local_198._0_4_ = (float)uVar3;
            fVar13 = (float)local_198;
            do {
              uVar17 = 0;
              if ((int)uVar36 < local_1c0.ArrayNum) {
                uVar17 = ~uVar36 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar33 = *(int *)(local_1c0.AllocatorInstance.Data + lVar39);
              pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                                  (pTVar31,0);
              pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                                  (pTVar23,iVar33);
              if (((param_2 < (float)((uint)((pTVar24->field0_0x0)._s_0.X - fVar13) & uVar11)) ||
                  (param_2 < (float)((uint)((pTVar24->field0_0x0)._s_0.Y - fVar14) & uVar11))) ||
                 (param_2 < (float)((uint)((pTVar24->field0_0x0)._s_0.Z - fVar7) & uVar11))) {
                local_1c8 = true;
                goto LAB_14437bc1a;
              }
              uVar36 = uVar36 + 1;
              lVar39 = lVar39 + 4;
              lVar27 = local_1a0;
            } while ((int)uVar36 < local_1c0.ArrayNum);
          }
          local_1b0 = uVar16 + 1;
          local_1a0 = lVar27 + 1;
          param_1 = local_1a8;
          iVar33 = local_1c4;
          if (local_1c8) break;
        }
      }
LAB_14437bc1a:
      this_00 = TMeshAttributeArraySet<bool>::GetArrayForChannel(this_01,0);
      pbVar25 = TMeshAttributeArrayBase<bool>::GetElementBase(this_00,local_1c4);
      *pbVar25 = local_1c8;
    }
    if (local_c8.SecondaryData != (ForElementType<FPolygonID>)0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
    local_168.UnvisitedBitMask = local_168.UnvisitedBitMask & ~local_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_168);
    param_1 = local_1a8;
  } while( true );
}

// FindOverlappingCorners @ 14437cea0

void __cdecl
FStaticMeshOperations::FindOverlappingCorners
          (FOverlappingCorners *param_1,FMeshDescription *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FVertexInstanceID FVar4;
  FVertexID FVar5;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this;
  FVertexInstanceID *pFVar6;
  float *pfVar7;
  float *pfVar8;
  code *pcVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  FMeshElementContainer *pFVar19;
  TArrayView<FVertexInstanceID,int> *pTVar20;
  TMeshAttributeArrayBase<FVertexID> *pTVar21;
  FVertexID *pFVar22;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar23;
  TVector<float> *pTVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  FTriangleID *pFVar31;
  int iVar32;
  FIdentityFunctor FVar33;
  undefined1 local_res20 [8];
  ForAnyElementType local_108;
  undefined8 local_100;
  FTriangleID *local_f8;
  uint local_f0;
  TElementIDs local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  TArrayView<FTriangleID_const_,int> local_c0;
  TArrayView<FVertexInstanceID,int> local_b0;
  TConstIterator local_a0 [3];
  
  FVar33 = (FIdentityFunctor)(-1 < CpuChannel->Enabled);
  if ((bool)FVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1759,"FStaticMeshOperations::FindOverlappingCorners",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x6df);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1759);
  }
  FMeshElementChannels::Get(param_2->VertexInstanceElements,0);
  FMeshElementChannels::Get(param_2->VertexElements,0);
  pFVar19 = FMeshElementChannels::Get(param_2->TriangleElements,0);
  uVar10 = ((pFVar19->BitArray).NumBits - pFVar19->NumHoles) * 3;
  FOverlappingCorners::Init(param_1,uVar10);
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&local_108,0,(int *)((longlong)&local_100 + 4));
  }
  this = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(param_2->VertexPositions).ArrayPtr;
  iVar28 = 0;
  local_e8.Array = &FMeshElementChannels::Get(param_2->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_e8,(TConstIterator *)&local_e0);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_e8,local_a0);
  fVar14 = __real_3ebd70a4;
  fVar13 = __real_3ea8f5c3;
  fVar12 = __real_3e99999a;
  while ((local_e0.CurrentBitIndex != local_a0[0].Iterator.CurrentBitIndex ||
         (local_e0.Array != local_a0[0].Iterator.Array))) {
    iVar32 = -1;
    if (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits) {
      iVar32 = local_e0.CurrentBitIndex;
    }
    FMeshElementIndexer::Find<FTriangleID>(&param_2->PolygonToTriangles,&local_c0,iVar32,0);
    local_f8 = local_c0.DataPtr + local_c0.ArrayNum;
    if (local_c0.DataPtr != local_f8) {
      iVar32 = iVar28 + 2;
      pFVar31 = local_c0.DataPtr;
      do {
        pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            (&param_2->TriangleVertexInstances,&local_b0,(int)*pFVar31);
        pFVar6 = pTVar20->DataPtr;
        if ((pTVar20->ArrayNum < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar4 = *pFVar6;
        pTVar21 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (param_2->VertexInstanceVertices).ArrayPtr,0);
        pFVar22 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar21,(int)FVar4);
        FVar5 = *pFVar22;
        pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
        pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar23,(int)FVar5);
        iVar17 = (int)local_100;
        if ((int)local_100 == local_100._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_108,(int *)((longlong)&local_100 + 4));
        }
        local_100 = CONCAT44(local_100._4_4_,iVar17 + 1);
        fVar1 = (pTVar24->field0_0x0)._s_0.Y;
        fVar2 = (pTVar24->field0_0x0)._s_0.X;
        fVar3 = (pTVar24->field0_0x0)._s_0.Z;
        lVar25 = (longlong)iVar17;
        *(int *)(local_108.Data + lVar25 * 0x10 + 4) = iVar28;
        *(TVector<float> **)(local_108.Data + lVar25 * 0x10 + 8) = pTVar24;
        *(float *)&local_108.Data[lVar25 * 0x10].field_0x0 =
             fVar1 * fVar13 + fVar2 * fVar12 + fVar3 * fVar14;
        pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            (&param_2->TriangleVertexInstances,&local_b0,(int)*pFVar31);
        pFVar6 = pTVar20->DataPtr;
        if ((pTVar20->ArrayNum < 2) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar4 = pFVar6[1];
        pTVar21 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (param_2->VertexInstanceVertices).ArrayPtr,0);
        pFVar22 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar21,(int)FVar4);
        FVar5 = *pFVar22;
        pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
        pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar23,(int)FVar5);
        iVar17 = (int)local_100;
        if ((int)local_100 == local_100._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_108,(int *)((longlong)&local_100 + 4));
        }
        lVar25 = (longlong)iVar17;
        local_100 = CONCAT44(local_100._4_4_,iVar17 + 1);
        *(float *)&local_108.Data[lVar25 * 0x10].field_0x0 =
             (pTVar24->field0_0x0)._s_0.Y * fVar13 + (pTVar24->field0_0x0)._s_0.X * fVar12 +
             (pTVar24->field0_0x0)._s_0.Z * fVar14;
        *(int *)(local_108.Data + lVar25 * 0x10 + 4) = iVar32 + -1;
        *(TVector<float> **)(local_108.Data + lVar25 * 0x10 + 8) = pTVar24;
        pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            (&param_2->TriangleVertexInstances,&local_b0,(int)*pFVar31);
        pFVar6 = pTVar20->DataPtr;
        if ((pTVar20->ArrayNum < 3) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar4 = pFVar6[2];
        pTVar21 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (param_2->VertexInstanceVertices).ArrayPtr,0);
        pFVar22 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(pTVar21,(int)FVar4);
        FVar5 = *pFVar22;
        pTVar23 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
        pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar23,(int)FVar5);
        iVar17 = (int)local_100;
        if ((int)local_100 == local_100._4_4_) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_108,(int *)((longlong)&local_100 + 4));
        }
        iVar28 = iVar28 + 3;
        local_100 = CONCAT44(local_100._4_4_,iVar17 + 1);
        pFVar31 = pFVar31 + 1;
        lVar25 = (longlong)iVar17;
        *(float *)&local_108.Data[lVar25 * 0x10].field_0x0 =
             (pTVar24->field0_0x0)._s_0.Y * fVar13 + (pTVar24->field0_0x0)._s_0.X * fVar12 +
             (pTVar24->field0_0x0)._s_0.Z * fVar14;
        *(int *)(local_108.Data + lVar25 * 0x10 + 4) = iVar32;
        iVar32 = iVar32 + 3;
        *(TVector<float> **)(local_108.Data + lVar25 * 0x10 + 8) = pTVar24;
      } while (pFVar31 != local_f8);
    }
    local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
  }
  AlgoImpl::
  IntroSortInternal<MeshDescriptionOperationNamespace::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<MeshDescriptionOperationNamespace::FIndexAndZ,MeshDescriptionOperationNamespace::FCompareIndexAndZ>_>
            ((FIndexAndZ *)local_108.Data,(int)local_100,FVar33,(FCompareIndexAndZ *)local_res20);
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (0 < (int)local_100) {
    local_f8 = (FTriangleID *)0x0;
    lVar25 = 0;
    iVar28 = (int)local_100;
    uVar30 = 0;
    do {
      uVar26 = uVar30 + 1;
      local_f0 = uVar26;
      if ((int)uVar26 < iVar28) {
        uVar29 = ~uVar30 >> 0x1f;
        lVar11 = lVar25;
        do {
          uVar18 = 0;
          if ((int)uVar30 < iVar28) {
            uVar18 = uVar29;
          }
          if (uVar18 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar28 = (int)local_100;
          }
          FVar15.Data = local_108.Data;
          uVar27 = ~uVar26 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar26 < iVar28) {
            uVar18 = uVar27;
          }
          if (uVar18 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar28 = (int)local_100;
          }
          if (param_3 < (float)((uint)(*(float *)(local_108.Data + lVar11 + 0x10) -
                                      *(float *)(FVar15.Data + lVar25)) & uVar10)) break;
          uVar18 = 0;
          if ((int)uVar30 < iVar28) {
            uVar18 = uVar29;
          }
          if (uVar18 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar28 = (int)local_100;
          }
          pfVar7 = *(float **)(local_108.Data + lVar25 + 8);
          uVar18 = 0;
          if ((int)uVar26 < iVar28) {
            uVar18 = uVar27;
          }
          if (uVar18 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar28 = (int)local_100;
          }
          pfVar8 = *(float **)(local_108.Data + lVar11 + 0x18);
          if ((((float)((uint)(*pfVar7 - *pfVar8) & uVar10) <= param_3) &&
              ((float)((uint)(pfVar7[1] - pfVar8[1]) & uVar10) <= param_3)) &&
             ((float)((uint)(pfVar7[2] - pfVar8[2]) & uVar10) <= param_3)) {
            uVar18 = 0;
            if ((int)uVar26 < iVar28) {
              uVar18 = uVar27;
            }
            if (uVar18 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar28 = (int)local_100;
            }
            iVar32 = *(int *)(local_108.Data + lVar11 + 0x14);
            uVar18 = 0;
            if ((int)uVar30 < iVar28) {
              uVar18 = uVar29;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FOverlappingCorners::Add(param_1,*(int *)(local_108.Data + lVar25 + 4),iVar32);
            uVar18 = 0;
            if ((int)uVar30 < (int)local_100) {
              uVar18 = uVar29;
            }
            if (uVar18 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            iVar28 = *(int *)(local_108.Data + lVar25 + 4);
            uVar18 = 0;
            if ((int)uVar26 < (int)local_100) {
              uVar18 = uVar27;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FOverlappingCorners::Add(param_1,*(int *)(local_108.Data + lVar11 + 0x14),iVar28);
            iVar28 = (int)local_100;
          }
          uVar26 = uVar26 + 1;
          lVar11 = lVar11 + 0x10;
        } while ((int)uVar26 < iVar28);
      }
      local_f8 = (FTriangleID *)((longlong)local_f8 + 1);
      lVar25 = lVar25 + 0x10;
      uVar30 = local_f0;
    } while ((int)local_f0 < iVar28);
  }
  FOverlappingCorners::FinishAdding(param_1);
  if ((FIndexAndZ *)local_108.Data != (FIndexAndZ *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if ((bool)FVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FlipPolygons @ 14437d760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FStaticMeshOperations::FlipPolygons(FMeshDescription *param_1)

{
  FVertexInstanceID *pFVar1;
  ulonglong uVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  TArrayView<FVertexInstanceID,int> *pTVar7;
  FMeshElementContainer *pFVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar10;
  TVector<float> *pTVar11;
  byte bVar12;
  longlong lVar13;
  FVertexInstanceID *pFVar14;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar15;
  FTriangleID FVar16;
  int iVar17;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar18;
  uint uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStack_188 [32];
  undefined1 local_168 [4];
  FVertexInstanceID local_164;
  TElementIDs local_160;
  longlong *local_158;
  uint uStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  FVertexInstanceID local_128;
  int local_124;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  TConstIterator local_d0;
  TArrayView<FVertexInstanceID,int> local_b0;
  undefined1 local_98 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar20;
  
  pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  pTVar20 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  local_6c = 0x80;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  local_160.Array = &FMeshElementChannels::Get(param_1->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_160,(TConstIterator *)&local_f0);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_160,&local_d0);
  while ((local_f0.CurrentBitIndex != local_d0.Iterator.CurrentBitIndex ||
         (local_f0.Array != local_d0.Iterator.Array))) {
    FVar16 = (FTriangleID)0xffffffff;
    if (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits) {
      FVar16 = (FTriangleID)local_f0.CurrentBitIndex;
    }
    pTVar7 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                       (&param_1->TriangleVertexInstances,&local_b0,(int)FVar16);
    pFVar14 = pTVar7->DataPtr;
    pFVar1 = pFVar14 + pTVar7->ArrayNum;
    for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 1) {
      local_164 = *pFVar14;
      TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>::
      Emplace<FVertexInstanceID_const_&>
                ((TSet<FVertexInstanceID,DefaultKeyFuncs<FVertexInstanceID,0>,FDefaultSetAllocator>
                  *)local_98,&local_128,(bool *)&local_164);
    }
    FMeshDescription::ReverseTriangleFacing(param_1,FVar16);
    local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
  }
  pFVar8 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::Normal);
  pTVar18 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar18 = pTVar20;
  }
  if (((pTVar18 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar18 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar18->_padding_,
      (int)pTVar18->_padding_ != 1)) || (*(int *)((longlong)&pTVar18->_padding_ + 4) != 1)) {
    pTVar18 = pTVar20;
  }
  pFVar8 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::Tangent);
  uVar24 = local_70;
  pTVar15 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar15 = pTVar20;
  }
  if (((pTVar15 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar15 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar15->_padding_,
      (int)pTVar15->_padding_ != 1)) || (*(int *)((longlong)&pTVar15->_padding_ + 4) != 1)) {
    pTVar15 = pTVar20;
  }
  local_138 = 0;
  uStack_14c = 1;
  uStack_13c = local_138;
  if (local_70 != 0) {
    pTVar21 = pTVar3;
    if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = local_78;
    }
    uVar23 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    pTVar22 = pTVar20;
    local_138 = 0;
    uVar19 = 0;
    while (uVar23 == 0) {
      iVar17 = (int)pTVar20;
      local_138 = (int)pTVar22 + 0x20;
      pTVar22 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(ulonglong)local_138;
      uVar19 = iVar17 + 1;
      pTVar20 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(ulonglong)uVar19;
      uStack_13c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar19)
      goto LAB_14437d981;
      uVar23 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar17 * 4 + 4);
    }
    uStack_14c = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_14c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_124 = (int)lVar13;
    uStack_13c = (local_138 - 1) + local_124;
    if ((int)local_70 < (int)uStack_13c) {
      uStack_13c = local_70;
    }
  }
LAB_14437d981:
  local_158 = (longlong *)local_98;
  uVar23 = local_70 & 0xffffffe0;
  iStack_130 = local_98._8_4_ - local_64;
  uStack_140 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_13c;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_14c,uVar19);
  iVar17 = (int)local_70 >> 5;
  TStack_118._28_4_ = uStack_13c;
  TStack_118.BaseBitIndex = local_138;
  uStack_f8 = CONCAT44(uStack_12c,iStack_130);
  bVar12 = (byte)local_70;
  uStack_150 = uVar19;
  local_148 = pTVar3;
  uStack_134 = uStack_13c;
  local_120 = local_158;
  TStack_118.Array = pTVar3;
  if (((int)local_70 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar19 = __xmm_80000000800000008000000080000000;
  if (uVar24 != local_70) {
    pTVar21 = pTVar3;
    if (local_78 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = local_78;
    }
    uVar24 = -1 << (bVar12 & 0x1f) &
             *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar24 == 0) {
      lVar13 = (longlong)iVar17;
      uVar23 = uVar23 + 0x20;
      iVar17 = iVar17 + 1;
      uVar24 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14437daa0;
      uVar24 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar24 = (int)lVar13 + -1 + uVar23;
    if ((int)local_70 < (int)uVar24) {
      uVar24 = local_70;
    }
  }
LAB_14437daa0:
  while( true ) {
    plVar5 = local_120;
    if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
      `TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (((TStack_118.CurrentBitIndex == uVar24) && (TStack_118.Array == pTVar3)) &&
       (plVar5 == (longlong *)local_98)) break;
    iVar17 = *(int *)(*plVar5 + (longlong)TStack_118.CurrentBitIndex * 0xc);
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar18,0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar17);
    (pTVar11->field0_0x0)._s_0.X = (float)((uint)(pTVar11->field0_0x0)._s_0.X ^ uVar19);
    (pTVar11->field0_0x0)._s_0.Y = (float)((uint)(pTVar11->field0_0x0)._s_0.Y ^ uVar19);
    (pTVar11->field0_0x0)._s_0.Z = (float)((uint)(pTVar11->field0_0x0)._s_0.Z ^ uVar19);
    pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar15,0);
    pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar17);
    (pTVar11->field0_0x0)._s_0.X = (float)((uint)(pTVar11->field0_0x0)._s_0.X ^ uVar19);
    (pTVar11->field0_0x0)._s_0.Y = (float)((uint)(pTVar11->field0_0x0)._s_0.Y ^ uVar19);
    (pTVar11->field0_0x0)._s_0.Z = (float)((uint)(pTVar11->field0_0x0)._s_0.Z ^ uVar19);
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GenerateBoxUV @ 14437e650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FStaticMeshOperations::GenerateBoxUV
          (FMeshDescription *param_1,FUVMapParameters *param_2,
          TMap<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
          *param_3)

{
  FScriptContainerElement *pFVar1;
  FVertexInstanceID *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FVertexID FVar7;
  FVertexInstanceID FVar8;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  FMeshElementContainer *pFVar23;
  longlong lVar24;
  TArrayView<FVertexID,int> *pTVar25;
  TArrayView<FVertexInstanceID,int> *pTVar26;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar27;
  TVector<float> *pTVar28;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar29;
  uint uVar30;
  FVertexInstanceID *pFVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ForAnyElementType local_348;
  undefined8 local_340;
  ForAnyElementType local_338;
  undefined8 local_330;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  int local_314;
  float local_310;
  float local_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  float fStack_2d0;
  float fStack_2cc;
  undefined8 local_2c8;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 local_2b8;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  TElementIDs local_248;
  undefined8 local_240;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 local_228;
  float local_218;
  float fStack_214;
  float local_210;
  float local_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined1 local_1f4 [12];
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  double local_178;
  double local_170;
  FVertexInstanceID *local_168;
  double *local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  TConstIterator local_138;
  undefined8 local_118;
  TArrayView<FVertexID,int> local_108;
  TArrayView<FVertexInstanceID,int> local_f8 [11];
  
  this = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(param_1->VertexPositions).ArrayPtr;
  fVar36 = (float)((param_2->Size).field0_0x0._s_0.X * (param_2->Scale).field0_0x0._s_0.X);
  fVar47 = (float)((param_2->Scale).field0_0x0._s_0.Y * (param_2->Size).field0_0x0._s_0.Y);
  local_324 = (float)((param_2->Scale).field0_0x0._s_0.Z * (param_2->Size).field0_0x0._s_0.Z);
  fVar34 = local_324 * __real_3f000000;
  fVar45 = fVar36 * __real_3f000000;
  fVar46 = fVar47 * __real_3f000000;
  local_320 = fVar47;
  local_31c = fVar45;
  local_318 = fVar46;
  pFVar23 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
             *)param_3,(pFVar23->BitArray).NumBits - pFVar23->NumHoles);
  uVar15 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  uVar14 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y;
  uVar39 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X;
  fStack_200 = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.X;
  fStack_1fc = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Y;
  local_348.Data = (FScriptContainerElement *)0x0;
  local_340 = 0;
  fStack_1f8 = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Z;
  iVar19 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x418,&local_348,(int *)((longlong)&local_340 + 4));
  iVar20 = iVar19 + 1;
  local_20c = (float)uVar39;
  fStack_208 = (float)uVar14;
  fStack_204 = (float)uVar15;
  pFVar1 = local_348.Data + (longlong)iVar19 * 0x18;
  *(undefined4 *)pFVar1 = uVar39;
  *(undefined4 *)(pFVar1 + 4) = uVar14;
  *(undefined4 *)(pFVar1 + 8) = uVar15;
  *(float *)(pFVar1 + 0xc) = fStack_200;
  *(ulonglong *)(local_348.Data + (longlong)iVar19 * 0x18 + 0x10) = CONCAT44(fStack_1f8,fStack_1fc);
  local_2a8 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.X;
  fStack_2a4 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.Y;
  fStack_2a0 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.Z;
  fStack_29c = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.X;
  fStack_298 = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Y;
  fStack_294 = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Z;
  local_340._0_4_ = iVar20;
  if (((local_348.Data <= (FScriptContainerElement *)&local_2a8) &&
      ((FScriptContainerElement *)&local_2a8 < local_348.Data + (longlong)local_340._4_4_ * 0x18))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_340 == local_340._4_4_) {
    local_340._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_348,(int *)((longlong)&local_340 + 4));
  }
  iVar20 = (int)local_340 + 1;
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18) = CONCAT44(fStack_2a4,local_2a8);
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18 + 8) =
       CONCAT44(fStack_29c,fStack_2a0);
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18 + 0x10) =
       CONCAT44(fStack_294,fStack_298);
  fStack_27c = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  local_290 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X;
  fStack_28c = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y;
  fStack_288 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  fStack_284 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.X;
  fStack_280 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Y;
  local_340._0_4_ = iVar20;
  if (((local_348.Data <= (FScriptContainerElement *)&local_290) &&
      ((FScriptContainerElement *)&local_290 < local_348.Data + (longlong)local_340._4_4_ * 0x18))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_340 == local_340._4_4_) {
    local_340._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_348,(int *)((longlong)&local_340 + 4));
  }
  iVar20 = (int)local_340 + 1;
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18) = CONCAT44(fStack_28c,local_290);
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18 + 8) =
       CONCAT44(fStack_284,fStack_288);
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18 + 0x10) =
       CONCAT44(fStack_27c,fStack_280);
  fStack_264 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  local_278 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.X;
  fStack_274 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.Y;
  fStack_270 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.Z;
  fStack_26c = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.X;
  fStack_268 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Y;
  local_340._0_4_ = iVar20;
  if (((local_348.Data <= (FScriptContainerElement *)&local_278) &&
      ((FScriptContainerElement *)&local_278 < local_348.Data + (longlong)local_340._4_4_ * 0x18))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_340 == local_340._4_4_) {
    local_340._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_348,(int *)((longlong)&local_340 + 4));
  }
  iVar20 = (int)local_340 + 1;
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18) = CONCAT44(fStack_274,local_278);
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18 + 8) =
       CONCAT44(fStack_26c,fStack_270);
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18 + 0x10) =
       CONCAT44(fStack_264,fStack_268);
  fStack_24c = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  local_260 = UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.X;
  fStack_25c = UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.Y;
  fStack_258 = UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.Z;
  fStack_254 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.X;
  fStack_250 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Y;
  local_340._0_4_ = iVar20;
  if (((local_348.Data <= (FScriptContainerElement *)&local_260) &&
      ((FScriptContainerElement *)&local_260 < local_348.Data + (longlong)local_340._4_4_ * 0x18))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_340 == local_340._4_4_) {
    local_340._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_348,(int *)((longlong)&local_340 + 4));
  }
  iVar20 = (int)local_340 + 1;
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18) = CONCAT44(fStack_25c,local_260);
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18 + 8) =
       CONCAT44(fStack_254,fStack_258);
  *(ulonglong *)(local_348.Data + (longlong)(int)local_340 * 0x18 + 0x10) =
       CONCAT44(fStack_24c,fStack_250);
  local_240 = CONCAT44(UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::RightVector.field0_0x0._s_0.X);
  fStack_238 = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Z;
  fStack_22c = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  fStack_234 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.X;
  fStack_230 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Y;
  local_340._0_4_ = iVar20;
  if (((local_348.Data <= (FScriptContainerElement *)&local_240) &&
      ((FScriptContainerElement *)&local_240 < local_348.Data + (longlong)local_340._4_4_ * 0x18))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_340 == local_340._4_4_) {
    local_340._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x418,&local_348,(int *)((longlong)&local_340 + 4));
  }
  lVar24 = (longlong)(int)local_340;
  local_340 = CONCAT44(local_340._4_4_,(int)local_340 + 1);
  *(undefined8 *)(local_348.Data + lVar24 * 0x18) = local_240;
  *(ulonglong *)(local_348.Data + lVar24 * 0x18 + 8) = CONCAT44(fStack_234,fStack_238);
  *(ulonglong *)(local_348.Data + lVar24 * 0x18 + 0x10) = CONCAT44(fStack_22c,fStack_230);
  uVar15 = UE::Math::TVector<float>::UpVector.field0_0x0._s_0.Z;
  uVar14 = UE::Math::TVector<float>::UpVector.field0_0x0._s_0.Y;
  uVar39 = UE::Math::TVector<float>::UpVector.field0_0x0._s_0.X;
  fVar41 = (float)(param_2->Position).field0_0x0._s_0.X;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = 0;
  fVar42 = (float)(param_2->Position).field0_0x0._s_0.Y;
  fVar43 = (float)(param_2->Position).field0_0x0._s_0.Z;
  fVar40 = fVar41 * UE::Math::TVector<float>::UpVector.field0_0x0._s_0.X;
  fVar33 = fVar42 * UE::Math::TVector<float>::UpVector.field0_0x0._s_0.Y;
  fVar35 = (fVar34 + fVar43) * UE::Math::TVector<float>::UpVector.field0_0x0._s_0.Z;
  iVar19 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1010,&local_338,(int *)((longlong)&local_330 + 4));
  iVar20 = iVar19 + 1;
  pFVar1 = local_338.Data + (longlong)iVar19 * 0x10;
  *(undefined4 *)pFVar1 = uVar39;
  *(undefined4 *)(pFVar1 + 4) = uVar14;
  *(undefined4 *)(pFVar1 + 8) = uVar15;
  *(float *)(pFVar1 + 0xc) = fVar40 + fVar33 + fVar35;
  local_2d8 = CONCAT44(UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::DownVector.field0_0x0._s_0.X);
  fStack_2d0 = UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  fStack_2cc = fVar41 * UE::Math::TVector<float>::DownVector.field0_0x0._s_0.X +
               fVar42 * UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Y +
               (fVar43 - fVar34) * UE::Math::TVector<float>::DownVector.field0_0x0._s_0.Z;
  local_330._0_4_ = iVar20;
  if (((local_338.Data <= (FScriptContainerElement *)&local_2d8) &&
      ((FScriptContainerElement *)&local_2d8 < local_338.Data + (longlong)local_330._4_4_ * 0x10))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_330 == local_330._4_4_) {
    local_330._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1010,&local_338,(int *)((longlong)&local_330 + 4));
  }
  iVar20 = (int)local_330 + 1;
  *(undefined8 *)(local_338.Data + (longlong)(int)local_330 * 0x10) = local_2d8;
  *(ulonglong *)(local_338.Data + (longlong)(int)local_330 * 0x10 + 8) =
       CONCAT44(fStack_2cc,fStack_2d0);
  fStack_2c0 = UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Z;
  local_2c8 = CONCAT44(UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::RightVector.field0_0x0._s_0.X);
  fStack_2bc = (fVar42 + fVar46) * UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Y +
               fVar41 * UE::Math::TVector<float>::RightVector.field0_0x0._s_0.X +
               fVar43 * UE::Math::TVector<float>::RightVector.field0_0x0._s_0.Z;
  local_330._0_4_ = iVar20;
  if (((local_338.Data <= (FScriptContainerElement *)&local_2c8) &&
      ((FScriptContainerElement *)&local_2c8 < local_338.Data + (longlong)local_330._4_4_ * 0x10))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_330 == local_330._4_4_) {
    local_330._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1010,&local_338,(int *)((longlong)&local_330 + 4));
  }
  iVar20 = (int)local_330 + 1;
  *(undefined8 *)(local_338.Data + (longlong)(int)local_330 * 0x10) = local_2c8;
  *(ulonglong *)(local_338.Data + (longlong)(int)local_330 * 0x10 + 8) =
       CONCAT44(fStack_2bc,fStack_2c0);
  fStack_304 = UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.Y;
  local_308 = UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.X;
  fStack_300 = UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.Z;
  fStack_2fc = (fVar42 - fVar46) * UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.Y +
               fVar41 * UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.X +
               fVar43 * UE::Math::TVector<float>::LeftVector.field0_0x0._s_0.Z;
  local_330._0_4_ = iVar20;
  if (((local_338.Data <= (FScriptContainerElement *)&local_308) &&
      ((FScriptContainerElement *)&local_308 < local_338.Data + (longlong)local_330._4_4_ * 0x10))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_330 == local_330._4_4_) {
    local_330._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1010,&local_338,(int *)((longlong)&local_330 + 4));
  }
  iVar20 = (int)local_330 + 1;
  *(ulonglong *)(local_338.Data + (longlong)(int)local_330 * 0x10) = CONCAT44(fStack_304,local_308);
  *(ulonglong *)(local_338.Data + (longlong)(int)local_330 * 0x10 + 8) =
       CONCAT44(fStack_2fc,fStack_300);
  local_2f8 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X;
  fStack_2f4 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y;
  fStack_2f0 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  fStack_2ec = (fVar41 + fVar45) * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X +
               fVar42 * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y +
               fVar43 * UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  local_330._0_4_ = iVar20;
  if (((local_338.Data <= (FScriptContainerElement *)&local_2f8) &&
      ((FScriptContainerElement *)&local_2f8 < local_338.Data + (longlong)local_330._4_4_ * 0x10))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((int)local_330 == local_330._4_4_) {
    local_330._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1010,&local_338,(int *)((longlong)&local_330 + 4));
  }
  iVar20 = (int)local_330 + 1;
  *(ulonglong *)(local_338.Data + (longlong)(int)local_330 * 0x10) = CONCAT44(fStack_2f4,local_2f8);
  *(ulonglong *)(local_338.Data + (longlong)(int)local_330 * 0x10 + 8) =
       CONCAT44(fStack_2ec,fStack_2f0);
  local_2e8 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.X;
  fStack_2e4 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.Y;
  fStack_2e0 = UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.Z;
  fStack_2dc = (fVar41 - fVar45) * UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.X +
               fVar42 * UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.Y +
               fVar43 * UE::Math::TVector<float>::BackwardVector.field0_0x0._s_0.Z;
  local_330._0_4_ = iVar20;
  if (((local_338.Data <= (FScriptContainerElement *)&local_2e8) &&
      ((FScriptContainerElement *)&local_2e8 < local_338.Data + (longlong)local_330._4_4_ * 0x10))
     && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar20 = (int)local_330;
  if ((int)local_330 == local_330._4_4_) {
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1010,&local_338,(int *)((longlong)&local_330 + 4));
  }
  local_330 = CONCAT44(local_330._4_4_,iVar20 + 1);
  *(ulonglong *)(local_338.Data + (longlong)iVar20 * 0x10) = CONCAT44(fStack_2e4,local_2e8);
  *(ulonglong *)(local_338.Data + (longlong)iVar20 * 0x10 + 8) = CONCAT44(fStack_2dc,fStack_2e0);
  local_248.Array = &FMeshElementChannels::Get(param_1->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin(&local_248,(TConstIterator *)&local_198);
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_248,&local_138);
  fVar45 = __real_322bcc77;
  uVar44 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  while( true ) {
    fVar46 = __real_3f800000;
    if ((local_198.CurrentBitIndex == local_138.Iterator.CurrentBitIndex) &&
       (local_198.Array == local_138.Iterator.Array)) {
      if (local_338.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data);
      }
      if (local_348.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data);
      }
      return;
    }
    iVar20 = -1;
    if (local_198.CurrentBitIndex < (local_198.Array)->NumBits) {
      iVar20 = local_198.CurrentBitIndex;
    }
    pTVar25 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&param_1->TriangleVertices,&local_108,iVar20);
    pFVar29 = pTVar25->DataPtr;
    iVar19 = pTVar25->ArrayNum;
    pTVar26 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                        (&param_1->TriangleVertexInstances,local_f8,iVar20);
    pFVar31 = pTVar26->DataPtr;
    local_314 = pTVar26->ArrayNum;
    if ((iVar19 < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar7 = *pFVar29;
    pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
    pTVar28 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar27,(int)FVar7)
    ;
    local_228 = *(undefined8 *)&pTVar28->field0_0x0;
    fVar33 = (pTVar28->field0_0x0)._s_0.Z;
    if ((iVar19 < 2) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar7 = pFVar29[1];
    pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
    pTVar28 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar27,(int)FVar7)
    ;
    local_1d8 = *(undefined8 *)&pTVar28->field0_0x0;
    local_328 = (pTVar28->field0_0x0)._s_0.Z;
    if ((iVar19 < 3) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar18)) break;
    FVar7 = pFVar29[2];
    pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
    pTVar28 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar27,(int)FVar7)
    ;
    local_1e8 = *(undefined8 *)&pTVar28->field0_0x0;
    fVar41 = (float)local_1e8 - (float)local_228;
    fVar35 = local_328 - fVar33;
    fVar40 = (float)((ulonglong)local_1e8 >> 0x20) - local_228._4_4_;
    fVar33 = (pTVar28->field0_0x0)._s_0.Z - fVar33;
    fVar42 = fVar35 * fVar40 - (local_1d8._4_4_ - local_228._4_4_) * fVar33;
    fVar35 = ((float)local_1d8 - (float)local_228) * fVar33 - fVar35 * fVar41;
    local_210 = (local_1d8._4_4_ - local_228._4_4_) * fVar41 -
                ((float)local_1d8 - (float)local_228) * fVar40;
    fVar33 = fVar35 * fVar35 + fVar42 * fVar42 + local_210 * local_210;
    if (fVar33 == fVar46) {
      fVar46 = fVar35;
      fVar33 = fVar42;
      uVar39 = local_210;
      local_1a8 = CONCAT44(fVar35,fVar42);
    }
    else if (fVar45 <= fVar33) {
      fVar40 = __real_3f800000 / SQRT(fVar33);
      fVar46 = fVar40 * fVar35;
      fVar33 = fVar40 * fVar42;
      uVar39 = fVar40 * local_210;
    }
    else {
      fVar46 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_1a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar16 = local_1a8;
      local_1a8._0_4_ = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      fVar33 = (float)local_1a8;
      uVar39 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_1a8 = uVar16;
    }
    _local_218 = CONCAT44(fVar35,fVar42);
    uVar21 = 0;
    lVar24 = 0;
    uVar30 = 0;
    lVar32 = 0;
    fVar35 = 0.0;
    iVar20 = (int)local_330;
    uVar22 = 0;
    if (0 < (int)local_330) {
      do {
        uVar21 = 0;
        if ((int)uVar30 < iVar20) {
          uVar21 = ~uVar30 >> 0x1f;
        }
        if (uVar21 == 0) {
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar20 = (int)local_330;
        }
        fVar41 = fVar46 * *(float *)(local_338.Data + lVar32 * 0x10 + 4) +
                 fVar33 * *(float *)(local_338.Data + lVar32 * 0x10) +
                 (float)uVar39 * *(float *)(local_338.Data + lVar32 * 0x10 + 8);
        fVar40 = fVar35;
        if (fVar35 <= fVar41) {
          fVar40 = fVar41;
        }
        uVar21 = uVar30;
        lVar17 = lVar32;
        if (fVar41 <= fVar35) {
          uVar21 = uVar22;
          lVar17 = lVar24;
        }
        lVar24 = lVar17;
        uVar30 = uVar30 + 1;
        lVar32 = lVar32 + 1;
        fVar35 = fVar40;
        uVar22 = uVar21;
      } while ((int)uVar30 < iVar20);
    }
    uVar22 = 0;
    if ((int)uVar21 < (int)local_340) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if (uVar22 == 0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_2b8 = *(undefined8 *)(local_348.Data + lVar24 * 0x18);
    fVar46 = *(float *)(local_348.Data + lVar24 * 0x18 + 8);
    uVar22 = 0;
    if ((int)uVar21 < (int)local_340) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    fVar33 = *(float *)(local_348.Data + lVar24 * 0x18 + 0x14);
    local_1e8 = *(undefined8 *)(local_348.Data + lVar24 * 0x18 + 0xc);
    pFVar2 = pFVar31 + local_314;
    local_30c = (float)(param_2->Position).field0_0x0._s_0.X -
                ((float)local_2b8 + (float)local_1e8) * local_31c;
    local_1c8._4_4_ = (float)((ulonglong)local_1e8 >> 0x20);
    local_328 = (float)(param_2->Position).field0_0x0._s_0.Y -
                (local_2b8._4_4_ + local_1c8._4_4_) * local_318;
    local_310 = (float)(param_2->Position).field0_0x0._s_0.Z - (fVar46 + fVar33) * fVar34;
    local_1c8 = local_1e8;
    if (pFVar31 != pFVar2) {
      local_160 = &local_178;
      local_158 = ZEXT416((uint)fVar36 & uVar44);
      fVar35 = (float)((uint)fVar47 & uVar44);
      local_148 = ZEXT416((uint)local_324 & uVar44);
      do {
        FVar8 = *pFVar31;
        this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (param_1->VertexInstanceVertices).ArrayPtr,0);
        pFVar29 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,(int)FVar8);
        FVar7 = *pFVar29;
        pTVar27 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
        pTVar28 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar27,(int)FVar7);
        dVar3 = (param_2->Rotation).Z;
        dVar4 = (param_2->Rotation).X;
        dVar5 = (param_2->Rotation).Y;
        local_118 = *(undefined8 *)&pTVar28->field0_0x0;
        dVar6 = (param_2->Rotation).W;
        dVar37 = (double)(float)local_118;
        dVar11 = (double)(float)((ulonglong)local_118 >> 0x20);
        dVar13 = (double)(pTVar28->field0_0x0)._s_0.Z;
        dVar12 = dVar5 * dVar13 - dVar3 * dVar11;
        dVar12 = dVar12 + dVar12;
        dVar10 = dVar3 * dVar37 - dVar4 * dVar13;
        dVar10 = dVar10 + dVar10;
        dVar38 = dVar4 * dVar11 - dVar5 * dVar37;
        dVar38 = dVar38 + dVar38;
        if (fVar45 < (float)local_158._0_4_) {
          fVar47 = ((float)((dVar5 * dVar38 - dVar3 * dVar10) + dVar6 * dVar12 + dVar37) - local_30c
                   ) / fVar36;
        }
        else {
          fVar47 = 0.0;
        }
        if (fVar45 < fVar35) {
          fVar40 = ((float)((dVar3 * dVar12 - dVar4 * dVar38) + dVar6 * dVar10 + dVar11) - local_328
                   ) / local_320;
        }
        else {
          fVar40 = 0.0;
        }
        if (fVar45 < (float)local_148._0_4_) {
          fVar41 = ((float)((dVar4 * dVar10 - dVar5 * dVar12) + dVar6 * dVar38 + dVar13) - local_310
                   ) / local_324;
        }
        else {
          fVar41 = 0.0;
        }
        local_178 = (double)(float)((double)(local_2b8._4_4_ * fVar40 + (float)local_2b8 * fVar47 +
                                            fVar46 * fVar41) * (param_2->UVTile).field0_0x0._s_0.X);
        local_170 = (double)(float)((double)(local_1c8._4_4_ * fVar40 + (float)local_1e8 * fVar47 +
                                            fVar33 * fVar41) * (param_2->UVTile).field0_0x0._s_0.Y);
        local_168 = pFVar31;
        TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FVertexInstanceID_const_&,UE::Math::TVector2<double>_&&>_>
                  ((TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                    *)param_3,
                   (TPairInitializer<FVertexInstanceID_const_&,UE::Math::TVector2<double>_&&> *)
                   local_1f4,(bool *)&local_168);
        pFVar31 = pFVar31 + 1;
        fVar47 = local_320;
        uVar44 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      } while (pFVar31 != pFVar2);
    }
    local_198.UnvisitedBitMask = local_198.UnvisitedBitMask & ~local_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// GenerateCylindricalUV @ 14437fae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FStaticMeshOperations::GenerateCylindricalUV
          (FMeshDescription *param_1,FUVMapParameters *param_2,
          TMap<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
          *param_3)

{
  double dVar1;
  double dVar2;
  FVertexID FVar3;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  FMeshElementContainer *pFVar13;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar14;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar15;
  TVector2<double> *pTVar16;
  TVector2<double> *pTVar17;
  uint uVar18;
  ForElementType<FVertexInstanceID> FVar19;
  FPolygonID FVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  TElementIDs local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  int local_1d4;
  TElementIDs local_1d0;
  TPairInitializer<FVertexInstanceID_const_&,UE::Math::TVector2<double>_&&> local_1c8;
  FMeshDescription *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  double local_170;
  double local_168;
  int *local_160;
  double *local_158;
  TConstIterator local_150;
  TConstIterator local_130;
  undefined8 local_110;
  TArray<FVertexInstanceID,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_100;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_228;
  this = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(param_1->VertexPositions).ArrayPtr;
  local_1e4 = (float)((param_2->Size).field0_0x0._s_0.X * (param_2->Scale).field0_0x0._s_0.X);
  dVar1 = (param_2->Position).field0_0x0._s_0.X;
  fVar33 = (float)((param_2->Scale).field0_0x0._s_0.Y * (param_2->Size).field0_0x0._s_0.Y);
  local_1e8 = (float)((param_2->Scale).field0_0x0._s_0.Z * (param_2->Size).field0_0x0._s_0.Z);
  local_1f0 = (float)(param_2->Position).field0_0x0._s_0.Y;
  local_1ec = (float)(param_2->Position).field0_0x0._s_0.Z;
  local_1f8.Array._0_4_ = fVar33;
  local_1e0 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.X;
  local_1dc = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Y;
  local_1d8 = UE::Math::TVector<float>::ForwardVector.field0_0x0._s_0.Z;
  fVar26 = local_1e4 * __real_3f000000;
  local_1c8.Value = (TVector2<double> *)param_2;
  local_1b8 = param_1;
  pFVar13 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
             *)param_3,(pFVar13->BitArray).NumBits - pFVar13->NumHoles);
  local_1d0.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
            (&local_1d0,(TConstIterator *)&local_1b0);
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_1d0,&local_150);
  while ((local_1b0.CurrentBitIndex != local_150.Iterator.CurrentBitIndex ||
         (local_1b0.Array != local_150.Iterator.Array))) {
    iVar22 = -1;
    if (local_1b0.CurrentBitIndex < (local_1b0.Array)->NumBits) {
      iVar22 = local_1b0.CurrentBitIndex;
    }
    local_1d4 = iVar22;
    this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (param_1->VertexInstanceVertices).ArrayPtr,0);
    pFVar14 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar22);
    FVar3 = *pFVar14;
    this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
    pTVar15 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,(int)FVar3)
    ;
    dVar2 = (param_2->Rotation).X;
    dVar29 = (param_2->Rotation).Y;
    dVar28 = (param_2->Rotation).Z;
    local_110 = *(undefined8 *)&pTVar15->field0_0x0;
    dVar30 = (param_2->Rotation).W;
    dVar31 = (double)(float)((ulonglong)local_110 >> 0x20);
    dVar32 = (double)(pTVar15->field0_0x0)._s_0.Z;
    dVar8 = (double)(float)local_110;
    dVar7 = dVar29 * dVar32 - dVar28 * dVar31;
    dVar7 = dVar7 + dVar7;
    dVar5 = dVar28 * dVar8 - dVar2 * dVar32;
    dVar5 = dVar5 + dVar5;
    dVar6 = dVar2 * dVar31 - dVar29 * dVar8;
    dVar6 = dVar6 + dVar6;
    fVar33 = ((float)((dVar7 * dVar28 - dVar6 * dVar2) + dVar5 * dVar30 + dVar31) - local_1f0) /
             fVar33;
    fVar34 = ((float)((dVar5 * dVar2 - dVar7 * dVar29) + dVar6 * dVar30 + dVar32) - local_1ec) /
             local_1e8;
    fVar27 = FGenericPlatformMath::Atan2(fVar34,fVar33);
    local_160 = &local_1d4;
    local_158 = &local_170;
    local_170 = (double)((float)((double)(fVar27 + __real_40490fdb) *
                                (param_2->UVTile).field0_0x0._s_0.X) * __real_3e22f983);
    local_168 = (double)(float)((double)((((float)((dVar6 * dVar29 - dVar5 * dVar28) +
                                                  dVar7 * dVar30 + dVar8) - ((float)dVar1 - fVar26))
                                         / local_1e4) * local_1e0 + fVar33 * local_1dc +
                                        fVar34 * local_1d8) * (param_2->UVTile).field0_0x0._s_0.Y);
    TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVertexInstanceID_const_&,UE::Math::TVector2<double>_&&>_>
              ((TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                *)param_3,&local_1c8,(bool *)&local_160);
    local_1b0.UnvisitedBitMask = local_1b0.UnvisitedBitMask & ~local_1b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1b0);
    fVar33 = local_1f8.Array._0_4_;
  }
  local_1f8.Array = &FMeshElementChannels::Get(param_1->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_1f8,(TConstIterator *)&local_190);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_1f8,&local_130);
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3fe0000000000000;
  dVar1 = __real_3ff0000000000000;
  do {
    if ((local_190.CurrentBitIndex == local_130.Iterator.CurrentBitIndex) &&
       (local_190.Array == local_130.Iterator.Array)) {
      return;
    }
    local_100.AllocatorInstance.SecondaryData = (ForElementType<FVertexInstanceID>)0x0;
    local_100.ArrayNum = 0;
    FVar20 = (FPolygonID)0xffffffff;
    if (local_190.CurrentBitIndex < (local_190.Array)->NumBits) {
      FVar20 = (FPolygonID)local_190.CurrentBitIndex;
    }
    local_100.ArrayMax = 4;
    FMeshDescription::
    GetPolygonVertexInstances<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              (param_1,FVar20,&local_100);
    iVar22 = local_100.ArrayNum;
    if (1 < local_100.ArrayNum) {
      uVar25 = 1;
      lVar24 = 0;
      uVar18 = 0;
      do {
        uVar23 = uVar18 + 1;
        uVar21 = uVar25;
        if (iVar22 <= (int)uVar23) {
          uVar21 = (int)uVar23 % iVar22;
        }
        uVar12 = 0;
        if ((int)uVar18 < local_100.ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_200 = (longlong)local_100.ArrayNum;
          local_208 = lVar24;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar19 = (ForElementType<FVertexInstanceID>)&local_100;
        if (local_100.AllocatorInstance.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
          FVar19 = local_100.AllocatorInstance.SecondaryData;
        }
        pTVar16 = TMapBase<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
                  ::FindChecked((TMapBase<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
                                 *)param_3,(FVertexInstanceID *)((longlong)FVar19 + lVar24 * 4));
        uVar18 = 0;
        if ((int)uVar21 < local_100.ArrayNum) {
          uVar18 = ~uVar21 >> 0x1f;
        }
        if (uVar18 == 0) {
          local_208 = (longlong)(int)uVar21;
          local_200 = (longlong)local_100.ArrayNum;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar19 = (ForElementType<FVertexInstanceID>)&local_100;
        if (local_100.AllocatorInstance.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
          FVar19 = local_100.AllocatorInstance.SecondaryData;
        }
        pTVar17 = TMapBase<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
                  ::FindChecked((TMapBase<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
                                 *)param_3,
                                (FVertexInstanceID *)((longlong)FVar19 + (longlong)(int)uVar21 * 4))
        ;
        dVar29 = (pTVar17->field0_0x0)._s_0.X;
        dVar30 = (double)(float)(dVar2 / (((TVector2<double> *)((longlong)local_1c8.Value + 0x18))->
                                         field0_0x0)._s_0.X);
        dVar28 = dVar29 - (pTVar16->field0_0x0)._s_0.X;
        if (dVar30 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar10,
                                      SUB84(dVar28,0) & uVar9)) {
          if (dVar29 <= dVar30) {
            if (dVar29 <= 0.0) {
              dVar29 = dVar29 + dVar1;
              goto LAB_14438008d;
            }
          }
          else if (dVar1 <= dVar29) {
            dVar29 = dVar29 - dVar1;
LAB_14438008d:
            (pTVar17->field0_0x0)._s_0.X = dVar29;
          }
        }
        lVar24 = lVar24 + 1;
        uVar25 = uVar25 + 1;
        param_1 = local_1b8;
        uVar18 = uVar23;
      } while ((int)uVar23 < iVar22);
    }
    if (local_100.AllocatorInstance.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
      FMemory::Free((void *)local_100.AllocatorInstance.SecondaryData);
    }
    local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
  } while( true );
}

// GeneratePlanarUV @ 144380120

void __cdecl
FStaticMeshOperations::GeneratePlanarUV
          (FMeshDescription *param_1,FUVMapParameters *param_2,
          TMap<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
          *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FVertexID FVar5;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  FMeshElementContainer *pFVar19;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar20;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  TElementIDs local_res8;
  TPairInitializer<FVertexInstanceID_const_&,UE::Math::TVector2<double>_&&> local_res10;
  double local_res20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  double local_108;
  double local_100;
  TConstIterator local_f8 [6];
  
  uVar17 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  uVar15 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  uVar14 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  uVar12 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  this = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(param_1->VertexPositions).ArrayPtr;
  pFVar19 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
             *)param_3,(pFVar19->BitArray).NumBits - pFVar19->NumHoles);
  dVar10 = (param_2->Size).field0_0x0._s_0.X * (param_2->Scale).field0_0x0._s_0.X;
  dVar11 = (param_2->Scale).field0_0x0._s_0.Y * (param_2->Size).field0_0x0._s_0.Y;
  dVar23 = (param_2->Scale).field0_0x0._s_0.Z * (param_2->Size).field0_0x0._s_0.Z;
  dVar24 = dVar23 * __real_3fe0000000000000;
  local_res10.Value =
       (TVector2<double> *)
       ((param_2->Position).field0_0x0._s_0.X - dVar10 * __real_3fe0000000000000);
  local_res20 = (param_2->Position).field0_0x0._s_0.Y - dVar11 * __real_3fe0000000000000;
  dVar1 = (param_2->Position).field0_0x0._s_0.Z;
  local_res8.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
            (&local_res8,(TConstIterator *)&local_128);
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_res8,local_f8);
  pTVar18 = local_f8[0].Iterator.Array;
  while( true ) {
    if ((local_128.CurrentBitIndex == local_f8[0].Iterator.CurrentBitIndex) &&
       (local_128.Array == pTVar18)) break;
    iVar22 = -1;
    if (local_128.CurrentBitIndex < (local_128.Array)->NumBits) {
      iVar22 = local_128.CurrentBitIndex;
    }
    local_res8.Array._0_4_ = iVar22;
    this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                        ((TMeshAttributeArraySet<FVertexID> *)
                         (param_1->VertexInstanceVertices).ArrayPtr,0);
    pFVar20 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar22);
    FVar5 = *pFVar20;
    this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
    pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,(int)FVar5)
    ;
    dVar2 = (param_2->Rotation).Y;
    dVar26 = (param_2->Rotation).Z;
    dVar3 = (param_2->Rotation).X;
    dVar4 = (param_2->Rotation).W;
    dVar25 = (double)(pTVar21->field0_0x0)._s_0.X;
    dVar6 = (double)(pTVar21->field0_0x0)._s_0.Y;
    dVar8 = (double)(pTVar21->field0_0x0)._s_0.Z;
    dVar7 = dVar2 * dVar8 - dVar26 * dVar6;
    dVar7 = dVar7 + dVar7;
    dVar9 = dVar26 * dVar25 - dVar3 * dVar8;
    dVar9 = dVar9 + dVar9;
    dVar27 = dVar3 * dVar6 - dVar2 * dVar25;
    dVar27 = dVar27 + dVar27;
    dVar25 = (((dVar27 * dVar2 - dVar9 * dVar26) + dVar7 * dVar4 + dVar25) -
             (double)local_res10.Value) / dVar10;
    dVar26 = (((dVar7 * dVar26 - dVar27 * dVar3) + dVar9 * dVar4 + dVar6) - local_res20) / dVar11;
    dVar2 = (((dVar9 * dVar3 - dVar7 * dVar2) + dVar27 * dVar4 + dVar8) - (dVar1 - dVar24)) / dVar23
    ;
    local_f8[0].Iterator._padding_ = (longlong)&local_res8;
    local_f8[0].Iterator.Array = (TBitArray<FDefaultBitArrayAllocator> *)&local_108;
    local_108 = (double)(float)(((double)uVar13 * dVar26 + (double)uVar12 * dVar25 +
                                (double)uVar14 * dVar2) * (param_2->UVTile).field0_0x0._s_0.X);
    local_100 = (double)(float)(((double)uVar16 * dVar26 + (double)uVar15 * dVar25 +
                                (double)uVar17 * dVar2) * (param_2->UVTile).field0_0x0._s_0.Y);
    TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVertexInstanceID_const_&,UE::Math::TVector2<double>_&&>_>
              ((TSet<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                *)param_3,&local_res10,(bool *)local_f8);
    local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
  }
  return;
}

// GenerateUV @ 144380580

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

bool __cdecl
FStaticMeshOperations::GenerateUV
          (FMeshDescription *param_1,FGenerateUVOptions *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  FMeshElementContainer *pFVar9;
  TTuple<FName,FAttributesSetEntry> *pTVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  bool bVar14;
  FOverlappingCorners local_128;
  FUniqueUVMeshDescriptionView local_d8;
  FLayoutUV local_78;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2138,"FStaticMeshOperations::GenerateUniqueUVsForStaticMesh"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0x85a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2138);
  }
  pFVar9 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar9->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  plVar13 = (longlong *)&pTVar10->field_0x8;
  if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar13 = (longlong *)0x0;
  }
  if (((plVar13 == (longlong *)0x0) || (plVar13 = (longlong *)*plVar13, *(int *)(plVar13 + 1) != 2))
     || (*(int *)((longlong)plVar13 + 0xc) != 1)) {
    plVar13 = (longlong *)0x0;
  }
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)plVar13[2]) {
    FUniqueUVMeshDescriptionView::FUniqueUVMeshDescriptionView
              (&local_d8,param_1,param_2->bMergeTrianglesWithIdenticalAttributes,param_3);
    FOverlappingCorners::FOverlappingCorners(&local_128,(IMeshView *)&local_d8,__real_37a7c5ac);
    FLayoutUV::FLayoutUV(&local_78,(IMeshView *)&local_d8);
    iVar7 = FLayoutUV::FindCharts(&local_78,&local_128);
    uVar8 = (int)(param_2->TextureResolution + (param_2->TextureResolution >> 0x1f & 3U)) >> 2;
    uVar12 = 0x200;
    if ((int)uVar8 < 0x200) {
      uVar12 = uVar8;
    }
    uVar8 = 0x20;
    if (0x20 < (int)uVar12) {
      uVar8 = uVar12;
    }
    iVar11 = 1;
    if ((int)(longlong)SQRT((float)iVar7) != 0) {
      iVar11 = (int)(longlong)SQRT((float)iVar7);
    }
    uVar2 = (ulonglong)(iVar11 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
    if ((int)uVar12 < (int)uVar8) {
      uVar12 = uVar8;
    }
    bVar5 = FLayoutUV::FindBestPacking(&local_78,uVar12);
    if (bVar5) {
      FLayoutUV::CommitPackedUVs(&local_78);
      if (local_d8.bMustRemap != false) {
        CopyRemappedUVs<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                  (local_d8.MeshDescription,&local_d8.RemapTriangles,(FElementIDRemappings *)0x0,
                   true,local_d8.OutputTexCoords,local_d8.OutputTexCoords);
      }
    }
    else {
      param_3->ArrayNum = 0;
      if (*piVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
      }
    }
    if (local_78.MeshCharts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.MeshCharts.AllocatorInstance.Data);
    }
    if (local_78.MeshSortedTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.MeshSortedTris.AllocatorInstance.Data);
    }
    if (local_78.MeshTexCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.MeshTexCoords.AllocatorInstance.Data);
    }
    if (local_128.EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.EmptyArray.AllocatorInstance.Data);
    }
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               local_128.Sets.AllocatorInstance.Data,local_128.Sets.ArrayNum);
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
        local_128.Sets.AllocatorInstance.Data !=
        (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      FMemory::Free(local_128.Sets.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_128.Arrays.AllocatorInstance.Data,
               local_128.Arrays.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_128.Arrays.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_128.Arrays.AllocatorInstance.Data);
    }
    if (local_128.IndexBelongsTo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.IndexBelongsTo.AllocatorInstance.Data);
    }
    if (local_d8.UniqueVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniqueVerts.AllocatorInstance.Data);
    }
    if (local_d8.RemapTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.RemapTriangles.AllocatorInstance.Data);
    }
    local_d8._padding_ = (longlong)&___7IMeshView_FLayoutUV__6B_;
  }
  bVar5 = param_3->ArrayNum == 0;
  if (!bVar5) {
    pFVar9 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    if ((param_3->ArrayNum != (pFVar9->BitArray).NumBits - pFVar9->NumHoles) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutTexCoords.IsEmpty() || OutTexCoords.Num() == MeshDescription.VertexInstances().Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                           ,0x8cb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = param_3->ArrayNum == 0;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return !bVar5;
}

// GenerateUniqueUVsForStaticMesh @ 1443808a0

bool __cdecl
FStaticMeshOperations::GenerateUniqueUVsForStaticMesh
          (FMeshDescription *param_1,int param_2,bool param_3,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  bool bVar1;
  FGenerateUVOptions local_18 [2];
  
  local_18[0].UVMethod = Legacy;
  local_18[0].TextureResolution = param_2;
  local_18[0].bMergeTrianglesWithIdenticalAttributes = param_3;
  bVar1 = GenerateUV(param_1,local_18,param_4);
  return bVar1;
}

// GetUVChartCount @ 144382580

/* WARNING: Enum "ELightmapUVVersion": Some values do not have unique names */

int __cdecl
FStaticMeshOperations::GetUVChartCount
          (FMeshDescription *param_1,int param_2,ELightmapUVVersion param_3,
          FOverlappingCorners *param_4)

{
  int iVar1;
  FLayoutUV local_b8;
  FLayoutUVMeshDescriptionView local_68;
  
  FLayoutUVMeshDescriptionView::FLayoutUVMeshDescriptionView(&local_68,param_1,param_2,0xffffffff);
  FLayoutUV::FLayoutUV(&local_b8,(IMeshView *)&local_68);
  local_b8.LayoutVersion = param_3;
  iVar1 = FLayoutUV::FindCharts(&local_b8,param_4);
  if (local_b8.MeshCharts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.MeshCharts.AllocatorInstance.Data);
  }
  if (local_b8.MeshSortedTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.MeshSortedTris.AllocatorInstance.Data);
  }
  if (local_b8.MeshTexCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.MeshTexCoords.AllocatorInstance.Data);
  }
  if (local_68.FlattenedTexCoords.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FlattenedTexCoords.AllocatorInstance.Data);
  }
  if (local_68.RemapVerts.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.RemapVerts.AllocatorInstance.Data);
  }
  return iVar1;
}

// GetUniqueVertexCount @ 144382640

int __cdecl FStaticMeshOperations::GetUniqueVertexCount(FMeshDescription *param_1)

{
  int iVar1;
  FOverlappingCorners local_58;
  
  local_58.IndexBelongsTo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.IndexBelongsTo.ArrayNum = 0;
  local_58.IndexBelongsTo.ArrayMax = 0;
  local_58.Arrays.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Arrays.ArrayNum = 0;
  local_58.Arrays.ArrayMax = 0;
  local_58.Sets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Sets.ArrayNum = 0;
  local_58.Sets.ArrayMax = 0;
  local_58.EmptyArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.EmptyArray.ArrayNum = 0;
  local_58.EmptyArray.ArrayMax = 0;
  local_58.bFinishedAdding = false;
  FindOverlappingCorners(&local_58,param_1,__real_37a7c5ac);
  iVar1 = GetUniqueVertexCount(param_1,&local_58);
  if (local_58.EmptyArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.EmptyArray.AllocatorInstance.Data);
  }
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             local_58.Sets.AllocatorInstance.Data,local_58.Sets.ArrayNum);
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_58.Sets.AllocatorInstance.Data
      != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    FMemory::Free(local_58.Sets.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.Arrays.AllocatorInstance.Data,
             local_58.Arrays.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.Arrays.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_58.Arrays.AllocatorInstance.Data);
  }
  if (local_58.IndexBelongsTo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.IndexBelongsTo.AllocatorInstance.Data);
  }
  return iVar1;
}

// GetUniqueVertexCount @ 144382700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FStaticMeshOperations::GetUniqueVertexCount(FMeshDescription *param_1,FOverlappingCorners *param_2)

{
  FVertexID FVar1;
  FVertexInstanceID FVar2;
  FVertexID *pFVar3;
  FVertexInstanceID *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  FMeshElementContainer *pFVar15;
  TTuple<FName,FAttributesSetEntry> *pTVar16;
  TArrayView<FVertexID,int> *pTVar17;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar18;
  TVector<float> *pTVar19;
  TArrayView<FVertexInstanceID,int> *pTVar20;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this;
  TVector4<float> *pTVar21;
  FLinearColor_u_0_s_0 *pFVar22;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar23;
  TVector2<float>_u_0_s_0 *pTVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  ForElementType<FSetElementId> FVar28;
  uint *puVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar32;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar33;
  longlong *plVar34;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  uint uVar35;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar36;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar37;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar38;
  bool bVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStackY_348 [32];
  uint local_2f8;
  uint local_2f0 [2];
  FScriptContainerElement *local_2e8;
  ForAnyElementType local_2e0;
  uint local_2d8;
  uint uStack_2d4;
  uint local_2d0;
  undefined8 local_2cc;
  float local_2c4;
  FVertexID *local_2c0;
  FOverlappingCorners *local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  undefined8 local_29c;
  float local_294;
  undefined8 local_290;
  float local_288;
  int local_280;
  TElementIDs local_278;
  uint *local_270;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_268;
  FMeshDescription *local_260;
  float local_258;
  float fStack_254;
  float local_250;
  undefined1 local_24c [16];
  uint local_23c;
  TBitArray<FDefaultBitArrayAllocator> *local_238;
  uint local_230;
  int local_22c;
  uint *local_220;
  uint *local_218;
  TConstIterator local_210;
  TArrayView<FVertexID,int> local_1f0;
  TArrayView<FVertexInstanceID,int> local_1e0;
  FLinearColor local_1d0;
  FScriptContainerElement aFStack_1bc [4];
  undefined8 local_1b8;
  float fStack_1b0;
  TVector<float>_u_0 TStack_1ac;
  undefined8 uStack_1a0;
  float local_198;
  TVector<float>_u_0 TStack_194;
  undefined1 local_188 [8];
  undefined8 uStack_180;
  TVector2<float>_u_0 local_178;
  TVector2<float>_u_0 TStack_170;
  TVector2<float>_u_0 local_168;
  TVector2<float>_u_0 TStack_160;
  TVector2<float>_u_0 local_158;
  TVector2<float>_u_0 TStack_150;
  TVector2<float>_u_0 local_148;
  TVector2<float>_u_0 TStack_140;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  bVar39 = -1 < CpuChannel->Enabled;
  local_2b8 = param_2;
  local_260 = param_1;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2788,"FStaticMeshOperations::GetUniqueVertexCount",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
               ,0xae4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2788);
  }
  pTVar33 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = 0;
  uStack_2d4 = 0;
  pFVar15 = FMeshElementChannels::Get(param_1->VertexElements,0);
  uVar35 = (pFVar15->BitArray).NumBits - pFVar15->NumHoles;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  if ((int)uStack_2d4 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,4,uVar35,&local_2e0,local_2d8,(int *)&uStack_2d4);
  }
  local_138.Elements._0_8_ = 0;
  local_138.Elements._8_8_ = 0;
  local_138.Elements._32_8_ = 0;
  local_138.Elements._40_4_ = 0;
  local_138.Elements._44_4_ = 0x80;
  local_138.Elements._48_4_ = 0xffffffff;
  local_138.Elements._52_4_ = 0;
  local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_138.HashSize = 0;
  FMeshElementChannels::Get(param_1->TriangleElements,0);
  pFVar15 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::Vertex::Position);
  pTVar36 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar36 = pTVar33;
  }
  if (((pTVar36 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) ||
      (local_268 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar36->_padding_,
      (int)local_268->_padding_ != 1)) || (*(int *)((longlong)&local_268->_padding_ + 4) != 1)) {
    local_268 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  this_01 = local_268;
  pFVar15 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::Normal);
  pTVar36 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar36 = pTVar33;
  }
  if (((pTVar36 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) ||
      (pTVar36 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)pTVar36->_padding_,
      (int)pTVar36->_padding_ != 1)) || (*(int *)((longlong)&pTVar36->_padding_ + 4) != 1)) {
    pTVar36 = pTVar33;
  }
  pFVar15 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::Tangent);
  pTVar37 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar37 = pTVar33;
  }
  if (((pTVar37 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) ||
      (pTVar37 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)pTVar37->_padding_,
      (int)pTVar37->_padding_ != 1)) || (*(int *)((longlong)&pTVar37->_padding_ + 4) != 1)) {
    pTVar37 = pTVar33;
  }
  pFVar15 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  pTVar32 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar32 = pTVar33;
  }
  if (((pTVar32 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) ||
      (pTVar32 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)pTVar32->_padding_,
      (int)pTVar32->_padding_ != 3)) || (*(int *)((longlong)&pTVar32->_padding_ + 4) != 1)) {
    pTVar32 = pTVar33;
  }
  pFVar15 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::Color);
  pTVar38 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar38 = pTVar33;
  }
  if (((pTVar38 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) ||
      (pTVar38 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)pTVar38->_padding_,
      (int)pTVar38->_padding_ != 0)) || (*(int *)((longlong)&pTVar38->_padding_ + 4) != 1)) {
    pTVar38 = pTVar33;
  }
  pFVar15 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar16 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar15->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  plVar34 = (longlong *)&pTVar16->field_0x8;
  if (pTVar16 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar34 = (longlong *)0x0;
  }
  if (((plVar34 == (longlong *)0x0) ||
      (this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar34,
      (int)this_00->_padding_ != 2)) || (*(int *)((longlong)&this_00->_padding_ + 4) != 1)) {
    this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  local_2f0[0] = 0;
  local_278.Array = &FMeshElementChannels::Get(param_1->TriangleElements,0)->BitArray;
  TMeshElementContainer<FTriangleID>::TElementIDs::begin
            (&local_278,(TConstIterator *)(local_24c + 0xc));
  TMeshElementContainer<FTriangleID>::TElementIDs::end(&local_278,&local_210);
  fVar9 = __real_3a800000;
  fVar8 = __real_37a7c5ac;
  uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_38d1b717;
  fVar45 = __real_322bcc77;
  fVar42 = __real_3f800000;
  do {
    uVar12 = local_2d8;
    if ((local_22c == local_210.Iterator.CurrentBitIndex) && (local_238 == local_210.Iterator.Array)
       ) {
      local_138.HashSize = 0;
      if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_138.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_138.Elements);
      if (local_2e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data);
      }
      if (bVar39) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return uVar12;
    }
    local_280 = -1;
    if (local_22c < local_238->NumBits) {
      local_280 = local_22c;
    }
    pTVar17 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                        (&param_1->TriangleVertices,&local_1f0,local_280);
    pFVar3 = pTVar17->DataPtr;
    iVar11 = pTVar17->ArrayNum;
    local_2c0 = pFVar3;
    if ((iVar11 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    FVar1 = *pFVar3;
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,(int)FVar1)
    ;
    local_2a8 = *(undefined8 *)&pTVar19->field0_0x0;
    local_2a0 = (pTVar19->field0_0x0)._s_0.Z;
    if ((iVar11 < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    FVar1 = local_2c0[1];
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,(int)FVar1)
    ;
    local_29c = *(undefined8 *)&pTVar19->field0_0x0;
    local_294 = (pTVar19->field0_0x0)._s_0.Z;
    if ((iVar11 < 3) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      iVar11 = (*pcVar5)();
      return iVar11;
    }
    FVar1 = local_2c0[2];
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,(int)FVar1)
    ;
    local_290 = *(undefined8 *)&pTVar19->field0_0x0;
    local_288 = (pTVar19->field0_0x0)._s_0.Z;
    if (((fVar8 < (float)((uint)((float)local_2a8 - (float)local_29c) & uVar35)) ||
        (fVar8 < (float)((uint)(local_2a8._4_4_ - local_29c._4_4_) & uVar35))) ||
       (fVar8 < (float)((uint)(local_2a0 - local_294) & uVar35))) {
      local_290._4_4_ = (float)((ulonglong)local_290 >> 0x20);
      if (((((float)((uint)((float)local_2a8 - (float)local_290) & uVar35) <= fVar8) &&
           ((float)((uint)(local_2a8._4_4_ - local_290._4_4_) & uVar35) <= fVar8)) &&
          ((float)((uint)(local_2a0 - local_288) & uVar35) <= fVar8)) ||
         ((((float)((uint)((float)local_29c - (float)local_290) & uVar35) <= fVar8 &&
           ((float)((uint)(local_29c._4_4_ - local_290._4_4_) & uVar35) <= fVar8)) &&
          ((float)((uint)(local_294 - local_288) & uVar35) <= fVar8)))) goto LAB_144382ccf;
      iVar11 = 0;
      local_2c0 = (FVertexID *)0x0;
      local_24c._4_8_ = &local_260->TriangleVertexInstances;
      do {
        pTVar20 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            ((TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)
                             local_24c._4_8_,&local_1e0,local_280);
        pFVar4 = pTVar20->DataPtr;
        if ((pTVar20->ArrayNum <= iVar11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
        FVar2 = pFVar4[(longlong)local_2c0];
        local_1b8 = *(undefined8 *)((longlong)&local_2a8 + (longlong)local_2c0 * 0xc);
        fStack_1b0 = (&local_2a0)[(longlong)local_2c0 * 3];
        pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar37,0);
        pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar18,(int)FVar2);
        uStack_1a0 = *(undefined8 *)&pTVar19->field0_0x0;
        local_198 = (pTVar19->field0_0x0)._s_0.Z;
        pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar36,0);
        pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                            (pTVar18,(int)FVar2);
        TStack_1ac._s_0.X = (float)*(undefined8 *)&pTVar19->field0_0x0;
        TStack_1ac._s_0.Y = (float)((ulonglong)*(undefined8 *)&pTVar19->field0_0x0 >> 0x20);
        TStack_1ac._s_0.Z = (pTVar19->field0_0x0)._s_0.Z;
        TStack_194._s_0.X = 0.0;
        TStack_194._s_0.Y = 0.0;
        TStack_194._s_0.Z = 0.0;
        if (((fVar45 < (float)((uint)TStack_1ac._s_0.X & uVar35)) ||
            (fVar45 < (float)((uint)TStack_1ac._s_0.Y & uVar35))) ||
           (fVar45 < (float)((uint)TStack_1ac._s_0.Z & uVar35))) {
          if (((fVar45 < (float)((uint)(float)uStack_1a0 & uVar35)) ||
              (fVar45 < (float)((uint)uStack_1a0._4_4_ & uVar35))) ||
             (fVar45 < (float)((uint)local_198 & uVar35))) {
            fVar43 = local_198 * TStack_1ac._s_0.Y - uStack_1a0._4_4_ * TStack_1ac._s_0.Z;
            local_250 = uStack_1a0._4_4_ * TStack_1ac._s_0.X - (float)uStack_1a0 * TStack_1ac._s_0.Y
            ;
            fVar44 = (float)uStack_1a0 * TStack_1ac._s_0.Z - local_198 * TStack_1ac._s_0.X;
            fVar41 = fVar44 * fVar44 + fVar43 * fVar43 + local_250 * local_250;
            if (fVar41 == fVar42) {
              local_2cc = CONCAT44(fVar44,fVar43);
              local_2c4 = local_250;
            }
            else if (fVar45 <= fVar41) {
              fVar41 = fVar42 / SQRT(fVar41);
              local_2c4 = local_250 * fVar41;
              local_2cc = CONCAT44(fVar44 * fVar41,fVar43 * fVar41);
            }
            else {
              local_2cc = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_2c4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
            fVar41 = local_2c4;
            _local_258 = CONCAT44(fVar44,fVar43);
            local_2e8 = (FScriptContainerElement *)&pTVar32->ArrayForChannels;
            if ((((TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                   *)&pTVar32->ArrayForChannels)->ArrayNum < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            if (*(FScriptContainerElement **)(local_2e8 + 0x18) != (FScriptContainerElement *)0x0) {
              local_2e8 = *(FScriptContainerElement **)(local_2e8 + 0x18);
            }
            uVar27 = (int)FVar2 * *(int *)(local_2e8 + 0x10);
            uVar12 = 0;
            if ((int)uVar27 < *(int *)(local_2e8 + 8)) {
              uVar12 = ~uVar27 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            fVar43 = *(float *)(*(longlong *)local_2e8 + (longlong)(int)uVar27 * 4);
            TStack_194._s_0.X = (float)local_2cc * fVar43;
            TStack_194._s_0.Y = local_2cc._4_4_ * fVar43;
            TStack_194._s_0.Z = fVar41 * fVar43;
          }
        }
        iVar13 = _finite((double)(float)uStack_1a0);
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        if (iVar13 != 0) {
          iVar13 = _finite((double)uStack_1a0._4_4_);
          uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          if ((iVar13 != 0) &&
             (iVar13 = _finite((double)local_198),
             uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
             uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_, iVar13 != 0)) {
            uVar14 = local_198;
            uVar6 = uStack_1a0;
          }
        }
        uStack_1a0 = uVar6;
        local_198 = (float)uVar14;
        iVar13 = _finite((double)TStack_194._s_0.X);
        if (((iVar13 == 0) || (iVar13 = _finite((double)TStack_194._s_0.Y), iVar13 == 0)) ||
           (iVar13 = _finite((double)TStack_194._s_0.Z), iVar13 == 0)) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        pTVar19 = (TVector<float> *)&TStack_194;
        if (bVar10) {
          pTVar19 = &UE::Math::TVector<float>::ZeroVector;
        }
        TStack_194._s_0.X = (float)*(undefined8 *)&((TVector<float>_u_0_s_0 *)pTVar19)->X;
        TStack_194._s_0.Y =
             (float)((ulonglong)*(undefined8 *)&((TVector<float>_u_0_s_0 *)pTVar19)->X >> 0x20);
        TStack_194._s_0.Z = ((TVector<float>_u_0_s_0 *)pTVar19)->Z;
        iVar13 = _finite((double)TStack_1ac._s_0.X);
        if (((iVar13 == 0) || (iVar13 = _finite((double)TStack_1ac._s_0.Y), iVar13 == 0)) ||
           (iVar13 = _finite((double)TStack_1ac._s_0.Z), iVar13 == 0)) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        pTVar19 = (TVector<float> *)&TStack_1ac;
        if (bVar10) {
          pTVar19 = &UE::Math::TVector<float>::ZeroVector;
        }
        TStack_1ac._s_0.X = (float)*(undefined8 *)&((TVector<float>_u_0_s_0 *)pTVar19)->X;
        TStack_1ac._s_0.Y =
             (float)((ulonglong)*(undefined8 *)&((TVector<float>_u_0_s_0 *)pTVar19)->X >> 0x20);
        TStack_1ac._s_0.Z = ((TVector<float>_u_0_s_0 *)pTVar19)->Z;
        this = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel(pTVar38,0);
        pTVar21 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                            (this,(int)FVar2);
        pFVar22 = (FLinearColor_u_0_s_0 *)FLinearColor::FLinearColor(&local_1d0,pTVar21);
        _local_188 = *pFVar22;
        if ((this_00->ArrayForChannels).ArrayNum < 1) {
          local_178 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,0);
          pTVar24 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar23,(int)FVar2);
          local_178._s_0 = *pTVar24;
        }
        if ((this_00->ArrayForChannels).ArrayNum < 2) {
          TStack_170 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,1);
          pTVar24 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar23,(int)FVar2);
          TStack_170._s_0 = *pTVar24;
        }
        if ((this_00->ArrayForChannels).ArrayNum < 3) {
          local_168 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,2);
          pTVar24 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar23,(int)FVar2);
          local_168._s_0 = *pTVar24;
        }
        if ((this_00->ArrayForChannels).ArrayNum < 4) {
          TStack_160 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,3);
          pTVar24 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar23,(int)FVar2);
          TStack_160._s_0 = *pTVar24;
        }
        if ((this_00->ArrayForChannels).ArrayNum < 5) {
          local_158 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,4);
          pTVar24 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar23,(int)FVar2);
          local_158._s_0 = *pTVar24;
        }
        if ((this_00->ArrayForChannels).ArrayNum < 6) {
          TStack_150 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,5);
          pTVar24 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar23,(int)FVar2);
          TStack_150._s_0 = *pTVar24;
        }
        if ((this_00->ArrayForChannels).ArrayNum < 7) {
          local_148 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,6);
          pTVar24 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar23,(int)FVar2);
          local_148._s_0 = *pTVar24;
        }
        if ((this_00->ArrayForChannels).ArrayNum < 8) {
          TStack_140 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        }
        else {
          pTVar23 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,7);
          pTVar24 = (TVector2<float>_u_0_s_0 *)
                    TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                              (pTVar23,(int)FVar2);
          TStack_140._s_0 = *pTVar24;
        }
        uVar12 = local_2f0[0];
        fVar41 = TStack_1ac._s_0.Y * TStack_1ac._s_0.Y + TStack_1ac._s_0.X * TStack_1ac._s_0.X +
                 TStack_1ac._s_0.Z * TStack_1ac._s_0.Z;
        if (fVar45 < fVar41) {
          fVar41 = fVar42 / SQRT(fVar41);
          TStack_1ac._s_0.Y = fVar41 * TStack_1ac._s_0.Y;
          TStack_1ac._s_0.X = TStack_1ac._s_0.X * fVar41;
          TStack_1ac._s_0.Z = TStack_1ac._s_0.Z * fVar41;
        }
        fVar43 = (float)uStack_1a0 * TStack_1ac._s_0.X + uStack_1a0._4_4_ * TStack_1ac._s_0.Y +
                 local_198 * TStack_1ac._s_0.Z;
        fVar41 = (float)uStack_1a0 - fVar43 * TStack_1ac._s_0.X;
        local_198 = local_198 - fVar43 * TStack_1ac._s_0.Z;
        fVar43 = uStack_1a0._4_4_ - fVar43 * TStack_1ac._s_0.Y;
        uStack_1a0 = CONCAT44(fVar43,fVar41);
        fVar44 = fVar43 * fVar43 + fVar41 * fVar41 + local_198 * local_198;
        if (fVar45 < fVar44) {
          fVar42 = fVar42 / SQRT(fVar44);
          local_198 = local_198 * fVar42;
          fVar41 = fVar42 * fVar41;
          fVar43 = fVar42 * fVar43;
          uStack_1a0 = CONCAT44(fVar43,fVar41);
        }
        fVar42 = TStack_194._s_0.X * TStack_1ac._s_0.X + TStack_194._s_0.Y * TStack_1ac._s_0.Y +
                 TStack_194._s_0.Z * TStack_1ac._s_0.Z;
        fVar44 = TStack_194._s_0.Y - fVar42 * TStack_1ac._s_0.Y;
        fVar45 = TStack_194._s_0.X - fVar42 * TStack_1ac._s_0.X;
        fVar46 = TStack_194._s_0.Z - fVar42 * TStack_1ac._s_0.Z;
        fVar42 = fVar45 * fVar41 + fVar44 * fVar43 + fVar46 * local_198;
        TStack_194._s_0.X = fVar45 - fVar42 * fVar41;
        TStack_194._s_0.Y = fVar44 - fVar42 * fVar43;
        TStack_194._s_0.Z = fVar46 - fVar42 * local_198;
        fVar42 = TStack_194._s_0.Y * TStack_194._s_0.Y + TStack_194._s_0.X * TStack_194._s_0.X +
                 TStack_194._s_0.Z * TStack_194._s_0.Z;
        if (__real_322bcc77 < fVar42) {
          fVar42 = __real_3f800000 / SQRT(fVar42);
          TStack_194._s_0.X = TStack_194._s_0.X * fVar42;
          TStack_194._s_0.Y = TStack_194._s_0.Y * fVar42;
          TStack_194._s_0.Z = fVar42 * TStack_194._s_0.Z;
        }
        fVar42 = (float)__xmm_3f8000003f8000003f8000003f800000;
        lVar31 = (longlong)(int)local_2f0[0];
        auVar40 = minps((undefined1  [16])_local_188,___xmm_3f8000003f8000003f8000003f800000);
        _local_188 = (FLinearColor_u_0)maxps(auVar40,ZEXT816(0));
        if ((local_2b8->bFinishedAdding == false) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("bFinishedAdding",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshUtilitiesCommon\\Public\\OverlappingCorners.h"
                                ,0x27,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
        uVar27 = 0;
        if ((int)uVar12 < (local_2b8->IndexBelongsTo).ArrayNum) {
          uVar27 = ~uVar12 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          iVar11 = (*pcVar5)();
          return iVar11;
        }
        uVar12 = *(uint *)((local_2b8->IndexBelongsTo).AllocatorInstance.Data + lVar31 * 4);
        if (uVar12 == 0xffffffff) {
          pFVar25 = (FScriptContainerElement *)&local_2b8->EmptyArray;
        }
        else {
          uVar27 = 0;
          if ((int)uVar12 < (local_2b8->Arrays).ArrayNum) {
            uVar27 = ~uVar12 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            iVar11 = (*pcVar5)();
            return iVar11;
          }
          pFVar25 = (local_2b8->Arrays).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10;
        }
        local_2d0 = 0xffffffff;
        iVar13 = *(int *)(pFVar25 + 8);
        local_2f8 = 0;
        local_2e8 = pFVar25;
        if (iVar13 < 1) {
LAB_144383ac3:
          if (((local_2e0.Data <= (FScriptContainerElement *)&local_1b8) &&
              ((FScriptContainerElement *)&local_1b8 <
               local_2e0.Data + (longlong)(int)uStack_2d4 * 0x80)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            iVar11 = (*pcVar5)();
            return iVar11;
          }
          if (local_2d8 == uStack_2d4) {
            local_2d8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x480,&local_2e0,(int *)&uStack_2d4);
          }
          lVar31 = (longlong)(int)local_2d8 * 0x80;
          *(undefined8 *)(local_2e0.Data + lVar31) = local_1b8;
          *(ulonglong *)(local_2e0.Data + lVar31 + 8) = CONCAT44(TStack_1ac._s_0.X,fStack_1b0);
          *(ulonglong *)(local_2e0.Data + lVar31 + 0x10) =
               CONCAT44(TStack_1ac._s_0.Z,TStack_1ac._s_0.Y);
          *(undefined8 *)(local_2e0.Data + lVar31 + 0x10 + 8) = uStack_1a0;
          *(ulonglong *)(local_2e0.Data + lVar31 + 0x20) = CONCAT44(TStack_194._s_0.X,local_198);
          *(ulonglong *)(local_2e0.Data + lVar31 + 0x20 + 8) =
               CONCAT44(TStack_194._s_0.Z,TStack_194._s_0.Y);
          *(undefined1 (*) [8])(local_2e0.Data + lVar31 + 0x30) = local_188;
          *(undefined8 *)(local_2e0.Data + lVar31 + 0x30 + 8) = uStack_180;
          *(TVector2<float>_u_0 *)(local_2e0.Data + lVar31 + 0x40) = local_178;
          ((TVector2<float>_u_0 *)(local_2e0.Data + lVar31 + 0x40))[1] = TStack_170;
          *(TVector2<float>_u_0 *)(local_2e0.Data + lVar31 + 0x50) = local_168;
          ((TVector2<float>_u_0 *)(local_2e0.Data + lVar31 + 0x50))[1] = TStack_160;
          *(TVector2<float>_u_0 *)(local_2e0.Data + lVar31 + 0x60) = local_158;
          ((TVector2<float>_u_0 *)(local_2e0.Data + lVar31 + 0x60))[1] = TStack_150;
          *(TVector2<float>_u_0 *)(local_2e0.Data + lVar31 + 0x70) = local_148;
          ((TVector2<float>_u_0 *)(local_2e0.Data + lVar31 + 0x70))[1] = TStack_140;
          local_220 = local_2f0;
          local_2d0 = local_2d8;
          local_218 = &local_2d0;
          local_2d8 = local_2d8 + 1;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    (&local_138,(TPairInitializer<int_const_&,int_const_&> *)local_24c,
                     (bool *)&local_220);
        }
        else {
          local_2b0 = 0;
          do {
            uVar12 = 0;
            if ((int)local_2f8 < iVar13) {
              uVar12 = ~local_2f8 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar25 = local_2e8, bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            if ((int)local_2f0[0] <= *(int *)(local_2b0 + *(longlong *)pFVar25)) break;
            uVar12 = 0;
            if ((int)local_2f8 < *(int *)(pFVar25 + 8)) {
              uVar12 = ~local_2f8 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               pFVar25 = local_2e8, bVar10)) {
              pcVar5 = (code *)swi(3);
              iVar11 = (*pcVar5)();
              return iVar11;
            }
            if (local_138.Elements._8_4_ != local_138.Elements._52_4_) {
              FVar28 = (ForElementType<FSetElementId>)&local_138.Hash;
              if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar28 = local_138.Hash.SecondaryData;
              }
              uVar12 = *(uint *)((longlong)FVar28 +
                                (ulonglong)
                                (local_138.HashSize - 1U &
                                *(uint *)(local_2b0 + *(longlong *)pFVar25)) * 4);
              while (uVar12 != 0xffffffff) {
                puVar29 = (uint *)((longlong)(int)uVar12 * 0x10 + local_138.Elements._0_8_);
                if (*puVar29 == *(uint *)(local_2b0 + *(longlong *)pFVar25)) {
                  local_270 = puVar29 + 1;
                  if (puVar29 == (uint *)0x0) {
                    local_270 = (uint *)0x0;
                  }
                  if (local_270 != (uint *)0x0) {
                    uVar12 = *local_270;
                    uVar27 = 0;
                    if ((int)uVar12 < (int)local_2d8) {
                      uVar27 = ~uVar12 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), pFVar25 = local_2e8, bVar10)) {
                      pcVar5 = (code *)swi(3);
                      iVar11 = (*pcVar5)();
                      return iVar11;
                    }
                    lVar31 = 0;
                    pFVar30 = local_2e0.Data + (longlong)(int)uVar12 * 0x80;
                    if (((((((((float)((uint)((float)local_1b8 - *(float *)pFVar30) & uVar35) <=
                               fVar8) &&
                             ((float)((uint)(local_1b8._4_4_ - *(float *)(pFVar30 + 4)) & uVar35) <=
                              fVar8)) &&
                            ((float)((uint)(fStack_1b0 - *(float *)(pFVar30 + 8)) & uVar35) <= fVar8
                            )) && (((float)((uint)((float)uStack_1a0 - *(float *)(pFVar30 + 0x18)) &
                                           uVar35) <= fVar8 &&
                                   ((float)((uint)(uStack_1a0._4_4_ - *(float *)(pFVar30 + 0x1c)) &
                                           uVar35) <= fVar8)))) &&
                          ((float)((uint)(local_198 - *(float *)(pFVar30 + 0x20)) & uVar35) <= fVar8
                          )) && ((((float)((uint)(TStack_194._s_0.X - *(float *)(pFVar30 + 0x24)) &
                                          uVar35) <= fVar8 &&
                                  ((float)((uint)(TStack_194._s_0.Y - *(float *)(pFVar30 + 0x28)) &
                                          uVar35) <= fVar8)) &&
                                 (((float)((uint)(TStack_194._s_0.Z - *(float *)(pFVar30 + 0x2c)) &
                                          uVar35) <= fVar8 &&
                                  ((((float)((uint)(TStack_1ac._s_0.X - *(float *)(pFVar30 + 0xc)) &
                                            uVar35) <= fVar8 &&
                                    ((float)((uint)(TStack_1ac._s_0.Y - *(float *)(pFVar30 + 0x10))
                                            & uVar35) <= fVar8)) &&
                                   ((float)((uint)(TStack_1ac._s_0.Z - *(float *)(pFVar30 + 0x14)) &
                                           uVar35) <= fVar8)))))))) &&
                        (((float)((uint)((float)local_188._0_4_ - *(float *)(pFVar30 + 0x30)) &
                                 uVar35) < fVar7 &&
                         ((float)((uint)((float)local_188._4_4_ - *(float *)(pFVar30 + 0x34)) &
                                 uVar35) < fVar7)))) &&
                       (((float)((uint)((float)uStack_180 - *(float *)(pFVar30 + 0x38)) & uVar35) <
                         fVar7 && ((float)((uint)(uStack_180._4_4_ - *(float *)(pFVar30 + 0x3c)) &
                                          uVar35) < fVar7)))) {
                      pFVar26 = pFVar30 + 0x44;
                      goto LAB_144383a70;
                    }
                  }
                  break;
                }
                uVar12 = puVar29[2];
              }
            }
LAB_14438381f:
            local_2b0 = local_2b0 + 4;
            local_2f8 = local_2f8 + 1;
            iVar13 = *(int *)(pFVar25 + 8);
          } while ((int)local_2f8 < iVar13);
LAB_144383aba:
          if (local_2d0 == 0xffffffff) goto LAB_144383ac3;
        }
        local_2c0 = (FVertexID *)((longlong)local_2c0 + 1);
        iVar11 = iVar11 + 1;
        local_2f0[0] = local_2f0[0] + 1;
        this_01 = local_268;
        fVar45 = __real_322bcc77;
      } while (iVar11 < 3);
    }
    else {
LAB_144382ccf:
      local_2f0[0] = local_2f0[0] + 3;
    }
    local_230 = local_230 & ~local_23c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_24c + 0xc));
    param_1 = local_260;
  } while( true );
LAB_144383a70:
  if ((fVar9 < (float)((uint)(*(float *)(pFVar26 + (longlong)(aFStack_1bc + -(longlong)pFVar30)) -
                             *(float *)(pFVar26 + -4)) & uVar35)) ||
     (fVar9 < (float)((uint)(*(float *)(pFVar26 + ((longlong)&local_1b8 - (longlong)pFVar30)) -
                            *(float *)pFVar26) & uVar35))) goto LAB_14438381f;
  lVar31 = lVar31 + 1;
  pFVar26 = pFVar26 + 8;
  if (7 < lVar31) {
    local_2d0 = *local_270;
    goto LAB_144383aba;
  }
  goto LAB_144383a70;
}

// HasInvalidVertexInstanceNormalsOrTangents @ 144383fd0

void __cdecl
FStaticMeshOperations::HasInvalidVertexInstanceNormalsOrTangents
          (FMeshDescription *param_1,bool *param_2,bool *param_3)

{
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  FMeshElementContainer *pFVar9;
  TTuple<FName,FAttributesSetEntry> *pTVar10;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar11;
  TVector<float> *pTVar12;
  TVector<float> *pTVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  int local_res8;
  int local_res20;
  TElementIDs local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  TConstIterator local_90 [2];
  
  *param_2 = false;
  *param_3 = false;
  pFVar9 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar9->Attributes,MeshAttribute::VertexInstance::Normal);
  puVar14 = (undefined8 *)&pTVar10->field_0x8;
  if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  if ((((puVar14 == (undefined8 *)0x0) ||
       (pTVar1 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*puVar14,
       (int)pTVar1->_padding_ != 1)) || (*(int *)((longlong)&pTVar1->_padding_ + 4) != 1)) ||
     ((pTVar1 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar1->_padding_ == 0)))) {
    pTVar12 = (TVector<float> *)0x0;
    local_res20 = 0;
  }
  else {
    pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar1,0);
    pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,0);
    local_res20 = (int)pTVar1->_padding_;
    if ((local_res20 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar9 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar9->Attributes,MeshAttribute::VertexInstance::Tangent);
  puVar14 = (undefined8 *)&pTVar10->field_0x8;
  if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  if ((((puVar14 == (undefined8 *)0x0) ||
       (pTVar1 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*puVar14,
       (int)pTVar1->_padding_ != 1)) || (*(int *)((longlong)&pTVar1->_padding_ + 4) != 1)) ||
     ((pTVar1 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0 ||
      ((int)pTVar1->_padding_ == 0)))) {
    pTVar13 = (TVector<float> *)0x0;
    local_res8 = 0;
  }
  else {
    pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar1,0);
    pTVar13 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,0);
    local_res8 = (int)pTVar1->_padding_;
    if ((local_res8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_b8.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
            (&local_b8,(TConstIterator *)&local_b0);
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_b8,local_90);
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_38d1b717;
  do {
    if ((local_b0.CurrentBitIndex == local_90[0].Iterator.CurrentBitIndex) &&
       (local_b0.Array == local_90[0].Iterator.Array)) {
      return;
    }
    bVar5 = *param_2;
    uVar16 = 0xffffffff;
    if (local_b0.CurrentBitIndex < (local_b0.Array)->NumBits) {
      uVar16 = local_b0.CurrentBitIndex;
    }
    uVar15 = (uint)((int)uVar16 < local_res20) & ~uVar16 >> 0x1f;
    if ((uVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((fVar3 < (float)((uint)pTVar12[(int)uVar16].field0_0x0._s_0.X & uVar4)) ||
        (fVar3 < (float)((uint)pTVar12[(int)uVar16].field0_0x0._s_0.Y & uVar4))) ||
       (fVar3 < (float)((uint)pTVar12[(int)uVar16].field0_0x0._s_0.Z & uVar4))) {
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = _finite((double)pTVar12[(int)uVar16].field0_0x0._s_0.X);
      if (((iVar8 == 0) ||
          (iVar8 = _finite((double)pTVar12[(int)uVar16].field0_0x0._s_0.Y), iVar8 == 0)) ||
         (iVar8 = _finite((double)pTVar12[(int)uVar16].field0_0x0._s_0.Z), iVar8 == 0))
      goto LAB_1443842b9;
      bVar7 = 0;
    }
    else {
LAB_1443842b9:
      bVar7 = 1;
    }
    *param_2 = (bool)(bVar5 | bVar7);
    bVar5 = *param_3;
    uVar15 = (uint)((int)uVar16 < local_res8) & ~uVar16 >> 0x1f;
    if ((uVar15 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((fVar3 < (float)((uint)pTVar13[(int)uVar16].field0_0x0._s_0.X & uVar4)) ||
        (fVar3 < (float)((uint)pTVar13[(int)uVar16].field0_0x0._s_0.Y & uVar4))) ||
       (fVar3 < (float)((uint)pTVar13[(int)uVar16].field0_0x0._s_0.Z & uVar4))) {
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = _finite((double)pTVar13[(int)uVar16].field0_0x0._s_0.X);
      if (((iVar8 == 0) ||
          (iVar8 = _finite((double)pTVar13[(int)uVar16].field0_0x0._s_0.Y), iVar8 == 0)) ||
         (iVar8 = _finite((double)pTVar13[(int)uVar16].field0_0x0._s_0.Z), iVar8 == 0))
      goto LAB_1443843be;
      bVar7 = 0;
    }
    else {
LAB_1443843be:
      bVar7 = 1;
    }
    *param_3 = (bool)(bVar5 | bVar7);
    if ((*param_2 != false) && ((bool)(bVar5 | bVar7) != false)) {
      return;
    }
    local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
  } while( true );
}

// HasVertexColor @ 144384440

bool __cdecl FStaticMeshOperations::HasVertexColor(FMeshDescription *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FMeshElementContainer *pFVar5;
  TTuple<FName,FAttributesSetEntry> *pTVar6;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this;
  TVector4<float> *pTVar7;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar8;
  int iVar9;
  TElementIDs local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  TConstIterator local_68 [3];
  
  pFVar5 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar6 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar5->Attributes,MeshAttribute::VertexInstance::Color);
  uVar4 = FLinearColor::White.field0_0x0._s_0.A;
  uVar3 = FLinearColor::White.field0_0x0._s_0.B;
  uVar2 = FLinearColor::White.field0_0x0._s_0.G;
  uVar1 = FLinearColor::White.field0_0x0._s_0.R;
  pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  }
  if (((pTVar8 == (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) ||
      (pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)pTVar8->_padding_,
      (int)pTVar8->_padding_ != 0)) || (*(int *)((longlong)&pTVar8->_padding_ + 4) != 1)) {
    pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  }
  local_res8.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
            (&local_res8,(TConstIterator *)&local_88);
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_res8,local_68);
  while( true ) {
    if ((local_88.CurrentBitIndex == local_68[0].Iterator.CurrentBitIndex) &&
       (local_88.Array == local_68[0].Iterator.Array)) {
      return false;
    }
    iVar9 = -1;
    if (local_88.CurrentBitIndex < (local_88.Array)->NumBits) {
      iVar9 = local_88.CurrentBitIndex;
    }
    this = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel(pTVar8,0);
    pTVar7 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase(this,iVar9);
    if ((((float)uVar1 != (pTVar7->field0_0x0)._s_0.X) ||
        ((float)uVar2 != (pTVar7->field0_0x0)._s_0.Y)) ||
       (((float)uVar3 != (pTVar7->field0_0x0)._s_0.Z ||
        ((float)uVar4 != (pTVar7->field0_0x0)._s_0.W)))) break;
    local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
  }
  return true;
}

// InsertUVChannel @ 144384680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FStaticMeshOperations::InsertUVChannel(FMeshDescription *param_1,int param_2)

{
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this;
  uint uVar1;
  FMeshElementContainer *pFVar2;
  TTuple<FName,FAttributesSetEntry> *pTVar3;
  FStaticBasicLogRecord *pFVar4;
  TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  longlong *plVar6;
  
  pFVar2 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar3 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar2->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  plVar6 = (longlong *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if (((plVar6 == (longlong *)0x0) || (plVar6 = (longlong *)*plVar6, *(int *)(plVar6 + 1) != 2)) ||
     (*(int *)((longlong)plVar6 + 0xc) != 1)) {
    plVar6 = (longlong *)0x0;
  }
  if ((param_2 < 0) || ((int)plVar6[7] < param_2)) {
    if ((byte)LogStaticMeshOperations._0_1_ < 2) {
      return false;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((int)plVar6[7] < 8) {
      TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      ::InsertUninitializedImpl
                ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                  *)(plVar6 + 3),param_2,1);
      uVar1 = *(uint *)((longlong)plVar6 + 0xc);
      pTVar5 = (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                *)plVar6[6];
      if ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *)plVar6[6] ==
          (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        pTVar5 = (TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                  *)(plVar6 + 3);
      }
      this = (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
             ((pTVar5->AllocatorInstance).InlineData + (longlong)param_2 * 0x18);
      (this->Container).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Container).ArrayNum = 0;
      (this->Container).ArrayMax = 0;
      this->Extent = uVar1;
      TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::Initialize
                (this,(int)plVar6[2],(TVector2<float> *)(plVar6 + 8));
      return true;
    }
    if ((byte)LogStaticMeshOperations._0_1_ < 2) {
      return false;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogStaticMeshOperations);
  return false;
}

// RecomputeNormalsAndTangentsIfNeeded @ 144384bb0

void __cdecl
FStaticMeshOperations::RecomputeNormalsAndTangentsIfNeeded
          (FMeshDescription *param_1,EComputeNTBsFlags param_2)

{
  bool local_res10 [8];
  bool local_res18 [16];
  
  if (((byte)param_2 & 3) != 3) {
    local_res18[0] = false;
    local_res10[0] = false;
    HasInvalidVertexInstanceNormalsOrTangents(param_1,local_res18,local_res10);
    param_2 = param_2 | -(uint)(local_res10[0] != false) & Tangents |
                        (uint)(local_res18[0] != false);
  }
  if ((param_2 & (Tangents|Normals)) != None) {
    ComputeTangentsAndNormals(param_1,param_2);
  }
  return;
}

// RemoveUVChannel @ 144386800

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FStaticMeshOperations::RemoveUVChannel(FMeshDescription *param_1,int param_2)

{
  int iVar1;
  FMeshElementContainer *pFVar2;
  TTuple<FName,FAttributesSetEntry> *pTVar3;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar4;
  
  pFVar2 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar3 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar2->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  pTVar4 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar4 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  if (((pTVar4 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) ||
      (pTVar4 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pTVar4->_padding_,
      (int)pTVar4->_padding_ != 2)) || (*(int *)((longlong)&pTVar4->_padding_ + 4) != 1)) {
    pTVar4 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  iVar1 = (pTVar4->ArrayForChannels).ArrayNum;
  if (iVar1 == 1) {
    if (1 < (byte)LogStaticMeshOperations._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
      return false;
    }
  }
  else {
    if ((-1 < param_2) && (param_2 < iVar1)) {
      TMeshAttributeArraySet<UE::Math::TVector2<float>_>::RemoveChannel(pTVar4,param_2);
      return true;
    }
    if (1 < (byte)LogStaticMeshOperations._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
    }
  }
  return false;
}

// ReorderMeshDescriptionPolygonGroups @ 1443868c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FStaticMeshOperations::ReorderMeshDescriptionPolygonGroups
          (FMeshDescription *param_1,FMeshDescription *param_2,TOptional<FString_const_> *param_3,
          TOptional<FString_const_> *param_4)

{
  ulonglong uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  FMeshElementContainer *pFVar9;
  TTuple<FName,FAttributesSetEntry> *pTVar10;
  TMeshAttributeArrayBase<FName> *pTVar11;
  FName *pFVar12;
  byte bVar13;
  longlong lVar14;
  uint *puVar15;
  ForElementType<FSetElementId> FVar16;
  TMeshAttributeArraySet<FName> *pTVar17;
  TMeshAttributeArraySet<FName> *pTVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  TMeshAttributeArraySet<FName> *pTVar22;
  uint uVar23;
  int iVar24;
  uint *puVar25;
  undefined1 auStackY_438 [32];
  undefined1 local_408;
  undefined1 local_407;
  undefined1 local_406;
  undefined1 local_405;
  undefined1 local_404;
  undefined1 local_403 [3];
  longlong *local_400;
  undefined8 uStack_3f8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3f0;
  uint uStack_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  int local_3d8;
  undefined4 uStack_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  uint local_3c4;
  int local_3c0 [2];
  TElementIDs local_3b8;
  TElementIDs local_3b0;
  TBitArray<FDefaultBitArrayAllocator> *local_3a8;
  TOptional<FString_const_> *local_3a0;
  longlong *local_398;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_390;
  undefined8 local_370;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_368;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  uint *local_318;
  uint *local_310;
  uint *local_308;
  FMeshDescription *local_300;
  TOptional<FString_const_> *local_2f8;
  undefined1 local_2f0 [8];
  int local_2e8;
  int local_2e4;
  longlong *local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 uStack_2b8;
  longlong *local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a8;
  undefined8 uStack_288;
  longlong *local_280;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_278;
  undefined8 uStack_258;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_230;
  int *local_210;
  undefined1 *local_208;
  int *local_200;
  undefined1 *local_1f8;
  TConstIterator local_1f0;
  TConstIterator local_1d0;
  undefined4 local_194;
  undefined4 local_174;
  undefined4 local_154;
  undefined1 local_148 [32];
  uint *local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  TSet<TTuple<FPolygonGroupID,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_3a0 = param_3;
  local_300 = param_2;
  local_2f8 = param_4;
  bVar7 = FMeshDescription::IsEmpty(param_1);
  if (((bVar7) || (bVar7 = FMeshDescription::IsEmpty(param_2), bVar7)) ||
     (pFVar9 = FMeshElementChannels::Get(param_2->PolygonGroupElements,0),
     (pFVar9->BitArray).NumBits - pFVar9->NumHoles < 2)) {
    if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) &&
       (pFVar3 = (param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
       pFVar3 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar3);
    }
    if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) == -1) {
      return;
    }
    pFVar3 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data;
    if (pFVar3 == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(pFVar3);
    return;
  }
  pFVar9 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
  iVar24 = (pFVar9->BitArray).NumBits;
  iVar2 = pFVar9->NumHoles;
  pFVar9 = FMeshElementChannels::Get(param_2->PolygonGroupElements,0);
  if ((pFVar9->BitArray).NumBits - pFVar9->NumHoles == iVar24 - iVar2) {
    pFVar9 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
    pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar9->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
    pTVar22 = (TMeshAttributeArraySet<FName> *)0x0;
    pTVar18 = (TMeshAttributeArraySet<FName> *)&pTVar10->field_0x8;
    if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pTVar18 = pTVar22;
    }
    if (((pTVar18 == (TMeshAttributeArraySet<FName> *)0x0) ||
        (pTVar18 = (TMeshAttributeArraySet<FName> *)pTVar18->_padding_, (int)pTVar18->_padding_ != 6
        )) || (*(int *)((longlong)&pTVar18->_padding_ + 4) != 1)) {
      pTVar18 = pTVar22;
    }
    pFVar9 = FMeshElementChannels::Get(param_2->PolygonGroupElements,0);
    pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar9->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
    pTVar17 = (TMeshAttributeArraySet<FName> *)&pTVar10->field_0x8;
    if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pTVar17 = pTVar22;
    }
    if (((pTVar17 == (TMeshAttributeArraySet<FName> *)0x0) ||
        (pTVar17 = (TMeshAttributeArraySet<FName> *)pTVar17->_padding_, (int)pTVar17->_padding_ != 6
        )) || (*(int *)((longlong)&pTVar17->_padding_ + 4) != 1)) {
      pTVar17 = pTVar22;
    }
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_d8 = (uint *)0x0;
    local_d0 = 0;
    local_cc = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (ForElementType<FSetElementId>)0x0;
    local_b0 = 0;
    TSet<TTuple<FPolygonGroupID,bool>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,bool,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FPolygonGroupID,bool>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,bool,0>,FDefaultSetAllocator>
               *)local_f8,(int)pTVar18->_padding_);
    local_3b8.Array = &FMeshElementChannels::Get(param_1->PolygonGroupElements,0)->BitArray;
    TMeshElementContainer<FPolygonGroupID>::TElementIDs::begin
              (&local_3b8,(TConstIterator *)&local_250);
    TMeshElementContainer<FPolygonGroupID>::TElementIDs::end(&local_3b8,&local_1f0);
    while ((local_250.CurrentBitIndex != local_1f0.Iterator.CurrentBitIndex ||
           (local_250.Array != local_1f0.Iterator.Array))) {
      local_408 = 0;
      local_3d0 = -1;
      if (local_250.CurrentBitIndex < (local_250.Array)->NumBits) {
        local_3d0 = local_250.CurrentBitIndex;
      }
      local_210 = &local_3d0;
      local_208 = &local_408;
      TSet<TTuple<FPolygonGroupID,bool>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPolygonGroupID_const_&,bool_&&>_>
                ((TSet<TTuple<FPolygonGroupID,bool>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,bool,0>,FDefaultSetAllocator>
                  *)local_f8,(TPairInitializer<FPolygonGroupID_const_&,bool_&&> *)local_2f0,
                 (bool *)&local_210);
      local_250.UnvisitedBitMask = local_250.UnvisitedBitMask & ~local_250._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_250);
    }
    local_148._0_8_ = 0;
    local_148._8_8_ = 0;
    local_128 = (uint *)0x0;
    local_120 = 0;
    local_11c = 0x80;
    local_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (ForElementType<FSetElementId>)0x0;
    local_100 = 0;
    TSet<TTuple<FPolygonGroupID,bool>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,bool,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FPolygonGroupID,bool>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,bool,0>,FDefaultSetAllocator>
               *)local_148,(int)pTVar17->_padding_);
    local_3b0.Array = &FMeshElementChannels::Get(param_2->PolygonGroupElements,0)->BitArray;
    TMeshElementContainer<FPolygonGroupID>::TElementIDs::begin
              (&local_3b0,(TConstIterator *)&local_230);
    TMeshElementContainer<FPolygonGroupID>::TElementIDs::end(&local_3b0,&local_1d0);
    while ((local_230.CurrentBitIndex != local_1d0.Iterator.CurrentBitIndex ||
           (local_230.Array != local_1d0.Iterator.Array))) {
      local_407 = 0;
      local_3cc = -1;
      if (local_230.CurrentBitIndex < (local_230.Array)->NumBits) {
        local_3cc = local_230.CurrentBitIndex;
      }
      local_200 = &local_3cc;
      local_1f8 = &local_407;
      TSet<TTuple<FPolygonGroupID,bool>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPolygonGroupID_const_&,bool_&&>_>
                ((TSet<TTuple<FPolygonGroupID,bool>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,bool,0>,FDefaultSetAllocator>
                  *)local_148,(TPairInitializer<FPolygonGroupID_const_&,bool_&&> *)(local_2f0 + 4),
                 (bool *)&local_200);
      local_230.UnvisitedBitMask = local_230.UnvisitedBitMask & ~local_230._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_230);
    }
    local_348.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    local_348._padding_._0_4_ = 0;
    local_348._padding_._4_4_ = 1;
    local_348.UnvisitedBitMask = 0xffffffff;
    local_348.CurrentBitIndex = 0;
    local_348.BaseBitIndex = 0;
    if (local_120 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_348);
    }
    uVar20 = local_120;
    TStack_390._padding_ = CONCAT44(local_348._padding_._4_4_,(undefined4)local_348._padding_);
    local_398 = (longlong *)local_148;
    TStack_390.CurrentBitIndex = local_348.CurrentBitIndex;
    TStack_390.UnvisitedBitMask = local_348.UnvisitedBitMask;
    TStack_390._28_4_ = local_348._28_4_;
    TStack_390.BaseBitIndex = local_348.BaseBitIndex;
    local_368.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
    bVar13 = (byte)local_120 & 0x1f;
    local_370 = CONCAT44(local_370._4_4_,local_148._8_4_ - local_114);
    local_368._padding_._0_4_ = (int)local_120 >> 5;
    local_368._padding_._4_4_ = 1 << bVar13;
    local_368.UnvisitedBitMask = -1 << bVar13;
    TStack_390.Array = local_348.Array;
    local_368.BaseBitIndex = local_120 & 0xffffffe0;
    local_368.CurrentBitIndex = local_120;
    TStack_2d8.Array = local_348.Array;
    uStack_2b8 = local_370;
    local_2e0 = local_398;
    TStack_2d8._padding_ = TStack_390._padding_;
    TStack_2d8._16_8_ = TStack_390._16_8_;
    TStack_2d8._24_8_ = TStack_390._24_8_;
    if (((int)local_120 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar20 != local_120) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_368);
    }
    uStack_3f8 = CONCAT44(local_368._padding_._4_4_,(int)local_368._padding_);
    uStack_3e4 = local_368.CurrentBitIndex;
    uStack_3e8 = local_368.UnvisitedBitMask;
    uStack_3dc = local_368._28_4_;
    uStack_3e0 = local_368.BaseBitIndex;
    pTStack_3f0 = local_368.Array;
    local_3a8 = local_368.Array;
    local_3c4 = local_368.CurrentBitIndex;
LAB_144386de0:
    plVar6 = local_2e0;
    uVar23 = local_3c4;
    iVar24 = 0;
    uVar20 = 0;
    if ((int)local_2e0[1] - *(int *)((longlong)local_2e0 + 0x34) != (int)uStack_2b8) {
      local_406 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_406);
    }
    if (((TStack_2d8.CurrentBitIndex != uVar23) || (TStack_2d8.Array != local_3a8)) ||
       (plVar6 != (longlong *)local_148)) {
      local_318 = (uint *)(*plVar6 + (longlong)TStack_2d8.CurrentBitIndex * 0x10);
      uVar23 = *local_318;
      pTVar11 = TMeshAttributeArraySet<FName>::GetArrayForChannel(pTVar17,0);
      pFVar12 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar11,uVar23);
      uVar23 = local_d0;
      uVar8 = 1;
      FVar4 = *pFVar12;
      uStack_3e4 = uVar20;
      uStack_3e0 = uVar20;
      if (local_d0 != 0) {
        puVar25 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar25 = local_d8;
        }
        uVar21 = *puVar25;
        while (uVar21 == 0) {
          lVar14 = (longlong)(int)uVar20;
          uStack_3e0 = uStack_3e0 + 0x20;
          uVar20 = uVar20 + 1;
          uStack_3e4 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
          goto LAB_144386ed3;
          uVar21 = (puVar25 + 1)[lVar14];
        }
        uVar8 = -uVar21 & uVar21;
        uVar1 = (ulonglong)uVar8 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_2e8 = (int)lVar14;
        uStack_3e4 = local_2e8 + -1 + uStack_3e0;
        if ((int)local_d0 < (int)uStack_3e4) {
          uStack_3e4 = local_d0;
        }
      }
LAB_144386ed3:
      local_400 = (longlong *)local_f8;
      pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      uVar21 = local_d0 & 0xffffffe0;
      local_3d8 = local_f8._8_4_ - local_c4;
      uStack_3f8 = CONCAT44(uVar8,uVar20);
      uStack_3e8 = 0xffffffff;
      uStack_3dc = local_154;
      TStack_2a8._padding_ = uStack_3f8;
      iVar24 = (int)local_d0 >> 5;
      uStack_288 = CONCAT44(uStack_3d4,local_3d8);
      bVar13 = (byte)local_d0;
      TStack_2a8.UnvisitedBitMask = 0xffffffff;
      TStack_2a8.CurrentBitIndex = uStack_3e4;
      TStack_2a8.BaseBitIndex = uStack_3e0;
      TStack_2a8._28_4_ = local_154;
      local_2b0 = local_400;
      TStack_2a8.Array = pTStack_3f0;
      if (((int)local_d0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar23 != local_d0) {
        puVar25 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar25 = local_d8;
        }
        uVar20 = -1 << (bVar13 & 0x1f) & puVar25[iVar24];
        while (uVar20 == 0) {
          lVar14 = (longlong)iVar24;
          uVar21 = uVar21 + 0x20;
          iVar24 = iVar24 + 1;
          uVar23 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_144387020;
          uVar20 = (puVar25 + 1)[lVar14];
        }
        uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_2e4 = (int)lVar14;
        uVar23 = (uVar21 - 1) + local_2e4;
        if ((int)local_d0 < (int)uVar23) {
          uVar23 = local_d0;
        }
      }
LAB_144387020:
      do {
        plVar6 = local_2b0;
        if ((int)local_2b0[1] - *(int *)((longlong)local_2b0 + 0x34) != (int)uStack_288) {
          local_405 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_405);
        }
        if (((TStack_2a8.CurrentBitIndex == uVar23) &&
            (TStack_2a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
           (plVar6 == (longlong *)local_f8)) goto LAB_144387183;
        puVar25 = (uint *)((longlong)TStack_2a8.CurrentBitIndex * 0x10 + *plVar6);
        if ((char)puVar25[1] == '\0') {
          uVar20 = *puVar25;
          pTVar11 = TMeshAttributeArraySet<FName>::GetArrayForChannel(pTVar18,0);
          pFVar12 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar11,uVar20);
          if (*pFVar12 == FVar4) goto LAB_1443870cf;
        }
        TStack_2a8.UnvisitedBitMask = TStack_2a8.UnvisitedBitMask & ~TStack_2a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a8);
      } while( true );
    }
    if ((((int)(local_a8.Elements._8_4_ - local_a8.Elements._52_4_) < local_148._8_4_ - local_114)
        && (*(int *)((longlong)&local_3a0->field0_0x0 + 0xc) != -1)) &&
       (2 < (byte)LogStaticMeshOperations._0_1_)) {
      TOptional<FString_const_>::GetValue(local_3a0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
    }
    uVar23 = local_120;
    uVar8 = 1;
    uStack_3e0 = iVar24;
    if (local_120 == 0) goto LAB_1443872a1;
    puVar25 = (uint *)(local_148 + 0x10);
    if (local_128 != (uint *)0x0) {
      puVar25 = local_128;
    }
    uVar20 = *puVar25;
    goto joined_r0x00014438725f;
  }
  if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) &&
     (2 < (byte)LogStaticMeshOperations._0_1_)) {
    TOptional<FString_const_>::GetValue(param_4);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
  }
  if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) &&
     (pFVar3 = (param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
  }
  goto LAB_14438781f;
LAB_1443870cf:
  uVar20 = *puVar25;
  *(undefined1 *)(puVar25 + 1) = 1;
  *(undefined1 *)(local_318 + 1) = 1;
  if (uVar20 != 0xffffffff) {
    uVar23 = *local_318;
    if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
      FVar16 = (ForElementType<FSetElementId>)&local_a8.Hash;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar16 = local_a8.Hash.SecondaryData;
      }
      uVar8 = *(uint *)((longlong)FVar16 + (ulonglong)(local_a8.HashSize - 1U & uVar23) * 4);
      while (uVar8 != 0xffffffff) {
        puVar25 = (uint *)((longlong)(int)uVar8 * 0x10 + local_a8.Elements._0_8_);
        if (*puVar25 == uVar23) {
          if (puVar25 != (uint *)0x0) goto LAB_144387180;
          break;
        }
        uVar8 = puVar25[2];
      }
    }
    local_310 = local_318;
    TSet<TTuple<FPolygonGroupID,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FPolygonGroupID_const_&>_>
              (&local_a8,(uint)&local_3c8,
               (TKeyInitializer<FPolygonGroupID_const_&> *)(ulonglong)uVar23,(bool *)&local_310);
    puVar25 = (uint *)((longlong)local_3c8 * 0x10 + local_a8.Elements._0_8_);
LAB_144387180:
    puVar25[1] = uVar20;
  }
LAB_144387183:
  TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
  goto LAB_144386de0;
joined_r0x00014438725f:
  if (uVar20 != 0) goto LAB_14438727d;
  lVar14 = (longlong)iVar24;
  uStack_3e0 = uStack_3e0 + 0x20;
  iVar24 = iVar24 + 1;
  uVar20 = local_120;
  if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
  goto LAB_1443872a1;
  uVar20 = (puVar25 + 1)[lVar14];
  goto joined_r0x00014438725f;
LAB_14438766b:
  uVar20 = *puVar19;
  uVar8 = *puVar25;
  if (local_a8.Elements._8_4_ != local_a8.Elements._52_4_) {
    FVar16 = (ForElementType<FSetElementId>)&local_a8.Hash;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar16 = local_a8.Hash.SecondaryData;
    }
    uVar21 = *(uint *)((longlong)FVar16 + (ulonglong)(local_a8.HashSize - 1U & uVar8) * 4);
    while (uVar21 != 0xffffffff) {
      puVar15 = (uint *)((longlong)(int)uVar21 * 0x10 + local_a8.Elements._0_8_);
      if (*puVar15 == uVar8) {
        if (puVar15 != (uint *)0x0) goto LAB_144387700;
        break;
      }
      uVar21 = puVar15[2];
    }
  }
  local_308 = puVar25;
  TSet<TTuple<FPolygonGroupID,FPolygonGroupID>,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FPolygonGroupID_const_&>_>
            (&local_a8,(uint)local_3c0,(TKeyInitializer<FPolygonGroupID_const_&> *)(ulonglong)uVar8,
             (bool *)&local_308);
  puVar15 = (uint *)((longlong)local_3c0[0] * 0x10 + local_a8.Elements._0_8_);
LAB_144387700:
  puVar15[1] = uVar20;
  *(undefined1 *)(puVar25 + 1) = 1;
  *(undefined1 *)(puVar19 + 1) = 1;
LAB_14438770d:
  TStack_390.UnvisitedBitMask = TStack_390.UnvisitedBitMask & ~TStack_390._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_390);
  goto LAB_1443873c0;
LAB_14438727d:
  uVar8 = -uVar20 & uVar20;
  uVar1 = (ulonglong)uVar8 * 2 + 1;
  lVar14 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  local_328 = (int)lVar14;
  uVar20 = local_328 + -1 + uStack_3e0;
  if ((int)local_120 < (int)uVar20) {
    uVar20 = local_120;
  }
LAB_1443872a1:
  local_3d8 = local_148._8_4_ - local_114;
  local_400 = (longlong *)local_148;
  pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
  uStack_3f8 = CONCAT44(uVar8,iVar24);
  uStack_3e4 = uVar20;
  uStack_3e8 = 0xffffffff;
  uVar8 = local_120 & 0xffffffe0;
  TStack_390._padding_ = uStack_3f8;
  uStack_3dc = local_194;
  local_370 = CONCAT44(uStack_3d4,local_3d8);
  iVar24 = (int)local_120 >> 5;
  bVar13 = (byte)local_120;
  TStack_390.BaseBitIndex = uStack_3e0;
  TStack_390._28_4_ = local_194;
  TStack_390.UnvisitedBitMask = 0xffffffff;
  TStack_390.CurrentBitIndex = uVar20;
  local_398 = local_400;
  TStack_390.Array = pTStack_3f0;
  if (((int)local_120 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar23 != local_120) {
    puVar25 = (uint *)(local_148 + 0x10);
    if (local_128 != (uint *)0x0) {
      puVar25 = local_128;
    }
    uVar20 = -1 << (bVar13 & 0x1f) & puVar25[iVar24];
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar24;
      uVar8 = uVar8 + 0x20;
      iVar24 = iVar24 + 1;
      uVar23 = local_120;
      if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_1443873c0;
      uVar20 = (puVar25 + 1)[lVar14];
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_324 = (int)lVar14;
    uVar23 = local_324 + -1 + uVar8;
    if ((int)local_120 < (int)uVar23) {
      uVar23 = local_120;
    }
  }
LAB_1443873c0:
  plVar6 = local_398;
  if ((int)local_398[1] - *(int *)((longlong)local_398 + 0x34) != (int)local_370) {
    local_404 = 0;
    `TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_404);
  }
  uVar20 = local_d0;
  if (((TStack_390.CurrentBitIndex != uVar23) ||
      (TStack_390.Array != (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10))) ||
     (plVar6 != (longlong *)local_148)) {
    puVar25 = (uint *)((longlong)TStack_390.CurrentBitIndex * 0x10 + *plVar6);
    if ((char)puVar25[1] == '\0') {
      iVar24 = 0;
      uStack_3e0 = 0;
      uVar8 = 1;
      uStack_3e4 = 0;
      if (local_d0 != 0) {
        puVar19 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar19 = local_d8;
        }
        uVar21 = *puVar19;
        while (uVar21 == 0) {
          lVar14 = (longlong)iVar24;
          uStack_3e0 = uStack_3e0 + 0x20;
          iVar24 = iVar24 + 1;
          uStack_3e4 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_1443874a0;
          uVar21 = (puVar19 + 1)[lVar14];
        }
        uVar8 = -uVar21 & uVar21;
        uVar1 = (ulonglong)uVar8 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_320 = (int)lVar14;
        uStack_3e4 = uStack_3e0 + -1 + local_320;
        if ((int)local_d0 < (int)uStack_3e4) {
          uStack_3e4 = local_d0;
        }
      }
LAB_1443874a0:
      local_400 = (longlong *)local_f8;
      pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      uVar21 = local_d0 & 0xffffffe0;
      local_3d8 = local_f8._8_4_ - local_c4;
      uStack_3f8 = CONCAT44(uVar8,iVar24);
      uStack_3e8 = 0xffffffff;
      uStack_3dc = local_174;
      TStack_278._padding_ = uStack_3f8;
      iVar24 = (int)local_d0 >> 5;
      uStack_258 = CONCAT44(uStack_3d4,local_3d8);
      bVar13 = (byte)local_d0;
      TStack_278.UnvisitedBitMask = 0xffffffff;
      TStack_278.CurrentBitIndex = uStack_3e4;
      TStack_278.BaseBitIndex = uStack_3e0;
      TStack_278._28_4_ = local_174;
      local_280 = local_400;
      TStack_278.Array = pTStack_3f0;
      if (((int)local_d0 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar20 != local_d0) {
        puVar19 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar19 = local_d8;
        }
        uVar20 = -1 << (bVar13 & 0x1f) & puVar19[iVar24];
        while (uVar20 == 0) {
          lVar14 = (longlong)iVar24;
          uVar21 = uVar21 + 0x20;
          iVar24 = iVar24 + 1;
          uVar20 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_1443875d0;
          uVar20 = (puVar19 + 1)[lVar14];
        }
        uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_31c = (int)lVar14;
        uVar20 = (uVar21 - 1) + local_31c;
        if ((int)local_d0 < (int)uVar20) {
          uVar20 = local_d0;
        }
      }
LAB_1443875d0:
      do {
        plVar6 = local_280;
        if ((int)local_280[1] - *(int *)((longlong)local_280 + 0x34) != (int)uStack_258) {
          local_403[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_403);
        }
        if (((TStack_278.CurrentBitIndex == uVar20) &&
            (TStack_278.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
           (plVar6 == (longlong *)local_f8)) break;
        puVar19 = (uint *)((longlong)TStack_278.CurrentBitIndex * 0x10 + *plVar6);
        if ((char)puVar19[1] == '\0') goto LAB_14438766b;
        TStack_278.UnvisitedBitMask = TStack_278.UnvisitedBitMask & ~TStack_278._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_278);
      } while( true );
    }
    goto LAB_14438770d;
  }
  if (local_a8.Elements._8_4_ - local_a8.Elements._52_4_ == local_148._8_4_ - local_114) {
    FMeshDescription::RemapPolygonGroups
              (local_300,
               (TMap<FPolygonGroupID,FPolygonGroupID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPolygonGroupID,FPolygonGroupID,0>_>
                *)&local_a8);
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2226201907385338799>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                       ,0xbaf,
                       "MatchPolygonGroupsDestSource.Num() == DestinationMaterialMatched.Num()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_100 = 0;
  if (local_108 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  local_b0 = 0;
  if (local_b8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8);
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPolygonGroupID,FPolygonGroupID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  param_4 = local_2f8;
  if ((*(int *)((longlong)&local_3a0->field0_0x0 + 0xc) != -1) &&
     (pFVar3 = (local_3a0->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
    param_4 = local_2f8;
  }
LAB_14438781f:
  if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) &&
     (pFVar3 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar3 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar3);
  }
  return;
}

// SwapPolygonPolygonGroup @ 1443886a0

void __cdecl
FStaticMeshOperations::SwapPolygonPolygonGroup
          (FMeshDescription *param_1,int param_2,int param_3,int param_4,bool param_5)

{
  uint *puVar1;
  FPolygonGroupID FVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FPolygonGroupID FVar8;
  FMeshElementContainer *pFVar9;
  TTuple<FName,FAttributesSetEntry> *pTVar10;
  ForElementType<unsigned_int> FVar11;
  FName *pFVar12;
  TMeshAttributeArrayBase<FName> *pTVar13;
  FPolygonGroupID *pFVar14;
  TArrayView<int_const_,int> *pTVar15;
  ForElementType<unsigned_int> FVar16;
  ForAnyElementType FVar17;
  FPolygonID FVar18;
  TMeshAttributeArraySet<FName> *pTVar19;
  int iVar20;
  TMeshAttributeArraySet<FName> *pTVar21;
  TElementIDs local_res8;
  uint local_res10;
  int local_res18;
  int local_res20;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  FName local_a8;
  FName local_a0;
  TArrayView<FTriangleID_const_,int> local_98;
  TArrayView<FPolygonID_const_,int> local_88;
  TConstIterator local_78;
  TArrayView<int_const_,int> local_58;
  
  pTVar21 = (TMeshAttributeArraySet<FName> *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  pFVar9 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
  pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar9->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  pTVar19 = (TMeshAttributeArraySet<FName> *)&pTVar10->field_0x8;
  if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar19 = pTVar21;
  }
  if (((pTVar19 == (TMeshAttributeArraySet<FName> *)0x0) ||
      (pTVar19 = (TMeshAttributeArraySet<FName> *)pTVar19->_padding_, (int)pTVar19->_padding_ != 6))
     || (*(int *)((longlong)&pTVar19->_padding_ + 4) != 1)) {
    pTVar19 = pTVar21;
  }
  if (!param_5) {
    uVar6 = param_2 & 0x1f;
    local_res10 = uVar6;
LAB_144388740:
    FVar11 = (ForElementType<unsigned_int>)
             FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
    if ((-1 < param_2) && (param_2 < *(int *)((longlong)FVar11 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar11 = *(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10);
      }
      param_4 = local_res20;
      if ((*(uint *)((longlong)FVar11 +
                    (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar6 & 0x1f) & 1) != 0) goto LAB_1443888f3;
    }
    pFVar9 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
    iVar7 = FMeshElementContainer::Add(pFVar9);
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_108,iVar7);
    ::FString::ConcatCF(&local_e8,L"SwapPolygonMaterialSlotName_",&local_108);
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_e8.Data.ArrayNum != 0) {
      FVar17.Data = local_e8.Data.AllocatorInstance.Data;
    }
    pFVar12 = ::FName::FName(&local_a8,(wchar_t *)FVar17.Data);
    FVar3 = *pFVar12;
    pTVar13 = TMeshAttributeArraySet<FName>::GetArrayForChannel(pTVar19,0);
    pFVar12 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar13,iVar7);
    *pFVar12 = FVar3;
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    uVar6 = local_res10;
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    goto LAB_144388740;
  }
  FVar11 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
  if ((-1 < param_2) && (param_2 < *(int *)((longlong)FVar11 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar11 = *(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10);
    }
    if ((*(uint *)((longlong)FVar11 + (ulonglong)((uint)param_2 >> 5) * 4) >> (param_2 & 0x1fU) & 1)
        != 0) goto LAB_1443888f3;
  }
  pFVar9 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
  param_2 = FMeshElementContainer::Add(pFVar9);
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_f8,param_2);
  ::FString::ConcatCF(&local_d8,L"SwapPolygonMaterialSlotName_",&local_f8);
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar17.Data = local_d8.Data.AllocatorInstance.Data;
  }
  pFVar12 = ::FName::FName(&local_a0,(wchar_t *)FVar17.Data);
  FVar3 = *pFVar12;
  pTVar13 = TMeshAttributeArraySet<FName>::GetArrayForChannel(pTVar19,0);
  pFVar12 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar13,param_2);
  *pFVar12 = FVar3;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  param_4 = local_res20;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    param_4 = local_res20;
  }
LAB_1443888f3:
  local_res8.Array = &FMeshElementChannels::Get(param_1->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_res8,(TConstIterator *)&local_c8);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_res8,&local_78);
  do {
    if ((local_c8.CurrentBitIndex == local_78.Iterator.CurrentBitIndex) &&
       (local_c8.Array == local_78.Iterator.Array)) {
      return;
    }
    FVar18 = (FPolygonID)0xffffffff;
    if (local_c8.CurrentBitIndex < (local_c8.Array)->NumBits) {
      FVar18 = (FPolygonID)local_c8.CurrentBitIndex;
    }
    FMeshElementIndexer::Find<FTriangleID>(&param_1->PolygonToTriangles,&local_98,(int)FVar18,0);
    iVar7 = local_98.ArrayNum;
    iVar20 = (int)pTVar21;
    if ((local_res18 <= iVar20) && (iVar20 < param_4)) {
      if ((param_4 <= local_98.ArrayNum + -1 + iVar20) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TriangleIndex + (TriangleCount - 1) < TriangleIndexEnd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                             ,0x9dd,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                          (&param_1->PolygonPolygonGroups,(int)FVar18);
      FVar2 = *pFVar14;
      if (((FVar2 != (FPolygonGroupID)param_2) &&
          (FMeshDescription::SetPolygonPolygonGroup(param_1,FVar18,(FPolygonGroupID)param_2),
          param_5)) &&
         (FMeshElementIndexer::Find<FPolygonID>
                    (&param_1->PolygonGroupToPolygons,&local_88,(int)FVar2,0), local_88.ArrayNum < 1
         )) {
        pTVar15 = FMeshElementIndexer::Find(&param_1->PolygonGroupToPolygons,&local_58,(int)FVar2,0)
        ;
        if ((pTVar15->ArrayNum != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("PolygonGroupToPolygons.Find(PolygonGroupID).Num() == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshDescription.h"
                               ,0x1a1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar11 = (ForElementType<unsigned_int>)
                 FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
        if ((((int)FVar2 < 0) || (*(int *)((longlong)FVar11 + 0x18) <= (int)FVar2)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar16 = FVar11;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar16 = *(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10);
        }
        FVar8 = FVar2;
        if ((int)FVar2 < 0) {
          FVar8 = (FPolygonGroupID)((int)FVar2 + 0x1f);
        }
        puVar1 = (uint *)((longlong)FVar16 + (longlong)((int)FVar8 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << (FVar2._0_1_ & 0x1f));
        *(int *)((longlong)FVar11 + 0x78) = *(int *)((longlong)FVar11 + 0x78) + 1;
        FAttributesSetBase::Remove((FAttributesSetBase *)((longlong)FVar11 + 0x20),(int)FVar2);
        FMeshElementIndexer::RemoveKey(&param_1->PolygonGroupToPolygons,(int)FVar2,0);
        FMeshElementIndexer::RemoveKey(&param_1->PolygonGroupToTriangles,(int)FVar2,0);
      }
    }
    pTVar21 = (TMeshAttributeArraySet<FName> *)(ulonglong)(uint)(iVar20 + iVar7);
    local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
    param_4 = local_res20;
  } while( true );
}

// ValidateAndFixData @ 144389be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FStaticMeshOperations::ValidateAndFixData(FMeshDescription *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TVector2<float> TVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FMeshElementContainer *pFVar16;
  TTuple<FName,FAttributesSetEntry> *pTVar17;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar18;
  TVector<float> *pTVar19;
  TMeshAttributeArrayBase<float> *pTVar20;
  float *pfVar21;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar22;
  TVector2<float>_u_0_s_0 *pTVar23;
  TVector2<float>_u_0 *pTVar24;
  TVector4<float> *pTVar25;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar26;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar27;
  int iVar28;
  TMeshAttributeArraySet<float> *this;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  longlong *plVar29;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  longlong lVar30;
  TElementIDs local_110;
  TElementIDs local_108;
  undefined8 local_100;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  TConstIterator local_b0;
  TConstIterator local_90 [2];
  
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  pFVar16 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::Vertex::Position);
  pTVar27 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar27 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  if (((pTVar27 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar27 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar27->_padding_,
      (int)pTVar27->_padding_ != 1)) || (*(int *)((longlong)&pTVar27->_padding_ + 4) != 1)) {
    pTVar27 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  local_110.Array = &FMeshElementChannels::Get(param_1->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_110,(TConstIterator *)&local_f0);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_110,&local_b0);
  while ((local_f0.CurrentBitIndex != local_b0.Iterator.CurrentBitIndex ||
         (local_f0.Array != local_b0.Iterator.Array))) {
    iVar28 = -1;
    if (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits) {
      iVar28 = local_f0.CurrentBitIndex;
    }
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar27,0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,iVar28);
    iVar13 = _finite((double)(pTVar19->field0_0x0)._s_0.X);
    if (((iVar13 == 0) || (iVar13 = _finite((double)(pTVar19->field0_0x0)._s_0.Y), iVar13 == 0)) ||
       (iVar13 = _finite((double)(pTVar19->field0_0x0)._s_0.Z), iVar13 == 0)) {
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      bVar2 = true;
      pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar27,0);
      pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,iVar28);
      *(undefined8 *)&pTVar19->field0_0x0 = uVar6;
      (pTVar19->field0_0x0)._s_0.Z = (float)uVar10;
    }
    local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
  }
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::Normal);
  plVar29 = (longlong *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar29 = (longlong *)0x0;
  }
  if (((plVar29 == (longlong *)0x0) ||
      (local_f8 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar29,
      (int)local_f8->_padding_ != 1)) || (*(int *)((longlong)&local_f8->_padding_ + 4) != 1)) {
    local_f8 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pTVar27 = local_f8;
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::Tangent);
  plVar29 = (longlong *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar29 = (longlong *)0x0;
  }
  if (((plVar29 == (longlong *)0x0) ||
      (this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)*plVar29,
      (int)this_01->_padding_ != 1)) || (*(int *)((longlong)&this_01->_padding_ + 4) != 1)) {
    this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  plVar29 = (longlong *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar29 = (longlong *)0x0;
  }
  if (((plVar29 == (longlong *)0x0) ||
      (this = (TMeshAttributeArraySet<float> *)*plVar29, (int)this->_padding_ != 3)) ||
     (*(int *)((longlong)&this->_padding_ + 4) != 1)) {
    this = (TMeshAttributeArraySet<float> *)0x0;
  }
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  plVar29 = (longlong *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar29 = (longlong *)0x0;
  }
  if (((plVar29 == (longlong *)0x0) ||
      (this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)*plVar29,
      (int)this_00->_padding_ != 2)) || (*(int *)((longlong)&this_00->_padding_ + 4) != 1)) {
    this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::Color);
  plVar29 = (longlong *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar29 = (longlong *)0x0;
  }
  if (((plVar29 == (longlong *)0x0) || (lVar30 = *plVar29, *(int *)(lVar30 + 8) != 0)) ||
     (*(int *)(lVar30 + 0xc) != 1)) {
    lVar30 = 0;
  }
  iVar28 = (this_00->ArrayForChannels).ArrayNum;
  local_108.Array = &FMeshElementChannels::Get(param_1->VertexInstanceElements,0)->BitArray;
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::begin
            (&local_108,(TConstIterator *)&local_d0);
  TMeshElementContainer<FVertexInstanceID>::TElementIDs::end(&local_108,local_90);
  uVar7 = _UNK_15076b1f8;
  uVar6 = ___xmm_3f8000003f8000003f8000003f800000;
  do {
    if ((local_d0.CurrentBitIndex == local_90[0].Iterator.CurrentBitIndex) &&
       (local_d0.Array == local_90[0].Iterator.Array)) {
      if (1 < (param_2->Data).ArrayNum) {
        if ((bVar2) && (3 < (byte)LogStaticMeshOperations._0_1_)) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
        }
        if ((bVar3) && (3 < (byte)LogStaticMeshOperations._0_1_)) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
        }
        if ((bVar4) && (3 < (byte)LogStaticMeshOperations._0_1_)) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
        }
        if ((bVar5) && (3 < (byte)LogStaticMeshOperations._0_1_)) {
          UE::Logging::Private::BasicLog<4>
                    (&::LOG_Static,(FLogCategoryBase *)&LogStaticMeshOperations);
        }
      }
      if ((((!bVar2) && (!bVar3)) && (!bVar4)) && (!bVar5)) {
        return true;
      }
      return false;
    }
    iVar13 = -1;
    if (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits) {
      iVar13 = local_d0.CurrentBitIndex;
    }
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar27,0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,iVar13);
    iVar14 = _finite((double)(pTVar19->field0_0x0)._s_0.X);
    if (((iVar14 == 0) || (iVar14 = _finite((double)(pTVar19->field0_0x0)._s_0.Y), iVar14 == 0)) ||
       (iVar14 = _finite((double)(pTVar19->field0_0x0)._s_0.Z), iVar14 == 0)) {
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      bVar3 = true;
      pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar27,0);
      pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,iVar13);
      *(undefined8 *)&pTVar19->field0_0x0 = uVar9;
      (pTVar19->field0_0x0)._s_0.Z = (float)uVar10;
    }
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
    pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,iVar13);
    iVar14 = _finite((double)(pTVar19->field0_0x0)._s_0.X);
    if (((iVar14 == 0) || (iVar14 = _finite((double)(pTVar19->field0_0x0)._s_0.Y), iVar14 == 0)) ||
       (iVar14 = _finite((double)(pTVar19->field0_0x0)._s_0.Z), iVar14 == 0)) {
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      bVar3 = true;
      pTVar18 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
      pTVar19 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar18,iVar13);
      *(undefined8 *)&pTVar19->field0_0x0 = uVar9;
      (pTVar19->field0_0x0)._s_0.Z = (float)uVar10;
    }
    pTVar20 = TMeshAttributeArraySet<float>::GetArrayForChannel(this,0);
    pfVar21 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar20,iVar13);
    iVar14 = _isnan((double)*pfVar21);
    if (iVar14 != 0) {
      bVar3 = true;
      pTVar20 = TMeshAttributeArraySet<float>::GetArrayForChannel(this,0);
      pfVar21 = TMeshAttributeArrayBase<float>::GetElementBase(pTVar20,iVar13);
      *pfVar21 = 0.0;
    }
    iVar14 = 0;
    if (0 < iVar28) {
      do {
        pTVar22 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                            (this_00,iVar14);
        pTVar23 = (TVector2<float>_u_0_s_0 *)
                  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                            (pTVar22,iVar13);
        local_100 = *pTVar23;
        iVar15 = _finite((double)(float)local_100);
        if (iVar15 == 0) {
LAB_14438a0b6:
          TVar8.field0_0x0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          bVar4 = true;
          pTVar22 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (this_00,iVar14);
          pTVar24 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                               (pTVar22,iVar13)->field0_0x0;
          pTVar24->_s_0 = (TVector2<float>_u_0_s_0)TVar8.field0_0x0;
        }
        else {
          iVar15 = _finite((double)local_100._4_4_);
          if (iVar15 == 0) goto LAB_14438a0b6;
        }
        iVar14 = iVar14 + 1;
        pTVar27 = local_f8;
      } while (iVar14 < iVar28);
    }
    if ((*(int *)(lVar30 + 0x38) < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar1 = (code *)swi(3);
      uVar12 = (*pcVar1)();
      return (bool)uVar12;
    }
    pTVar26 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)(lVar30 + 0x18);
    if (*(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> **)(lVar30 + 0x30) !=
        (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)0x0) {
      pTVar26 = *(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> **)(lVar30 + 0x30);
    }
    pTVar25 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase(pTVar26,iVar13);
    iVar14 = _finite((double)(pTVar25->field0_0x0)._s_0.X);
    if ((((iVar14 == 0) || (iVar14 = _finite((double)(pTVar25->field0_0x0)._s_0.Y), iVar14 == 0)) ||
        (iVar14 = _finite((double)(pTVar25->field0_0x0)._s_0.Z), iVar14 == 0)) ||
       (iVar14 = _finite((double)(pTVar25->field0_0x0)._s_0.W), iVar14 == 0)) {
      bVar5 = true;
      if ((*(int *)(lVar30 + 0x38) < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        uVar12 = (*pcVar1)();
        return (bool)uVar12;
      }
      pTVar26 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)(lVar30 + 0x18);
      if (*(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> **)(lVar30 + 0x30) !=
          (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)0x0) {
        pTVar26 = *(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> **)(lVar30 + 0x30);
      }
      pTVar25 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase(pTVar26,iVar13);
      *(undefined8 *)&pTVar25->field0_0x0 = uVar6;
      *(undefined8 *)((longlong)&pTVar25->field0_0x0 + 8) = uVar7;
    }
    local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
  } while( true );
}

