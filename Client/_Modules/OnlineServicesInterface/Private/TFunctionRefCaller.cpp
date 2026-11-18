// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// Call @ 14ec25700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Online::Errors::ErrorCode::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  pwVar3 = param_2->DataPtr;
  uVar4 = *(undefined8 *)&param_2->Size;
  piVar2 = *(int **)((longlong)param_1 + 8);
  iVar5 = *piVar2;
  if (2 < iVar5) {
    *piVar2 = *piVar2 + 1;
    return;
  }
  pwVar6 = pwVar3;
  if (pwVar3 != pwVar3 + (int)uVar4) {
    do {
      iVar5 = iswxdigit(*pwVar6);
      if (iVar5 == 0) goto LAB_14ec2576f;
      pwVar6 = pwVar6 + 1;
    } while (pwVar6 != pwVar3 + (int)uVar4);
    iVar5 = **(int **)((longlong)param_1 + 8);
  }
  puVar1 = (undefined8 *)(*(longlong *)param_1 + (longlong)iVar5 * 0x10);
  *puVar1 = pwVar3;
  puVar1[1] = uVar4;
LAB_14ec2576f:
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

