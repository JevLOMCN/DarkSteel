// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 5

// StaticStruct @ 14b52b5d0

UScriptStruct * __cdecl FDS_NameTagDataCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NameTagDataCollection.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NameTagDataCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NameTagDataCollection,(UObject *)pUVar1,
                         L"DS_NameTagDataCollection");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NameTagDataCollection.OuterSingleton;
}

// GetColor @ 14b905600

FLinearColor * __thiscall
FDS_NameTagDataCollection::GetColor
          (FDS_NameTagDataCollection *this,FLinearColor *__return_storage_ptr__,
          EDS_NameTagStateType param_1,EDS_NameTagElementType param_2)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  EDS_NameTagStateType *pEVar6;
  FLinearColor *pFVar7;
  FDS_NameTagElementData *pFVar8;
  FDS_ResourceColorTableRow *pFVar9;
  EDS_NameTagStateType *pEVar10;
  undefined1 *puVar11;
  float fVar12;
  
  if (*(int *)&(this->NameTagDataMap).field_0x8 != *(int *)&(this->NameTagDataMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->NameTagDataMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->NameTagDataMap).field_0x38;
    }
    uVar5 = *(undefined4 *)
             (puVar11 +
             ((ulonglong)(*(int *)&(this->NameTagDataMap).field_0x48 - 1) & (ulonglong)param_1) * 4)
    ;
    if (uVar5 != 0xffffffff) {
      do {
        pEVar6 = (EDS_NameTagStateType *)
                 ((longlong)(int)uVar5 * 0x68 + *(longlong *)&this->NameTagDataMap);
        if (*pEVar6 == param_1) {
          pEVar10 = pEVar6 + 8;
          if (pEVar6 == (EDS_NameTagStateType *)0x0) {
            pEVar10 = (EDS_NameTagStateType *)0x0;
          }
          if (pEVar10 != (EDS_NameTagStateType *)0x0) {
            pFVar8 = TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementData,0>_>
                     ::Find(pEVar10 + 8,param_2);
            if (pFVar8 != (FDS_NameTagElementData *)0x0) {
              pFVar9 = FDS_ResourceColorTableRow::GetRef((longlong)pFVar8->ID_Color,true);
              fVar1 = FLinearColor::sRGBToLinearTable[(pFVar9->Color).field0_0x0._s_0.G];
              fVar2 = FLinearColor::sRGBToLinearTable[(pFVar9->Color).field0_0x0._s_0.B];
              fVar12 = (float)(pFVar9->Color).field0_0x0._s_0.A * __real_3b808081;
              (__return_storage_ptr__->field0_0x0)._s_0.R =
                   FLinearColor::sRGBToLinearTable[(pFVar9->Color).field0_0x0._s_0.R];
              (__return_storage_ptr__->field0_0x0)._s_0.G = fVar1;
              (__return_storage_ptr__->field0_0x0)._s_0.B = fVar2;
              (__return_storage_ptr__->field0_0x0)._s_0.A = fVar12;
              return __return_storage_ptr__;
            }
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4672320816229121810>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataAsset\\DS_NameTagDataAsset.cpp"
                               ,0xee,"findData");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar7 = (FLinearColor *)(*pcVar3)();
              return pFVar7;
            }
            (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
            return __return_storage_ptr__;
          }
          break;
        }
        uVar5 = *(undefined4 *)(pEVar6 + 0x60);
      } while (uVar5 != 0xffffffff);
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4672320816229121992>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataAsset\\DS_NameTagDataAsset.cpp"
                     ,0x38,"findData");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FLinearColor *)(*pcVar3)();
    return pFVar7;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetNameTagData @ 14b906160

FDS_NameTagData * __thiscall
FDS_NameTagDataCollection::GetNameTagData
          (FDS_NameTagDataCollection *this,EDS_NameTagStateType param_1)

{
  undefined4 uVar1;
  FDS_NameTagData *pFVar2;
  EDS_NameTagStateType *pEVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->NameTagDataMap).field_0x8 != *(int *)&(this->NameTagDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->NameTagDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->NameTagDataMap).field_0x38;
    }
    uVar1 = *(undefined4 *)
             (puVar4 + ((ulonglong)(*(int *)&(this->NameTagDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EDS_NameTagStateType *)
                 ((longlong)(int)uVar1 * 0x68 + *(longlong *)&this->NameTagDataMap);
        if (*pEVar3 == param_1) {
          pFVar2 = (FDS_NameTagData *)(pEVar3 + 8);
          if (pEVar3 == (EDS_NameTagStateType *)0x0) {
            pFVar2 = (FDS_NameTagData *)0x0;
          }
          if (pFVar2 == (FDS_NameTagData *)0x0) {
            pFVar2 = &FDS_NameTagData::EmptyNameTagData;
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x60);
      } while (uVar1 != 0xffffffff);
    }
  }
  return &FDS_NameTagData::EmptyNameTagData;
}

