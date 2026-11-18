// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GetSerializationOptions @ 14220f200

bool __thiscall
FSoftObjectPathThreadContext::GetSerializationOptions
          (FSoftObjectPathThreadContext *this,FName *param_1,FName *param_2,
          ESoftObjectPathCollectType *param_3,ESoftObjectPathSerializeType *param_4,
          FArchive *param_5)

{
  ESoftObjectPathSerializeType EVar1;
  int iVar2;
  UObjectBaseUtility *this_00;
  void *pvVar3;
  code *pcVar4;
  ESoftObjectPathCollectType *pEVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint *puVar9;
  FTlsAutoCleanup *pFVar10;
  FLinkerLoad *pFVar11;
  FName FVar12;
  ESoftObjectPathCollectType EVar13;
  FName *pFVar14;
  FName FVar15;
  longlong lVar16;
  uint uVar17;
  ESoftObjectPathCollectType EVar18;
  ESoftObjectPathSerializeType EVar19;
  undefined1 local_res8 [8];
  FName *local_res10;
  FName *local_res18;
  ESoftObjectPathCollectType *local_res20;
  code *local_60;
  undefined1 *local_58;
  
  iVar2 = (this->OptionStack).ArrayNum;
  bVar6 = false;
  EVar13 = AlwaysCollect;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  EVar19 = AlwaysSerialize;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (0 < iVar2) {
    uVar17 = iVar2 - 1;
    if (-1 < (int)uVar17) {
      lVar16 = (longlong)(int)uVar17 * 0x14;
      EVar18 = EVar13;
      do {
        uVar8 = 0;
        if ((int)uVar17 < (this->OptionStack).ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar14 = (FName *)((this->OptionStack).AllocatorInstance.Data + lVar16);
        if ((*pFVar14 != (FName)0x0) && (FVar12 == (FName)0x0)) {
          FVar12 = *pFVar14;
        }
        if ((pFVar14[1] != (FName)0x0) && (FVar15 == (FName)0x0)) {
          FVar15 = pFVar14[1];
        }
        EVar13 = (ESoftObjectPathCollectType)pFVar14[2].ComparisonIndex.Value;
        if (EVar18 <= EVar13) {
          EVar13 = EVar18;
        }
        EVar1 = *(ESoftObjectPathSerializeType *)((longlong)&pFVar14[2].ComparisonIndex.Value + 1);
        if (EVar19 <= EVar1) {
          EVar1 = EVar19;
        }
        EVar19 = EVar1;
        lVar16 = lVar16 + -0x14;
        uVar17 = uVar17 - 1;
        EVar18 = EVar13;
      } while (-1 < (int)uVar17);
    }
    bVar6 = true;
  }
  pEVar5 = local_res20;
  puVar9 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_58 = local_res8;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar10 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar9);
  if (((pFVar10[0x2f] != (FTlsAutoCleanup)0x0) &&
      (this_00 = *(UObjectBaseUtility **)((longlong)pFVar10[0x2f] + 0x30),
      this_00 != (UObjectBaseUtility *)0x0)) &&
     (pFVar11 = UObjectBaseUtility::GetLinker(this_00), pFVar11 != (FLinkerLoad *)0x0)) {
    if (FVar12 == (FName)0x0) {
      FVar12 = FPackagePath::GetPackageFName(&pFVar11->PackagePath);
      FVar12 = *(FName *)FVar12;
    }
    if (param_5 == (FArchive *)0x0) {
      param_5 = (FArchive *)&pFVar11->_padding_;
    }
    bVar6 = true;
  }
  if (param_5 == (FArchive *)0x0) {
    if (!bVar6) {
      return false;
    }
  }
  else {
    pvVar3 = *(void **)&param_5->field_0x70;
    if ((pvVar3 != (void *)0x0) && (FVar15 == (FName)0x0)) {
      bVar6 = IsThisNotNull(pvVar3,"FField::GetFName");
      if (bVar6) {
        FVar15 = *(FName *)((longlong)pvVar3 + 0x20);
      }
      else {
        FVar15.ComparisonIndex.Value = 0;
        FVar15.Number = 0;
      }
    }
  }
  *local_res10 = FVar12;
  *local_res18 = FVar15;
  *pEVar5 = EVar13;
  *param_4 = EVar19;
  return true;
}

