// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// BuildLowResolutionData @ 143b16e90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FHeightField::FData<unsigned_short>::BuildLowResolutionData(FData<unsigned_short> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ushort local_res8;
  int local_res10;
  int local_res18;
  int local_res20;
  int local_58;
  
  iVar6 = -((int)ROUND(__real_bf000000 - (float)this->NumRows * __real_3eaaaaab) >> 1);
  uVar4 = -(short)((int)ROUND(__real_bf000000 - (float)this->NumCols * __real_3eaaaaab) >> 1);
  this->NumColsLowRes = uVar4;
  TArray<Chaos::FHeightField::FData<unsigned_short>::MinMaxHeights,TSizedDefaultAllocator<32>_>::
  SetNum(&this->LowResolutionHeights,(uint)uVar4 * iVar6,Default);
  local_res10 = 0;
  if (0 < iVar6) {
    local_res20 = 0;
    do {
      local_res18 = 0;
      if (this->NumColsLowRes != 0) {
        local_58 = 0;
        do {
          uVar4 = 0xffff;
          local_res8 = 0;
          uVar8 = 0;
          if (local_res20 < (int)(uint)this->NumRows) {
            iVar11 = local_res20;
            do {
              uVar8 = local_res8;
              if (local_res20 + 6 < iVar11) break;
              uVar5 = (uint)this->NumCols;
              if (local_58 < (int)(uint)this->NumCols) {
                iVar7 = local_58;
                do {
                  if (local_58 + 6 < iVar7) break;
                  uVar10 = uVar5 * iVar11 + iVar7;
                  uVar5 = 0;
                  if ((int)uVar10 < (this->Heights).ArrayNum) {
                    uVar5 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  lVar9 = (longlong)(int)uVar10;
                  uVar8 = *(ushort *)((this->Heights).AllocatorInstance.Data + lVar9 * 2);
                  if (local_res8 < uVar8) {
                    local_res8 = uVar8;
                  }
                  uVar5 = 0;
                  if ((int)uVar10 < (this->Heights).ArrayNum) {
                    uVar5 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar1 = (this->Heights).AllocatorInstance.Data;
                  if (*(ushort *)(pFVar1 + lVar9 * 2) < uVar4) {
                    uVar4 = *(ushort *)(pFVar1 + lVar9 * 2);
                  }
                  iVar7 = iVar7 + 1;
                  uVar5 = (uint)this->NumCols;
                } while (iVar7 < (int)uVar5);
              }
              iVar11 = iVar11 + 1;
              uVar8 = local_res8;
            } while (iVar11 < (int)(uint)this->NumRows);
          }
          uVar10 = (uint)this->NumColsLowRes * local_res10 + local_res18;
          uVar5 = 0;
          if ((int)uVar10 < (this->LowResolutionHeights).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(ushort *)
           ((this->LowResolutionHeights).AllocatorInstance.Data + (longlong)(int)uVar10 * 4 + 2) =
               uVar8;
          uVar5 = 0;
          if ((int)uVar10 < (this->LowResolutionHeights).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_58 = local_58 + 6;
          local_res18 = local_res18 + 1;
          *(ushort *)
           ((this->LowResolutionHeights).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = uVar4
          ;
        } while (local_res18 < (int)(uint)this->NumColsLowRes);
      }
      local_res10 = local_res10 + 1;
      local_res20 = local_res20 + 6;
    } while (local_res10 < iVar6);
  }
  return;
}

// Serialize @ 143b3b080

void __thiscall
Chaos::FHeightField::FData<unsigned_short>::Serialize
          (FData<unsigned_short> *this,FChaosArchive *param_1)

{
  ushort *puVar1;
  longlong *plVar2;
  ushort *puVar3;
  code *pcVar4;
  __m128 _Var5;
  bool bVar6;
  int iVar7;
  ForAnyElementType FVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_68;
  float local_64;
  TArray<TUniqueObj<Chaos::FBoxFloat3>,TSizedDefaultAllocator<32>_> local_60;
  TArray<float,TSizedDefaultAllocator<32>_> local_50;
  
  plVar2 = (longlong *)param_1->_padding_;
  local_res8[0] = 8;
  local_res10[0] = 2;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = (longlong *)param_1->_padding_;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((param_1->_padding_ & 1) != 0) {
    if ((local_res8[0] - 4 & 0xfffffffb) != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializedRealSize == sizeof(float) || SerializedRealSize == sizeof(double)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HeightField.h"
                         ,0x2eb,
                         L"Heightfield was serialized with unexpected real type size (expected: 4 or 8, found: %d)"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_res10[0] != 2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializedStorageSize == RunTimeStorageSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\HeightField.h"
                         ,0x2ec,
                         L"Heightfield was serialized with mismatched storage type size (expected: %d, found: %d)"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  operator<<<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&this->Heights);
  SerializeReal<double,3>((FArchive *)param_1,&this->Scale);
  if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
    plVar2 = (longlong *)param_1->_padding_;
    local_res18[0] = (float)this->MinValue;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res18);
      }
    }
    else {
      local_res18[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_1->_padding_ & 1) != 0) {
      this->MinValue = (double)local_res18[0];
    }
  }
  else {
    ::operator<<((FArchive *)param_1,&this->MinValue);
  }
  if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
    plVar2 = (longlong *)param_1->_padding_;
    local_res20[0] = (float)this->MaxValue;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res20);
      }
    }
    else {
      local_res20[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if ((param_1->_padding_ & 1) != 0) {
      this->MaxValue = (double)local_res20[0];
    }
  }
  else {
    ::operator<<((FArchive *)param_1,&this->MaxValue);
  }
  puVar1 = &this->NumRows;
  puVar3 = *(ushort **)param_1->_padding_;
  if ((ushort *)((undefined8 *)param_1->_padding_)[1] < puVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 2;
  }
  puVar1 = &this->NumCols;
  puVar3 = *(ushort **)param_1->_padding_;
  if ((ushort *)((undefined8 *)param_1->_padding_)[1] < puVar3 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 2;
  }
  _Var5.m128_f32[1] = (float)*(double *)&(this->Scale).field_0x8;
  _Var5.m128_f32[0] = (float)*(double *)&this->Scale;
  _Var5.m128_f32[2] = (float)*(double *)&(this->Scale).field_0x10;
  _Var5.m128_f32[3] = 0.0;
  this->ScaleSimd = _Var5;
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (6 < iVar7) {
    if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
      plVar2 = (longlong *)param_1->_padding_;
      local_68 = (float)this->Range;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_68,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&local_68);
        }
      }
      else {
        local_68 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if ((param_1->_padding_ & 1) != 0) {
        this->Range = (double)local_68;
      }
    }
    else {
      ::operator<<((FArchive *)param_1,&this->Range);
    }
    if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
      plVar2 = (longlong *)param_1->_padding_;
      local_64 = (float)this->HeightPerUnit;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_64,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&local_64);
        }
      }
      else {
        local_64 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      if ((param_1->_padding_ & 1) != 0) {
        this->HeightPerUnit = (double)local_64;
      }
    }
    else {
      ::operator<<((FArchive *)param_1,&this->HeightPerUnit);
    }
    iVar7 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    if (iVar7 < 0x17) {
      local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.ArrayNum = 0;
      local_60.ArrayMax = 0;
      operator<<<TUniqueObj<Chaos::FBoxFloat3>_TSizedDefaultAllocator<32>_>(param_1,&local_60);
      DestructItems<TUniqueObj<Chaos::FBoxFloat3>,int>
                ((TUniqueObj<Chaos::FBoxFloat3> *)local_60.AllocatorInstance.Data,local_60.ArrayNum)
      ;
      FVar8.Data = local_60.AllocatorInstance.Data;
    }
    else {
      iVar7 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
      if (0x1f < iVar7) goto LAB_143b3b512;
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      operator<<<float,TSizedDefaultAllocator<32>_>(param_1,&local_50);
      FVar8.Data = local_50.AllocatorInstance.Data;
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
LAB_143b3b512:
  iVar7 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x11 < iVar7) {
    operator<<<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&this->MaterialIndices);
  }
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar7 != 0x53) {
    iVar7 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
    if (iVar7 < 0x54) {
      BuildLowResolutionData(this);
      return;
    }
  }
  operator<<<Chaos::FHeightField::FData<unsigned_short>::MinMaxHeights_TSizedDefaultAllocator<32>_>
            (param_1,&this->LowResolutionHeights);
  ::operator<<((FArchive *)param_1,&this->NumColsLowRes);
  return;
}

// Serialize @ 143b3eb60

void __thiscall
Chaos::FHeightField::FData<unsigned_short>::MinMaxHeights::Serialize
          (MinMaxHeights *this,FChaosArchive *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = *(ushort **)param_1->_padding_;
  if ((ushort *)((undefined8 *)param_1->_padding_)[1] < puVar1 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,this,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&this->Min);
    }
  }
  else {
    this->Min = *puVar1;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 2;
  }
  puVar1 = &this->Max;
  puVar2 = *(ushort **)param_1->_padding_;
  if (puVar2 + 1 <= (ushort *)((undefined8 *)param_1->_padding_)[1]) {
    *puVar1 = *puVar2;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 2;
    return;
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143b3ec0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar1,2);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar1);
  return;
}

