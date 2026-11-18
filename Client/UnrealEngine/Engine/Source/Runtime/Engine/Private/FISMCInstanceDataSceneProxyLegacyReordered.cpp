// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FISMCInstanceDataSceneProxyLegacyReordered @ 147d77a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FISMCInstanceDataSceneProxyLegacyReordered * __thiscall
FISMCInstanceDataSceneProxyLegacyReordered::FISMCInstanceDataSceneProxyLegacyReordered
          (FISMCInstanceDataSceneProxyLegacyReordered *this,FStaticShaderPlatform param_1,
          Type param_2,bool param_3)

{
  FISMCInstanceDataSceneProxy::FISMCInstanceDataSceneProxy
            ((FISMCInstanceDataSceneProxy *)this,param_1,param_2);
  this->bLegacyReordered = param_3;
  this->_padding_ = (longlong)&___7FISMCInstanceDataSceneProxyLegacyReordered__6B_;
  (this->LegacyInstanceReorderTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegacyInstanceReorderTable).ArrayNum = 0;
  (this->LegacyInstanceReorderTable).ArrayMax = 0;
  (this->ExternalLegacyData).Ptr = (FStaticMeshInstanceData *)0x0;
  return this;
}

// Build @ 147d88ba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxyLegacyReordered::Build
          (FISMCInstanceDataSceneProxyLegacyReordered *this,FISMInstanceUpdateChangeSet *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  FAccessTag FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FIdentityIndexRemap local_res10 [8];
  uint local_res18;
  EKind EStackX_1c;
  FReorderTableIndexRemap local_c8;
  FWriteView local_b8;
  
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  if (((char)param_1->_padding_ == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChangeSet.IsFullUpdate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                         ,0x1ce,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->bLegacyReordered == false) && ((param_1->LegacyInstanceReorderTable).ArrayNum != 0))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("bLegacyReordered || ChangeSet.LegacyInstanceReorderTable.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                            ,0x1d2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EStackX_1c = Writer;
  uVar9 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  local_res18 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_res18 = local_res18 >> 0x10 ^ local_res18;
  FVar12.Kind = Writer;
  FVar12.WriterTag = local_res18;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_b8,FVar12);
  pTVar1 = &param_1->LegacyInstanceReorderTable;
  pTVar2 = &this->LegacyInstanceReorderTable;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LegacyInstanceReorderTable).ArrayNum = (param_1->LegacyInstanceReorderTable).ArrayNum;
    (this->LegacyInstanceReorderTable).ArrayMax = (param_1->LegacyInstanceReorderTable).ArrayMax;
    (param_1->LegacyInstanceReorderTable).ArrayNum = 0;
    (param_1->LegacyInstanceReorderTable).ArrayMax = 0;
  }
  *local_b8.Flags = *(FInstanceDataFlags *)((longlong)&param_1->_padding_ + 2);
  UpdateIdMapping<FIdentityIndexRemap>
            ((FInstanceUpdateChangeSet *)param_1,local_res10,(FInstanceIdIndexMap *)&this->_padding_
            );
  local_c8.MaxValidIndex = param_1->PostUpdateNumInstances;
  local_c8.ReorderTable = pTVar2;
  FISMCInstanceDataSceneProxy::ApplyDataChanges<FReorderTableIndexRemap>
            ((FISMCInstanceDataSceneProxy *)this,param_1,&local_c8,local_c8.MaxValidIndex,&local_b8)
  ;
  if ((this->bLegacyReordered == false) ||
     (iVar7 = param_1->PostUpdateNumInstances, iVar7 == (this->LegacyInstanceReorderTable).ArrayNum)
     ) {
    *(undefined4 *)((longlong)local_b8.VisibleInstances + 0x18) = 0;
    (local_b8.Flags)->Packed = (local_b8.Flags)->Packed & 0xfeff;
  }
  else {
    *(int *)((ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x18))->
            InlineData = iVar7;
    uVar9 = iVar7 + 0x1fU >> 5;
    if (iVar7 + 0x1fU >> 5 != 0) {
      if (*(int *)((longlong)local_b8.VisibleInstances + 0x1c) + 0x1fU >> 5 < uVar9) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&(local_b8.VisibleInstances)->AllocatorInstance,0,uVar9,4);
        *(uint *)((longlong)local_b8.VisibleInstances + 0x1c) = uVar9 << 5;
      }
      FVar10 = *(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)local_b8.VisibleInstances;
      }
      memset((void *)FVar10,0,(ulonglong)uVar9 << 2);
      uVar11 = *(int *)((longlong)local_b8.VisibleInstances + 0x18) >> 0x1f & 0x1f;
      uVar9 = *(int *)((longlong)local_b8.VisibleInstances + 0x18) + uVar11;
      iVar7 = (uVar9 & 0x1f) - uVar11;
      if (iVar7 != 0) {
        FVar10 = *(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar10 = (ForElementType<unsigned_int>)local_b8.VisibleInstances;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)((int)uVar9 >> 5) * 4);
        *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
      }
    }
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    iVar7 = (this->LegacyInstanceReorderTable).ArrayNum;
    pFVar4 = pFVar14 + (longlong)iVar7 * 4;
    while( true ) {
      if ((this->LegacyInstanceReorderTable).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      pTVar1 = local_c8.ReorderTable;
      if (pFVar14 == pFVar4) break;
      iVar8 = *(int *)pFVar14;
      if ((iVar8 < 0) || ((local_c8.ReorderTable)->ArrayNum <= iVar8)) {
        iVar13 = -1;
        if (iVar8 < local_c8.MaxValidIndex) {
          iVar13 = iVar8;
        }
      }
      else {
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4);
        iVar13 = -1;
        if (iVar8 < local_c8.MaxValidIndex) {
          iVar13 = iVar8;
        }
      }
      if (iVar13 != -1) {
        if (((iVar13 < 0) || (*(int *)((longlong)local_b8.VisibleInstances + 0x18) <= iVar13)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar10 = (ForElementType<unsigned_int>)local_b8.VisibleInstances;
        if (*(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar10 = *(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10);
        }
        iVar8 = iVar13;
        if (iVar13 < 0) {
          iVar8 = iVar13 + 0x1f;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)(iVar8 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)iVar13 & 0x1f);
      }
      pFVar14 = pFVar14 + 4;
    }
    FVar12.Kind = EStackX_1c;
    FVar12.WriterTag = local_res18;
    (local_b8.Flags)->Packed = (local_b8.Flags)->Packed | 0x100;
  }
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar12);
  FInstanceSceneDataBuffers::ValidateData((FInstanceSceneDataBuffers *)&this->_padding_);
  FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
  return;
}

