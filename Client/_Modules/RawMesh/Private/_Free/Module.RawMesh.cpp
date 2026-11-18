// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RawMesh
// Functions: 12

// `dynamic_initializer_for_'ModuleRegistrantRawMesh'' @ 140f87200

void __cdecl _dynamic_initializer_for__ModuleRegistrantRawMesh__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "RawMesh";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"RawMesh",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// operator<<<FColor,TSizedDefaultAllocator<32>_> @ 14435d920

FArchive * __cdecl
operator<<<FColor,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FColor,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<FColor,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          do {
            iVar7 = param_2->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar7 + 1;
            pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
            puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
            if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
              }
            }
            else {
              *(uint *)pFVar10 = *puVar3;
              **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
            }
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
          } while ((int)uVar11 < (int)auStackX_8[0]);
          return param_1;
        }
        param_2->ArrayNum = auStackX_8[0];
        uVar14 = uVar12;
        uVar11 = auStackX_8[0];
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          uVar13 = (uint)uVar12;
          uVar8 = 0;
          if ((int)uVar13 < (int)uVar11) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar9 = (FArchive *)(*pcVar5)();
            return pFVar9;
          }
          pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
          puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
          if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
            if ((param_1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
            }
          }
          else {
            *(undefined4 *)pFVar10 = *puVar4;
            **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
          }
          uVar12 = (ulonglong)(uVar13 + 1);
          uVar14 = uVar14 + 4;
          uVar11 = param_2->ArrayNum;
        } while ((int)(uVar13 + 1) < param_2->ArrayNum);
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// ValidateArraySize<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14435dbc0

bool __cdecl
ValidateArraySize<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  if ((param_1->ArrayNum != 0) && (param_1->ArrayNum != param_2)) {
    return false;
  }
  return true;
}

// ValidateArraySize<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14435dbe0

bool __cdecl
ValidateArraySize<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  if ((param_1->ArrayNum != 0) && (param_1->ArrayNum != param_2)) {
    return false;
  }
  return true;
}

// ValidateArraySize<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14435dc00

bool __cdecl
ValidateArraySize<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  if ((param_1->ArrayNum != 0) && (param_1->ArrayNum != param_2)) {
    return false;
  }
  return true;
}

// ValidateArraySize<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14435dc20

bool __cdecl
ValidateArraySize<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  if ((param_1->ArrayNum != 0) && (param_1->ArrayNum != param_2)) {
    return false;
  }
  return true;
}

// ValidateArraySize<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14435dc40

bool __cdecl
ValidateArraySize<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (TArray<FColor,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  if ((param_1->ArrayNum != 0) && (param_1->ArrayNum != param_2)) {
    return false;
  }
  return true;
}

// operator<< @ 14435dd10

FArchive * __cdecl operator<<(FArchive *param_1,FRawMesh *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res8[0] = 1;
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->FaceMaterialIndices);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->FaceSmoothingMasks);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->VertexPositions);
  TArrayPrivateFriend::Serialize<unsigned_int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->WedgeIndices);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->WedgeTangentX);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->WedgeTangentY);
  TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->WedgeTangentZ);
  pTVar3 = param_2->WedgeTexCoords;
  lVar2 = 8;
  do {
    TArrayPrivateFriend::Serialize<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
              (param_1,pTVar3);
    pTVar3 = pTVar3 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  TArrayPrivateFriend::Serialize<FColor,TSizedDefaultAllocator<32>_>(param_1,&param_2->WedgeColors);
  if ((int)local_res8[0] < 1) {
    FRawMesh::CompactMaterialIndices(param_2);
    return param_1;
  }
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->MaterialIndexToImportIndex);
  return param_1;
}

// `scalar_deleting_destructor' @ 14435df00

void * __thiscall FBufferWriter::_scalar_deleting_destructor_(FBufferWriter *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBufferWriter__6B_;
  if (this->bFreeOnClose != false) {
    FMemory::Free(this->WriterData);
    this->WriterData = (void *)0x0;
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14435df70

void * __thiscall FBulkDataReader::_scalar_deleting_destructor_(FBulkDataReader *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FBulkDataReader__6B_;
  FBulkData::Unlock((FBulkData *)this->BulkData);
  if ((char)this->_padding_ != '\0') {
    FMemory::Free((void *)this->_padding_);
    this->_padding_ = 0;
  }
  this->_padding_ = (longlong)&___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// GetRawMeshSerializedDataSize @ 14435ea00

long64 __cdecl GetRawMeshSerializedDataSize(FRawMesh *param_1)

{
  return (ulonglong)(uint)((param_1->FaceMaterialIndices).ArrayNum << 2) + 0x4c +
         (ulonglong)(uint)((param_1->MaterialIndexToImportIndex).ArrayNum << 2) +
         (ulonglong)(uint)((param_1->WedgeColors).ArrayNum << 2) +
         (ulonglong)(uint)(param_1->WedgeTexCoords[7].ArrayNum << 3) +
         (ulonglong)(uint)(param_1->WedgeTexCoords[6].ArrayNum << 3) +
         (ulonglong)(uint)(param_1->WedgeTexCoords[5].ArrayNum << 3) +
         (ulonglong)(uint)(param_1->WedgeTexCoords[4].ArrayNum << 3) +
         (ulonglong)(uint)(param_1->WedgeTexCoords[3].ArrayNum << 3) +
         (ulonglong)(uint)(param_1->WedgeTexCoords[2].ArrayNum << 3) +
         (ulonglong)(uint)(param_1->WedgeTexCoords[1].ArrayNum << 3) +
         (ulonglong)(uint)(param_1->WedgeTexCoords[0].ArrayNum << 3) +
         (ulonglong)(uint)((param_1->WedgeTangentZ).ArrayNum * 0xc) +
         (ulonglong)(uint)((param_1->WedgeTangentY).ArrayNum * 0xc) +
         (ulonglong)(uint)((param_1->WedgeTangentX).ArrayNum * 0xc) +
         (ulonglong)(uint)((param_1->WedgeIndices).ArrayNum << 2) +
         (ulonglong)(uint)((param_1->VertexPositions).ArrayNum * 0xc) +
         (ulonglong)(uint)((param_1->FaceSmoothingMasks).ArrayNum << 2);
}

// IMPLEMENT_MODULE_RawMesh @ 14435f6d0

void __cdecl IMPLEMENT_MODULE_RawMesh(void)

{
  return;
}

