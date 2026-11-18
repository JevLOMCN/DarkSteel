// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 8

// ~FObjData @ 14e6e1470

void __thiscall FObjData::~FObjData(FObjData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->CurrentMaterial).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialBeingDefined).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentGroup).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Materials).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Materials).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FObjData::FMaterialData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FObjData::FMaterialData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FObjData::FMaterialData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Materials);
  *(undefined4 *)&(this->Groups).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Groups).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FObjData::FGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FObjData::FGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FObjData::FGroupData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Groups);
  pFVar1 = (this->Normals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Positions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetGroupBoundingBox @ 14e6efe00

/* WARNING: Enum "Type": Some values do not have unique names */

TBox<double> * __thiscall
FObjData::GetGroupBoundingBox(FObjData *this,TBox<double> *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  FGroupData *pFVar11;
  TBox<double> *pTVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_48 [2];
  
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  pFVar11 = TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
            ::Find((TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                    *)&this->Groups,param_1);
  if (pFVar11 != (FGroupData *)0x0) {
    GetVertexIndicesUsedByGroup(this,local_48,pFVar11);
    iVar8 = local_48[0].ArrayNum;
    uVar7 = __xmm_80000000800000008000000080000000;
    pFVar1 = local_48[0].AllocatorInstance.Data + (longlong)local_48[0].ArrayNum * 4;
    FVar13.Data = local_48[0].AllocatorInstance.Data;
    while( true ) {
      if (local_48[0].ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar13.Data == pFVar1) break;
      uVar3 = *(uint *)FVar13.Data;
      lVar14 = (longlong)(int)uVar3;
      if (((int)uVar3 < 0) || ((this->Positions).ArrayNum <= (int)uVar3)) {
        if ((2 < (byte)LogTemp._0_1_) && (::bLogged == false)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        ::bLogged = true;
        FVar13.Data = FVar13.Data + 4;
      }
      else {
        uVar10 = 0;
        if ((int)uVar3 < (this->Positions).ArrayNum) {
          uVar10 = ~uVar3 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TBox<double> *)(*pcVar5)();
            return pTVar12;
          }
        }
        pFVar4 = (this->Positions).AllocatorInstance.Data;
        dVar20 = (double)(float)(*(uint *)(pFVar4 + lVar14 * 0xc + 4) ^ uVar7);
        dVar18 = (double)*(float *)(pFVar4 + lVar14 * 0xc);
        dVar19 = (double)*(float *)(pFVar4 + lVar14 * 0xc + 8);
        if (__return_storage_ptr__->IsValid == '\0') {
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar18;
          FVar13.Data = FVar13.Data + 4;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar20;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar19;
          dVar19 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
          dVar20 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
          __return_storage_ptr__->IsValid = '\x01';
          dVar18 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar19;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar20;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar18;
        }
        else {
          dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
          dVar6 = dVar18;
          if (dVar2 <= dVar18) {
            dVar6 = dVar2;
          }
          dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
          dVar17 = dVar20;
          if (dVar2 <= dVar20) {
            dVar17 = dVar2;
          }
          dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
          if (dVar18 <= dVar2) {
            dVar18 = dVar2;
          }
          FVar13.Data = FVar13.Data + 4;
          (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar6;
          dVar2 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
          dVar6 = dVar19;
          if (dVar2 <= dVar19) {
            dVar6 = dVar2;
          }
          dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
          if (dVar19 <= dVar2) {
            dVar19 = dVar2;
          }
          (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar17;
          (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar18;
          (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar6;
          dVar18 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
          uVar15 = SUB84(dVar18,0);
          uVar16 = (int)((ulonglong)dVar18 >> 0x20);
          if (dVar18 <= dVar20) {
            uVar15 = SUB84(dVar20,0);
            uVar16 = (int)((ulonglong)dVar20 >> 0x20);
          }
          (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar19;
          (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar16,uVar15);
        }
      }
    }
    if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetGroupPolygonCount @ 14e6f0040

int __thiscall FObjData::GetGroupPolygonCount(FObjData *this,FString *param_1)

{
  int iVar1;
  FGroupData *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar2 = TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
           ::Find((TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                   *)&this->Groups,param_1);
  if (pFVar2 == (FGroupData *)0x0) {
    return 0;
  }
  pFVar3 = (pFVar2->FaceGroups).AllocatorInstance.Data;
  iVar5 = 0;
  iVar1 = (pFVar2->FaceGroups).ArrayNum;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((pFVar2->FaceGroups).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FObjData::FFaceGroupData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar5 = iVar5 + *(int *)(pFVar3 + 0x18);
    pFVar3 = pFVar3 + 0x20;
  }
  return iVar5;
}

// GetGroupVertexCount @ 14e6f00d0

int __thiscall FObjData::GetGroupVertexCount(FObjData *this,FString *param_1)

{
  int iVar1;
  FGroupData *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar2 = TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
           ::Find((TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                   *)&this->Groups,param_1);
  if (pFVar2 == (FGroupData *)0x0) {
    return 0;
  }
  pTVar3 = GetVertexIndicesUsedByGroup(this,&local_18,pFVar2);
  iVar1 = pTVar3->ArrayNum;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return iVar1;
}

// GetUVIndicesUsedByGroup @ 14e6f1b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FObjData::GetUVIndicesUsedByGroup
          (FObjData *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGroupData *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool *pbVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  int local_b0 [2];
  FScriptContainerElement *local_a8;
  FGroupData *local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b4 = (param_1->FaceGroups).ArrayNum;
  uVar5 = (ulonglong)(int)local_b4;
  pFVar9 = (param_1->FaceGroups).AllocatorInstance.Data;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  pFVar10 = pFVar9 + 0x18;
  local_88.Elements._44_4_ = 0x80;
  local_a8 = pFVar9 + uVar5 * 0x20;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_a0 = param_1;
  local_98 = __return_storage_ptr__;
  while( true ) {
    pFVar3 = local_a8;
    if ((local_a0->FaceGroups).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FObjData::FFaceGroupData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_b8);
    }
    pTVar4 = local_98;
    if (pFVar9 == pFVar3) break;
    iVar1 = *(int *)pFVar10;
    lVar8 = *(longlong *)(pFVar10 + -8);
    lVar11 = (longlong)iVar1 * 0x40 + lVar8;
    while( true ) {
      if (*(int *)pFVar10 != iVar1) {
        `TCheckedPointerIterator<FObjData::FFaceData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_b8);
      }
      if (lVar8 == lVar11) break;
      iVar2 = *(int *)(lVar8 + 0x38);
      lVar6 = lVar8;
      if (*(longlong *)(lVar8 + 0x30) != 0) {
        lVar6 = *(longlong *)(lVar8 + 0x30);
      }
      pbVar7 = (bool *)(lVar6 + 4);
      while( true ) {
        if (*(int *)(lVar8 + 0x38) != iVar2) {
          `TCheckedPointerIterator<FObjData::FVertexData_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_b8);
        }
        if (pbVar7 + -4 == (bool *)(lVar6 + (longlong)iVar2 * 0xc)) break;
        if (*(int *)pbVar7 != -1) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_88,local_b0,pbVar7);
        }
        pbVar7 = pbVar7 + 0xc;
      }
      lVar8 = lVar8 + 0x40;
    }
    pFVar9 = pFVar9 + 0x20;
    pFVar10 = pFVar10 + 0x20;
    uVar5 = (ulonglong)local_b4;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_88,local_98);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return pTVar4;
}

// GetVertexIndicesUsedByGroup @ 14e6f1db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FObjData::GetVertexIndicesUsedByGroup
          (FObjData *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGroupData *param_1)

{
  bool *pbVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  ulonglong uVar6;
  bool *pbVar7;
  bool *pbVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool *pbVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  int local_b0 [2];
  FScriptContainerElement *local_a8;
  FGroupData *local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b4 = (param_1->FaceGroups).ArrayNum;
  uVar6 = (ulonglong)(int)local_b4;
  pFVar9 = (param_1->FaceGroups).AllocatorInstance.Data;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  pFVar10 = pFVar9 + 0x18;
  local_88.Elements._44_4_ = 0x80;
  local_a8 = pFVar9 + uVar6 * 0x20;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_a0 = param_1;
  local_98 = __return_storage_ptr__;
  while( true ) {
    pFVar4 = local_a8;
    if ((local_a0->FaceGroups).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<FObjData::FFaceGroupData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_b8);
    }
    pTVar5 = local_98;
    if (pFVar9 == pFVar4) break;
    iVar2 = *(int *)pFVar10;
    pbVar8 = *(bool **)(pFVar10 + -8);
    pbVar11 = pbVar8 + (longlong)iVar2 * 0x40;
    while( true ) {
      if (*(int *)pFVar10 != iVar2) {
        `TCheckedPointerIterator<FObjData::FFaceData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_b8);
      }
      if (pbVar8 == pbVar11) break;
      iVar3 = *(int *)(pbVar8 + 0x38);
      pbVar7 = pbVar8;
      if (*(bool **)(pbVar8 + 0x30) != (bool *)0x0) {
        pbVar7 = *(bool **)(pbVar8 + 0x30);
      }
      pbVar1 = pbVar7 + (longlong)iVar3 * 0xc;
      while( true ) {
        if (*(int *)(pbVar8 + 0x38) != iVar3) {
          `TCheckedPointerIterator<FObjData::FVertexData_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_b8);
        }
        if (pbVar7 == pbVar1) break;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,local_b0,pbVar7);
        pbVar7 = pbVar7 + 0xc;
      }
      pbVar8 = pbVar8 + 0x40;
    }
    pFVar9 = pFVar9 + 0x20;
    pFVar10 = pFVar10 + 0x20;
    uVar6 = (ulonglong)local_b4;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_88,local_98);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return pTVar5;
}