// GetStyleID @ 14b909320

int __thiscall
FDS_NameTagDataCollection::GetStyleID
          (FDS_NameTagDataCollection *this,EDS_NameTagStateType param_1,
          EDS_NameTagElementType param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  EDS_NameTagStateType *pEVar5;
  FDS_NameTagElementData *pFVar6;
  EDS_NameTagStateType *pEVar7;
  undefined1 *puVar8;
  
  if (*(int *)&(this->NameTagDataMap).field_0x8 != *(int *)&(this->NameTagDataMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->NameTagDataMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->NameTagDataMap).field_0x38;
    }
    uVar3 = *(undefined4 *)
             (puVar8 + ((ulonglong)(*(int *)&(this->NameTagDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_NameTagStateType *)
                 ((longlong)(int)uVar3 * 0x68 + *(longlong *)&this->NameTagDataMap);
        if (*pEVar5 == param_1) {
          iVar4 = 0;
          pEVar7 = pEVar5 + 8;
          if (pEVar5 == (EDS_NameTagStateType *)0x0) {
            pEVar7 = (EDS_NameTagStateType *)0x0;
          }
          if (pEVar7 != (EDS_NameTagStateType *)0x0) {
            pFVar6 = TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementData,0>_>
                     ::Find(pEVar7 + 8,param_2);
            if (pFVar6 == (FDS_NameTagElementData *)0x0) {
              bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4672320816229121821>,true,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataAsset\\DS_NameTagDataAsset.cpp"
                                 ,0xe3,"findData");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                iVar4 = (*pcVar1)();
                return iVar4;
              }
            }
            else {
              iVar4 = pFVar6->ID_Style;
            }
            return iVar4;
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x60);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4672320816229122004>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataAsset\\DS_NameTagDataAsset.cpp"
                     ,0x2c,"findData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  return 0;
}

// operator= @ 14bed4cb0

FDS_NameTagDataCollection * __thiscall
FDS_NameTagDataCollection::operator=
          (FDS_NameTagDataCollection *this,FDS_NameTagDataCollection *param_1)

{
  TMap<EDS_NameTagElementType,FDS_NameTagElementAlphaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_NameTagElementType,FDS_NameTagElementAlphaData,0>_>
  *pTVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *this_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  pTVar1 = &this->AlphaDataMap;
  this->NameTagType = param_1->NameTagType;
  if (pTVar1 != &param_1->AlphaDataMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->AlphaDataMap).field_0x38,
               (int *)&(this->AlphaDataMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->AlphaDataMap).field_0x38,
               *(int *)&(param_1->AlphaDataMap).field_0x48);
    uVar4 = *(uint *)&(param_1->AlphaDataMap).field_0x8;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    puVar2 = &(this->AlphaDataMap).field_0xc;
    puVar3 = &(this->AlphaDataMap).field_0x8;
    *(undefined4 *)puVar3 = 0;
    if (*(uint *)puVar2 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,uVar4,(ForAnyElementType *)pTVar1,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->AlphaDataMap).field_0x34 = 0;
    this_00 = &(this->AlphaDataMap).field_0x10;
    *(undefined4 *)&(this->AlphaDataMap).field_0x30 = 0xffffffff;
    iVar5 = *(int *)&(this->AlphaDataMap).field_0x2c;
    uVar7 = uVar4 + 0x1f & 0xffffffe0;
    *(undefined4 *)&(this->AlphaDataMap).field_0x28 = 0;
    if ((iVar5 < (int)uVar7) || (0x80 < iVar5)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar7) {
        uVar6 = uVar7;
      }
      *(uint *)&(this->AlphaDataMap).field_0x2c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar4,(ForAnyElementType *)pTVar1,(int *)puVar3,(int *)puVar2);
    puVar2 = &(param_1->AlphaDataMap).field_0x10;
    *(undefined4 *)&(this->AlphaDataMap).field_0x30 =
         *(undefined4 *)&(param_1->AlphaDataMap).field_0x30;
    *(undefined4 *)&(this->AlphaDataMap).field_0x34 =
         *(undefined4 *)&(param_1->AlphaDataMap).field_0x34;
    if (this_00 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (uVar4 != 0) {
      memcpy(*(void **)pTVar1,*(void **)&param_1->AlphaDataMap,(longlong)(int)uVar4 * 0x18);
    }
  }
  if (&this->NameTagDataMap != &param_1->NameTagDataMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->NameTagDataMap).field_0x38,
               (int *)&(this->NameTagDataMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->NameTagDataMap).field_0x38,
               *(int *)&(param_1->NameTagDataMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(&this->NameTagDataMap,
                (TSparseArray<TSparseSetElement<TTuple<EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->NameTagDataMap);
  }
  return this;
}

