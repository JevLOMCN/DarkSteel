// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// CreateDataContainer @ 14375c3e0

void __thiscall
Chaos::FConvexStructureData::CreateDataContainer(FConvexStructureData *this,EIndexType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  DestroyDataContainer(this);
  if ((this->Data).Ptr != (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.Ptr == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                       ,0x16f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IndexType != None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexType == EIndexType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                       ,0x170,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((param_1 == Large) || (param_1 == Medium)) || (param_1 == Small)) {
    puVar3 = ::operator_new(0x50);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      (this->Data).Ptr = puVar3;
      this->IndexType = param_1;
      return;
    }
    (this->Data).Ptr = (void *)0x0;
  }
  this->IndexType = param_1;
  return;
}

// DestroyDataContainer @ 14375dea0

void __thiscall Chaos::FConvexStructureData::DestroyDataContainer(FConvexStructureData *this)

{
  EIndexType EVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->Data).Ptr != (void *)0x0) {
    if (this->IndexType == None) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexType != EIndexType::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                         ,0x187,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    EVar1 = this->IndexType;
    if ((((EVar1 == Small) || (EVar1 == Medium)) || (EVar1 == Large)) &&
       (puVar2 = (this->Data).Ptr, puVar2 != (undefined8 *)0x0)) {
      if ((void *)puVar2[8] != (void *)0x0) {
        FMemory::Free((void *)puVar2[8]);
      }
      if ((void *)puVar2[6] != (void *)0x0) {
        FMemory::Free((void *)puVar2[6]);
      }
      if ((void *)puVar2[4] != (void *)0x0) {
        FMemory::Free((void *)puVar2[4]);
      }
      if ((void *)puVar2[2] != (void *)0x0) {
        FMemory::Free((void *)puVar2[2]);
      }
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
      ::operator_delete(puVar2,0x50);
    }
    this->IndexType = None;
    (this->Data).Ptr = (void *)0x0;
  }
  return;
}

// Serialize @ 1437ac200

void __thiscall Chaos::FConvexStructureData::Serialize(FConvexStructureData *this,FArchive *param_1)

{
  EIndexType *pEVar1;
  EIndexType EVar2;
  ulonglong *puVar3;
  EIndexType *pEVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  byte bVar10;
  int local_res10 [2];
  <lambda_1> local_res18;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_38;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_28;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
  bVar10 = param_1->field_0x28 & 1;
  if ((bVar10 != 0) && (iVar7 < 0xd)) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    local_res10[0] = 0;
    iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPhysicsObjectVersion::GUID);
    iVar8 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if ((iVar7 < 6) && (iVar8 < 0x2e)) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      TArrayPrivateFriend::
      Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                (param_1,&local_48);
      TArrayPrivateFriend::
      Serialize<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                (param_1,&local_28);
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)0x0,0);
      uVar5 = local_48._8_8_;
      FVar9.Data = local_48.AllocatorInstance.Data;
      iVar7 = local_48.ArrayNum;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      uVar6 = local_48._8_8_;
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar8 = local_28.ArrayNum;
      local_38.AllocatorInstance.Data = FVar9.Data;
      local_48.ArrayNum = (int)uVar5;
      local_48.ArrayMax = SUB84(uVar5,4);
      local_38.ArrayNum = local_48.ArrayNum;
      local_38.ArrayMax = local_48.ArrayMax;
      local_48._8_8_ = uVar6;
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_28.AllocatorInstance.Data,
                 local_28.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_28.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
                 local_48.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
    else {
      Legacy::FLegacyConvexStructureDataLoader::LoadVariableSizePackedArrays
                (param_1,&local_38,local_res10);
      FVar9.Data = local_38.AllocatorInstance.Data;
      iVar7 = local_38.ArrayNum;
      iVar8 = local_res10[0];
    }
    SetPlaneVertices(this,&local_38,iVar8,false);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar9.Data,iVar7);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar9.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(FVar9.Data);
    }
    return;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  pEVar4 = (EIndexType *)*puVar3;
  pEVar1 = pEVar4 + 1;
  if (bVar10 == 0) {
    if ((EIndexType *)puVar3[1] < pEVar1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->IndexType,1);
    }
    else {
      this->IndexType = *pEVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
  }
  else if ((EIndexType *)puVar3[1] < pEVar1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
    CreateDataContainer(this,(EIndexType)local_res10[0]._0_1_);
  }
  else {
    EVar2 = *pEVar4;
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,EVar2);
    *puVar3 = (ulonglong)pEVar1;
    CreateDataContainer(this,EVar2);
  }
  local_res18.Ar = param_1;
  NonConstDataOp<_Chaos::FConvexStructureData::Serialize_::__l2::<lambda_1>,_Chaos::FConvexStructureData::Serialize_::__l2::<lambda_2>_>
            (this,&local_res18,(<lambda_2> *)local_res10);
  return;
}

