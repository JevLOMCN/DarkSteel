// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 5

// StaticStruct @ 1463452c0

UScriptStruct * __cdecl FGeometryCollectionRepStateData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionRepStateData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionRepStateData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRepStateData,(UObject *)pUVar1
                         ,L"GeometryCollectionRepStateData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionRepStateData.OuterSingleton;
}

// HasChanged @ 14637e5f0

bool __thiscall
FGeometryCollectionRepStateData::HasChanged
          (FGeometryCollectionRepStateData *this,FGeometryCollectionRepStateData *param_1)

{
  int iVar1;
  ForElementType<unsigned_int> _Buf1;
  ForElementType<unsigned_int> _Buf2;
  
  if (this->Version != 0) {
    iVar1 = (this->BrokenState).NumBits;
    if (iVar1 == (param_1->BrokenState).NumBits) {
      _Buf2 = (param_1->BrokenState).AllocatorInstance.SecondaryData;
      _Buf1 = (this->BrokenState).AllocatorInstance.SecondaryData;
      if (_Buf2 == (ForElementType<unsigned_int>)0x0) {
        _Buf2 = (ForElementType<unsigned_int>)&param_1->BrokenState;
      }
      if (_Buf1 == (ForElementType<unsigned_int>)0x0) {
        _Buf1 = (ForElementType<unsigned_int>)&this->BrokenState;
      }
      iVar1 = memcmp((void *)_Buf1,(void *)_Buf2,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
      if ((iVar1 == 0) && (this->bIsRootAnchored == param_1->bIsRootAnchored)) {
        return false;
      }
    }
  }
  return true;
}

// Identical @ 14637e760

bool __thiscall
FGeometryCollectionRepStateData::Identical
          (FGeometryCollectionRepStateData *this,FGeometryCollectionRepStateData *param_1,
          uint param_2)

{
  if ((param_1 != (FGeometryCollectionRepStateData *)0x0) && (this->Version == param_1->Version)) {
    return true;
  }
  return false;
}

// NetSerialize @ 146382460

bool __thiscall
FGeometryCollectionRepStateData::NetSerialize
          (FGeometryCollectionRepStateData *this,FArchive *param_1,UPackageMap *param_2,
          bool *param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uchar *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ForElementType<unsigned_int> FVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  float local_res20 [2];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  
  *param_3 = true;
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->Version = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  this_00 = &this->BrokenState;
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    piVar1 = &(this->BrokenState).NumBits;
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    (this->BrokenState).NumBits = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    uVar10 = (this->BrokenState).NumBits + 0x1fU >> 5;
    uVar8 = 4;
    if (4 < uVar10) {
      uVar8 = uVar10;
    }
    (this->BrokenState).MaxBits = uVar8 << 5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  }
  FVar13 = (this->BrokenState).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<unsigned_int>)0x0) {
    FVar13 = (ForElementType<unsigned_int>)this_00;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,FVar13,(ulonglong)((this->BrokenState).NumBits + 0x1fU >> 5) << 2);
  if (((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x2b & 5) == 0)) {
    TBitArray<FDefaultBitArrayAllocator>::ClearPartialSlackBits(this_00);
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->bIsRootAnchored,1);
  }
  else {
    this->bIsRootAnchored = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar1 = &(this->ReleasedData).ArrayNum;
  if (0xfffe < (this->ReleasedData).ArrayNum) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7287575455585009311>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionComponent.cpp"
                       ,0x161,"ReleasedData.Num() < TNumericLimits<uint16>::Max()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = (ushort)*piVar1;
  if ((ushort *)plVar3[1] < (ushort *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(ushort *)*plVar3;
    *plVar3 = *plVar3 + 2;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    uVar12 = (ulonglong)local_res10[0];
    iVar15 = (this->ReleasedData).ArrayNum;
    uVar8 = (uint)local_res10[0];
    if (iVar15 < (int)(uint)local_res10[0]) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar8 - iVar15,&(this->ReleasedData).AllocatorInstance,piVar1,
                 &(this->ReleasedData).ArrayMax);
    }
    else if ((int)(uint)local_res10[0] < iVar15) {
      iVar15 = iVar15 - uVar8;
      if (iVar15 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else if (iVar15 == 0) goto LAB_146382713;
      pFVar11 = (this->ReleasedData).AllocatorInstance.Data + uVar12 * 0x38;
      iVar9 = ((this->ReleasedData).ArrayNum - iVar15) - uVar8;
      if (iVar9 != 0) {
        memmove(pFVar11,pFVar11 + (longlong)iVar15 * 0x38,(longlong)iVar9 * 0x38);
      }
      piVar1 = &(this->ReleasedData).ArrayNum;
      *piVar1 = *piVar1 - iVar15;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,&(this->ReleasedData).AllocatorInstance,(this->ReleasedData).ArrayNum,
                 &(this->ReleasedData).ArrayMax);
    }
  }
