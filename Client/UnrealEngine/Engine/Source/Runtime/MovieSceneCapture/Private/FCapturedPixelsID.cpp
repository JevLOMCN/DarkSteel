// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 2

// StaticStruct @ 146bd21b0

UScriptStruct * __cdecl FCapturedPixelsID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCapturedPixelsID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneCapture();
    Z_Registration_Info_UScriptStruct_FCapturedPixelsID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPixelsID,(UObject *)pUVar1,
                         L"CapturedPixelsID");
  }
  return Z_Registration_Info_UScriptStruct_FCapturedPixelsID.OuterSingleton;
}

// ToString @ 146be95f0

FString * __thiscall
FCapturedPixelsID::ToString(FCapturedPixelsID *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FName *this_00;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ForAnyElementType _Src;
  FCapturedPixelsID *pFVar7;
  bool bVar8;
  int iVar9;
  FString *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_f8;
  FString local_e8;
  FCapturedPixelsID *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  FCapturedPixelsID *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  puVar1 = &(this->Identifiers).field_0x10;
  local_b8 = 0;
  local_res18[0] = 0;
  local_f8.Data.ArrayNum = 0;
  bVar6 = true;
  bVar5 = false;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayMax = 0;
  iStack_d0 = 0;
  iVar9 = *(int *)&(this->Identifiers).field_0x28;
  uStack_cc = 1;
  iStack_bc = iStack_d0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->Identifiers).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uStack_cc = *puVar15;
    local_b8 = 0;
    iStack_d0 = 0;
    while (uStack_cc == 0) {
      lVar11 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      uStack_cc = 1;
      iStack_bc = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_146be96ae;
      uStack_cc = puVar15[lVar11 + 1];
    }
    uStack_cc = -uStack_cc & uStack_cc;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_bc = local_b8 + -1 + local_res20;
    if (iVar9 < iStack_bc) {
      iStack_bc = iVar9;
    }
  }
LAB_146be96ae:
  uVar12 = *(uint *)&(this->Identifiers).field_0x28;
  iStack_b4 = iStack_bc;
  iStack_b0 = *(int *)&(this->Identifiers).field_0x8 - *(int *)&(this->Identifiers).field_0x34;
  local_d8 = this;
  uVar16 = uVar12 & 0xffffffe0;
  uStack_c0 = 0xffffffff;
  local_c8 = puVar1;
  local_a8 = this;
  TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
  iVar13 = (int)uVar12 >> 5;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0.CurrentBitIndex = iStack_bc;
  TStack_a0.BaseBitIndex = local_b8;
  TStack_a0._28_4_ = iStack_bc;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  if ((((int)uVar12 < 0) || (iVar9 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar4)();
    return pFVar10;
  }
  uVar3 = *(uint *)&(this->Identifiers).field_0x28;
  if (uVar12 != uVar3) {
    puVar14 = *(undefined1 **)&(this->Identifiers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146be97c0;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar12) {
      uVar12 = uVar3;
    }
  }
LAB_146be97c0:
  while( true ) {
    pFVar7 = local_a8;
    if (*(int *)&(local_a8->Identifiers).field_0x8 - *(int *)&(local_a8->Identifiers).field_0x34 !=
        (int)uStack_80) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    iVar9 = local_f8.Data.ArrayNum;
    _Src.Data = local_f8.Data.AllocatorInstance.Data;
    if (((TStack_a0.CurrentBitIndex == uVar12) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar7 == this))
    break;
    this_00 = (FName *)(*(longlong *)&pFVar7->Identifiers +
                       (longlong)TStack_a0.CurrentBitIndex * 0x18);
    iVar9 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (0 < iVar9) {
      ::FString::AppendChars(&local_f8,L",",1);
    }
    pFVar10 = ::FName::ToString(this_00,&local_78);
    iVar13 = (pFVar10->Data).ArrayNum;
    iVar9 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(&local_f8,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar9);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (this_00[1] != (FName)0x0) {
      ::FString::AppendChars(&local_f8,L":",1);
      pFVar10 = ::FName::ToString(this_00 + 1,&local_68);
      iVar13 = (pFVar10->Data).ArrayNum;
      iVar9 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_f8,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar9);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  iVar13 = local_f8.Data.ArrayNum + -1;
  if (local_f8.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  if (iVar13 < 1) {
    pFVar10 = ::FString::FString(&local_58,L"<none>");
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = local_f8.Data.ArrayNum;
    if (local_f8.Data.ArrayNum == 0) {
      local_e8.Data.ArrayMax = 0;
      pFVar10 = &local_e8;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,local_f8.Data.ArrayNum,
                 &local_e8.Data.ArrayMax);
      memcpy(local_e8.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar9 * 2);
      pFVar10 = &local_e8;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar10->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  if ((bVar5) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

