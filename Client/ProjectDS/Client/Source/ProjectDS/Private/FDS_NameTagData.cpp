// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// StaticStruct @ 14b52ac70

UScriptStruct * __cdecl FDS_NameTagData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NameTagData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NameTagData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NameTagData,(UObject *)pUVar1,
                         L"DS_NameTagData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NameTagData.OuterSingleton;
}

// GetColor @ 14b905550

FLinearColor * __thiscall
FDS_NameTagData::GetColor
          (FDS_NameTagData *this,FLinearColor *__return_storage_ptr__,EDS_NameTagElementType param_1
          )

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FDS_NameTagElementData *pFVar4;
  FLinearColor *pFVar5;
  FDS_ResourceColorTableRow *pFVar6;
  
  pFVar4 = TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementData,0>_>
           ::Find(&this->ElementDataMap,param_1);
  if (pFVar4 != (FDS_NameTagElementData *)0x0) {
    pFVar6 = FDS_ResourceColorTableRow::GetRef((longlong)pFVar4->ID_Color,true);
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.R];
    (__return_storage_ptr__->field0_0x0)._s_0.G =
         FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.G];
    bVar1 = (pFVar6->Color).field0_0x0._s_0.A;
    (__return_storage_ptr__->field0_0x0)._s_0.B =
         FLinearColor::sRGBToLinearTable[(pFVar6->Color).field0_0x0._s_0.B];
    (__return_storage_ptr__->field0_0x0)._s_0.A = (float)bVar1 * __real_3b808081;
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4672320816229121810>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataAsset\\DS_NameTagDataAsset.cpp"
                     ,0xee,"findData");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FLinearColor *)(*pcVar2)();
    return pFVar5;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  return __return_storage_ptr__;
}

// GetElementData @ 14b905990

FDS_NameTagElementData * __thiscall
FDS_NameTagData::GetElementData(FDS_NameTagData *this,EDS_NameTagElementType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_NameTagElementData *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ElementDataMap).field_0x8 != *(int *)&(this->ElementDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ElementDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ElementDataMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->ElementDataMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->ElementDataMap;
      do {
        if (*(EDS_NameTagElementType *)(lVar1 + (longlong)iVar2 * 0x18) == param_1) {
          pFVar3 = TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementData,0>_>
                   ::FindChecked(&this->ElementDataMap,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return &emptyElementData;
}

// GetStyleID @ 14b9092c0

int __thiscall FDS_NameTagData::GetStyleID(FDS_NameTagData *this,EDS_NameTagElementType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_NameTagElementData *pFVar4;
  
  pFVar4 = TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementData,0>_>
           ::Find(&this->ElementDataMap,param_1);
  if (pFVar4 != (FDS_NameTagElementData *)0x0) {
    return pFVar4->ID_Style;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4672320816229121821>,true,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\DataAsset\\DS_NameTagDataAsset.cpp"
                     ,0xe3,"findData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