// MakeMeshDescriptionForGroup @ 14e6f51f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FMeshDescription * __thiscall
FObjData::MakeMeshDescriptionForGroup
          (FObjData *this,FMeshDescription *__return_storage_ptr__,FString *param_1,
          TTransform<double> *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TVector2<float>_u_0 TVar6;
  FName FVar7;
  FMeshElementChannels *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TVector2<float> TVar13;
  TVector2<float> TVar14;
  bool bVar15;
  uint uVar16;
  double dVar17;
  FVertexInstanceID FVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  FPolygonGroupID FVar29;
  FGroupData *pFVar30;
  FMeshElementContainer *pFVar31;
  FAttributesSetEntry *pFVar32;
  FMeshElementContainer *pFVar33;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar34;
  FMeshDescription *pFVar35;
  TVector<float> *pTVar36;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar37;
  TVector2<float>_u_0 *pTVar38;
  ulonglong uVar39;
  UMaterial *pUVar40;
  FName *pFVar41;
  TMeshAttributeArrayBase<FName> *pTVar42;
  ForElementType<FVertexInstanceID> FVar43;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar44;
  FTriangleID *pFVar45;
  FPolygonID *pFVar46;
  FPolygonID *pFVar47;
  TArrayView<FVertexID,int> *pTVar48;
  FObjData *pFVar49;
  double *pdVar50;
  ForElementType<unsigned_int> FVar51;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar52;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar53;
  ForElementType<FPolygonID> FVar54;
  uint *puVar55;
  TMeshAttributeArraySet<FName> *pTVar56;
  ForElementType<unsigned_int> FVar57;
  ForElementType<FSetElementId> FVar58;
  undefined1 *puVar59;
  TMeshAttributeArraySet<FName> *pTVar60;
  FVertexID FVar61;
  int *piVar62;
  FMeshAttributeArraySetBase *pFVar63;
  FMeshAttributeArraySetBase *pFVar64;
  FEdgeID FVar65;
  longlong lVar66;
  int *piVar67;
  TMeshAttributeArraySet<FName> *this_02;
  uint uVar68;
  int *piVar69;
  int iVar70;
  FScriptContainerElement *pFVar71;
  ForAnyElementType FVar72;
  FObjData *pFVar73;
  uint uVar74;
  undefined4 uVar75;
  uint uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined1 auStackY_758 [32];
  undefined1 local_707;
  undefined1 local_706;
  undefined1 local_705;
  undefined1 local_704;
  undefined1 local_703;
  undefined1 local_702;
  undefined1 local_701;
  undefined1 local_700;
  FIdentityFunctor local_6ff;
  FIdentityFunctor local_6fe [2];
  uint local_6fc;
  FVertexInstanceID local_6f8 [2];
  FMeshDescription *local_6f0;
  FEdgeID local_6e8;
  FObjData *local_6e0;
  FObjData *local_6d8;
  undefined **local_6d0;
  FMeshDescription *local_6c8;
  FGroupData *local_6c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_6b8;
  FScriptContainerElement *local_6a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_6a0;
  FPolygonGroupID local_690;
  FPolygonID local_68c;
  uint local_688;
  uint uStack_684;
  ForElementType<unsigned_int> FStack_680;
  undefined4 local_678;
  uint uStack_674;
  uint uStack_670;
  undefined4 uStack_66c;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_668;
  int *local_658;
  FScriptContainerElement *local_650;
  undefined4 local_648;
  float fStack_644;
  float local_640;
  float fStack_63c;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_638;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_628;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_608;
  FName local_5e8;
  int *local_5e0;
  int *local_5d8;
  int local_5d0;
  FString *local_5c8;
  FString local_5c0;
  TArrayView<FTriangleID_const_,int> local_5b0;
  undefined1 local_5a0 [12];
  uint uStack_594;
  FMeshElementContainer *pFStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_578;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_558;
  ForElementType<FVertexInstanceID> local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FPolygonID *local_528;
  int **local_520;
  uint local_508;
  uint uStack_504;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  undefined8 uStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  undefined8 uStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  undefined8 uStack_480;
  TVector<double>_u_0 local_478;
  TArrayView<FVertexInstanceID_const_,int> local_458;
  FName local_448;
  FName local_440;
  longlong local_438;
  FMeshElementContainer *pFStack_430;
  ulonglong local_428;
  undefined8 uStack_420;
  longlong local_418;
  FMeshElementContainer *pFStack_410;
  uint local_408;
  uint uStack_404;
  int iStack_400;
  undefined4 uStack_3fc;
  TVector<double>_u_0 local_3f8;
  TVector2<double>_u_0 local_3e0;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  TArrayView<FVertexID,int> local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_368;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  TArray<FPolygonID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_328;
  ForElementType<FVertexInstanceID> local_310;
  int local_2e8;
  int local_2e4 [3];
  TSet<TTuple<FPolygonID,FObjData::FFaceData_const_*>,TDefaultMapHashableKeyFuncs<FPolygonID,FObjData::FFaceData_const_*,0>,FDefaultSetAllocator>
  local_2d8;
  undefined1 local_288 [64];
  undefined1 *local_248;
  int local_240;
  TVector<double>_u_0 local_238;
  double local_220;
  double local_218;
  double local_210;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_758;
  local_6fc = 0;
  local_6f0 = __return_storage_ptr__;
  local_6e0 = this;
  local_5c8 = param_1;
  FMeshDescription::FMeshDescription(__return_storage_ptr__);
  pFVar30 = TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
            ::Find((TMapBase<FString,FObjData::FGroupData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FObjData::FGroupData,0>_>
                    *)&this->Groups,param_1);
  if (pFVar30 == (FGroupData *)0x0) {
    return __return_storage_ptr__;
  }
  local_6c0 = pFVar30;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_1f8);
  if ((((((double)CONCAT44(local_1f8.M[0][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           local_1f8.M[0][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3e45798ee0000000 ||
          (double)CONCAT44(local_1f8.M[0][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           local_1f8.M[0][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          == __real_3e45798ee0000000) &&
        ((double)CONCAT44(local_1f8.M[0][1]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_1f8.M[0][1]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
         __real_3e45798ee0000000 ||
         (double)CONCAT44(local_1f8.M[0][1]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_1f8.M[0][1]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
         __real_3e45798ee0000000)) &&
       (uVar74 = SUB84(local_1f8.M[0][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar76 = (uint)((ulonglong)local_1f8.M[0][2] >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar76,uVar74) < __real_3e45798ee0000000 ||
       (double)CONCAT44(uVar76,uVar74) == __real_3e45798ee0000000)) &&
      (((double)CONCAT44(local_1f8.M[1][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_1f8.M[1][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3e45798ee0000000 ||
        (double)CONCAT44(local_1f8.M[1][0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_1f8.M[1][0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
        __real_3e45798ee0000000 &&
       ((double)CONCAT44(local_1f8.M[1][1]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_1f8.M[1][1]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        __real_3e45798ee0000000 ||
        (double)CONCAT44(local_1f8.M[1][1]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_1f8.M[1][1]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
        __real_3e45798ee0000000)))) &&
     (uVar74 = SUB84(local_1f8.M[1][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar76 = (uint)((ulonglong)local_1f8.M[1][2] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar76,uVar74) < __real_3e45798ee0000000 ||
     (double)CONCAT44(uVar76,uVar74) == __real_3e45798ee0000000)) {
    local_478._s_0.X = local_1f8.M[2][0];
    local_478._s_0.Y = local_1f8.M[2][1];
    local_478._s_0.Z = local_1f8.M[2][2];
    bVar25 = UE::Math::TVector<double>::IsNearlyZero
                       ((TVector<double> *)&local_478._s_0,__real_3e45798ee0000000);
    uVar75 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_;
    uVar77 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_;
    uVar78 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_;
    uVar79 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_;
    uVar80 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_;
    uVar81 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_;
    uVar82 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_;
    uVar83 = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_;
    dStack_4f0 = UE::Math::TMatrix<double>::Identity.M[1][0];
    dStack_4d0 = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_4e8 = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_4c8 = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_4a8 = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_488 = UE::Math::TMatrix<double>::Identity.M[2][3];
    uVar88 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
    uVar89 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
    uVar90 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
    uVar91 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
    uVar92 = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
    uVar93 = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
    uVar94 = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
    uVar95 = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
    dStack_4b0 = UE::Math::TMatrix<double>::Identity.M[1][2];
    dStack_490 = UE::Math::TMatrix<double>::Identity.M[1][3];
    if (bVar25) goto LAB_14e6f5427;
  }
  FMath::MatrixInverse(&local_178,&local_1f8);
  uVar75 = local_178.M[0][0]._0_4_;
  uVar77 = local_178.M[0][0]._4_4_;
  uVar78 = local_178.M[0][1]._0_4_;
  uVar79 = local_178.M[0][1]._4_4_;
  uVar80 = local_178.M[0][2]._0_4_;
  uVar81 = local_178.M[0][2]._4_4_;
  uVar82 = local_178.M[0][3]._0_4_;
  uVar83 = local_178.M[0][3]._4_4_;
  dStack_4f0 = local_178.M[1][0];
  dStack_4d0 = local_178.M[1][1];
  local_4e8 = local_178.M[2][0];
  local_4c8 = local_178.M[2][1];
  local_4a8 = local_178.M[2][2];
  local_488 = local_178.M[2][3];
  uVar88 = local_178.M[3][0]._0_4_;
  uVar89 = local_178.M[3][0]._4_4_;
  uVar90 = local_178.M[3][1]._0_4_;
  uVar91 = local_178.M[3][1]._4_4_;
  uVar92 = local_178.M[3][2]._0_4_;
  uVar93 = local_178.M[3][2]._4_4_;
  uVar94 = local_178.M[3][3]._0_4_;
  uVar95 = local_178.M[3][3]._4_4_;
  dStack_4b0 = local_178.M[1][2];
  dStack_490 = local_178.M[1][3];
LAB_14e6f5427:
  local_4f8 = (double)CONCAT44(uVar77,uVar75);
  uStack_4e0 = CONCAT44(uVar89,uVar88);
  local_4b8 = (double)CONCAT44(uVar81,uVar80);
  uStack_4a0 = CONCAT44(uVar93,uVar92);
  local_4d8 = (double)CONCAT44(uVar79,uVar78);
  uStack_4c0 = CONCAT44(uVar91,uVar90);
  local_498 = (double)CONCAT44(uVar83,uVar82);
  uStack_480 = CONCAT44(uVar95,uVar94);
  local_6d0 = &___7FStaticMeshAttributes__6B_;
  local_6c8 = __return_storage_ptr__;
  FStaticMeshAttributes::Register((FStaticMeshAttributes *)&local_6d0,false);
  FStaticMeshAttributes::RegisterPolygonObjectNameAttribute((FStaticMeshAttributes *)&local_6d0);
  (__return_storage_ptr__->VertexInstanceToTriangles).bSuspended = true;
  (__return_storage_ptr__->EdgeToTriangles).bSuspended = true;
  (__return_storage_ptr__->PolygonToTriangles).bSuspended = true;
  (__return_storage_ptr__->PolygonGroupToPolygons).bSuspended = true;
  (__return_storage_ptr__->PolygonGroupToTriangles).bSuspended = true;
  (__return_storage_ptr__->UVToTriangles).bSuspended = true;
  GetVertexIndicesUsedByGroup(this,&local_6b8,pFVar30);
  GetUVIndicesUsedByGroup(this,&local_6a0,pFVar30);
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_6b8.AllocatorInstance.Data,local_6b8.ArrayNum,local_6ff,
             (TLess<void> *)&local_6ff);
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_6a0.AllocatorInstance.Data,local_6a0.ArrayNum,local_6fe[0],
             (TLess<void> *)local_6fe);
  pFVar31 = FMeshElementChannels::Get(local_6c8->VertexElements,0);
  pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar31->Attributes,MeshAttribute::Vertex::Position);
  iVar70 = local_6b8.ArrayNum;
  if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
      (pTVar52 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar32->Ptr).Ptr,
      *(uint *)&pTVar52->_padding_ != 1)) || (*(uint *)((longlong)&pTVar52->_padding_ + 4) != 1)) {
    pTVar52 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar31 = FMeshElementChannels::Get(__return_storage_ptr__->VertexElements,0);
  pFVar33 = FMeshElementChannels::Get(__return_storage_ptr__->VertexElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar31->BitArray,((pFVar33->BitArray).NumBits - pFVar33->NumHoles) + iVar70);
  iVar70 = local_6b8.ArrayNum;
  dVar17 = __real_3ff0000000000000;
  pFVar71 = local_6b8.AllocatorInstance.Data + (longlong)local_6b8.ArrayNum * 4;
  FVar72.Data = local_6b8.AllocatorInstance.Data;
  uVar74 = __xmm_80000000800000008000000080000000;
  while( true ) {
    iVar28 = 0;
    if (local_6b8.ArrayNum != iVar70) {
      local_707 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_707);
    }
    pFVar35 = local_6f0;
    if (FVar72.Data == pFVar71) break;
    uVar76 = *(uint *)FVar72.Data;
    lVar66 = (longlong)(int)uVar76;
    pFVar31 = FMeshElementChannels::Get(local_6f0->VertexElements,0);
    iVar27 = FMeshElementContainer::Add(pFVar31);
    if ((pTVar52 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) &&
       ((int)pTVar52->_padding_ != 0)) {
      pTVar34 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar52,0);
      TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar34,0);
      iVar28 = (int)pTVar52->_padding_;
      if ((iVar28 < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        pFVar35 = (FMeshDescription *)(*pcVar8)();
        return pFVar35;
      }
    }
    pFVar49 = local_6e0;
    if ((((iVar27 < 0) || (iVar28 <= iVar27)) || ((int)uVar76 < 0)) ||
       ((local_6e0->Positions).ArrayNum <= (int)uVar76)) {
      if ((2 < (byte)LogTemp._0_1_) && (::bLogged == false)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      FVar72.Data = FVar72.Data + 4;
      ::bLogged = true;
    }
    else {
      pFVar31 = FMeshElementChannels::Get(local_6c8->VertexElements,0);
      pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar31->Attributes,MeshAttribute::Vertex::Position);
      if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
          (this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar32->Ptr).Ptr,
          *(uint *)&this_01->_padding_ != 1)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1)
         ) {
        this_01 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
      }
      pTVar34 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_01,0);
      pTVar36 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar34,iVar27);
      uVar68 = 0;
      if ((int)uVar76 < (pFVar49->Positions).ArrayNum) {
        uVar68 = ~uVar76 >> 0x1f;
      }
      if ((uVar68 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar8 = (code *)swi(3);
        pFVar35 = (FMeshDescription *)(*pcVar8)();
        return pFVar35;
      }
      pFVar5 = (pFVar49->Positions).AllocatorInstance.Data;
      FVar72.Data = FVar72.Data + 4;
      uVar76 = *(uint *)(pFVar5 + lVar66 * 0xc + 4);
      fVar2 = *(float *)(pFVar5 + lVar66 * 0xc);
      fVar3 = *(float *)(pFVar5 + lVar66 * 0xc + 8);
      (pTVar36->field0_0x0)._s_0.X = fVar2;
      (pTVar36->field0_0x0)._s_0.Y = (float)(uVar76 ^ uVar74);
      (pTVar36->field0_0x0)._s_0.Z = fVar3;
      dVar86 = (double)fVar3;
      dVar85 = (double)(float)(uVar76 ^ uVar74);
      dVar12 = (double)fVar2;
      (pTVar36->field0_0x0)._s_0.X =
           (float)((double)CONCAT44(local_1f8.M[1][0]._4_4_,local_1f8.M[1][0]._0_4_) * dVar85 +
                   (double)CONCAT44(local_1f8.M[0][0]._4_4_,local_1f8.M[0][0]._0_4_) * dVar12 +
                   local_1f8.M[2][0] * dVar86 + local_1f8.M[3][0] * dVar17);
      (pTVar36->field0_0x0)._s_0.Y =
           (float)((double)CONCAT44(local_1f8.M[1][1]._4_4_,local_1f8.M[1][1]._0_4_) * dVar85 +
                   (double)CONCAT44(local_1f8.M[0][1]._4_4_,local_1f8.M[0][1]._0_4_) * dVar12 +
                   local_1f8.M[2][1] * dVar86 + local_1f8.M[3][1] * dVar17);
      (pTVar36->field0_0x0)._s_0.Z =
           (float)(local_1f8.M[1][2] * dVar85 + local_1f8.M[0][2] * dVar12 +
                   local_1f8.M[2][2] * dVar86 + local_1f8.M[3][2] * dVar17);
      uVar74 = __xmm_80000000800000008000000080000000;
    }
  }
  FMeshDescription::SetNumUVChannels(local_6f0,1);
  iVar70 = local_6a0.ArrayNum;
  if (0 < local_6a0.ArrayNum) {
    pFVar31 = FMeshElementChannels::Get(pFVar35->UVElements,0);
    pFVar33 = FMeshElementChannels::Get(pFVar35->UVElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar31->BitArray,((pFVar33->BitArray).NumBits - pFVar33->NumHoles) + iVar70);
    iVar70 = local_6a0.ArrayNum;
    pFVar49 = local_6e0;
    pFVar71 = local_6a0.AllocatorInstance.Data + (longlong)local_6a0.ArrayNum * 4;
    FVar72.Data = local_6a0.AllocatorInstance.Data;
    while( true ) {
      if (local_6a0.ArrayNum != iVar70) {
        local_706 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_706);
      }
      pFVar35 = local_6f0;
      if (FVar72.Data == pFVar71) break;
      uVar76 = *(uint *)FVar72.Data;
      pFVar31 = FMeshElementChannels::Get(local_6f0->UVElements,0);
      iVar28 = FMeshElementContainer::Add(pFVar31);
      uVar68 = 0;
      if ((int)uVar76 < (pFVar49->UVs).ArrayNum) {
        uVar68 = ~uVar76 >> 0x1f;
      }
      if ((uVar68 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar8 = (code *)swi(3);
        pFVar35 = (FMeshDescription *)(*pcVar8)();
        return pFVar35;
      }
      TVar6 = *(TVector2<float>_u_0 *)
               ((pFVar49->UVs).AllocatorInstance.Data + (longlong)(int)uVar76 * 8);
      pFVar31 = FMeshElementChannels::Get(local_6c8->UVElements,0);
      pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        *)&pFVar31->Attributes,MeshAttribute::UV::UVCoordinate);
      if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
          (pTVar53 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar32->Ptr).Ptr,
          *(uint *)&pTVar53->_padding_ != 2)) || (*(uint *)((longlong)&pTVar53->_padding_ + 4) != 1)
         ) {
        pTVar53 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
      }
      pTVar37 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar53,0);
      pTVar38 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar37,iVar28)
                 ->field0_0x0;
      FVar72.Data = FVar72.Data + 4;
      *pTVar38 = TVar6;
    }
  }
  dVar24 = local_488;
  dVar23 = dStack_490;
  dVar22 = local_498;
  dVar21 = local_4a8;
  dVar20 = dStack_4b0;
  dVar19 = local_4b8;
  dVar86 = local_4c8;
  dVar85 = dStack_4d0;
  dVar12 = local_4d8;
  dVar17 = local_4e8;
  fVar2 = __real_3f800000;
  local_2d8.Elements._0_8_ = 0;
  local_2d8.Elements._8_8_ = 0;
  local_2d8.Elements._32_8_ = 0;
  local_2d8.Elements._40_4_ = 0;
  local_2d8.Elements._44_4_ = 0x80;
  local_2d8.Elements._48_4_ = 0xffffffff;
  local_2d8.Elements._52_4_ = 0;
  local_2d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_2d8.HashSize = 0;
  local_6e8 = (FEdgeID)(local_6c0->FaceGroups).ArrayNum;
  uVar39 = (ulonglong)(int)local_6e8;
  pFVar71 = (local_6c0->FaceGroups).AllocatorInstance.Data;
  local_6a8 = pFVar71 + uVar39 * 0x20;
  while( true ) {
    pFVar5 = local_6a8;
    local_650 = pFVar71;
    if ((local_6c0->FaceGroups).ArrayNum != (int)uVar39) {
      local_705 = 0;
      `TCheckedPointerIterator<FObjData::FFaceGroupData_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_705);
    }
    if (pFVar71 == pFVar5) break;
    pFVar31 = FMeshElementChannels::Get(pFVar35->PolygonGroupElements,0);
    FVar29 = (FPolygonGroupID)FMeshElementContainer::Add(pFVar31);
    local_690 = FVar29;
    if (*(int *)(pFVar71 + 8) < 2) {
      pUVar40 = UMaterial::GetDefaultMaterial(MD_Surface);
      uVar76 = local_6fc | 2;
      local_5e8 = (FName)pUVar40->_padding_;
      local_6fc = uVar76;
      ::FName::ToString(&local_5e8,&local_5c0);
      FVar72.Data = local_5c0.Data.AllocatorInstance.Data;
      iVar70 = local_5c0.Data.ArrayNum;
    }
    else {
      uVar76 = local_6fc | 4;
      local_638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6fc = uVar76;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                (&local_638,*(wchar_t **)pFVar71,*(int *)(pFVar71 + 8),0);
      FVar72.Data = local_638.AllocatorInstance.Data;
      iVar70 = local_638.ArrayNum;
    }
    local_668.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_668,(wchar_t *)FVar72.Data,iVar70,0);
    if (((uVar76 & 4) != 0) &&
       (uVar76 = uVar76 & 0xfffffffb, local_6fc = uVar76,
       local_638.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_638.AllocatorInstance.Data);
    }
    if (((uVar76 & 2) != 0) &&
       (local_6fc = uVar76 & 0xfffffffd,
       local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
    }
    iVar70 = local_668.ArrayNum;
    if (iVar70 < 2) {
      bVar25 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8318688749919666555>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeOBJTranslator.cpp"
                          ,0x17b,"!MaterialName.IsEmpty()");
      if (bVar25) {
        pcVar8 = (code *)swi(3);
        pFVar35 = (FMeshDescription *)(*pcVar8)();
        return pFVar35;
      }
      iVar70 = local_668.ArrayNum;
    }
    pTVar56 = (TMeshAttributeArraySet<FName> *)(ulonglong)(iVar70 - 1);
    if (iVar70 == 0) {
      pTVar56 = (TMeshAttributeArraySet<FName> *)0x0;
    }
    pFVar41 = ::FName::FName(&local_440,(int)pTVar56,(wchar_t *)local_668.AllocatorInstance.Data,
                             FNAME_Add);
    FVar7 = *pFVar41;
    pFVar31 = FMeshElementChannels::Get(local_6c8->PolygonGroupElements,0);
    pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar31->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
    if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
        (pTVar56 = (TMeshAttributeArraySet<FName> *)(pFVar32->Ptr).Ptr,
        *(uint *)&pTVar56->_padding_ != 6)) || (*(uint *)((longlong)&pTVar56->_padding_ + 4) != 1))
    {
      pTVar56 = (TMeshAttributeArraySet<FName> *)0x0;
    }
    pTVar42 = TMeshAttributeArraySet<FName>::GetArrayForChannel(pTVar56,0);
    pFVar41 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar42,(int)FVar29);
    *pFVar41 = FVar7;
    iVar70 = *(int *)(pFVar71 + 0x18);
    pFVar31 = FMeshElementChannels::Get(pFVar35->TriangleElements,0);
    pFVar33 = FMeshElementChannels::Get(pFVar35->TriangleElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar31->BitArray,((pFVar33->BitArray).NumBits - pFVar33->NumHoles) + iVar70);
    iVar70 = *(int *)(pFVar71 + 0x18);
    pFVar31 = FMeshElementChannels::Get(pFVar35->PolygonElements,0);
    pFVar33 = FMeshElementChannels::Get(pFVar35->PolygonElements,0);
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              (&pFVar31->BitArray,((pFVar33->BitArray).NumBits - pFVar33->NumHoles) + iVar70);
    uVar39 = (ulonglong)*(int *)(pFVar71 + 0x18);
    piVar69 = *(int **)(pFVar71 + 0x10);
    local_5d8 = piVar69 + uVar39 * 0x10;
    local_310.SecondaryData = (ForElementType<FVertexInstanceID>)0x0;
    local_2e8 = 0;
    local_2e4[0] = 8;
    local_6d8 = (FObjData *)CONCAT44(local_6d8._4_4_,*(int *)(pFVar71 + 0x18));
    while( true ) {
      piVar67 = local_5d8;
      local_658 = piVar69;
      if (*(int *)(pFVar71 + 0x18) != (int)uVar39) {
        local_704 = 0;
        `TCheckedPointerIterator<FObjData::FFaceData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_704);
      }
      if (piVar69 == piVar67) break;
      local_2e8 = 0;
      if ((local_2e4[0] < 0) && (local_2e4[0] != 0)) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
                  (4,4,0,&local_310,0,local_2e4);
      }
      piVar67 = piVar69 + 0xe;
      iVar70 = *piVar67;
      pFVar31 = FMeshElementChannels::Get(pFVar35->VertexInstanceElements,0);
      pFVar33 = FMeshElementChannels::Get(pFVar35->VertexInstanceElements,0);
      TBitArray<FDefaultBitArrayAllocator>::Reserve
                (&pFVar31->BitArray,((pFVar33->BitArray).NumBits - pFVar33->NumHoles) + iVar70);
      pFVar49 = local_6e0;
      iVar70 = *piVar67;
      if (*(int **)(piVar69 + 0xc) != (int *)0x0) {
        piVar69 = *(int **)(piVar69 + 0xc);
      }
      piVar62 = piVar69 + (longlong)iVar70 * 3;
      while( true ) {
        if (*piVar67 != iVar70) {
          local_703 = 0;
          `TCheckedPointerIterator<FObjData::FVertexData_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_703);
        }
        iVar28 = local_2e8;
        piVar1 = local_658;
        FVar29 = local_690;
        pFVar35 = local_6f0;
        if (piVar69 == piVar62) break;
        FVar61 = (FVertexID)0x0;
        if (local_6b8.ArrayNum < 1) {
LAB_14e6f5db1:
          FVar61 = (FVertexID)0xffffffff;
        }
        else {
          uVar76 = local_6b8.ArrayNum;
          do {
            iVar28 = (uVar76 >> 1) + (int)FVar61;
            if (*(int *)(local_6b8.AllocatorInstance.Data + (longlong)iVar28 * 4) < *piVar69) {
              FVar61 = (FVertexID)((uVar76 & 1) + iVar28);
            }
            uVar68 = uVar76 >> 1;
            uVar76 = uVar76 >> 1;
          } while (uVar68 != 0);
          if ((local_6b8.ArrayNum <= (int)FVar61) ||
             (*piVar69 < *(int *)(local_6b8.AllocatorInstance.Data + (longlong)(int)FVar61 * 4)))
          goto LAB_14e6f5db1;
        }
        pFVar31 = FMeshElementChannels::Get(local_6f0->VertexInstanceElements,0);
        local_6f8[0] = (FVertexInstanceID)FMeshElementContainer::Add(pFVar31);
        FMeshDescription::CreateVertexInstance_Internal(pFVar35,local_6f8[0],FVar61);
        FVar43 = (ForElementType<FVertexInstanceID>)&local_310;
        if (local_310.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
          FVar43 = local_310.SecondaryData;
        }
        if ((ulonglong)FVar43 <= local_6f8) {
          FVar43 = (ForElementType<FVertexInstanceID>)&local_310;
          if (local_310.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
            FVar43 = local_310.SecondaryData;
          }
          if ((local_6f8 < (FVertexInstanceID *)((longlong)FVar43 + (longlong)local_2e4[0] * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar8 = (code *)swi(3);
            pFVar35 = (FMeshDescription *)(*pcVar8)();
            return pFVar35;
          }
        }
        if (local_2e8 == local_2e4[0]) {
          local_2e8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FVertexInstanceID>_>
                                (0x404,&local_310,local_2e4);
        }
        FVar43 = (ForElementType<FVertexInstanceID>)&local_310;
        if (local_310.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
          FVar43 = local_310.SecondaryData;
        }
        lVar66 = (longlong)local_2e8;
        local_2e8 = local_2e8 + 1;
        *(FVertexInstanceID *)((longlong)FVar43 + lVar66 * 4) = local_6f8[0];
        iVar28 = piVar69[2];
        if (((iVar28 != -1) && (-1 < iVar28)) && (iVar28 < (pFVar49->Normals).ArrayNum)) {
          pFVar31 = FMeshElementChannels::Get(local_6c8->VertexInstanceElements,0);
          pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar31->Attributes,MeshAttribute::VertexInstance::Normal);
          FVar18 = local_6f8[0];
          if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
              (pTVar52 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar32->Ptr).Ptr,
              *(uint *)&pTVar52->_padding_ != 1)) ||
             (*(uint *)((longlong)&pTVar52->_padding_ + 4) != 1)) {
            pTVar52 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
          }
          pTVar34 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar52,0)
          ;
          pTVar36 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                              (pTVar34,(int)FVar18);
          uVar76 = piVar69[2];
          lVar66 = (longlong)(int)uVar76;
          uVar68 = 0;
          if ((int)uVar76 < (pFVar49->Normals).ArrayNum) {
            uVar68 = ~uVar76 >> 0x1f;
          }
          if ((uVar68 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            pFVar35 = (FMeshDescription *)(*pcVar8)();
            return pFVar35;
          }
          pFVar71 = (pFVar49->Normals).AllocatorInstance.Data;
          dVar11 = (double)(float)(*(uint *)(pFVar71 + lVar66 * 0xc + 4) ^ uVar74);
          dVar87 = (double)*(float *)(pFVar71 + lVar66 * 0xc + 8);
          dVar84 = (double)*(float *)(pFVar71 + lVar66 * 0xc);
          dVar10 = dVar23 * __real_3ff0000000000000;
          dVar9 = dVar24 * __real_3ff0000000000000;
          (pTVar36->field0_0x0)._s_0.X =
               (float)(dVar12 * dVar11 + local_4f8 * dVar84 + dVar19 * dVar87 +
                      dVar22 * __real_3ff0000000000000);
          (pTVar36->field0_0x0)._s_0.Y =
               (float)(dVar85 * dVar11 + dStack_4f0 * dVar84 + dVar20 * dVar87 + dVar10);
          (pTVar36->field0_0x0)._s_0.Z =
               (float)(dVar86 * dVar11 + dVar17 * dVar84 + dVar21 * dVar87 + dVar9);
          uVar74 = __xmm_80000000800000008000000080000000;
        }
        uVar76 = piVar69[1];
        if (((uVar76 != 0xffffffff) && (-1 < (int)uVar76)) &&
           ((int)uVar76 < (pFVar49->UVs).ArrayNum)) {
          uVar68 = 0;
          if ((int)uVar76 < (pFVar49->UVs).ArrayNum) {
            uVar68 = ~uVar76 >> 0x1f;
          }
          if ((uVar68 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            pFVar35 = (FMeshDescription *)(*pcVar8)();
            return pFVar35;
          }
          pFVar71 = (pFVar49->UVs).AllocatorInstance.Data;
          fStack_644 = fVar2 - *(float *)(pFVar71 + (longlong)(int)uVar76 * 8 + 4);
          local_648 = *(undefined4 *)(pFVar71 + (longlong)(int)uVar76 * 8);
          pFVar31 = FMeshElementChannels::Get(local_6c8->VertexInstanceElements,0);
          pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar31->Attributes,MeshAttribute::VertexInstance::TextureCoordinate)
          ;
          FVar18 = local_6f8[0];
          if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
              (pTVar53 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar32->Ptr).Ptr,
              *(uint *)&pTVar53->_padding_ != 2)) ||
             (*(uint *)((longlong)&pTVar53->_padding_ + 4) != 1)) {
            pTVar53 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
          }
          pTVar37 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                              (pTVar53,0);
          pTVar38 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                               (pTVar37,(int)FVar18)->field0_0x0;
          TVar13.field0_0x0._s_0.Y = fStack_644;
          TVar13.field0_0x0._s_0.X = (float)local_648;
          *pTVar38 = TVar13.field0_0x0;
        }
        piVar69 = piVar69 + 3;
      }
      local_538 = (ForElementType<FVertexInstanceID>)&local_310;
      if (local_310.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
        local_538 = local_310.SecondaryData;
      }
      local_5e0 = local_658;
      if ((local_2e8 < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar25)) {
        pcVar8 = (code *)swi(3);
        pFVar35 = (FMeshDescription *)(*pcVar8)();
        return pFVar35;
      }
      pFVar35 = local_6f0;
      iStack_530 = iVar28;
      pFVar31 = FMeshElementChannels::Get(local_6f0->PolygonElements,0);
      local_68c = (FPolygonID)FMeshElementContainer::Add(pFVar31);
      local_458._12_4_ = uStack_52c;
      local_458.ArrayNum = iStack_530;
      local_458.DataPtr = (FVertexInstanceID *)local_538;
      FMeshDescription::CreatePolygon_Internal
                (pFVar35,local_68c,FVar29,&local_458,
                 (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0);
      local_528 = &local_68c;
      local_520 = &local_5e0;
      TSet<TTuple<FPolygonID,FObjData::FFaceData_const_*>,TDefaultMapHashableKeyFuncs<FPolygonID,FObjData::FFaceData_const_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPolygonID_&&,FObjData::FFaceData_const_*_&&>_>
                (&local_2d8,
                 (TPairInitializer<FPolygonID_&&,FObjData::FFaceData_const_*_&&> *)local_5a0,
                 (bool *)&local_528);
      piVar69 = piVar1 + 0x10;
      uVar39 = (ulonglong)local_6d8 & 0xffffffff;
      pFVar71 = local_650;
    }
    if (local_310.SecondaryData != (ForElementType<FVertexInstanceID>)0x0) {
      FMemory::Free((void *)local_310.SecondaryData);
    }
    if (local_668.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.AllocatorInstance.Data);
    }
    pFVar71 = pFVar71 + 0x20;
    uVar39 = (ulonglong)(uint)local_6e8;
  }
  this_00 = pFVar35->EdgeElements;
  (pFVar35->EdgeToTriangles).bSuspended = false;
  (pFVar35->EdgeToTriangles).bEverythingStale = true;
  pFVar31 = FMeshElementChannels::Get(this_00,0);
  local_628._padding_._0_4_ = 0;
  local_628._padding_._4_4_ = 1;
  local_628.UnvisitedBitMask = 0xffffffff;
  local_628.CurrentBitIndex = 0;
  local_628.BaseBitIndex = 0;
  local_628.Array = &pFVar31->BitArray;
  if ((pFVar31->BitArray).NumBits != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_628);
  }
  unique0x1000220f =
       (FFaceData **)CONCAT44(local_628._padding_._4_4_,(undefined4)local_628._padding_);
  local_588 = CONCAT44(local_628.CurrentBitIndex,local_628.UnvisitedBitMask);
  uStack_580 = CONCAT44(local_628._28_4_,local_628.BaseBitIndex);
  pFStack_590 = (FMeshElementContainer *)local_628.Array;
  pTVar44 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_368,&pFVar31->BitArray,(pFVar31->BitArray).NumBits);
  local_428._0_4_ = pTVar44->UnvisitedBitMask;
  local_428._4_4_ = pTVar44->CurrentBitIndex;
  uStack_420 = *(undefined8 *)&pTVar44->BaseBitIndex;
  local_438 = pTVar44->_padding_;
  pFStack_430 = (FMeshElementContainer *)pTVar44->Array;
  local_6a8 = (FScriptContainerElement *)(local_428 >> 0x20);
  while( true ) {
    if ((local_588._4_4_ == SUB84(local_6a8,0)) && (pFStack_590 == pFStack_430)) break;
    FVar65 = (FEdgeID)0xffffffff;
    if ((int)local_588._4_4_ < (pFStack_590->BitArray).NumBits) {
      FVar65 = local_588._4_4_;
    }
    local_6e8 = FVar65;
    FMeshElementIndexer::Find<FTriangleID>(&pFVar35->EdgeToTriangles,&local_5b0,(int)FVar65,0);
    if (local_5b0.ArrayNum == 2) {
      pFVar45 = TArrayView<FTriangleID_const_,int>::operator[](&local_5b0,0);
      pFVar46 = TMeshAttributesRef<int,FPolygonID>::operator[]
                          (&pFVar35->TrianglePolygons,(int)*pFVar45);
      pFVar45 = TArrayView<FTriangleID_const_,int>::operator[](&local_5b0,1);
      pFVar47 = TMeshAttributesRef<int,FPolygonID>::operator[]
                          (&pFVar35->TrianglePolygons,(int)*pFVar45);
      if (*pFVar46 != *pFVar47) goto LAB_14e6f63ea;
    }
    else {
LAB_14e6f63ea:
      bVar25 = true;
      local_328.AllocatorInstance.SecondaryData = (ForElementType<FPolygonID>)0x0;
      bVar15 = true;
      local_328.ArrayNum = 0;
      local_328.ArrayMax = 2;
      FMeshDescription::
      GetEdgeConnectedPolygons<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                (pFVar35,FVar65,&local_328);
      pTVar48 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                          (&pFVar35->EdgeVertices,&local_378,(int)FVar65);
      pFVar73 = (FObjData *)pTVar48->DataPtr;
      pFVar49 = (FObjData *)
                ((longlong)&(pFVar73->ObjFilename).Data.AllocatorInstance.Data +
                (longlong)pTVar48->ArrayNum * 4);
      iVar70 = local_328.ArrayNum;
      local_6e0 = pFVar73;
      local_6d8 = pFVar49;
      if (pFVar73 != pFVar49) {
        do {
          if (bVar25) {
            uVar74 = *(uint *)&(pFVar73->ObjFilename).Data.AllocatorInstance.Data;
            uVar76 = 0;
            if ((int)uVar74 < local_6b8.ArrayNum) {
              uVar76 = ~uVar74 >> 0x1f;
            }
            local_6e0 = pFVar73;
            if ((uVar76 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar70 = local_328.ArrayNum, bVar25)) {
              pcVar8 = (code *)swi(3);
              pFVar35 = (FMeshDescription *)(*pcVar8)();
              return pFVar35;
            }
            iVar28 = *(int *)(local_6b8.AllocatorInstance.Data + (longlong)(int)uVar74 * 4);
            if ((iVar70 < 1) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar8 = (code *)swi(3);
              pFVar35 = (FMeshDescription *)(*pcVar8)();
              return pFVar35;
            }
            FVar54 = (ForElementType<FPolygonID>)&local_328;
            if (local_328.AllocatorInstance.SecondaryData != (ForElementType<FPolygonID>)0x0) {
              FVar54 = local_328.AllocatorInstance.SecondaryData;
            }
            lVar66 = 0;
            if (local_2d8.Elements._8_4_ != local_2d8.Elements._52_4_) {
              FVar58 = (ForElementType<FSetElementId>)&local_2d8.Hash;
              if (local_2d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar58 = local_2d8.Hash.SecondaryData;
              }
              iVar70 = *(int *)((longlong)FVar58 +
                               (ulonglong)(local_2d8.HashSize - 1U & *(uint *)FVar54) * 4);
              while (lVar66 = 0, iVar70 != -1) {
                lVar66 = local_2d8.Elements._0_8_ + (longlong)iVar70 * 0x18;
                if (*(uint *)(local_2d8.Elements._0_8_ + (longlong)iVar70 * 0x18) == *(uint *)FVar54
                   ) {
                  if (lVar66 != 0) goto LAB_14e6f6592;
                  break;
                }
                iVar70 = *(int *)(lVar66 + 0x10);
              }
            }
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L"");
            if (bVar25) {
              pcVar8 = (code *)swi(3);
              pFVar35 = (FMeshDescription *)(*pcVar8)();
              return pFVar35;
            }
LAB_14e6f6592:
            piVar67 = *(int **)(lVar66 + 8);
            iVar70 = piVar67[0xe];
            piVar69 = piVar67 + 0xe;
            if (*(int **)(piVar67 + 0xc) != (int *)0x0) {
              piVar67 = *(int **)(piVar67 + 0xc);
            }
            piVar62 = piVar67 + (longlong)iVar70 * 3;
            while( true ) {
              if (*piVar69 != iVar70) {
                local_702 = 0;
                `TCheckedPointerIterator<FObjData::FVertexData_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_702);
              }
              if (piVar67 == piVar62) break;
              if (*piVar67 == iVar28) goto LAB_14e6f6614;
              piVar67 = piVar67 + 3;
            }
            piVar67 = (int *)0x0;
            bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("VertexData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeOBJTranslator.cpp"
                                ,0x57,L"");
            if (bVar25) {
              pcVar8 = (code *)swi(3);
              pFVar35 = (FMeshDescription *)(*pcVar8)();
              return pFVar35;
            }