LAB_146382713:
  local_44 = (this->ReleasedData).ArrayNum;
  uVar12 = (ulonglong)(int)local_44;
  pFVar14 = (this->ReleasedData).AllocatorInstance.Data;
  pFVar11 = pFVar14 + 0x18;
  pFVar16 = pFVar14 + uVar12 * 0x38;
  while( true ) {
    if ((this->ReleasedData).ArrayNum != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGeometryCollectionRepStateData::FReleasedData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar16) break;
    puVar4 = (undefined2 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined2 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar14,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar14);
      }
    }
    else {
      *(undefined2 *)pFVar14 = *puVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_54,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_54);
        }
      }
      else {
        local_54 = *(float *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res20);
        }
      }
      else {
        local_res20[0] = *(float *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_58,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_58);
        }
      }
      else {
        local_58 = *(float *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      *(double *)(pFVar11 + -0x10) = (double)local_54;
      *(double *)(pFVar11 + -8) = (double)local_res20[0];
      *(double *)pFVar11 = (double)local_58;
    }
    else {
      ::operator<<(param_1,(double *)(pFVar11 + -0x10));
      ::operator<<(param_1,(double *)(pFVar11 + -8));
      ::operator<<(param_1,(double *)pFVar11);
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_48,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_48);
        }
      }
      else {
        local_48 = *(float *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_50,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_50);
        }
      }
      else {
        local_50 = *(float *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_4c);
        }
      }
      else {
        local_4c = *(float *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      pFVar14 = pFVar14 + 0x38;
      uVar12 = (ulonglong)local_44;
      *(double *)(pFVar11 + 8) = (double)local_48;
      *(double *)(pFVar11 + 0x10) = (double)local_50;
      *(double *)(pFVar11 + 0x18) = (double)local_4c;
      pFVar11 = pFVar11 + 0x38;
    }
    else {
      ::operator<<(param_1,(double *)(pFVar11 + 8));
      ::operator<<(param_1,(double *)(pFVar11 + 0x10));
      ::operator<<(param_1,(double *)(pFVar11 + 0x18));
      uVar12 = (ulonglong)local_44;
      pFVar14 = pFVar14 + 0x38;
      pFVar11 = pFVar11 + 0x38;
    }
  }
  return true;
}

