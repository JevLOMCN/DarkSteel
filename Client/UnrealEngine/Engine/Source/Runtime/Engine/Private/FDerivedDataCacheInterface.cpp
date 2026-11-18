// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AppendSanitized @ 1481d3d60

void __cdecl
FDerivedDataCacheInterface::AppendSanitized(FString *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  wchar_t *pwVar8;
  
  do {
    pwVar2 = param_2->DataPtr;
    for (pwVar8 = pwVar2; pwVar8 != pwVar2 + (int)*(undefined8 *)&param_2->Size; pwVar8 = pwVar8 + 1
        ) {
      wVar1 = *pwVar8;
      uVar6 = 0;
      if (((ushort)wVar1 & 0xffffffc0) == 0x40) {
        uVar6 = 0x7fffffe87fffffe;
      }
      if (((uVar6 | -(ulonglong)((ushort)wVar1 < 0x40) & 0x3ff001000000000) >>
           ((ushort)wVar1 & 0x3f) & 1) == 0) break;
    }
    iVar7 = (int)((longlong)pwVar8 - (longlong)pwVar2 >> 1);
    ::FString::AppendChars(param_1,pwVar2,iVar7);
    iVar5 = param_2->Size - iVar7;
    param_2->DataPtr = pwVar2 + iVar7;
    param_2->Size = iVar5;
    if (iVar5 == 0) {
      return;
    }
    if ((iVar5 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pwVar2 = param_2->DataPtr;
    ::FString::AppendfImpl(param_1,L"$%x");
    param_2->Size = param_2->Size + -1;
    param_2->DataPtr = pwVar2 + 1;
  } while( true );
}