LAB_14e6f6614:
            uVar74 = 1;
            pFVar49 = local_6d8;
            iVar70 = local_328.ArrayNum;
            bVar25 = bVar15;
            if (1 < local_328.ArrayNum) {
              local_6c0 = (FGroupData *)&DAT_00000004;
              do {
                pFVar30 = local_6c0;
                uVar76 = 0;
                if ((int)uVar74 < local_328.ArrayNum) {
                  uVar76 = ~uVar74 >> 0x1f;
                }
                if ((uVar76 == 0) &&
                   (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar26)) {
                  pcVar8 = (code *)swi(3);
                  pFVar35 = (FMeshDescription *)(*pcVar8)();
                  return pFVar35;
                }
                FVar54 = (ForElementType<FPolygonID>)&local_328;
                if (local_328.AllocatorInstance.SecondaryData != (ForElementType<FPolygonID>)0x0) {
                  FVar54 = local_328.AllocatorInstance.SecondaryData;
                }
                uVar76 = *(uint *)((longlong)&(pFVar30->FaceGroups).AllocatorInstance.Data +
                                  (longlong)FVar54);
                lVar66 = 0;
                if (local_2d8.Elements._8_4_ != local_2d8.Elements._52_4_) {
                  FVar58 = (ForElementType<FSetElementId>)&local_2d8.Hash;
                  if (local_2d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar58 = local_2d8.Hash.SecondaryData;
                  }
                  iVar70 = *(int *)((longlong)FVar58 +
                                   (ulonglong)(local_2d8.HashSize - 1U & uVar76) * 4);
                  while (lVar66 = 0, iVar70 != -1) {
                    lVar66 = local_2d8.Elements._0_8_ + (longlong)iVar70 * 0x18;
                    if (*(uint *)(local_2d8.Elements._0_8_ + (longlong)iVar70 * 0x18) == uVar76) {
                      if (lVar66 != 0) goto LAB_14e6f6721;
                      break;
                    }
                    iVar70 = *(int *)(lVar66 + 0x10);
                  }
                }
                bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Pair != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                    ,0x288,L"");
                if (bVar26) {
                  pcVar8 = (code *)swi(3);
                  pFVar35 = (FMeshDescription *)(*pcVar8)();
                  return pFVar35;
                }
LAB_14e6f6721:
                piVar62 = *(int **)(lVar66 + 8);
                iVar70 = piVar62[0xe];
                piVar69 = piVar62 + 0xe;
                if (*(int **)(piVar62 + 0xc) != (int *)0x0) {
                  piVar62 = *(int **)(piVar62 + 0xc);
                }
                piVar1 = piVar62 + (longlong)iVar70 * 3;
                while( true ) {
                  if (*piVar69 != iVar70) {
                    local_701 = 0;
                    `TCheckedPointerIterator<FObjData::FVertexData_const_,int,0>::operator!='::__l2
                    ::<lambda_1>::operator()(&local_701);
                  }
                  if (piVar62 == piVar1) break;
                  if (*piVar62 == iVar28) goto LAB_14e6f67a1;
                  piVar62 = piVar62 + 3;
                }
                piVar62 = (int *)0x0;
                bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("VertexData",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeOBJTranslator.cpp"
                                    ,0x57,L"");
                if (bVar26) {
                  pcVar8 = (code *)swi(3);
                  pFVar35 = (FMeshDescription *)(*pcVar8)();
                  return pFVar35;
                }
LAB_14e6f67a1:
                pFVar49 = local_6d8;
                pFVar73 = local_6e0;
                iVar70 = local_328.ArrayNum;
                if (piVar67[2] != piVar62[2]) {
                  bVar15 = false;
                  bVar25 = bVar15;
                  break;
                }
                uVar74 = uVar74 + 1;
                local_6c0 = (FGroupData *)
                            ((longlong)&(local_6c0->FaceGroups).AllocatorInstance.Data + 4);
              } while ((int)uVar74 < local_328.ArrayNum);
            }
          }
          pFVar73 = (FObjData *)((longlong)&(pFVar73->ObjFilename).Data.AllocatorInstance.Data + 4);
        } while (pFVar73 != pFVar49);
        local_6e0 = pFVar73;
        if (!bVar25) {
          pFVar31 = FMeshElementChannels::Get(local_6c8->EdgeElements,0);
          pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                            *)&pFVar31->Attributes,MeshAttribute::Edge::IsHard);
          if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
              (pFVar63 = (pFVar32->Ptr).Ptr, pFVar63->Type != 5)) || (pFVar63->Extent != 1)) {
            pFVar63 = (FMeshAttributeArraySetBase *)0x0;
          }
          if (((int)pFVar63[2].Type < 1) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            pFVar35 = (FMeshDescription *)(*pcVar8)();
            return pFVar35;
          }
          pFVar64 = pFVar63 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar63[2]._padding_ !=
              (FMeshAttributeArraySetBase *)0x0) {
            pFVar64 = (FMeshAttributeArraySetBase *)pFVar63[2]._padding_;
          }
          uVar76 = (int)local_6e8 * pFVar64->NumElements;
          uVar74 = 0;
          if ((int)uVar76 < (int)pFVar64->Type) {
            uVar74 = ~uVar76 >> 0x1f;
          }
          if ((uVar74 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar8 = (code *)swi(3);
            pFVar35 = (FMeshDescription *)(*pcVar8)();
            return pFVar35;
          }
          *(undefined1 *)((longlong)(int)uVar76 + pFVar64->_padding_) = 1;
        }
      }
      pFVar35 = local_6f0;
      if (local_328.AllocatorInstance.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FMemory::Free((void *)local_328.AllocatorInstance.SecondaryData);
        pFVar35 = local_6f0;
      }
    }
    local_588 = CONCAT44(local_588._4_4_,(uint)local_588 & ~uStack_594);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_5a0 + 8));
  }
  if (local_6a0.ArrayNum == 0) {
    FMeshDescription::ComputeBoundingBox(pFVar35,(TBox<double> *)&local_238._s_0);
    local_3f8._s_0.X = local_220 - local_238._s_0.X;
    local_288._0_8_ = 0;
    local_3f8._s_0.Y = local_218 - local_238._s_0.Y;
    local_288._8_8_ = 0;
    local_3f8._s_0.Z = local_210 - local_238._s_0.Z;
    local_3a8 = UE::Math::TQuat<double>::Identity.Z;
    dStack_3a0 = UE::Math::TQuat<double>::Identity.W;
    local_288._32_8_ = 0;
    local_288._40_4_ = 0;
    local_3e0 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
    local_288._44_4_ = 0x80;
    local_3d0 = (local_220 + local_238._s_0.X) * __real_3fe0000000000000;
    local_288._48_4_ = 0xffffffff;
    local_3c8 = (local_218 + local_238._s_0.Y) * __real_3fe0000000000000;
    local_288._52_4_ = 0;
    local_3c0 = (local_210 + local_238._s_0.Z) * __real_3fe0000000000000;
    local_248 = (undefined1 *)0x0;
    local_3b8 = UE::Math::TQuat<double>::Identity.X;
    dStack_3b0 = UE::Math::TQuat<double>::Identity.Y;
    local_240 = 0;
    local_398 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_390 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_388 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    FStaticMeshOperations::GenerateBoxUV
              (pFVar35,(FUVMapParameters *)&local_3f8._s_0,
               (TMap<FVertexInstanceID,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexInstanceID,UE::Math::TVector2<double>,0>_>
                *)local_288);
    pFVar31 = FMeshElementChannels::Get(local_6c8->VertexInstanceElements,0);
    pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar31->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
    if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
        (pTVar53 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar32->Ptr).Ptr,
        *(uint *)&pTVar53->_padding_ != 2)) || (*(uint *)((longlong)&pTVar53->_padding_ + 4) != 1))
    {
      pTVar53 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
    }
    if ((pTVar53->ArrayForChannels).ArrayNum == 0) {
      TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(pTVar53,1);
    }
    pFVar31 = FMeshElementChannels::Get(pFVar35->VertexInstanceElements,0);
    local_608._padding_._4_4_ = 1;
    local_608._padding_._0_4_ = 0;
    local_608.UnvisitedBitMask = 0xffffffff;
    local_608.CurrentBitIndex = 0;
    local_608.BaseBitIndex = 0;
    local_608.Array = &pFVar31->BitArray;
    if ((pFVar31->BitArray).NumBits != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_608);
    }
    local_578._padding_ = CONCAT44(local_608._padding_._4_4_,(undefined4)local_608._padding_);
    local_578.CurrentBitIndex = local_608.CurrentBitIndex;
    local_578.UnvisitedBitMask = local_608.UnvisitedBitMask;
    local_578._28_4_ = local_608._28_4_;
    local_578.BaseBitIndex = local_608.BaseBitIndex;
    local_578.Array = local_608.Array;
    pTVar44 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_348,&pFVar31->BitArray,(pFVar31->BitArray).NumBits);
    local_408 = pTVar44->UnvisitedBitMask;
    uVar74 = pTVar44->CurrentBitIndex;
    iStack_400 = pTVar44->BaseBitIndex;
    uStack_3fc = *(undefined4 *)&pTVar44->field_0x1c;
    local_418 = pTVar44->_padding_;
    pFVar31 = (FMeshElementContainer *)pTVar44->Array;
    pFStack_410 = pFVar31;
    uStack_404 = uVar74;
    while ((local_578.CurrentBitIndex != uVar74 ||
           ((FMeshElementContainer *)local_578.Array != pFVar31))) {
      uVar76 = 0xffffffff;
      if (local_578.CurrentBitIndex <
          ((TBitArray<FDefaultBitArrayAllocator> *)&(local_578.Array)->AllocatorInstance)->NumBits)
      {
        uVar76 = local_578.CurrentBitIndex;
      }
      if (local_288._8_4_ != local_288._52_4_) {
        puVar59 = local_288 + 0x38;
        if (local_248 != (undefined1 *)0x0) {
          puVar59 = local_248;
        }
        uVar68 = *(uint *)(puVar59 + (ulonglong)(local_240 - 1U & uVar76) * 4);
        while (uVar68 != 0xffffffff) {
          puVar55 = (uint *)((longlong)(int)uVar68 * 0x20 + local_288._0_8_);
          if (*puVar55 == uVar76) {
            pdVar50 = (double *)(puVar55 + 2);
            if (puVar55 == (uint *)0x0) {
              pdVar50 = (double *)0x0;
            }
            if (pdVar50 != (double *)0x0) {
              local_640 = (float)*pdVar50;
              fStack_63c = (float)pdVar50[1];
              pTVar37 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                                  (pTVar53,0);
              pTVar38 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                                   (pTVar37,uVar76)->field0_0x0;
              TVar14.field0_0x0._s_0.Y = fStack_63c;
              TVar14.field0_0x0._s_0.X = local_640;
              *pTVar38 = TVar14.field0_0x0;
              goto LAB_14e6f6bd5;
            }
            break;
          }
          uVar68 = puVar55[6];
        }
      }
      local_700 = 0;
      `FObjData::MakeMeshDescriptionForGroup'::__l99::<lambda_2>::operator()(&local_700);
LAB_14e6f6bd5:
      local_578.UnvisitedBitMask = local_578.UnvisitedBitMask & ~local_578._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_578);
    }
    local_240 = 0;
    if (local_248 != (undefined1 *)0x0) {
      FMemory::Free(local_248);
    }
    TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FVertexInstanceID,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_288);
  }
  pTVar56 = (TMeshAttributeArraySet<FName> *)0x0;
  pFVar31 = FMeshElementChannels::Get(local_6c8->PolygonElements,0);
  pFVar32 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)&pFVar31->Attributes,MeshAttribute::Polygon::ObjectName);
  if (((pFVar32 == (FAttributesSetEntry *)0x0) ||
      (this_02 = (TMeshAttributeArraySet<FName> *)(pFVar32->Ptr).Ptr,
      *(uint *)&this_02->_padding_ != 6)) || (*(uint *)((longlong)&this_02->_padding_ + 4) != 1)) {
    this_02 = pTVar56;
  }
  iVar70 = (local_5c8->Data).ArrayNum;
  pTVar60 = (TMeshAttributeArraySet<FName> *)(ulonglong)(iVar70 - 1);
  if (iVar70 == 0) {
    pTVar60 = pTVar56;
  }
  pFVar41 = ::FName::FName(&local_448,(int)pTVar60,
                           (wchar_t *)(local_5c8->Data).AllocatorInstance.Data,FNAME_Add);
  FVar7 = *pFVar41;
  FVar51 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(pFVar35->PolygonElements,0);
  uStack_684 = 1;
  local_688 = 0;
  uVar74 = *(int *)((longlong)FVar51 + 0x18);
  uStack_674 = 0;
  uStack_670 = 0;
  if (uVar74 != 0) {
    FVar57 = FVar51;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar51 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar57 = *(ForElementType<unsigned_int> *)((longlong)FVar51 + 0x10);
    }
    uVar76 = *(uint *)FVar57;
    pTVar60 = pTVar56;
    while (uVar76 == 0) {
      uStack_670 = (int)pTVar60 + 0x20;
      pTVar60 = (TMeshAttributeArraySet<FName> *)(ulonglong)uStack_670;
      iVar70 = (int)pTVar56;
      local_688 = iVar70 + 1;
      pTVar56 = (TMeshAttributeArraySet<FName> *)(ulonglong)local_688;
      if ((int)(((int)(uVar74 - 1) >> 0x1f & 0x1fU) + (uVar74 - 1)) >> 5 < (int)local_688)
      goto LAB_14e6f6d80;
      uVar76 = ((uint *)((longlong)FVar57 + 4))[iVar70];
    }
    uStack_684 = -uVar76 & uVar76;
    uVar39 = (ulonglong)uStack_684 * 2 + 1;
    lVar66 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar66 == 0; lVar66 = lVar66 + -1) {
      }
    }
    local_5d0 = (int)lVar66;
    uStack_674 = (uStack_670 - 1) + local_5d0;
    if ((int)uStack_674 <= (int)uVar74) goto LAB_14e6f6d84;