// BuildFromLegacyData @ 147d899b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxyLegacyReordered::BuildFromLegacyData
          (FISMCInstanceDataSceneProxyLegacyReordered *this,
          TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *param_1,
          FRenderBounds *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  FStaticMeshInstanceData *pFVar7;
  FScriptContainerElement *pFVar8;
  TVector<float>_u_0 *pTVar9;
  FStaticMeshVertexDataInterface *pFVar10;
  uchar *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  FAccessTag FVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar23;
  bool bVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  FAccessTag FVar30;
  longlong lVar31;
  uint uVar32;
  undefined1 auStackY_2e8 [32];
  longlong local_298;
  FWriteView local_248;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TVector4<float>_u_0 local_1b8;
  TArrayView<float,int> local_1a8;
  TVector<float>_u_0 local_198;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined1 auStack_17c [12];
  float local_170;
  float local_16c;
  TVector<float>_u_0 local_168;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  TMatrix<float> local_138;
  TMatrix<float> local_f8;
  TMatrix<float> local_b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  pTVar1 = &this->ExternalLegacyData;
  if (pTVar1 != param_1) {
    pFVar7 = pTVar1->Ptr;
    pTVar1->Ptr = param_1->Ptr;
    param_1->Ptr = (FStaticMeshInstanceData *)0x0;
    if (pFVar7 != (FStaticMeshInstanceData *)0x0) {
      FStaticMeshInstanceData::~FStaticMeshInstanceData(pFVar7);
      ::operator_delete(pFVar7,0x50);
    }
  }
  if (((this->bLegacyReordered == false) && (param_3->ArrayNum != 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("bLegacyReordered || InLegacyInstanceReorderTable.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x201,L""), bVar24)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar2 = &this->LegacyInstanceReorderTable;
  if (pTVar2 != param_3) {
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar2->AllocatorInstance).Data = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LegacyInstanceReorderTable).ArrayNum = param_3->ArrayNum;
    (this->LegacyInstanceReorderTable).ArrayMax = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
  }
  if (((char)this->_padding_ != '\0') &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bUseLegacyRenderingPath",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x204,L""), bVar24)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar28 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
  uVar28 = uVar28 >> 0x10 ^ uVar28;
  FVar14.Kind = Writer;
  FVar14.WriterTag = uVar28;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_248,FVar14);
  (local_248.Flags)->Packed = (local_248.Flags)->Packed & 0xfffb;
  (local_248.PrevInstanceToPrimitiveRelative)->ArrayNum = 0;
  if ((local_248.PrevInstanceToPrimitiveRelative)->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,0,&(local_248.PrevInstanceToPrimitiveRelative)->AllocatorInstance,0,
               &(local_248.PrevInstanceToPrimitiveRelative)->ArrayMax);
  }
  if (((*(byte *)local_248.Flags & 0x80) != 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ProxyData.Flags.bHasPerInstancePayloadExtension",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x20b,L""), bVar24)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar6 = pTVar1->Ptr->NumInstances;
  (local_248.VisibleInstances)->NumBits = 0;
  TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(local_248.VisibleInstances,uVar6,true);
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if ((local_248.InstanceToPrimitiveRelative)->ArrayMax < (int)uVar6) {
    (local_248.InstanceToPrimitiveRelative)->ArrayNum = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,uVar6,&(local_248.InstanceToPrimitiveRelative)->AllocatorInstance,0,
               &(local_248.InstanceToPrimitiveRelative)->ArrayMax);
  }
  else {
    (local_248.InstanceToPrimitiveRelative)->ArrayNum = 0;
  }
  uVar32 = 0;
  if ((*(byte *)local_248.Flags & 0x10) != 0) {
    uVar32 = uVar6;
  }
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (local_248.InstanceLightShadowUVBias,uVar32,Default);
  (local_248.InstanceLocalBounds)->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,1,(local_248.InstanceLocalBounds)->ArrayMax,
             &(local_248.InstanceLocalBounds)->AllocatorInstance,1,
             &(local_248.InstanceLocalBounds)->ArrayMax);
  pFVar8 = ((local_248.InstanceLocalBounds)->AllocatorInstance).Data;
  uVar13 = *(undefined8 *)((longlong)&(param_2->Min).field0_0x0 + 8);
  *(undefined8 *)pFVar8 = *(undefined8 *)&(param_2->Min).field0_0x0;
  *(undefined8 *)(pFVar8 + 8) = uVar13;
  *(undefined8 *)(pFVar8 + 0x10) = *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 4);
  iVar29 = pTVar1->Ptr->NumCustomDataFloats;
  *local_248.NumCustomDataFloats = iVar29;
  if ((*(byte *)local_248.Flags & 2) == 0) {
    iVar29 = 0;
  }
  else {
    iVar29 = iVar29 * uVar6;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (local_248.InstanceCustomData,iVar29,Default);
  uVar32 = 0;
  if ((*(byte *)local_248.Flags & 1) != 0) {
    uVar32 = uVar6;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (local_248.InstanceRandomIDs,uVar32,Default);
  uVar20 = _UNK_150689648;
  uVar13 = ___xmm_3f800000000000000000000000000000;
  fVar19 = __real_38000100;
  fVar18 = __real_3f800000;
  uVar32 = 0;
  if (0 < (int)uVar6) {
    lVar31 = 0;
    local_298 = 0;
    do {
      FStaticMeshInstanceData::GetInstanceTransform
                (pTVar1->Ptr,uVar32,(FRenderTransform *)&local_198._s_0);
      auVar16._4_8_ = uStack_188;
      auVar16._0_4_ = uStack_18c;
      auVar16._12_4_ = uStack_180;
      auVar15._12_4_ = uStack_18c;
      auVar15._0_12_ = (undefined1  [12])local_198;
      local_b8.M[1] = (float  [4])insertps(auVar16,auVar16,8);
      auVar17._4_12_ = auStack_17c;
      auVar17._0_4_ = uStack_180;
      local_b8.M[0] = (float  [4])insertps(auVar15,auVar15,8);
      local_b8.M[2] = (float  [4])insertps(auVar17,auVar17,8);
      local_b8.M[3][1] = local_170;
      local_b8.M[3][0] = auStack_17c._8_4_;
      local_b8.M[3][3] = fVar18;
      local_b8.M[3][2] = local_16c;
      local_f8.M[3][0] = ((local_248.PrimitiveToRelativeWorld)->Origin).field0_0x0._s_0.X;
      local_f8.M[3][1] = ((local_248.PrimitiveToRelativeWorld)->Origin).field0_0x0._s_0.Y;
      local_f8.M[1] =
           (float  [4])
           insertps(*(undefined1 (*) [16])((local_248.PrimitiveToRelativeWorld)->TransformRows + 1),
                    *(undefined1 (*) [16])((local_248.PrimitiveToRelativeWorld)->TransformRows + 1),
                    8);
      local_f8.M[3][2] = ((local_248.PrimitiveToRelativeWorld)->Origin).field0_0x0._s_0.Z;
      local_f8.M[2] =
           (float  [4])
           insertps(*(undefined1 (*) [16])((local_248.PrimitiveToRelativeWorld)->TransformRows + 2),
                    *(undefined1 (*) [16])((local_248.PrimitiveToRelativeWorld)->TransformRows + 2),
                    8);
      local_f8.M[0] =
           (float  [4])
           insertps(*(undefined1 (*) [16])(local_248.PrimitiveToRelativeWorld)->TransformRows,
                    *(undefined1 (*) [16])(local_248.PrimitiveToRelativeWorld)->TransformRows,8);
      local_f8.M[3][3] = fVar18;
      VectorMatrixMultiply(&local_138,&local_b8,&local_f8);
      local_168._s_0.X = local_138.M[0][0];
      local_168._s_0.Y = local_138.M[0][1];
      local_168._s_0.Z = local_138.M[0][2];
      fStack_15c = local_138.M[1][0];
      local_158 = local_138.M[1][1];
      fStack_154 = local_138.M[1][2];
      fStack_150 = local_138.M[2][0];
      fStack_14c = local_138.M[2][1];
      local_148 = local_138.M[2][2];
      fStack_144 = local_138.M[3][0];
      fStack_140 = local_138.M[3][1];
      fStack_13c = local_138.M[3][2];
      FRenderTransform::Orthogonalize((FRenderTransform *)&local_168._s_0);
      pTVar23 = local_248.InstanceToPrimitiveRelative;
      pTVar9 = (TVector<float>_u_0 *)
               ((local_248.InstanceToPrimitiveRelative)->AllocatorInstance).Data;
      if (((pTVar9 <= &local_168) &&
          (&local_168 < pTVar9 + (longlong)(local_248.InstanceToPrimitiveRelative)->ArrayMax * 4))
         && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar24)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar29 = pTVar23->ArrayNum;
      if (iVar29 == pTVar23->ArrayMax) {
        iVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x430,&pTVar23->AllocatorInstance,&pTVar23->ArrayMax);
      }
      lVar27 = (longlong)iVar29;
      pTVar23->ArrayNum = iVar29 + 1;
      pFVar8 = (pTVar23->AllocatorInstance).Data;
      *(ulonglong *)(pFVar8 + lVar27 * 0x30) = CONCAT44(local_168._s_0.Y,local_168._s_0.X);
      *(ulonglong *)(pFVar8 + lVar27 * 0x30 + 8) = CONCAT44(fStack_15c,local_168._s_0.Z);
      *(ulonglong *)(pFVar8 + lVar27 * 0x30 + 0x10) = CONCAT44(fStack_154,local_158);
      *(ulonglong *)(pFVar8 + lVar27 * 0x30 + 0x10 + 8) = CONCAT44(fStack_14c,fStack_150);
      *(ulonglong *)(pFVar8 + lVar27 * 0x30 + 0x20) = CONCAT44(fStack_144,local_148);
      *(ulonglong *)(pFVar8 + lVar27 * 0x30 + 0x20 + 8) = CONCAT44(fStack_13c,fStack_140);
      if ((*(byte *)local_248.Flags & 2) != 0) {
        pFVar7 = pTVar1->Ptr;
        iStack_1c0 = *local_248.NumCustomDataFloats;
        local_1c8 = ((local_248.InstanceCustomData)->AllocatorInstance).Data +
                    (longlong)(int)(iStack_1c0 * uVar32) * 4;
        if ((iStack_1c0 < 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_1a8._12_4_ = uStack_1bc;
        local_1a8.ArrayNum = iStack_1c0;
        local_1a8.DataPtr = (float *)local_1c8;
        FStaticMeshInstanceData::GetInstanceCustomDataInternal(pFVar7,uVar32,&local_1a8);
      }
      pTVar21 = local_248.InstanceRandomIDs;
      if ((*(byte *)local_248.Flags & 1) != 0) {
        pFVar7 = pTVar1->Ptr;
        uVar25 = 0;
        if ((int)uVar32 < (local_248.InstanceRandomIDs)->ArrayNum) {
          uVar25 = ~uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar8 = (pTVar21->AllocatorInstance).Data;
        local_1b8._0_8_ = uVar13;
        local_1b8._8_8_ = uVar20;
        FStaticMeshInstanceData::GetInstanceOriginInternal
                  (pFVar7,uVar32,(TVector4<float> *)&local_1b8._s_0);
        *(float *)(pFVar8 + lVar31 * 4) = local_1b8._s_0.W;
      }
      pTVar22 = local_248.InstanceLightShadowUVBias;
      if ((*(byte *)local_248.Flags & 0x10) != 0) {
        pFVar7 = pTVar1->Ptr;
        uVar25 = 0;
        if ((int)uVar32 < (local_248.InstanceLightShadowUVBias)->ArrayNum) {
          uVar25 = ~uVar32 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar8 = (pTVar22->AllocatorInstance).Data;
        pFVar10 = pFVar7->InstanceLightmapData;
        puVar11 = pFVar7->InstanceLightmapDataPtr;
        iVar29 = (**(code **)((longlong)*pFVar10 + 0x20))(pFVar10);
        iVar26 = (**(code **)((longlong)*pFVar10 + 0x28))(pFVar10);
        if (pFVar7->InstanceLightmapDataPtr + (uint)(iVar26 * iVar29) <
            puVar11 + (longlong)(int)uVar32 * 8 + 8) {
          bVar24 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_9111849448622782982>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                              ,0x5fa,
                              "(void*)((&ElementData[InstanceIndex]) + 1) <= (void*)(InstanceLightmapDataPtr + CurrentSize)"
                             );
          if (bVar24) {
code_r0x000147d8a149:
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          if (pFVar7->InstanceLightmapDataPtr <= puVar11 + (longlong)(int)uVar32 * 8) {
            sVar3 = *(short *)(puVar11 + lVar31 * 8 + 2);
            sVar4 = *(short *)(puVar11 + lVar31 * 8 + 4);
            sVar5 = *(short *)(puVar11 + lVar31 * 8 + 6);
            pFVar8 = pFVar8 + local_298;
            *(float *)pFVar8 = (float)(int)*(short *)(puVar11 + lVar31 * 8) * fVar19;
            *(float *)(pFVar8 + 4) = (float)(int)sVar3 * fVar19;
            *(float *)(pFVar8 + 8) = (float)(int)sVar4 * fVar19;
            *(float *)(pFVar8 + 0xc) = (float)(int)sVar5 * fVar19;
            goto LAB_147d8a1da;
          }
          bVar24 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_9111849448622782981>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\StaticMeshResources.h"
                              ,0x5fb,
                              "(void*)((&ElementData[InstanceIndex]) + 0) >= (void*)(InstanceLightmapDataPtr)"
                             );
          if (bVar24) goto code_r0x000147d8a149;
        }
        pFVar8 = pFVar8 + local_298;
        *(undefined8 *)pFVar8 = 0;
        *(undefined8 *)(pFVar8 + 8) = 0;
      }
LAB_147d8a1da:
      local_298 = local_298 + 0x10;
      uVar32 = uVar32 + 1;
      lVar31 = lVar31 + 1;
    } while (lVar31 < (int)uVar6);
  }
  FVar30.Kind = Writer;
  FVar30.WriterTag = uVar28;
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar30);
  FInstanceSceneDataBuffers::ValidateData((FInstanceSceneDataBuffers *)&this->_padding_);
  FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
  return;
}

// Update @ 147dc6540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxyLegacyReordered::Update
          (FISMCInstanceDataSceneProxyLegacyReordered *this,FISMInstanceUpdateChangeSet *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  FAccessTag FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  FIdentityIndexRemap local_res10 [8];
  uint local_res18;
  EKind EStackX_1c;
  FReorderTableIndexRemap local_c8;
  FWriteView local_b8;
  
  if (((char)param_1->_padding_ != '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ChangeSet.IsFullUpdate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                         ,0x1a0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->bLegacyReordered == false) && ((param_1->LegacyInstanceReorderTable).ArrayNum != 0))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("bLegacyReordered || ChangeSet.LegacyInstanceReorderTable.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                            ,0x1a1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FInstanceDataSceneProxy::DecStatCounters((FInstanceDataSceneProxy *)this);
  EStackX_1c = Writer;
  uVar9 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  local_res18 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  local_res18 = local_res18 >> 0x10 ^ local_res18;
  FVar12.Kind = Writer;
  FVar12.WriterTag = local_res18;
  FInstanceSceneDataBuffers::BeginWriteAccess
            ((FInstanceSceneDataBuffers *)&this->_padding_,&local_b8,FVar12);
  *local_b8.Flags = *(FInstanceDataFlags *)((longlong)&param_1->_padding_ + 2);
  UpdateIdMapping<FIdentityIndexRemap>
            ((FInstanceUpdateChangeSet *)param_1,local_res10,(FInstanceIdIndexMap *)&this->_padding_
            );
  pTVar1 = &param_1->LegacyInstanceReorderTable;
  pTVar2 = &this->LegacyInstanceReorderTable;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->LegacyInstanceReorderTable).ArrayNum = (param_1->LegacyInstanceReorderTable).ArrayNum;
    (this->LegacyInstanceReorderTable).ArrayMax = (param_1->LegacyInstanceReorderTable).ArrayMax;
    (param_1->LegacyInstanceReorderTable).ArrayNum = 0;
    (param_1->LegacyInstanceReorderTable).ArrayMax = 0;
  }
  local_c8.MaxValidIndex = param_1->PostUpdateNumInstances;
  local_c8.ReorderTable = pTVar2;
  FISMCInstanceDataSceneProxy::ApplyDataChanges<FReorderTableIndexRemap>
            ((FISMCInstanceDataSceneProxy *)this,param_1,&local_c8,local_c8.MaxValidIndex,&local_b8)
  ;
  if ((this->bLegacyReordered == false) ||
     (iVar7 = param_1->PostUpdateNumInstances, iVar7 == (this->LegacyInstanceReorderTable).ArrayNum)
     ) {
    *(undefined4 *)((longlong)local_b8.VisibleInstances + 0x18) = 0;
    (local_b8.Flags)->Packed = (local_b8.Flags)->Packed & 0xfeff;
  }
  else {
    *(int *)((ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x18))->
            InlineData = iVar7;
    uVar9 = iVar7 + 0x1fU >> 5;
    if (iVar7 + 0x1fU >> 5 != 0) {
      if (*(int *)((longlong)local_b8.VisibleInstances + 0x1c) + 0x1fU >> 5 < uVar9) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&(local_b8.VisibleInstances)->AllocatorInstance,0,uVar9,4);
        *(uint *)((longlong)local_b8.VisibleInstances + 0x1c) = uVar9 << 5;
      }
      FVar10 = *(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar10 = (ForElementType<unsigned_int>)local_b8.VisibleInstances;
      }
      memset((void *)FVar10,0,(ulonglong)uVar9 << 2);
      uVar11 = *(int *)((longlong)local_b8.VisibleInstances + 0x18) >> 0x1f & 0x1f;
      uVar9 = *(int *)((longlong)local_b8.VisibleInstances + 0x18) + uVar11;
      iVar7 = (uVar9 & 0x1f) - uVar11;
      if (iVar7 != 0) {
        FVar10 = *(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar10 = (ForElementType<unsigned_int>)local_b8.VisibleInstances;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)((int)uVar9 >> 5) * 4);
        *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
      }
    }
    pFVar14 = (pTVar2->AllocatorInstance).Data;
    iVar7 = (this->LegacyInstanceReorderTable).ArrayNum;
    pFVar4 = pFVar14 + (longlong)iVar7 * 4;
    while( true ) {
      if ((this->LegacyInstanceReorderTable).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      pTVar1 = local_c8.ReorderTable;
      if (pFVar14 == pFVar4) break;
      iVar8 = *(int *)pFVar14;
      if ((iVar8 < 0) || ((local_c8.ReorderTable)->ArrayNum <= iVar8)) {
        iVar13 = -1;
        if (iVar8 < local_c8.MaxValidIndex) {
          iVar13 = iVar8;
        }
      }
      else {
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4);
        iVar13 = -1;
        if (iVar8 < local_c8.MaxValidIndex) {
          iVar13 = iVar8;
        }
      }
      if (iVar13 != -1) {
        if (((iVar13 < 0) || (*(int *)((longlong)local_b8.VisibleInstances + 0x18) <= iVar13)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar10 = (ForElementType<unsigned_int>)local_b8.VisibleInstances;
        if (*(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar10 = *(ForElementType<unsigned_int> *)((longlong)local_b8.VisibleInstances + 0x10);
        }
        iVar8 = iVar13;
        if (iVar13 < 0) {
          iVar8 = iVar13 + 0x1f;
        }
        puVar3 = (uint *)((longlong)FVar10 + (longlong)(iVar8 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)iVar13 & 0x1f);
      }
      pFVar14 = pFVar14 + 4;
    }
    FVar12.Kind = EStackX_1c;
    FVar12.WriterTag = local_res18;
    (local_b8.Flags)->Packed = (local_b8.Flags)->Packed | 0x100;
  }
  FInstanceSceneDataBuffers::EndWriteAccess((FInstanceSceneDataBuffers *)&this->_padding_,FVar12);
  FInstanceSceneDataBuffers::ValidateData((FInstanceSceneDataBuffers *)&this->_padding_);
  FInstanceDataSceneProxy::IncStatCounters((FInstanceDataSceneProxy *)this);
  return;
}

// UpdateInstancesTransforms @ 147dc7010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FISMCInstanceDataSceneProxyLegacyReordered::UpdateInstancesTransforms
          (FISMCInstanceDataSceneProxyLegacyReordered *this,FWriteView *param_1,
          FStaticMeshInstanceData *param_2)

{
  uint uVar1;
  TArray<FRenderTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  FRenderTransform *pFVar3;
  TVector<float>_u_0 *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStackY_1b8 [32];
  TVector<float>_u_0 local_168;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_14c [12];
  float local_140;
  float local_13c;
  TVector<float>_u_0 local_138;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  TMatrix<float> local_108;
  TMatrix<float> local_c8;
  TMatrix<float> local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar2 = param_1->PrevInstanceToPrimitiveRelative;
  iVar14 = 0;
  pTVar2->ArrayNum = 0;
  if (pTVar2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,0,&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
  }
  if (((*(byte *)param_1->Flags & 0x80) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ProxyData.Flags.bHasPerInstancePayloadExtension",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                          ,0x24e,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar1 = param_2->NumInstances;
  pTVar2 = param_1->InstanceToPrimitiveRelative;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  pTVar2->ArrayNum = 0;
  if (pTVar2->ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,uVar1,&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
  }
  fVar10 = __real_3f800000;
  if (0 < (int)uVar1) {
    do {
      FStaticMeshInstanceData::GetInstanceTransform
                (param_2,iVar14,(FRenderTransform *)&local_168._s_0);
      pFVar3 = param_1->PrimitiveToRelativeWorld;
      auVar8._4_8_ = uStack_158;
      auVar8._0_4_ = uStack_15c;
      auVar8._12_4_ = uStack_150;
      auVar7._12_4_ = uStack_15c;
      auVar7._0_12_ = (undefined1  [12])local_168;
      local_88.M[1] = (float  [4])insertps(auVar8,auVar8,8);
      auVar9._4_12_ = auStack_14c;
      auVar9._0_4_ = uStack_150;
      local_88.M[0] = (float  [4])insertps(auVar7,auVar7,8);
      local_88.M[2] = (float  [4])insertps(auVar9,auVar9,8);
      local_88.M[3][1] = local_140;
      local_88.M[3][0] = auStack_14c._8_4_;
      local_88.M[3][3] = fVar10;
      local_88.M[3][2] = local_13c;
      local_c8.M[3][0] = (pFVar3->Origin).field0_0x0._s_0.X;
      local_c8.M[3][1] = (pFVar3->Origin).field0_0x0._s_0.Y;
      local_c8.M[1] =
           (float  [4])
           insertps(*(undefined1 (*) [16])(pFVar3->TransformRows + 1),
                    *(undefined1 (*) [16])(pFVar3->TransformRows + 1),8);
      local_c8.M[3][2] = (pFVar3->Origin).field0_0x0._s_0.Z;
      local_c8.M[2] =
           (float  [4])
           insertps(*(undefined1 (*) [16])(pFVar3->TransformRows + 2),
                    *(undefined1 (*) [16])(pFVar3->TransformRows + 2),8);
      local_c8.M[0] =
           (float  [4])
           insertps(*(undefined1 (*) [16])pFVar3->TransformRows,
                    *(undefined1 (*) [16])pFVar3->TransformRows,8);
      local_c8.M[3][3] = fVar10;
      VectorMatrixMultiply(&local_108,&local_88,&local_c8);
      local_138._s_0.X = local_108.M[0][0];
      local_138._s_0.Y = local_108.M[0][1];
      local_138._s_0.Z = local_108.M[0][2];
      fStack_12c = local_108.M[1][0];
      local_128 = local_108.M[1][1];
      fStack_124 = local_108.M[1][2];
      fStack_120 = local_108.M[2][0];
      fStack_11c = local_108.M[2][1];
      local_118 = local_108.M[2][2];
      fStack_114 = local_108.M[3][0];
      fStack_110 = local_108.M[3][1];
      fStack_10c = local_108.M[3][2];
      FRenderTransform::Orthogonalize((FRenderTransform *)&local_138._s_0);
      pTVar2 = param_1->InstanceToPrimitiveRelative;
      pTVar4 = (TVector<float>_u_0 *)(pTVar2->AllocatorInstance).Data;
      if (((pTVar4 <= &local_138) && (&local_138 < pTVar4 + (longlong)pTVar2->ArrayMax * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = pTVar2->ArrayNum;
      if (iVar12 == pTVar2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x430,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
      }
      iVar14 = iVar14 + 1;
      pTVar2->ArrayNum = iVar12 + 1;
      lVar13 = (longlong)iVar12;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      *(ulonglong *)(pFVar5 + lVar13 * 0x30) = CONCAT44(local_138._s_0.Y,local_138._s_0.X);
      *(ulonglong *)(pFVar5 + lVar13 * 0x30 + 8) = CONCAT44(fStack_12c,local_138._s_0.Z);
      *(ulonglong *)(pFVar5 + lVar13 * 0x30 + 0x10) = CONCAT44(fStack_124,local_128);
      *(ulonglong *)(pFVar5 + lVar13 * 0x30 + 0x10 + 8) = CONCAT44(fStack_11c,fStack_120);
      *(ulonglong *)(pFVar5 + lVar13 * 0x30 + 0x20) = CONCAT44(fStack_114,local_118);
      *(ulonglong *)(pFVar5 + lVar13 * 0x30 + 0x20 + 8) = CONCAT44(fStack_10c,fStack_110);
    } while (iVar14 < (int)uVar1);
  }
  return;
}

// UpdatePrimitiveTransform @ 147dc7a60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FISMCInstanceDataSceneProxyLegacyReordered::UpdatePrimitiveTransform
          (FISMCInstanceDataSceneProxyLegacyReordered *this,FISMInstanceUpdateChangeSet *param_1)

{
  TUniquePtr<FStaticMeshInstanceData,TDefaultDelete<FStaticMeshInstanceData>_> *pTVar1;
  code *pcVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FAccessTag local_res8;
  FWriteView local_a8;
  
  pTVar1 = &this->ExternalLegacyData;
  if ((((pTVar1->Ptr == (FStaticMeshInstanceData *)0x0) ||
       (iVar7 = pTVar1->Ptr->NumInstances,
       iVar6 = FInstanceSceneDataBuffers::GetNumInstances
                         ((FInstanceSceneDataBuffers *)&this->_padding_,(FAccessTag)0x0),
       iVar6 != iVar7)) &&
      (iVar7 = FInstanceSceneDataBuffers::GetNumInstances
                         ((FInstanceSceneDataBuffers *)&this->_padding_,(FAccessTag)0x0), iVar7 != 0
      )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("ExternalLegacyData && InstanceSceneDataBuffers.GetNumInstances() == ExternalLegacyData->GetNumInstances() || InstanceSceneDataBuffers.GetNumInstances() == 0"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh\\ISMInstanceDataSceneProxy.cpp"
                                ,0x25e,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pTVar1->Ptr != (FStaticMeshInstanceData *)0x0) {
    uVar8 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    local_res8.Kind = Writer;
    local_res8.WriterTag = uVar8 >> 0x10 ^ uVar8;
    FInstanceSceneDataBuffers::BeginWriteAccess
              ((FInstanceSceneDataBuffers *)&this->_padding_,&local_a8,local_res8);
    lVar3 = param_1->_padding_;
    *(longlong *)&(local_a8.PrimitiveToRelativeWorld)->TransformRows[0].field0_0x0 =
         param_1->_padding_;
    *(longlong *)((longlong)&(local_a8.PrimitiveToRelativeWorld)->TransformRows[0].field0_0x0 + 8) =
         lVar3;
    lVar3 = param_1->_padding_;
    *(longlong *)((longlong)&(local_a8.PrimitiveToRelativeWorld)->TransformRows[1].field0_0x0 + 4) =
         param_1->_padding_;
    *(longlong *)&(local_a8.PrimitiveToRelativeWorld)->TransformRows[2].field0_0x0 = lVar3;
    lVar3 = param_1->_padding_;
    *(longlong *)((longlong)&(local_a8.PrimitiveToRelativeWorld)->TransformRows[2].field0_0x0 + 8) =
         param_1->_padding_;
    *(longlong *)((longlong)&((local_a8.PrimitiveToRelativeWorld)->Origin).field0_0x0 + 4) = lVar3;
    dVar4 = (double)param_1->_padding_;
    ((local_a8.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.X = (double)param_1->_padding_;
    ((local_a8.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.Y = dVar4;
    ((local_a8.PrimitiveWorldSpaceOffset)->field0_0x0)._s_0.Z = (double)param_1->_padding_;
    UpdateInstancesTransforms(this,&local_a8,pTVar1->Ptr);
    FInstanceSceneDataBuffers::EndWriteAccess
              ((FInstanceSceneDataBuffers *)&this->_padding_,local_res8);
    FInstanceSceneDataBuffers::ValidateData((FInstanceSceneDataBuffers *)&this->_padding_);
  }
  FISMCInstanceDataSceneProxy::TestAndApplyInstanceBufferSizeFixup
            ((FISMCInstanceDataSceneProxy *)this,param_1->PostUpdateNumInstances);
  return;
}