// SetPlaneVertices @ 1437b0200

bool __thiscall
Chaos::FConvexStructureData::SetPlaneVertices
          (FConvexStructureData *this,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,bool param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  EIndexType EVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_48;
  int local_38;
  undefined1 local_34;
  
  iVar9 = param_1->ArrayNum;
  uVar7 = 0;
  iVar10 = 0;
  if (iVar9 < 1) {
LAB_1437b02a9:
    if ((iVar9 < 0xff) && (param_2 < 0xff)) {
      EVar6 = Small;
      goto LAB_1437b034e;
    }
  }
  else {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar9) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar9 = param_1->ArrayNum;
      iVar10 = iVar10 + *(int *)((param_1->AllocatorInstance).Data + lVar8 + 8);
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < iVar9);
    if (iVar10 < 0xff) goto LAB_1437b02a9;
  }
  iVar10 = 0;
  uVar7 = 0;
  if (iVar9 < 1) {
LAB_1437b0339:
    if ((iVar9 < 0x8000) && (EVar6 = Medium, param_2 < 0x8000)) goto LAB_1437b034e;
  }
  else {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < iVar9) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar7 = uVar7 + 1;
      iVar9 = param_1->ArrayNum;
      iVar10 = iVar10 + *(int *)((param_1->AllocatorInstance).Data + lVar8 + 8);
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < iVar9);
    if (iVar10 < 0x8000) goto LAB_1437b0339;
  }
  EVar6 = Large;
LAB_1437b034e:
  CreateDataContainer(this,EVar6);
  iVar9 = param_1->ArrayNum;
  pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(param_1->AllocatorInstance).Data;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = iVar9;
  if (iVar9 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar9,0,&local_48.AllocatorInstance,iVar9,&local_48.ArrayMax);
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              (local_48.AllocatorInstance.Data,pTVar1,iVar9);
  }
  EVar6 = this->IndexType;
  local_38 = param_2;
  local_34 = param_3;
  if (EVar6 == Small) {
    if (param_3) {
      bVar3 = TConvexHalfEdgeStructureData<unsigned_char>::BuildRegularDatas
                        ((this->Data).DataS,&local_48,param_2);
    }
    else {
      bVar3 = TConvexHalfEdgeStructureData<unsigned_char>::SetPlaneVertices
                        ((this->Data).DataS,&local_48,param_2);
    }
  }
  else if (EVar6 == Medium) {
    if (param_3) {
      bVar3 = TConvexHalfEdgeStructureData<short>::BuildRegularDatas
                        ((this->Data).DataM,&local_48,param_2);
    }
    else {
      bVar3 = TConvexHalfEdgeStructureData<short>::SetPlaneVertices
                        ((this->Data).DataM,&local_48,param_2);
    }
  }
  else if (EVar6 == Large) {
    if (param_3) {
      bVar3 = TConvexHalfEdgeStructureData<int>::BuildRegularDatas
                        ((this->Data).DataL,&local_48,param_2);
    }
    else {
      bVar3 = TConvexHalfEdgeStructureData<int>::SetPlaneVertices
                        ((this->Data).DataL,&local_48,param_2);
    }
  }
  else {
    bVar3 = true;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data,
             local_48.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return bVar3;
}

// CopyFrom @ 143a61400

void __thiscall
Chaos::FConvexStructureData::CopyFrom(FConvexStructureData *this,FConvexStructureData *param_1)