LAB_14e6f6d80:
    uStack_674 = uVar74;
  }
LAB_14e6f6d84:
  local_678 = 0xffffffff;
  local_558._padding_ = CONCAT44(uStack_684,local_688);
  local_558.CurrentBitIndex = uStack_674;
  local_558.UnvisitedBitMask = 0xffffffff;
  local_558._28_4_ = uStack_66c;
  local_558.BaseBitIndex = uStack_670;
  iVar70 = (int)uVar74 >> 5;
  uVar76 = -1 << ((byte)uVar74 & 0x1f);
  uVar68 = uVar74 & 0xffffffe0;
  FStack_680 = FVar51;
  local_558.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar51;
  local_508 = uVar76;
  uStack_504 = uVar74;
  if (((int)uVar74 < 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    pFVar35 = (FMeshDescription *)(*pcVar8)();
    return pFVar35;
  }
  uVar4 = *(uint *)((longlong)FVar51 + 0x18);
  uVar16 = uStack_504;
  if (uVar74 != uVar4) {
    FVar57 = FVar51;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar51 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar57 = *(ForElementType<unsigned_int> *)((longlong)FVar51 + 0x10);
    }
    uVar76 = uVar76 & *(uint *)((longlong)FVar57 + (longlong)iVar70 * 4);
    while (uVar76 == 0) {
      lVar66 = (longlong)iVar70;
      uVar68 = uVar68 + 0x20;
      iVar70 = iVar70 + 1;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar70) goto LAB_14e6f6e7d;
      uVar76 = *(uint *)((longlong)FVar57 + 4 + lVar66 * 4);
      local_508 = 0xffffffff;
    }
    uVar39 = (ulonglong)(-uVar76 & uVar76) * 2 + 1;
    lVar66 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar66 == 0; lVar66 = lVar66 + -1) {
      }
    }
    uStack_504 = (uVar68 - 1) + (int)lVar66;
    uVar16 = uStack_504;
    if ((int)uStack_504 <= (int)uVar4) goto LAB_14e6f6ea0;