// SetBroken @ 14638c040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FGeometryCollectionRepStateData::SetBroken
          (FGeometryCollectionRepStateData *this,int param_1,int param_2,bool param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  undefined6 uStack_76;
  
  this_00 = &this->BrokenState;
  if ((this->BrokenState).NumBits != param_2) {
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>(this_00,param_2,false);
  }
  piVar1 = &(this->BrokenState).NumBits;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    uVar15 = (*pcVar6)();
    return (bool)uVar15;
  }
  FVar18 = (this->BrokenState).AllocatorInstance.SecondaryData;
  uVar21 = 1 << ((byte)param_1 & 0x1f);
  lVar20 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5);
  if (FVar18 == (ForElementType<unsigned_int>)0x0) {
    FVar18 = (ForElementType<unsigned_int>)this_00;
  }
  if ((*(uint *)((longlong)FVar18 + lVar20 * 4) & uVar21) == 0) {
    if (((param_1 < 0) || (*piVar1 <= param_1)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return (bool)uVar15;
    }
    dVar13 = _UNK_1506896a8;
    dVar12 = ___xmm_404ca5dc00000000404ca5dc00000000;
    FVar18 = (this->BrokenState).AllocatorInstance.SecondaryData;
    piVar1 = &(this->ReleasedData).ArrayMax;
    if (FVar18 == (ForElementType<unsigned_int>)0x0) {
      FVar18 = (ForElementType<unsigned_int>)this_00;
    }
    puVar2 = (uint *)((longlong)FVar18 + lVar20 * 4);
    *puVar2 = *puVar2 | uVar21;
    dVar10 = (param_4->field0_0x0)._s_0.X;
    dVar11 = (param_4->field0_0x0)._s_0.Y;
    dVar3 = (param_4->field0_0x0)._s_0.Z;
    iVar16 = (this->ReleasedData).ArrayNum;
    dVar8 = (param_5->field0_0x0)._s_0.X;
    dVar9 = (param_5->field0_0x0)._s_0.Y;
    dVar7 = (param_5->field0_0x0)._s_0.Z * __real_404ca5dc00000000;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&(this->ReleasedData).AllocatorInstance,piVar1);
    }
    (this->ReleasedData).ArrayNum = iVar16 + 1;
    lVar20 = (longlong)iVar16 * 0x38;
    pFVar5 = (this->ReleasedData).AllocatorInstance.Data;
    *(ulonglong *)(pFVar5 + lVar20) = CONCAT62(uStack_76,(short)param_1);
    *(double *)(pFVar5 + lVar20 + 8) = dVar10;
    *(double *)(pFVar5 + lVar20 + 0x10) = dVar11;
    *(double *)(pFVar5 + lVar20 + 0x10 + 8) = dVar3;
    *(double *)(pFVar5 + lVar20 + 0x20) = dVar12 * dVar8;
    *(double *)(pFVar5 + lVar20 + 0x20 + 8) = dVar13 * dVar9;
    *(double *)(pFVar5 + lVar20 + 0x30) = dVar7;
    bVar14 = true;
  }
  else {
    if (param_3) {
      pFVar5 = (this->ReleasedData).AllocatorInstance.Data;
      for (pFVar19 = pFVar5; pFVar19 != pFVar5 + (longlong)(this->ReleasedData).ArrayNum * 0x38;
          pFVar19 = pFVar19 + 0x38) {
        if (*(short *)pFVar19 == param_1) {
          uVar21 = (uint)(((longlong)pFVar19 - (longlong)pFVar5) / 0x38);
          if (uVar21 != 0xffffffff) {
            uVar17 = 0;
            if ((int)uVar21 < (this->ReleasedData).ArrayNum) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              uVar15 = (*pcVar6)();
              return (bool)uVar15;
            }
            iVar4 = (this->ReleasedData).ArrayNum;
            pFVar5 = (this->ReleasedData).AllocatorInstance.Data;
            iVar16 = iVar4 + ~uVar21;
            if (1 < iVar16) {
              iVar16 = 1;
            }
            if (iVar16 != 0) {
              memmove(pFVar5 + (longlong)(int)uVar21 * 0x38,
                      pFVar5 + (longlong)(iVar4 - iVar16) * 0x38,(longlong)iVar16 * 0x38);
            }
            piVar1 = &(this->ReleasedData).ArrayNum;
            *piVar1 = *piVar1 + -1;
          }
          break;
        }
      }
    }
    bVar14 = false;
  }
  return bVar14;
}