{
  code *pcVar1;
  bool bVar2;
  EIndexType EVar3;
  TConvexHalfEdgeStructureData<int> *pTVar4;
  TConvexHalfEdgeStructureData<short> *this_00;
  TConvexHalfEdgeStructureData<unsigned_char> *this_01;
  
  DestroyDataContainer(this);
  if ((this->Data).Ptr != (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.Ptr == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                       ,0x87,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IndexType != None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexType == EIndexType::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                       ,0x88,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = param_1->IndexType;
  if (EVar3 == Large) {
    if ((param_1->Data).Ptr == (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Other.Data.DataL",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                         ,0x8c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar4 = ::operator_new(0x50);
    if (pTVar4 == (TConvexHalfEdgeStructureData<int> *)0x0) {
LAB_143a6155c:
      pTVar4 = (TConvexHalfEdgeStructureData<int> *)0x0;
    }
    else {
      pTVar4 = TConvexHalfEdgeStructureData<int>::TConvexHalfEdgeStructureData<int>
                         (pTVar4,(param_1->Data).DataL);
    }
  }
  else if (EVar3 == Medium) {
    if ((param_1->Data).Ptr == (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Other.Data.DataM",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                         ,0x91,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = ::operator_new(0x50);
    if (this_00 == (TConvexHalfEdgeStructureData<short> *)0x0) goto LAB_143a6155c;
    pTVar4 = (TConvexHalfEdgeStructureData<int> *)
             TConvexHalfEdgeStructureData<short>::TConvexHalfEdgeStructureData<short>
                       (this_00,(param_1->Data).DataM);
  }
  else {
    if (EVar3 != Small) goto LAB_143a61565;
    if ((param_1->Data).Ptr == (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Other.Data.DataS",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConvexStructureData.h"
                         ,0x96,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_01 = ::operator_new(0x50);
    if (this_01 == (TConvexHalfEdgeStructureData<unsigned_char> *)0x0) goto LAB_143a6155c;
    pTVar4 = (TConvexHalfEdgeStructureData<int> *)
             TConvexHalfEdgeStructureData<unsigned_char>::
             TConvexHalfEdgeStructureData<unsigned_char>(this_01,(param_1->Data).DataS);
  }
  (this->Data).DataL = pTVar4;
  EVar3 = param_1->IndexType;
LAB_143a61565:
  this->IndexType = EVar3;
  return;
}

// GetVertexPlanes3 @ 143a70780

int __thiscall
Chaos::FConvexStructureData::GetVertexPlanes3
          (FConvexStructureData *this,int param_1,int *param_2,int *param_3,int *param_4)

{
  EIndexType EVar1;
  TConvexHalfEdgeStructureData<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  
  EVar1 = this->IndexType;
  lVar8 = (longlong)param_1;
  if (EVar1 == Small) {
    pTVar2 = (this->Data).DataL;
    uVar6 = 0;
    if (param_1 < (pTVar2->VertexPlanes).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar7 = (pTVar2->VertexPlanes).AllocatorInstance.Data;
    *param_2 = (uint)(byte)pFVar7[lVar8 * 4];
    *param_3 = (uint)(byte)pFVar7[lVar8 * 4 + 1];
    *param_4 = (uint)(byte)pFVar7[lVar8 * 4 + 2];
    uVar6 = (uint)(byte)pFVar7[lVar8 * 4 + 3];
  }
  else if (EVar1 == Medium) {
    pTVar2 = (this->Data).DataL;
    uVar6 = 0;
    if (param_1 < (pTVar2->VertexPlanes).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar7 = (pTVar2->VertexPlanes).AllocatorInstance.Data;
    *param_2 = (int)*(short *)(pFVar7 + lVar8 * 8);
    *param_3 = (int)*(short *)(pFVar7 + lVar8 * 8 + 2);
    *param_4 = (int)*(short *)(pFVar7 + lVar8 * 8 + 4);
    uVar6 = (uint)*(short *)(pFVar7 + lVar8 * 8 + 6);
  }
  else if (EVar1 == Large) {
    pTVar2 = (this->Data).DataL;
    uVar6 = 0;
    if (param_1 < (pTVar2->VertexPlanes).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    pFVar7 = (pTVar2->VertexPlanes).AllocatorInstance.Data + lVar8 * 0x10;
    *param_2 = *(int *)pFVar7;
    *param_3 = *(int *)(pFVar7 + 4);
    *param_4 = *(int *)(pFVar7 + 8);
    uVar6 = *(uint *)(pFVar7 + 0xc);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

// GetPlaneVertex @ 144040f70

int __thiscall
Chaos::FConvexStructureData::GetPlaneVertex(FConvexStructureData *this,int param_1,int param_2)

{
  EIndexType EVar1;
  TConvexHalfEdgeStructureData<int> *this_00;
  TConvexHalfEdgeStructureData<short> *this_01;
  TConvexHalfEdgeStructureData<unsigned_char> *this_02;
  int iVar2;
  FHalfEdgeData *pFVar3;
  FHalfEdgeData *pFVar4;
  FHalfEdgeData *pFVar5;
  
  EVar1 = this->IndexType;
  if (EVar1 == Small) {
    this_02 = (this->Data).DataS;
    iVar2 = TConvexHalfEdgeStructureData<unsigned_char>::GetPlaneHalfEdge(this_02,param_1,param_2);
    pFVar5 = TConvexHalfEdgeStructureData<unsigned_char>::GetHalfEdge(this_02,iVar2);
    return (int)pFVar5->VertexIndex;
  }
  if (EVar1 != Medium) {
    if (EVar1 != Large) {
      return -1;
    }
    this_00 = (this->Data).DataL;
    iVar2 = TConvexHalfEdgeStructureData<int>::GetPlaneHalfEdge(this_00,param_1,param_2);
    pFVar3 = TConvexHalfEdgeStructureData<int>::GetHalfEdge(this_00,iVar2);
    return pFVar3->VertexIndex;
  }
  this_01 = (this->Data).DataM;
  iVar2 = TConvexHalfEdgeStructureData<short>::GetPlaneHalfEdge(this_01,param_1,param_2);
  pFVar4 = TConvexHalfEdgeStructureData<short>::GetHalfEdge(this_01,iVar2);
  return (int)pFVar4->VertexIndex;
}