LAB_14e6f6e7d:
    uStack_504 = uVar4;
    uVar16 = uVar4;
  }
LAB_14e6f6ea0:
  while ((pFVar35 = local_6f0, local_558.CurrentBitIndex != uVar16 ||
         ((ForElementType<unsigned_int>)local_558.Array != FVar51))) {
    uVar74 = 0xffffffff;
    if (local_558.CurrentBitIndex < *(int *)((longlong)local_558.Array + 0x18)) {
      uVar74 = local_558.CurrentBitIndex;
    }
    pTVar42 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_02,0);
    pFVar41 = TMeshAttributeArrayBase<FName>::GetElementBase(pTVar42,uVar74);
    *pFVar41 = FVar7;
    local_558.UnvisitedBitMask = local_558.UnvisitedBitMask & ~local_558._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_558);
  }
  local_2d8.HashSize = 0;
  (local_6f0->VertexInstanceToTriangles).bSuspended = false;
  (local_6f0->VertexInstanceToTriangles).bEverythingStale = true;
  (local_6f0->PolygonToTriangles).bSuspended = false;
  (local_6f0->PolygonToTriangles).bEverythingStale = true;
  (local_6f0->PolygonGroupToPolygons).bSuspended = false;
  (local_6f0->PolygonGroupToPolygons).bEverythingStale = true;
  (local_6f0->PolygonGroupToTriangles).bSuspended = false;
  (local_6f0->PolygonGroupToTriangles).bEverythingStale = true;
  (local_6f0->UVToTriangles).bSuspended = false;
  (local_6f0->UVToTriangles).bEverythingStale = true;
  if (local_2d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FPolygonID,FObjData::FFaceData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPolygonID,FObjData::FFaceData_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2d8.Elements);
  if (local_6a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.AllocatorInstance.Data);
  }
  if (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.AllocatorInstance.Data);
  }
  if ((local_6fc & 1) == 0) {
    return pFVar35;
  }
  FMeshDescription::~FMeshDescription(pFVar35);
  return pFVar35;
}

// operator() @ 150598b60

bool __thiscall `FObjData::MakeMeshDescriptionForGroup'::__l99::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8318688749919666667>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8318688749919666667>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

