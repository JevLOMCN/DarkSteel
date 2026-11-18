// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// InitFromDXIL @ 145a1ea10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FDXILLibrary::InitFromDXIL
          (FDXILLibrary *this,void *param_1,uint param_2,wchar_t **param_3,wchar_t **param_4,
          uint param_5)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  ForElementType<FString> FVar3;
  ForElementType<D3D12_EXPORT_DESC> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<FString> FVar9;
  ForElementType<D3D12_EXPORT_DESC> FVar10;
  uint uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong lVar15;
  
  if ((param_5 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumEntryNames != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x1ce,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_3 == (wchar_t **)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InEntryNames",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x1cf,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 == (wchar_t **)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExportNames",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x1d0,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TArray<FString,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&this->EntryNames,param_5,Default);
  TArray<FString,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&this->ExportNames,param_5,Default);
  iVar7 = (this->ExportDesc).ArrayNum;
  piVar1 = &(this->ExportDesc).ArrayNum;
  if (iVar7 < (int)param_5) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>_>
              (0x18,8,param_5 - iVar7,(ForElementType<D3D12_EXPORT_DESC> *)this,piVar1,
               &(this->ExportDesc).ArrayMax);
  }
  else {
    if ((int)param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_5);
    }
    if ((int)param_5 < iVar7) {
      uVar11 = iVar7 - param_5;
      if (((int)(uVar11 | param_5) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar11 != 0) {
        FVar4 = (this->ExportDesc).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<D3D12_EXPORT_DESC>)this;
        if (FVar4 != (ForElementType<D3D12_EXPORT_DESC>)0x0) {
          FVar10 = FVar4;
        }
        _Dst = (void *)((longlong)FVar10 + (longlong)(int)param_5 * 0x18);
        iVar7 = (*piVar1 - uVar11) - param_5;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar11 * 0x18),
                  (longlong)iVar7 * 0x18);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_EXPORT_DESC>_>
                  (0x18,8,(ForElementType<D3D12_EXPORT_DESC> *)this,*piVar1,
                   &(this->ExportDesc).ArrayMax);
      }
    }
  }
  uVar11 = 0;
  if (param_5 != 0) {
    lVar12 = (longlong)param_3 - (longlong)param_4;
    do {
      pwVar13 = *(wchar_t **)((longlong)param_4 + lVar12);
      uVar14 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->EntryNames).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->EntryNames).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FString>)&this->EntryNames;
      if (FVar3 != (ForElementType<FString>)0x0) {
        FVar9 = FVar3;
      }
      lVar15 = (longlong)(int)uVar11 * 0x10;
      ::FString::operator=((FString *)((longlong)FVar9 + lVar15),pwVar13);
      uVar8 = 0;
      if ((int)uVar11 < (this->ExportNames).ArrayNum) {
        uVar8 = uVar14;
      }
      pwVar13 = *param_4;
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->ExportNames).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FString>)&this->ExportNames;
      if (FVar3 != (ForElementType<FString>)0x0) {
        FVar9 = FVar3;
      }
      ::FString::operator=((FString *)((longlong)FVar9 + lVar15),pwVar13);
      uVar8 = 0;
      if ((int)uVar11 < (this->EntryNames).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->EntryNames).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FString>)&this->EntryNames;
      if (FVar3 != (ForElementType<FString>)0x0) {
        FVar9 = FVar3;
      }
      if (*(int *)((longlong)FVar9 + 8 + lVar15) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)((longlong)FVar9 + lVar15);
      }
      uVar8 = 0;
      if ((int)uVar11 < (this->ExportDesc).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->ExportDesc).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<D3D12_EXPORT_DESC>)this;
      if (FVar4 != (ForElementType<D3D12_EXPORT_DESC>)0x0) {
        FVar10 = FVar4;
      }
      lVar2 = (longlong)(int)uVar11 * 0x18;
      *(wchar_t **)(lVar2 + 8 + (longlong)FVar10) = pwVar13;
      uVar8 = 0;
      if ((int)uVar11 < (this->ExportDesc).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->ExportDesc).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<D3D12_EXPORT_DESC>)this;
      if (FVar4 != (ForElementType<D3D12_EXPORT_DESC>)0x0) {
        FVar10 = FVar4;
      }
      *(undefined4 *)(lVar2 + 0x10 + (longlong)FVar10) = 0;
      uVar8 = 0;
      if ((int)uVar11 < (this->ExportNames).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->ExportNames).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FString>)&this->ExportNames;
      if (FVar3 != (ForElementType<FString>)0x0) {
        FVar9 = FVar3;
      }
      if (*(int *)((longlong)FVar9 + 8 + lVar15) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)((longlong)FVar9 + lVar15);
      }
      uVar8 = 0;
      if ((int)uVar11 < (this->ExportDesc).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->ExportDesc).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<D3D12_EXPORT_DESC>)this;
      if (FVar4 != (ForElementType<D3D12_EXPORT_DESC>)0x0) {
        FVar10 = FVar4;
      }
      param_4 = param_4 + 1;
      uVar11 = uVar11 + 1;
      *(wchar_t **)(lVar2 + (longlong)FVar10) = pwVar13;
    } while (uVar11 < param_5);
  }
  (this->Desc).DXILLibrary.pShaderBytecode = param_1;
  (this->Desc).DXILLibrary.BytecodeLength = (ulonglong)param_2;
  (this->Desc).NumExports = (this->ExportDesc).ArrayNum;
  FVar4 = (this->ExportDesc).AllocatorInstance.SecondaryData;
  FVar10 = (ForElementType<D3D12_EXPORT_DESC>)this;
  if (FVar4 != (ForElementType<D3D12_EXPORT_DESC>)0x0) {
    FVar10 = FVar4;
  }
  (this->Desc).pExports = (D3D12_EXPORT_DESC *)FVar10;
  return;
}

